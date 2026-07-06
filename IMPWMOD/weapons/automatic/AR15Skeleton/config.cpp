class CfgPatches
{
	class IMP_Weapons_AR15Skeleton
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class Launcher_Base;
	class IMP_AR15Skeleton_base: Rifle_Base
	{
		scope = 0;
		weight = 2976;
		displayName = "AR-15 Skeleton";
		descriptionShort = "$STR_IMP_safasf";
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		PPDOFProperties[] = {1,0.6,50,200,4,10};
		ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic","ACOGOptic"};
		WeaponLength = 0.81;
		barrelArmor = 2.5;
		initSpeedMultiplier = 1;
		chamberSize = 1;
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
		hiddenSelections[]={"camoflage1", "camoflage2"};
		simpleHiddenSelections[] = {"hide_barrel","irons_up","irons_down", "HandlesM4"};
		modes[] = {"FullAuto","SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"M4_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.08;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"M4_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.08;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 10;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {50,100,150,200,250,300,350,400,450,500,550,600,750,800};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 50;
			distanceZoomMax = 800;
		};
	};
	class IMP_AR15Skeleton: IMP_AR15Skeleton_base
	{
		scope = 2;
		model = "IMPWMOD\Weapons\Automatic\AR15Skeleton\models\AR15Skeleton.p3d";
		attachments[] = 
		{
			"weaponButtstockM4",
			"weaponWrap",
			"weaponOptics",
			"weaponFlashlight",
			"weaponMuzzleM4",
			"grip1",
			"HandlesM4"
		};
		itemSize[] = {9, 3};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\AR15Skeleton\data\1_co.paa", "IMPWMOD\Weapons\Automatic\AR15Skeleton\data\2_co.paa"};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_ump45_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class ChamberSmokeBurst
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 60;
				shotsToStartOverheating = 7;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.2};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2,0.6};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.6,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.35,0,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[] = {{1,{"IMPWMOD\Weapons\Automatic\AR15Skeleton\data\1.rvmat", "IMPWMOD\Weapons\Automatic\AR15Skeleton\data\2.rvmat"}},{0.7,{"IMPWMOD\Weapons\Automatic\AR15Skeleton\data\1.rvmat", "IMPWMOD\Weapons\Automatic\AR15Skeleton\data\2.rvmat"}},{0.5,{"IMPWMOD\Weapons\Automatic\AR15Skeleton\data\1_damage.rvmat", "IMPWMOD\Weapons\Automatic\AR15Skeleton\data\2_damage.rvmat"}},{0.3,{"IMPWMOD\Weapons\Automatic\AR15Skeleton\data\1_damage.rvmat", "IMPWMOD\Weapons\Automatic\AR15Skeleton\data\2_damage.rvmat"}},{0,{"IMPWMOD\Weapons\Automatic\AR15Skeleton\data\1_destruct.rvmat", "IMPWMOD\Weapons\Automatic\AR15Skeleton\data\2_destruct.rvmat"}}};
				};
			};
		};
	};
};
