class IMP_MCXSpear_Base : RifleBoltLock_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new M4a1Recoil(this);
	}
};

class IMP_MCXSpear_Tan : IMP_MCXSpear_Base {};