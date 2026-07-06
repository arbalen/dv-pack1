class IMP_AS50_Base : RifleBoltLock_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new SvdRecoil(this);
	}
	
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();
		
		inventory.CreateInInventory( "HuntingOptic" );	
		
		SpawnAttachedMagazine("IMP_Mag_AS50_10rnd");
	}
};

class IMP_AS50 : IMP_AS50_Base {};
class IMP_AS50_1 : IMP_AS50_Base {};
class IMP_AS50_2 : IMP_AS50_Base {};
class IMP_AS50_3 : IMP_AS50_Base {};
class IMP_AS50_4 : IMP_AS50_Base {};