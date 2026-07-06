class BC_FAMASF1_Base : RifleBoltFree_Base
{
    override RecoilBase SpawnRecoilObject()
    {
        return new AUGRecoil(this);
    }
};
class BC_FAMASF1: BC_FAMASF1_Base {};