class IMP_M240_Base : RifleBoltFree_Base
{
	void IMP_M240_Base()
	{
		HideAmmoBeltBN();
	}
	
	void HideAmmoBeltBN ()
	{
		protected int hideAmmoBeltId = -1;
		TStringArray selectionNames = new TStringArray;

		ConfigGetTextArray("simpleHiddenSelections",selectionNames);

		hideAmmoBeltId = selectionNames.Find("ammobelt");
			
		SetSimpleHiddenSelectionState(hideAmmoBeltId,false);
	};

	void ShowAmmoBeltBN()
	{
		protected int hideAmmoBeltId = -1;
		TStringArray selectionNames = new TStringArray;

		ConfigGetTextArray("simpleHiddenSelections",selectionNames);

		hideAmmoBeltId = selectionNames.Find("ammobelt");

		SetSimpleHiddenSelectionState(hideAmmoBeltId,true);
	};
	
	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);	
		
		EntityAI parent = item.GetHierarchyParent();
		if( parent && parent.FindAttachmentBySlotName("magazine") != NULL )
		{
			ShowAmmoBeltBN();
		}	
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);	
		
		EntityAI parent = item.GetHierarchyParent();		
		if( parent && parent.FindAttachmentBySlotName("magazine") == NULL )
		{
			HideAmmoBeltBN();
		}	
	}		
	
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
	
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "ReflexOptic" );	
		inventory.CreateInInventory( "IMP_Flashlight_SureFireXC1" );
		inventory.CreateInInventory( "Battery9V" );		
		inventory.CreateInInventory( "Battery9V" );	
		
		SpawnAttachedMagazine("IMP_Mag_M240_150Rnd");
	}
};

class IMP_M240 : IMP_M240_Base {};