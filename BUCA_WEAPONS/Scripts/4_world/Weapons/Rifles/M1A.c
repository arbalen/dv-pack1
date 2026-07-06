class BC_M1A_Base : RifleBoltFree_Base
{
    override RecoilBase SpawnRecoilObject()
    {
        return new FALRecoil(this);
    }
	override bool CanReceiveAttachment( EntityAI attachment, int slotId )
	{
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
		return true;
	}
    override bool CanDisplayAttachmentSlot(int slot_id)
    {
        string slot_name = InventorySlots.GetSlotName(slot_id);
    
        if (slot_name == "BC_Bipods")
        {
            return (this.FindAttachmentBySlotName("BC_ForeGrips") == NULL);
        }

        if (slot_name == "BC_ForeGrips")
        {
            return (this.FindAttachmentBySlotName("BC_Bipods") == NULL);
        }

		return true;
    }
};
class BC_M1A: BC_M1A_Base {};