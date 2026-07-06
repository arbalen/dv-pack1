class IMP_VerticalGrip_Black extends Inventory_Base
{
	ref array<int> 		m_AttachmentSlotsCheck;
	
	void IMP_VerticalGrip_Black()
	{
		InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
	}
	
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if ( !super.CanPutAsAttachment(parent) ) {return false;}
		
		bool req_attachment 		= false;
		bool rail_attachment_found   = false;
		int slot_id;
		ItemBase attachment;
		for ( int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++ )
		{
			slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if ( m_AttachmentSlotsCheck.Find(slot_id) != -1 )
			{
				req_attachment = true;
				attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if ( attachment && attachment.ConfigIsExisting("hasRailFunctionality") && attachment.ConfigGetBool("hasRailFunctionality") )
					rail_attachment_found = true;
			}
		}
		return !req_attachment || (req_attachment && rail_attachment_found);
	}
	
	void InitAttachmentsSlotsToCheck(out array<int> AttSlots)
	{
		if (!AttSlots)
		{
			AttSlots = new array<int>;
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardM4"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardMP5"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardFnFal"));
		}
	}
}

class IMP_Bipod_Black extends Inventory_Base
{
	ref array<int> 		m_AttachmentSlotsCheck;
	
	void IMP_Bipod_Black()
	{
		InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
	}
	
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if ( !super.CanPutAsAttachment(parent) ) {return false;}
		
		bool req_attachment 		= false;
		bool rail_attachment_found   = false;
		int slot_id;
		ItemBase attachment;
		for ( int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++ )
		{
			slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if ( m_AttachmentSlotsCheck.Find(slot_id) != -1 )
			{
				req_attachment = true;
				attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if ( attachment && attachment.ConfigIsExisting("hasRailFunctionality") && attachment.ConfigGetBool("hasRailFunctionality") )
					rail_attachment_found = true;
			}
		}
		return !req_attachment || (req_attachment && rail_attachment_found);
	}
	
	void InitAttachmentsSlotsToCheck(out array<int> AttSlots)
	{
		if (!AttSlots)
		{
			AttSlots = new array<int>;
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardM4"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardMP5"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardFnFal"));
		}
	}
}

class IMP_Grip_BCM_Base extends Inventory_Base
{
	ref array<int> 		m_AttachmentSlotsCheck;
	
	void IMP_Grip_BCM_Base()
	{
		InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
	}
	
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if ( !super.CanPutAsAttachment(parent) ) {return false;}
		
		bool req_attachment 		= false;
		bool rail_attachment_found   = false;
		int slot_id;
		ItemBase attachment;
		for ( int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++ )
		{
			slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if ( m_AttachmentSlotsCheck.Find(slot_id) != -1 )
			{
				req_attachment = true;
				attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if ( attachment && attachment.ConfigIsExisting("hasRailFunctionality") && attachment.ConfigGetBool("hasRailFunctionality") )
					rail_attachment_found = true;
			}
		}
		return !req_attachment || (req_attachment && rail_attachment_found);
	}
	
	void InitAttachmentsSlotsToCheck(out array<int> AttSlots)
	{
		if (!AttSlots)
		{
			AttSlots = new array<int>;
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardM4"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardMP5"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardFnFal"));
		}
	}
}

class IMP_Grip_FortisShift_Base extends Inventory_Base
{
	ref array<int> 		m_AttachmentSlotsCheck;
	
	void IMP_Grip_FortisShift_Base()
	{
		InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
	}
	
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if ( !super.CanPutAsAttachment(parent) ) {return false;}
		
		bool req_attachment 		= false;
		bool rail_attachment_found   = false;
		int slot_id;
		ItemBase attachment;
		for ( int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++ )
		{
			slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if ( m_AttachmentSlotsCheck.Find(slot_id) != -1 )
			{
				req_attachment = true;
				attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if ( attachment && attachment.ConfigIsExisting("hasRailFunctionality") && attachment.ConfigGetBool("hasRailFunctionality") )
					rail_attachment_found = true;
			}
		}
		return !req_attachment || (req_attachment && rail_attachment_found);
	}
	
	void InitAttachmentsSlotsToCheck(out array<int> AttSlots)
	{
		if (!AttSlots)
		{
			AttSlots = new array<int>;
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardM4"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardMP5"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardFnFal"));
		}
	}
}

