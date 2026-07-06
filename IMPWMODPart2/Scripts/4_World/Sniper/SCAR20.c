class IMP_SCAR20S_Base : RifleBoltLock_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new FALRecoil(this);
	}
};
class IMP_SCAR20S : IMP_SCAR20S_Base {};