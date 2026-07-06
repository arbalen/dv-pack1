class IMP_Ruger_Base: BoltActionRifle_ExternalMagazine_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new ScoutRecoil(this);
	}
};
class IMP_Ruger extends IMP_Ruger_Base {};