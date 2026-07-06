class BC_MCXRAPTOR_Base : RifleBoltFree_Base
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
	override bool CanReceiveAttachment( EntityAI attachment, int slotId )
	{
		if ( slotId == InventorySlots.GetSlotIdFromString("weaponOpticsHunting") )
		{
			if ( this.FindAttachmentBySlotName("weaponOptics") == NULL )
			{
				return true;
			}
			return false;
		}
		if ( slotId == InventorySlots.GetSlotIdFromString("weaponOptics") )
		{
			if ( this.FindAttachmentBySlotName("weaponOpticsHunting") == NULL )
			{
				return true;
			}
			return false;
		}
		if ( slotId == InventorySlots.GetSlotIdFromString("BC_Foregrips") )
		{
			if ( this.FindAttachmentBySlotName("BC_Bipods") == NULL )
			{
				return true;
			}
			return false;
		}
		if ( slotId == InventorySlots.GetSlotIdFromString("BC_Bipods") )
		{
			if ( this.FindAttachmentBySlotName("BC_Foregrips") == NULL )
			{
				return true;
			}
			return false;
		}
		if ( slotId == InventorySlots.GetSlotIdFromString("weaponButtstockM4") )
        {
            if ( this.FindAttachmentBySlotName("BC_MCX_Buttstock") != NULL && this.FindAttachmentBySlotName("BC_MCX_Buttstock").ConfigGetBool("IsAdapter") )
            {
                return true;
            }
            return false;
        }
        return true;
	}
	override bool CanDisplayAttachmentSlot( int slot_id )
	{
		string slot_name= InventorySlots.GetSlotName(slot_id);
		if ( slot_name == "weaponOptics" )
		{
            return ( this.FindAttachmentBySlotName("weaponOpticsHunting") == NULL );
		}
		if ( slot_name == "weaponOpticsHunting" )
		{
            return ( this.FindAttachmentBySlotName("weaponOpticsHunting") != NULL );
		}
    
        if (slot_name == "BC_Bipods")
        {
            return (this.FindAttachmentBySlotName("BC_ForeGrips") == NULL);
        }

        if (slot_name == "BC_ForeGrips")
        {
            return (this.FindAttachmentBySlotName("BC_Bipods") == NULL);
        }
		if ( slot_name == "weaponButtstockM4" )
        {
            return    ( this.FindAttachmentBySlotName("BC_MCX_Buttstock") != NULL && this.FindAttachmentBySlotName("BC_MCX_Buttstock").ConfigGetBool("IsAdapter") == true );
        }
        return true; 
	}	
};
class BC_MCXRAPTOR_Tan : BC_MCXRAPTOR_Base {};