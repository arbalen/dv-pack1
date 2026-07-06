class IMP_P30L_Base : Pistol_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new Cz75Recoil(this);
	}

    override bool CanReceiveAttachment(EntityAI attachment, int slotId)
    {
		/*
        if  ( attachment.IsKindOf("TLRLight") )
        {            
            if ( FindAttachmentBySlotName("pistolMuzzle").IsKindOf("IMP_P30L_Compensator") )
            {
                return false;
            }   
			return true;
        }*/

        if  ( attachment.IsKindOf("IMP_P30L_Compensator") )
        {            
            if ( FindAttachmentBySlotName("pistolFlashlight") != NULL )
            {
                return false;
            }    
        }     
		
        return super.CanReceiveAttachment(attachment, slotId);
    }
};

modded class TLRLight
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if(!super.CanPutAsAttachment(parent)) {return false;}
		if ( parent.FindAttachmentBySlotName("pistolMuzzle") && parent.FindAttachmentBySlotName("pistolMuzzle").IsKindOf("IMP_P30L_Compensator") )
		{
			return false;
		}
		
		return true;
	}
};

class IMP_P30L_Compensator extends SuppressorBase 
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if( !parent.IsKindOf("IMP_P30L_Base") ) 
		{				
			return false;
		}
		return super.CanPutAsAttachment(parent);
	}	
};