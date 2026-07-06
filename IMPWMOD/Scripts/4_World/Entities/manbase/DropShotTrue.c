modded class PlayerBase extends ManBase
{
	protected bool m_PlayerIsInProneState;

//	override void Init()
//	{
//		super.Init();
//		RegisterNetSyncVariableBool("m_PlayerIsInProneState");
//	}

	bool IsPlayerInProneState()
	{
		return m_PlayerIsInProneState;
	}

	void SetPlayerProneState(bool player_in_prone_state)
	{
		m_PlayerIsInProneState = player_in_prone_state;
//		SetSynchDirty();
	}

	override void OnStanceChange(int previousStance, int newStance)
	{	
		int prone = DayZPlayerConstants.STANCEMASK_PRONE | DayZPlayerConstants.STANCEMASK_RAISEDPRONE;
		int notProne = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_RAISEDERECT | DayZPlayerConstants.STANCEMASK_RAISEDCROUCH;
		
		if ( ( IsStance(previousStance, prone) && IsStance(newStance, notProne) ) || ( IsStance(previousStance, notProne) && IsStance(newStance, prone) ) )
		{
			AbortWeaponEvent();
			GetWeaponManager().RefreshAnimationState();
		}

		if ( IsStance(previousStance, prone) && IsStance(newStance, notProne))
		{
//			Print ("Player is in prone = false");
			SetPlayerProneState(false); //returns false when change to not prone
		}

		if ( IsStance(previousStance, notProne) && IsStance(newStance, prone) )
		{
//			Print ("Player is in prone = true");
			SetPlayerProneState(true); //returns true when change to prone
		}

		if (GetInstanceType() == DayZPlayerInstanceType.INSTANCETYPE_SERVER)
		{
			if (newStance == DayZPlayerConstants.STANCEIDX_PRONE)
			{
				//Print("Update anim");
				if (m_BrokenLegState == eBrokenLegs.BROKEN_LEGS)
					m_InjuryHandler.m_ForceInjuryAnimMask = m_InjuryHandler.m_ForceInjuryAnimMask & ~eInjuryOverrides.BROKEN_LEGS;
				else if (m_BrokenLegState == eBrokenLegs.BROKEN_LEGS_SPLINT)
					m_InjuryHandler.m_ForceInjuryAnimMask = m_InjuryHandler.m_ForceInjuryAnimMask & ~eInjuryOverrides.BROKEN_LEGS_SPLINT;
				
				m_InjuryHandler.m_ForceInjuryAnimMask = m_InjuryHandler.m_ForceInjuryAnimMask | eInjuryOverrides.PRONE_ANIM_OVERRIDE;
				ForceUpdateInjuredState();
			}
			else if (previousStance == DayZPlayerConstants.STANCEIDX_PRONE || previousStance == DayZPlayerConstants.STANCEIDX_RAISEDPRONE)
			{
				m_InjuryHandler.m_ForceInjuryAnimMask = m_InjuryHandler.m_ForceInjuryAnimMask & ~eInjuryOverrides.PRONE_ANIM_OVERRIDE;
				//Print("Update anim 2");
				if (m_BrokenLegState == eBrokenLegs.BROKEN_LEGS)
					m_InjuryHandler.m_ForceInjuryAnimMask = m_InjuryHandler.m_ForceInjuryAnimMask | eInjuryOverrides.BROKEN_LEGS;
				else if (m_BrokenLegState == eBrokenLegs.BROKEN_LEGS_SPLINT)
					m_InjuryHandler.m_ForceInjuryAnimMask = m_InjuryHandler.m_ForceInjuryAnimMask | eInjuryOverrides.BROKEN_LEGS_SPLINT;
				
				ForceUpdateInjuredState();
			}
		}
	}
}