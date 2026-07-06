class IMP_AK74_Base : RifleBoltFree_Base
{
    override RecoilBase SpawnRecoilObject()
    {
        return new Ak74Recoil(this);
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
	private void HideUnhideSelection(string selectionName, bool hide = false)
    {
        TStringArray selectionNames = new TStringArray;
        ConfigGetTextArray("simpleHiddenSelections",selectionNames);
        int selectionId = selectionNames.Find(selectionName);
        SetSimpleHiddenSelectionState(selectionId, hide);
    }
	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);

		if ( slot_name == "HandlesAK" )
        {
            HideUnhideSelection("HandlesAK", 0);
        }
	}
	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);

		if ( slot_name == "HandlesAK" )
        {
          HideUnhideSelection("HandlesAK", 1);
        }
	}
	
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "IMP_RailAK" );	
		inventory.CreateInInventory( "IMP_Hndgrd_AK_AKTdix47_black" );
		inventory.CreateInInventory( "IMP_Supp_762x39_Black" );	
		inventory.CreateInInventory( "IMP_PistolGrip_AK_StrikeIndustries_Black" );	
		inventory.CreateInInventory( "IMP_Flashlight_Steiner9021" );
		inventory.CreateInInventory( "ReflexOptic" );	
		inventory.CreateInInventory( "IMP_Grip_ZenitRK0" );	
		inventory.CreateInInventory( "IMP_Bttstk_AK_Tact2" );
		inventory.CreateInInventory( "Battery9V" );
		inventory.CreateInInventory( "Battery9V" );
		
		SpawnAttachedMagazine("Mag_AK74_30Rnd_Black");
	}
};

class IMP_AK74 : IMP_AK74_Base {};
