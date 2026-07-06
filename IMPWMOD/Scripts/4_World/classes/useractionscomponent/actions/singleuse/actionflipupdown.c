class ActionOpticFlipDown: ActionSingleUseBase
{
    void ActionOpticFlipDown()
    {
        m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_UNPINGRENAGE;
        m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONFB_UNPINGRENAGE;
    };
    
    override void CreateConditionComponents()  
    {        
        m_ConditionItem = new CCINonRuined;
        m_ConditionTarget = new CCTNone;
    };
    
    override bool HasProneException()
    {
        return true;
    };
    
    override bool HasTarget()
    {
        return false;
    };
    
    override string GetText()
    {
        return "#STR_IMP_LensChange";
    };
    
    override void OnExecuteServer(ActionData action_data)
    {
        if(action_data.m_MainItem && action_data.m_MainItem.GetHierarchyRootPlayer() == action_data.m_Player)
        {
            MiscGameplayFunctions.TurnItemIntoItemEx(action_data.m_Player, new ChangeOpticStateLambda(action_data.m_MainItem, "IMP_Optic_EOTechXPSOpticDown", action_data.m_Player));         
        }
    };
};

class ActionOpticFlipUp: ActionSingleUseBase
{
    void ActionOpticFlipUp()
    {
        m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_UNPINGRENAGE;
        m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONFB_UNPINGRENAGE;
    };
    
    override void CreateConditionComponents()  
    {        
        m_ConditionItem = new CCINonRuined;
        m_ConditionTarget = new CCTNone;
    };
    
    override bool HasProneException()
    {
        return true;
    };
    
    override bool HasTarget()
    {
        return false;
    };
    
    override string GetText()
    {
        return "#STR_IMP_LensChange";
    };
    
    override void OnExecuteServer(ActionData action_data)
    {
        if(action_data.m_MainItem && action_data.m_MainItem.GetHierarchyRootPlayer() == action_data.m_Player)
        {
            MiscGameplayFunctions.TurnItemIntoItemEx(action_data.m_Player, new ChangeOpticStateLambda(action_data.m_MainItem, "IMP_Optic_EOTechXPSOpticUp", action_data.m_Player));       
        }
    };
};

class ChangeOpticStateLambda: TurnItemIntoItemLambda
{
    void ChangeOpticStateLambda(EntityAI old_item, string new_item_type, PlayerBase player)
    {
        InventoryLocation hands = new InventoryLocation;
        hands.SetHands(player, null);
        OverrideNewLocation(hands);
    };
};

class ActionAttachedOpticFlipDown: ActionSingleUseBase
{
	IMP_Optic_EOTechXPSOpticUp m_optic;
	
	void ActionAttachedOpticFlipDown()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_ATTACHSCOPE;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}

    override typename GetInputType() 
    {
        return ToggleAttachedOpticInput;
    }


	override bool HasTarget()
	{
		return false;
	}

	override string GetText()
	{
		return "#STR_IMP_LensChange";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if ( item.IsInherited(Rifle_Base))	
		{
			m_optic = IMP_Optic_EOTechXPSOpticUp.Cast(item.FindAttachmentBySlotName("weaponOptics"));
		}
		else
			return false;

		if ( m_optic && item.FindAttachmentBySlotName("weaponOptics").IsKindOf("IMP_Optic_EOTechXPSOpticUp") )
		{
			return true;
		}
		return false;
	}

	override void OnExecuteServer ( ActionData action_data )
    {
        ItemBase item = ItemBase.Cast( action_data.m_MainItem.GetInventory().FindAttachmentByName("weaponOptics") ); 
        if ( item )
        {
			if (item.IsLockedInSlot())
				item.UnlockFromParent();
			
			auto lambda = new ReplaceOpticLambda ( item, "IMP_Optic_EOTechXPSOpticDown", action_data.m_Player);
			action_data.m_Player.ServerReplaceItemWithNew( lambda );
        }
    }
};

class ActionAttachedOpticFlipUp: ActionSingleUseBase
{
	IMP_Optic_EOTechXPSOpticDown m_optic;
	
	void ActionAttachedOpticFlipUp()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_ATTACHSCOPE;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}

    override typename GetInputType() 
    {
        return ToggleAttachedOpticInput;
    }


	override bool HasTarget()
	{
		return false;
	}

	override string GetText()
	{
		return "#STR_IMP_LensChange";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if ( item.IsInherited(Rifle_Base))	
		{
			m_optic = IMP_Optic_EOTechXPSOpticDown.Cast(item.FindAttachmentBySlotName("weaponOptics"));
		}
		else
			return false;

		if ( m_optic && item.FindAttachmentBySlotName("weaponOptics").IsKindOf("IMP_Optic_EOTechXPSOpticDown") )
		{
			return true;
		}
		
		return false;
	}

	override void OnExecuteServer ( ActionData action_data )
    {
        ItemBase item = ItemBase.Cast( action_data.m_MainItem.GetInventory().FindAttachmentByName("weaponOptics") ); 
        if ( item )
        {
			if (item.IsLockedInSlot())
				item.UnlockFromParent();
			
			auto lambda = new ReplaceOpticLambda ( item, "IMP_Optic_EOTechXPSOpticUp", action_data.m_Player);
			action_data.m_Player.ServerReplaceItemWithNew( lambda );
        }
    }
};
class ToggleAttachedOpticInput : DefaultActionInput
{
	void ToggleAttachedOpticInput(PlayerBase player)
	{
		SetInput("UAToggleAttScope");
		m_InputType = ActionInputType.AIT_SINGLE;	
	}
	
	override void OnActionStart()
	{
		super.OnActionStart();
		m_Active = false;
	}
	
	override bool WasEnded() 
    {
        return false;
    }
};

class ReplaceOpticLambda : ReplaceItemWithNewLambdaBase
{
	PlayerBase m_Player;

	void ReplaceOpticLambda ( EntityAI old_item, string new_item_type, PlayerBase player)
	{
		m_Player = player;
		
	}
	
	override void CopyOldPropertiesToNew( notnull EntityAI old_item, EntityAI new_item )
	{
		super.CopyOldPropertiesToNew( old_item, new_item );

		MiscGameplayFunctions.TransferInventory(old_item, new_item, m_Player);
		MiscGameplayFunctions.TransferItemProperties(old_item, new_item);
	}
	
	override protected void OnSuccess(EntityAI new_item)
	{
		GetGame().RemoteObjectTreeDelete(new_item);
		CreateNetworkObjectInfo(new_item);
	}
}