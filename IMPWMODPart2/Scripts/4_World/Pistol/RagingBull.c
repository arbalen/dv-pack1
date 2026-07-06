// Константы поворота цилиндра (копируем из оригинального Magnum)
const float RAGINGBULL_ROTATION_POSITION_M1 = -0.167;
const float RAGINGBULL_ROTATION_POSITION_0 = 0.0;
const float RAGINGBULL_ROTATION_POSITION_1 = 0.167;
const float RAGINGBULL_ROTATION_POSITION_2 = 0.334;
const float RAGINGBULL_ROTATION_POSITION_3 = 0.500;
const float RAGINGBULL_ROTATION_POSITION_4 = 0.668;
const float RAGINGBULL_ROTATION_POSITION_5 = 0.835;
const float RAGINGBULL_ROTATION_POSITION_6 = 1.0;

enum RagingBullAnimState
{
	DEFAULT 			= 0, 	///< default weapon state
};

enum RagingBullStableStateID
{
	UNKNOWN				=  0,
	DEFAULT				=  1,
}

// ========================================
// Static State - копируем логику из Magnum_Static_State
// ========================================
class RagingBull_Static_State extends WeaponStableState
{
	bool init = false;
	override void OnEntry(WeaponEventBase e) 
	{		
		if (LogManager.IsWeaponLogEnable()) 
			wpnPrint("[wpnstate] { RagingBull stable state"); 
		
		super.OnEntry(e);
		
		if (init)
		{
			IMP_RagingBull_MagnumBased magnum;
			if (Class.CastTo(magnum, m_weapon))
			{
				magnum.SyncCylinderRotation();
				// НЕ вызываем кастомный ForceSyncSelectionState - используем базовый
			}
		}
		init = true;
	}
	
	override void OnExit (WeaponEventBase e) 
	{ 
		super.OnExit(e); 
		if (LogManager.IsWeaponLogEnable()) 
			wpnPrint("[wpnstate] }  RagingBull stable state"); 
	}
	
	override int GetCurrentStateID () { return RagingBullStableStateID.DEFAULT; }
	override bool HasBullet() { return m_weapon.IsChamberFull(m_weapon.GetCurrentMuzzle()); }
	override bool HasMagazine() { return false; }
	override bool IsJammed() { return m_weapon.IsJammed(); }
	override bool IsSingleState() { return true; }
};

// ========================================
// Main Weapon Class - наследуемся от Magnum_Base
// ========================================
class IMP_RagingBull_MagnumBased extends Magnum_Base
{
	// Переопределяем константы слотов для наших деталей
	const string ATT_SLOT_CYLINDER_RAGINGBULL = "RevolverCylinderIMPRagingBull";
	const string ATT_SLOT_EJECTOR_RAGINGBULL = "RevolverEjectorIMPRagingBull";
	
	override void SetActions()
	{
		super.SetActions();
		// Дополнительные действия если нужны
	}
	
	override RecoilBase SpawnRecoilObject()
	{
		return new MagnumRecoil(this);
	}
	
	void IMP_RagingBull_MagnumBased()
	{
		// Инициализация если нужна
	}
	
	override void InitStateMachine()
	{
		// Копируем abilities из Magnum_Base
		m_abilities.Insert(new AbilityRecord(WeaponActions.CHAMBERING, WeaponActionChamberingTypes.CHAMBERING_STARTLOOPABLE_CLOSED));
		m_abilities.Insert(new AbilityRecord(WeaponActions.CHAMBERING, WeaponActionChamberingTypes.CHAMBERING_STARTLOOPABLE_CLOSED_KEEP));
		m_abilities.Insert(new AbilityRecord(WeaponActions.CHAMBERING, WeaponActionChamberingTypes.CHAMBERING_ENDLOOPABLE));
		m_abilities.Insert(new AbilityRecord(WeaponActions.MECHANISM, WeaponActionMechanismTypes.MECHANISM_CLOSED));
		m_abilities.Insert(new AbilityRecord(WeaponActions.MECHANISM, WeaponActionMechanismTypes.MECHANISM_SPECIAL));
		m_abilities.Insert(new AbilityRecord(WeaponActions.FIRE, WeaponActionFireTypes.FIRE_NORMAL));
		m_abilities.Insert(new AbilityRecord(WeaponActions.FIRE, WeaponActionFireTypes.FIRE_COCKED));
		m_abilities.Insert(new AbilityRecord(WeaponActions.FIRE, WeaponActionFireTypes.FIRE_UNCOCKED));

		// Используем наш кастомный Static State
		C = new RagingBull_Static_State(this, NULL, RagingBullAnimState.DEFAULT);

		// Используем стандартные классы из Magnum (они работают правильно)
		WeaponMagnumChambering Chamber = new WeaponMagnumChambering(this, NULL, WeaponActions.CHAMBERING, WeaponActionChamberingTypes.CHAMBERING_STARTLOOPABLE_CLOSED_KEEP,WeaponActionChamberingTypes.CHAMBERING_ENDLOOPABLE);
		WeaponMagnumChambering Chamber_E = new WeaponMagnumChambering(this, NULL, WeaponActions.CHAMBERING, WeaponActionChamberingTypes.CHAMBERING_STARTLOOPABLE_CLOSED,WeaponActionChamberingTypes.CHAMBERING_ENDLOOPABLE);

		WeaponCharging Mech = new WeaponCharging(this, NULL, WeaponActions.MECHANISM, WeaponActionMechanismTypes.MECHANISM_CLOSED);
		
		WeaponStateBase	Trigger_normal = new WeaponFireMagnum(this, NULL, WeaponActions.FIRE, WeaponActionFireTypes.FIRE_NORMAL);
		WeaponStateBase	Trigger_dry = new WeaponFireMagnum(this, NULL, WeaponActions.FIRE, WeaponActionFireTypes.FIRE_COCKED);
		
		// События (копируем из Magnum)
		WeaponEventBase __L__ = new WeaponEventLoad1Bullet;
		WeaponEventBase _fin_ = new WeaponEventHumanCommandActionFinished;
		WeaponEventBase _abt_ = new WeaponEventHumanCommandActionAborted;
		WeaponEventBase __M__ = new WeaponEventMechanism;
		WeaponEventBase __T__ = new WeaponEventTrigger;
		
		WeaponEventBase _rto_ = new WeaponEventReloadTimeout;
		WeaponEventBase _dto_ = new WeaponEventDryFireTimeout;

		m_fsm = new WeaponFSM();

		// Переходы (копируем из Magnum)
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

		SetInitialState(C);
		SelectionBulletHide();
		SetCurrentMuzzle(0);
		m_fsm.Start();
	}
	
