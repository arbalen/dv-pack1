class IMP_ReceiverCover_AK_AcademiaBastion_Base : Inventory_Base
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
class IMP_ReceiverCover_AK_DogLegRailGen3_Base : Inventory_Base 
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
class IMP_ReceiverCover_AK_FabDefence_Base : Inventory_Base 
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
class IMP_ReceiverCover_AK_Izhmash_Base : Inventory_Base {};
class IMP_ReceiverCover_AK_Molot_Base : Inventory_Base {};
class IMP_ReceiverCover_AK_ZenitB33_Base : Inventory_Base 
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