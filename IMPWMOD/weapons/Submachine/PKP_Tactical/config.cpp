class CfgPatches {
	class IMP_Weapons_PKP_Tactical {
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
	
	class IMP_PKP_Tactical_Base : Rifle_Base {
		scope = 0;
		displayName = "$STR_IMP_PKPTact";
		descriptionShort = "$STR_IMP_PKPTact2";
		model = "IMPWMOD\Weapons\Submachine\PKP_Tactical\models\IMP_PKP_Tactical.p3d";
		attachments[] = {"weaponWrap","weaponOptics", "weaponMuzzleAK"};
		itemSize[] = {10, 2};
		weight = 18200;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		initSpeedMultiplier = 1;
		repairCosts[] = {10};
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		WeaponLength = 1.14;
		barrelArmor = 8.5;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_762x54", "Ammo_762x54Tracer"};
		magazines[] = {"IMP_Mag_PKP_200Rnd"};
		magazineSwitchTime = 0.4;
		ejectType = 1;
		recoilModifier[]={0.25,0.25,0.25};
		swayModifier[]={0,0,0};
		hiddenSelections[] = {"color","color2"};
		simpleHiddenSelections[] = {"hide_barrel","ammobelt"};
		modes[] = {"FullAuto", "SemiAuto"};
		
		class SemiAuto : Mode_SemiAuto {
			soundSetShot[] = {"PKPZ_Shot_SoundSet", "PKPZ_Tail_SoundSet", "PKPZ_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "PKPZ_silencer_SoundSet", "PKPZ_silencerTail_SoundSet", "PKPZ_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.08;
			recoil = "recoil_mosin";
			recoilProne = "recoil_mosin_prone";
			dispersion = 0;
			magazineSlot = "magazine";
		};
		
		class FullAuto : Mode_FullAuto {
			soundSetShot[] = {"PKPZ_Shot_SoundSet", "PKPZ_Tail_SoundSet", "PKPZ_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "PKPZ_silencer_SoundSet", "PKPZ_silencerTail_SoundSet", "PKPZ_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.08;
			recoil = "recoil_mosin";
			recoilProne = "recoil_mosin_prone";
			dispersion = 0;
			magazineSlot = "magazine";
		};
		
		class OpticsInfo : OpticsInfoRifle {
			memoryPointCamera = "eye";
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
		};
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10000000;
					healthLevels[] = 
					{
						{1.0,{"IMPWMOD\Weapons\Submachine\PKP_Tactical\data\6p69.rvmat","IMPWMOD\Weapons\Submachine\PKP_Tactical\data\6p69_pecheneg.rvmat","IMPWMOD\Weapons\Submachine\PKP_Tactical\data\6p69_pecheneg_1.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Submachine\PKP_Tactical\data\6p69.rvmat","IMPWMOD\Weapons\Submachine\PKP_Tactical\data\6p69_pecheneg.rvmat","IMPWMOD\Weapons\Submachine\PKP_Tactical\data\6p69_pecheneg_1.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Submachine\PKP_Tactical\data\6p69_damage.rvmat","IMPWMOD\Weapons\Submachine\PKP_Tactical\data\6p69_pecheneg_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Submachine\PKP_Tactical\data\6p69_damage.rvmat","IMPWMOD\Weapons\Submachine\PKP_Tactical\data\6p69_pecheneg_damage.rvmat"}},
						{0.0,{"IMPWMOD\Weapons\Submachine\PKP_Tactical\data\6p69_destruct.rvmat","IMPWMOD\Weapons\Submachine\PKP_Tactical\data\6p69_pecheneg_destruct.rvmat"}}
					};
				};
			};
		};	
		
		class Particles {
			class OnFire {
				class SmokeCloud {
					overrideParticle = "weapon_shot_winded_smoke";
				};
				
				class MuzzleFlash {
					overrideParticle = "weapon_shot_akm_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05, 0, 0};
				};
				
				class ChamberSmokeBurst {
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
			};
			
			class OnOverheating {
				maxOverheatingValue = 80;
				shotsToStartOverheating = 20;
				overheatingDecayInterval = 1;
				
				class SmokingBarrel1 {
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0, 0.5};
					positionOffset[] = {0.1, 0, 0};
					onlyWithinRainLimits[] = {0, 0.2};
				};
				
				class SmokingBarrelHot1 {
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.5, 0.8};
					positionOffset[] = {0.1, 0, 0};
					onlyWithinRainLimits[] = {0, 0.2};
				};
				
				class SmokingBarrelHot3 {
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.8, 1};
					positionOffset[] = {0.1, 0, 0};
					onlyWithinRainLimits[] = {0, 0.2};
				};
				
				class SmokingBarrelHotSteamSmall {
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.3, 0, 0};
					onlyWithinRainLimits[] = {0.2, 0.5};
				};
				
				class SmokingBarrelHotSteam {
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.3, 0, 0};
					onlyWithinRainLimits[] = {0.5, 1};
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
	};
	
	class IMP_PKP_Tactical: IMP_PKP_Tactical_Base
	{
		scope = 2;	
		hiddenSelectionsTextures[] = 
		{
			"IMPWMOD\Weapons\Submachine\PKP_Tactical\data\6p69_co.paa",
			"IMPWMOD\Weapons\Submachine\PKP_Tactical\data\6p69_pecheneg_co.paa"
		};		
	};
	class IMP_PKP_Tactical_Camo: IMP_PKP_Tactical_Base
	{
		scope = 2;	
		hiddenSelectionsTextures[] = 
		{
			"IMPWMOD\Weapons\Submachine\PKP_Tactical\data\6p69_camo_co.paa",
			"IMPWMOD\Weapons\Submachine\PKP_Tactical\data\6p69_pecheneg_camo_co.paa"
		};		
	};		
	class IMP_PKP_Tactical_DesertCamo: IMP_PKP_Tactical_Base
	{
		scope = 2;	
		hiddenSelectionsTextures[] = 
		{
			"IMPWMOD\Weapons\Submachine\PKP_Tactical\data\6p69_desert_co.paa",
			"IMPWMOD\Weapons\Submachine\PKP_Tactical\data\6p69_pecheneg_desert_co.paa"
		};		
	};
};