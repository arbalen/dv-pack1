class IMP_DVL10M2_Urbana_Base: BoltActionRifle_ExternalMagazine_Base
{	
	override RecoilBase SpawnRecoilObject()
	{
		return new CZ527Recoil(this);
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

		inventory.CreateInInventory( "IMP_Grip_ZenitRK0" );	
		inventory.CreateInInventory( "IMP_Supp_308_Black" );
		inventory.CreateInInventory( "IMP_PistolGrip_AR_AR15A2" );	
		inventory.CreateInInventory( "HuntingOptic" );
		
		SpawnAttachedMagazine("IMP_Mag_DVL10M2_10Rnd");
	}
};
class IMP_DVL10M2_Urbana extends IMP_DVL10M2_Urbana_Base {};
class IMP_DVL10M2_Urbana_Green extends IMP_DVL10M2_Urbana_Base {};