class BC_M4A1_Base : RifleBoltFree_Base
{

	override RecoilBase SpawnRecoilObject()
	{
		return new M4a1Recoil(this);
	}
	override bool CanReceiveAttachment(EntityAI attachment, int slotId)
	{
		if (!IsInitialized() && !attachment.IsInitialized()) return true;			

		if (slotId == InventorySlots.GetSlotIdFromString("WeaponHandguardM4"))
		{
			if (attachment.IsKindOf("BC_Bipods") || attachment.IsKindOf("BC_ForeGrips")) 
			{
				if (this.FindAttachmentBySlotName("WeaponHandguardM4") != NULL && this.FindAttachmentBySlotName("WeaponHandguardM4").ConfigGetBool("hasRailFunctionality"))
				{
					return true;
				}
				return false;
			}	
		}

		if (slotId == InventorySlots.GetSlotIdFromString("BC_Bipods") || slotId == InventorySlots.GetSlotIdFromString("BC_ForeGrips"))
		{
			if (this.FindAttachmentBySlotName("WeaponHandguardM4") != NULL && this.FindAttachmentBySlotName("WeaponHandguardM4").ConfigGetBool("hasRailFunctionality"))
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

		if (slot_name == "BC_Bipods" || slot_name == "BC_ForeGrips")
		{
			return (this.FindAttachmentBySlotName("WeaponHandguardM4") != NULL && this.FindAttachmentBySlotName("WeaponHandguardM4").ConfigGetBool("hasRailFunctionality"));
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
class BC_M4A1_Black : BC_M4A1_Base {};