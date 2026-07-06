class IMP_Pistol_Beretta_Base : Pistol_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new Cz75Recoil(this);
	}
};

class IMP_Pistol_Beretta: IMP_Pistol_Beretta_Base {};
class IMP_Pistol_Beretta_Desert: IMP_Pistol_Beretta_Base {};