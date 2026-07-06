class IMP_ASH12_Base : RifleBoltFree_Base
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
			return new IMP_Automatic_BipodRecoil(this);
		}
		else return new FamasRecoil(this);
	}
	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionDeployBipodIMP);
		AddAction(ActionFoldBipodIMP);
	}
	void IMP_ASH12_Base()
	{	
		EntityAI ParentItem = this;		
		UnFoldIronsIMP(ParentItem);	
	}
	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);

		if (ItemOptics.Cast(item))
		{ 
			EntityAI ParentItem = this;
			FoldIronsIMP(ParentItem);
		}
	}
	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);

		if (ItemOptics.Cast(item))
		{ 
			EntityAI ParentItem = this;
			UnFoldIronsIMP(ParentItem);
		}
	}
	
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "ReflexOptic" );	
		inventory.CreateInInventory( "IMP_Flashlight_Steiner9021" );
		inventory.CreateInInventory( "IMP_Grip_ZenitRK0" );		
		inventory.CreateInInventory( "Atlas_Bipod" );
		inventory.CreateInInventory( "Battery9V" );	
		
		SpawnAttachedMagazine("IMP_Mag_ASH12_10Rnd");
	}
};

class IMP_ASH12 : IMP_ASH12_Base {};