class CfgPatches
{
	class IMP_Groza
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
	class IMP_Groza_9x39_Base: Rifle_Base
	{
		scope = 0;
		PPDOFProperties[] = {1,0.5,50,60.1,4,10};
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		barrelArmor = 2.9;
		attachments[] = {"weaponWrap","weaponOpticsSZOTs14","weaponFlashlight"};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_9x39","Ammo_9x39AP"};
		magazines[] = {"IMP_Mag_Groza_20rnd"};
		ejectType = 1;
		weight = 3180;
		WeaponLength = 0.63;
		recoilModifier[] = {0.25,0.25,0.25};
		swayModifier[] = {0,0,0};
		itemSize[] = {7,2};
		simpleHiddenSelections[] = {"hide_barrel"};
		modes[] = {"FullAuto","SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"Groza_SilencedShot_SoundSet","VSS_Vintorez_Tail_SoundSet","VSS_Vintorez_InteriorTail_SoundSet"};
			reloadTime = 0.125;
			dispersion = 0;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"Groza_SilencedShot_SoundSet","VSS_Vintorez_Tail_SoundSet","VSS_Vintorez_InteriorTail_SoundSet"};
			reloadTime = 0.0857;
			dispersion = 0;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 4;
			type = "sound";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_vss_01";
					ignoreIfSuppressed=1;
					illuminateWorld=0;
					positionOffset[]={-0.050000001,0,0};
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
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
				maxOverheatingValue = 30;
				shotsToStartOverheating = 15;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,1};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.3,0,0};
					onlyWithinRainLimits[] = {0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.3,0,0};
					onlyWithinRainLimits[] = {0.5,1};
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
					hitpoints = 3500000;
					healthLevels[] = 
					{
						{1.0,{"IMPWMODPart2\Weapons\Automatic\GROZA\data\main.rvmat","IMPWMODPart2\Weapons\Automatic\GROZA\data\attach.rvmat"}},
						{0.7,{"IMPWMODPart2\Weapons\Automatic\GROZA\data\main.rvmat","IMPWMODPart2\Weapons\Automatic\GROZA\data\attach.rvmat"}},
						{0.5,{"IMPWMODPart2\Weapons\Automatic\GROZA\data\main_damage.rvmat","IMPWMODPart2\Weapons\Automatic\GROZA\data\attach_damage.rvmat"}},
						{0.3,{"IMPWMODPart2\Weapons\Automatic\GROZA\data\main_damage.rvmat","IMPWMODPart2\Weapons\Automatic\GROZA\data\attach_damage.rvmat"}},
						{0.0,{"IMPWMODPart2\Weapons\Automatic\GROZA\data\main_destruct.rvmat","IMPWMODPart2\Weapons\Automatic\GROZA\data\attach_destruct.rvmat"}}
					};
				};
			};
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={25,50,100,200,300};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=25;
			distanceZoomMax=300;
		};
	};
	class IMP_Groza_762_Base: Rifle_Base
	{
		scope = 0;
		PPDOFProperties[] = {1,0.5,50,60.1,4,10};
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		barrelArmor = 2.9;
		attachments[] = {"weaponWrap","weaponOpticsSZOTs14","weaponFlashlight"};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_762x39","Ammo_762x39Tracer"};
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
		ejectType = 1;
		weight = 3180;
		WeaponLength = 0.63;
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {1.65,1.65,0.9};
		itemSize[] = {7,3};
		simpleHiddenSelections[] = {"hide_barrel"};
		modes[] = {"FullAuto","SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"Groza_SilencedShot_SoundSet","VSS_Vintorez_Tail_SoundSet","VSS_Vintorez_InteriorTail_SoundSet"};
			reloadTime = 0.125;
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"Groza_SilencedShot_SoundSet","VSS_Vintorez_Tail_SoundSet","VSS_Vintorez_InteriorTail_SoundSet"};
			reloadTime = 0.0857;
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 4;
			type = "sound";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_vss_01";
					ignoreIfSuppressed=1;
					illuminateWorld=0;
					positionOffset[]={-0.050000001,0,0};
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
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
				maxOverheatingValue = 30;
				shotsToStartOverheating = 15;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,1};
					positionOffset[] = {0.1,0,0};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.3,0,0};
					onlyWithinRainLimits[] = {0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.3,0,0};
					onlyWithinRainLimits[] = {0.5,1};
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
					hitpoints = 350;
					healthLevels[] = 
					{
						{1.0,{"IMPWMODPart2\Weapons\Automatic\GROZA\data\main.rvmat","IMPWMODPart2\Weapons\Automatic\GROZA\data\attach.rvmat"}},
						{0.7,{"IMPWMODPart2\Weapons\Automatic\GROZA\data\main.rvmat","IMPWMODPart2\Weapons\Automatic\GROZA\data\attach.rvmat"}},
						{0.5,{"IMPWMODPart2\Weapons\Automatic\GROZA\data\main_damage.rvmat","IMPWMODPart2\Weapons\Automatic\GROZA\data\attach_damage.rvmat"}},
						{0.3,{"IMPWMODPart2\Weapons\Automatic\GROZA\data\main_damage.rvmat","IMPWMODPart2\Weapons\Automatic\GROZA\data\attach_damage.rvmat"}},
						{0.0,{"IMPWMODPart2\Weapons\Automatic\GROZA\data\main_destruct.rvmat","IMPWMODPart2\Weapons\Automatic\GROZA\data\attach_destruct.rvmat"}}
					};
				};
			};
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={25,50,100,200,300};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=25;
			distanceZoomMax=300;
		};
	};
	class IMP_Groza_9x39: IMP_Groza_9x39_Base
	{
		scope = 2;
		displayName = "$STR_IMPGROZA";
		descriptionShort = "$STR_IMPGROZADescription";
		model = "IMPWMODPart2\Weapons\Automatic\GROZA\Groza_suppressed.p3d";
		hiddenSelections[] = {"color","suppressor"};
		hiddenSelectionsTextures[] = {"IMPWMODPart2\Weapons\Automatic\GROZA\data\main_co.paa","IMPWMODPart2\Weapons\Automatic\GROZA\data\attach_co.paa"};
	};
	class IMP_Groza_762: IMP_Groza_762_Base
	{
		scope = 2;
		displayName = "$STR_IMPGroza762";
		descriptionShort = "$STR_IMPGROZADescription";
		model = "IMPWMODPart2\Weapons\Automatic\GROZA\Groza_suppressed_762.p3d";
		hiddenSelections[] = {"color","suppressor"};
		hiddenSelectionsTextures[] = {"IMPWMODPart2\Weapons\Automatic\GROZA\data\main_762_co.paa","IMPWMODPart2\Weapons\Automatic\GROZA\data\attach_co.paa"};
	};
};

class CfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_Groza_20rnd: Magazine_Base
	{
		scope = 2;
		displayName = "$STR_IMPGrozaMag939N";
		descriptionShort = "$STR_IMPGrozaMag939D";
		model = "IMPWMODPart2\Weapons\Automatic\GROZA\Groza_mag.p3d";
		weight = 150;
		itemSize[] = {1,2};
		count = 20;
		ammo = "Bullet_9x39";
		ammoItems[] = {"Ammo_9x39","Ammo_9x39AP"};
		tracersEvery = 0;
		hiddenSelections[] = {"magazine"};
		hiddenSelectionsTextures[] = {"IMPWMODPart2\Weapons\Automatic\GROZA\data\main_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {{1.0,{"IMPWMODPart2\Weapons\Automatic\GROZA\data\main.rvmat"}},{0.7,{"IMPWMODPart2\Weapons\Automatic\GROZA\data\main.rvmat"}},{0.5,{"IMPWMODPart2\Weapons\Automatic\GROZA\data\main_damage.rvmat"}},{0.3,{"IMPWMODPart2\Weapons\Automatic\GROZA\data\main_damage.rvmat"}},{0.0,{"IMPWMODPart2\Weapons\Automatic\GROZA\data\main_destruct.rvmat"}}};
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

class cfgVehicles
{
	class ItemSuppressor;
	class IMP_Groza_Silencer: ItemSuppressor
	{
		scope = 0;
		displayName = "$STR_IMPGrozaSile";
		descriptionShort = "$STR_IMPGrozaSileD";
		model = "IMPWMODPart2\Weapons\Automatic\GROZA\Groza_silencer.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 480;
		itemSize[] = {3,1};
		itemModelLength = 0.25;
		barrelArmor = 2250;
//		inventorySlot[] = {"weaponMuzzleSZOTs14"};
		simulation = "ItemSuppressor";
		dispersionModifier = -0.0005;
		dispersionCondition = "true";
		noiseShootModifier = -2.0;
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {1.2,1.2,1.2};
		selectionFireAnim = "zasleh";
		soundIndex = 1;
		muzzlePos = "usti hlavne";
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_vss_01";
					ignoreIfSuppressed=1;
					illuminateWorld=0;
					positionOffset[]={-0.050000001,0,0};
				};
				class Ruined
				{
					onlyWithinHealthLabel[] = {4,4};
					illuminateWorld = 1;
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 2;
				maxOverheatingValue = 20;
				overheatingDecayInterval = 1;
				class SmokingBarrel
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.0,0.1,0};
					onlyWithinRainLimits[] = {0.2,1};
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 400;
					healthLevels[] = {{1.0,{"IMPWMODPart2\Weapons\Automatic\GROZA\data\attach.rvmat"}},{0.7,{"IMPWMODPart2\Weapons\Automatic\GROZA\data\attach.rvmat"}},{0.5,{"IMPWMODPart2\Weapons\Automatic\GROZA\data\attach_damage.rvmat"}},{0.3,{"IMPWMODPart2\Weapons\Automatic\GROZA\data\attach_damage.rvmat"}},{0.0,{"IMPWMODPart2\Weapons\Automatic\GROZA\data\attach_destruct.rvmat"}}};
				};
			};
		};
	};
	class ItemOptics;
	class IMP_GrozaOptic: ItemOptics
	{
		scope = 2;
		displayName = "$STR_IMPGrozaOptic";
		descriptionShort = "$STR_IMPGrozaOpticD";
		model = "IMPWMODPart2\Weapons\Automatic\GROZA\Groza_scope.p3d";
		animClass = "Binoculars";
		rotationFlags = 17;
		reversed = 0;
		weight = 360;
		itemSize[] = {3,1};
		inventorySlot[] = {"weaponOpticsSZOTs14"};
		simulation = "itemoptics";
		dispersionModifier = -0.000125;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1,1,1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10000;
					healthLevels[] = {{1.0,{"IMPWMODPart2\Weapons\Automatic\GROZA\data\scope.rvmat"}},{0.7,{"IMPWMODPart2\Weapons\Automatic\GROZA\data\scope.rvmat"}},{0.5,{"IMPWMODPart2\Weapons\Automatic\GROZA\data\scope_damage.rvmat"}},{0.3,{"IMPWMODPart2\Weapons\Automatic\GROZA\data\scope_damage.rvmat"}},{0.0,{"IMPWMODPart2\Weapons\Automatic\GROZA\data\scope_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "IMPWMODPart2\Weapons\Automatic\GROZA\Groza_scope_reticle.p3d";
			preloadOpticType = "Preload2DOptic_SZ_OTs14";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur3"};
			opticsZoomMin = "0.3926/4";
			opticsZoomMax = "0.3926/4";
			opticsZoomInit = "0.3926/4";
			distanceZoomMin = 100;
			distanceZoomMax = 400;
			discreteDistance[] = {100,200,300,400};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.5,0.1};
			PPLensProperties[] = {0.3,0.15,0,0};
			PPBlurProperties = 0.3;
		};
		class AnimationSources
		{
			class hide
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
	};
	class Inventory_Base;
	class Preload2DOptic_IMP_Groza: Inventory_Base
	{
		scope = 0;
		model = "IMPWMODPart2\Weapons\Automatic\GROZA\Groza_scope_reticle.p3d";
	};
};

class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyGroza_mag: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "magazine";
		model = "IMPWMODPart2\Weapons\Automatic\GROZA\Groza_mag.p3d";
	};
	class ProxyGroza_scope: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "weaponOpticsSZOTs14";
		model = "IMPWMODPart2\Weapons\Automatic\GROZA\Groza_scope.p3d";
	};	
};

