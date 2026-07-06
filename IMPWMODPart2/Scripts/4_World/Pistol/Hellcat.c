class IMP_Hellcat_Base : Pistol_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new GlockRecoil(this);
	}
};
class IMP_Hellcat : IMP_Hellcat_Base {};