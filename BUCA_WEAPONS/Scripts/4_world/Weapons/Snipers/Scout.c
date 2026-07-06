class BC_Scout_Base : BoltActionRifle_ExternalMagazine_Base
{
    override RecoilBase SpawnRecoilObject()
    {
        return new CZ527Recoil(this);
    };
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
class BC_Scout: BC_Scout_Base {};
class BC_Scout_Fever_Dream: BC_Scout_Base{};
class BC_Scout_DragonFire: BC_Scout_Base{};
class BC_Scout_BloodInTheWater: BC_Scout_Base{};
class BC_Scout_BigIron: BC_Scout_Base{};
class BC_Scout_Abyss: BC_Scout_Base{};
class BC_Scout_AcidFade: BC_Scout_Base{};
class BC_Scout_GhostCrusader: BC_Scout_Base{};
class BC_Scout_Harpy: BC_Scout_Base{};
class BC_Scout_HyperBeast: BC_Scout_Base{};
class BC_Scout_Necropos: BC_Scout_Base{};
class BC_Scout_NeedleWork: BC_Scout_Base{};
class BC_Scout_Novritsch: BC_Scout_Base{};
class BC_Scout_Tread: BC_Scout_Base{};
