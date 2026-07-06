class IMP_STM9_Base : RifleBoltFree_Base
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

		inventory.CreateInInventory( "IMP_Bttstk_AR_Ar15StrikeIndustriesViper" );	
		inventory.CreateInInventory( "IMP_PistolGrip_AR_AR15A2" );
		inventory.CreateInInventory( "IMP_Grip_ZenitRK0" );		
		inventory.CreateInInventory( "ReflexOptic" );
		inventory.CreateInInventory( "PistolSuppressor" );
		inventory.CreateInInventory( "Battery9V" );
			
		SpawnAttachedMagazine("IMP_Drum_Glock_50Rnd");
	}
};

class IMP_STM9 : IMP_STM9_Base {};