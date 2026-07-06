class IMP_Optic_EOTechXPSOpticUp : ItemOptics 
{
    override void SetActions()
	{
		super.SetActions();
		AddAction(ActionOpticFlipDown);
	}
};
class IMP_Optic_EOTechXPSOpticDown : ItemOptics 
{
    override void SetActions()
	{
		super.SetActions();
		AddAction(ActionOpticFlipUp);
	}
};

//Под М4 Ближние-средние//	
class IMP_Optic_TAC21 : ItemOptics
{
    override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
}
class IMP_Optic_AX338 : ItemOptics
{
    override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
}
class IMP_Optic_HAMR_Base: ItemOptics
{
	override void SetActions()
	{
		super.SetActions();
		
		RemoveAction(ActionViewOptics);
		AddAction(ActionViewBinoculars);
	}
};
class IMP_Optic_VortexRazor_Base : ItemOptics{};
class IMP_Optic_NCStar_Base: ItemOptics
{
	override void SetActions()
	{
		super.SetActions();
		
		RemoveAction(ActionViewOptics);
		AddAction(ActionViewBinoculars);
	}
	override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
};
class IMP_Optic_Scope9x : ItemOptics
{
    override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
}
class IMP_Optic_AimPoint : ItemOptics{};
class IMP_Optic_EoTech_Base : ItemOptics{};
class IMP_Optic_EoTech_XPS3_Base : ItemOptics{};
class IMP_Optic_HoloScope_Base : ItemOptics{};
class IMP_Optic_HoloSight_Base : ItemOptics{};
class IMP_Optic_LongRangeScope20x_Base : ItemOptics
{
    override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
}
class IMP_Optic_Scope3x_Base : ItemOptics{};
class IMP_Optic_ACOG_Base : ItemOptics{};
class IMP_Optic_SigSauerRomeo7_Base : ItemOptics{};
class IMP_Optic_RazorHDGen2_Base : ItemOptics
{
    override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
}
class IMP_Optic_Scope6x_Base : ItemOptics{};
class IMP_Optic_BlackBridge_Base : ItemOptics
{
    override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
}
class IMP_Optic_SIGTango6T_Base : ItemOptics
{
    override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
}
class IMP_Optic_LeupoldMark4LR20_Base : ItemOptics
{
    override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
}
class IMP_Optic_Pilad4_Base : ItemOptics
{
    override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
}
class IMP_Optic_EOTechVudu6_Base : ItemOptics
{
    override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
}
class IMP_Optic_NightForceATACR735_Base : ItemOptics
{
    override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
}
class IMP_Optic_MarchTactical24_Base : ItemOptics
{
    override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
}
class IMP_Optic_BurrisTAC30_Base : ItemOptics
{
    override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
}
class IMP_Optic_SandBPM225_Base : ItemOptics
{
    override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
}
class IMP_Optic_SandBPM212_Base : ItemOptics
{
    override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
}
class IMP_Optic_HensoldtFF_Base : ItemOptics
{
    override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
}
class IMP_Optic_SandB_Base : ItemOptics
{
    override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
}
class IMP_Optic_1P59New_Base : ItemOptics
{
    override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
}
class IMP_Optic_1P69New_Base : ItemOptics
{
    override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
}
class IMP_Optic_BlackBridgeMini_Base : ItemOptics
{
    override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
}
//Система ВСС//	
class IMP_Optic_TacticalCraftsman_Base : ItemOptics
{
    override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
}
class IMP_Optic_UmarexWalther_Base : ItemOptics
{
    override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
}
class IMP_Optic_UTG3BugBuster_Base : ItemOptics
{
    override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
}
class IMP_Optic_NFAtacr1_8_Base : ItemOptics
{
    override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
}
class IMP_Optic_K624i_Base : ItemOptics
{
    override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
}
class IMP_Optic_1P69_Base : ItemOptics
{
    override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
}
class IMP_Optic_OKP5_Base : ItemOptics{};
//АК//
//Под АК Ближние-средние//	
class IMP_Optic_PKAS_Base : ItemOptics{};
class IMP_Optic_OKP7_Base : ItemOptics{};
//Под АК Средние-Дальние//
class IMP_Optic_1P59_Base : ItemOptics
{
    override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
}
class IMP_Optic_1P21_Base : ItemOptics
{
    override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
}
class IMP_Optic_1P29_Base : ItemOptics
{
    override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
}
//Ночники//

