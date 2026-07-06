class IMP_DesertEagle_Base : Pistol_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new DEagleRecoil(this);
	}
};

class IMP_DesertEagle : IMP_DesertEagle_Base {};
class IMP_DesertEagle_BlackSky : IMP_DesertEagle {};
class IMP_DesertEagle_Gold : IMP_DesertEagle {};