class CfgSlots
{
	class Slot_weaponOpticsSZOTs14
	{
		name = "weaponOpticsSZOTs14";
		displayName = "$STR_IMPGrozaOptic";
		ghostIcon = "weaponoptics";
	};
};


class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;	
	class base_distShot_SoundShader;
	class Groza_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMODPart2\Weapons\Automatic\GROZA\sounds\Groza_close",1}};
		volume = 1.0;
	};
	class Groza_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMODPart2\Weapons\Automatic\GROZA\sounds\Groza_mid",1}};
		volume = 0.5;
	};
	class Groza_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMODPart2\Weapons\Automatic\GROZA\sounds\Groza_far",1}};
		volume = 0.35;
	};
	
	class base_HomeSilenced_closeShot_SoundShader;
	class base_HomeSilenced_midShot_SoundShader;	
	class base_HomeSilenced_distShot_SoundShader;		
	class Groza_silencedcloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMODPart2\Weapons\Automatic\GROZA\sounds\Groza_suppressed_close",1}};
		volume = 1.0;		
	};
	class Groza_silencedmidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMODPart2\Weapons\Automatic\GROZA\sounds\Groza_suppressed_mid",1}};
		volume = 0.8;		
	};
	class Groza_silenceddistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMODPart2\Weapons\Automatic\GROZA\sounds\Groza_suppressed_far",1}};
		volume = 0.6;		
	};	
};

class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;	
	class Groza_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"Groza_closeShot_SoundShader","Groza_midShot_SoundShader","Groza_distShot_SoundShader"};
	};
	
	class Rifle_silencerHomemade_Base_SoundSet;
	class Groza_SilencedShot_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[] = {"Groza_silencedcloseShot_SoundShader","Groza_silencedmidShot_SoundShader","Groza_silenceddistShot_SoundShader"};
	};	
};