class IMP_Optic_PVS4_Base: ItemOptics
{
	override void InitOpticMode() //TODO - decide whether to randomize on spawn and how to determine it (attachment etc.)
	{
		super.InitOpticMode();
		
		SetCurrentOpticMode(GameConstants.OPTICS_STATE_NIGHTVISION);
	}
	
	override int GetCurrentNVType()
	{
		if (IsWorking())
		{
			switch (m_CurrentOpticMode)
			{
				case GameConstants.OPTICS_STATE_DAY:
					return NVTypes.NV_OPTICS_KAZUAR_DAY;
				
				case GameConstants.OPTICS_STATE_NIGHTVISION:
					return NVTypes.NV_OPTICS_KAZUAR_NIGHT;
			}
			Error("Undefined optic mode of " + this);
			return NVTypes.NONE;
		}
		else
		{
			return NVTypes.NV_OPTICS_OFF;
		}
	}
	
	override void OnOpticModeChange()
	{
		super.OnOpticModeChange();
		
		UpdateSelectionVisibility();
	}
	
	override void UpdateSelectionVisibility()
	{
		super.UpdateSelectionVisibility();
		
		switch (GetCurrentOpticMode())
		{
			case GameConstants.OPTICS_STATE_NIGHTVISION:
				HideSelection("hide_cover");
				HideSelection("hide_cover_pilot");
				//Print("DbgNVOptics | KazuarOptic | OPTICS_STATE_NIGHTVISION");
			break;
			
			case GameConstants.OPTICS_STATE_DAY:
				ShowSelection("hide_cover");
				if ( !GetGame().IsDedicatedServer() && !IsInOptics() ) //quick sanity check, just in case
				{
					//Print("DbgNVOptics | KazuarOptic | !IsInOptics() | OPTICS_STATE_DAY");
					ShowSelection("hide_cover_pilot");
				}
				//Print("DbgNVOptics | KazuarOptic | OPTICS_STATE_DAY");
			break;
		}
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionToggleNVMode);
	}
	override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
};

class IMP_Optic_PN23_Base: ItemOptics
{
	override void InitOpticMode() //TODO - decide whether to randomize on spawn and how to determine it (attachment etc.)
	{
		super.InitOpticMode();
		
		SetCurrentOpticMode(GameConstants.OPTICS_STATE_NIGHTVISION);
	}
	
	override int GetCurrentNVType()
	{
		if (IsWorking())
		{
			switch (m_CurrentOpticMode)
			{
				case GameConstants.OPTICS_STATE_DAY:
					return NVTypes.NV_OPTICS_KAZUAR_DAY;
				
				case GameConstants.OPTICS_STATE_NIGHTVISION:
					return NVTypes.NV_OPTICS_KAZUAR_NIGHT;
			}
			Error("Undefined optic mode of " + this);
			return NVTypes.NONE;
		}
		else
		{
			return NVTypes.NV_OPTICS_OFF;
		}
	}
	
	override void OnOpticModeChange()
	{
		super.OnOpticModeChange();
		
		UpdateSelectionVisibility();
	}
	
