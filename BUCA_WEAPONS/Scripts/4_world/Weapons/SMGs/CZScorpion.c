class BC_CZScorpion_Base : RifleBoltLock_Base
{
    override RecoilBase SpawnRecoilObject()
    {
        return new Mp5kRecoil(this);
    }
}
class BC_CZScorpion: BC_CZScorpion_Base {};