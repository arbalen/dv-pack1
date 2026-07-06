class IMP_Kivaari_Base: RifleBoltFree_Base
{
	void IMP_Kivaari_Base()
	{	
		EntityAI ParentItem = this;		
		UnFoldIronsIMP(ParentItem);	
	}
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
		else return new FALRecoil(this);
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

		if (ItemOptics.Cast(item))
		{ 
			EntityAI ParentItem = this;
			FoldIronsIMP(ParentItem);
		}
		if ( slot_name == "HandlesM4" )
        {
            HideUnhideSelection("HandlesM4", 0);
        }
	}
	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);

		if (ItemOptics.Cast(item))
		{ 
			EntityAI ParentItem = this;
			UnFoldIronsIMP(ParentItem);
		}
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

		inventory.CreateInInventory( "IMP_Supp_338_Black" );	
		inventory.CreateInInventory( "HuntingOptic" );
		inventory.CreateInInventory( "Atlas_Bipod" );		
		inventory.CreateInInventory( "IMP_PistolGrip_AR_AR15A2" );	
		
		SpawnAttachedMagazine("IMP_Mag_Kivaari_5Rnd");
	}
};