	override void UpdateSelectionVisibility()
	{
		super.UpdateSelectionVisibility();
		
		switch (GetCurrentOpticMode())
		{
			case GameConstants.OPTICS_STATE_NIGHTVISION:
				HideSelection("hide_cover");
				HideSelection("hide_cover_pilot");
				//Print("DbgNVOptics | KazuarOptic | OPTICS_STATE_NIGHTVISION");
			break;
			
			case GameConstants.OPTICS_STATE_DAY:
				ShowSelection("hide_cover");
				if ( !GetGame().IsDedicatedServer() && !IsInOptics() ) //quick sanity check, just in case
				{
					//Print("DbgNVOptics | KazuarOptic | !IsInOptics() | OPTICS_STATE_DAY");
					ShowSelection("hide_cover_pilot");
				}
				//Print("DbgNVOptics | KazuarOptic | OPTICS_STATE_DAY");
			break;
		}
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionToggleNVMode);
	}
	override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
};

class Rangefinder_Optic : ItemOptics
{
	static const float OPTIC_MAX_DIST = 913.4856;

	protected ref Timer m_Timer;
	protected TextWidget m_RangeText;
	protected PlayerBase 				m_Player;
	// How frequently the measurement should be taken
	float GetMeasurementUpdateInterval()
	{
		return 0.5;
	}
	
	override void OnWorkStart()
	{
		if( !GetGame().IsDedicatedServer())
		{
			PlayerBase player_this = PlayerBase.Cast( GetGame().GetPlayer() );
			PlayerBase player_owner = PlayerBase.Cast( GetHierarchyRootPlayer() );
			
			if ( player_this == player_owner )
			{
				StartPeriodicMeasurement();
			}
		}
	}
	
	override void OnWorkStop()
	{
		if( !GetGame().IsDedicatedServer())
		{
			PlayerBase player_this = PlayerBase.Cast( GetGame().GetPlayer() );
			PlayerBase player_owner = PlayerBase.Cast( GetHierarchyRootPlayer() );
			
			if ( player_this == player_owner )
			{
				StopPeriodicMeasurement();
			}
		}
	}
	
	void StartPeriodicMeasurement()
	{
		if( !m_Timer )
		{
			m_Timer = new Timer( CALL_CATEGORY_GAMEPLAY );
		}
		
		m_RangeText = TextWidget.Cast( GetGame().GetWorkspace().CreateWidgets( "IMPCOREMOD/GUI/layouts/rangefinder_hud.layout" ) );
		
		m_Timer.Run( GetMeasurementUpdateInterval(), this, "DoMeasurement", null, true );
	}
	
	void StopPeriodicMeasurement()
	{
		if( m_Timer )
		{
			m_Timer.Stop();
		}
		
		if (m_RangeText)
		{
			delete m_RangeText;
		}
	}
	
	void DoMeasurement()
	{

		PlayerBase player_this = PlayerBase.Cast( GetGame().GetPlayer() );

		if ( player_this )
		{
			vector 		from 			= GetGame().GetCurrentCameraPosition();
			vector 		to 				= from + (GetGame().GetCurrentCameraDirection() * OPTIC_MAX_DIST);
			vector 		contact_pos;
			vector 		contact_dir;
			int 		contactComponent;
			
			DayZPhysics.RaycastRV( from, to, contact_pos, contact_dir, contactComponent, NULL , NULL, player_this, false, false, ObjIntersectIFire);
			
			// Generate result
			float dist = vector.Distance( from, contact_pos );
			dist = Math.Round(dist);
			
			if (dist < OPTIC_MAX_DIST)
			{
				if( dist < 10 )
					m_RangeText.SetText( "00" + dist.ToString() );
				else if( dist < 100 )
					m_RangeText.SetText( "0" + dist.ToString() );
				else
					m_RangeText.SetText( dist.ToString() );
			}
			else
			{
				m_RangeText.SetText( "- - -" );
			}
		}
	}
}

class IMP_Optic_ATNXSight_Base : Rangefinder_Optic
{
	override void InitOpticMode() //TODO - decide whether to randomize on spawn and how to determine it (attachment etc.)
	{
		super.InitOpticMode();
		
		SetCurrentOpticMode(GameConstants.OPTICS_STATE_NIGHTVISION);
	}
	
