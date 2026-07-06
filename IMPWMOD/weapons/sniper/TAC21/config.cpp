class CfgPatches {
	class IMP_Weapons_TAC21 {
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Magazines",
			"DZ_Scripts"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;

class cfgWeapons {
	class BoltActionRifle_ExternalMagazine_Base;
	
	class IMP_TAC21_Base : BoltActionRifle_ExternalMagazine_Base {
		scope = 0;
		displayName = "";
		descriptionShort = "";
		model = "IMPWMOD\Weapons\Sniper\TAC21\models\TAC21.p3d";
		attachments[] = {"weaponWrap", "weaponOpticsHunting", "Suppressor_338"};
		weight = 8391;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {30.0, 50.0};
		PPDOFProperties[] = {1, 0.5, 50, 180, 4, 10};
		WeaponLength=1;
		initSpeedMultiplier = 1;
		chamberedRound = "";
		chamberSize = 1;
		chamberableFrom[] = {"IMP_Ammo_338LM"};
		magazines[] = {"IMP_Mag_TAC21_5Rnd"};
		hiddenSelections[]=
		{
			"Camoflage1",
			"Camoflage2"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Sniper\TAC21\data\TAC21_co.paa",
			"IMPWMOD\Weapons\Sniper\TAC21\data\Buttstock_co.paa"
		};
		ejectType = 1;
		itemSize[] = {10, 2};
		barrelArmor = 4.0;
		recoilModifier[]={0.25,0.25,0.25};
		swayModifier[]={0,0,0};
		modes[] = {"Single"};
		
		class Single : Mode_SemiAuto {
			soundSetShot[]= {"TAC21_Shot_SoundSet","TAC21_Tail_SoundSet","TAC21_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"TAC21_silencerHomeMade_SoundSet","TAC21_silencerHomeMadeTail_SoundSet","TAC21_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 1;
			recoil = "recoil_cz527";
			recoilProne = "recoil_cz527_prone";
			dispersion = 0;
			magazineSlot = "magazine";
		};
		
		class Particles {
			class OnFire {
				class SmokeCloud {
					overrideParticle = "weapon_shot_winded_smoke";
				};
				
				class MuzzleFlash {
					overrideParticle = "weapon_shot_cz527_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05, 0, 0};
				};
			};
			
			class OnOverheating {
				shotsToStartOverheating = 1;
				maxOverheatingValue = 4;
				overheatingDecayInterval = 3;
				
				class BarrelSmoke {
					overrideParticle = "smoking_barrel_small";
				};
			};
			
			class OnBulletCasingEject {
				class ChamberSmokeRaise {
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
		};
		
		class OpticsInfo : OpticsInfoRifle {
			memoryPointCamera = "eye";
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 10000000;
					healthLevels[] = {{1.01, {"IMPWMOD\Weapons\Sniper\TAC21\data\TAC21.rvmat","IMPWMOD\Weapons\Sniper\TAC21\data\Buttstock.rvmat"}}, {0.7, {"IMPWMOD\Weapons\Sniper\TAC21\data\TAC21.rvmat", "IMPWMOD\Weapons\Sniper\TAC21\data\Buttstock.rvmat"}}, {0.5, {"IMPWMOD\Weapons\Sniper\TAC21\data\TAC21_damage.rvmat", "IMPWMOD\Weapons\Sniper\TAC21\data\Buttstock_damage.rvmat"}}, {0.3, {"IMPWMOD\Weapons\Sniper\TAC21\data\TAC21_damage.rvmat", "IMPWMOD\Weapons\Sniper\TAC21\data\Buttstock_damage.rvmat"}}, {0.01, {"IMPWMOD\Weapons\Sniper\TAC21\data\TAC21_destruct.rvmat", "IMPWMOD\Weapons\Sniper\TAC21\data\Buttstock_destruct.rvmat"}}};
				};
			};
		};
	};
	
	class IMP_TAC21 : IMP_TAC21_Base {
		scope = 2;
		displayName = "TAC21";
		descriptionShort = "Оружие использует калибр 338lm | The weapon uses a 338lm caliber.";
		model="\IMPWMOD\Weapons\Sniper\TAC21\models\TAC21.p3d";
	};
};

class cfgMagazines {
	class Magazine_Base;
	
	class IMP_Mag_TAC21_5Rnd : Magazine_Base {
		scope = 2;
		displayName = "$STR_IMP_TAC21mag";
		descriptionShort = "$STR_IMP_3385am";
		model = "IMPWMOD\Weapons\Sniper\TAC21\models\TAC21_Mag.p3d";
		weight = 100;
		itemSize[] = {1, 2};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		count = 10;
		ammo = "IMP_Bullet_338LM";
		ammoItems[] = {"IMP_Ammo_338LM"};
		hiddenSelections[]=
		{
			"camoflage"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Sniper\TAC21\data\TAC21_Mag_co.paa"
		};
		tracersEvery = 0;
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 20000000;
					healthLevels[] = {{1.01, {"IMPWMOD\Weapons\Sniper\TAC21\data\TAC21_Mag.rvmat"}}, {0.7, {"IMPWMOD\Weapons\Sniper\TAC21\data\TAC21_Mag.rvmat"}}, {0.5, {"IMPWMOD\Weapons\Sniper\TAC21\data\TAC21_Mag_damage.rvmat"}}, {0.3, {"IMPWMOD\Weapons\Sniper\TAC21\data\TAC21_Mag_damage.rvmat"}}, {0.01, {"IMPWMOD\Weapons\Sniper\TAC21\data\TAC21_Mag_destruct.rvmat"}}};
				};
			};
		};
		
		class AnimEvents {
			class SoundWeapon {
				class MagRifle_fill_in {
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				
				class MagRifle_fill_loop {
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				
				class MagRifle_fill_out {
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				
				class MagRifle_empty_in {
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				
				class MagRifle_empty_loop {
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				
				class MagRifle_empty_out {
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				
				class MagPistol_fill_in {
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				
				class MagPistol_fill_loop {
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				
				class MagPistol_fill_out {
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				
				class MagPistol_empty_in {
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				
				class MagPistol_empty_loop {
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				
				class MagPistol_empty_out {
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
};
class CfgSoundSets {
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class Rifle_silencerHomemadeTail_Base_SoundSet;
	class Rifle_silencerInteriorHomeMadeTail_Base_SoundSet;
	class TAC21_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"TAC21_closeShot_SoundShader",
			"TAC21_midShot_SoundShader",
			"TAC21_distShot_SoundShader"
		};
	};
	class TAC21_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"TAC21_tailDistant_SoundShader",
			"TAC21_tailTrees_SoundShader",
			"TAC21_tailForest_SoundShader",
			"TAC21_tailMeadows_SoundShader",
			"TAC21_tailHouses_SoundShader"
		};
	};
	class TAC21_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"TAC21_tailInterior_SoundShader"
		};
	};
	class TAC21_silencerHomeMade_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[]=
		{
			"TAC21_silencerHomeMadeCloseShot_SoundShader",
			"TAC21_silencerHomeMadeMidShot_SoundShader",
			"TAC21_silencerHomeMadeDistShot_SoundShader"
		};
	};
	class TAC21_silencerHomeMadeTail_SoundSet: Rifle_silencerHomemadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"TAC21_silencerHomeMadeTailTrees_SoundShader",
			"TAC21_silencerHomeMadeTailForest_SoundShader",
			"TAC21_silencerHomeMadeTailMeadows_SoundShader",
			"TAC21_silencerHomeMadeTailHouses_SoundShader"
		};
	};
	class TAC21_silencerInteriorHomeMadeTail_SoundSet: Rifle_silencerInteriorHomeMadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"TAC21_silencerHomeMadeTailInterior_SoundShader"
		};
	};
};
class CfgSoundShaders {
	class baseCharacter_SoundShader;
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	class base_tailDistant_SoundShader;
	class base_tailForest_SoundShader;
	class base_tailHouses_SoundShader;
	class base_tailMeadows_SoundShader;
	class base_tailTrees_SoundShader;
	class base_tailInterior_SoundShader;
	class base_HomeSilenced_closeShot_SoundShader;
	class base_HomeSilenced_midShot_SoundShader;
	class base_HomeSilenced_distShot_SoundShader;
	class base_HomeSilenced_tailForest_SoundShader;
	class base_HomeSilenced_tailHouses_SoundShader;
	class base_HomeSilenced_tailMeadows_SoundShader;
	class base_HomeSilenced_tailTrees_SoundShader;
	class base_HomeSilenced_tailInterior_SoundShader;
	class TAC21_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\TAC21\sounds\TAC21_Shot_close", 1}, {"IMPWMOD\Weapons\Sniper\TAC21\sounds\TAC21_Shot_close", 1}, {"IMPWMOD\Weapons\Sniper\TAC21\sounds\TAC21_Shot_close", 1}};
		volume=1.5;
	};
	class TAC21_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\TAC21\sounds\TAC21_Shot_med", 1}, {"IMPWMOD\Weapons\Sniper\TAC21\sounds\TAC21_Shot_med", 1}, {"IMPWMOD\Weapons\Sniper\TAC21\sounds\TAC21_Shot_med", 1}};
		volume=1.2;
	};
	class TAC21_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\TAC21\sounds\TAC21_Shot_dist", 1}, {"IMPWMOD\Weapons\Sniper\TAC21\sounds\TAC21_Shot_dist", 1}, {"IMPWMOD\Weapons\Sniper\TAC21\sounds\TAC21_Shot_dist", 1}};
		volume=0.7;
	};
	class TAC21_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\TAC21\sounds\TAC21_Shot_dist", 1}};
		volume=1.5;
	};
	class TAC21_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\TAC21\sounds\TAC21_Shot_dist", 1}};
	};
	class TAC21_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\TAC21\sounds\TAC21_Shot_dist", 1}};
	};
	class TAC21_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\TAC21\sounds\TAC21_Shot_dist", 1}};
	};
	class TAC21_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\TAC21\sounds\TAC21_Shot_dist", 1}};
	};
	class TAC21_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\TAC21\sounds\TAC21_Shot_dist", 1}};
	};
	class TAC21_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\TAC21\sounds\TAC21_Shot_supp_close", 1}, {"IMPWMOD\Weapons\Sniper\TAC21\sounds\TAC21_Shot_supp_close", 1}, {"IMPWMOD\Weapons\Sniper\TAC21\sounds\TAC21_Shot_supp_close", 1}};
		volume=1.0;
	};
	class TAC21_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\TAC21\sounds\TAC21_Shot_supp_close", 1}, {"IMPWMOD\Weapons\Sniper\TAC21\sounds\TAC21_Shot_supp_close", 1}, {"IMPWMOD\Weapons\Sniper\TAC21\sounds\TAC21_Shot_supp_close", 1}};
		volume=0.8;
	};
	class TAC21_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\TAC21\sounds\TAC21_Shot_supp_Dist", 1}, {"IMPWMOD\Weapons\Sniper\TAC21\sounds\TAC21_Shot_supp_Dist", 1}, {"IMPWMOD\Weapons\Sniper\TAC21\sounds\TAC21_Shot_supp_Dist", 1}};
		volume=0.5;
	};
	class TAC21_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\TAC21\sounds\TAC21_Shot_supp_Dist", 1}};
	};
	class TAC21_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\TAC21\sounds\TAC21_Shot_supp_Dist", 1}};
	};
	class TAC21_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\TAC21\sounds\TAC21_Shot_supp_Dist", 1}};
	};
	class TAC21_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\TAC21\sounds\TAC21_Shot_supp_Dist", 1}};
	};
	class TAC21_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\TAC21\sounds\TAC21_Shot_supp_Dist", 1}};
	};
};