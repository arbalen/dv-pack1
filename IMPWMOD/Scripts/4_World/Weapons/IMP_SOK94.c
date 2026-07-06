class IMP_SOK94_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new AkmRecoil(this);
	}
	
	override bool CanEnterIronsights()
    {
        ItemOptics optic = GetAttachedOptics();
        if (optic && PSO1Optic.Cast(optic) || PSO11Optic.Cast(optic))
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
        return true;
    }
	
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "PSO6Optic" );	
		inventory.CreateInInventory( "IMP_Supp_762x39_Black" );		
		inventory.CreateInInventory( "Battery9V" );
			
		SpawnAttachedMagazine("IMP_Mag_SOK94_10Rnd");
	}
};

class IMP_SOK94 : IMP_SOK94_Base {};