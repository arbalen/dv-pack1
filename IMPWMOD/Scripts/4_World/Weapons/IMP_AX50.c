class IMP_AX50_Base: BoltActionRifle_ExternalMagazine_Base
{	
	override RecoilBase SpawnRecoilObject()
	{
		return new CZ527Recoil(this);
	}
	
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "HuntingOptic" );	
		
		SpawnAttachedMagazine("IMP_Mag_AX50_5Rnd");
	}
	
};
class IMP_AX50_Black extends IMP_AX50_Base {};