class IMP_U100_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new FALRecoil(this);
	}
};

class IMP_U100 : IMP_U100_Base {};