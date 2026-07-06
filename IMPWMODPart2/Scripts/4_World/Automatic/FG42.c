class IMP_FG42_Base : AKM_Base
{
    override RecoilBase SpawnRecoilObject()
	{
		return new Ak74Recoil(this);
	}
};
class IMP_FG42 : IMP_FG42_Base {};