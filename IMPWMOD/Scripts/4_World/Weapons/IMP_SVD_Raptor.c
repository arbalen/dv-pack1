class IMP_SVDRaptor_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		if(GetGame().IsClient())
		{
			PlayerBase player =  GetGame().GetPlayer();
			bool m_Prone = player.IsPlayerInProneState();
		}

		if (m_BipodDeployed && m_Prone)
		{
			return new IMP_SemiAutomatic_BipodRecoil(this);
		}
		else return new SvdRecoil(this);
	}
	
	private void HideUnhideSelection(string selectionName, bool hide = false)
    {
        TStringArray selectionNames = new TStringArray;
        ConfigGetTextArray("simpleHiddenSelections",selectionNames);
        int selectionId = selectionNames.Find(selectionName);
        SetSimpleHiddenSelectionState(selectionId, hide);
    }
	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);

		if ( slot_name == "HandlesM4" )
        {
            HideUnhideSelection("HandlesM4", 0);
        }
	}
	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);

		if ( slot_name == "HandlesM4" )
        {
          HideUnhideSelection("HandlesM4", 1);
        }
	}
	
	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionDeployBipodIMP);
		AddAction(ActionFoldBipodIMP);
	}
	
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "IMP_Supp_SVD" );	
		inventory.CreateInInventory( "IMP_Grip_ZenitRK0" );
		inventory.CreateInInventory( "IMP_Bttstk_AR_Ar15StrikeIndustriesViper" );		
		inventory.CreateInInventory( "IMP_PistolGrip_AR_AR15HeraArmsHG15" );
		inventory.CreateInInventory( "Atlas_Bipod" );
		inventory.CreateInInventory( "IMP_Flashlight_SureFireXC1" );
		inventory.CreateInInventory( "IMP_Optic_Pilad4" );
		inventory.CreateInInventory( "Battery9V" );
			
		SpawnAttachedMagazine("Mag_SVD_10Rnd");
	}
};

class IMP_SVDRaptor : IMP_SVDRaptor_Base {};