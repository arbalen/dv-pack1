class CfgPatches
{
	class IMP_MP7
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Firearms","DZ_Weapons_Magazines"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class CfgWeapons
{
	class Rifle_Base;
	class IMP_MP7_Base: Rifle_Base
	{
		scope = 0;
		displayName = "MP7-A1";
		descriptionShort = "Оружие использует калибр 46х30 | The weapon uses a 46х30 caliber.";
		model = "IMPWMODPart2\Weapons\SMG\MP7\mp7.p3d";
		attachments[] = {"pistolMuzzle","weaponOptics","weaponWrap"};
		itemSize[] = {6,2};		
		weight = 1800;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.5,10,150,4,10};
		WeaponLength = 0.541088;
		initSpeedMultiplier = 0.95;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"BC_Ammo_46x30mm"};
		magazines[] = {"IMP_Mag_MP7_40rnd"};
		barrelArmor = 5;
		ejectType = 1;
		recoilModifier[] = {1.0,1.0,1.0};
		swayModifier[] = {1.0,1.0,0.9};
		hiddenSelections[] = {"color"};	
		modes[] = {"FullAuto","SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"MP5K_Shot_1st_SoundSet",
				"MP5K_Shot_1st_iterior_SoundSet",
				"MP5K_Tail_SoundSet",
				"MP5K_InteriorTail_SoundSet",
				"MP5K_Slapback_SoundSet",
				"MP5K_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"MP5K_1st_silencer_SoundSet",
					"MP5K_silencerTail_SoundSet",
					"MP5K_silencerInteriorTail_SoundSet"
				},
				
				{
					"MP5K_1st_silencerHomeMade_SoundSet",
					"MP5K_silencerHomeMadeTail_SoundSet",
					"MP5K_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime = 0.125;
			dispersion = 0;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"MP5K_Shot_1st_SoundSet",
				"MP5K_Shot_1st_iterior_SoundSet",
				"MP5K_Tail_SoundSet",
				"MP5K_InteriorTail_SoundSet",
				"MP5K_Slapback_SoundSet",
				"MP5K_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"MP5K_1st_silencer_SoundSet",
					"MP5K_silencerTail_SoundSet",
					"MP5K_silencerInteriorTail_SoundSet"
				},
				
				{
					"MP5K_1st_silencerHomeMade_SoundSet",
					"MP5K_silencerHomeMadeTail_SoundSet",
					"MP5K_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime = 0.063;
			dispersion = 0;
			magazineSlot = "magazine";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_fnx_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={0,0,0};
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 8;
				maxOverheatingValue = 20;
				overheatingDecayInterval = 1;
				class SmokingBarrel
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.5};
					onlyWithinRainLimits[] = {0,0.2};
					ignoreIfSuppressed = 1;
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.1,0.02,0};
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
			memoryPointCamera = "eye";
			discreteDistance[] = {25,50,100,150};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 25;
			distanceZoomMax = 150;
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
						{1.0,{"IMPWMODPart2\Weapons\SMG\MP7\data\MP7A1.rvmat"}},
						{0.7,{"IMPWMODPart2\Weapons\SMG\MP7\data\MP7A1.rvmat"}},
						{0.5,{"IMPWMODPart2\Weapons\SMG\MP7\data\MP7A1_damage.rvmat"}},
						{0.3,{"IMPWMODPart2\Weapons\SMG\MP7\data\MP7A1_damage.rvmat"}},
						{0.0,{"IMPWMODPart2\Weapons\SMG\MP7\data\MP7A1_destruct.rvmat"}}
					};
				};
			};
		};		
	};
	class IMP_MP7: IMP_MP7_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"IMPWMODPart2\Weapons\SMG\MP7\data\MP7A1_co.paa"
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_MP7_40rnd: Magazine_Base
	{
		scope = 2;
		displayName = "$STR_IMP_MP7MagN";
		descriptionShort = "Магазин на 40 патронов";
		model = "IMPWMODPart2\Weapons\SMG\MP7\mp7_mag.p3d";
		weight = 120;
		itemSize[] = {1,3};
		count = 40;
		ammo = "BC_Bullet_46x30mm";
		ammoItems[] = {"BC_Ammo_46x30mm"};
		hiddenSelections[] = {"magazine"};
		hiddenSelectionsTextures[] = {"IMPWMODPart2\Weapons\SMG\MP7\data\MP7A1_co.paa"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 2000000;
					healthLevels[] = 
					{
						{1.0,{"IMPWMODPart2\Weapons\SMG\MP7\data\MP7A1.rvmat"}},
						{0.7,{"IMPWMODPart2\Weapons\SMG\MP7\data\MP7A1.rvmat"}},
						{0.5,{"IMPWMODPart2\Weapons\SMG\MP7\data\MP7A1_damage.rvmat"}},
						{0.3,{"IMPWMODPart2\Weapons\SMG\MP7\data\MP7A1_damage.rvmat"}},
						{0.0,{"IMPWMODPart2\Weapons\SMG\MP7\data\MP7A1_destruct.rvmat"}}
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