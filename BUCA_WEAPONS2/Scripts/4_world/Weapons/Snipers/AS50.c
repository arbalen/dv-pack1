class BC_AS50_Base : RifleBoltLock_Base
{
    override RecoilBase SpawnRecoilObject()
    {
        return new SvdRecoil(this);
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
		return true;
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
        HideUnhideSelection("hidemuzzle", 1);
    }
    override void EEItemAttached( EntityAI item, string slot_name )
    {
        super.EEItemAttached(item, slot_name);

        if (item.IsKindOf("ItemSuppressor"))
        {
            HideUnhideSelection("hidemuzzle", 0);
        }
    }
    
    override void EEItemDetached(EntityAI item, string slot_name)
    {
        super.EEItemDetached(item,slot_name);

        if (item.IsKindOf("ItemSuppressor"))
        {
            HideUnhideSelection("hidemuzzle", 1);
        }
    }	
};	
class BC_AS50_Black: BC_AS50_Base {};
class BC_AS50_Camo1: BC_AS50_Base {};
class BC_AS50_Camo2: BC_AS50_Base {};
class BC_AS50_Camo3: BC_AS50_Base {};
class BC_AS50_Camo4: BC_AS50_Base {};