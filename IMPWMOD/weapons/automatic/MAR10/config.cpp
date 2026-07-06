class CfgPatches
{
	class IMP_MAR10
	{
		units[] = {"IMP_MAR10_Base","IMP_MAR10"};
		magazines[]={"IMP_Mag_MAR10_10rnd_Base","IMP_Mag_MAR10_10rnd"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
	};
};
class Mode_SemiAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class IMP_MAR10_Base: Rifle_Base
	{
		scope = 0;
		displayName = "MAR-10";
		descriptionShort = "$STR_IMP_MAR10descr";
		model = "IMPWMOD\Weapons\Automatic\MAR10\models\mar10.p3d";
		itemSize[] = {10,2};
		weight = 7265;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {0,0,0,0,0,0};
		WeaponLength = 0.965;
		barrelArmor = 1.6;
		initSpeedMultiplier = 1.0;
		chamberedRound = "";
		chamberSize = 1;
		chamberableFrom[] = {"IMP_Ammo_338LM"};
		magazines[] = {"IMP_Mag_MAR10_10rnd"};
		attachments[] = 
		{
			"weaponFlashlight",
			"weaponOptics",
			"weaponWrap",
			"suppressorMAR",
			"weaponButtstockM4",
			"weaponBipod",
			"HandlesM4"
		};
		magazineSwitchTime = 0.25;
		ejectType = 1;
		recoilModifier[]={0.25,0.25,0.25};
		swayModifier[]={0,0,0};
		simpleHiddenSelections[] = {"hide_barrel", "HandlesM4"};
		modes[] = {"SemiAuto"};
		hiddenSelections[] = {"camo1","camo2"};

		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"MAR10_Shot_SoundSet","MAR10_Tail_SoundSet","MAR10_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"MAR10_silencer_SoundSet","MAR10_silencerInteriorTail_SoundSet"},{"MAR10_silencerHomeMade_SoundSet"}};
			reloadTime = 0.5;
			recoil = "recoil_svd";
			recoilProne = "recoil_svd_prone";
			dispersion = 0;
			magazineSlot = "magazine";
		};
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 2500000;
					healthLevels[] = 
					{
						{1.0,{"IMPWMOD\Weapons\Automatic\MAR10\data\camo1.rvmat",            "IMPWMOD\Weapons\Automatic\MAR10\data\camo2.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Automatic\MAR10\data\camo1.rvmat",            "IMPWMOD\Weapons\Automatic\MAR10\data\camo2.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Automatic\MAR10\data\camo1_damage.rvmat",     "IMPWMOD\Weapons\Automatic\MAR10\data\camo2_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Automatic\MAR10\data\camo1_damage.rvmat",     "IMPWMOD\Weapons\Automatic\MAR10\data\camo2_damage.rvmat"}},
						{0.0,{"IMPWMOD\Weapons\Automatic\MAR10\data\camo1_destruct.rvmat",   "IMPWMOD\Weapons\Automatic\MAR10\data\camo2_destruct.rvmat"}}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					ignoreIfSuppressed = 1;
				};
				class SmokeCloud1
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class MuzzleFlash2
				{
					overrideParticle = "weapon_shot_m4a1_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 5;
				maxOverheatingValue = 30;
				overheatingDecayInterval = 1;
				class Steam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.4,0.02,0};
					onlyWithinOverheatLimits[] = {0,0.5};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class Steam2
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.45,0.02,0};
					onlyWithinOverheatLimits[] = {0.5,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
					onlyWithinOverheatLimits[] = {0,1};
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
		class NoiseShoot
		{
			strength = 100;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 0;
		};
	};
	class IMP_MAR10 : IMP_MAR10_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\MAR10\data\camo1_co.paa","IMPWMOD\Weapons\Automatic\MAR10\data\camo2_co.paa"};
		hiddenSelectionsMaterials[] = {"IMPWMOD\Weapons\Automatic\MAR10\data\camo1.rvmat","IMPWMOD\Weapons\Automatic\MAR10\data\camo2.rvmat"};
	};
};

class CfgMagazines 
{
	class DefaultMagazine;
    class Magazine_Base: DefaultMagazine {};	
	class IMP_Mag_MAR10_10rnd_Base : Magazine_Base 
	{
		scope = 0;
		displayName = "$STR_IMP_Mar10magdescr";
		descriptionShort = "$STR_IMP_Mar10magdescr1";
		model = "IMPWMOD\Weapons\Automatic\MAR10\models\MAR10_Magazine.p3d";
		weight = 850;
		itemSize[] = {1,2};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		count = 10;
		ammo = "IMP_Bullet_338LM";
		ammoItems[] = {"IMP_Ammo_338LM"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = 
					{
						{1.0, {"IMPWMOD\Weapons\Automatic\MAR10\data\camo2.rvmat"}},
						{0.7, {"IMPWMOD\Weapons\Automatic\MAR10\data\camo2.rvmat"}},
						{0.5, {"IMPWMOD\Weapons\Automatic\MAR10\data\camo2_damage.rvmat"}}, 
						{0.3, {"IMPWMOD\Weapons\Automatic\MAR10\data\camo2_damage.rvmat"}}, 
						{0.0, {"IMPWMOD\Weapons\Automatic\MAR10\data\camo2_destruct.rvmat"}}
					};
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
	class IMP_Mag_MAR10_10rnd : IMP_Mag_MAR10_10rnd_Base 
	{
		scope = 2;
		hiddenSelections[] = {"magazine"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\MAR10\data\camo2_co.paa"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyMAR10_Magazine: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\MAR10\models\MAR10_Magazine.p3d";
	};
};