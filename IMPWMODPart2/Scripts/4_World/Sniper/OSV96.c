class IMP_OSV_Base extends RifleBoltLock_Base
{
	
	override RecoilBase SpawnRecoilObject()
	{
		return new SvdRecoil(this);
	}
	
	void IMP_OSV_Base()
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
};
class IMP_OSV extends IMP_OSV_Base {};