class IMP_PTRD_Base : BoltActionRifle_InnerMagazine_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new MosinRecoil(this);
	}
};
class IMP_PTRD: IMP_PTRD_Base {};