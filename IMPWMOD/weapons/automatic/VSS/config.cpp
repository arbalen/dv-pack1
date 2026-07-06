class CfgPatches {
	class IMP_Weapons_VSS 
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
	
	class IMP_VSS_Base : Rifle_Base {
		scope = 0;
		displayName = "$STR_IMP_VSSVintorez";
		descriptionShort = "$STR_IMP_VSSVintorez1";
		itemSize[]={8,2};
		weight = 2500;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		PPDOFProperties[] = {1, 0.5, 50, 150, 4, 10};
		WeaponLength = 0.883;
		initSpeedMultiplier = 1;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_9x39", "Ammo_9x39AP"};
		magazines[] = 
		{
			"Mag_VSS_10Rnd", 
			"Mag_VAL_20Rnd", 
			"Mag_VSS_CoupledDT_20Rnd", 
			"Mag_VSS_Coupled_20Rnd", 
			"IMP_Mag_VAL_CoupledTape_40Rnd", 
			"IMP_Mag_VAL_CoupledClip_40Rnd", 
			"IMP_Mag_VSS_CoupledTape_20Rnd", 
			"IMP_Mag_VSS_CoupledClip_20Rnd",
			"IMP_Mag_VSS_30Rnd"
		};
		ejectType = 1;
		recoilModifier[]={0.25,0.25,0.25};
		swayModifier[]={0,0,0};
		hiddenSelections[] = {"camoflage"};
		simpleHiddenSelections[] = {};
		modes[] = {"FullAuto", "SemiAuto"};
		
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"VSS_Vintorez_Shot_SoundSet",
				"VSS_Vintorez_Tail_SoundSet",
				"VSS_Vintorez_InteriorTail_SoundSet"
			};
			envShootingDecrease=0.050000001;
			reloadTime=0.08;
			recoil="recoil_VSS";
			recoilProne="recoil_VSS_prone";
			dispersion=0;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"VSS_Vintorez_Shot_SoundSet",
				"VSS_Vintorez_Tail_SoundSet",
				"VSS_Vintorez_InteriorTail_SoundSet"
			};
			reloadTime=0.08;
			recoil="recoil_VSS";
			recoilProne="recoil_VSS_prone";
			dispersion=0;
			magazineSlot="magazine";
		};
		
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={100,200,300,400};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
		};
		
		class Particles {
			class OnFire {
				class SmokeCloud {
					overrideParticle = "weapon_shot_winded_smoke";
				};
				
				class MuzzleFlash {
					overrideParticle = "weapon_shot_mosin_compensator_01";
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
				maxOverheatingValue = 20;
				shotsToStartOverheating = 3;
				overheatingDecayInterval = 1;
				
				class SmokingBarrel1 {
					positionOffset[] = {0.1, 0, 0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0, 0.5};
					onlyWithinRainLimits[] = {0, 0.2};
				};
				
				class SmokingBarrelHot1 {
					positionOffset[] = {0.1, 0, 0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.5, 0.8};
					onlyWithinRainLimits[] = {0, 0.2};
				};
				
				class SmokingBarrelHot3 {
					positionOffset[] = {0.1, 0, 0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.8, 1};
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
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints=1000000000;
					healthLevels[] = 
					{
						{1.0, {"IMPWMOD\Weapons\Automatic\VSS\data\1.rvmat", "IMPWMOD\Weapons\Automatic\VSS\data\2.rvmat", "IMPWMOD\Weapons\Automatic\VSS\data\3.rvmat", "IMPWMOD\Weapons\Automatic\VSS\data\4.rvmat"}}, 
						{0.7, {"IMPWMOD\Weapons\Automatic\VSS\data\1.rvmat", "IMPWMOD\Weapons\Automatic\VSS\data\2.rvmat", "IMPWMOD\Weapons\Automatic\VSS\data\3.rvmat", "IMPWMOD\Weapons\Automatic\VSS\data\4.rvmat"}}, 
						{0.5, {"IMPWMOD\Weapons\Automatic\VSS\data\1.rvmat", "IMPWMOD\Weapons\Automatic\VSS\data\2.rvmat", "IMPWMOD\Weapons\Automatic\VSS\data\3.rvmat", "IMPWMOD\Weapons\Automatic\VSS\data\4.rvmat"}}, 
						{0.3, {"IMPWMOD\Weapons\Automatic\VSS\data\1.rvmat", "IMPWMOD\Weapons\Automatic\VSS\data\2.rvmat", "IMPWMOD\Weapons\Automatic\VSS\data\3.rvmat", "IMPWMOD\Weapons\Automatic\VSS\data\4.rvmat"}}, 
						{0.0, {"IMPWMOD\Weapons\Automatic\VSS\data\1.rvmat", "IMPWMOD\Weapons\Automatic\VSS\data\2.rvmat", "IMPWMOD\Weapons\Automatic\VSS\data\3.rvmat", "IMPWMOD\Weapons\Automatic\VSS\data\4.rvmat"}}
					};
				};
			};
		};
	};
	
	class IMP_VSS : IMP_VSS_Base 
	{
		scope = 2;
		model = "IMPWMOD\Weapons\Automatic\VSS\models\IMP_VSS.p3d";
		attachments[] = {"weaponWrap", "weaponOpticsAK", "Rail", "weaponOptics"};
	};
};
