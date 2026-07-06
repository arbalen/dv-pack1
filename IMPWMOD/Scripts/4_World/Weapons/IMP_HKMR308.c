class IMP_HKMR308_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new M4a1Recoil(this);
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

		if ( slot_name == "HandlesM4" )
        {
            HideUnhideSelection("HandlesM4", 0);
        }
	}
	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);

		if ( slot_name == "HandlesM4" )
        {
          HideUnhideSelection("HandlesM4", 1);
        }
	}
	
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "IMP_Flashlight_Steiner9021" );	
		inventory.CreateInInventory( "IMP_Supp_308_Black" );
		inventory.CreateInInventory( "ReflexOptic" );		
		inventory.CreateInInventory( "IMP_Grip_ZenitRK0" );
		inventory.CreateInInventory( "IMP_Bttstk_AR_Ar15StrikeIndustriesViper" );
		inventory.CreateInInventory( "IMP_PistolGrip_AR_AR15A2" );
		inventory.CreateInInventory( "Battery9V" );
		inventory.CreateInInventory( "Battery9V" );
		
		SpawnAttachedMagazine("IMP_Mag_HKMR308_20Rnd");
	}
};
class IMP_HKMR308_Black extends IMP_HKMR308_Base {};