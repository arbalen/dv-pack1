class IMP_TAC21_Base: BoltActionRifle_ExternalMagazine_Base
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
			
		SpawnAttachedMagazine("IMP_Mag_TAC21_5Rnd");
	}
};
class IMP_TAC21 extends IMP_TAC21_Base {};