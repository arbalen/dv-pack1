class IMP_VSS_Tact_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new VSSRecoil(this);
	}
	
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "IMP_Optic_HAMR" );	
		inventory.CreateInInventory( "IMP_Flashlight_SureFireXC1" );		
		inventory.CreateInInventory( "Battery9V" );
			
		SpawnAttachedMagazine("IMP_Mag_VSS_30Rnd");
	}
};
class IMP_VSS_Tact : IMP_VSS_Tact_Base {};