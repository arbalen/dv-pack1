class IMP_M87R_Base : BoltActionRifle_ExternalMagazine_Base
{
	void IMP_M87R_Base()
	{	
		ShowMuzzleIMP(this);
	}

	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);

		if (SuppressorBase.Cast(item))
		{ 
			HideMuzzleIMP(this);
		}
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);

		if (SuppressorBase.Cast(item))
		{ 
			ShowMuzzleIMP(this);
		}
	}	

	override RecoilBase SpawnRecoilObject()
	{
		return new CZ527Recoil(this);
	}
			
};

class IMP_M87R_ : IMP_M87R_Base{};