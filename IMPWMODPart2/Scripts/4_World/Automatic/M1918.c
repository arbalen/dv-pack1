class IMP_M1918_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new FALRecoil(this);
	}
};

class IMP_M1918 : IMP_M1918_Base {};