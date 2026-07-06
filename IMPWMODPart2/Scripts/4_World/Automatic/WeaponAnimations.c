modded class ModItemRegisterCallbacks
{
    override void RegisterFireArms( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
    {
        super.RegisterFireArms( pType, pBehavior );
        
        
        pType.AddItemInHandsProfileIK("IMP_AEK971_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/AKM.anm",  "dz/anims/anm/player/reloads/AKM/w_AKM_states.anm");
        
		pType.AddItemInHandsProfileIK("IMP_M1941_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_sks.asi", pBehavior, "dz/anims/anm/player/ik/weapons/SKS.anm", "dz/anims/anm/player/reloads/SKS/w_SKS_states.anm");
		pType.AddItemInHandsProfileIK("IMP_MDR_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_famas.asi", pBehavior, "dz/anims/anm/player/ik/weapons/famas.anm", "dz/anims/anm/player/reloads/famas/w_famas_states.anm");
		pType.AddItemInHandsProfileIK("IMP_MDR_9mm_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_famas.asi", pBehavior, "dz/anims/anm/player/ik/weapons/famas.anm", "dz/anims/anm/player/reloads/famas/w_famas_states.anm");
		pType.AddItemInHandsProfileIK("IMP_FedorovAvtomat_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_ruger1022.asi", pBehavior, "dz/anims/anm/player/ik/weapons/ruger1022.anm", "dz/anims/anm/player/reloads/ruger1022/w_Ruger1022_states.anm");
		pType.AddItemInHandsProfileIK("IMP_M1A_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/akm.anm", "dz/anims/anm/player/reloads/AKM/w_akm_states.anm");
		pType.AddItemInHandsProfileIK("IMP_Winchester1873_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_repeater.asi", pBehavior, "dz/anims/anm/player/ik/weapons/repeater.anm", "dz/anims/anm/player/reloads/repeater/w_repeater_states.anm");
		pType.AddItemInHandsProfileIK("IMP_M1918_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnfal.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm",  "dz/anims/anm/player/reloads/FNFal/w_FNFal_states.anm");
        pType.AddItemInHandsProfileIK("IMP_FG42_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/AKM.anm",  "dz/anims/anm/player/reloads/AKM/w_AKM_states.anm");
		pType.AddItemInHandsProfileIK("IMP_Groza_9x39_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_famas.asi", pBehavior, "dz/anims/anm/player/ik/weapons/famas.anm", "dz/anims/anm/player/reloads/famas/w_famas_states.anm");
		pType.AddItemInHandsProfileIK("IMP_Groza_762_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_famas.asi", pBehavior, "dz/anims/anm/player/ik/weapons/famas.anm", "dz/anims/anm/player/reloads/famas/w_famas_states.anm");
		pType.AddItemInHandsProfileIK("IMP_L85_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_famas.asi", pBehavior, "dz/anims/anm/player/ik/weapons/famas.anm", "dz/anims/anm/player/reloads/famas/w_famas_states.anm");
		pType.AddItemInHandsProfileIK("IMP_F2000_Base", "DZ/anims/workspaces/player/player_main/weapons/player_main_aug.asi", pBehavior, "dz/anims/anm/player/ik/weapons/aug.anm", "dz/anims/anm/player/reloads/aug/w_aug_states.anm");
		pType.AddItemInHandsProfileIK("IMP_FG42M_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_svd.asi", pBehavior, "dz/anims/anm/player/ik/weapons/svd.anm","dz/anims/anm/player/reloads/SVD/w_SVD_states.anm");
		pType.AddItemInHandsProfileIK("IMP_TheFix_Base", "IMPWMODPart2/Weapons/Anim/TheFix.asi", pBehavior, "dz/anims/anm/player/ik/weapons/VSS.anm",  "dz/anims/anm/player/reloads/VSS/w_VSS_states.anm");
		pType.AddItemInHandsProfileIK("IMP_MCXSpear_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m16a2.asi", pBehavior, "dz/anims/anm/player/ik/weapons/M16A2_ik.anm", "dz/anims/anm/player/reloads/m16a2/w_m16a2_states.anm");
		pType.AddItemInHandsProfileIK("IMP_MCXTacops_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m16a2.asi", pBehavior, "dz/anims/anm/player/ik/weapons/M16A2_ik.anm", "dz/anims/anm/player/reloads/m16a2/w_m16a2_states.anm");
		pType.AddItemInHandsProfileIK("IMP_Mini14_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_ruger1022.asi", pBehavior, "dz/anims/anm/player/ik/weapons/ruger1022.anm", "dz/anims/anm/player/reloads/ruger1022/w_Ruger1022_states.anm");
		pType.AddItemInHandsProfileIK("IMP_AEK971_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/akm.anm", "dz/anims/anm/player/reloads/AKM/w_akm_states.anm");
		
	}
    override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterOneHanded( pType, pBehavior );
        //! magazine
        
		pType.AddItemInHandsProfileIK("IMP_Mag_FedorovAvtomat_25rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_svd.anm");
		pType.AddItemInHandsProfileIK("IMP_Mag_M14_10rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_akm_30rnd.anm");
		pType.AddItemInHandsProfileIK("IMP_Mag_M14_20rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_akm_30rnd.anm");
		pType.AddItemInHandsProfileIK("IMP_Mag_M1918_20rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fal_20rnd.anm");
		pType.AddItemInHandsProfileIK("IMP_Mag_Groza_20rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_akm_30rnd.anm");
		pType.AddItemInHandsProfileIK("IMP_Mag_TheFix_10rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, 	"dz/anims/anm/player/ik/attachments/magazines/magazine_cz550.anm");
		pType.AddItemInHandsProfileIK("IMP_Mag_MCXSpear_20rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");		
		pType.AddItemInHandsProfileIK("IMP_Mag_Mini14_20rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior,"dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30.anm");
		
	}     
	
	override void CustomBoneRemapping(DayZPlayerType pType)
    {
        super.CustomBoneRemapping( pType );
              
		array<string> M1941BoneRemap = { "bolt", "Weapon_Bolt", "trigger", "Weapon_Trigger", "bullet", "Weapon_Bullet", "follower", "Weapon_Bone_02", "clip", "Weapon_Magazine", "cliprounds", "Weapon_Bone_01"};
		pType.AddItemBoneRemap("IMP_M1941_Base", M1941BoneRemap);
	};
	
};   