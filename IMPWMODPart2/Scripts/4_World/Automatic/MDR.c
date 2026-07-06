class IMP_MDR_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new FamasRecoil(this);
	}		
};

class IMP_MDR_Black : IMP_MDR_Base {};
class IMP_MDR_Tan : IMP_MDR_Base {};

class IMP_MDR_9mm_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new FamasRecoil(this);
	}		
};

class IMP_MDR_9mm_Black : IMP_MDR_9mm_Base {};
class IMP_MDR_9mm_Tan : IMP_MDR_9mm_Base {};