class CfgPatches {
	class IMP_Weapons_R700 {
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
	
	class IMP_R700_Base : BoltActionRifle_ExternalMagazine_Base {
		scope = 0;
		displayName = "";
		descriptionShort = "Оружие использует калибр 338lm | The weapon uses a 338lm caliber.";
		model = "IMPWMOD\Weapons\Sniper\R700\models\AICS.p3d";
		attachments[] = {"weaponWrap", "weaponOpticsHunting", "Suppressor_338"};
		weight = 8391;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {10};
		PPDOFProperties[] = {1,0.5,50,180,4,10};
		initSpeedMultiplier = 1;
		WeaponLength=1;
		chamberedRound = "";
		chamberSize = 1;
		chamberableFrom[] = {"IMP_Ammo_338LM"};
		magazines[] = {"IMP_Mag_R700_5Rnd", "IMP_Mag_R700_8Rnd"};
		ejectType = 1;
		itemSize[] = {10, 2};
		barrelArmor = 4.0;
		recoilModifier[]={0.25,0.25,0.25};
		swayModifier[]={0,0,0};
		modes[] = {"Single"};
		
		class Single : Mode_SemiAuto {
			soundSetShot[]= {"R700_Shot_SoundSet","R700_Tail_SoundSet","R700_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"R700_silencerHomeMade_SoundSet","R700_silencerHomeMadeTail_SoundSet","R700_silencerInteriorHomeMadeTail_SoundSet"}};
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
	};
	
	class IMP_AICS : IMP_R700_Base {
		scope = 2;
		displayName="AICS";
		model="\IMPWMOD\Weapons\Sniper\R700\models\AICS.p3d";
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\R700\data\AICS.rvmat"};
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\R700\data\AICS_co.paa"};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 10000000;
					healthLevels[] = 
					{
						{1.01, {"IMPWMOD\Weapons\Sniper\R700\data\AICS.rvmat"}}, 
						{0.7, {"IMPWMOD\Weapons\Sniper\R700\data\AICS.rvmat"}}, 
						{0.5, {"IMPWMOD\Weapons\Sniper\R700\data\AICS_damage.rvmat"}},
						{0.3, {"IMPWMOD\Weapons\Sniper\R700\data\AICS_damage.rvmat"}},
						{0.01, {"IMPWMOD\Weapons\Sniper\R700\data\AICS_destruct.rvmat"}}
					};
				};
			};
		};
	};
	
	class IMP_McMillan_A5 : IMP_R700_Base {
		scope = 2;
		displayName="McMillan A5";
		model="\IMPWMOD\Weapons\Sniper\R700\models\McMillanA5.p3d";
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\R700\data\A5.rvmat"};
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\R700\data\A5_co.paa"};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 10000000000;
					healthLevels[] = 
					{
						{1.01, {"IMPWMOD\Weapons\Sniper\R700\data\A5.rvmat"}}, 
						{0.7, {"IMPWMOD\Weapons\Sniper\R700\data\A5.rvmat"}}, 
						{0.5, {"IMPWMOD\Weapons\Sniper\R700\data\A5_damage.rvmat"}},
						{0.3, {"IMPWMOD\Weapons\Sniper\R700\data\A5_damage.rvmat"}},
						{0.01, {"IMPWMOD\Weapons\Sniper\R700\data\A5_destruct.rvmat"}}
					};
				};
			};
		};
	};
	
	class IMP_R700 : IMP_R700_Base {
		scope = 2;
		displayName="R700";
		descriptionShort="$STR_IMP_r700all";
		model="\IMPWMOD\Weapons\Sniper\R700\models\R700.p3d";
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\R700\data\R700.rvmat"};
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\R700\data\R700_co.paa"};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 1000000000;
					healthLevels[] = 
					{
						{1.01, {"IMPWMOD\Weapons\Sniper\R700\data\R700.rvmat"}}, 
						{0.7, {"IMPWMOD\Weapons\Sniper\R700\data\R700.rvmat"}}, 
						{0.5, {"IMPWMOD\Weapons\Sniper\R700\data\R700_damage.rvmat"}},
						{0.3, {"IMPWMOD\Weapons\Sniper\R700\data\R700_damage.rvmat"}},
						{0.01, {"IMPWMOD\Weapons\Sniper\R700\data\R700_destruct.rvmat"}}
					};
				};
			};
		};
	};
};

class cfgMagazines {
	class Magazine_Base;
	
	class IMP_Mag_R700_5Rnd : Magazine_Base {
		scope = 2;
		displayName = "$STR_IMP_r700mag";
		descriptionShort = "$STR_IMP_3385am";
		model = "IMPWMOD\Weapons\Sniper\R700\models\MagazineR700.p3d";
		weight = 400;
		itemSize[] = {1, 2};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		count = 7;
		ammo = "IMP_Bullet_338LM";
		ammoItems[] = {"IMP_Ammo_338LM"};
		tracersEvery = 0;
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 200000000000;
					healthLevels[] = {{1.01, {"IMPWMOD\Weapons\Sniper\R700\data\Magazine.rvmat"}}, {0.7, {"IMPWMOD\Weapons\Sniper\R700\data\Magazine.rvmat"}}, {0.5, {"IMPWMOD\Weapons\Sniper\R700\data\Magazine_damage.rvmat"}}, {0.3, {"IMPWMOD\Weapons\Sniper\R700\data\Magazine_damage.rvmat"}}, {0.01, {"IMPWMOD\Weapons\Sniper\R700\data\Magazine_destruct.rvmat"}}};
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
	
