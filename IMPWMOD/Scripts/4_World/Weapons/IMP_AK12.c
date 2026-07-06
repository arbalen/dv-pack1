class IMP_AK12_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new AkmRecoil(this);
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

		if ( slot_name == "HandlesAK" )
        {
            HideUnhideSelection("HandlesAK", 0);
        }
	}
	
	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);

		if ( slot_name == "HandlesAK" )
        {
          HideUnhideSelection("HandlesAK", 1);
        }
	}
	
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "IMP_Bttstk_AK_Tact2" );
		inventory.CreateInInventory( "IMP_PistolGrip_AK_StrikeIndustries_Black" );		
		inventory.CreateInInventory( "IMP_Supp_762x39_Black" );
		inventory.CreateInInventory( "IMP_Grip_ZenitRK0" );
		inventory.CreateInInventory( "ReflexOptic" );
		inventory.CreateInInventory( "Battery9V" );	
		
		SpawnAttachedMagazine("IMP_Mag_AK12_30Rnd");
	}
};
class IMP_AK12 extends IMP_AK12_Base {};