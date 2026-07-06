class BC_AK47T_Base : RifleBoltFree_Base
{
    override RecoilBase SpawnRecoilObject()
    {
        return new VSSRecoil(this);
    } 
     
    private void HideUnhideSelection(string selectionName, bool hide = false)
    {
        TStringArray selectionNames = new TStringArray;
        ConfigGetTextArray("simpleHiddenSelections",selectionNames);
        int selectionId = selectionNames.Find(selectionName);
        SetSimpleHiddenSelectionState(selectionId, hide);
    }

    override void EEInit()
    {
        super.EEInit();
		HideUnhideSelection("pistolgrip", 1);
    }

    override void EEItemAttached( EntityAI item, string slot_name )
    {
        super.EEItemAttached(item, slot_name);

		if (item.IsKindOf("BC_Pistolgrips"))
        {
            HideUnhideSelection("pistolgrip", 0);
        }
    }
    
    override void EEItemDetached(EntityAI item, string slot_name)
    {
        super.EEItemDetached(item,slot_name);

		if (item.IsKindOf("BC_Pistolgrips"))
        {
            HideUnhideSelection("pistolgrip", 1);
        }
    }	
};
class BC_AK47T_Black: BC_AK47T_Base {};