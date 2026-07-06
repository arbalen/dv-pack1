class IMP_AACHoneyBadger_Base : RifleBoltFree_Base
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
	
		inventory.CreateInInventory( "IMP_PistolGrip_AR_AR15A2" );
		inventory.CreateInInventory( "ReflexOptic" );		
		inventory.CreateInInventory( "Battery9V" );	
		
		SpawnAttachedMagazine("IMP_Mag_HK_Polymer_30Rnd");
	}
};
class IMP_AACHoneyBadger_Tan extends IMP_AACHoneyBadger_Base {};
class IMP_AACHoneyBadger_Black extends IMP_AACHoneyBadger_Base {};
class IMP_AACHoneyBadger_Green extends IMP_AACHoneyBadger_Base {};
class IMP_AACHoneyBadger_Gray extends IMP_AACHoneyBadger_Base {};