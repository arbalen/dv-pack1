class IMP_R700_Base: BoltActionRifle_ExternalMagazine_Base
{	
	override RecoilBase SpawnRecoilObject()
	{
		return new CZ527Recoil(this);
	}
	
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "HuntingOptic" );	
		inventory.CreateInInventory( "IMP_Supp_338_Black" );
			
		SpawnAttachedMagazine("IMP_Mag_R700_5Rnd");
	}
};
class IMP_AICS extends IMP_R700_Base {};
class IMP_McMillan_A5 extends IMP_R700_Base {};
class IMP_R700 extends IMP_R700_Base {};