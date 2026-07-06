class BC_Bttstck_ASValStockAdapter_Base : Inventory_Base
{
    override bool CanDetachAttachment (EntityAI parent)
    {
        if ( Weapon_Base.Cast(parent) && parent.FindAttachmentBySlotName("weaponButtstockM4"))
        {
            return false;
        }
        return super.CanDetachAttachment(parent);
    }
};
class BC_Bttstck_MCX_Buttstock_Adapter_Base : Inventory_Base
{
    override bool CanDetachAttachment (EntityAI parent)
    {
        if ( Weapon_Base.Cast(parent) && parent.FindAttachmentBySlotName("weaponButtstockM4"))
        {
            return false;
        }
        return super.CanDetachAttachment(parent);
    }
}