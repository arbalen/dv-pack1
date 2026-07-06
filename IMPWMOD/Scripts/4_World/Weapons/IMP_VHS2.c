class IMP_VHS2_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new FamasRecoil(this);
	}		
	
	void IMP_VHS2_Base()
	{	
		EntityAI ParentItem = this;		
		UnFoldIronsIMP(ParentItem);	
	}
	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);

		if (ItemOptics.Cast(item))
		{ 
			EntityAI ParentItem = this;
			FoldIronsIMP(ParentItem);
		}
	}
	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);

		if (ItemOptics.Cast(item))
		{ 
			EntityAI ParentItem = this;
			UnFoldIronsIMP(ParentItem);
		}
	}
	
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "IMP_Supp_556_Black" );	
		inventory.CreateInInventory( "IMP_Grip_ZenitRK0" );
		inventory.CreateInInventory( "ReflexOptic" );		
		inventory.CreateInInventory( "Battery9V" );
			
		SpawnAttachedMagazine("IMP_Mag_VHS2_30Rnd");
	}
	
	/*override int GetWeaponSpecificCommand(int weaponAction ,int subCommand)
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
	}*/
};

class IMP_VHS2 : IMP_VHS2_Base {};