modded class UniversalLight extends Switchable_Base
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		if( parent.IsKindOf("IMP_Mk14_Base") ) 		
		{
			return true;
		}	
		
		return super.CanPutAsAttachment(parent);
	}
};