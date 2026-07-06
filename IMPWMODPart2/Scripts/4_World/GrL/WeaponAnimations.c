modded class ModItemRegisterCallbacks
{
	override void RegisterFireArms( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
    {
        super.RegisterFireArms( pType, pBehavior );
		

		pType.AddItemInHandsProfileIK("IMP_ChinaLake_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_mp133.asi", pBehavior, "dz/anims/anm/player/ik/weapons/mp133.anm","dz/anims/anm/player/reloads/MP133/w_mp133_states.anm");

	}
	
	override void CustomBoneRemapping( DayZPlayerType pType )
    {
        super.CustomBoneRemapping( pType );
              
		array<string> ChinaLakeBoneRemap ={ "bolt", "Weapon_Bolt", "pump", "Weapon_Bone_01","feedRamp", "Weapon_Bone_02", "trigger", "Weapon_Trigger","bullet", "Weapon_Bullet", "boltrelease", "Weapon_Bone_03"};
		pType.AddItemBoneRemap("IMP_ChinaLake_Base", ChinaLakeBoneRemap);
	};
};