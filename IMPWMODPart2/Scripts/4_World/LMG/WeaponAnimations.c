modded class ModItemRegisterCallbacks
{
    override void RegisterFireArms( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
    {
        super.RegisterFireArms( pType, pBehavior );
        pType.AddItemInHandsProfileIK("IMP_MG42_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_akm.asi", pBehavior, "dz/anims/anm/player/ik/weapons/AKM.anm",  "dz/anims/anm/player/reloads/AKM/w_AKM_states.anm");
 		pType.AddItemInHandsProfileIK("IMP_U100_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnfal.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fn_fal.anm",  "dz/anims/anm/player/reloads/FNFal/w_FNFal_states.anm");

	}

    override void RegisterOneHanded( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
    {
        super.RegisterOneHanded( pType, pBehavior );
        //! magazine                            
        pType.AddItemInHandsProfileIK("IMP_Mag_MG42_50rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
		pType.AddItemInHandsProfileIK("IMP_Mag_U100_100rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_stanag30.anm");
    }      
};   