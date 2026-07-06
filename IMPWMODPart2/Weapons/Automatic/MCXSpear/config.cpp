class CfgPatches
{
	class IMP_MCXSpear
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
	class IMP_MCXSpear_Base: Rifle_Base
	{
		scope = 0;
		displayName = "MCX SPEAR";		
		descriptionShort = "$STR_MCXSpearD";		
		weight = 3800;		
		model = "IMPWMODPart2\Weapons\Automatic\MCXSpear\mcxspear.p3d";		
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.6,50,200,4,10};
		WeaponLength = 1.1;
		initSpeedMultiplier = 1.0;
		barrelArmor = 2.5;		
		attachments[] = {"weaponButtstockIMPMCX","weaponWrap","weaponOptics","Suppressor_308"};
		itemSize[] = {9,2};		
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer"};
		magazines[]=
		{
			"Mag_FAL_20Rnd", "IMP_Mag_Fal_Drum_50Rnd", "IMP_Mag_FAL_CoupledTape_40Rnd", "IMP_Mag_FAL_CoupledClip_40Rnd", "IMP_Mag_MCXSpear_20rnd"
		};
		ejectType = 1;
		recoilModifier[] = {0.25,0.25,0.25};
		swayModifier[] = {0,0,0};
		hiddenSelections[] = {"color"};
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
					hitpoints = 3000000;
					healthLevels[] = 
					{
						{1.0,{"IMPWMODPart2\Weapons\Automatic\MCXSpear\data\mcxspear.rvmat"}},
						{0.7,{"IMPWMODPart2\Weapons\Automatic\MCXSpear\data\mcxspear.rvmat"}},
						{0.5,{"IMPWMODPart2\Weapons\Automatic\MCXSpear\data\mcxspear_damage.rvmat"}},
						{0.3,{"IMPWMODPart2\Weapons\Automatic\MCXSpear\data\mcxspear_damage.rvmat"}},
						{0.0,{"IMPWMODPart2\Weapons\Automatic\MCXSpear\data\mcxspear_destruct.rvmat"}}
					};
				};
			};
		};			
	};
	class IMP_MCXSpear_Tan: IMP_MCXSpear_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMODPart2\Weapons\Automatic\MCXSpear\data\mcxspear_tan_co.paa"};
	};	
};

class cfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_MCXSpear_20rnd : Magazine_Base
	{
		scope = 2;
		displayName = "$STR_MCXSpearMagN";
		descriptionShort = "$STR_MCXSpearMagD";
		model = "IMPWMODPart2\Weapons\Automatic\MCXSpear\mcxspear_mag_20rnd.p3d";
		weight = 100;
		itemSize[] = {1,2};
		count = 20;
		ammo = "Bullet_308Win";
		ammoItems[] = {"Ammo_308Win","Ammo_308WinTracer"};
		tracersEvery = 0;
		hiddenSelections[] = {"magazine"};
		hiddenSelectionsTextures[] = {"IMPWMODPart2\Weapons\Automatic\MCXSpear\data\mcxspear_mag_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = 
					{
						{1.0,{"IMPWMODPart2\Weapons\Automatic\MCXSpear\data\mcxspear_mag.rvmat"}},
						{0.7,{"IMPWMODPart2\Weapons\Automatic\MCXSpear\data\mcxspear_mag.rvmat"}},
						{0.5,{"IMPWMODPart2\Weapons\Automatic\MCXSpear\data\mcxspear_mag_damage.rvmat"}},
						{0.3,{"IMPWMODPart2\Weapons\Automatic\MCXSpear\data\mcxspear_mag_damage.rvmat"}},
						{0.0,{"IMPWMODPart2\Weapons\Automatic\MCXSpear\data\mcxspear_mag_destruct.rvmat"}}
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
};

class cfgVehicles
{
	class ItemSuppressor;
	class IMP_MCXSpear_Suppressor: ItemSuppressor
	{
		scope = 2;
		displayName = "$STR_MCXSpearSileN";
		descriptionShort = "$STR_MCXSpearSileD";
		model = "IMPWMODPart2\Weapons\Automatic\MCXSpear\mcxspear_suppressor.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 300;
		itemSize[] = {3,1};
		itemModelLength = 0.25;
		barrelArmor = 2250;
		inventorySlot[] = {"Suppressor_308"};
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
		hiddenSelectionsTextures[] = {"IMPWMODPart2\Weapons\Automatic\MCXSpear\data\mcxspear_suppressor_tan_co.paa"};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_akm_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
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
					healthLevels[] = {{1.0,{"IMPWMODPart2\Weapons\Automatic\MCXSpear\data\mcxspear_suppressor.rvmat"}},{0.7,{"IMPWMODPart2\Weapons\Automatic\MCXSpear\data\mcxspear_suppressor.rvmat"}},{0.5,{"IMPWMODPart2\Weapons\Automatic\MCXSpear\data\mcxspear_suppressor_damage.rvmat"}},{0.3,{"IMPWMODPart2\Weapons\Automatic\MCXSpear\data\mcxspear_suppressor_damage.rvmat"}},{0.0,{"IMPWMODPart2\Weapons\Automatic\MCXSpear\data\mcxspear_suppressor_destruct.rvmat"}}};
				};
			};
		};
	};
	class Inventory_Base;
	class IMP_MCXSpear_Bttstck_Base: Inventory_Base
	{
		scope = 0;
		displayName = "$STR_MCXSpearButtN";
		descriptionShort = "$STR_MCXSpearButtD";
		model = "IMPWMODPart2\Weapons\Automatic\MCXSpear\mcxspear_buttstock.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"weaponButtstockIMPMCX"};
		weight = 330;
		itemSize[] = {3,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.5,0.5,0.5};
		hiddenSelections[] = {"color"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 22000000;
					healthLevels[] = 
					{{1.0,{"IMPWMODPart2\Weapons\Automatic\MCXSpear\data\mcxspear.rvmat"}},
					{0.7,{"IMPWMODPart2\Weapons\Automatic\MCXSpear\data\mcxspear.rvmat"}},
					{0.5,{"IMPWMODPart2\Weapons\Automatic\MCXSpear\data\mcxspear_damage.rvmat"}},
					{0.3,{"IMPWMODPart2\Weapons\Automatic\MCXSpear\data\mcxspear_damage.rvmat"}},
					{0.0,{"IMPWMODPart2\Weapons\Automatic\MCXSpear\data\mcxspear_destruct.rvmat"}}};
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
	class IMP_MCXSpear_Bttstck_Tan: IMP_MCXSpear_Bttstck_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMODPart2\Weapons\Automatic\MCXSpear\data\mcxspear_tan_co.paa"};
	};
};

