class IMP_TheFix_Base : BoltActionRifle_ExternalMagazine_Base
{
	/* override bool CanEnterIronsights()
	{
		return true;
	} */
	
	/* override void AssembleGun()
	{
		super.AssembleGun();
		
		if ( !FindAttachmentBySlotName("weaponOpticsAug") )
		{
			GetInventory().CreateAttachment("SSG82Optic");
		}
	} */
	
	override RecoilBase SpawnRecoilObject()
	{
		return new CZ550Recoil(this);
	}
			
	//Debug menu Spawn Ground Special
	/*override void OnDebugSpawn()
	{
		super.OnDebugSpawn();
	}*/
};


/* class SSG82Optic: ItemOptics
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		return true;
	}
};
 */


class IMP_TheFix: IMP_TheFix_Base {};