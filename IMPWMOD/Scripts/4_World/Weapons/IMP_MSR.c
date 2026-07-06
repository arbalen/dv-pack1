class IMP_RemingtonMSR_Base: BoltActionRifle_ExternalMagazine_Base
{	
	override RecoilBase SpawnRecoilObject()
	{
		if(GetGame().IsClient())
		{
			PlayerBase player =  GetGame().GetPlayer();
			bool m_Prone = player.IsPlayerInProneState();
		}

		if (m_BipodDeployed && m_Prone)
		{
			return new IMP_BoltAction_BipodRecoil(this);
		}
		else return new CZ527Recoil(this);
	}
	
	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionDeployBipodIMP);
		AddAction(ActionFoldBipodIMP);
	}
	
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "Atlas_Bipod" );	
		inventory.CreateInInventory( "IMP_Grip_ZenitRK0" );
		inventory.CreateInInventory( "HuntingOptic" );		
		inventory.CreateInInventory( "IMP_Supp_338_Black" );
		inventory.CreateInInventory( "IMP_Flashlight_Steiner9021" );
		inventory.CreateInInventory( "Battery9V" );
		
		SpawnAttachedMagazine("IMP_Mag_MSR_5Rnd");
	}
};
class IMP_RemingtonMSR_Blue extends IMP_RemingtonMSR_Base {};
class IMP_RemingtonMSR_Tan extends IMP_RemingtonMSR_Base {};
class IMP_RemingtonMSR_Grey extends IMP_RemingtonMSR_Base {};