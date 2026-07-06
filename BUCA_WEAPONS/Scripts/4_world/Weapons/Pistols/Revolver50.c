const int   REV50_CYLINDER_CAPACITY       = 3;

const float REV50_ROTATION_POSITION_M1    = -0.334;
const float REV50_ROTATION_POSITION_0     = 0.0;
const float REV50_ROTATION_POSITION_1     = 0.334;
const float REV50_ROTATION_POSITION_2     = 0.668;

enum Revolver50AnimState
{
	DEFAULT = 0,
};

enum Revolver50StableStateID
{
	UNKNOWN = 0,
	DEFAULT = 1,
}

class Revolver50_Static_State extends WeaponStableState
{
	override void OnEntry(WeaponEventBase e)
	{
		super.OnEntry(e);

		BC_Revolver50_Base gun;
		if (CastTo(gun, m_weapon))
		{
			gun.HideReloadHandBullet();
			gun.SyncCylinderRotation(false);
			gun.SyncCylinderBulletsFromChambers();
		}
	}

	override int GetCurrentStateID() { return Revolver50StableStateID.DEFAULT; }
	override bool HasBullet() { return m_weapon.IsChamberFull(m_weapon.GetCurrentMuzzle()); }
	override bool HasMagazine() { return false; }
	override bool IsJammed() { return m_weapon.IsJammed(); }
	override bool IsSingleState() { return true; }
}

class Revolver50_Chambering extends WeaponMagnumChambering
{
	override void OnEntry(WeaponEventBase e)
	{
		super.OnEntry(e);

		BC_Revolver50_Base gun;
		if (CastTo(gun, m_weapon))
		{
			gun.StartReloadPreview();
		}
	}

	override void OnExit(WeaponEventBase e)
	{
		super.OnExit(e);

		BC_Revolver50_Base gun;
		if (CastTo(gun, m_weapon))
		{
			gun.StopReloadPreview();
			gun.SyncCylinderRotation(false);
			gun.SyncCylinderBulletsFromChambers();
		}
	}

	override void OnAbort(WeaponEventBase e)
	{
		super.OnAbort(e);

		BC_Revolver50_Base gun;
		if (CastTo(gun, m_weapon))
		{
			gun.StopReloadPreview();
			gun.SyncCylinderRotation(false);
			gun.SyncCylinderBulletsFromChambers();
		}
	}
}

