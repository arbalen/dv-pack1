class IMP_GlockPDW_Base : RifleBoltLock_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new Mp5kRecoil(this);
	}
	
	override int GetWeaponSpecificCommand(int weaponAction ,int subCommand)
	{
		if ( weaponAction == WeaponActions.CHAMBERING)
		{
			switch (subCommand)
			{
				case WeaponActionChamberingTypes.CHAMBERING_ONEBULLET_UNIQUE_CLOSED:
					return WeaponActionChamberingTypes.CHAMBERING_ONEBULLET_OPENED;
				
				default:
					return subCommand;
			}
		
		}
		return subCommand;
	}
};
class IMP_Glock18PDW : IMP_GlockPDW_Base {};
class IMP_Glock17PDW : IMP_GlockPDW_Base {};