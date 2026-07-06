class BC_M200_Base : BoltActionRifle_ExternalMagazine_Base
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
class BC_M200: BC_M200_Base{};
class BC_M200_Black: BC_M200_Base{};
class BC_M200_Camo: BC_M200_Base{};
class BC_M200_BlackDamascus: BC_M200_Base{};
class BC_M200_BlueDigital: BC_M200_Base{};
class BC_M200_BlueTiger: BC_M200_Base{};
class BC_M200_FDE: BC_M200_Base{};
class BC_M200_GreenDigital: BC_M200_Base{};
class BC_M200_RussianCamo: BC_M200_Base{};
class BC_M200_Winter: BC_M200_Base{};