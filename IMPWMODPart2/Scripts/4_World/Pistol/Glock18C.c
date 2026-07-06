class IMP_Glock18C_Base : Pistol_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new GlockRecoil(this);
	}
};
class IMP_Glock18C: IMP_Glock18C_Base {};