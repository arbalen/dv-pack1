class CfgPatches
{
	class BC_M99
	{
		units[]={};
		weapons[]=
		{
			"BC_M99"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Ammunition",
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Muzzles",
			"DZ_Weapons_Optics"
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
	class BoltActionRifle_InnerMagazine_Base;
	class BC_M99_Base: BoltActionRifle_InnerMagazine_Base
	{
		scope=0;
		model="BUCA_WEAPONS\Weapons\Snipers\M99\BUCA_M99.p3d";
		descriptionShort="Использует патрон калибра  12.7x99  | Uses a 12.7x99 caliber";
		itemSize[]={10,2};
		weight=3700;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,50,180,4,10};
		ironsightsExcludingOptics[]=
		{
			"GrozaOptic",
			"KobraOptic"
		};
		magazines[]={};
		DisplayMagazine=0;
		WeaponLength=1;
		barrelArmor=12.6;
		initSpeedMultiplier=1;
		chamberedRound="";
		chamberSize=3;
		lootCategory="Attachments";
		attachments[]=
		{
			
			"weaponOpticsHunting",
			"weaponOptics",
			"weaponWrap"
		};
		chamberableFrom[]=
		{
			"IMP_Ammo_127x99"
		};
		ejectType=1;
		recoilModifier[]={0.7,0.7,0.7};
		swayModifier[]={0,0,0};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"BC_M99_SoundSet"
			};
			reloadTime=1;
			dispersion=0;
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_izh18_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={-0.050000001,0,0};
				};
				class ChamberSmoke
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
				};
				class ChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
				};
				class MuzzleFlashStar
				{
					overrideParticle="weapon_shot_Flame_3D_4star";
					overridePoint="Usti hlavne";
					ignoreIfSuppressed=1;
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=40;
				shotsToStartOverheating=5;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.5};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.5,0.80000001};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.80000001,1};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.30000001,0,0};
					onlyWithinRainLimits[]={0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.30000001,0,0};
					onlyWithinRainLimits[]={0.5,1};
				};
				class ChamberSmokeRaise
				{
					overrideParticle="smoking_barrel_small";
					overridePoint="Nabojnicestart";
					onlyWithinOverheatLimits[]={0.5,1};
				};
			};
		};
		class NoiseShoot
		{
			strength=100;
			type="shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex=0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"BUCA_WEAPONS\Weapons\Snipers\M99\data\BUCA_M99.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"BUCA_WEAPONS\Weapons\Snipers\M99\data\BUCA_M99.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"BUCA_WEAPONS\Weapons\Snipers\M99\data\BUCA_M99_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"BUCA_WEAPONS\Weapons\Snipers\M99\data\BUCA_M99_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"BUCA_WEAPONS\Weapons\Snipers\M99\data\BUCA_M99_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class BC_M99: BC_M99_Base
	{
		scope=2;
		displayName="M99 | Grey";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\M99\data\BUCA_M99_co.paa"
		};
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class BC_M99_SoundShaderClose
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\M99\Sounds\m99new2",1}};
		volume=1.1;
		range=100;
	};
	class BC_M99_SoundShaderMid
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\M99\Sounds\m99new2_mid",1}};
		volume=0.69999999;
		range=500;
	};
	class BC_M99_SoundShaderLong
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\M99\Sounds\m99new2_far",1}};
		volume=0.40000001;
		range=2000;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class BC_M99_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]={"BC_M99_SoundShaderClose","BC_M99_SoundShaderMid","BC_M99_SoundShaderLong"};
	};
};
