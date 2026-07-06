class IMP_AK12New_Base : RifleBoltFree_Base
{
	void IMP_AK12New_Base()
	{	
		EntityAI ParentItem = this;		
		UnFoldIronsIMP(ParentItem);	
	}
	
	private void HideUnhideSelection(string selectionName, bool hide = false)
    {
        TStringArray selectionNames = new TStringArray;
        ConfigGetTextArray("simpleHiddenSelections",selectionNames);
        int selectionId = selectionNames.Find(selectionName);
        SetSimpleHiddenSelectionState(selectionId, hide);
    }
	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);

		if (ItemOptics.Cast(item))
		{ 
			EntityAI ParentItem = this;
			FoldIronsIMP(ParentItem);
		}
		if ( slot_name == "HandlesAK" )
        {
            HideUnhideSelection("HandlesAK", 0);
        }
		if (item.IsKindOf("IMP_Bttstk_AK_HexaArms"))
        {
            HideUnhideSelection("HandlesAK", 0);
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
		if ( slot_name == "HandlesAK" )
        {
          HideUnhideSelection("HandlesAK", 1);
        }
		if (item.IsKindOf("IMP_Bttstk_AK_HexaArms"))
        {
            HideUnhideSelection("HandlesAK", 1);
        }
	}
	
	override RecoilBase SpawnRecoilObject()
	{
		return new AkmRecoil(this);
	}
	
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "IMP_PistolGrip_AK_StrikeIndustries_Black" );		
		inventory.CreateInInventory( "IMP_Supp_762x39_Black" );
		inventory.CreateInInventory( "IMP_Grip_ZenitRK0" );
		inventory.CreateInInventory( "ReflexOptic" );
		inventory.CreateInInventory( "Battery9V" );	
		
		SpawnAttachedMagazine("IMP_Mag_AK12_30Rnd");
	}
};