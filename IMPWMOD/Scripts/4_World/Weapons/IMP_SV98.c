class IMP_SV98_Base: Scout_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new ScoutRecoil(this);
	}
	
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "IMP_Supp_338_Black" );	
		inventory.CreateInInventory( "HuntingOptic" );
			
		SpawnAttachedMagazine("IMP_Mag_SV98_5Rnd");
	}
};