	class IMP_Mag_R700_8Rnd : Magazine_Base {
		scope = 2;
		displayName = "$STR_IMP_r700mag";
		descriptionShort = "$STR_IMP_8338";
		model = "IMPWMOD\Weapons\Sniper\R700\models\MagazineEXTR700.p3d";
		weight = 800;
		itemSize[] = {1, 2};
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		count = 10;
		ammo = "IMP_Bullet_338LM";
		ammoItems[] = {"IMP_Ammo_338LM"};
		tracersEvery = 0;
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 20000000;
					healthLevels[] = {{1.0, {"IMPWMOD\Weapons\Sniper\R700\data\MagazineExt.rvmat"}}, {0.7, {"IMPWMOD\Weapons\Sniper\R700\data\MagazineExt.rvmat"}}, {0.5, {"IMPWMOD\Weapons\Sniper\R700\data\MagazineExt_damage.rvmat"}}, {0.3, {"IMPWMOD\Weapons\Sniper\R700\data\MagazineExt_damage.rvmat"}}, {0.0, {"IMPWMOD\Weapons\Sniper\R700\data\MagazineExt_destruct.rvmat"}}};
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
	class R700_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"R700_closeShot_SoundShader",
			"R700_midShot_SoundShader",
			"R700_distShot_SoundShader"
		};
	};
	class R700_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"R700_tailDistant_SoundShader",
			"R700_tailTrees_SoundShader",
			"R700_tailForest_SoundShader",
			"R700_tailMeadows_SoundShader",
			"R700_tailHouses_SoundShader"
		};
	};
	class R700_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"R700_tailInterior_SoundShader"
		};
	};
	class R700_silencerHomeMade_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[]=
		{
			"R700_silencerHomeMadeCloseShot_SoundShader",
			"R700_silencerHomeMadeMidShot_SoundShader",
			"R700_silencerHomeMadeDistShot_SoundShader"
		};
	};
	class R700_silencerHomeMadeTail_SoundSet: Rifle_silencerHomemadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"R700_silencerHomeMadeTailTrees_SoundShader",
			"R700_silencerHomeMadeTailForest_SoundShader",
			"R700_silencerHomeMadeTailMeadows_SoundShader",
			"R700_silencerHomeMadeTailHouses_SoundShader"
		};
	};
	class R700_silencerInteriorHomeMadeTail_SoundSet: Rifle_silencerInteriorHomeMadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"R700_silencerHomeMadeTailInterior_SoundShader"
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
	class R700_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\R700\sounds\R700_Shot", 1}, {"IMPWMOD\Weapons\Sniper\R700\sounds\R700_Shot", 1}, {"IMPWMOD\Weapons\Sniper\R700\sounds\R700_Shot", 1}};
		volume=1.5;
	};
	class R700_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\R700\sounds\R700_Shot", 1}, {"IMPWMOD\Weapons\Sniper\R700\sounds\R700_Shot", 1}, {"IMPWMOD\Weapons\Sniper\R700\sounds\R700_Shot", 1}};
		volume=1.2;
	};
	class R700_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\R700\sounds\R700_Shot", 1}, {"IMPWMOD\Weapons\Sniper\R700\sounds\R700_Shot", 1}, {"IMPWMOD\Weapons\Sniper\R700\sounds\R700_Shot", 1}};
		volume=0.7;
	};
	class R700_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\R700\sounds\R700_Shot", 1}};
		volume=1.5;
	};
	class R700_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\R700\sounds\R700_Shot", 1}};
	};
	class R700_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\R700\sounds\R700_Shot", 1}};
	};
	class R700_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\R700\sounds\R700_Shot", 1}};
	};
	class R700_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\R700\sounds\R700_Shot", 1}};
	};
	class R700_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\R700\sounds\R700_Shot", 1}};
	};
	class R700_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\R700\sounds\R700_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\R700\sounds\R700_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\R700\sounds\R700_Shot_Supp", 1}};
		volume=1.0;
	};
	class R700_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\R700\sounds\R700_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\R700\sounds\R700_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\R700\sounds\R700_Shot_Supp", 1}};
		volume=0.8;
	};
	class R700_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\R700\sounds\R700_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\R700\sounds\R700_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\R700\sounds\R700_Shot_Supp", 1}};
		volume=0.5;
	};
	class R700_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\R700\sounds\R700_Shot_Supp", 1}};
	};
	class R700_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\R700\sounds\R700_Shot_Supp", 1}};
	};
	class R700_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\R700\sounds\R700_Shot_Supp", 1}};
	};
	class R700_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\R700\sounds\R700_Shot_Supp", 1}};
	};
	class R700_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\R700\sounds\R700_Shot_Supp", 1}};
	};
};