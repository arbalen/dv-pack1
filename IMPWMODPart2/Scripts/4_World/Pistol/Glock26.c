class IMP_Glock26_Base : Pistol_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new GlockRecoil(this);
	}
};
class IMP_Glock26: IMP_Glock26_Base {};