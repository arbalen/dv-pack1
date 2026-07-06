class IMP_RPK16_Base : RifleBoltFree_Base
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
};

class IMP_RPK16_Black : IMP_RPK16_Base 
{
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "IMP_Bttstk_RPK16_Black" );	
		inventory.CreateInInventory( "ReflexOptic" );
		inventory.CreateInInventory( "IMP_PistolGrip_AK_StrikeIndustries_Black" );		
		inventory.CreateInInventory( "IMP_Supp_762x39_Black" );
		inventory.CreateInInventory( "IMP_Grip_ZenitB25u" );
		inventory.CreateInInventory( "Battery9V" );
			
		SpawnAttachedMagazine("IMP_Mag_RPK16_Drum_90Rnd");
	}
};
class IMP_RPK16_Green : IMP_RPK16_Base 
{
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "IMP_Bttstk_RPK16_Green" );	
		inventory.CreateInInventory( "ReflexOptic" );
		inventory.CreateInInventory( "IMP_PistolGrip_AK_StrikeIndustries_Black" );		
		inventory.CreateInInventory( "IMP_Supp_762x39_Black" );
		inventory.CreateInInventory( "IMP_Grip_ZenitB25u" );
		inventory.CreateInInventory( "Battery9V" );
			
		SpawnAttachedMagazine("IMP_Mag_RPK16_Drum_90Rnd");
	}
};
class IMP_RPK16_Tan : IMP_RPK16_Base 
{
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "IMP_Bttstk_RPK16_Tan" );	
		inventory.CreateInInventory( "ReflexOptic" );
		inventory.CreateInInventory( "IMP_PistolGrip_AK_StrikeIndustries_Black" );		
		inventory.CreateInInventory( "IMP_Supp_762x39_Black" );
		inventory.CreateInInventory( "IMP_Grip_ZenitB25u" );
		inventory.CreateInInventory( "Battery9V" );
			
		SpawnAttachedMagazine("IMP_Mag_RPK16_Drum_90Rnd");
	}
};