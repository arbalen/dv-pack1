modded class AtlasBipod extends Inventory_Base
{
	override bool CanPutAsAttachment( EntityAI parent )
    {

    	if( parent.IsKindOf("IMP_AUGA3_Base") || parent.IsKindOf("IMP_HK416_Base") || parent.IsKindOf("IMP_M39EMR_Base") || parent.IsKindOf("IMP_M110_Base") || parent.IsKindOf("IMP_SR25_Base") || parent.IsKindOf("IMP_AA12_Base") || parent.IsKindOf("IMP_AWM_Base") || parent.IsKindOf("IMP_AX338_Base") || parent.IsKindOf("IMP_DVL1_Base") || parent.IsKindOf("IMP_DVL2_Base") || parent.IsKindOf("IMP_Kivaari_Base") || parent.IsKindOf("IMP_RemingtonMSR_Base") || parent.IsKindOf("IMP_AR15Skeleton_base"))
        {
            return true;
        }

        return super.CanPutAsAttachment(parent);
    }
}