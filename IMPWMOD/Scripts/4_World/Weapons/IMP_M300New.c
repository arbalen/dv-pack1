class IMP_M300New_Base: BoltActionRifle_ExternalMagazine_Base
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

		inventory.CreateInInventory( "IMP_Supp_408_Black" );	
		inventory.CreateInInventory( "HuntingOptic" );
		inventory.CreateInInventory( "Atlas_Bipod" );		
		inventory.CreateInInventory( "IMP_Grip_ZenitRK0" );	
		
		SpawnAttachedMagazine("IMP_Mag_M300New_5Rnd");
	}
};
class IMP_M300New extends IMP_M300New_Base {};