class IMP_SRSA2_Base: BoltActionRifle_ExternalMagazine_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new ScoutRecoil(this);
	}
};
class IMP_SRSA2 extends IMP_SRSA2_Base {};