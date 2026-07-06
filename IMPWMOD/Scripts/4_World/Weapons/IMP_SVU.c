class IMP_SVU_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new FamasRecoil(this);
	}		
		
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "IMP_Optic_C_AksionEKP802Dovetail_3" );			
		inventory.CreateInInventory( "Battery9V" );
			
		SpawnAttachedMagazine("IMP_Mag_SVD_CoupledClip_20Rnd");
	}
};

class IMP_SVU : IMP_SVU_Base {};