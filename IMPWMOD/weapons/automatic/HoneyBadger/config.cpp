class CfgPatches {
	class IMP_Weapons_HoneyBadger 
	{
		units[] = {};
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
	class Rifle_Base;
	
	class IMP_HoneyBadger_Base : Rifle_Base 
	{
		scope = 0;
		weight = 1746;
		absorbency = 0.0;
		repairableWithKits[] = {5, 1};
		repairCosts[] = {30.0, 25.0};
		PPDOFProperties[] = {};
		ironsightsExcludingOptics[] = {"M4_CarryHandleOptic", "BUISOptic", "M68Optic", "M4_T3NRDSOptic", "ReflexOptic", "ACOGOptic"};
		WeaponLength = 0.63;
		initSpeedMultiplier = 1;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"IMP_Ammo_300AAC"};
		magazines[] = {"IMP_Mag_HB_30Rnd", "IMP_Mag_HB_Clip_60Rnd", "IMP_Mag_HB_Tape_60Rnd"};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		recoilModifier[]={0.25,0.25,0.25};
		swayModifier[]={0,0,0};
		simpleHiddenSelections[] = {"hide_barrel", "irons_up", "irons_down", "HandlesM4"};
		hiddenSelections[] = {"camoflage"};
		modes[] = {"FullAuto", "SemiAuto"};
		
		class SemiAuto : Mode_SemiAuto {
			soundSetShot[] = {"HoneyBadger_silencer_SoundSet", "HoneyBadger_silencer_SoundSet", "HoneyBadger_silencer_SoundSet"};
			soundSetShotExt[]= {{ "HoneyBadger_silencer_SoundSet", "HoneyBadger_silencerTail_SoundSet", "HoneyBadger_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.08;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0;
			magazineSlot = "magazine";
		};
		
		class FullAuto : Mode_FullAuto 
		{
			soundSetShot[] = {"HoneyBadger_silencer_SoundSet", "HoneyBadger_silencer_SoundSet", "HoneyBadger_silencer_SoundSet"};
			soundSetShotExt[]= {{ "HoneyBadger_silencer_SoundSet", "HoneyBadger_silencerTail_SoundSet", "HoneyBadger_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.08;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 30;
			type = "shot";
		};
		
		class OpticsInfo : OpticsInfoRifle {
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 25;
			distanceZoomMax = 25;
		};
	};
	
	class IMP_HoneyBadger : IMP_HoneyBadger_Base 
	{
		scope = 2;
		displayName = "AAC Honey Badger";
		descriptionShort = "$STR_IMP_Honey300descr";
		model = "IMPWMOD\Weapons\Automatic\HoneyBadger\models\IMP_HoneyBadger.p3d";
		attachments[] = {"weaponOptics", "weaponWrap", "HandlesM4"};
		itemSize[] = {8, 3};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {"IMPWMOD\Weapons\Automatic\HoneyBadger\data\HoneyBadger.rvmat"};
		
		class Particles {
			class OnFire
            {
                class MuzzleFlash
                {
                    overrideParticle="weapon_shot_fnx_02";
                    onlyWithinHealthLabel[]={0, 3};
                };
            };
			
			class OnOverheating {
				maxOverheatingValue = 60;
				shotsToStartOverheating = 7;
				overheatingDecayInterval = 1;
				
				class SmokingBarrel1 {
					positionOffset[] = {0.2, 0, 0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0, 0.2};
					onlyWithinRainLimits[] = {0, 0.2};
				};
				
				class SmokingBarrelHot1 {
					positionOffset[] = {0.2, 0, 0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2, 0.6};
					onlyWithinRainLimits[] = {0, 0.2};
				};
				
				class SmokingBarrelHot3 {
					positionOffset[] = {0.2, 0, 0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.6, 1};
					onlyWithinRainLimits[] = {0, 0.2};
				};
				
				class SmokingBarrelHotSteam {
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.35, 0, 0};
					onlyWithinOverheatLimits[] = {0, 1};
					onlyWithinRainLimits[] = {0.2, 1};
				};
				
				class OpenChamberSmoke {
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
				};
			};
			
			class OnBulletCasingEject {
				class ChamberSmokeRaise {
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
		};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints=1000000;
					healthLevels[] = {{1.0, {"IMPWMOD\Weapons\Automatic\HoneyBadger\data\HoneyBadger.rvmat"}}, {0.7, {"IMPWMOD\Weapons\Automatic\HoneyBadger\data\HoneyBadger.rvmat"}}, {0.5, {"IMPWMOD\Weapons\Automatic\HoneyBadger\data\HoneyBadger_damage.rvmat"}}, {0.3, {"IMPWMOD\Weapons\Automatic\HoneyBadger\data\HoneyBadger_damage.rvmat"}}, {0.0, {"IMPWMOD\Weapons\Automatic\HoneyBadger\data\HoneyBadger_destruct.rvmat"}}};
				};
			};
		};
	};
};

class cfgMagazines {
	class Magazine_Base;
	
	class IMP_Mag_HB_30Rnd : Magazine_Base 
	{
		scope = 2;
		displayName = "$STR_IMP_HBMag300";
		descriptionShort = "$STR_IMP_HBMag3001";
		model = "IMPWMOD\Weapons\Automatic\HoneyBadger\models\IMP_HB_Mag_30Rnd.p3d";
		weight = 400;
		itemSize[] = {1, 3};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		count = 30;
		ammo = "IMP_Bullet_300AAC";
		ammoItems[] = {"IMP_Ammo_300AAC"};
		tracersEvery = 0;
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 2000000;
					healthLevels[] = 
					{
						{1.01, {"IMPWMOD\Weapons\Automatic\HoneyBadger\data\HoneyBadger.rvmat"}}, 
						{0.7, {"IMPWMOD\Weapons\Automatic\HoneyBadger\data\HoneyBadger.rvmat"}}, 
						{0.5, {"IMPWMOD\Weapons\Automatic\HoneyBadger\data\HoneyBadger_damage.rvmat"}}, 
						{0.3, {"IMPWMOD\Weapons\Automatic\HoneyBadger\data\HoneyBadger_damage.rvmat"}}, 
						{0.01, {"IMPWMOD\Weapons\Automatic\HoneyBadger\data\HoneyBadger_destruct.rvmat"}}
					};
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
	class IMP_Mag_HB_Tape_60Rnd : Magazine_Base 
	{
		scope = 2;
		displayName = "$STR_IMP_HBMag300";
		descriptionShort = "$STR_IMP_HBMag3002";
		model = "IMPWMOD\Weapons\Automatic\HoneyBadger\models\IMP_HB_Mag_Tape_60_Rnd.p3d";
		weight = 800;
		itemSize[] = {2, 3};
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		count = 60;
		ammo = "IMP_Bullet_300AAC";
		ammoItems[] = {"IMP_Ammo_300AAC"};
		tracersEvery = 0;
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 2000000;
					healthLevels[] = 
					{
						{1.01, {"IMPWMOD\Weapons\Automatic\HoneyBadger\data\HoneyBadger.rvmat"}}, 
						{0.7, {"IMPWMOD\Weapons\Automatic\HoneyBadger\data\HoneyBadger.rvmat"}}, 
						{0.5, {"IMPWMOD\Weapons\Automatic\HoneyBadger\data\HoneyBadger_damage.rvmat"}}, 
						{0.3, {"IMPWMOD\Weapons\Automatic\HoneyBadger\data\HoneyBadger_damage.rvmat"}}, 
						{0.01, {"IMPWMOD\Weapons\Automatic\HoneyBadger\data\HoneyBadger_destruct.rvmat"}}
					};
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
	class IMP_Mag_HB_Clip_60Rnd : Magazine_Base 
	{
		scope = 2;
		displayName = "$STR_IMP_HBMag300";
		descriptionShort = "$STR_IMP_HBMag3002";
		model = "IMPWMOD\Weapons\Automatic\HoneyBadger\models\IMP_HB_Mag_Clip_60_Rnd.p3d";
		weight = 800;
		itemSize[] = {2, 3};
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		count = 60;
		ammo = "IMP_Bullet_300AAC";
		ammoItems[] = {"IMP_Ammo_300AAC"};
		tracersEvery = 0;
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 2000000;
					healthLevels[] = 
					{
						{1.01, {"IMPWMOD\Weapons\Automatic\HoneyBadger\data\HoneyBadger.rvmat"}}, 
						{0.7, {"IMPWMOD\Weapons\Automatic\HoneyBadger\data\HoneyBadger.rvmat"}}, 
						{0.5, {"IMPWMOD\Weapons\Automatic\HoneyBadger\data\HoneyBadger_damage.rvmat"}}, 
						{0.3, {"IMPWMOD\Weapons\Automatic\HoneyBadger\data\HoneyBadger_damage.rvmat"}}, 
						{0.01, {"IMPWMOD\Weapons\Automatic\HoneyBadger\data\HoneyBadger_destruct.rvmat"}}
					};
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

class CfgNonAIVehicles {
	class ProxyAttachment;


	class ProxyIMP_HB_Mag_30Rnd : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\HoneyBadger\models\IMP_HB_Mag_30Rnd.p3d";
	};
	class ProxyIMP_HB_Mag_Clip_60_Rnd : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\HoneyBadger\models\IMP_HB_Mag_Clip_60_Rnd.p3d";
	};
	class ProxyIMP_HB_Mag_Tape_60_Rnd : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\HoneyBadger\models\IMP_HB_Mag_Tape_60_Rnd.p3d";
	};
};
class CfgSoundSets 
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class Rifle_silencerTail_Base_SoundSet;
	class Rifle_silencerInteriorTail_Base_SoundSet;
	class HoneyBadger_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"HoneyBadger_closeShot_SoundShader",
			"HoneyBadger_midShot_SoundShader",
			"HoneyBadger_distShot_SoundShader"
		};
	};
	class HoneyBadger_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"HoneyBadger_tailDistant_SoundShader",
			"HoneyBadger_tailTrees_SoundShader",
			"HoneyBadger_tailForest_SoundShader",
			"HoneyBadger_tailMeadows_SoundShader",
			"HoneyBadger_tailHouses_SoundShader"
		};
	};
	class HoneyBadger_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"HoneyBadger_tailInterior_SoundShader"
		};
	};
	class HoneyBadger_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"HoneyBadger_silencerCloseShot_SoundShader",
			"HoneyBadger_silencerMidShot_SoundShader",
			"HoneyBadger_silencerDistShot_SoundShader"
		};
	};
	class HoneyBadger_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"HoneyBadger_silencerTailTrees_SoundShader",
			"HoneyBadger_silencerTailForest_SoundShader",
			"HoneyBadger_silencerTailMeadows_SoundShader",
			"HoneyBadger_silencerTailHouses_SoundShader"
		};
	};
	class HoneyBadger_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"HoneyBadger_silencerTailInterior_SoundShader"
		};
	};
};
class CfgSoundShaders 
{
	class tailInteriorRifle_SoundShader;
	class tailTreesRifle_SoundShader;
	class tailMeadowsRifle_SoundShader;
	class tailHousesRifle_SoundShader;
	class tailForestRifle_SoundShader;
	class tailDistantRifle_SoundShader;
	class base_Closure_SoundShader;
	class distShotRifle_SoundShader;
	class midShotRifle_SoundShader;
	class closeShotRifle_SoundShader;
	class base_ProfessionalSilenced_closeShot_SoundShader;
	class base_ProfessionalSilenced_midShot_SoundShader;
	class base_ProfessionalSilenced_distShot_SoundShader;
	class base_ProfessionalSilenced_tailForest_SoundShader;
	class base_ProfessionalSilenced_tailHouses_SoundShader;
	class base_ProfessionalSilenced_tailMeadows_SoundShader;
	class base_ProfessionalSilenced_tailTrees_SoundShader;
	class base_ProfessionalSilenced_tailInterior_SoundShader;
	class HoneyBadger_closeShot_SoundShader: closeShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HoneyBadger\sounds\HoneyBadger_Shot", 1},{"IMPWMOD\Weapons\Automatic\HoneyBadger\sounds\HoneyBadger_Shot", 1},{"IMPWMOD\Weapons\Automatic\HoneyBadger\sounds\HoneyBadger_Shot", 1}};
		volume=0.2;
	};
	class HoneyBadger_midShot_SoundShader: midShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HoneyBadger\sounds\HoneyBadger_Shot", 1},{"IMPWMOD\Weapons\Automatic\HoneyBadger\sounds\HoneyBadger_Shot", 1},{"IMPWMOD\Weapons\Automatic\HoneyBadger\sounds\HoneyBadger_Shot", 1}};
		volume=0.3;
	};
	class HoneyBadger_distShot_SoundShader: distShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HoneyBadger\sounds\HoneyBadger_Shot", 1},{"IMPWMOD\Weapons\Automatic\HoneyBadger\sounds\HoneyBadger_Shot", 1},{"IMPWMOD\Weapons\Automatic\HoneyBadger\sounds\HoneyBadger_Shot", 1}};
		volume=0.4;
	};
	class HoneyBadger_tailDistant_SoundShader: tailDistantRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HoneyBadger\sounds\HoneyBadger_Shot", 1}};
		volume=0.4;
	};
	class HoneyBadger_tailForest_SoundShader: tailForestRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HoneyBadger\sounds\HoneyBadger_Shot", 1}};
		volume=0.3;
	};
	class HoneyBadger_tailHouses_SoundShader: tailHousesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HoneyBadger\sounds\HoneyBadger_Shot", 1}};
		volume=0.3;
	};
	class HoneyBadger_tailMeadows_SoundShader: tailMeadowsRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HoneyBadger\sounds\HoneyBadger_Shot", 1}};
		volume=0.3;
	};
	class HoneyBadger_tailTrees_SoundShader: tailTreesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HoneyBadger\sounds\HoneyBadger_Shot", 1}};
		volume=0.3;
	};
	class HoneyBadger_tailInterior_SoundShader: tailInteriorRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HoneyBadger\sounds\HoneyBadger_Shot", 1}};
		volume=0.3;
	};
	class HoneyBadger_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HoneyBadger\sounds\HoneyBadger_Shot", 1},{"IMPWMOD\Weapons\Automatic\HoneyBadger\sounds\HoneyBadger_Shot", 1},{"IMPWMOD\Weapons\Automatic\HoneyBadger\sounds\HoneyBadger_Shot", 1}};
		volume=0.2;
	};
	class HoneyBadger_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HoneyBadger\sounds\HoneyBadger_Shot", 1},{"IMPWMOD\Weapons\Automatic\HoneyBadger\sounds\HoneyBadger_Shot", 1},{"IMPWMOD\Weapons\Automatic\HoneyBadger\sounds\HoneyBadger_Shot", 1}};
		volume=0.3;
	};
	class HoneyBadger_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HoneyBadger\sounds\HoneyBadger_Shot", 1},{"IMPWMOD\Weapons\Automatic\HoneyBadger\sounds\HoneyBadger_Shot", 1},{"IMPWMOD\Weapons\Automatic\HoneyBadger\sounds\HoneyBadger_Shot", 1}};
		volume=0.4;
	};
	class HoneyBadger_silencerTailForest_SoundShader: base_ProfessionalSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HoneyBadger\sounds\HoneyBadger_Shot", 1}};
		volume=0.3;
	};
	class HoneyBadger_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HoneyBadger\sounds\HoneyBadger_Shot", 1}};
		volume=0.3;
	};
	class HoneyBadger_silencerTailMeadows_SoundShader: base_ProfessionalSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HoneyBadger\sounds\HoneyBadger_Shot", 1}};
		volume=0.3;
	};
	class HoneyBadger_silencerTailTrees_SoundShader: base_ProfessionalSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HoneyBadger\sounds\HoneyBadger_Shot", 1}};
		volume=0.3;
	};
	class HoneyBadger_silencerTailInterior_SoundShader: base_ProfessionalSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HoneyBadger\sounds\HoneyBadger_Shot", 1}};
		volume=0.3;
	};
};