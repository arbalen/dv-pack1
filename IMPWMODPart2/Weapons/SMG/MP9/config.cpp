class CfgPatches
{
	class IMP_MP9
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
class CfgWeapons
{
	class Rifle_Base;
	class IMP_MP9_Base: Rifle_Base
	{
		scope = 0;
		displayName = "Steyr MP9";
		descriptionShort = "Оружие использует калибр 46х30 | The weapon uses a 46х30 caliber.";
		model = "IMPWMODPart2\Weapons\SMG\MP9\mp9.p3d";
		attachments[] = {"pistolMuzzle","weaponOptics","weaponWrap"};
		itemSize[] = {6,2};		
		weight = 1400;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.5,10,150,4,10};
		initSpeedMultiplier = 0.91;
		WeaponLength = 0.541088;
		barrelArmor = 1.25;
		magazineSwitchTime = 1.2;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"BC_Ammo_46x30mm"};
		magazines[] = {"IMP_Mag_MP9_30rnd"};
		ejectType = 1;
		recoilModifier[] = {0.4,0.4,0.4};
		swayModifier[] = {1.65,1.65,0.9};
		hiddenSelections[] = {"color"};	
		reloadAction = "ReloadCZ61";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\pm63rak\pm63rak_reload_0mod",0.8,1,20};
		modes[] = {"FullAuto","Burst","SemiAuto"};
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
			reloadTime = 0.072;
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
			reloadTime = 0.062;
			dispersion = 0;
			magazineSlot = "magazine";
		};
		class Burst: Mode_Burst
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
			burst = 3;
			reloadTime = 0.062;
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
						{1.0,{"IMPWMODPart2\Weapons\SMG\MP9\data\mp9.rvmat"}},
						{0.7,{"IMPWMODPart2\Weapons\SMG\MP9\data\mp9.rvmat"}},
						{0.5,{"IMPWMODPart2\Weapons\SMG\MP9\data\mp9_damage.rvmat"}},
						{0.3,{"IMPWMODPart2\Weapons\SMG\MP9\data\mp9_damage.rvmat"}},
						{0.0,{"IMPWMODPart2\Weapons\SMG\MP9\data\mp9_destruct.rvmat"}}
					};
				};
			};
		};		
	};
	class IMP_MP9: IMP_MP9_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMODPart2\Weapons\SMG\MP9\data\mp9_co.paa"};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_MP9_30rnd: Magazine_Base
	{
		scope = 2;
		displayName = "$STR_IMP_MP9DMag";
		descriptionShort = "Магазин 40 патронов";
		model = "IMPWMODPart2\Weapons\SMG\MP9\mp9_mag.p3d";
		weight = 120;
		itemSize[] = {1,3};
		count = 40;
		ammo = "BC_Bullet_46x30mm";
		ammoItems[] = {"BC_Ammo_46x30mm"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200000;
					healthLevels[] = 
					{
						{1.0,{"IMPWMODPart2\Weapons\SMG\MP9\data\mp9.rvmat"}},
						{0.7,{"IMPWMODPart2\Weapons\SMG\MP9\data\mp9.rvmat"}},
						{0.5,{"IMPWMODPart2\Weapons\SMG\MP9\data\mp9_damage.rvmat"}},
						{0.3,{"IMPWMODPart2\Weapons\SMG\MP9\data\mp9_damage.rvmat"}},
						{0.0,{"IMPWMODPart2\Weapons\SMG\MP9\data\mp9_destruct.rvmat"}}
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