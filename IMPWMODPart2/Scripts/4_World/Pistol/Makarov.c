class IMP_Makarov_Base : Pistol_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new MakarovRecoil(this);
	}
};
class IMP_Makarov: IMP_Makarov_Base {};