class CfgSlots {
	class Slot_weaponButtstockIMPMCX {
		name = "weaponButtstockIMPMCX";
		displayName = "$STR_MCXSpearSlotN";
		modGhostIcon = "set:Slots image:Butts";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxymcxspear_mag_20rnd: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "magazine";
		model = "IMPWMODPart2\Weapons\Automatic\MCXSpear\mcxspear_mag_20rnd.p3d";
	};
	class Proxymcxspear_buttstock: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "weaponButtstockIMPMCX";
		model = "IMPWMODPart2\Weapons\Automatic\MCXSpear\mcxspear_buttstock.p3d";
	};
};

class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;	
	class base_distShot_SoundShader;	
	class IMP_MCX_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMODPart2\Weapons\Automatic\MCXSpear\sound\mcx_close",1}};
		volume = 1.0;
	};
	class IMP_MCX_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMODPart2\Weapons\Automatic\MCXSpear\sound\mcx_mid",1}};
		volume = 0.8;
	};
	class IMP_MCX_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMODPart2\Weapons\Automatic\MCXSpear\sound\mcx_far",1}};
		volume = 0.5;
	};
	
	class base_HomeSilenced_closeShot_SoundShader;
	class base_HomeSilenced_midShot_SoundShader;	
	class base_HomeSilenced_distShot_SoundShader;		
	class IMP_MCX_silencedcloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMODPart2\Weapons\Automatic\MCXSpear\sound\MCX_suppressed_close",1}};
		volume = 1.0;		
	};
	class IMP_MCX_silencedmidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMODPart2\Weapons\Automatic\MCXSpear\sound\MCX_suppressed_mid",1}};
		volume = 0.8;		
	};
	class IMP_MCX_silenceddistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMODPart2\Weapons\Automatic\MCXSpear\sound\MCX_suppressed_far",1}};
		volume = 0.6;		
	};	
};

class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;	
	class IMP_MCX_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"IMP_MCX_closeShot_SoundShader","IMP_MCX_midShot_SoundShader","IMP_MCX_distShot_SoundShader"};
	};
	
	class Rifle_silencerHomemade_Base_SoundSet;
	class IMP_MCX_SilencedShot_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[] = {"IMP_MCX_silencedcloseShot_SoundShader","IMP_MCX_silencedmidShot_SoundShader","IMP_MCX_silenceddistShot_SoundShader"};
	};	
};