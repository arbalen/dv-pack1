class IMP_MG42_Base : AKM_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new Ak74Recoil(this);
	}
};

class IMP_MG42 : IMP_MG42_Base{};