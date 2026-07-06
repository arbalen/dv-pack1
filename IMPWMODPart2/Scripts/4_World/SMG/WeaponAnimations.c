modded class ModItemRegisterCallbacks
{
    override void RegisterFireArms( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
    {
        super.RegisterFireArms( pType, pBehavior );
            
        pType.AddItemInHandsProfileIK("IMP_UZI_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz61.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz61.anm", "dz/anims/anm/player/reloads/cz61/w_cz61_states.anm");
        pType.AddItemInHandsProfileIK("IMP_MP5SDA2_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_mp5.asi", pBehavior, "dz/anims/anm/player/ik/weapons/mp5k.anm", "dz/anims/anm/player/reloads/MP5/w_mp5k_states.anm");
        pType.AddItemInHandsProfileIK("IMP_EVO3A1", "dz/anims/workspaces/player/player_main/weapons/player_main_mp5.asi", pBehavior, "dz/anims/anm/player/ik/weapons/mp5k.anm", "dz/anims/anm/player/reloads/MP5/w_mp5k_states.anm");
        pType.AddItemInHandsProfileIK("IMP_MP5MPA2_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_mp5.asi", pBehavior, "dz/anims/anm/player/ik/weapons/mp5k.anm", "dz/anims/anm/player/reloads/MP5/w_mp5k_states.anm");
        pType.AddItemInHandsProfileIK("IMP_MP5RailA2_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_mp5.asi", pBehavior, "dz/anims/anm/player/ik/weapons/mp5k.anm", "dz/anims/anm/player/reloads/MP5/w_mp5k_states.anm");
 		pType.AddItemInHandsProfileIK("IMP_MP7_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz61.asi", pBehavior, "dz/anims/anm/player/ik/weapons/CZ61.anm", "dz/anims/anm/player/reloads/cz61/w_cz61_states.anm");
		pType.AddItemInHandsProfileIK("IMP_MP9_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz61.asi", pBehavior, "dz/anims/anm/player/ik/weapons/CZ61.anm", "dz/anims/anm/player/reloads/cz61/w_cz61_states.anm");

	}

    override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterOneHanded( pType, pBehavior );
        //! magazine
        pType.AddItemInHandsProfileIK("IMP_Mag_UZI_32Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
        pType.AddItemInHandsProfileIK("IMP_Mag_UZI_72Rnd", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cmag_10rnd.anm");
        pType.AddItemInHandsProfileIK("IMP_Mag_MP5_30rnd", "dz/anims/workspaces/player/player_main/props/player_main_mp5k_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_mp5_30rnd.anm"); 
        pType.AddItemInHandsProfileIK("IMP_Mag_MP5_50rnd", "dz/anims/workspaces/player/player_main/props/player_main_mp5k_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_mp5_30rnd.anm");    
		pType.AddItemInHandsProfileIK("IMP_Mag_MP7_40rnd", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_glock19_15rnd.anm");
		pType.AddItemInHandsProfileIK("IMP_Mag_MP9_30rnd", "dz/anims/workspaces/player/player_main/props/player_main_mp5k_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_ump45.anm");
	    pType.AddItemInHandsProfileIK("IMP_Mag_EVO_30rnd", "dz/anims/workspaces/player/player_main/props/player_main_mp5k_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_mp5_30rnd.anm");

	}     
};   