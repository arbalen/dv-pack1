class CfgPatches {
	class IMP_Weapons_AACHoneyBadger 
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
	
	class IMP_AACHoneyBadger_Base : Rifle_Base 
	{
		scope = 0;
		displayName = "AAC Honey Badger";
		descriptionShort = "$STR_IMP_HoneyDescr556";
		weight = 1746;
		absorbency = 0.0;
		repairableWithKits[] = {5, 1};
		initSpeedMultiplier = 1;
		repairCosts[] = {30.0, 25.0};
		barrelArmor=2.5;
		PPDOFProperties[] = {};
		ironsightsExcludingOptics[] = {"M4_CarryHandleOptic", "BUISOptic", "M68Optic", "M4_T3NRDSOptic", "ReflexOptic", "ACOGOptic"};
		attachments[] = {"weaponOptics", "weaponWrap", "HandlesM4"};
		itemSize[] = {9, 3};
		WeaponLength = 0.84;
		chamberSize = 1;
		model = "IMPWMOD\Weapons\Automatic\AACHoneyBadger\models\IMP_AACHoneyBadger.p3d";
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_556x45","Ammo_556x45Tracer"};
		magazines[] = 
		{
			"Mag_STANAG_30Rnd",
			"Mag_STANAGCoupled_30Rnd",
			"Mag_CMAG_10Rnd",
			"Mag_CMAG_20Rnd",
			"Mag_CMAG_30Rnd",
			"Mag_CMAG_40Rnd",
			"Mag_CMAG_10Rnd_Green",
			"Mag_CMAG_20Rnd_Green",
			"Mag_CMAG_30Rnd_Green",
			"Mag_CMAG_40Rnd_Green",
			"Mag_CMAG_10Rnd_Black",
			"Mag_CMAG_20Rnd_Black",
			"Mag_CMAG_30Rnd_Black",
			"Mag_CMAG_40Rnd_Black",
		    "Mag_STANAG_60Rnd", 
			"IMP_Mag_M4_Drum60Rnd", 
			"IMP_Mag_M4_Cmag_100Rnd", 
			"IMP_Mag_M4_Drum_60Rnd", 
			"IMP_Mag_M4_Gen2_30Rnd",
			"IMP_Mag_HK_Polymer_30Rnd", 
			"IMP_Mag_M4_Stanag_30Rnd", 
			"IMP_Mag_M4_Polymer_10Rnd", 
			"IMP_Mag_M4_Polymer_20Rnd", 
			"IMP_Mag_M4_Polymer_30Rnd",
			"IMP_Mag_M4_Polymer_40Rnd", 
			"IMP_Mag_M4_Stanag_100Rnd"
		};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		recoilModifier[]={0.25,0.25,0.25};
		swayModifier[]={0,0,0};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsMaterials[] = {"IMPWMOD\Weapons\Automatic\AACHoneyBadger\data\AACHoneyBadger.rvmat"};
		simpleHiddenSelections[] = {"hide_barrel", "irons_up", "irons_down", "HandlesM4"};
		modes[] = {"FullAuto", "SemiAuto"};
		
		class SemiAuto : Mode_SemiAuto {
			soundSetShot[] = { "AACHoneyBadger_silencer_SoundSet", "AACHoneyBadger_silencerTail_SoundSet", "AACHoneyBadger_silencerInteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "AACHoneyBadger_silencer_SoundSet", "AACHoneyBadger_silencerTail_SoundSet", "AACHoneyBadger_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.08;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.00125;
			magazineSlot = "magazine";
		};
		
		class FullAuto : Mode_FullAuto 
		{
			soundSetShot[] = { "AACHoneyBadger_silencer_SoundSet", "AACHoneyBadger_silencerTail_SoundSet", "AACHoneyBadger_silencerInteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "AACHoneyBadger_silencer_SoundSet", "AACHoneyBadger_silencerTail_SoundSet", "AACHoneyBadger_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.08;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.00125;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 10.0;
			type = "shot";
		};
		
		class OpticsInfo : OpticsInfoRifle 
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 25;
			distanceZoomMax = 25;
		};
		
		class Particles {
			class OnFire {
				class SmokeCloud {
					overrideParticle = "weapon_shot_winded_smoke";
				};
				
				class MuzzleFlash {
					overrideParticle = "weapon_shot_ump45_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				
				class ChamberSmokeBurst {
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
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
					hitpoints=1000;
					healthLevels[] = {{1.0, {"IMPWMOD\Weapons\Automatic\AACHoneyBadger\data\AACHoneyBadger.rvmat"}}, {0.7, {"IMPWMOD\Weapons\Automatic\AACHoneyBadger\data\AACHoneyBadger.rvmat"}}, {0.5, {"IMPWMOD\Weapons\Automatic\AACHoneyBadger\data\AACHoneyBadger_damage.rvmat"}}, {0.3, {"IMPWMOD\Weapons\Automatic\AACHoneyBadger\data\AACHoneyBadger_damage.rvmat"}}, {0.0, {"IMPWMOD\Weapons\Automatic\AACHoneyBadger\data\AACHoneyBadger_destruct.rvmat"}}};
				};
			};
		};
	};
	
	class IMP_AACHoneyBadger_Tan : IMP_AACHoneyBadger_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\AACHoneyBadger\data\AACHoneyBadger_co.paa"};
	};
	
	class IMP_AACHoneyBadger_Black : IMP_AACHoneyBadger_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\AACHoneyBadger\data\AACHoneyBadger_black_co.paa"};
	};
	
	class IMP_AACHoneyBadger_Green : IMP_AACHoneyBadger_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\AACHoneyBadger\data\AACHoneyBadger_green_co.paa"};
	};
	
	class IMP_AACHoneyBadger_Gray : IMP_AACHoneyBadger_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\AACHoneyBadger\data\AACHoneyBadger_gray_co.paa"};
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
	class AACHoneyBadger_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"AACHoneyBadger_closeShot_SoundShader",
			"AACHoneyBadger_midShot_SoundShader",
			"AACHoneyBadger_distShot_SoundShader"
		};
	};
	class AACHoneyBadger_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AACHoneyBadger_tailDistant_SoundShader",
			"AACHoneyBadger_tailTrees_SoundShader",
			"AACHoneyBadger_tailForest_SoundShader",
			"AACHoneyBadger_tailMeadows_SoundShader",
			"AACHoneyBadger_tailHouses_SoundShader"
		};
	};
	class AACHoneyBadger_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AACHoneyBadger_tailInterior_SoundShader"
		};
	};
	class AACHoneyBadger_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"AACHoneyBadger_silencerCloseShot_SoundShader",
			"AACHoneyBadger_silencerMidShot_SoundShader",
			"AACHoneyBadger_silencerDistShot_SoundShader"
		};
	};
	class AACHoneyBadger_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AACHoneyBadger_silencerTailTrees_SoundShader",
			"AACHoneyBadger_silencerTailForest_SoundShader",
			"AACHoneyBadger_silencerTailMeadows_SoundShader",
			"AACHoneyBadger_silencerTailHouses_SoundShader"
		};
	};
	class AACHoneyBadger_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AACHoneyBadger_silencerTailInterior_SoundShader"
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
	class AACHoneyBadger_closeShot_SoundShader: closeShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AACHoneyBadger\sounds\HB_Shot", 1},{"IMPWMOD\Weapons\Automatic\AACHoneyBadger\sounds\HB_Shot", 1},{"IMPWMOD\Weapons\Automatic\AACHoneyBadger\sounds\HB_Shot", 1}};
		volume=0.8;
	};
	class AACHoneyBadger_midShot_SoundShader: midShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AACHoneyBadger\sounds\HB_Shot", 1},{"IMPWMOD\Weapons\Automatic\AACHoneyBadger\sounds\HB_Shot", 1},{"IMPWMOD\Weapons\Automatic\AACHoneyBadger\sounds\HB_Shot", 1}};
		volume=0.5;
	};
	class AACHoneyBadger_distShot_SoundShader: distShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AACHoneyBadger\sounds\HB_Shot", 1},{"IMPWMOD\Weapons\Automatic\AACHoneyBadger\sounds\HB_Shot", 1},{"IMPWMOD\Weapons\Automatic\AACHoneyBadger\sounds\HB_Shot", 1}};
		volume=0.3;
	};
	class AACHoneyBadger_tailDistant_SoundShader: tailDistantRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AACHoneyBadger\sounds\HB_Shot", 1}};
		volume=0.8;
	};
	class AACHoneyBadger_tailForest_SoundShader: tailForestRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AACHoneyBadger\sounds\HB_Shot", 1}};
	};
	class AACHoneyBadger_tailHouses_SoundShader: tailHousesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AACHoneyBadger\sounds\HB_Shot", 1}};
	};
	class AACHoneyBadger_tailMeadows_SoundShader: tailMeadowsRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AACHoneyBadger\sounds\HB_Shot", 1}};
	};
	class AACHoneyBadger_tailTrees_SoundShader: tailTreesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AACHoneyBadger\sounds\HB_Shot", 1}};
	};
	class AACHoneyBadger_tailInterior_SoundShader: tailInteriorRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AACHoneyBadger\sounds\HB_Shot", 1}};
	};
	class AACHoneyBadger_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AACHoneyBadger\sounds\HB_Shot", 1},{"IMPWMOD\Weapons\Automatic\AACHoneyBadger\sounds\HB_Shot", 1},{"IMPWMOD\Weapons\Automatic\AACHoneyBadger\sounds\HB_Shot", 1}};
		volume=0.5;
	};
	class AACHoneyBadger_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AACHoneyBadger\sounds\HB_Shot", 1},{"IMPWMOD\Weapons\Automatic\AACHoneyBadger\sounds\HB_Shot", 1},{"IMPWMOD\Weapons\Automatic\AACHoneyBadger\sounds\HB_Shot", 1}};
		volume=0.3;
	};
	class AACHoneyBadger_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AACHoneyBadger\sounds\HB_Shot", 1},{"IMPWMOD\Weapons\Automatic\AACHoneyBadger\sounds\HB_Shot", 1},{"IMPWMOD\Weapons\Automatic\AACHoneyBadger\sounds\HB_Shot", 1}};
		volume=0.15;
	};
	class AACHoneyBadger_silencerTailForest_SoundShader: base_ProfessionalSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AACHoneyBadger\sounds\HB_Shot", 1}};
	};
	class AACHoneyBadger_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AACHoneyBadger\sounds\HB_Shot", 1}};
	};
	class AACHoneyBadger_silencerTailMeadows_SoundShader: base_ProfessionalSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AACHoneyBadger\sounds\HB_Shot", 1}};
	};
	class AACHoneyBadger_silencerTailTrees_SoundShader: base_ProfessionalSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AACHoneyBadger\sounds\HB_Shot", 1}};
	};
	class AACHoneyBadger_silencerTailInterior_SoundShader: base_ProfessionalSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AACHoneyBadger\sounds\HB_Shot", 1}};
	};
};