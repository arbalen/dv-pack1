class IMP_VR80_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new M4a1Recoil(this);
	}

	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "ReflexOptic" );	
		inventory.CreateInInventory( "IMP_Flashlight_SureFireXC1" );
		inventory.CreateInInventory( "Battery9V" );		
		inventory.CreateInInventory( "Battery9V" );
			
		SpawnAttachedMagazine("IMP_Mag_VR80_10Rnd");
	}
};

class IMP_VR80 : IMP_VR80_Base {};