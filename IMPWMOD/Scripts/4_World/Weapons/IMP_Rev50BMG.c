// Константы поворота цилиндра
const float REV50BMG_V2_ROTATION_POSITION_M1 = -0.167;
const float REV50BMG_V2_ROTATION_POSITION_0 = 0.0;
const float REV50BMG_V2_ROTATION_POSITION_1 = 0.167;
const float REV50BMG_V2_ROTATION_POSITION_2 = 0.334;
const float REV50BMG_V2_ROTATION_POSITION_3 = 0.500;
const float REV50BMG_V2_ROTATION_POSITION_4 = 0.668;
const float REV50BMG_V2_ROTATION_POSITION_5 = 0.835;
const float REV50BMG_V2_ROTATION_POSITION_6 = 1.0;

enum Rev50BMG_V2_AnimState
{
	DEFAULT 			= 0, 	///< default weapon state
};

enum Rev50BMG_V2_StableStateID
{
	UNKNOWN				=  0,
	DEFAULT				=  1,
}

// ========================================
// Static State - точная копия из Magnum_Static_State
// ========================================
class Rev50BMG_V2_Static_State extends WeaponStableState
{
	bool init = false;
	override void OnEntry(WeaponEventBase e) 
	{		
		if (LogManager.IsWeaponLogEnable()) 
			wpnPrint("[wpnstate] { Rev50BMG_V2 stable state"); 
		
		super.OnEntry(e);
		
		if (init)
		{
			IMP_Rev50BMG_MagnumBased_v2 magnum;
			if (Class.CastTo(magnum, m_weapon))
			{
				magnum.SyncCylinderRotation();
				// Используем только базовые методы синхронизации
			}
		}
		init = true;
	}
	
	override void OnExit (WeaponEventBase e) 
	{ 
		super.OnExit(e); 
		if (LogManager.IsWeaponLogEnable()) 
			wpnPrint("[wpnstate] }  Rev50BMG_V2 stable state"); 
	}
	
	override int GetCurrentStateID () { return Rev50BMG_V2_StableStateID.DEFAULT; }
	override bool HasBullet() { return m_weapon.IsChamberFull(m_weapon.GetCurrentMuzzle()); }
	override bool HasMagazine() { return false; }
	override bool IsJammed() { return m_weapon.IsJammed(); }
	override bool IsSingleState() { return true; }
};

// ========================================
// Main Weapon Class - максимально близко к Magnum_Base
// ========================================
class IMP_Rev50BMG_MagnumBased_v2 extends Magnum_Base
{
	// Переопределяем только слоты для наших деталей
	const string ATT_SLOT_CYLINDER_REV50BMG_V2 = "RevolverCylinder50BMG_V2";
	const string ATT_SLOT_EJECTOR_REV50BMG_V2 = "RevolverEjector50BMG_V2";
	
	override void SetActions()
	{
		// Используем точно те же действия что и Magnum
		AddAction(FirearmActionLoadMultiBulletQuick);
		super.SetActions();
		AddAction(FirearmActionLoadMultiBullet);
	}
	
	override RecoilBase SpawnRecoilObject()
	{
		return new MagnumRecoil(this);
	}
	
	void IMP_Rev50BMG_MagnumBased_v2()
	{
		// Минимальная инициализация
	}
	
