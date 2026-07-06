class IMP_AUGA3_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new FamasRecoil(this);
	}
	
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "ReflexOptic" );	
		inventory.CreateInInventory( "IMP_Grip_ZenitRK0" );
		inventory.CreateInInventory( "IMP_Flashlight_Steiner9021" );		
		inventory.CreateInInventory( "IMP_Supp_556_Black" );
		inventory.CreateInInventory( "Battery9V" );	
		inventory.CreateInInventory( "Battery9V" );	
		
		SpawnAttachedMagazine("IMP_Mag_M4_Drum60Rnd");
	}
};