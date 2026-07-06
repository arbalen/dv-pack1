class IMP_RailAK: Inventory_Base
{
    override bool CanDetachAttachment (EntityAI parent)
    {
        if ( Weapon_Base.Cast(parent) && parent.FindAttachmentBySlotName("weaponOptics"))
        {
            return false;
        }
        return super.CanDetachAttachment(parent);
    }
}