class IMP_Grip_KAC_Base extends Inventory_Base
{
	ref array<int> 		m_AttachmentSlotsCheck;
	
	void IMP_Grip_KAC_Base()
	{
		InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
	}
	
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if ( !super.CanPutAsAttachment(parent) ) {return false;}
		
		bool req_attachment 		= false;
		bool rail_attachment_found   = false;
		int slot_id;
		ItemBase attachment;
		for ( int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++ )
		{
			slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if ( m_AttachmentSlotsCheck.Find(slot_id) != -1 )
			{
				req_attachment = true;
				attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if ( attachment && attachment.ConfigIsExisting("hasRailFunctionality") && attachment.ConfigGetBool("hasRailFunctionality") )
					rail_attachment_found = true;
			}
		}
		return !req_attachment || (req_attachment && rail_attachment_found);
	}
	
	void InitAttachmentsSlotsToCheck(out array<int> AttSlots)
	{
		if (!AttSlots)
		{
			AttSlots = new array<int>;
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardM4"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardMP5"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardFnFal"));
		}
	}
}

class IMP_Grip_MagpulAFG_Base extends Inventory_Base
{
	ref array<int> 		m_AttachmentSlotsCheck;
	
	void IMP_Grip_MagpulAFG_Base()
	{
		InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
	}
	
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if ( !super.CanPutAsAttachment(parent) ) {return false;}
		
		bool req_attachment 		= false;
		bool rail_attachment_found   = false;
		int slot_id;
		ItemBase attachment;
		for ( int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++ )
		{
			slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if ( m_AttachmentSlotsCheck.Find(slot_id) != -1 )
			{
				req_attachment = true;
				attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if ( attachment && attachment.ConfigIsExisting("hasRailFunctionality") && attachment.ConfigGetBool("hasRailFunctionality") )
					rail_attachment_found = true;
			}
		}
		return !req_attachment || (req_attachment && rail_attachment_found);
	}
	
	void InitAttachmentsSlotsToCheck(out array<int> AttSlots)
	{
		if (!AttSlots)
		{
			AttSlots = new array<int>;
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardM4"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardMP5"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardFnFal"));
		}
	}
}

class IMP_Grip_Pillau_Base extends Inventory_Base
{
	ref array<int> 		m_AttachmentSlotsCheck;
	
	void IMP_Grip_Pillau_Base()
	{
		InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
	}
	
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if ( !super.CanPutAsAttachment(parent) ) {return false;}
		
		bool req_attachment 		= false;
		bool rail_attachment_found   = false;
		int slot_id;
		ItemBase attachment;
		for ( int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++ )
		{
			slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if ( m_AttachmentSlotsCheck.Find(slot_id) != -1 )
			{
				req_attachment = true;
				attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if ( attachment && attachment.ConfigIsExisting("hasRailFunctionality") && attachment.ConfigGetBool("hasRailFunctionality") )
					rail_attachment_found = true;
			}
		}
		return !req_attachment || (req_attachment && rail_attachment_found);
	}
	
	void InitAttachmentsSlotsToCheck(out array<int> AttSlots)
	{
		if (!AttSlots)
		{
			AttSlots = new array<int>;
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardM4"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardMP5"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardFnFal"));
		}
	}
}

class IMP_Grip_StrikeIndustriesCT_Base extends Inventory_Base
{
	ref array<int> 		m_AttachmentSlotsCheck;
	
	void IMP_Grip_StrikeIndustriesCT_Base()
	{
		InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
	}
	
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if ( !super.CanPutAsAttachment(parent) ) {return false;}
		
		bool req_attachment 		= false;
		bool rail_attachment_found   = false;
		int slot_id;
		ItemBase attachment;
		for ( int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++ )
		{
			slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if ( m_AttachmentSlotsCheck.Find(slot_id) != -1 )
			{
				req_attachment = true;
				attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if ( attachment && attachment.ConfigIsExisting("hasRailFunctionality") && attachment.ConfigGetBool("hasRailFunctionality") )
					rail_attachment_found = true;
			}
		}
		return !req_attachment || (req_attachment && rail_attachment_found);
	}
	
	void InitAttachmentsSlotsToCheck(out array<int> AttSlots)
	{
		if (!AttSlots)
		{
			AttSlots = new array<int>;
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardM4"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardMP5"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardFnFal"));
		}
	}
}