	// ========================================
	// Переопределяем методы для наших деталей
	// ========================================
	
	override void AssembleGun()
	{
		super.AssembleGun();
		
		// Создаем НАШИ детали вместо стандартных Magnum
		if (!FindAttachmentBySlotName(ATT_SLOT_EJECTOR_RAGINGBULL))
		{
			GetInventory().CreateAttachment("IMP_RagingBull_Ejector");
		}
		
		if (!FindAttachmentBySlotName(ATT_SLOT_CYLINDER_RAGINGBULL))
		{
			GetInventory().CreateAttachment("IMP_RagingBull_Cylinder");
		}

		// Используем базовый ForceSyncSelectionState (он работает правильно!)
		ForceSyncSelectionState();
		SyncCylinderRotation();
	}
	
	// Переопределяем GetCylinderRotation для наших констант
	static float GetCylinderRotation(int muzzleIndex)
	{
		switch (muzzleIndex)
		{
			case 0:
				return RAGINGBULL_ROTATION_POSITION_0;
			case 1:
				return RAGINGBULL_ROTATION_POSITION_5;
			case 2:
				return RAGINGBULL_ROTATION_POSITION_4;
			case 3:
				return RAGINGBULL_ROTATION_POSITION_3;
			case 4:
				return RAGINGBULL_ROTATION_POSITION_2;
			case 5:
				return RAGINGBULL_ROTATION_POSITION_1;
		}
		
		ErrorEx(string.Format("Invalid muzzle index: %1", muzzleIndex));
		return RAGINGBULL_ROTATION_POSITION_0;
	}
	
	// Переопределяем SetCylinderRotationAnimationPhase для наших деталей
	void SetCylinderRotationAnimationPhase(float rot, bool reset = false)
	{
		IMP_RagingBull_Cylinder cylinder = IMP_RagingBull_Cylinder.Cast(GetAttachmentByType(IMP_RagingBull_Cylinder));
		IMP_RagingBull_Ejector ejector = IMP_RagingBull_Ejector.Cast(GetAttachmentByType(IMP_RagingBull_Ejector));
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
				else if (rot == RAGINGBULL_ROTATION_POSITION_0)
				{
					cylinder.ResetAnimationPhase("Rotate_Cylinder", RAGINGBULL_ROTATION_POSITION_M1 );
					ejector.ResetAnimationPhase("Rotate_Ejector", RAGINGBULL_ROTATION_POSITION_M1 );
				}
				
				cylinder.SetAnimationPhase("Rotate_Cylinder", rot );
				ejector.SetAnimationPhase("Rotate_Ejector", rot );
			}
		}
	}
	
	// Переопределяем ShowBullet для наших деталей
	override void ShowBullet(int muzzleIndex)
	{
		super.ShowBullet(muzzleIndex);
		
		IMP_RagingBull_Cylinder cylinder = IMP_RagingBull_Cylinder.Cast(GetAttachmentByType(IMP_RagingBull_Cylinder));
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
	
	// Переопределяем HideBullet для наших деталей
	override void HideBullet(int muzzleIndex)
	{
		super.HideBullet(muzzleIndex);
		
		IMP_RagingBull_Cylinder cylinder = IMP_RagingBull_Cylinder.Cast(GetAttachmentByType(IMP_RagingBull_Cylinder));
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
	
	// Переопределяем OnFire для наших деталей
	override void OnFire(int muzzle_index)
	{
		super.OnFire(muzzle_index);
		
		IMP_RagingBull_Cylinder cylinder = IMP_RagingBull_Cylinder.Cast(GetAttachmentByType(IMP_RagingBull_Cylinder));
		if (cylinder)
		{
			string bullet_nose = "bullet_nose";
			if (muzzle_index > 0)
				bullet_nose = string.Format("bullet_nose_%1", muzzle_index + 1);
			cylinder.HideSelection(bullet_nose);
		}
	}
	
	//Debug menu Spawn Ground Special
	override void OnDebugSpawn()
	{
		super.OnDebugSpawn();
		
		EntityAI entity;
		if ( Class.CastTo(entity, this) )
		{
			entity.SpawnEntityOnGroundPos("Ammo_357", entity.GetPosition());
		}
	}
};

// ========================================
// Финальные классы
// ========================================
class IMP_RagingBull_MagnumBased_Final extends IMP_RagingBull_MagnumBased {};
class IMP_RagingBull_Cylinder extends Magnum_Cylinder {};
class IMP_RagingBull_Ejector extends Magnum_Ejector {};
