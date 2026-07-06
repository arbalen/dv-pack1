class ActionFoldBipodIMP: ActionSingleUseBase
{
	Bipod_Base m_Bipod;
	
	void ActionFoldBipodIMP()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_ATTACHBARREL;//CMD_ACTIONMOD_INTERACTONCE
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}

	override typename GetInputType()
	{
		return ToggleBipodActionInputIMP;
	}

	override bool HasTarget()
	{
		return false;
	}

	override string GetText()
	{
		return "Fold Bipod";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if ( item.IsInherited(Weapon_Base))	
		{
			m_Bipod = ItemBase.Cast(item.FindAttachmentBySlotName("weaponBipod"));
		}
		else
			return false;

		if ( m_Bipod && m_Bipod.IsOpen())// && item.FindAttachmentBySlotName("weaponBipod").IsKindOf("Bipod_Base") )
		{

			return true;
		}
		
		return false;
	}

	override void OnExecute( ActionData action_data )
    {
        ItemBase item = ItemBase.Cast( action_data.m_MainItem.GetInventory().FindAttachmentByName("weaponBipod") ); 

        Weapon_Base rifle = Weapon_Base.Cast(action_data.m_MainItem);

        if ( item )
        {
            item.Close();
        }

		if( rifle )
		{
			rifle.BipodFolded();
		}
	}
}