class BC_FNFiveSeven_Base : Pistol_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new GlockRecoil(this);
	}
};
class BC_FNFiveSeven_Tan : BC_FNFiveSeven_Base{};