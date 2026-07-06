class BC_FNFAL_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new M4a1Recoil(this);
	}

	private EntityAI GetCurrentHandguard()
	{
		return this.FindAttachmentBySlotName("BC_FNFAL_Handguard");
	}

	private bool HasHandguardEquipped()
	{
		return (GetCurrentHandguard() != NULL);
	}

	private bool IsWoodenHandguardEquipped()
	{
		EntityAI hg = GetCurrentHandguard();
		return (hg != NULL && hg.IsKindOf("BC_Hndgrd_BC_FNFAL_Wooden_Handguard_Base"));
	}

	private bool HandguardHasRail()
	{
		EntityAI hg = GetCurrentHandguard();
		return (hg != NULL && hg.ConfigGetBool("hasRailFunctionality"));
	}

	private EntityAI GetCurrentDustCover()
	{
		return this.FindAttachmentBySlotName("BC_FNFAL_DustCover");
	}

	private bool HasDustCoverEquipped()
	{
		return (GetCurrentDustCover() != NULL);
	}

	override bool CanReceiveAttachment(EntityAI attachment, int slotId)
	{
		int opticsId        = InventorySlots.GetSlotIdFromString("weaponOptics");
		int opticsHuntingId = InventorySlots.GetSlotIdFromString("weaponOpticsHunting");

		if (slotId == opticsId || slotId == opticsHuntingId)
		{
			if (!HasDustCoverEquipped())
				return false;

			if (slotId == opticsHuntingId)
				return (this.FindAttachmentBySlotName("weaponOptics") == NULL);

			return (this.FindAttachmentBySlotName("weaponOpticsHunting") == NULL);
		}

		int flashlightId = InventorySlots.GetSlotIdFromString("weaponFlashlight");
		if (slotId == flashlightId)
		{
			if (!HasHandguardEquipped())
				return false;

			if (IsWoodenHandguardEquipped())
				return false;

			return true;
		}

		if (!IsInitialized() && attachment && !attachment.IsInitialized())
			return true;

		if (slotId == InventorySlots.GetSlotIdFromString("BC_Bipods") || slotId == InventorySlots.GetSlotIdFromString("BC_ForeGrips"))
		{
			if (IsWoodenHandguardEquipped())
				return false;

			return HandguardHasRail();
		}

		if (slotId == InventorySlots.GetSlotIdFromString("BC_FNFAL_Handguard"))
		{
			if (attachment && attachment.IsKindOf("BC_Hndgrd_BC_FNFAL_Wooden_Handguard_Base"))
			{
				if (this.FindAttachmentBySlotName("BC_Bipods") != NULL || this.FindAttachmentBySlotName("BC_ForeGrips") != NULL)
					return false;
			}
		}

		return true;
	}

	override bool CanDisplayAttachmentSlot(int slot_id)
	{
		string slot_name = InventorySlots.GetSlotName(slot_id);

		if (slot_name == "weaponOptics")
		{
			if (!HasDustCoverEquipped())
				return false;

			return (this.FindAttachmentBySlotName("weaponOpticsHunting") == NULL);
		}

		if (slot_name == "weaponOpticsHunting")
		{
			if (!HasDustCoverEquipped())
				return false;

			return (this.FindAttachmentBySlotName("weaponOpticsHunting") != NULL);
		}

		if (slot_name == "weaponFlashlight")
		{
			if (!HasHandguardEquipped())
				return false;

			if (IsWoodenHandguardEquipped())
				return false;

			return true;
		}

		if (slot_name == "BC_Bipods" || slot_name == "BC_ForeGrips")
		{
			if (IsWoodenHandguardEquipped())
				return false;

			return HandguardHasRail();
		}

		return true;
	}

	private void HideUnhideSelection(string selectionName, bool hide = false)
	{
		TStringArray selectionNames = new TStringArray;
		ConfigGetTextArray("simpleHiddenSelections", selectionNames);
		int selectionId = selectionNames.Find(selectionName);
		SetSimpleHiddenSelectionState(selectionId, hide);
	}

	override void EEInit()
	{
		super.EEInit();
		HideUnhideSelection("ironsight", 1);
		HideUnhideSelection("pistolgrip", 1);
		HideUnhideSelection("hidemuzzle", 1);
	}

	override void EEItemAttached(EntityAI item, string slot_name)
	{
		super.EEItemAttached(item, slot_name);

		if (item.IsKindOf("ItemOptics"))
		{
			HideUnhideSelection("ironsight", 0);
		}
		if (item.IsKindOf("BC_PistolGrips"))
		{
			HideUnhideSelection("pistolgrip", 0);
		}
		if (item.IsKindOf("ItemSuppressor"))
		{
			HideUnhideSelection("hidemuzzle", 0);
		}
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{
		super.EEItemDetached(item, slot_name);

		if (item.IsKindOf("ItemOptics"))
		{
			HideUnhideSelection("ironsight", 1);
		}
		if (item.IsKindOf("BC_PistolGrips"))
		{
			HideUnhideSelection("pistolgrip", 1);
		}
		if (item.IsKindOf("ItemSuppressor"))
		{
			HideUnhideSelection("hidemuzzle", 1);
		}
	}
};

class BC_FNFAL_Black : BC_FNFAL_Base {};
