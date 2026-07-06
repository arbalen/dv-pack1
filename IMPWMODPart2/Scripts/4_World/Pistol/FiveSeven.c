class IMP_FiveSeven_Base : Pistol_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new GlockRecoil(this);
	}
};
class IMP_FiveSeven : IMP_FiveSeven_Base {};