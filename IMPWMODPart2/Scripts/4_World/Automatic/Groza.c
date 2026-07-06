class IMP_Groza_9x39_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new FamasRecoil(this);
	}			
};
class IMP_Groza_9x39 : IMP_Groza_9x39_Base {};
class IMP_Groza_Suppressed_9x39 : IMP_Groza_9x39_Base {};

class IMP_Groza_762_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new FamasRecoil(this);
	}		
};
class IMP_Groza_762 : IMP_Groza_762_Base {};
class IMP_Groza_Suppressed_762 : IMP_Groza_762_Base {};
