class IMP_AX338_Base: BoltActionRifle_ExternalMagazine_Base
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

		inventory.CreateInInventory( "IMP_Supp_338_Black" );	
		inventory.CreateInInventory( "HuntingOptic" );
		inventory.CreateInInventory( "Atlas_Bipod" );		
		
		SpawnAttachedMagazine("IMP_Mag_AX338_5Rnd");
	}
};
class IMP_AX338_Tan extends IMP_AX338_Base {};
class IMP_AX338_Black extends IMP_AX338_Base {};
class IMP_AX338_Gray extends IMP_AX338_Base {};
class IMP_AX338_Green extends IMP_AX338_Base {};