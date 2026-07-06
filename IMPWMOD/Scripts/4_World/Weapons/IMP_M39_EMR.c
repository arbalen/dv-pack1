class IMP_M39EMR_Base : RifleBoltFree_Base
{
	void IMP_M39EMR_Base()
	{	
		EntityAI ParentItem = this;		
		UnFoldIronsIMP(ParentItem);	
	}
	
	override RecoilBase SpawnRecoilObject()
	{
		return new AkmRecoil(this);
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

		inventory.CreateInInventory( "IMP_Supp_308_Black" );	
		inventory.CreateInInventory( "ReflexOptic" );
		inventory.CreateInInventory( "Battery9V" );	
		
		SpawnAttachedMagazine("IMP_Mag_M39EMR_20Rnd");
	}
};