class CfgPatches
{
	class IMP_RPK16
	{
		units[] = {};
		weapons[]={};
		requiredVersion=0.1;
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
	class IMP_RPK16_Base: Rifle_Base
	{
		scope = 0;
		displayName = "$STR_IMP_PRK16";
		descriptionShort = "$STR_IMP_PRK161";
		weight = 4500;
		model = "IMPWMOD\Weapons\Automatic\RPK16\models\RPK16.p3d";
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {30,25};
		PPDOFProperties[] = {1,0.6,50,200,4,10};
		WeaponLength = 0.706;
		barrelArmor = 5.888;
		attachments[] = {"weaponButtstockAK","weaponWrap","weaponOptics","weaponMuzzleAK", "grip1", "HandlesAK"};
		itemSize[] = {9, 2};
		chamberSize = 1;
		initSpeedMultiplier = 1;
		chamberedRound = "";
		chamberableFrom[]=
		{
			"Ammo_545x39",
			"Ammo_545x39Tracer"
		};
		magazines[]=
		{
			"Mag_AK74_30Rnd",
			"Mag_AK74_30Rnd_Black",
			"Mag_AK74_30Rnd_Green",
			"Mag_AK74_45Rnd",
			"IMP_Mag_AK74_6L18_45Rnd",
			"IMP_Mag_AK74_6L20_30Rnd",
			"IMP_Mag_AK74_6L23_30Rnd",
			"IMP_Mag_AK74_6L23P_30Rnd",
			"IMP_Mag_AK74_6L26_45Rnd",
			"IMP_Mag_AK74_6L31_60Rnd",
			"IMP_Mag_AK74_DTSaiga_10Rnd",
			"IMP_Mag_AK74_DTSaiga_20Rnd",
			"IMP_Mag_AK74_PMag_30Rnd",
			"IMP_Mag_AK74_PMag_FDE_30Rnd",
			"IMP_Mag_AK74_Drum_95Rnd",
			"IMP_Mag_RPK16_Drum_90Rnd",
			"IMP_Mag_AK12_30Rnd",
			"IMP_Mag_AK12_Tape_60Rnd",
			"IMP_Mag_AK12_Clip_60Rnd"
		};
		ejectType = 1;
		recoilModifier[]={0.25,0.25,0.25};
		swayModifier[]={0,0,0};
		simpleHiddenSelections[] = {"hide_barrel", "HandlesAK"};
		hiddenSelections[] = {"camoflage"};
		modes[] = {"FullAuto", "SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"RPK16_Shot_SoundSet", "RPK16_Tail_SoundSet", "RPK16_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "RPK16_silencer_SoundSet", "RPK16_silencerTail_SoundSet", "RPK16_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.08;
			dispersion = 0;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"RPK16_Shot_SoundSet", "RPK16_Tail_SoundSet", "RPK16_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "RPK16_silencer_SoundSet", "RPK16_silencerTail_SoundSet", "RPK16_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.08;
			dispersion = 0;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
		};
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
					overrideParticle = "weapon_shot_akm_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05,0,0};
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
				maxOverheatingValue = 120;
				shotsToStartOverheating = 2;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					positionOffset[] = {-0.02,0,0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.2};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[] = {0.1,0,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2,0.6};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[] = {0.3,0,0};
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
					hitpoints=100000000;
					healthLevels[] = {{1.01,{"IMPWMOD\Weapons\Automatic\RPK16\data\RPK16.rvmat"}},{0.7,{"IMPWMOD\Weapons\Automatic\RPK16\data\RPK16.rvmat"}},{0.5,{"IMPWMOD\Weapons\Automatic\RPK16\data\RPK16_damage.rvmat"}},{0.3,{"IMPWMOD\Weapons\Automatic\RPK16\data\RPK16_damage.rvmat"}},{0.01,{"IMPWMOD\Weapons\Automatic\RPK16\data\RPK16_destruct.rvmat"}}};
				};
			};
		};
	};
	class IMP_RPK16_Black: IMP_RPK16_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\RPK16\data\RPK16_co.paa"};
	};
	class IMP_RPK16_Green: IMP_RPK16_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\RPK16\data\RPK16_green_co.paa"};
	};
	class IMP_RPK16_Tan: IMP_RPK16_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\RPK16\data\RPK16_tan_co.paa"};
	};
};

class CfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_RPK16_Drum_90Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "$STR_IMP_RPK16Drum";
		descriptionShort = "$STR_IMP_RPK16Drum1";
		model = "IMPWMOD\Weapons\Automatic\RPK16\models\RPK16_Mag.p3d";
		weight = 500;
		itemSize[] = {2,3};
		count = 90;
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		ammo = "Bullet_545x39";
		ammoItems[] = {"Ammo_545x39","Ammo_545x39Tracer"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10000000000;
					healthLevels[] = {{1.01,{"IMPWMOD\Weapons\Automatic\RPK16\data\RPK16.rvmat"}},{0.7,{"IMPWMOD\Weapons\Automatic\RPK16\data\RPK16.rvmat"}},{0.5,{"IMPWMOD\Weapons\Automatic\RPK16\data\RPK16_damage.rvmat"}},{0.3,{"IMPWMOD\Weapons\Automatic\RPK16\data\RPK16_damage.rvmat"}},{0.01,{"IMPWMOD\Weapons\Automatic\RPK16\data\RPK16_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
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
	class RPK16_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"RPK16_closeShot_SoundShader",
			"RPK16_midShot_SoundShader",
			"RPK16_distShot_SoundShader"
		};
	};
	class RPK16_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"RPK16_tailDistant_SoundShader",
			"RPK16_tailTrees_SoundShader",
			"RPK16_tailForest_SoundShader",
			"RPK16_tailMeadows_SoundShader",
			"RPK16_tailHouses_SoundShader"
		};
	};
	class RPK16_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"RPK16_tailInterior_SoundShader"
		};
	};
	class RPK16_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"RPK16_silencerCloseShot_SoundShader",
			"RPK16_silencerMidShot_SoundShader",
			"RPK16_silencerDistShot_SoundShader"
		};
	};
	class RPK16_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"RPK16_silencerTailTrees_SoundShader",
			"RPK16_silencerTailForest_SoundShader",
			"RPK16_silencerTailMeadows_SoundShader",
			"RPK16_silencerTailHouses_SoundShader"
		};
	};
	class RPK16_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"RPK16_silencerTailInterior_SoundShader"
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
	class RPK16_closeShot_SoundShader: closeShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\RPK16\sounds\RPK16_Shot", 1},{"IMPWMOD\Weapons\Automatic\RPK16\sounds\RPK16_Shot", 1},{"IMPWMOD\Weapons\Automatic\RPK16\sounds\RPK16_Shot", 1}};
		volume=0.8;
	};
	class RPK16_midShot_SoundShader: midShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\RPK16\sounds\RPK16_Shot", 1},{"IMPWMOD\Weapons\Automatic\RPK16\sounds\RPK16_Shot", 1},{"IMPWMOD\Weapons\Automatic\RPK16\sounds\RPK16_Shot", 1}};
		volume=0.5;
	};
	class RPK16_distShot_SoundShader: distShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\RPK16\sounds\RPK16_Shot", 1},{"IMPWMOD\Weapons\Automatic\RPK16\sounds\RPK16_Shot", 1},{"IMPWMOD\Weapons\Automatic\RPK16\sounds\RPK16_Shot", 1}};
		volume=0.3;
	};
	class RPK16_tailDistant_SoundShader: tailDistantRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\RPK16\sounds\RPK16_Shot", 1}};
		volume=0.3;
	};
	class RPK16_tailForest_SoundShader: tailForestRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\RPK16\sounds\RPK16_Shot", 1}};
	};
	class RPK16_tailHouses_SoundShader: tailHousesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\RPK16\sounds\RPK16_Shot", 1}};
	};
	class RPK16_tailMeadows_SoundShader: tailMeadowsRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\RPK16\sounds\RPK16_Shot", 1}};
	};
	class RPK16_tailTrees_SoundShader: tailTreesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\RPK16\sounds\RPK16_Shot", 1}};
	};
	class RPK16_tailInterior_SoundShader: tailInteriorRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\RPK16\sounds\RPK16_Shot", 1}};
	};
	class RPK16_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\RPK16\sounds\RPK16_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\RPK16\sounds\RPK16_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\RPK16\sounds\RPK16_Shot_Supp", 1}};
		volume=0.5;
	};
	class RPK16_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\RPK16\sounds\RPK16_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\RPK16\sounds\RPK16_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\RPK16\sounds\RPK16_Shot_Supp", 1}};
		volume=0.3;
	};
	class RPK16_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\RPK16\sounds\RPK16_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\RPK16\sounds\RPK16_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\RPK16\sounds\RPK16_Shot_Supp", 1}};
		volume=0.15;
	};
	class RPK16_silencerTailForest_SoundShader: base_ProfessionalSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\RPK16\sounds\RPK16_Shot_Supp", 1}};
	};
	class RPK16_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\RPK16\sounds\RPK16_Shot_Supp", 1}};
	};
	class RPK16_silencerTailMeadows_SoundShader: base_ProfessionalSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\RPK16\sounds\RPK16_Shot_Supp", 1}};
	};
	class RPK16_silencerTailTrees_SoundShader: base_ProfessionalSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\RPK16\sounds\RPK16_Shot_Supp", 1}};
	};
	class RPK16_silencerTailInterior_SoundShader: base_ProfessionalSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\RPK16\sounds\RPK16_Shot_Supp", 1}};
	};
};