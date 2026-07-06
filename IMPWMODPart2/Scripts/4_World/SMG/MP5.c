class IMP_MP5SDA2_Base : RifleBoltFree_Base
{
	void IMP_MP5SDA2_Base ()
	{
	}
	
	override RecoilBase SpawnRecoilObject()
	{
		return new Cz61Recoil(this);
	}
	
	
	override int GetWeaponSpecificCommand(int weaponAction ,int subCommand)
	{
		if ( weaponAction == WeaponActions.RELOAD)
		{
			switch (subCommand)
			{
				case WeaponActionReloadTypes.RELOADRIFLE_MAGAZINE_BULLET:
					return WeaponActionReloadTypes.RELOADSRIFLE_MAGAZINE_BULLET;
				
				case WeaponActionReloadTypes.RELOADRIFLE_NOMAGAZINE_BULLET:
					return WeaponActionReloadTypes.RELOADSRIFLE_NOMAGAZINE_BULLET;
				
				case WeaponActionReloadTypes.RELOADRIFLE_MAGAZINE_NOBULLET:
					return WeaponActionReloadTypes.RELOADSRIFLE_MAGAZINE_NOBULLET;
				
				case WeaponActionReloadTypes.RELOADRIFLE_NOMAGAZINE_NOBULLET:
					return WeaponActionReloadTypes.RELOADSRIFLE_NOMAGAZINE_NOBULLET;
				
				default:
					return subCommand;
			}
		
		}
		return subCommand;
	}
};

class IMP_MP5MPA2_Base : RifleBoltFree_Base
{
	void IMP_MP5MPA2_Base ()
	{
	}
	
	override bool CanReceiveAttachment( EntityAI attachment, int slotId )
	{

		if ( slotId == InventorySlots.GetSlotIdFromString("weaponMuzzleMP5") )
		{
			if ( this.FindAttachmentBySlotName("pistolMuzzle")==NULL )
			{
				return true;
			}
			return false;
		}

		if ( slotId == InventorySlots.GetSlotIdFromString("pistolMuzzle") )
		{
			if ( this.FindAttachmentBySlotName("weaponMuzzleMP5")==NULL )
			{
				return true;
			}
			return false;
		}

		if ( slotId == InventorySlots.GetSlotIdFromString("weaponMuzzleMP5") )
		{
			if ( this.FindAttachmentBySlotName("pistolMuzzle")!=NULL )
			{
				return false;
			}
			return true;
		}

		if ( slotId == InventorySlots.GetSlotIdFromString("pistolMuzzle") )
		{
			if ( this.FindAttachmentBySlotName("weaponMuzzleMP5")!=NULL )
			{
				return false;
			}
			return true;
		}

		return true;
	}

	override bool CanDisplayAttachmentSlot( int slot_id )
	{
		string slot_name = InventorySlots.GetSlotName(slot_id);

		if ( slot_name == "pistolMuzzle" )
		{
			return ( !(this.FindAttachmentBySlotName("weaponMuzzleMP5")!=NULL) );
		}

		if ( slot_name == "weaponMuzzleMP5" )
		{
			return ( !(this.FindAttachmentBySlotName("pistolMuzzle")!=NULL) );
		}

		return true;
	}

	override RecoilBase SpawnRecoilObject()
	{
		return new Cz61Recoil(this);
	}
	
	
	override int GetWeaponSpecificCommand(int weaponAction ,int subCommand)
	{
		if ( weaponAction == WeaponActions.RELOAD)
		{
			switch (subCommand)
			{
				case WeaponActionReloadTypes.RELOADRIFLE_MAGAZINE_BULLET:
					return WeaponActionReloadTypes.RELOADSRIFLE_MAGAZINE_BULLET;
				
				case WeaponActionReloadTypes.RELOADRIFLE_NOMAGAZINE_BULLET:
					return WeaponActionReloadTypes.RELOADSRIFLE_NOMAGAZINE_BULLET;
				
				case WeaponActionReloadTypes.RELOADRIFLE_MAGAZINE_NOBULLET:
					return WeaponActionReloadTypes.RELOADSRIFLE_MAGAZINE_NOBULLET;
				
				case WeaponActionReloadTypes.RELOADRIFLE_NOMAGAZINE_NOBULLET:
					return WeaponActionReloadTypes.RELOADSRIFLE_NOMAGAZINE_NOBULLET;
				
				default:
					return subCommand;
			}
		
		}
		return subCommand;
	}
};

class IMP_MP5RailA2_Base : RifleBoltFree_Base
{
	void IMP_MP5RailA2_Base ()
	{
	}
	
	override bool CanReceiveAttachment( EntityAI attachment, int slotId )
	{

		if ( slotId == InventorySlots.GetSlotIdFromString("weaponMuzzleMP5") )
		{
			if ( this.FindAttachmentBySlotName("pistolMuzzle")==NULL )
			{
				return true;
			}
			return false;
		}

		if ( slotId == InventorySlots.GetSlotIdFromString("pistolMuzzle") )
		{
			if ( this.FindAttachmentBySlotName("weaponMuzzleMP5")==NULL )
			{
				return true;
			}
			return false;
		}

		if ( slotId == InventorySlots.GetSlotIdFromString("weaponMuzzleMP5") )
		{
			if ( this.FindAttachmentBySlotName("pistolMuzzle")!=NULL )
			{
				return false;
			}
			return true;
		}

		if ( slotId == InventorySlots.GetSlotIdFromString("pistolMuzzle") )
		{
			if ( this.FindAttachmentBySlotName("weaponMuzzleMP5")!=NULL )
			{
				return false;
			}
			return true;
		}

		return true;
	}

	override bool CanDisplayAttachmentSlot( int slot_id )
	{
		string slot_name = InventorySlots.GetSlotName(slot_id);

		if ( slot_name == "pistolMuzzle" )
		{
			return ( !(this.FindAttachmentBySlotName("weaponMuzzleMP5")!=NULL) );
		}

		if ( slot_name == "weaponMuzzleMP5" )
		{
			return ( !(this.FindAttachmentBySlotName("pistolMuzzle")!=NULL) );
		}

		return true;
	}
	
	override RecoilBase SpawnRecoilObject()
	{
		return new Cz61Recoil(this);
	}
	
	
	override int GetWeaponSpecificCommand(int weaponAction ,int subCommand)
	{
		if ( weaponAction == WeaponActions.RELOAD)
		{
			switch (subCommand)
			{
				case WeaponActionReloadTypes.RELOADRIFLE_MAGAZINE_BULLET:
					return WeaponActionReloadTypes.RELOADSRIFLE_MAGAZINE_BULLET;
				
				case WeaponActionReloadTypes.RELOADRIFLE_NOMAGAZINE_BULLET:
					return WeaponActionReloadTypes.RELOADSRIFLE_NOMAGAZINE_BULLET;
				
				case WeaponActionReloadTypes.RELOADRIFLE_MAGAZINE_NOBULLET:
					return WeaponActionReloadTypes.RELOADSRIFLE_MAGAZINE_NOBULLET;
				
				case WeaponActionReloadTypes.RELOADRIFLE_NOMAGAZINE_NOBULLET:
					return WeaponActionReloadTypes.RELOADSRIFLE_NOMAGAZINE_NOBULLET;
				
				default:
					return subCommand;
			}
		
		}
		return subCommand;
	}
};