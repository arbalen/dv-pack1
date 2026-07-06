class IMP_FAL_Base : RifleBoltFree_Base
{
    override RecoilBase SpawnRecoilObject()
	{
		if(GetGame().IsClient())
		{
			PlayerBase player =  GetGame().GetPlayer();
			bool m_Prone = player.IsPlayerInProneState();
		}

		if (m_BipodDeployed && m_Prone)
		{
			return new IMP_SemiAutomatic_BipodRecoil(this);
		}
		else return new FALRecoil(this);
	}

    override bool CanReceiveAttachment( EntityAI attachment, int slotId )
    {
        string slot_name = InventorySlots.GetSlotName(slotId);

        if(slot_name == "weaponFlashlight")
        {
            if(FindAttachmentBySlotName("weaponHandguardFnFal") && FindAttachmentBySlotName("weaponHandguardFnFal").ConfigGetBool("hasRailFunctionality"))
                return true;
            
            return false;
            
        }

        if(slot_name == "grip1" && attachment.ConfigGetBool("NeedRis"))
        {
            if(FindAttachmentBySlotName("weaponHandguardFnFal") && FindAttachmentBySlotName("weaponHandguardFnFal").ConfigGetBool("hasRailFunctionality"))
                return true;
            
            return false;
        }
		
		if(slot_name == "weaponBipod" && attachment.ConfigGetBool("NeedRis"))
        {
            if(FindAttachmentBySlotName("weaponHandguardFnFal") && FindAttachmentBySlotName("weaponHandguardFnFal").ConfigGetBool("hasRailFunctionality"))
                return true;
            
            return false;
        }

        return super.CanReceiveAttachment(attachment,slotId);
    }

    override bool CanDisplayAttachmentSlot( int slot_id )
    {
        string slot_name = InventorySlots.GetSlotName(slot_id);
        bool result = false;

        if ( slot_name == "weaponFlashlight" )
        {
            if(FindAttachmentBySlotName("weaponHandguardFnFal") && FindAttachmentBySlotName("weaponHandguardFnFal").ConfigGetBool("hasRailFunctionality"))
                return true;
            
            return false;
        }

        if ( slot_name == "grip1" )
        {
            if(FindAttachmentBySlotName("weaponHandguardFnFal") && FindAttachmentBySlotName("weaponHandguardFnFal").ConfigGetBool("hasRailFunctionality"))
                return true;
            
            return false;
        }
		
		if ( slot_name == "weaponBipod" )
        {
            if(FindAttachmentBySlotName("weaponHandguardFnFal") && FindAttachmentBySlotName("weaponHandguardFnFal").ConfigGetBool("hasRailFunctionality"))
                return true;
            
            return false;
        }
        return true;
    }
	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionDeployBipodIMP);
		AddAction(ActionFoldBipodIMP);
	}
	
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "IMP_Bttstk_Fal_ParaBrsBttstck" );	
		inventory.CreateInInventory( "IMP_Hndgrd_FnFal_DsArmsFullHndgrd" );
		inventory.CreateInInventory( "IMP_Grip_ZenitRK0" );		
		inventory.CreateInInventory( "Atlas_Bipod" );
		inventory.CreateInInventory( "IMP_Supp_308_Black" );	
		inventory.CreateInInventory( "IMP_Flashlight_Steiner9021" );	
		inventory.CreateInInventory( "ReflexOptic" );	
		inventory.CreateInInventory( "Battery9V" );	
		inventory.CreateInInventory( "Battery9V" );	
		
		SpawnAttachedMagazine("Mag_FAL_20Rnd");
	}
};