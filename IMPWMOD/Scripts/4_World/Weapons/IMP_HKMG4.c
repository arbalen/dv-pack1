class IMP_HKMG4_Base : RifleBoltFree_Base
{

    override bool CanEnterIronsights()
	{
		return true;
	}
	
	override void AssembleGun()
	{
		super.AssembleGun();
		
		if ( !FindAttachmentBySlotName("weaponOpticsAug") )
		{
			GetInventory().CreateAttachment("HKMG4Optic");
		}
	}
		
	//Debug menu Spawn Ground Special
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "HKMG4Optic" );	
		inventory.CreateInInventory( "IMP_Supp_308_Black" );
		inventory.CreateInInventory( "IMP_Flashlight_Steiner9021" );		
		inventory.CreateInInventory( "Battery9V" );	
		
		SpawnAttachedMagazine("IMP_Drum_HKMG4_80Rnd");
	}
};

class IMP_HKMG4 : IMP_HKMG4_Base {};


class HKMG4Optic: ItemOptics
{
	override bool CanPutAsAttachment( EntityAI parent )
	{
		return true;
	}
};