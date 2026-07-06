class IMP_MP443_Base : Pistol_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new Colt1911Recoil(this);
	}
	
	//Debug menu Spawn Ground Special
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();
		inventory.CreateInInventory( "PistolSuppressor" );
		inventory.CreateInInventory( "TLRLight" );
		inventory.CreateInInventory( "Battery9V" );
		
		SpawnAttachedMagazine("IMP_Mag_MP443_18Rnd");
	}
};

class IMP_MP443 : IMP_MP443_Base {};