class IMP_MAR10_Base : RifleBoltFree_Base
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
	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionDeployBipodIMP);
		AddAction(ActionFoldBipodIMP);
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
};

class IMP_MAR10 : IMP_MAR10_Base 
{
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "ACOGOptic" );	
		inventory.CreateInInventory( "IMP_M4_CSBttstck" );
		inventory.CreateInInventory( "IMP_MAR10_Suppressor" );		
		inventory.CreateInInventory( "Atlas_Bipod" );
		inventory.CreateInInventory( "IMP_Flashlight_Steiner9021" );
		inventory.CreateInInventory( "IMP_PistolGrip_AR_AR15A2" );
		inventory.CreateInInventory( "Battery9V" );
		
		SpawnAttachedMagazine("IMP_Mag_MAR10_10rnd");
	}
};