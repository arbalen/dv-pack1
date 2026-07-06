modded class ModItemRegisterCallbacks
{
	override void RegisterFireArms( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
	{
		super.RegisterFireArms( pType, pBehavior );
             
		pType.AddItemInHandsProfileIK("IMP_OSV_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_svd.asi", pBehavior, "dz/anims/anm/player/ik/weapons/svd.anm",  "dz/anims/anm/player/reloads/svd/w_svd_states.anm");
		pType.AddItemInHandsProfileIK("IMP_Ruger_Base", "IMPWMODPart2/Weapons/Anim/AX50.asi", pBehavior, "dz/anims/anm/player/ik/weapons/VSS.anm",  "dz/anims/anm/player/reloads/VSS/w_VSS_states.anm");
        pType.AddItemInHandsProfileIK("IMP_SRSA2_Base", "IMPWMODPart2/Weapons/Anim/SRSA2.asi", pBehavior, "dz/anims/anm/player/ik/weapons/VSS.anm", "dz/anims/anm/player/reloads/VSS/w_VSS_states.anm");   
        pType.AddItemInHandsProfileIK("IMP_SCAR20S_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnfal.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm",  "dz/anims/anm/player/reloads/FNFal/w_FNFal_states.anm");	
		pType.AddItemInHandsProfileIK("IMP_M87R_Base", "IMPWMODPart2/Weapons/Anim/AX50.asi", pBehavior, "dz/anims/anm/player/ik/weapons/VSS.anm",  "dz/anims/anm/player/reloads/VSS/w_VSS_states.anm"); 

	}
	override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
		super.RegisterOneHanded( pType, pBehavior );
		//! magazine
		pType.AddItemInHandsProfileIK("IMP_Mag_OSV_5Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
		pType.AddItemInHandsProfileIK("IMP_Mag_Ruger_5rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cz527.anm");
		pType.AddItemInHandsProfileIK("IMP_Mag_SRSA2_10rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
		pType.AddItemInHandsProfileIK("IMP_Mag_SCAR20S_5rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("IMP_Mag_M87R_5rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior,"dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30.anm");	
  
	}     
};   