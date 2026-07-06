class IMP_AEK971_Base : AKM_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new Ak74Recoil(this);
	}
	
	override bool CanEnterIronsights()
	{
		ItemOptics optic = GetAttachedOptics();
		if (optic && KazuarOptic.Cast(optic))
			return true;
		return super.CanEnterIronsights();
	}
	
	override bool CanReceiveAttachment( EntityAI attachment, int slotId )
    {
        if ( slotId == InventorySlots.GetSlotIdFromString("weaponOptics") )
		{
			if ( this.FindAttachmentBySlotName("Rail") != NULL && this.FindAttachmentBySlotName("weaponOpticsAK") == NULL)
			{
				return true;
			}
			return false;
		}
		if ( slotId == InventorySlots.GetSlotIdFromString("weaponOpticsAK") )
		{
			if ( this.FindAttachmentBySlotName("Rail") == NULL )
			{
				return true;
			}
			return false;	
		}
		if ( slotId == InventorySlots.GetSlotIdFromString("Rail") )
		{
			if ( this.FindAttachmentBySlotName("weaponOpticsAK") == NULL )
			{
				return true;
			}
			return false;	
		}
        return true;
    }
	
	override bool CanDisplayAttachmentSlot( int slot_id)
    {   
		string slot_name = InventorySlots.GetSlotName(slot_id);
		
        if ( slot_name == "weaponOptics" )
		{
            return ( this.FindAttachmentBySlotName("Rail") != NULL);
		}
        if ( slot_name == "weaponOpticsAK" )
		{
            return ( this.FindAttachmentBySlotName("Rail") == NULL);
		}
        if ( slot_name == "Rail" )
		{
            return ( this.FindAttachmentBySlotName("weaponOpticsAK") == NULL);
		}
        if ( slot_name == "weaponButtstockM4" )
		{
            return	( this.FindAttachmentBySlotName("weaponButtstockAK") != NULL && this.FindAttachmentBySlotName("weaponButtstockAK").IsKindOf("IMP_AK_Adapter"));
		}
        return true;
    }
};

class IMP_AEK971 : IMP_AEK971_Base {};