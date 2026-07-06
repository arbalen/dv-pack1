class IMP_AN94_Base : RifleBoltFree_Base
{

	override RecoilBase SpawnRecoilObject()
	{
		return new AkmRecoil(this);
	}
	
	override int GetWeaponSpecificCommand(int weaponAction ,int subCommand)
	{
		if ( weaponAction == WeaponActions.RELOAD)
		{
			switch (subCommand)
			{
				case WeaponActionReloadTypes.RELOADSRIFLE_MAGAZINE_BULLET:
					return WeaponActionReloadTypes.RELOADRIFLE_MAGAZINE_BULLET;
				
				case WeaponActionReloadTypes.RELOADSRIFLE_NOMAGAZINE_BULLET:
					return WeaponActionReloadTypes.RELOADRIFLE_NOMAGAZINE_BULLET;
				
				case WeaponActionReloadTypes.RELOADSRIFLE_MAGAZINE_NOBULLET:
					return WeaponActionReloadTypes.RELOADRIFLE_MAGAZINE_NOBULLET;
				
				case WeaponActionReloadTypes.RELOADSRIFLE_NOMAGAZINE_NOBULLET:
					return WeaponActionReloadTypes.RELOADRIFLE_NOMAGAZINE_NOBULLET;
				
				default:
					return subCommand;
			}
		
		}
		return subCommand;
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
		if ( slotId == InventorySlots.GetSlotIdFromString("HandlesAK") )
    	{    
        	if  ( this.FindAttachmentBySlotName("weaponButtstockAK") != NULL && this.FindAttachmentBySlotName("weaponButtstockAK").IsKindOf("IMP_Bttstk_AK_HexaArms") )
        	{
        	    return false;
        	}
        	return true;
    	};
		if ( attachment.IsKindOf("IMP_Bttstk_AK_HexaArms"))
		{
			if ( this.FindAttachmentBySlotName("HandlesAK") )
			{
				return false;
			}
			return true;			
		};
		if ( slotId == InventorySlots.GetSlotIdFromString("Rail") )
		{
			if ( this.FindAttachmentBySlotName("weaponOpticsAK") == NULL )
			{
				return true;
			}
			return false;	
		}
        if ( attachment.ConfigGetBool("NeedRis") || attachment.IsKindOf("UniversalLight"))
        {
            if ( this.FindAttachmentBySlotName("WeaponHandguardAK") != NULL && this.FindAttachmentBySlotName("WeaponHandguardAK").ConfigGetBool("hasRailFunctionality"))
            {
                return true;
            }
            return false;
        }
        if ( slotId == InventorySlots.GetSlotIdFromString("weaponButtstockM4") )
		{
			if ( this.FindAttachmentBySlotName("weaponButtstockAK") != NULL && this.FindAttachmentBySlotName("weaponButtstockAK").IsKindOf("IMP_AK_Adapter"))
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
		if ( slot_name == "weaponPistolGrip" )
		{
            return ( !(this.FindAttachmentBySlotName("weaponButtstockAK") != NULL && this.FindAttachmentBySlotName("weaponButtstockAK").IsKindOf("IMP_Bttstk_AK_HexaArms")) );
		}
        if ( slot_name == "Rail" )
		{
            return ( this.FindAttachmentBySlotName("weaponOpticsAK") == NULL);
		}
        if ( slot_name == "weaponButtstockM4" )
		{
            return	( this.FindAttachmentBySlotName("weaponButtstockAK") != NULL && this.FindAttachmentBySlotName("weaponButtstockAK").IsKindOf("IMP_AK_Adapter"));
		}
        if ( slot_name == "weaponFlashlight" || slot_name == "weaponBipod" || slot_name == "grip1")
		{	
            return  ( this.FindAttachmentBySlotName("WeaponHandguardAK") != NULL && this.FindAttachmentBySlotName("WeaponHandguardAK").ConfigGetBool("hasRailFunctionality") == true);
		}
        return true;
    }
	
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "IMP_RailAK" );	
		inventory.CreateInInventory( "ReflexOptic" );
		inventory.CreateInInventory( "IMP_Supp_762x39_Black" );		
		inventory.CreateInInventory( "IMP_Bttstk_AK_Tact2" );
		inventory.CreateInInventory( "Battery9V" );
		
		SpawnAttachedMagazine("Mag_AK74_45Rnd");
	}
};

class IMP_AN94 : IMP_AN94_Base {};