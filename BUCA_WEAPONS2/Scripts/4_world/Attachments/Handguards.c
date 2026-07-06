class BC_Hndgrd_GEVAR_Base extends Inventory_Base
{
    override bool CanDetachAttachment (EntityAI parent)
    {
        if ( Weapon_Base.Cast(parent) && parent.FindAttachmentBySlotName("BC_Bipods"))
        {
            return false;
        }
        return super.CanDetachAttachment(parent);
    }
};

class BC_Hndgrd_GEVAR_Tan : BC_Hndgrd_GEVAR_Base {};
class BC_Hndgrd_GEVAR_Black : BC_Hndgrd_GEVAR_Base {};

class BC_Hndgrd_SA58_Base extends Inventory_Base
{
    override bool CanDetachAttachment (EntityAI parent)
    {
        if (parent.FindAttachmentBySlotName("BC_Bipods") || parent.FindAttachmentBySlotName("BC_ForeGrips") || parent.FindAttachmentBySlotName("weaponFlashlight"))
        {
            return false;
        }
        return super.CanDetachAttachment(parent);
    }
};

class BC_Hndgrd_SA58_Black : BC_Hndgrd_SA58_Base {};

modded class M4_RISHndgrd extends Inventory_Base
{
	override bool CanDetachAttachment(EntityAI parent)
    {
        if (Weapon_Base.Cast(parent))
        {
            if (parent.FindAttachmentBySlotName("BC_Bipods") || parent.FindAttachmentBySlotName("BC_ForeGrips") || parent.FindAttachmentBySlotName("weaponFlashlight"))
            {
                return false;
            }
        }
        return true;
    }
}

class BC_Hndgrd_BC_FNFAL_Tactical_Handguard_Base extends Inventory_Base
{
    override bool CanDetachAttachment (EntityAI parent)
    {
        if (parent.FindAttachmentBySlotName("BC_Bipods") || parent.FindAttachmentBySlotName("BC_ForeGrips") || parent.FindAttachmentBySlotName("weaponFlashlight"))
        {
            return false;
        }
        return super.CanDetachAttachment(parent);
    }
};

class BC_Hndgrd_BC_FNFAL_Tactical_Handguard_Black : BC_Hndgrd_BC_FNFAL_Tactical_Handguard_Base {};



class BC_DustCover_FNFAL_DustCover_Base extends Inventory_Base
{
    override bool CanDetachAttachment (EntityAI parent)
    {
        if (parent.FindAttachmentBySlotName("weaponOpticsHunting") || parent.FindAttachmentBySlotName("weaponOptics"))
        {
            return false;
        }
        return super.CanDetachAttachment(parent);
    }
};

class BC_DustCover_FNFAL_DustCoverd_Black : BC_DustCover_FNFAL_DustCover_Base {};