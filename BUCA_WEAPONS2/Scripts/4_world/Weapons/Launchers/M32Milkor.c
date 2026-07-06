class BC_M32Milkor_Base extends Rifle_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new M79Recoil(this);
	}
	
	override bool ShootsExplosiveAmmo()
	{
		return true;
	}
	override bool CanReceiveAttachment( EntityAI attachment, int slotId )
	{
		if ( slotId == InventorySlots.GetSlotIdFromString("weaponOpticsHunting") )
		{
			if ( this.FindAttachmentBySlotName("weaponOptics") == NULL )
			{
				return true;
			}
			return false;
		}
		if ( slotId == InventorySlots.GetSlotIdFromString("weaponOptics") )
		{
			if ( this.FindAttachmentBySlotName("weaponOpticsHunting") == NULL )
			{
				return true;
			}
			return false;
		}
		return true;
	}
	override bool CanDisplayAttachmentSlot( int slot_id )
	{
		string slot_name= InventorySlots.GetSlotName(slot_id);
		if ( slot_name == "weaponOptics" )
		{
            return ( this.FindAttachmentBySlotName("weaponOpticsHunting") == NULL );
		}
		if ( slot_name == "weaponOpticsHunting" )
		{
            return ( this.FindAttachmentBySlotName("weaponOpticsHunting") != NULL );
		}
		return true;
	}
   override void InitStateMachine(){
        
        ref WeaponStateBase C0,C1,L0,JF;
        m_fsm=new WeaponFSM();
        WeaponEventBase __M__=new WeaponEventMechanism;WeaponEventBase __T__=new WeaponEventTrigger;WeaponEventBase __TJ_=new WeaponEventTriggerToJam;WeaponEventBase __U__=new WeaponEventUnjam;WeaponEventBase __L__=new WeaponEventLoad1Bullet;WeaponEventBase _fin_=new WeaponEventHumanCommandActionFinished;WeaponEventBase _abt_=new WeaponEventHumanCommandActionAborted;WeaponEventBase _rto_=new WeaponEventReloadTimeout;WeaponEventBase _dto_=new WeaponEventDryFireTimeout;
        C1=new SKS_CLO_BU1(this,NULL,SKSAnimState.DEFAULT);C0=new SKS_CLO_BU0(this,NULL,SKSAnimState.DEFAULT);L0=new SKS_OPN_BU0(this,NULL,SKSAnimState.OPENED);JF=new SKS_JAM_BU1(this,NULL,SKSAnimState.JAMMED);
        WeaponChargingInnerMag Mech_C1=new WeaponChargingInnerMag(this,NULL,WeaponActions.MECHANISM,GetWeaponSpecificCommand(WeaponActions.MECHANISM,WeaponActionMechanismTypes.MECHANISM_CLOSED));
        WeaponChargingInnerMag Mech_C0=new WeaponChargingInnerMag(this,NULL,WeaponActions.MECHANISM,GetWeaponSpecificCommand(WeaponActions.MECHANISM,WeaponActionMechanismTypes.MECHANISM_CLOSED));
        WeaponChargingInnerMag Mech_L0=new WeaponChargingInnerMag(this,NULL,WeaponActions.MECHANISM,GetWeaponSpecificCommand(WeaponActions.MECHANISM,WeaponActionMechanismTypes.MECHANISM_OPENED));
        WeaponStateBase Trigger_JF=new WeaponDryFire(this,NULL,WeaponActions.FIRE,GetWeaponSpecificCommand(WeaponActions.FIRE,WeaponActionFireTypes.FIRE_DRY));
        WeaponStateBase Trigger_L0=new WeaponDryFire(this,NULL,WeaponActions.FIRE,GetWeaponSpecificCommand(WeaponActions.FIRE,WeaponActionFireTypes.FIRE_DRY));
        WeaponStateBase Trigger_C0=new WeaponDryFire(this,NULL,WeaponActions.FIRE,GetWeaponSpecificCommand(WeaponActions.FIRE,WeaponActionFireTypes.FIRE_DRY));
        WeaponStateBase Trigger_C1L=new WeaponFireLast(this,NULL,WeaponActions.FIRE,GetWeaponSpecificCommand(WeaponActions.FIRE,WeaponActionFireTypes.FIRE_LAST));
        WeaponStateBase Trigger_C1J=new WeaponFireToJam(this,NULL,WeaponActions.FIRE,WeaponActionFireTypes.FIRE_JAM);
        WeaponFireAndChamberFromInnerMagazine Trigger_C1=new WeaponFireAndChamberFromInnerMagazine(this,NULL,WeaponActions.FIRE,GetWeaponSpecificCommand(WeaponActions.FIRE,WeaponActionFireTypes.FIRE_NORMAL));
        LoopedChambering Chamber_L0=new LoopedChambering(this,NULL,WeaponActions.CHAMBERING,WeaponActionChamberingTypes.CHAMBERING_STARTLOOPABLE_OPENED,WeaponActionChamberingTypes.CHAMBERING_ENDLOOPABLE);
        LoopedChambering Chamber_C1=new LoopedChambering(this,NULL,WeaponActions.CHAMBERING,WeaponActionChamberingTypes.CHAMBERING_STARTLOOPABLE_CLOSED_KEEP,WeaponActionChamberingTypes.CHAMBERING_ENDLOOPABLE);
        LoopedChambering Chamber_C0=new LoopedChambering(this,NULL,WeaponActions.CHAMBERING,WeaponActionChamberingTypes.CHAMBERING_STARTLOOPABLE_CLOSED,WeaponActionChamberingTypes.CHAMBERING_ENDLOOPABLE);
        WeaponStateBase Unjam_JF=new WeaponUnjamming(this,NULL,WeaponActions.UNJAMMING,GetWeaponSpecificCommand(WeaponActions.UNJAMMING,WeaponActionUnjammingTypes.UNJAMMING_START));
        m_abilities.Insert(new AbilityRecord(WeaponActions.FIRE,GetWeaponSpecificCommand(WeaponActions.FIRE,WeaponActionFireTypes.FIRE_DRY)));
        m_abilities.Insert(new AbilityRecord(WeaponActions.FIRE,GetWeaponSpecificCommand(WeaponActions.FIRE,WeaponActionFireTypes.FIRE_LAST)));
        m_abilities.Insert(new AbilityRecord(WeaponActions.UNJAMMING,GetWeaponSpecificCommand(WeaponActions.UNJAMMING,WeaponActionUnjammingTypes.UNJAMMING_END)));
        m_abilities.Insert(new AbilityRecord(WeaponActions.RELOAD_CLIP,0));
        m_abilities.Insert(new AbilityRecord(WeaponActions.CHAMBERING,WeaponActionChamberingTypes.CHAMBERING_STARTLOOPABLE_CLOSED));
        m_abilities.Insert(new AbilityRecord(WeaponActions.MECHANISM,GetWeaponSpecificCommand(WeaponActions.MECHANISM,WeaponActionMechanismTypes.MECHANISM_OPENED)));
        m_abilities.Insert(new AbilityRecord(WeaponActions.CHAMBERING,WeaponActionChamberingTypes.CHAMBERING_ENDLOOPABLE));
        m_abilities.Insert(new AbilityRecord(WeaponActions.MECHANISM,GetWeaponSpecificCommand(WeaponActions.MECHANISM,WeaponActionMechanismTypes.MECHANISM_CLOSED)));
        m_abilities.Insert(new AbilityRecord(WeaponActions.FIRE,GetWeaponSpecificCommand(WeaponActions.FIRE,WeaponActionFireTypes.FIRE_JAM)));
        m_abilities.Insert(new AbilityRecord(WeaponActions.CHAMBERING,WeaponActionChamberingTypes.CHAMBERING_STARTLOOPABLE_OPENED));
        m_abilities.Insert(new AbilityRecord(WeaponActions.UNJAMMING,GetWeaponSpecificCommand(WeaponActions.UNJAMMING,WeaponActionUnjammingTypes.UNJAMMING_START)));
        m_abilities.Insert(new AbilityRecord(WeaponActions.FIRE,GetWeaponSpecificCommand(WeaponActions.FIRE,WeaponActionFireTypes.FIRE_NORMAL)));
        m_abilities.Insert(new AbilityRecord(WeaponActions.CHAMBERING,WeaponActionChamberingTypes.CHAMBERING_STARTLOOPABLE_CLOSED_KEEP));
        m_fsm.AddTransition(new WeaponTransition(C1,__TJ_,Trigger_C1J));m_fsm.AddTransition(new WeaponTransition(Trigger_C1J,_fin_,JF));m_fsm.AddTransition(new WeaponTransition(Trigger_C1J,_rto_,JF));m_fsm.AddTransition(new WeaponTransition(Trigger_C1J,_abt_,JF));
        m_fsm.AddTransition(new WeaponTransition(C1,__T__,Trigger_C1,NULL,new WeaponGuardHasAmmoInnerMagazine(this)));m_fsm.AddTransition(new WeaponTransition(Trigger_C1,_fin_,C1));m_fsm.AddTransition(new WeaponTransition(Trigger_C1,_rto_,C1));m_fsm.AddTransition(new WeaponTransition(Trigger_C1,_abt_,C1));
        m_fsm.AddTransition(new WeaponTransition(C0,__T__,Trigger_C0));m_fsm.AddTransition(new WeaponTransition(Trigger_C0,_fin_,C0));m_fsm.AddTransition(new WeaponTransition(Trigger_C0,_dto_,C0));m_fsm.AddTransition(new WeaponTransition(Trigger_C0,_abt_,C0));
        m_fsm.AddTransition(new WeaponTransition(L0,__T__,Trigger_L0));m_fsm.AddTransition(new WeaponTransition(Trigger_L0,_fin_,L0));m_fsm.AddTransition(new WeaponTransition(Trigger_L0,_dto_,L0));m_fsm.AddTransition(new WeaponTransition(Trigger_L0,_abt_,L0));
        m_fsm.AddTransition(new WeaponTransition(JF,__T__,Trigger_JF));m_fsm.AddTransition(new WeaponTransition(Trigger_JF,_fin_,JF));m_fsm.AddTransition(new WeaponTransition(Trigger_JF,_dto_,JF));m_fsm.AddTransition(new WeaponTransition(Trigger_JF,_abt_,JF));
        m_fsm.AddTransition(new WeaponTransition(C1,__T__,Trigger_C1L));m_fsm.AddTransition(new WeaponTransition(Trigger_C1L,_fin_,L0));m_fsm.AddTransition(new WeaponTransition(Trigger_C1L,_rto_,L0));m_fsm.AddTransition(new WeaponTransition(Trigger_C1L,_abt_,L0));
        m_fsm.AddTransition(new WeaponTransition(C0,__M__,Mech_C1));m_fsm.AddTransition(new WeaponTransition(C1,__M__,Mech_C1));
        m_fsm.AddTransition(new WeaponTransition(Mech_C1,_fin_,C0,NULL,new WeaponGuardCurrentChamberEmpty(this)));m_fsm.AddTransition(new WeaponTransition(Mech_C1,_fin_,C1));
        m_fsm.AddTransition(new WeaponTransition(Mech_C1,_abt_,C0,NULL,new WeaponGuardCurrentChamberEmpty(this)));m_fsm.AddTransition(new WeaponTransition(Mech_C1,_abt_,C1));
        m_fsm.AddTransition(new WeaponTransition(L0,__M__,Mech_L0));m_fsm.AddTransition(new WeaponTransition(Mech_L0,_fin_,C0,NULL,new WeaponGuardCurrentChamberEmpty(this)));m_fsm.AddTransition(new WeaponTransition(Mech_L0,_fin_,C0));
        Mech_L0.AddTransition(new WeaponTransition(Mech_L0.m_start,_abt_,L0));Mech_L0.AddTransition(new WeaponTransition(Mech_L0.m_onBE,_abt_,C0));Mech_L0.AddTransition(new WeaponTransition(Mech_L0.m_onBEFireOut,_abt_,C0));Mech_L0.AddTransition(new WeaponTransition(Mech_L0.m_hideB,_abt_,C0));Mech_L0.AddTransition(new WeaponTransition(Mech_L0.m_chamber,_abt_,C1));Mech_L0.AddTransition(new WeaponTransition(Mech_L0.m_onCK,_abt_,C0));
        m_fsm.AddTransition(new WeaponTransition(C0,__L__,Chamber_C0));m_fsm.AddTransition(new WeaponTransition(Chamber_C0,_fin_,C1));
        Chamber_C0.AddTransition(new WeaponTransition(Chamber_C0.m_start,_abt_,C0));Chamber_C0.AddTransition(new WeaponTransition(Chamber_C0.m_eject,_abt_,L0));Chamber_C0.AddTransition(new WeaponTransition(Chamber_C0.m_chamber,_abt_,C1));Chamber_C0.AddTransition(new WeaponTransition(Chamber_C0.m_w4sb2,_abt_,C1));Chamber_C0.AddTransition(new WeaponTransition(Chamber_C0.m_hideB,_abt_,C1));Chamber_C0.AddTransition(new WeaponTransition(Chamber_C0.m_endLoop,_abt_,C1));
        m_fsm.AddTransition(new WeaponTransition(C1,__L__,Chamber_C1,NULL,new GuardNot(new WeaponGuardInnerMagazineFullShareChamber(this))));m_fsm.AddTransition(new WeaponTransition(Chamber_C1,_fin_,C1));m_fsm.AddTransition(new WeaponTransition(Chamber_C1,_abt_,C1));
        m_fsm.AddTransition(new WeaponTransition(L0,__L__,Chamber_L0,NULL,new GuardNot(new WeaponGuardInnerMagazineFullShareChamber(this))));m_fsm.AddTransition(new WeaponTransition(Chamber_L0,_fin_,C1));m_fsm.AddTransition(new WeaponTransition(Chamber_L0,_abt_,L0,NULL,new WeaponGuardCurrentChamberEmpty(this)));m_fsm.AddTransition(new WeaponTransition(Chamber_L0,_abt_,C1));
        m_fsm.AddTransition(new WeaponTransition(JF,__U__,Unjam_JF));m_fsm.AddTransition(new WeaponTransition(Unjam_JF,_fin_,JF,NULL,new WeaponGuardJammed(this)));m_fsm.AddTransition(new WeaponTransition(Unjam_JF,_fin_,C0,NULL,new WeaponGuardCurrentChamberEmpty(this)));m_fsm.AddTransition(new WeaponTransition(Unjam_JF,_fin_,C1));m_fsm.AddTransition(new WeaponTransition(Unjam_JF,_abt_,JF,NULL,new WeaponGuardJammed(this)));m_fsm.AddTransition(new WeaponTransition(Unjam_JF,_abt_,C0,NULL,new WeaponGuardCurrentChamberEmpty(this)));m_fsm.AddTransition(new WeaponTransition(Unjam_JF,_abt_,C1));
        m_fsm.SetInitialState(C0);SelectionBulletHide();HideMagazine();m_fsm.Start();
    }
    override void SetActions(){super.SetActions();AddAction(FirearmActionLoadMultiBullet);AddAction(FirearmActionLoadMultiBulletQuick);RemoveAction(FirearmActionLoadBulletQuick);}

};

class BC_M32Milkor_Tan extends BC_M32Milkor_Base {};