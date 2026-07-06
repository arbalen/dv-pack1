class BC_M2010_Base : BoltActionRifle_ExternalMagazine_Base
{
    override RecoilBase SpawnRecoilObject()
    {
        return new CZ527Recoil(this);
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
};
class BC_M2010: BC_M2010_Base {};
class BC_M2010_Blue: BC_M2010_Base {};