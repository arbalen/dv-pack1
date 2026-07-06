class IMP_MK23_Base : Pistol_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new Fnx45Recoil(this);
	}
};
class IMP_MK23 : IMP_MK23_Base {};