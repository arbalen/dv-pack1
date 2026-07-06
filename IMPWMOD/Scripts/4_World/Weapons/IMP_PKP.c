class IMP_PKP_Base : RifleBoltFree_Base
{
	void IMP_PKP_Base()
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
		
		EntityAI parent = item.GetHierarchyParent();
		if( parent && parent.FindAttachmentBySlotName("magazine") != NULL )
		{
			ShowAmmoBeltIMP();
		}
		if ( slot_name == "HandlesAK" )
        {
            HideUnhideSelection("HandlesAK", 0);
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
		if ( slot_name == "HandlesAK" )
        {
          HideUnhideSelection("HandlesAK", 1);
        }
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

		inventory.CreateInInventory( "IMP_PistolGrip_AK_Magpul" );	
		inventory.CreateInInventory( "IMP_Optic_C_AksionEKP802Dovetail_2" );
		inventory.CreateInInventory( "IMP_Supp_762x39_Black" );		
		inventory.CreateInInventory( "Battery9V" );
			
		SpawnAttachedMagazine("IMP_Mag_PKP_200Rnd");
	}
};

class IMP_PKP : IMP_PKP_Base {};