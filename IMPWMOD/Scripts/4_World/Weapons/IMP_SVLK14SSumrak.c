class IMP_W_SVLK14SSumrak_Base extends BoltActionRifle_InnerMagazine_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new MosinRecoil(this);
	}
	
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "HuntingOptic" );	
	}
};
class IMP_W_SVLK14SSumrak : IMP_W_SVLK14SSumrak_Base {};