class BC_Revolver50_Base extends Weapon_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new MagnumRecoil(this);
	}

	ref WeaponStableState C;

	const string ATT_SLOT_CYLINDER = "Revolver50Cylinder";
	const string ATT_SLOT_EJECTOR  = "Revolver50Ejector";

	bool m_ReloadPreviewActive = false;
	int  m_LastPreviewIdx      = -999;

	override void SetActions()
	{
		AddAction(FirearmActionLoadMultiBulletQuick);
		super.SetActions();
		AddAction(FirearmActionLoadMultiBullet);
	}

	protected int GetVisualMuzzleCount()
	{
		int cnt = GetMuzzleCount();
		if (cnt > REV50_CYLINDER_CAPACITY)
			cnt = REV50_CYLINDER_CAPACITY;
		return cnt;
	}

	protected BC_Revolver50_Cylinder GetCylinder()
	{
		return BC_Revolver50_Cylinder.Cast(FindAttachmentBySlotName(ATT_SLOT_CYLINDER));
	}

	protected BC_Revolver50_Ejector GetEjector()
	{
		return BC_Revolver50_Ejector.Cast(FindAttachmentBySlotName(ATT_SLOT_EJECTOR));
	}

	void ShowReloadHandBullet()
	{
		ShowSelection("bullet");
	}

	void HideReloadHandBullet()
	{
		HideSelection("bullet");
	}

	override void AssembleGun()
	{
		super.AssembleGun();

		if (GetGame().IsServer())
		{
			if (!FindAttachmentBySlotName(ATT_SLOT_EJECTOR))
				GetInventory().CreateAttachment("BC_Revolver50_Ejector");
			if (!FindAttachmentBySlotName(ATT_SLOT_CYLINDER))
				GetInventory().CreateAttachment("BC_Revolver50_Cylinder");
		}

		ForceSyncSelectionState();

		HideReloadHandBullet();
		SyncCylinderRotation(true);
		SyncCylinderBulletsFromChambers();
	}

	static float GetCylinderRotation(int muzzleIndex)
	{
		switch (muzzleIndex)
		{
			case 0: return REV50_ROTATION_POSITION_0;
			case 1: return REV50_ROTATION_POSITION_2;
			case 2: return REV50_ROTATION_POSITION_1;
		}
		ErrorEx(string.Format("Invalid muzzle index: %1", muzzleIndex));
		return REV50_ROTATION_POSITION_0;
	}

	void SetCylinderRotationAnimationPhase(float rot, bool reset = false)
	{
		BC_Revolver50_Cylinder cylinder = GetCylinder();
		BC_Revolver50_Ejector  ejector  = GetEjector();
		if (!cylinder || !ejector) return;

		float anim_phase = cylinder.GetAnimationPhase("Rotate_Cylinder");

		if (Math.AbsFloat(anim_phase - rot) > 0.05)
		{
			if (reset)
			{
				cylinder.ResetAnimationPhase("Rotate_Cylinder", rot);
				ejector.ResetAnimationPhase("Rotate_Ejector", rot);
			}
			else
			{
				if (rot == REV50_ROTATION_POSITION_0 && anim_phase > (REV50_ROTATION_POSITION_2 - 0.05))
				{
					cylinder.ResetAnimationPhase("Rotate_Cylinder", REV50_ROTATION_POSITION_M1);
					ejector.ResetAnimationPhase("Rotate_Ejector", REV50_ROTATION_POSITION_M1);
				}
			}

			cylinder.SetAnimationPhase("Rotate_Cylinder", rot);
			ejector.SetAnimationPhase("Rotate_Ejector", rot);
		}
	}

	void SyncCylinderRotation(bool reset = false)
	{
		SetCylinderRotationAnimationPhase(GetCylinderRotation(GetCurrentMuzzle()), reset);
	}

	protected string BulletSel(int idx)
	{
		if (idx <= 0) return "bullet";
		return "bullet_" + (idx + 1);
	}

	protected string NoseSel(int idx)
	{
		if (idx <= 0) return "bullet_nose";
		return "bullet_nose_" + (idx + 1);
	}

	void SetCylinderBulletVisual(int idx, bool visible, bool showNose = true)
	{
		BC_Revolver50_Cylinder cylinder = GetCylinder();
		if (!cylinder) return;

		string b = BulletSel(idx);
		string n = NoseSel(idx);

		if (visible)
			cylinder.ShowSelection(b);
		else
			cylinder.HideSelection(b);

		if (visible && showNose)
			cylinder.ShowSelection(n);
		else
			cylinder.HideSelection(n);
	}

	void SyncCylinderBulletsFromChambers()
	{
		int cnt = GetVisualMuzzleCount();
		for (int i = 0; i < cnt; i++)
		{
			bool filled   = !IsChamberEmpty(i);
			bool showNose = false;

			if (filled && !IsChamberFiredOut(i))
				showNose = true;

			SetCylinderBulletVisual(i, filled, showNose);
		}
	}

	int FindNextLoadChamber()
	{
		int cnt   = GetVisualMuzzleCount();
		int start = GetCurrentMuzzle();

		for (int step = 0; step < cnt; step++)
		{
			int idx = start + step;
			if (idx >= cnt) idx = idx - cnt;

			if (IsChamberEmpty(idx) || IsChamberFiredOut(idx))
				return idx;
		}
		return -1;
	}

	void PreviewReloadTick()
	{
		if (!m_ReloadPreviewActive)
			return;

		int idx = FindNextLoadChamber();

		if (idx < 0)
		{
			HideReloadHandBullet();
			return;
		}

		ShowReloadHandBullet();

		if (idx != m_LastPreviewIdx)
		{
			m_LastPreviewIdx = idx;
			SetCylinderRotationAnimationPhase(GetCylinderRotation(idx), false);
			SetCylinderBulletVisual(idx, true, true);
		}
	}

	void StartReloadPreview()
	{
		if (m_ReloadPreviewActive)
			return;

		m_ReloadPreviewActive = true;
		m_LastPreviewIdx = -999;

		ShowReloadHandBullet();

		PreviewReloadTick();
		GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(this.PreviewReloadTick, 50, true);
	}

	void StopReloadPreview()
	{
		if (!m_ReloadPreviewActive)
			return;

		m_ReloadPreviewActive = false;
		m_LastPreviewIdx = -999;

		GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).Remove(this.PreviewReloadTick);
		HideReloadHandBullet();
	}

	override void ShowBullet(int muzzleIndex)
	{
		super.ShowBullet(muzzleIndex);

		bool showNose = true;
		if (IsChamberFiredOut(muzzleIndex))
			showNose = false;

		SetCylinderBulletVisual(muzzleIndex, true, showNose);
		SyncCylinderRotation(false);
	}

	override void HideBullet(int muzzleIndex)
	{
		super.HideBullet(muzzleIndex);

		SetCylinderBulletVisual(muzzleIndex, false, false);
		SyncCylinderRotation(false);
	}

	override void OnFire(int muzzle_index)
	{
		super.OnFire(muzzle_index);

		SetCylinderBulletVisual(muzzle_index, true, false);
	}

	override bool IsShowingChamberedBullet()
	{
		return false;
	}

	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();

		if (!m_ReloadPreviewActive)
			HideReloadHandBullet();

		SyncCylinderRotation(false);
		SyncCylinderBulletsFromChambers();
	}

	override void InitStateMachine()
	{
		m_abilities.Insert(new AbilityRecord(WeaponActions.CHAMBERING, WeaponActionChamberingTypes.CHAMBERING_STARTLOOPABLE_CLOSED));
		m_abilities.Insert(new AbilityRecord(WeaponActions.CHAMBERING, WeaponActionChamberingTypes.CHAMBERING_STARTLOOPABLE_CLOSED_KEEP));
		m_abilities.Insert(new AbilityRecord(WeaponActions.CHAMBERING, WeaponActionChamberingTypes.CHAMBERING_ENDLOOPABLE));
		m_abilities.Insert(new AbilityRecord(WeaponActions.MECHANISM, WeaponActionMechanismTypes.MECHANISM_CLOSED));
		m_abilities.Insert(new AbilityRecord(WeaponActions.MECHANISM, WeaponActionMechanismTypes.MECHANISM_SPECIAL));
		m_abilities.Insert(new AbilityRecord(WeaponActions.FIRE, WeaponActionFireTypes.FIRE_NORMAL));
		m_abilities.Insert(new AbilityRecord(WeaponActions.FIRE, WeaponActionFireTypes.FIRE_COCKED));
		m_abilities.Insert(new AbilityRecord(WeaponActions.FIRE, WeaponActionFireTypes.FIRE_UNCOCKED));

		C = new Revolver50_Static_State(this, NULL, Revolver50AnimState.DEFAULT);

		Revolver50_Chambering Chamber = new Revolver50_Chambering(this, NULL, WeaponActions.CHAMBERING,
			WeaponActionChamberingTypes.CHAMBERING_STARTLOOPABLE_CLOSED_KEEP, WeaponActionChamberingTypes.CHAMBERING_ENDLOOPABLE);

		Revolver50_Chambering Chamber_E = new Revolver50_Chambering(this, NULL, WeaponActions.CHAMBERING,
			WeaponActionChamberingTypes.CHAMBERING_STARTLOOPABLE_CLOSED, WeaponActionChamberingTypes.CHAMBERING_ENDLOOPABLE);

		WeaponCharging Mech = new WeaponCharging(this, NULL, WeaponActions.MECHANISM, WeaponActionMechanismTypes.MECHANISM_CLOSED);

		WeaponStateBase Trigger_normal = new WeaponFireMagnum(this, NULL, WeaponActions.FIRE, WeaponActionFireTypes.FIRE_NORMAL);
		WeaponStateBase Trigger_dry    = new WeaponFireMagnum(this, NULL, WeaponActions.FIRE, WeaponActionFireTypes.FIRE_COCKED);

		WeaponEventBase __L__ = new WeaponEventLoad1Bullet;
		WeaponEventBase _fin_ = new WeaponEventHumanCommandActionFinished;
		WeaponEventBase _abt_ = new WeaponEventHumanCommandActionAborted;
		WeaponEventBase __M__ = new WeaponEventMechanism;
		WeaponEventBase __T__ = new WeaponEventTrigger;
		WeaponEventBase _dto_ = new WeaponEventDryFireTimeout;

		m_fsm = new WeaponFSM();

		m_fsm.AddTransition(new WeaponTransition(C, __L__, Chamber, null, new WeaponGuardAnyChamberFiredOut(this)));
		m_fsm.AddTransition(new WeaponTransition(Chamber, _fin_, C));
		m_fsm.AddTransition(new WeaponTransition(Chamber, _abt_, C));

		m_fsm.AddTransition(new WeaponTransition(C, __L__, Chamber_E));
		m_fsm.AddTransition(new WeaponTransition(Chamber_E, _fin_, C));
		m_fsm.AddTransition(new WeaponTransition(Chamber_E, _abt_, C));

		m_fsm.AddTransition(new WeaponTransition(C, __M__, Mech));
		m_fsm.AddTransition(new WeaponTransition(Mech, _fin_, C));
		m_fsm.AddTransition(new WeaponTransition(Mech, _abt_, C));

		m_fsm.AddTransition(
			new WeaponTransition(
				C, __T__, Trigger_normal, null,
				new GuardAnd(
					new WeaponGuardCurrentChamberFull(this),
					new GuardNot(new WeaponGuardCurrentChamberFiredOut(this))
				)
			)
		);

		m_fsm.AddTransition(new WeaponTransition(Trigger_normal, _fin_, C));
		m_fsm.AddTransition(new WeaponTransition(Trigger_normal, _dto_, C));
		m_fsm.AddTransition(new WeaponTransition(Trigger_normal, _abt_, C));

		m_fsm.AddTransition(new WeaponTransition(C, __T__, Trigger_dry));
		m_fsm.AddTransition(new WeaponTransition(Trigger_dry, _fin_, C));
		m_fsm.AddTransition(new WeaponTransition(Trigger_dry, _dto_, C));
		m_fsm.AddTransition(new WeaponTransition(Trigger_dry, _abt_, C));

		SetInitialState(C);
		SelectionBulletHide();
		HideReloadHandBullet();

		SetCurrentMuzzle(0);
		m_fsm.Start();

		SyncCylinderRotation(true);
		SyncCylinderBulletsFromChambers();
	}

	override bool CanChamberBullet(int muzzleIndex, Magazine mag)
	{
		if (CanChamberFromMag(muzzleIndex, mag))
		{
			if (IsChamberEmpty(muzzleIndex))
				return true;
			if (IsChamberFiredOut(muzzleIndex))
				return true;
		}
		return false;
	}

	override bool CanEjectBullet()
	{
		int cnt = GetVisualMuzzleCount();
		for (int i = 0; i < cnt; i++)
		{
			if (IsChamberFull(i))
				return true;
		}
		return false;
	}
}

class BC_Revolver50 : BC_Revolver50_Base {};
class BC_Revolver50_Cylinder : DummyItem {};
class BC_Revolver50_Ejector  : DummyItem {};
