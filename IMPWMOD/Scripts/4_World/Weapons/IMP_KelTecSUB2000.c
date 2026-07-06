class IMP_KelTecSUB2000_Base : RifleBoltLock_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new GlockRecoil(this);
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

class IMP_KelTecSUB2000 : IMP_KelTecSUB2000_Base 
{
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "ReflexOptic" );	
		inventory.CreateInInventory( "IMP_Flashlight_Steiner9021" );	
		inventory.CreateInInventory( "Battery9V" );	
		
		SpawnAttachedMagazine("IMP_KelTecSUB2000_Mag_50Rnd");
	}
};
class IMP_KelTecSUB2000_Supp_Base : IMP_KelTecSUB2000_Base 
{
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "ReflexOptic" );		
		inventory.CreateInInventory( "Battery9V" );	
		
		SpawnAttachedMagazine("IMP_KelTecSUB2000_Mag_50Rnd");
	}
};