	override int GetCurrentNVType()
	{
		if (IsWorking())
		{
			switch (m_CurrentOpticMode)
			{
				case GameConstants.OPTICS_STATE_DAY:
					return NVTypes.NV_OPTICS_KAZUAR_DAY;
				
				case GameConstants.OPTICS_STATE_NIGHTVISION:
					return NVTypes.NV_OPTICS_KAZUAR_NIGHT;
			}
			Error("Undefined optic mode of " + this);
			return NVTypes.NONE;
		}
		else
		{
			return NVTypes.NV_OPTICS_OFF;
		}
	}
	
	override void OnOpticModeChange()
	{
		super.OnOpticModeChange();
		
		UpdateSelectionVisibility();
	}
	
	override void OnOpticEnter()
    {
        super.OnOpticEnter();
        HideSelection("hide");
    }
    override void OnOpticExit()
    {
        super.OnOpticExit();
        ShowSelection("hide");
    }
	
	override void UpdateSelectionVisibility()
	{
		super.UpdateSelectionVisibility();
		
		switch (GetCurrentOpticMode())
		{
			case GameConstants.OPTICS_STATE_NIGHTVISION:
				HideSelection("hide_cover");
				HideSelection("hide_cover_pilot");
				//Print("DbgNVOptics | KazuarOptic | OPTICS_STATE_NIGHTVISION");
			break;
			
			case GameConstants.OPTICS_STATE_DAY:
				ShowSelection("hide_cover");
				if ( !GetGame().IsDedicatedServer() && !IsInOptics() ) //quick sanity check, just in case
				{
					//Print("DbgNVOptics | KazuarOptic | !IsInOptics() | OPTICS_STATE_DAY");
					ShowSelection("hide_cover_pilot");
				}
				//Print("DbgNVOptics | KazuarOptic | OPTICS_STATE_DAY");
			break;
		}
	}
};

class IMP_Optic_SC_SigSauerRomeo4_Base : ItemOptics{};
class IMP_Optic_SC_BelomoPK06_Base : ItemOptics
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionSwapOptic);
	}
};
class IMP_Optic_SC_AimPointMicroT1_Base : ItemOptics{};
class IMP_Optic_SC_AimPointMicroH2_Base : ItemOptics{};
class IMP_Optic_SC_AimPointCompM4_Base : ItemOptics{};
class IMP_Optic_ProgressPU35x_Base : ItemOptics{};
class IMP_Optic_BelomoPSO1m24x24_Base : ItemOptics{};
class IMP_Optic_BelomoPSO14x24_Base : ItemOptics{};
class IMP_Optic_C_AksionCobraEKP818_Base : ItemOptics
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionSwapOptic);
	}
};
class IMP_Optic_C_BelomoPKAA_Base : ItemOptics{};
class IMP_Optic_C_OKP7Dovetail_Base : ItemOptics{};
class IMP_Optic_C_AksionEKP802Dovetail_Base : ItemOptics
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionSwapOptic);
	}
};
class IMP_Optic_C_WaltherMRS_Base : ItemOptics
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionSwapOptic);
	}
};
class IMP_Optic_C_VortexRazorAMGUH1_Base : ItemOptics{};
class IMP_Optic_C_VOMZPiladP1x42Weaver_Base : ItemOptics
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionSwapOptic);
	}
};
class IMP_Optic_C_ValdayPK1201P87_Base : ItemOptics{};
class IMP_Optic_C_ValdayKrechet_Base : ItemOptics{};
class IMP_Optic_C_TrijiconSRS02_Base : ItemOptics{};
class IMP_Optic_C_SigSauerRomeo8T_Base : ItemOptics{};
class IMP_Optic_C_OKP7_Base : ItemOptics{};
class IMP_Optic_C_NPZPK1_Base : ItemOptics{};
class IMP_Optic_C_LeapersUTG_Base : ItemOptics{};
class IMP_Optic_C_MilkorM2A1_Base : ItemOptics{};
class IMP_Optic_C_HolosunHS401G5_Base : ItemOptics{};
class IMP_Optic_C_AimpointPRO_Base : ItemOptics{};