class IMP_Grip_TacticalDynamicsSkel_Base extends Inventory_Base
{
	ref array<int> 		m_AttachmentSlotsCheck;
	
	void IMP_Grip_TacticalDynamicsSkel_Base()
	{
		InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
	}
	
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if ( !super.CanPutAsAttachment(parent) ) {return false;}
		
		bool req_attachment 		= false;
		bool rail_attachment_found   = false;
		int slot_id;
		ItemBase attachment;
		for ( int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++ )
		{
			slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if ( m_AttachmentSlotsCheck.Find(slot_id) != -1 )
			{
				req_attachment = true;
				attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if ( attachment && attachment.ConfigIsExisting("hasRailFunctionality") && attachment.ConfigGetBool("hasRailFunctionality") )
					rail_attachment_found = true;
			}
		}
		return !req_attachment || (req_attachment && rail_attachment_found);
	}
	
	void InitAttachmentsSlotsToCheck(out array<int> AttSlots)
	{
		if (!AttSlots)
		{
			AttSlots = new array<int>;
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardM4"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardMP5"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardFnFal"));
		}
	}
}

class IMP_Grip_TangoDown_Base extends Inventory_Base
{
	ref array<int> 		m_AttachmentSlotsCheck;
	
	void IMP_Grip_TangoDown_Base()
	{
		InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
	}
	
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if ( !super.CanPutAsAttachment(parent) ) {return false;}
		
		bool req_attachment 		= false;
		bool rail_attachment_found   = false;
		int slot_id;
		ItemBase attachment;
		for ( int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++ )
		{
			slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if ( m_AttachmentSlotsCheck.Find(slot_id) != -1 )
			{
				req_attachment = true;
				attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if ( attachment && attachment.ConfigIsExisting("hasRailFunctionality") && attachment.ConfigGetBool("hasRailFunctionality") )
					rail_attachment_found = true;
			}
		}
		return !req_attachment || (req_attachment && rail_attachment_found);
	}
	
	void InitAttachmentsSlotsToCheck(out array<int> AttSlots)
	{
		if (!AttSlots)
		{
			AttSlots = new array<int>;
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardM4"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardMP5"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardFnFal"));
		}
	}
}

class IMP_Grip_VtacUVG_Base extends Inventory_Base
{
	ref array<int> 		m_AttachmentSlotsCheck;
	
	void IMP_Grip_VtacUVG_Base()
	{
		InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
	}
	
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if ( !super.CanPutAsAttachment(parent) ) {return false;}
		
		bool req_attachment 		= false;
		bool rail_attachment_found   = false;
		int slot_id;
		ItemBase attachment;
		for ( int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++ )
		{
			slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if ( m_AttachmentSlotsCheck.Find(slot_id) != -1 )
			{
				req_attachment = true;
				attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if ( attachment && attachment.ConfigIsExisting("hasRailFunctionality") && attachment.ConfigGetBool("hasRailFunctionality") )
					rail_attachment_found = true;
			}
		}
		return !req_attachment || (req_attachment && rail_attachment_found);
	}
	
	void InitAttachmentsSlotsToCheck(out array<int> AttSlots)
	{
		if (!AttSlots)
		{
			AttSlots = new array<int>;
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardM4"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardMP5"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardFnFal"));
		}
	}
}

class IMP_Grip_ZenitB25u_Base extends Inventory_Base
{
	ref array<int> 		m_AttachmentSlotsCheck;
	
	void IMP_Grip_ZenitB25u_Base()
	{
		InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
	}
	
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if ( !super.CanPutAsAttachment(parent) ) {return false;}
		
