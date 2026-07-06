class BC_AEK971_Base : RifleBoltFree_Base
{
    override RecoilBase SpawnRecoilObject()
    {
        return new VSSRecoil(this);
    } 
     
    private void HideUnhideSelection(string selectionName, bool hide = false)
    {
        TStringArray selectionNames = new TStringArray;
        ConfigGetTextArray("simpleHiddenSelections",selectionNames);
        int selectionId = selectionNames.Find(selectionName);
        SetSimpleHiddenSelectionState(selectionId, hide);
    }

    override void EEInit()
    {
        super.EEInit();
        HideUnhideSelection("scopemount", 0);
    }

    override void EEItemAttached( EntityAI item, string slot_name )
    {
        super.EEItemAttached(item, slot_name);

        if (item.IsKindOf("ItemOptics_Base"))
        {
            HideUnhideSelection("scopemount", 1);
        }
        if (item.IsKindOf("KobraOptic") )
        {
            HideUnhideSelection("scopemount", 0);
        }
        if (item.IsKindOf("KazuarOptic") )
        {
            HideUnhideSelection("scopemount", 0);
        }
        if (item.IsKindOf("PSO1Optic") )
        {
            HideUnhideSelection("scopemount", 0);
        }
        if (item.IsKindOf("PSO11Optic") )
        {
            HideUnhideSelection("scopemount", 0);
        }
        if (item.IsKindOf("KashtanOptic") )
        {
            HideUnhideSelection("scopemount", 0);
        }
    }
    
    override void EEItemDetached(EntityAI item, string slot_name)
    {
        super.EEItemDetached(item,slot_name);

        if (item.IsKindOf("ItemOptics_Base"))
        {
            HideUnhideSelection("scopemount", 0);
        }
        if (item.IsKindOf("KobraOptic") )
        {
            HideUnhideSelection("scopemount", 0);
        }
        if (item.IsKindOf("KazuarOptic") )
        {
            HideUnhideSelection("scopemount", 0);
        }
        if (item.IsKindOf("PSO1Optic") )
        {
            HideUnhideSelection("scopemount", 0);
        }
        if (item.IsKindOf("PSO11Optic") )
        {
            HideUnhideSelection("scopemount", 0);
        }
        if (item.IsKindOf("KashtanOptic") )
        {
            HideUnhideSelection("scopemount", 0);
        }
    }
    override bool CanReceiveAttachment( EntityAI attachment, int slotId )
    {
        if(!IsInitialized() && !attachment.IsInitialized())
        {
          return true;
        };
        if ( slotId == InventorySlots.GetSlotIdFromString("weaponOpticsAK") )
        {
            if ( this.FindAttachmentBySlotName("weaponOptics") == NULL )
            {
                return true;
            }
            return false;
        }
        if ( slotId == InventorySlots.GetSlotIdFromString("weaponOptics") )
        {
            if ( this.FindAttachmentBySlotName("weaponOpticsAK") == NULL )
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
            return ( this.FindAttachmentBySlotName("weaponOpticsAK") == NULL );
        }
        if ( slot_name == "weaponOpticsAK" )
        {
            return ( this.FindAttachmentBySlotName("weaponOpticsAK") != NULL );
        }
        return true; 
    };
};
class BC_AEK971_Black: BC_AEK971_Base {};