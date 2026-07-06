class BC_SA58_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new M4a1Recoil(this);
	}

	override bool CanReceiveAttachment(EntityAI attachment, int slotId)
	{
		if (slotId == InventorySlots.GetSlotIdFromString("weaponFlashlight"))
		{
			return (this.FindAttachmentBySlotName("BC_SA58_Handguard") != NULL);
		}

		if (!IsInitialized() && (!attachment || !attachment.IsInitialized())) return true;

		if (slotId == InventorySlots.GetSlotIdFromString("BC_SA58_Handguard"))
		{
			if (attachment && (attachment.IsKindOf("BC_Bipods") || attachment.IsKindOf("BC_ForeGrips")))
			{
				if (this.FindAttachmentBySlotName("BC_SA58_Handguard") != NULL && this.FindAttachmentBySlotName("BC_SA58_Handguard").ConfigGetBool("hasRailFunctionality"))
				{
					return true;
				}
				return false;
			}
		}

		if (slotId == InventorySlots.GetSlotIdFromString("weaponOpticsHunting"))
		{
			return (this.FindAttachmentBySlotName("weaponOptics") == NULL);
		}

		if (slotId == InventorySlots.GetSlotIdFromString("weaponOptics"))
		{
			return (this.FindAttachmentBySlotName("weaponOpticsHunting") == NULL);
		}

		if (slotId == InventorySlots.GetSlotIdFromString("BC_Bipods") || slotId == InventorySlots.GetSlotIdFromString("BC_ForeGrips"))
		{
			if (this.FindAttachmentBySlotName("BC_SA58_Handguard") != NULL && this.FindAttachmentBySlotName("BC_SA58_Handguard").ConfigGetBool("hasRailFunctionality"))
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

		if (slot_name == "weaponFlashlight")
		{
			return (this.FindAttachmentBySlotName("BC_SA58_Handguard") != NULL);
		}

		if (slot_name == "weaponOptics")
		{
			return (this.FindAttachmentBySlotName("weaponOpticsHunting") == NULL);
		}

		if (slot_name == "weaponOpticsHunting")
		{
			return (this.FindAttachmentBySlotName("weaponOpticsHunting") != NULL);
		}

		if (slot_name == "BC_Bipods" || slot_name == "BC_ForeGrips")
		{
			return (this.FindAttachmentBySlotName("BC_SA58_Handguard") != NULL && this.FindAttachmentBySlotName("BC_SA58_Handguard").ConfigGetBool("hasRailFunctionality"));
		}

		return true;
	}

	private void HideUnhideSelection(string selectionName, bool hide = false)
	{
		TStringArray selectionNames = new TStringArray;
		ConfigGetTextArray("simpleHiddenSelections", selectionNames);
		int selectionId = selectionNames.Find(selectionName);

		if (selectionId < 0) return;

		SetSimpleHiddenSelectionState(selectionId, hide);
	}

	override void EEInit()
	{
		super.EEInit();
		HideUnhideSelection("pistolgrip", 1);
	}

	override void EEItemAttached(EntityAI item, string slot_name)
	{
		super.EEItemAttached(item, slot_name);

		if (item && item.IsKindOf("BC_Pistolgrips"))
		{
			HideUnhideSelection("pistolgrip", 0);
		}
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{
		super.EEItemDetached(item, slot_name);

		if (item && item.IsKindOf("BC_Pistolgrips"))
		{
			HideUnhideSelection("pistolgrip", 1);
		}
	}
};

class BC_SA58_Black : BC_SA58_Base {};