		bool req_attachment 		= false;
		bool rail_attachment_found   = false;
		int slot_id;
		ItemBase attachment;
		for ( int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++ )
		{
			slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if ( m_AttachmentSlotsCheck.Find(slot_id) != -1 )
			{
				req_attachment = true;
				attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if ( attachment && attachment.ConfigIsExisting("hasRailFunctionality") && attachment.ConfigGetBool("hasRailFunctionality") )
					rail_attachment_found = true;
			}
		}
		return !req_attachment || (req_attachment && rail_attachment_found);
	}
	
	void InitAttachmentsSlotsToCheck(out array<int> AttSlots)
	{
		if (!AttSlots)
		{
			AttSlots = new array<int>;
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardM4"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardMP5"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardFnFal"));
		}
	}
}

class IMP_Grip_ZenitRK0_Base extends Inventory_Base
{
	ref array<int> 		m_AttachmentSlotsCheck;
	
	void IMP_Grip_ZenitRK0_Base()
	{
		InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
	}
	
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if ( !super.CanPutAsAttachment(parent) ) {return false;}
		
		bool req_attachment 		= false;
		bool rail_attachment_found   = false;
		int slot_id;
		ItemBase attachment;
		for ( int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++ )
		{
			slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if ( m_AttachmentSlotsCheck.Find(slot_id) != -1 )
			{
				req_attachment = true;
				attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if ( attachment && attachment.ConfigIsExisting("hasRailFunctionality") && attachment.ConfigGetBool("hasRailFunctionality") )
					rail_attachment_found = true;
			}
		}
		return !req_attachment || (req_attachment && rail_attachment_found);
	}
	
	void InitAttachmentsSlotsToCheck(out array<int> AttSlots)
	{
		if (!AttSlots)
		{
			AttSlots = new array<int>;
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardM4"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardMP5"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardFnFal"));
		}
	}
}

class IMP_Grip_ZenitRK1_Base extends Inventory_Base
{
	ref array<int> 		m_AttachmentSlotsCheck;
	
	void IMP_Grip_ZenitRK1_Base()
	{
		InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
	}
	
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if ( !super.CanPutAsAttachment(parent) ) {return false;}
		
		bool req_attachment 		= false;
		bool rail_attachment_found   = false;
		int slot_id;
		ItemBase attachment;
		for ( int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++ )
		{
			slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if ( m_AttachmentSlotsCheck.Find(slot_id) != -1 )
			{
				req_attachment = true;
				attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if ( attachment && attachment.ConfigIsExisting("hasRailFunctionality") && attachment.ConfigGetBool("hasRailFunctionality") )
					rail_attachment_found = true;
			}
		}
		return !req_attachment || (req_attachment && rail_attachment_found);
	}
	
	void InitAttachmentsSlotsToCheck(out array<int> AttSlots)
	{
		if (!AttSlots)
		{
			AttSlots = new array<int>;
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardM4"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardMP5"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardFnFal"));
		}
	}
}

class IMP_Grip_ZenitRK2_Base extends Inventory_Base
{
	ref array<int> 		m_AttachmentSlotsCheck;
	
	void IMP_Grip_ZenitRK2_Base()
	{
		InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
	}
	
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if ( !super.CanPutAsAttachment(parent) ) {return false;}
		
		bool req_attachment 		= false;
		bool rail_attachment_found   = false;
		int slot_id;
		ItemBase attachment;
		for ( int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++ )
		{
			slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if ( m_AttachmentSlotsCheck.Find(slot_id) != -1 )
			{
				req_attachment = true;
				attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if ( attachment && attachment.ConfigIsExisting("hasRailFunctionality") && attachment.ConfigGetBool("hasRailFunctionality") )
					rail_attachment_found = true;
			}
		}
		return !req_attachment || (req_attachment && rail_attachment_found);
	}
	
	void InitAttachmentsSlotsToCheck(out array<int> AttSlots)
	{
		if (!AttSlots)
		{
			AttSlots = new array<int>;
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardM4"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardMP5"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardFnFal"));
		}
	}
}

class IMP_Grip_ZenitRK4_Base extends Inventory_Base
{
	ref array<int> 		m_AttachmentSlotsCheck;
	
	void IMP_Grip_ZenitRK4_Base()
	{
		InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
	}
	
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if ( !super.CanPutAsAttachment(parent) ) {return false;}
		
