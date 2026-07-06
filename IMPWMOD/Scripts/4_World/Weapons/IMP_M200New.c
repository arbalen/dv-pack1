class IMP_M200New_Base: BoltActionRifle_ExternalMagazine_Base
{	
	override RecoilBase SpawnRecoilObject()
	{
		return new CZ527Recoil(this);
	}
	
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "HuntingOptic" );	
		inventory.CreateInInventory( "IMP_Supp_408_Black" );
		
		SpawnAttachedMagazine("IMP_Mag_M200_5Rnd");
	}
};
class IMP_M200New_1 extends IMP_M200New_Base {};
class IMP_M200New_2 extends IMP_M200New_Base {};