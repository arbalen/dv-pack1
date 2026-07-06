class IMP_K98_Base extends BoltActionRifle_InnerMagazine_Base
{
	void IMP_K98_Base ()
	{
	}
	
	override bool CanEnterIronsights()
	{
		ItemOptics optic = GetAttachedOptics();
		if (optic && PUScopeOptic.Cast(optic))
			return true;
		return super.CanEnterIronsights();
	}
	
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "IMP_Optic_ProgressPU35x" );	
	}
};


class IMP_K98 extends IMP_K98_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new MosinRecoil(this);
	}
	
};
