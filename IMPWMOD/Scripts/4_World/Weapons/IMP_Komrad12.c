class IMP_Komrad12_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new SiagaRecoil(this);
	}
	
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "ReflexOptic" );	
		inventory.CreateInInventory( "IMP_Grip_ZenitRK0" );
		inventory.CreateInInventory( "IMP_Flashlight_SureFireXC1" );		
		inventory.CreateInInventory( "Battery9V" );
		inventory.CreateInInventory( "Battery9V" );
		
		SpawnAttachedMagazine("IMP_Mag_Komrad12_10Rnd");
	}
}
class IMP_Komrad12 : IMP_Komrad12_Base
{

};