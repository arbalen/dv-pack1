class CfgPatches
{
	class IMP_Weapons_AR15
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
class cfgWeapons
{
	class Rifle_Base;
	class IMP_MK47_Base: Rifle_Base
	{
		scope = 0;
		weight = 1746;
		absorbency = 0.0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		barrelArmor=2.5;
		initSpeedMultiplier = 1;
		ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic","ACOGOptic"};
		PPDOFProperties[]={1,0.1,20,200,10,10};
		WeaponLength=0.635;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[]=
		{
			"Ammo_762x39",
			"Ammo_762x39Tracer"
		};
		magazines[]=
		{
			"Mag_AKM_30Rnd",
			"Mag_AKM_Palm30Rnd",
			"Mag_AKM_Palm30Rnd_Black",
			"Mag_AKM_Palm30Rnd_Green",
			"Mag_AKM_Drum75Rnd",
			"Mag_AKM_Drum75Rnd_Green",
			"Mag_AKM_Drum75Rnd_Black",
			"Mag_AKM_Drum_TEST",
			"IMP_Mag_AKM_Magpul_Black",
			"IMP_Mag_AKM_Magpul_Banana",
			"IMP_Mag_AKM_Magpul_FDE",
			"IMP_Mag_AKM_Magpul_Black_Tape_60Rnd",
			"IMP_Mag_AKM_Magpul_Black_Clip_60Rnd",
			"IMP_Mag_AK_Bakelyt_40Rnd",
			"IMP_Mag_AK_Custom_10Rnd",
			"IMP_Mag_AK_FabDefence_30Rnd",
			"IMP_Mag_AK_Izhmash_30Rnd",
			"IMP_Mag_AK_IzhmashSTD_30Rnd",
			"IMP_Mag_AK_MagpulPMag_30Rnd",
			"IMP_Mag_AK_Aluminium_30Rnd",
			"IMP_Mag_AK_ProDrum_75Rnd",
			"IMP_Mag_AK_Drum_50Rnd"
		};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		recoilModifier[]={0.25,0.25,0.25};
		swayModifier[]={0,0,0};
		simpleHiddenSelections[] = {"hide_barrel", "HandlesM4"};
		hiddenSelections[] = {"barrel", "reciver", "hand", "buffertube"};
		modes[] = {"FullAuto", "SemiAuto"};
		class SemiAuto : Mode_SemiAuto 
		{
			soundSetShot[] = {"SR25_Shot_SoundSet", "SR25_Tail_SoundSet", "SR25_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "SR25_silencer_SoundSet", "SR25_silencerTail_SoundSet", "SR25_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.08;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0;
			magazineSlot = "magazine";
		};
		
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"SR25_Shot_SoundSet", "SR25_Tail_SoundSet", "SR25_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "SR25_silencer_SoundSet", "SR25_silencerTail_SoundSet", "SR25_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.08;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100,200,300,400,500,600};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 600;
		};
	};
	class IMP_MK47: IMP_MK47_Base
	{
		scope = 2;
		displayName = "$STR_IMP_MK47Mutant";
		descriptionShort = "$STR_IMP_MK47Mutant1";
		model = "IMPWMOD\Weapons\Automatic\MK47\models\IMP_MK47.p3d";
		attachments[] = {"weaponMuzzleAK", "weaponOptics", "weaponButtstockM4", "weaponWrap", "HandlesM4"};
		itemSize[] = {9, 2};
		spawnDamageRange[] = {0.0,0.6};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\MK47\data\MK47_co.paa"};
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
					onlyWithinOverheatLimits[] = {0.0,0.2};
					onlyWithinIMPinLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2,0.6};
					onlyWithinIMPinLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.6,1};
					onlyWithinIMPinLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.35,0,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinIMPinLimits[] = {0.2,1};
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
					hitpoints=1000000000;
					healthLevels[] = {{1.0,{"IMPWMOD\Weapons\Automatic\MK47\data\MK47.rvmat"}},{0.7,{"IMPWMOD\Weapons\Automatic\MK47\data\MK47.rvmat"}},{0.5,{"IMPWMOD\Weapons\Automatic\MK47\data\MK47_damage.rvmat"}},{0.3,{"IMPWMOD\Weapons\Automatic\MK47\data\MK47_damage.rvmat"}},{0.0,{"IMPWMOD\Weapons\Automatic\MK47\data\MK47_destruct.rvmat"}}};
				};
			};
		};
	};
};