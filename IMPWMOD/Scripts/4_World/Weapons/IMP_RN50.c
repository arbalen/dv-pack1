class IMP_RN50_Base : Izh18_Base
{	
	override RecoilBase SpawnRecoilObject()
    {
        return new Izh18SawedOffRecoil(this);
    }
			
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "HuntingOptic" );
	}
};
class IMP_RN50 : IMP_RN50_Base {};