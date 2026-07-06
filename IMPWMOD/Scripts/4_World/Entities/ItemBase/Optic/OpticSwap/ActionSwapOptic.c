class ActionSwapOptic : ActionSingleUseBase
{
	void ActionSwapOptic()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_PICKUP_HANDS;
	}

	override void CreateConditionComponents ()
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}

	override string GetText()
	{
		return "Сменить сетку";
	}

	override bool HasTarget()
	{
		return false;
	}

	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
		if (item)
			return true;
		return false;
	}

	override bool ActionConditionContinue(ActionData action_data)
	{
		return true;
	}

	override void OnExecuteClient ( ActionData action_data )
    {
        #ifdef DAYZ_1_11
            ClearInventoryReservation(action_data);
        #else
            ClearInventoryReservationEx(action_data);
        #endif
    }	

	override void OnExecuteServer ( ActionData action_data )
	{
		if ( !GetGame().IsMultiplayer() )
		{			
			#ifdef DAYZ_1_11
				ClearInventoryReservation(action_data);
			#else
				ClearInventoryReservationEx(action_data);
			#endif
		}
		ItemBase old_item = action_data.m_MainItem;
		string itemName = old_item.GetType();
		string str = "";
		switch (itemName)
		{
			case "IMP_Optic_C_AksionCobraEKP818":
				str = "IMP_Optic_C_AksionCobraEKP818_2";
				break;
			case "IMP_Optic_C_AksionCobraEKP818_2":
				str = "IMP_Optic_C_AksionCobraEKP818_3";
				break;
			case "IMP_Optic_C_AksionCobraEKP818_3":
				str = "IMP_Optic_C_AksionCobraEKP818_4";
				break;
			case "IMP_Optic_C_AksionEKP802Dovetail":
				str = "IMP_Optic_C_AksionEKP802Dovetail_2";
				break;
			case "IMP_Optic_C_AksionEKP802Dovetail_2":
				str = "IMP_Optic_C_AksionEKP802Dovetail_3";
				break;
			case "IMP_Optic_C_AksionEKP802Dovetail_3":
				str = "IMP_Optic_C_AksionEKP802Dovetail_4";
				break;
			case "IMP_Optic_C_VOMZPiladP1x42Weaver":
				str = "IMP_Optic_C_VOMZPiladP1x42Weaver_2";
				break;
			case "IMP_Optic_C_VOMZPiladP1x42Weaver_2":
				str = "IMP_Optic_C_VOMZPiladP1x42Weaver_3";
				break;
			case "IMP_Optic_C_VOMZPiladP1x42Weaver_3":
				str = "IMP_Optic_C_VOMZPiladP1x42Weaver";
				break;
			case "IMP_Optic_C_AksionCobraEKP818_4":
				str = "IMP_Optic_C_AksionCobraEKP818";
				break;
			case "IMP_Optic_C_AksionEKP802Dovetail_4":
				str = "IMP_Optic_C_AksionEKP802Dovetail";
				break;
			case "IMP_Optic_C_WaltherMRS":
				str = "IMP_Optic_C_WaltherMRS_2";
				break;
			case "IMP_Optic_C_WaltherMRS_2":
				str = "IMP_Optic_C_WaltherMRS_3";
				break;
			case "IMP_Optic_C_WaltherMRS_3":
				str = "IMP_Optic_C_WaltherMRS";
				break;
			case "IMP_Optic_SC_BelomoPK06":
				str = "IMP_Optic_SC_BelomoPK06_2";
				break;
			case "IMP_Optic_SC_BelomoPK06_2":
				str = "IMP_Optic_SC_BelomoPK06";
				break;
		}
		
		TurnItemIntoItemLambda lambda = new TurnItemIntoItemLambda(action_data.m_MainItem, str, action_data.m_Player);
		lambda.SetTransferParams(true, true, true, false, 1);
		action_data.m_Player.ServerReplaceItemInHandsWithNew(lambda);
	}
};
