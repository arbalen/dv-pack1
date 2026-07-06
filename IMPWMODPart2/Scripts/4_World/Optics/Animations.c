modded class ModItemRegisterCallbacks
{

    override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
    	super.RegisterOneHanded(pType, pBehavior);
        //! optics
		pType.AddItemInHandsProfileIK("IMP_FedorovOptics", "dz/anims/workspaces/player/player_main/props/player_main_1h_scope.asi", pBehavior, "dz/anims/anm/player/ik/attachments/optic/optic_puscope.anm");
		pType.AddItemInHandsProfileIK("IMP_ARAdapter_9mm", "dz/anims/workspaces/player/player_main/props/player_main_STANAG_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_cz527.anm");	

	}	
};   