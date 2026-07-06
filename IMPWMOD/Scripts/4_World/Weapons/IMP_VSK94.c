class IMP_VSK94_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new VSSRecoil(this);
	}
	
	override void OnDebugSpawn()
    {
        GameInventory inventory = GetInventory();

        SpawnAttachedMagazine( "IMP_Mag_VSK94_20Rnd" );
		inventory.CreateInInventory( "PSO1Optic" );
		inventory.CreateInInventory( "Battery9V" );
    }
};
class IMP_VSK94 : IMP_VSK94_Base {};