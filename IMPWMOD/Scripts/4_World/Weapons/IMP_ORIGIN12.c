class IMP_Origin12_Base : RifleBoltFree_Base

{
	void IMP_Origin12_Base()
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
	
	override RecoilBase SpawnRecoilObject()
	{
		return new FALRecoil(this);
	}
	
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "IMP_Flashlight_Steiner9021" );	
		inventory.CreateInInventory( "IMP_Grip_ZenitRK0" );
		inventory.CreateInInventory( "Atlas_Bipod" );		
		inventory.CreateInInventory( "Battery9V" );
			
		SpawnAttachedMagazine("Mag_Saiga_Drum20Rnd");
	}
};  
class IMP_Origin12 : IMP_Origin12_Base {};