		bool req_attachment 		= false;
		bool rail_attachment_found   = false;
		int slot_id;
		ItemBase attachment;
		for ( int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++ )
		{
			slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if ( m_AttachmentSlotsCheck.Find(slot_id) != -1 )
			{
				req_attachment = true;
				attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if ( attachment && attachment.ConfigIsExisting("hasRailFunctionality") && attachment.ConfigGetBool("hasRailFunctionality") )
					rail_attachment_found = true;
			}
		}
		return !req_attachment || (req_attachment && rail_attachment_found);
	}
	
	void InitAttachmentsSlotsToCheck(out array<int> AttSlots)
	{
		if (!AttSlots)
		{
			AttSlots = new array<int>;
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardM4"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardMP5"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardFnFal"));
		}
	}
}

class IMP_Grip_ZenitRK5_Base extends Inventory_Base
{
	ref array<int> 		m_AttachmentSlotsCheck;
	
	void IMP_Grip_ZenitRK5_Base()
	{
		InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
	}
	
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if ( !super.CanPutAsAttachment(parent) ) {return false;}
		
		bool req_attachment 		= false;
		bool rail_attachment_found   = false;
		int slot_id;
		ItemBase attachment;
		for ( int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++ )
		{
			slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if ( m_AttachmentSlotsCheck.Find(slot_id) != -1 )
			{
				req_attachment = true;
				attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if ( attachment && attachment.ConfigIsExisting("hasRailFunctionality") && attachment.ConfigGetBool("hasRailFunctionality") )
					rail_attachment_found = true;
			}
		}
		return !req_attachment || (req_attachment && rail_attachment_found);
	}
	
	void InitAttachmentsSlotsToCheck(out array<int> AttSlots)
	{
		if (!AttSlots)
		{
			AttSlots = new array<int>;
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardM4"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardMP5"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardFnFal"));
		}
	}
}

class IMP_Grip_ZenitRK6_Base extends Inventory_Base
{
	ref array<int> 		m_AttachmentSlotsCheck;
	
	void IMP_Grip_ZenitRK6_Base()
	{
		InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
	}
	
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if ( !super.CanPutAsAttachment(parent) ) {return false;}
		
		bool req_attachment 		= false;
		bool rail_attachment_found   = false;
		int slot_id;
		ItemBase attachment;
		for ( int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++ )
		{
			slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if ( m_AttachmentSlotsCheck.Find(slot_id) != -1 )
			{
				req_attachment = true;
				attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if ( attachment && attachment.ConfigIsExisting("hasRailFunctionality") && attachment.ConfigGetBool("hasRailFunctionality") )
					rail_attachment_found = true;
			}
		}
		return !req_attachment || (req_attachment && rail_attachment_found);
	}
	
	void InitAttachmentsSlotsToCheck(out array<int> AttSlots)
	{
		if (!AttSlots)
		{
			AttSlots = new array<int>;
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardM4"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardMP5"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardFnFal"));
		}
	}
}

class IMP_Grip_Egg_Base extends Inventory_Base
{
	ref array<int> 		m_AttachmentSlotsCheck;
	
	void IMP_Grip_Egg_Base()
	{
		InitAttachmentsSlotsToCheck(m_AttachmentSlotsCheck);
	}
	
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if ( !super.CanPutAsAttachment(parent) ) {return false;}
		
		bool req_attachment 		= false;
		bool rail_attachment_found   = false;
		int slot_id;
		ItemBase attachment;
		for ( int i = 0; i < parent.GetInventory().GetAttachmentSlotsCount(); i++ )
		{
			slot_id = parent.GetInventory().GetAttachmentSlotId(i);
			if ( m_AttachmentSlotsCheck.Find(slot_id) != -1 )
			{
				req_attachment = true;
				attachment = ItemBase.Cast(parent.GetInventory().FindAttachment(slot_id));
				if ( attachment && attachment.ConfigIsExisting("hasRailFunctionality") && attachment.ConfigGetBool("hasRailFunctionality") )
					rail_attachment_found = true;
			}
		}
		return !req_attachment || (req_attachment && rail_attachment_found);
	}
	
	void InitAttachmentsSlotsToCheck(out array<int> AttSlots)
	{
		if (!AttSlots)
		{
			AttSlots = new array<int>;
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardM4"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardAK"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardMP5"));
			AttSlots.Insert(InventorySlots.GetSlotIdFromString("weaponHandguardFnFal"));
		}
	}
}