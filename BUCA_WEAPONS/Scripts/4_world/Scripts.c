modded class ModItemRegisterCallbacks
{

//////////////////////////////////////////////////////////////////// Weapons Start ////////////////////////////////////////////////////////////////////

	override void RegisterFireArms( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
    {
        super.RegisterFireArms( pType, pBehavior );

/////////////////////////////////////////////////////////////////////////// Scout

		pType.AddItemInHandsProfileIK("BC_M2010_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_scout.asi", pBehavior, "dz/anims/anm/player/ik/weapons/scout.anm", "dz/anims/anm/player/reloads/scout/w_scout_states.anm");
		pType.AddItemInHandsProfileIK("BC_NTW_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_scout.asi", pBehavior, "dz/anims/anm/player/ik/weapons/scout.anm", "dz/anims/anm/player/reloads/scout/w_scout_states.anm");
		pType.AddItemInHandsProfileIK("BC_ANZIO_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_scout.asi", pBehavior, "dz/anims/anm/player/ik/weapons/scout.anm", "dz/anims/anm/player/reloads/scout/w_scout_states.anm");		

/////////////////////////////////////////////////////////////////////////// AKM

		pType.AddItemInHandsProfileIK("BC_PKP_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/akm.anm", "dz/anims/anm/player/reloads/AKM/w_akm_states.anm");
		pType.AddItemInHandsProfileIK("BC_FNEVOLYS_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/akm.anm", "dz/anims/anm/player/reloads/AKM/w_akm_states.anm");
		pType.AddItemInHandsProfileIK("BC_M60_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/akm.anm", "dz/anims/anm/player/reloads/AKM/w_akm_states.anm");		

/////////////////////////////////////////////////////////////////////////// SVD

		pType.AddItemInHandsProfileIK("BC_BarrettM82A1_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_svd.asi", pBehavior, "dz/anims/anm/player/ik/weapons/svd.anm","dz/anims/anm/player/reloads/SVD/w_SVD_states.anm");

/////////////////////////////////////////////////////////////////////////// Famas

		pType.AddItemInHandsProfileIK("BC_VSSK_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_famas.asi", pBehavior, "dz/anims/anm/player/ik/weapons/famas.anm", "dz/anims/anm/player/reloads/famas/w_famas_states.anm");
		pType.AddItemInHandsProfileIK("BC_T95_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_famas.asi", pBehavior, "dz/anims/anm/player/ik/weapons/famas.anm", "dz/anims/anm/player/reloads/famas/w_famas_states.anm");
		pType.AddItemInHandsProfileIK("BC_ASH12_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_famas.asi", pBehavior, "dz/anims/anm/player/ik/weapons/famas.anm", "dz/anims/anm/player/reloads/famas/w_famas_states.anm");
		pType.AddItemInHandsProfileIK("BC_FAMASF1_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_famas.asi", pBehavior, "dz/anims/anm/player/ik/weapons/famas.anm", "dz/anims/anm/player/reloads/famas/w_famas_states.anm");
		pType.AddItemInHandsProfileIK("BC_GM6Lynx_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_famas.asi", pBehavior, "dz/anims/anm/player/ik/weapons/famas.anm", "dz/anims/anm/player/reloads/famas/w_famas_states.anm");

/////////////////////////////////////////////////////////////////////////// CZ61

		pType.AddItemInHandsProfileIK("BC_MP7A1_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz61.asi", pBehavior, "dz/anims/anm/player/ik/weapons/CZ61.anm", "dz/anims/anm/player/reloads/cz61/w_cz61_states.anm");

/////////////////////////////////////////////////////////////////////////// ump45

		pType.AddItemInHandsProfileIK("BC_CZScorpion_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_ump45.asi", pBehavior, "dz/anims/anm/player/ik/weapons/ump.anm", "dz/anims/anm/player/reloads/ump45/w_ump45_states.anm");

/////////////////////////////////////////////////////////////////////////// ruger

		pType.AddItemInHandsProfileIK("BC_M1A_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_ruger1022.asi", pBehavior, "dz/anims/anm/player/ik/weapons/ruger1022.anm", "dz/anims/anm/player/reloads/ruger1022/w_ruger1022_states.anm");

/////////////////////////////////////////////////////////////////////////// M4A1

		pType.AddItemInHandsProfileIK("BC_MCXSPEAR_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/M4A1/w_M4A1_states.anm");

/////////////////////////////////////////////////////////////////////////// FAL

		pType.AddItemInHandsProfileIK("BC_SCARH_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnfal.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm","dz/anims/anm/player/reloads/fnfal/w_fnfal_states.anm");
		pType.AddItemInHandsProfileIK("BC_G36_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnfal.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm","dz/anims/anm/player/reloads/fnfal/w_fnfal_states.anm");
		pType.AddItemInHandsProfileIK("BC_M1000X_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnfal.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm","dz/anims/anm/player/reloads/fnfal/w_fnfal_states.anm");
		pType.AddItemInHandsProfileIK("BC_HT76_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnfal.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm","dz/anims/anm/player/reloads/fnfal/w_fnfal_states.anm");
		pType.AddItemInHandsProfileIK("BC_HKPSG1_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnfal.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm","dz/anims/anm/player/reloads/fnfal/w_fnfal_states.anm");

/////////////////////////////////////////////////////////////////////////// MOSIN	

		pType.AddItemInHandsProfileIK("BC_AR50_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_mosin1903.asi", pBehavior, "dz/anims/anm/player/ik/weapons/mosin9130.anm","dz/anims/anm/player/reloads/Mosin_1903/w_mosin1903_states.anm");
		pType.AddItemInHandsProfileIK("BC_M99_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_mosin1903.asi", pBehavior, "dz/anims/anm/player/ik/weapons/mosin9130.anm","dz/anims/anm/player/reloads/Mosin_1903/w_mosin1903_states.anm");
		pType.AddItemInHandsProfileIK("BC_PTRD_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_mosin1903.asi", pBehavior, "dz/anims/anm/player/ik/weapons/mosin9130.anm","dz/anims/anm/player/reloads/Mosin_1903/w_mosin1903_states.anm");
		pType.AddItemInHandsProfileIK("BC_BFG_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_mosin1903.asi", pBehavior, "dz/anims/anm/player/ik/weapons/mosin9130.anm","dz/anims/anm/player/reloads/Mosin_1903/w_mosin1903_states.anm");	

/////////////////////////////////////////////////////////////////////////// IZH48

		pType.AddItemInHandsProfileIK("BC_SERBU_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_izh18.asi", pBehavior, "dz/anims/anm/player/ik/weapons/izh18.anm", "dz/anims/anm/player/reloads/izh18/w_izh18_states.anm");	

////////////////////////////////////////////////////////////////////////// CZ527

		pType.AddItemInHandsProfileIK("BC_A2CHEY_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz527.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz527.anm", "dz/anims/anm/player/reloads/cz527/w_cz527_states.anm");
		pType.AddItemInHandsProfileIK("BC_ARS12_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz527.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz527.anm", "dz/anims/anm/player/reloads/cz527/w_cz527_states.anm");				  					  	
		pType.AddItemInHandsProfileIK("BC_Rogue_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz527.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz527.anm", "dz/anims/anm/player/reloads/cz527/w_cz527_states.anm");
		pType.AddItemInHandsProfileIK("BC_CSR50_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz527.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz527.anm", "dz/anims/anm/player/reloads/cz527/w_cz527_states.anm");
		pType.AddItemInHandsProfileIK("BC_DSR_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz527.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz527.anm", "dz/anims/anm/player/reloads/cz527/w_cz527_states.anm");
		pType.AddItemInHandsProfileIK("BC_M100_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz527.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz527.anm", "dz/anims/anm/player/reloads/cz527/w_cz527_states.anm");
		pType.AddItemInHandsProfileIK("BC_M300_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz527.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz527.anm", "dz/anims/anm/player/reloads/cz527/w_cz527_states.anm");
		pType.AddItemInHandsProfileIK("BC_TAC95_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz527.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz527.anm", "dz/anims/anm/player/reloads/cz527/w_cz527_states.anm");
		pType.AddItemInHandsProfileIK("BC_OSV96_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz527.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz527.anm", "dz/anims/anm/player/reloads/cz527/w_cz527_states.anm");

/////////////////////////////////////////////////////////////////////////// CZ550

		pType.AddItemInHandsProfileIK("BC_R700SA_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz550.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz550.anm", "dz/anims/anm/player/reloads/cz550/w_cz550_states.anm");
		pType.AddItemInHandsProfileIK("BC_M98B_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz550.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz550.anm", "dz/anims/anm/player/reloads/cz550/w_cz550_states.anm");	
		pType.AddItemInHandsProfileIK("BC_M200_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz550.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz550.anm", "dz/anims/anm/player/reloads/cz550/w_cz550_states.anm");
		pType.AddItemInHandsProfileIK("BC_TAC21_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz550.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz550.anm", "dz/anims/anm/player/reloads/cz550/w_cz550_states.anm");
		pType.AddItemInHandsProfileIK("BC_CDX50_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz550.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz550.anm", "dz/anims/anm/player/reloads/cz550/w_cz550_states.anm");
		pType.AddItemInHandsProfileIK("BC_C14_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz550.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz550.anm", "dz/anims/anm/player/reloads/cz550/w_cz550_states.anm");
		pType.AddItemInHandsProfileIK("BC_AWM_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz550.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz550.anm", "dz/anims/anm/player/reloads/cz550/w_cz550_states.anm");

/////////////////////////////////////////////////////////////////////////// SSG82

		pType.AddItemInHandsProfileIK("BC_K14_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_ssg82.asi", pBehavior, "dz/anims/anm/player/ik/weapons/ssg82.anm", "dz/anims/anm/player/reloads/SSG82/w_SSG82_states.anm");
		pType.AddItemInHandsProfileIK("BC_SnowOwl_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_ssg82.asi", pBehavior, "dz/anims/anm/player/ik/weapons/ssg82.anm", "dz/anims/anm/player/reloads/SSG82/w_SSG82_states.anm");
		pType.AddItemInHandsProfileIK("BC_Scout_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_ssg82.asi", pBehavior, "dz/anims/anm/player/ik/weapons/ssg82.anm", "dz/anims/anm/player/reloads/SSG82/w_SSG82_states.anm");

/////////////////////////////////////////////////////////////////////////// SV98	

		pType.AddItemInHandsProfileIK("BC_DELTA_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_sv98.asi", pBehavior, "dz/anims/anm/player/ik/weapons/sv98.anm", "dz/anims/anm/player/reloads/sv98/w_sv98_states.anm");
		pType.AddItemInHandsProfileIK("BC_AWP_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_sv98.asi", pBehavior, "dz/anims/anm/player/ik/weapons/sv98.anm", "dz/anims/anm/player/reloads/sv98/w_sv98_states.anm");
		pType.AddItemInHandsProfileIK("BC_SV98_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_sv98.asi", pBehavior, "dz/anims/anm/player/ik/weapons/sv98.anm", "dz/anims/anm/player/reloads/sv98/w_sv98_states.anm");
		pType.AddItemInHandsProfileIK("BC_AX50_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_sv98.asi", pBehavior, "dz/anims/anm/player/ik/weapons/sv98.anm", "dz/anims/anm/player/reloads/sv98/w_sv98_states.anm");
		pType.AddItemInHandsProfileIK("BC_SNIPEX_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_sv98.asi", pBehavior, "dz/anims/anm/player/ik/weapons/sv98.anm", "dz/anims/anm/player/reloads/sv98/w_sv98_states.anm");

	}
 	override void RegisterPistol( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
	{
        super.RegisterPistol( pType, pBehavior );    
		
		pType.AddItemInHandsProfileIK("BC_Revolver50_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_magnum.asi", pBehavior, "dz/anims/anm/player/ik/weapons/magnum.anm", "dz/anims/anm/player/reloads/magnum/w_magnum_states.anm");
	}

/////////////////////////////////////////////////////////////////////////// !!!! Remap Start (Do not touch this) !!!! 

	override void CustomBoneRemapping( DayZPlayerType pType )
    {
		
        super.CustomBoneRemapping( pType );

		array<string> Revolver50CalBoneRemap ={ "bolt", "Weapon_Bolt", "magazine", "Weapon_Magazine", "bullet","Weapon_Bullet", "trigger", "Weapon_Trigger", "hammer", "Weapon_Bone_01","cylinder_arm", "Weapon_Bone_03" ,"ejector", "Weapon_Bone_04" };
		pType.AddItemBoneRemap("BC_Revolver50_Base", Revolver50CalBoneRemap);	
		

        array<string> BC_SERBUBoneRemap ={ "barrel", "Weapon_Bone_01", "trigger", "Weapon_Trigger" ,"bullet", "Weapon_Bullet" };
        pType.AddItemBoneRemap("BC_SERBU_Base", BC_SERBUBoneRemap);
		
	}

/////////////////////////////////////////////////////////////////////////// !!!! Remap End (Do not touch this) !!!!


//////////////////////////////////////////////////////////////////// Weapons End ////////////////////////////////////////////////////////////////////
		


//////////////////////////////////////////////////////////////////// Magazines / Attachments Start ////////////////////////////////////////////////////////////////////


	override void RegisterOneHanded( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
    {
        super.RegisterOneHanded( pType, pBehavior );    

/////////////////////////////////////////////////////////////////////////// Magazines

/////////////////////////////////////// Akm Drum Magazine

		pType.AddItemInHandsProfileIK("BC_FNEVOLYS_Magazine", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_akm_drum.anm");
		pType.AddItemInHandsProfileIK("BC_M60_Magazine", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_akm_drum.anm");
		pType.AddItemInHandsProfileIK("BC_PKP_Magazine", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_akm_drum.anm");

/////////////////////////////////////// Stanag Magazine

		pType.AddItemInHandsProfileIK("BC_CZScorpion_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30.anm");
		pType.AddItemInHandsProfileIK("BC_G36_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30.anm");
		pType.AddItemInHandsProfileIK("BC_MP7A1_40Rd_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30.anm");
		pType.AddItemInHandsProfileIK("BC_MP7A1_60Rd_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30.anm");

/////////////////////////////////////// Coupled Stanag Magazine
		
		pType.AddItemInHandsProfileIK("BC_AX50_Magazine", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30_coupled.anm");
		pType.AddItemInHandsProfileIK("BC_CDX50_Magazine", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30_coupled.anm");
		pType.AddItemInHandsProfileIK("BC_M200_M300_Magazine", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30_coupled.anm");
		pType.AddItemInHandsProfileIK("BC_OSV96_Magazine", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30_coupled.anm");
		pType.AddItemInHandsProfileIK("BC_SNIPEX_Magazine", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30_coupled.anm");

/////////////////////////////////////// Fal Magazine

		pType.AddItemInHandsProfileIK("BC_ANZIO_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_A2CHEY_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_ARS12_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_ASH12_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_AWP_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_Delta_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_DSR_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_HT76_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_K14_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_M1A_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_M98B_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_M100_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_M1000X_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_M2010_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_MCXSPEAR_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_NTW_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_Rogue_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_SCARH_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_Scout_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_SnowOwl_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_SV98_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_TAC21_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_TAC95_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_VSSK_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_PSG1_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_5Rnd_338_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("BC_8Rnd_338_Extended_Magazine", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");

/////////////////////////////////////////////////////////////////////////// Optics

        pType.AddItemInHandsProfileIK("BC_A2CHEY_Scope_Base", "dz/anims/workspaces/player/player_main/props/player_main_1h_scope.asi", pBehavior, "dz/anims/anm/player/ik/attachments/optic/optic_hunting_scope_12x.anm");
	
	};

//////////////////////////////////////////////////////////////////// Magazines / Attachments End ////////////////////////////////////////////////////////////////////


}

/* Dont forget to delete this :3 (Probably will forget anyways)

pType.AddItemInHandsProfileIK("example", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30_coupled.anm");
pType.AddItemInHandsProfileIK("example", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_akm_drum.anm");
pType.AddItemInHandsProfileIK("example", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30.anm");
pType.AddItemInHandsProfileIK("example", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");

*/

/////////////////////////////////////////////////////////////////////////// Magazines Definition Start

class BC_5Rnd_338_Magazine: MagazineStorage {};
class BC_8Rnd_338_Extended_Magazine: MagazineStorage {};
class BC_A2CHEY_Magazine: MagazineStorage {};
class BC_ANZIO_Magazine: MagazineStorage {};
class BC_ARS12_Magazine: MagazineStorage {};
class BC_ASH12_Magazine: MagazineStorage {};
class BC_AWP_Magazine: MagazineStorage {};
class BC_AX50_Magazine: MagazineStorage {};
class BC_CDX50_Magazine: MagazineStorage {};
class BC_CZScorpion_Magazine: MagazineStorage {};
class BC_Delta_Magazine: MagazineStorage {};
class BC_DSR_Magazine: MagazineStorage {};
class BC_FNEVOLYS_Magazine: MagazineStorage {};
class BC_G36_Magazine: MagazineStorage {};
class BC_HT76_Magazine: MagazineStorage {};
class BC_K14_Magazine: MagazineStorage {};
class BC_M1A_Magazine: MagazineStorage {};
class BC_M60_Magazine: MagazineStorage {};
class BC_M98B_Magazine: MagazineStorage {};
class BC_M100_Magazine: MagazineStorage {};
class BC_M200_M300_Magazine: MagazineStorage {};
class BC_M1000X_Magazine: MagazineStorage {};
class BC_M2010_Magazine: MagazineStorage {};
class BC_MCXSPEAR_Magazine: MagazineStorage {};
class BC_MP7A1_40Rd_Magazine: MagazineStorage {};
class BC_MP7A1_60Rd_Magazine: MagazineStorage {};
class BC_NTW_Magazine: MagazineStorage {};
class BC_OSV96_Magazine: MagazineStorage {};
class BC_PKP_Magazine: MagazineStorage {};
class BC_Rogue_Magazine: MagazineStorage {};
class BC_SCARH_Magazine: MagazineStorage {};
class BC_Scout_Magazine: MagazineStorage {};
class BC_SNIPEX_Magazine: MagazineStorage {};
class BC_SnowOwl_Magazine: MagazineStorage {};
class BC_SV98_Magazine: MagazineStorage {};
class BC_TAC21_Magazine: MagazineStorage {};
class BC_TAC95_Magazine: MagazineStorage {};
class BC_VSSK_Magazine: MagazineStorage {};
class BC_PSG1_Magazine: MagazineStorage {};

/////////////////////////////////////////////////////////////////////////// Magazines Definition End
