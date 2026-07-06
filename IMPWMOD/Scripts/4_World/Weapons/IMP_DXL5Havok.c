class IMP_W_DXL5Havok_Base: BoltActionRifle_ExternalMagazine_Base
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
			return new IMP_BoltAction_BipodRecoil(this);
		}
		else return new ScoutRecoil(this);
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
	
	override void OnDebugSpawn()
	{
		GameInventory inventory = GetInventory();

		inventory.CreateInInventory( "IMP_Grip_ZenitRK0" );	
		inventory.CreateInInventory( "Atlas_Bipod" );
		inventory.CreateInInventory( "IMP_PistolGrip_AR_AR15A2" );		
		inventory.CreateInInventory( "HuntingOptic" );	
		
		SpawnAttachedMagazine("IMP_Mag_DXL5Havok_7Rnd");
	}
};
class IMP_W_DXL5Havok extends IMP_W_DXL5Havok_Base {};