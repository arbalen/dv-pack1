class BC_G36_Base : RifleBoltFree_Base
{
    override RecoilBase SpawnRecoilObject()
    {
        return new FALRecoil(this);
    }
};
class BC_G36: BC_G36_Base {};
class BC_G36_Admin: BC_G36_Base {};