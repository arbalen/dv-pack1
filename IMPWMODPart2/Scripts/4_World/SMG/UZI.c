class IMP_UZI_Base : RifleBoltLock_Base
{
    override RecoilBase SpawnRecoilObject()
	{
		return new Cz61Recoil(this);
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

	void IMP_UZI_Base()
	{	
		HideScopeMountBlackout(this);
	}

	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);

		if (ItemOptics.Cast(item))
		{ 
			ShowScopeMountBlackout(this);
		}
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);

		if (ItemOptics.Cast(item))
		{ 
			HideScopeMountBlackout(this);
		}
	}	
};
class IMP_UZI: IMP_UZI_Base {};