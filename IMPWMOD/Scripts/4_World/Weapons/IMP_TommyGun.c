class IMP_TommyGun_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new VSSRecoil(this);
	}
	
	override void OnDebugSpawn()
	{
		EntityAI entity;
		if ( Class.CastTo(entity, this) )
		{
			SpawnAttachedMagazine("IMP_TommyGun_Drum_100Rnd");
		}
	}
};

class IMP_TommyGun : IMP_TommyGun_Base
{
};
