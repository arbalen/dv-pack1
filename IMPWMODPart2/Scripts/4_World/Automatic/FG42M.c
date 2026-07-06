class IMP_FG42M_Base : RifleBoltLock_Base
{
	void IMP_FG42M_Base()
	{
		ShowIronSightsBlackout(this);
	}
	
	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);

		if (ItemOptics.Cast(item))
		{ 
			HideIronSightsBlackout(this);
		}
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);

		if (ItemOptics.Cast(item))
		{ 
			ShowIronSightsBlackout(this);
		}
	}		
	
	override RecoilBase SpawnRecoilObject()
	{
		return new SvdRecoil(this);
	}
};
class IMP_FG42M : IMP_FG42M_Base {};