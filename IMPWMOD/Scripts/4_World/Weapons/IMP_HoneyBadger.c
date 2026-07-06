class IMP_HoneyBadger_Base : RifleBoltFree_Base
{
	void IMP_HoneyBadger_Base()
	{	
		EntityAI ParentItem = this;		
		UnFoldIronsIMP(ParentItem);	
	}
	
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

		if (ItemOptics.Cast(item))
		{ 
			EntityAI ParentItem = this;
			FoldIronsIMP(ParentItem);
		}
		if ( slot_name == "HandlesM4" )
        {
            HideUnhideSelection("HandlesM4", 0);
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
		if ( slot_name == "HandlesM4" )
        {
          HideUnhideSelection("HandlesM4", 1);
        }
	}
	
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "ReflexOptic" );	
		inventory.CreateInInventory( "IMP_PistolGrip_AR_AR15A2" );		
		inventory.CreateInInventory( "Battery9V" );	
		
		SpawnAttachedMagazine("IMP_Mag_HB_30Rnd");
	}
};
class IMP_HoneyBadger extends IMP_HoneyBadger_Base {};