	override void InitStateMachine()
	{
		// ТОЧНАЯ копия из Magnum_Base
		m_abilities.Insert(new AbilityRecord(WeaponActions.CHAMBERING, WeaponActionChamberingTypes.CHAMBERING_STARTLOOPABLE_CLOSED));
		m_abilities.Insert(new AbilityRecord(WeaponActions.CHAMBERING, WeaponActionChamberingTypes.CHAMBERING_STARTLOOPABLE_CLOSED_KEEP));
		m_abilities.Insert(new AbilityRecord(WeaponActions.CHAMBERING, WeaponActionChamberingTypes.CHAMBERING_ENDLOOPABLE));
		m_abilities.Insert(new AbilityRecord(WeaponActions.MECHANISM, WeaponActionMechanismTypes.MECHANISM_CLOSED));
		m_abilities.Insert(new AbilityRecord(WeaponActions.MECHANISM, WeaponActionMechanismTypes.MECHANISM_SPECIAL));
		m_abilities.Insert(new AbilityRecord(WeaponActions.FIRE, WeaponActionFireTypes.FIRE_NORMAL));
		m_abilities.Insert(new AbilityRecord(WeaponActions.FIRE, WeaponActionFireTypes.FIRE_COCKED));
		m_abilities.Insert(new AbilityRecord(WeaponActions.FIRE, WeaponActionFireTypes.FIRE_UNCOCKED));

		// Используем наш кастомный Static State
		C = new Rev50BMG_V2_Static_State(this, NULL, Rev50BMG_V2_AnimState.DEFAULT);

		// ТОЧНО те же классы что и в Magnum_Base
		WeaponMagnumChambering Chamber = new WeaponMagnumChambering(this, NULL, WeaponActions.CHAMBERING, WeaponActionChamberingTypes.CHAMBERING_STARTLOOPABLE_CLOSED_KEEP,WeaponActionChamberingTypes.CHAMBERING_ENDLOOPABLE);
		WeaponMagnumChambering Chamber_E = new WeaponMagnumChambering(this, NULL, WeaponActions.CHAMBERING, WeaponActionChamberingTypes.CHAMBERING_STARTLOOPABLE_CLOSED,WeaponActionChamberingTypes.CHAMBERING_ENDLOOPABLE);

		WeaponCharging Mech = new WeaponCharging(this, NULL, WeaponActions.MECHANISM, WeaponActionMechanismTypes.MECHANISM_CLOSED);
		
		WeaponStateBase	Trigger_normal = new WeaponFireMagnum(this, NULL, WeaponActions.FIRE, WeaponActionFireTypes.FIRE_NORMAL);
		WeaponStateBase	Trigger_dry = new WeaponFireMagnum(this, NULL, WeaponActions.FIRE, WeaponActionFireTypes.FIRE_COCKED);
		
		// ТОЧНО те же события что и в Magnum_Base
		WeaponEventBase __L__ = new WeaponEventLoad1Bullet;
		WeaponEventBase _fin_ = new WeaponEventHumanCommandActionFinished;
		WeaponEventBase _abt_ = new WeaponEventHumanCommandActionAborted;
		WeaponEventBase __M__ = new WeaponEventMechanism;
		WeaponEventBase __T__ = new WeaponEventTrigger;
		
		WeaponEventBase _rto_ = new WeaponEventReloadTimeout;
		WeaponEventBase _dto_ = new WeaponEventDryFireTimeout;

		m_fsm = new WeaponFSM();

		// ТОЧНО те же переходы что и в Magnum_Base
		m_fsm.AddTransition(new WeaponTransition( C,				__L__,	Chamber, null, new WeaponGuardAnyChamberFiredOut(this)));
		m_fsm.AddTransition(new WeaponTransition(  Chamber,	_fin_,	C));
		m_fsm.AddTransition(new WeaponTransition(  Chamber,	_abt_,	C));

		m_fsm.AddTransition(new WeaponTransition( C,				__L__,	Chamber_E));
		m_fsm.AddTransition(new WeaponTransition(  Chamber_E,	_fin_,	C));
		m_fsm.AddTransition(new WeaponTransition(  Chamber_E,	_abt_,	C));

		m_fsm.AddTransition(new WeaponTransition( C,				__M__,	Mech));
		m_fsm.AddTransition(new WeaponTransition(  Mech,		_fin_,	C));
		m_fsm.AddTransition(new WeaponTransition(  Mech,		_abt_,	C));

		m_fsm.AddTransition(new WeaponTransition( C,				__T__,	Trigger_normal, null, new GuardAnd (new WeaponGuardCurrentChamberFull(this), new GuardNot(new WeaponGuardCurrentChamberFiredOut(this))) ));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_normal,	_fin_,	C));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_normal, 	_dto_,	C));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_normal, 	_abt_,	C));
		
		m_fsm.AddTransition(new WeaponTransition( C,				__T__,	Trigger_dry));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_dry,	_fin_,	C));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_dry, 	_dto_,	C));
		m_fsm.AddTransition(new WeaponTransition(  Trigger_dry, 	_abt_,	C));

		// ТОЧНО та же инициализация что и в Magnum_Base
		SetInitialState(C);
		SelectionBulletHide();
		SetCurrentMuzzle(0);
		m_fsm.Start();
	}
	
	// ========================================
	// Переопределяем ТОЛЬКО методы для работы с нашими деталями
	// ========================================
	
	override void AssembleGun()
	{
		// Вызываем базовый метод (он делает super.AssembleGun())
		super.AssembleGun();
		
		// Создаем НАШИ детали вместо стандартных Magnum
		if (!FindAttachmentBySlotName(ATT_SLOT_EJECTOR_REV50BMG_V2))
		{
			GetInventory().CreateAttachment("IMP_RevolverEjector50BMG_V2");
		}
		
		if (!FindAttachmentBySlotName(ATT_SLOT_CYLINDER_REV50BMG_V2))
		{
			GetInventory().CreateAttachment("IMP_RevolverCylinder50BMG_V2");
		}

		// ТОЧНО как в оригинальном Magnum - вызываем сразу, без CallLater
		ForceSyncSelectionState();
		SyncCylinderRotation();
	}
	
	// Переопределяем GetCylinderRotation для наших констант
	static float GetCylinderRotation(int muzzleIndex)
	{
		switch (muzzleIndex)
		{
			case 0:
				return REV50BMG_V2_ROTATION_POSITION_0;
			case 1:
				return REV50BMG_V2_ROTATION_POSITION_5;
			case 2:
				return REV50BMG_V2_ROTATION_POSITION_4;
			case 3:
				return REV50BMG_V2_ROTATION_POSITION_3;
			case 4:
				return REV50BMG_V2_ROTATION_POSITION_2;
			case 5:
				return REV50BMG_V2_ROTATION_POSITION_1;
		}
		
		ErrorEx(string.Format("Invalid muzzle index: %1", muzzleIndex));
		return REV50BMG_V2_ROTATION_POSITION_0;
	}
	
	// Переопределяем SetCylinderRotationAnimationPhase для наших деталей
	void SetCylinderRotationAnimationPhase(float rot, bool reset = false)
	{
		IMP_RevolverCylinder50BMG_V2 cylinder = IMP_RevolverCylinder50BMG_V2.Cast(GetAttachmentByType(IMP_RevolverCylinder50BMG_V2));
		IMP_RevolverEjector50BMG_V2 ejector = IMP_RevolverEjector50BMG_V2.Cast(GetAttachmentByType(IMP_RevolverEjector50BMG_V2));
		if (cylinder && ejector)
		{
			float anim_phase = cylinder.GetAnimationPhase("Rotate_Cylinder");
			if ( Math.AbsFloat(anim_phase - rot) > 0.1 )
			{
				if (reset)
				{
					cylinder.ResetAnimationPhase("Rotate_Cylinder", rot );
					ejector.ResetAnimationPhase("Rotate_Ejector", rot );				
				}				
				else if (rot == REV50BMG_V2_ROTATION_POSITION_0)
				{
					cylinder.ResetAnimationPhase("Rotate_Cylinder", REV50BMG_V2_ROTATION_POSITION_M1 );
					ejector.ResetAnimationPhase("Rotate_Ejector", REV50BMG_V2_ROTATION_POSITION_M1 );
				}
				
				cylinder.SetAnimationPhase("Rotate_Cylinder", rot );
				ejector.SetAnimationPhase("Rotate_Ejector", rot );
			}
		}
	}
	
	// Переопределяем ShowBullet для наших деталей - ТОЧНО как в Magnum
	override void ShowBullet(int muzzleIndex)
	{
		super.ShowBullet(muzzleIndex);
		
		IMP_RevolverCylinder50BMG_V2 cylinder = IMP_RevolverCylinder50BMG_V2.Cast(GetAttachmentByType(IMP_RevolverCylinder50BMG_V2));
		if (cylinder)
		{		
			string bullet = "bullet";
			if (muzzleIndex > 0)
				bullet = string.Format("bullet_%1", muzzleIndex + 1);
			
			cylinder.ShowSelection(bullet);
			
			if (!IsChamberFiredOut(muzzleIndex))
			{
				string bullet_nose = "bullet_nose";
				if (muzzleIndex > 0)
					bullet_nose = string.Format("bullet_nose_%1", muzzleIndex + 1);
				cylinder.ShowSelection(bullet_nose);
			}
		}
	}
	
	// Переопределяем HideBullet для наших деталей - ТОЧНО как в Magnum
	override void HideBullet(int muzzleIndex)
	{
		super.HideBullet(muzzleIndex);
		
		IMP_RevolverCylinder50BMG_V2 cylinder = IMP_RevolverCylinder50BMG_V2.Cast(GetAttachmentByType(IMP_RevolverCylinder50BMG_V2));
		if (cylinder)
		{		
			string bullet = "bullet";
			if (muzzleIndex > 0)
				bullet = string.Format("bullet_%1", muzzleIndex + 1);
			
			cylinder.HideSelection(bullet);
			
			string bullet_nose = "bullet_nose";
			if (muzzleIndex > 0)
				bullet_nose = string.Format("bullet_nose_%1", muzzleIndex + 1);
			cylinder.HideSelection(bullet_nose);
		}
	}
	
	// Переопределяем OnFire для наших деталей - ТОЧНО как в Magnum
	override void OnFire(int muzzle_index)
	{
		super.OnFire(muzzle_index);
		
		IMP_RevolverCylinder50BMG_V2 cylinder = IMP_RevolverCylinder50BMG_V2.Cast(GetAttachmentByType(IMP_RevolverCylinder50BMG_V2));
		if (cylinder)
		{
			string bullet_nose = "bullet_nose";
			if (muzzle_index > 0)
				bullet_nose = string.Format("bullet_nose_%1", muzzle_index + 1);
			cylinder.HideSelection(bullet_nose);
		}
	}
	
	// Переопределяем CanChamberBullet - ТОЧНО как в Magnum_Base
	override bool CanChamberBullet(int muzzleIndex, Magazine mag)
	{
		if ( CanChamberFromMag(muzzleIndex, mag) )
		{
			if (IsChamberEmpty(muzzleIndex))
				return true;
				
			if (IsChamberFiredOut(muzzleIndex))
				return true;
		}
		return false;
	}
	
	// Переопределяем EEHealthLevelChanged - ТОЧНО как в Magnum_Base
	override void EEHealthLevelChanged(int oldLevel, int newLevel, string zone)
	{
		super.EEHealthLevelChanged(oldLevel,newLevel,zone);
		
		if (GetGame().IsClient())
			return;
		
		SetAttachmentsHealth();
	}
	
	// Метод для установки здоровья аттачментов - ТОЧНО как в Magnum_Base
	void SetAttachmentsHealth()
	{
		EntityAI entity;
		ItemBase attachment;
		for (int i = 0; i < GetInventory().AttachmentCount(); i++)
		{
			entity = GetInventory().GetAttachmentFromIndex(i);
			if ( Class.CastTo(attachment,entity) )
			{
				attachment.SetHealth01("","Health",GetHealth01());
			}
		}
	}
	
	// Переопределяем IsShowingChamberedBullet - ТОЧНО как в Magnum_Base
	override bool IsShowingChamberedBullet()
	{
		return false;
	}
	
	// Переопределяем CanEjectBullet - ТОЧНО как в Magnum_Base
	override bool CanEjectBullet() 
	{
		for (int i = 0; i < GetMuzzleCount(); i++)
		{
			if (IsChamberFull(i))
				return true;
		}
		return false;
	}
	
	//Debug menu Spawn Ground Special
	override void OnDebugSpawn()
	{
		super.OnDebugSpawn();
		
		EntityAI entity;
		if ( Class.CastTo(entity, this) )
		{
			entity.SpawnEntityOnGroundPos("IMP_Ammo_127x99", entity.GetPosition());
		}
	}
};

// ========================================
// Финальные классы - наследуются от Magnum деталей
// ========================================
class IMP_Rev50BMG_MagnumBased_v2_Final extends IMP_Rev50BMG_MagnumBased_v2 {};
class IMP_RevolverCylinder50BMG_V2 extends Magnum_Cylinder {};
class IMP_RevolverEjector50BMG_V2 extends Magnum_Ejector {};
