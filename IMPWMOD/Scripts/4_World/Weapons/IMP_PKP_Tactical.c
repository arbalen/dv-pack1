class IMP_PKP_Tactical_Base : RifleBoltFree_Base
{
	void IMP_PKP_Tactical_Base()
	{
		HideAmmoBeltIMP();
	}	
	
	void HideAmmoBeltIMP ()
	{
		protected int hideAmmoBeltId = -1;
		TStringArray selectionNames = new TStringArray;

		ConfigGetTextArray("simpleHiddenSelections",selectionNames);

		hideAmmoBeltId = selectionNames.Find("ammobelt");
			
		SetSimpleHiddenSelectionState(hideAmmoBeltId,false);
	};

	void ShowAmmoBeltIMP()
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
			ShowAmmoBeltIMP();
		}	
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);	
		
		EntityAI parent = item.GetHierarchyParent();		
		if( parent && parent.FindAttachmentBySlotName("magazine") == NULL )
		{
			HideAmmoBeltIMP();
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

		inventory.CreateInInventory( "IMP_Supp_762x39_Black" );	
		inventory.CreateInInventory( "ReflexOptic" );	
		inventory.CreateInInventory( "Battery9V" );
			
		SpawnAttachedMagazine("IMP_Mag_PKP_200Rnd");
	}
};

class IMP_PKP_Tactical : IMP_PKP_Tactical_Base {};
class IMP_PKP_Tactical_Camo : IMP_PKP_Tactical_Base {};
class IMP_PKP_Tactical_DesertCamo : IMP_PKP_Tactical_Base {};