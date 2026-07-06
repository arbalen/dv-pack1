modded class ModItemRegisterCallbacks
{
	override void RegisterFireArms( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
    {
        super.RegisterFireArms( pType, pBehavior );
/////////////////////////////////////////////////////////////////////////// CZ61
		pType.AddItemInHandsProfileIK("BC_FNP90_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz61.asi", pBehavior, "dz/anims/anm/player/ik/weapons/CZ61.anm", "dz/anims/anm/player/reloads/cz61/w_cz61_states.anm");
/////////////////////////////////////////////////////////////////////////// AKM
		pType.AddItemInHandsProfileIK("BC_AEK971_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/akm.anm", "dz/anims/anm/player/reloads/AKM/w_akm_states.anm");
		pType.AddItemInHandsProfileIK("BC_AK47T_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/akm.anm", "dz/anims/anm/player/reloads/AKM/w_akm_states.anm");
/////////////////////////////////////////////////////////////////////////// Aug
		pType.AddItemInHandsProfileIK("BC_M82A2_Base","dz/anims/workspaces/player/player_main/weapons/player_main_aug.asi",	pBehavior, "dz/anims/anm/player/ik/weapons/aug.anm", "dz/anims/anm/player/reloads/aug/w_aug_states.anm");
/////////////////////////////////////////////////////////////////////////// SSG82      
		pType.AddItemInHandsProfileIK("BC_KSVK_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_ssg82.asi", pBehavior, "dz/anims/anm/player/ik/weapons/ssg82.anm", "dz/anims/anm/player/reloads/SSG82/w_SSG82_states.anm");
/////////////////////////////////////////////////////////////////////////// M4a1
		pType.AddItemInHandsProfileIK("BC_M110_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/M4A1/w_M4A1_states.anm");
		pType.AddItemInHandsProfileIK("BC_HK417_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/M4A1/w_M4A1_states.anm");
		pType.AddItemInHandsProfileIK("BC_MCXRAPTOR_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/M4A1/w_M4A1_states.anm");
		pType.AddItemInHandsProfileIK("BC_M4A1_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/M4A1/w_M4A1_states.anm");
		pType.AddItemInHandsProfileIK("BC_HK416D_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/M4A1/w_M4A1_states.anm");
		pType.AddItemInHandsProfileIK("BC_SR25_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/M4A1/w_M4A1_states.anm");
		pType.AddItemInHandsProfileIK("BC_HKG28_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/M4A1/w_M4A1_states.anm");
		pType.AddItemInHandsProfileIK("BC_SigMPX_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/M4A1/w_M4A1_states.anm");
		pType.AddItemInHandsProfileIK("BC_MCXVIRTUS_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/M4A1/w_M4A1_states.anm");
		pType.AddItemInHandsProfileIK("BC_HoneyBadger_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/M4A1/w_M4A1_states.anm");
/////////////////////////////////////////////////////////////////////////// SVD
		pType.AddItemInHandsProfileIK("BC_BarrettM107A1_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_svd.asi", pBehavior, "dz/anims/anm/player/ik/weapons/svd.anm","dz/anims/anm/player/reloads/SVD/w_SVD_states.anm");
		pType.AddItemInHandsProfileIK("BC_AS50_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_svd.asi", pBehavior, "dz/anims/anm/player/ik/weapons/svd.anm","dz/anims/anm/player/reloads/SVD/w_SVD_states.anm");
/////////////////////////////////////////////////////////////////////////// Famas
		pType.AddItemInHandsProfileIK("BC_MDR_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_famas.asi", pBehavior, "dz/anims/anm/player/ik/weapons/famas.anm", "dz/anims/anm/player/reloads/famas/w_famas_states.anm");
		pType.AddItemInHandsProfileIK("BC_GM6Lynx_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_famas.asi", pBehavior, "dz/anims/anm/player/ik/weapons/famas.anm", "dz/anims/anm/player/reloads/famas/w_famas_states.anm");
		pType.AddItemInHandsProfileIK("BC_50BMGDeagle_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_famas.asi", pBehavior, "dz/anims/anm/player/ik/weapons/famas.anm", "dz/anims/anm/player/reloads/famas/w_famas_states.anm");
/////////////////////////////////////////////////////////////////////////// FAL
		pType.AddItemInHandsProfileIK("BC_ACR17S_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnfal.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm","dz/anims/anm/player/reloads/fnfal/w_fnfal_states.anm");
		pType.AddItemInHandsProfileIK("BC_ARX160_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnfal.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm","dz/anims/anm/player/reloads/fnfal/w_fnfal_states.anm");
		pType.AddItemInHandsProfileIK("BC_AMB17_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnfal.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm","dz/anims/anm/player/reloads/fnfal/w_fnfal_states.anm");
		pType.AddItemInHandsProfileIK("BC_GEVAR_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnfal.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm","dz/anims/anm/player/reloads/fnfal/w_fnfal_states.anm");
		pType.AddItemInHandsProfileIK("BC_SA58_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnfal.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm","dz/anims/anm/player/reloads/fnfal/w_fnfal_states.anm");
		pType.AddItemInHandsProfileIK("BC_FNFAL_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnfal.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm","dz/anims/anm/player/reloads/fnfal/w_fnfal_states.anm");
		pType.AddItemInHandsProfileIK("BC_RSASS_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnfal.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm","dz/anims/anm/player/reloads/fnfal/w_fnfal_states.anm");
		pType.AddItemInHandsProfileIK("BC_MK18Mjolnir_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnfal.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm","dz/anims/anm/player/reloads/fnfal/w_fnfal_states.anm");
/////////////////////////////////////////////////////////////////////////// Scout
 		pType.AddItemInHandsProfileIK("BC_DVLM2_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_scout.asi", pBehavior, "dz/anims/anm/player/ik/weapons/scout.anm", "dz/anims/anm/player/reloads/scout/w_scout_states.anm");
		pType.AddItemInHandsProfileIK("BC_DVLM1_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_scout.asi", pBehavior, "dz/anims/anm/player/ik/weapons/scout.anm", "dz/anims/anm/player/reloads/scout/w_scout_states.anm");
/////////////////////////////////////////////////////////////////////////// IZH48
		pType.AddItemInHandsProfileIK("BC_RN50_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_izh18.asi", pBehavior, "dz/anims/anm/player/ik/weapons/izh18.anm", "dz/anims/anm/player/reloads/izh18/w_izh18_states.anm");
/////////////////////////////////////////////////////////////////////////// CZ527
		pType.AddItemInHandsProfileIK("BC_BarrettM95_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz527.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz527.anm", "dz/anims/anm/player/reloads/cz527/w_cz527_states.anm");
		pType.AddItemInHandsProfileIK("BC_HS50M1_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz527.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz527.anm", "dz/anims/anm/player/reloads/cz527/w_cz527_states.anm");
/////////////////////////////////////////////////////////////////////////// CZ550
		pType.AddItemInHandsProfileIK("BC_M300T_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz550.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz550.anm", "dz/anims/anm/player/reloads/cz550/w_cz550_states.anm");	
/////////////////////////////////////////////////////////////////////////// Winschester70
		pType.AddItemInHandsProfileIK("BC_Sabatti_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_winchester70.asi", pBehavior, "dz/anims/anm/player/ik/weapons/winchester70.anm", "dz/anims/anm/player/reloads/Winchester70/w_winchester70_states.anm");
/////////////////////////////////////////////////////////////////////////// VSS
		pType.AddItemInHandsProfileIK("BC_ASVAL_Base","dz/anims/workspaces/player/player_main/weapons/player_main_vss.asi", pBehavior, "dz/anims/anm/player/ik/weapons/VSS.anm","dz/anims/anm/player/reloads/VSS/w_VSS_states.anm");
		pType.AddItemInHandsProfileIK("BC_VSK94_Base","dz/anims/workspaces/player/player_main/weapons/player_main_vss.asi", pBehavior, "dz/anims/anm/player/ik/weapons/VSS.anm","dz/anims/anm/player/reloads/VSS/w_VSS_states.anm");
/////////////////////////////////////////////////////////////////////////// SKS
		
		pType.AddItemInHandsProfileIK("BC_M32Milkor_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_sks.asi", pBehavior, "dz/anims/anm/player/ik/weapons/SKS.anm", "dz/anims/anm/player/reloads/SKS/w_SKS_states.anm");
/////////////////////////////////////////////////////////////////////////// SV98	

		pType.AddItemInHandsProfileIK("BC_CZTSR_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_sv98.asi", pBehavior, "dz/anims/anm/player/ik/weapons/sv98.anm", "dz/anims/anm/player/reloads/sv98/w_sv98_states.anm");
		pType.AddItemInHandsProfileIK("BC_NoreenULR50_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_sv98.asi", pBehavior, "dz/anims/anm/player/ik/weapons/sv98.anm", "dz/anims/anm/player/reloads/sv98/w_sv98_states.anm");
		pType.AddItemInHandsProfileIK("BC_DesertTechHTI_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_sv98.asi", pBehavior, "dz/anims/anm/player/ik/weapons/sv98.anm", "dz/anims/anm/player/reloads/sv98/w_sv98_states.anm");
		pType.AddItemInHandsProfileIK("BC_DesertTechSRSA2_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_sv98.asi", pBehavior, "dz/anims/anm/player/ik/weapons/sv98.anm", "dz/anims/anm/player/reloads/sv98/w_sv98_states.anm");
		pType.AddItemInHandsProfileIK("BC_VictrixCorvoCS_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_sv98.asi", pBehavior, "dz/anims/anm/player/ik/weapons/sv98.anm", "dz/anims/anm/player/reloads/sv98/w_sv98_states.anm");
		pType.AddItemInHandsProfileIK("BC_SnipexM100_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_sv98.asi", pBehavior, "dz/anims/anm/player/ik/weapons/sv98.anm", "dz/anims/anm/player/reloads/sv98/w_sv98_states.anm");
		pType.AddItemInHandsProfileIK("BC_CheytacPaladin_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_sv98.asi", pBehavior, "dz/anims/anm/player/ik/weapons/sv98.anm", "dz/anims/anm/player/reloads/sv98/w_sv98_states.anm");
	};
	override void RegisterPistol( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
	{
/////////////////////////////////////////////////////////////////////////// Pistols
		super.RegisterPistol( pType, pBehavior );    
/////////////////////////////////////////////////////////////////////////// CZ75
		pType.AddItemInHandsProfileIK("BC_FNFiveSeven_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz75.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz75.anm", "dz/anims/anm/player/reloads/cz75/w_cz75_states.anm");
/////////////////////////////////////////////////////////////////////////// Magnum	
		pType.AddItemInHandsProfileIK("BC_Rsh12_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_magnum.asi", pBehavior, "dz/anims/anm/player/ik/weapons/magnum.anm", "dz/anims/anm/player/reloads/magnum/w_magnum_states.anm");

	};
	override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
		super.RegisterOneHanded(pType, pBehavior);
/////////////////////////////////////////////////////////////////////////// /Magazines
		pType.AddItemInHandsProfileIK("BC_KSVK_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30.anm");
		pType.AddItemInHandsProfileIK("BC_M110_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_CZTSR_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_ACR17S_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_M300T_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_VSK94_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_GEVAR_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_DVL_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_BarrettM107A1_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_HK417_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_GM6Lynx_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_50BMGDeagle_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_HS50M1_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_DesertTechHTI_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_DesertTechSRSA2_Magazine_Base", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_VictrixCorvoCS_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_FNFiveSeven_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cz75.anm");	
		pType.AddItemInHandsProfileIK("BC_PMAG_SR25_RSASS_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_HKG28_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_MK18Mjolnir_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_FNP90_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_SigMPX_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_mp5k_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cz61_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_MCXVIRTUS_300BO_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30.anm");							  
		pType.AddItemInHandsProfileIK("BC_AS50_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
/////////////////////////////////////////////////////////////////////////// /Buttstocks
		pType.AddItemInHandsProfileIK("BC_Bttstck_ASValStockAdapter_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/attachments/support/buttstock_ak_wood.anm");
		pType.AddItemInHandsProfileIK("BC_Bttstck_ASVAL_Buttstock_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/attachments/support/buttstock_ak_wood.anm"); 	
		pType.AddItemInHandsProfileIK("BC_Bttstck_GEVAR_Buttstock_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/attachments/support/buttstock_ak_wood.anm");   
/////////////////////////////////////////////////////////////////////////// /Handguards
		pType.AddItemInHandsProfileIK("BC_Hndgrd_GEVAR_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/attachments/support/handguard_ak_wood.anm");
		pType.AddItemInHandsProfileIK("BC_Hndgrd_SA58_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior,"dz/anims/anm/player/ik/attachments/support/handguard_ak_wood.anm");
/////////////////////////////////////////////////////////////////////////// /Suppressors
		pType.AddItemInHandsProfileIK("BC_GEVAR338_Suppressor_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/muzzle/suppressor_556.anm");	
		pType.AddItemInHandsProfileIK("BC_BarrettM107A1_Suppressor_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/muzzle/suppressor_556.anm");			  
	};
    override void CustomBoneRemapping( DayZPlayerType pType )
    {
        super.CustomBoneRemapping( pType );
        array<string> BC_RN50BoneRemap ={ "barrel", "Weapon_Bone_01", "trigger", "Weapon_Trigger" ,"bullet", "Weapon_Bullet" };
        pType.AddItemBoneRemap("BC_RN50_Base", BC_RN50BoneRemap);	
		
		array<string> Rsh12BoneRemap ={ "bolt", "Weapon_Bolt", "magazine", "Weapon_Magazine", "bullet","Weapon_Bullet", "trigger", "Weapon_Trigger", "hammer", "Weapon_Bone_01","cylinder_arm", "Weapon_Bone_03" ,"ejector", "Weapon_Bone_04" };
		pType.AddItemBoneRemap("BC_Rsh12_Base", Rsh12BoneRemap);	
	};
};

class BC_KSVK_Magazine: MagazineStorage {};
class BC_M110_Magazine: MagazineStorage {};
class BC_ACR17S_Magazine: MagazineStorage {};
class BC_DVL_Magazine: MagazineStorage {};
class BC_M300T_Magazine: MagazineStorage {};
class BC_VSK94_Magazine: MagazineStorage {};
class BC_GEVAR_Magazine: MagazineStorage {};
class BC_BarrettM107A1_Magazine: MagazineStorage {};
class BC_HK417_Magazine: MagazineStorage {};
class BC_GM6Lynx_Magazine: MagazineStorage {};
class BC_50BMGDeagle_Magazine: MagazineStorage {};
class BC_HS50M1_Magazine: MagazineStorage {};
class BC_CZTSR_Magazine: MagazineStorage {};
class BC_DesertTechHTI_Magazine: MagazineStorage{};
class BC_DesertTechSRSA2_Magazine_Base: MagazineStorage{};
class BC_DesertTechSRSA2_8Rnd_Magazine: BC_DesertTechSRSA2_Magazine_Base {};
class BC_DesertTechSRSA2_5Rnd_Magazine: BC_DesertTechSRSA2_Magazine_Base {};
class BC_VictrixCorvoCS_Magazine: MagazineStorage {};
class BC_FNFiveSeven_Magazine: MagazineStorage {};
class BC_PMAG_SR25_RSASS_Magazine: MagazineStorage {};
class BC_HKG28_Magazine: MagazineStorage {};
class BC_MK18Mjolnir_Magazine: MagazineStorage {};
class BC_FNP90_Magazine: MagazineStorage {};
class BC_SigMPX_Magazine: MagazineStorage {};
class BC_MCXVIRTUS_300BO_Magazine: MagazineStorage {};
class BC_AS50_Magazine: MagazineStorage {};