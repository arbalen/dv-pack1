class CfgPatches
{
	class IMP_MCXTacops
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Firearms"};
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
	class IMP_MCXTacops_Base: Rifle_Base
	{
		scope = 0;
		displayName = "MCX Virtus Tacops";		
		descriptionShort = "$STR_MCXVTacOpsD";		
		weight = 3800;		
		model = "IMPWMODPart2\Weapons\Automatic\MCXTacops\mcxtacops.p3d";		
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.6,50,200,4,10};
		WeaponLength = 1.1;
		initSpeedMultiplier = 1.0;
		barrelArmor = 2.5;		
		attachments[] = {"weaponButtstockIMPMCX","weaponHandguardIMPMCXTacops","weaponWrap","weaponOptics","weaponFlashlight","weaponMuzzleM4"};
		itemSize[] = {8,2};		
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_556x45","Ammo_556x45Tracer"};
		magazines[]=
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
		ejectType = 1;
		recoilModifier[] = {0.25,0.25,0.25};
		swayModifier[] = {0,0,0};
		hiddenSelections[] = {"color1","color2","color3","color4","color5","color6","color7"};
		simpleHiddenSelections[] = {"hide_barrel"};
		modes[] = {"FullAuto","SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"IMP_MCX_Shot_SoundSet","M16_silencerTail_SoundSet","M16_silencerInteriorTail_SoundSet"};
			soundSetShotExt[] = {{"IMP_MCX_SilencedShot_SoundSet","M16_silencerTail_SoundSet","M16_silencerInteriorTail_SoundSet"},{"M16_silencerHomeMade_SoundSet","M16_silencerHomeMadeTail_SoundSet","M16_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.1;
			dispersion = 0;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"IMP_MCX_Shot_SoundSet","M16_silencerTail_SoundSet","M16_silencerInteriorTail_SoundSet"};
			soundSetShotExt[] = {{"IMP_MCX_SilencedShot_SoundSet","M16_silencerTail_SoundSet","M16_silencerInteriorTail_SoundSet"},{"M16_silencerHomeMade_SoundSet","M16_silencerHomeMadeTail_SoundSet","M16_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.075;
			dispersion = 0;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 82;
			type = "shot";
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
					overrideParticle="weapon_shot_fnx_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={0,0,0};
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
				maxOverheatingValue = 25;
				shotsToStartOverheating = 10;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					positionOffset[] = {-0.02,0,0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.2};
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
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={25,50,100,200,300};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=25;
			distanceZoomMax=300;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300000;
					healthLevels[] = 
					{
						{1.0,{"IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_upper.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_barrel.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_lower.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_grip.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_charginghandle.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_bolt.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_gasblock.rvmat"}},
						{0.7,{"IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_upper.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_barrel.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_lower.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_grip.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_charginghandle.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_bolt.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_gasblock.rvmat"}},
						{0.5,{"IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_upper_damage.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_barrel_damage.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_lower_damage.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_grip_damage.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_charginghandle_damage.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_bolt_damage.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_gasblock_damage.rvmat"}},
						{0.3,{"IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_upper_damage.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_barrel_damage.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_lower_damage.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_grip_damage.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_charginghandle_damage.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_bolt_damage.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_gasblock_damage.rvmat"}},
						{0.0,{"IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_upper_destruct.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_barrel_destruct.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_lower_destruct.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_grip_destruct.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_charginghandle_destruct.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_bolt_destruct.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_gasblock_destruct.rvmat"}}
					};
				};
			};
		};			
	};
	class IMP_MCXTacops_Black: IMP_MCXTacops_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_upper_co.paa","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_barrel_co.paa","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_lower_co.paa","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_grip_co.paa","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_charginghandle_co.paa","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_bolt_co.paa","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_gasblock_co.paa"};
	};	
};

