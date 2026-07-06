class BC_HKPSG1_Base : RifleBoltFree_Base
{
    override RecoilBase SpawnRecoilObject()
    {
        return new FALRecoil(this);
    }
};
class BC_HKPSG1: BC_HKPSG1_Base {};