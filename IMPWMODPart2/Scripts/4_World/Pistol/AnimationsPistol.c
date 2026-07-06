modded class ModItemRegisterCallbacks
{
    override void RegisterFireArms( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
    {
        super.RegisterFireArms( pType, pBehavior );
            
        pType.AddItemInHandsProfileIK("IMP_GlockPDW_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz61.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz61.anm", "dz/anims/anm/player/reloads/cz61/w_cz61_states.anm");
		pType.AddItemInHandsProfileIK("IMP_Tec9_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz61.asi", pBehavior, "dz/anims/anm/player/ik/weapons/CZ61.anm", "dz/anims/anm/player/reloads/cz61/w_cz61_states.anm");
		
	}
	
    override void RegisterPistol( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
    {
        super.RegisterPistol( pType, pBehavior );
      
        pType.AddItemInHandsProfileIK("IMP_Pistol_Beretta_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz75.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz75.anm", "dz/anims/anm/player/reloads/cz75/w_cz75_states.anm");
        pType.AddItemInHandsProfileIK("IMP_DesertEagle_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_deagle.asi", pBehavior, "dz/anims/anm/player/ik/weapons/Deagle.anm", "dz/anims/anm/player/reloads/Deagle/w_Deagle_states.anm");       
        pType.AddItemInHandsProfileIK("IMP_Glock18C_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_glock.asi", pBehavior, "dz/anims/anm/player/ik/weapons/glock19.anm", "dz/anims/anm/player/reloads/glock/w_glock19_states.anm");
        pType.AddItemInHandsProfileIK("IMP_Glock26_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_glock.asi", pBehavior, "dz/anims/anm/player/ik/weapons/glock19.anm", "dz/anims/anm/player/reloads/glock/w_glock19_states.anm");
		pType.AddItemInHandsProfileIK("IMP_MagnumSuperSport_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_magnum.asi", pBehavior, "dz/anims/anm/player/ik/weapons/magnum.anm", "dz/anims/anm/player/reloads/magnum/w_magnum_states.anm");
		pType.AddItemInHandsProfileIK("IMP_RagingBull_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_magnum.asi", pBehavior, "dz/anims/anm/player/ik/weapons/magnum.anm", "dz/anims/anm/player/reloads/magnum/w_magnum_states.anm");
		pType.AddItemInHandsProfileIK("IMP_FiveSeven", "dz/anims/workspaces/player/player_main/weapons/player_main_glock.asi", pBehavior, "dz/anims/anm/player/ik/weapons/Glock19.anm", "dz/anims/anm/player/reloads/Glock/w_Glock19_states.anm");
		pType.AddItemInHandsProfileIK("IMP_Hellcat_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_glock.asi", pBehavior, "dz/anims/anm/player/ik/weapons/Glock19.anm", "dz/anims/anm/player/reloads/Glock/w_Glock19_states.anm");
        pType.AddItemInHandsProfileIK("IMP_Makarov_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_ij70.asi", pBehavior, "dz/anims/anm/player/ik/weapons/ij70.anm", "dz/anims/anm/player/reloads/IJ70/w_IJ70_states.anm");
		pType.AddItemInHandsProfileIK("IMP_MK23_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnp45.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fnp45.anm", "dz/anims/anm/player/reloads/FNP45/w_fnp45_states.anm");
		pType.AddItemInHandsProfileIK("IMP_RugerMkIV_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_rugermk2.asi", pBehavior, "dz/anims/anm/player/ik/weapons/MK2.anm", "dz/anims/anm/player/reloads/RugerMK2/w_MK2_states.anm");
		pType.AddItemInHandsProfileIK("IMP_P30L_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_fnp45.asi", pBehavior, "dz/anims/anm/player/ik/weapons/fnp45.anm", "dz/anims/anm/player/reloads/FNP45/w_fnp45_states.anm");

    }

    override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterOneHanded( pType, pBehavior );
        //! magazine

        pType.AddItemInHandsProfileIK("IMP_Mag_Beretta_15rnd", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fnp45.anm");
        pType.AddItemInHandsProfileIK("IMP_Mag_DesertEagle_9Rnd", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fnp45.anm");
		pType.AddItemInHandsProfileIK("IMP_Mag_FiveSeven_20rnd", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_glock19_15rnd.anm");
		pType.AddItemInHandsProfileIK("IMP_Mag_Glock18C_17rnd", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_glock19_15rnd.anm");
		pType.AddItemInHandsProfileIK("IMP_Mag_Glock18C_33rnd", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_glock19_15rnd.anm");
		pType.AddItemInHandsProfileIK("IMP_Mag_Glock18C_50rnd", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_glock19_15rnd.anm");
		pType.AddItemInHandsProfileIK("IMP_Mag_Glock26_10rnd", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_glock19_15rnd.anm");
        pType.AddItemInHandsProfileIK("IMP_Mag_Makarov_12rnd", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fnp45.anm");
		pType.AddItemInHandsProfileIK("IMP_Mag_Tec9_32rnd", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_glock19_15rnd.anm");
        pType.AddItemInHandsProfileIK("IMP_Mag_MK23_12rnd", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fnp45.anm");
		pType.AddItemInHandsProfileIK("IMP_Mag_Hellcat_11rnd", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_glock19_15rnd.anm");
		pType.AddItemInHandsProfileIK("IMP_Mag_Hellcat_13rnd", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_glock19_15rnd.anm");
		pType.AddItemInHandsProfileIK("IMP_Mag_Hellcat_15rnd", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_glock19_15rnd.anm");
		pType.AddItemInHandsProfileIK("IMP_Mag_RugerMkIV_10Rnd", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_mk2.anm");
		pType.AddItemInHandsProfileIK("IMP_P30L_Compensator", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/attachments/muzzle/compensator_mp5k.anm");
		pType.AddItemInHandsProfileIK("IMP_Mag_P30L_15rnd", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_fnp45.anm");

	}
};   