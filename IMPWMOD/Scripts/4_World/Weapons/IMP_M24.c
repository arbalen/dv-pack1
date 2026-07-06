class IMP_M24_Base: BoltActionRifle_ExternalMagazine_Base
{	
	override RecoilBase SpawnRecoilObject()
	{
		return new CZ527Recoil(this);
	}
	
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "IMP_Supp_308_Black" );		
		inventory.CreateInInventory( "HuntingOptic" );	
		
		SpawnAttachedMagazine("IMP_Mag_M24_5Rnd");
	}
};
class IMP_M24_SWS extends IMP_M24_Base {};
class IMP_M24_Camo1 extends IMP_M24_Base {};
class IMP_M24_Camo2 extends IMP_M24_Base {};
class IMP_M24_Camo3 extends IMP_M24_Base {};