class cfgVehicles
{
	class ItemSuppressor;
	class IMP_MCXTacops_Suppressor_MODX: ItemSuppressor
	{
		scope = 2;
		displayName = "$STR_MCXVTacOpsSineN";
		descriptionShort = "$STR_MCXVTacOpsSineD";
		model = "IMPWMODPart2\Weapons\Automatic\MCXTacops\mcxtacops_muzzle_modx.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 300;
		itemSize[] = {3,1};
		itemModelLength = 0.25;
		barrelArmor = 2250;
		inventorySlot[] = {"weaponMuzzleM4"};
		simulation = "ItemSuppressor";
		dispersionModifier = -0.0005;
		dispersionCondition = "true";
		noiseShootModifier = -2.0;
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {1.2,1.2,1.2};
		selectionFireAnim = "zasleh";
		soundIndex = 1;
		muzzlePos = "usti hlavne";
		hiddenSelections[] = {"color"};
		hiddenSelectionsTextures[] = {"IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_muzzle_modx_co.paa"};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlashAssault
				{
					overrideParticle = "weapon_shot_akm_02";
					onlyWithinHealthLabel[] = {0,3};
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
					hitpoints = 40000;
					healthLevels[] = {{1.0,{"IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_muzzle_modx.rvmat"}},{0.7,{"IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_muzzle_modx.rvmat"}},{0.5,{"IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_muzzle_modx_damage.rvmat"}},{0.3,{"IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_muzzle_modx_damage.rvmat"}},{0.0,{"IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_muzzle_modx_destruct.rvmat"}}};
				};
			};
		};
	};
	class IMP_MCXTacops_Suppressor_QD: ItemSuppressor
	{
		scope = 2;
		displayName = "$STR_MCXVTacOpsSineQDN";
		descriptionShort = "$STR_MCXVTacOpsSineD";
		model = "IMPWMODPart2\Weapons\Automatic\MCXTacops\mcxtacops_muzzle_qd.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 300;
		itemSize[] = {3,1};
		itemModelLength = 0.25;
		barrelArmor = 2250;
		inventorySlot[] = {"weaponMuzzleM4"};
		simulation = "ItemSuppressor";
		dispersionModifier = -0.0005;
		dispersionCondition = "true";
		noiseShootModifier = -2.0;
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {1.2,1.2,1.2};
		selectionFireAnim = "zasleh";
		soundIndex = 1;
		muzzlePos = "usti hlavne";
		hiddenSelections[] = {"color"};
		hiddenSelectionsTextures[] = {"IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_muzzle_qd_co.paa"};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlashAssault
				{
					overrideParticle = "weapon_shot_akm_02";
					onlyWithinHealthLabel[] = {0,3};
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
					hitpoints = 40000;
					healthLevels[] = {{1.0,{"IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_muzzle_qd.rvmat"}},{0.7,{"IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_muzzle_qd.rvmat"}},{0.5,{"IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_muzzle_qd_damage.rvmat"}},{0.3,{"IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_muzzle_qd_damage.rvmat"}},{0.0,{"IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_muzzle_qd_destruct.rvmat"}}};
				};
			};
		};
	};
	class Inventory_Base;
	class IMP_MCXTacops_Handguard: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_MCXVTacOpsHndgrdN";
		descriptionShort = "$STR_MCXVTacOpsHndgrdD";
		model = "IMPWMODPart2\Weapons\Automatic\MCXTacops\mcxtacops_handguard.p3d";
		rotationFlags = 17;
		hasRailFunctionality = 1;
		reversed = 0;
		weight = 350;
		itemSize[] = {3,1};
		inventorySlot[] = {"weaponHandguardIMPMCXTacops"};
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {0.5,0.5,0.5};
		hiddenSelections[] = {"color"};
		hiddenSelectionsTextures[] = {"\IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_handguard_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 22000000;
					healthLevels[] = {{1.0,{"IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_handguard.rvmat"}},{0.7,{"IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_handguard.rvmat"}},{0.5,{"IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_handguard_damage.rvmat"}},{0.3,{"IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_handguard_damage.rvmat"}},{0.0,{"IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_handguard_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
		soundImpactType = "metal";
	};
	class IMP_MCXTacops_Bttstck_Base: Inventory_Base
	{
		scope = 0;
		displayName = "$STR_MCXVTacOpsButtN";
		descriptionShort = "$STR_MCXVTacOpsButtD";
		model = "IMPWMODPart2\Weapons\Automatic\MCXTacops\mcxtacops_buttstock.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"weaponButtstockIMPMCX"};
		weight = 330;
		itemSize[] = {3,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.5,0.5,0.5};
		hiddenSelections[] = {"color1","color2"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 2200000;
					healthLevels[] = 
					{{1.0,{"IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_tube.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_buttstock.rvmat"}},
					{0.7,{"IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_tube.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_buttstock.rvmat"}},
					{0.5,{"IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_tube_damage.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_buttstock_damage.rvmat"}},
					{0.3,{"IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_tube_damage.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_buttstock_damage.rvmat"}},
					{0.0,{"IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_tube_destruct.rvmat","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_buttstock_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
		soundImpactType = "plastic";
	};
	class IMP_MCXTacops_Bttstck_FDE: IMP_MCXTacops_Bttstck_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_buttstock_fde_co.paa","\IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_tube_co.paa"};
	};
	class IMP_MCXTacops_Bttstck_Black: IMP_MCXTacops_Bttstck_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_buttstock_black_co.paa","IMPWMODPart2\Weapons\Automatic\MCXTacops\data\mcxtacops_tube_co.paa"};
	};
};

class CfgSlots
{
	class Slot_weaponHandguardIMPMCXTacops
	{
		name = "weaponHandguardIMPMCXTacops";
		displayName = "$STR_MCXVTacOpsSlotHndN";
		ghostIcon = "set:dayz_inventory image:handguard";
	};	
	class Slot_weaponButtstockIMPMCX
	{
		name = "weaponButtstockIMPMCX";
		displayName = "$STR_MCXVTacOpsSlotButtN";
		ghostIcon = "set:dayz_inventory image:buttstock";
	};	
};

class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxymcxtacops_handguard: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "weaponHandguardIMPMCXTacops";
		model = "IMPWMODPart2\Weapons\Automatic\MCXTacops\mcxtacops_handguard.p3d";
	};
	class Proxymcxtacops_buttstock: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "weaponButtstockIMPMCX";
		model = "IMPWMODPart2\Weapons\Automatic\MCXTacops\mcxtacops_buttstock.p3d";
	};
	class Proxymcxtacops_muzzle_modx: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "weaponMuzzleM4";
		model = "IMPWMODPart2\Weapons\Automatic\MCXTacops\mcxtacops_muzzle_modx.p3d";
	};
	class Proxymcxtacops_muzzle_qd: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "weaponMuzzleM4";
		model = "IMPWMODPart2\Weapons\Automatic\MCXTacops\mcxtacops_muzzle_qd.p3d";
	};
};