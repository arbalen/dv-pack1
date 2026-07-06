class IMP_AWM_Base: BoltActionRifle_ExternalMagazine_Base
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
		
		SpawnAttachedMagazine("IMP_Mag_AWM_5Rnd");
	}
};
class IMP_AWM extends IMP_AWM_Base {};
class IMP_AWM_Black extends IMP_AWM_Base {};