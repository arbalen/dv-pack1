class CfgPatches {
	class IMP_Weapons_PKP {
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
	
	class IMP_PKP_Base : Rifle_Base {
		scope = 0;
		displayName = "$STR_IMP_PKPNAme";
		descriptionShort = "$STR_IMP_PKPNAme2";
		model = "IMPWMOD\Weapons\Submachine\PKP\models\IMP_PKP.p3d";
		attachments[] = 
		{
			"weaponWrap",
			"weaponMuzzleAK",
			"weaponOpticsAK",
			"Rail",
			"weaponOptics",
			"HandlesAK"
		};
		itemSize[] = {10, 2};
		initSpeedMultiplier = 1;
		weight = 18200;
		absorbency = 0.0;
		repairableWithKits[] = {1};
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
		hiddenSelections[] = {"camoflage", "camoflage1"};
		hiddenSelectionsMaterials[] = {"IMPWMOD\Weapons\Submachine\PKP\data\pkp1.rvmat", "IMPWMOD\Weapons\Submachine\PKP\data\pkp2.rvmat"};
		simpleHiddenSelections[] = {"hide_barrel", "ammobelt", "HandlesAK"};
		modes[] = {"FullAuto", "SemiAuto"};
		
		class SemiAuto : Mode_SemiAuto {
			soundSetShot[] = {"PKPZ_Shot_SoundSet", "PKPZ_Tail_SoundSet", "PKPZ_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "PKPZ_silencer_SoundSet", "PKPZ_silencerTail_SoundSet", "PKPZ_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.128;
			recoil = "recoil_mosin";
			recoilProne = "recoil_mosin_prone";
			dispersion = 0;
			magazineSlot = "magazine";
		};
		
		class FullAuto : Mode_FullAuto {
			soundSetShot[] = {"PKPZ_Shot_SoundSet", "PKPZ_Tail_SoundSet", "PKPZ_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "PKPZ_silencer_SoundSet", "PKPZ_silencerTail_SoundSet", "PKPZ_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.09;
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
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 10000000;
					healthLevels[] = {
						{1.0, {"IMPWMOD\Weapons\Submachine\PKP\data\pkp1.rvmat","IMPWMOD\Weapons\Submachine\PKP\data\pkp2.rvmat"}}, 
						{0.7, {"IMPWMOD\Weapons\Submachine\PKP\data\pkp1.rvmat","IMPWMOD\Weapons\Submachine\PKP\data\pkp2.rvmat"}}, 
						{0.5, {"IMPWMOD\Weapons\Submachine\PKP\data\pkp1_damage.rvmat","IMPWMOD\Weapons\Submachine\PKP\data\pkp2_damage.rvmat"}}, 
						{0.3, {"IMPWMOD\Weapons\Submachine\PKP\data\pkp1_damage.rvmat","IMPWMOD\Weapons\Submachine\PKP\data\pkp2_damage.rvmat"}}, 
						{0.01, {"IMPWMOD\Weapons\Submachine\PKP\data\pkp1_destruct.rvmat","IMPWMOD\Weapons\Submachine\PKP\data\pkp2_destruct.rvmat"}}
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
	
	class IMP_PKP : IMP_PKP_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Submachine\PKP\data\pkp1.paa", "IMPWMOD\Weapons\Submachine\PKP\data\pkp2.paa"};
	};
	class IMP_PKP_Tkali : IMP_PKP 
	{
		scope = 2;
		hiddenSelectionsTextures[]={"IMPWMODPart2\Weapons\Tex\pkp1_tkali.paa", "IMPWMODPart2\Weapons\Tex\pkp2_tkali.paa"};
	};
	
};

class cfgMagazines {
	class Magazine_Base;
	
	class IMP_Mag_PKP_200Rnd : Magazine_Base {
		scope = 2;
		displayName = "$STR_IMP_PKPNAme3";
		descriptionShort = "$STR_IMP_PKPNAme4";
		model = "IMPWMOD\Weapons\Submachine\PKPZenitco\models\ZenitcoMag.p3d";
		weight = 500;
		itemSize[] = {3,2};
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		count = 200;
		ammo = "Bullet_762x54";
		ammoItems[] = {"Ammo_762x54", "Ammo_762x54Tracer"};
		tracersEvery = 0;
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 1000000;
					healthLevels[] = {
						{1.0, {"impwmod\weapons\submachine\pkpzenitco\data\pkp6.rvmat"}}, 
						{0.7, {"impwmod\weapons\submachine\pkpzenitco\data\pkp6.rvmat"}}, 
						{0.5, {"impwmod\weapons\submachine\pkpzenitco\data\pkp6_damage.rvmat"}}, 
						{0.3, {"impwmod\weapons\submachine\pkpzenitco\data\pkp6_damage.rvmat"}}, 
						{0.01, {"impwmod\weapons\submachine\pkpzenitco\data\pkp6_destruct.rvmat"}}
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