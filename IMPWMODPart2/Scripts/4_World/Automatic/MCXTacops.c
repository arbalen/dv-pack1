class IMP_MCXTacops_Base : RifleBoltLock_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new M4a1Recoil(this);
	}
	
	override bool CanReceiveAttachment( EntityAI attachment, int slotId )
	{
		if ( slotId == InventorySlots.GetSlotIdFromString("weaponHandguardIMPMCXTacops") )
		{
			if ( this.FindAttachmentBySlotName("UniversalLight") == NULL )
			{
				return true;
			}
			return false;	
		}
		if ( slotId == InventorySlots.GetSlotIdFromString("UniversalLight") )
		{
			if ( this.FindAttachmentBySlotName("weaponHandguardIMPMCXTacops") == NULL )
			{
				return true;
			}
			return false;	
		}
		if ( attachment.ConfigGetBool("NeedRis") || attachment.IsKindOf("UniversalLight"))
        {
            if ( this.FindAttachmentBySlotName("weaponHandguardIMPMCXTacops") != NULL && this.FindAttachmentBySlotName("weaponHandguardIMPMCXTacops").ConfigGetBool("hasRailFunctionality"))
            {
                return true;
            }
            return false;
		}
		return true;
	}
	
	override bool CanDisplayAttachmentSlot( int slot_id )
	{
		string slot_name = InventorySlots.GetSlotName(slot_id);
		if ( slot_name == "weaponHandguardIMPMCXTacops" )
		{
            return ( this.FindAttachmentBySlotName("UniversalLight") == NULL);
		}
		if ( slot_name == "UniversalLight" )
		{
            return ( this.FindAttachmentBySlotName("weaponHandguardIMPMCXTacops") == NULL);
		}
		if ( slot_name == "weaponFlashlight")
		{	
            return  ( this.FindAttachmentBySlotName("weaponHandguardIMPMCXTacops") != NULL && this.FindAttachmentBySlotName("weaponHandguardIMPMCXTacops").ConfigGetBool("hasRailFunctionality") == true);
		}
		return true;
	}
};
class IMP_MCXTacops_Black : IMP_MCXTacops_Base {};