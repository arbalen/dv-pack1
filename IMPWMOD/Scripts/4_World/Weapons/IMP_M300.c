class IMP_M300_Base: BoltActionRifle_ExternalMagazine_Base
{	
	override RecoilBase SpawnRecoilObject()
	{
		return new CZ527Recoil(this);
	}
	
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "IMP_Supp_408_Black" );	
		inventory.CreateInInventory( "HuntingOptic" );
		
		SpawnAttachedMagazine("IMP_Mag_M300_5Rnd");
	}
};
class IMP_M300 extends IMP_M300_Base {};