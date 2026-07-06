class CfgPatches
{
	class BC_PTRD
	{
		units[]={};
		weapons[]={"BC_PTRD"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
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
	class BC_PTRD_Base: BoltActionRifle_InnerMagazine_Base
	{
		scope=0;
		displayName="PTRD-41";
		model="BUCA_WEAPONS\Weapons\Snipers\PTRD\BC_PTRD.p3d";
		descriptionShort="Оружие использует калибр 145x114 | The weapon uses a 145x114 caliber.";
		attachments[]={"weaponWrap"};
		chamberableFrom[]={"BC_Ammo_20mm"};
		itemSize[]={10,2};
		weight=3700;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,50,180,4,10};
		magazines[]={};
		DisplayMagazine=0;
		WeaponLength=1;
		barrelArmor=12.6;
		initSpeedMultiplier=2;
		chamberedRound="";
		chamberSize=1;
		ejectType=1;
		recoilModifier[]={0.25,0.25,0.25};
		swayModifier[]={0,0,0};
		simpleHiddenSelections[]={"hide_barrel"};
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\PTRD\data\BC_PTRD_co.paa"};
		hiddenSelectionsMaterials[]={"BUCA_WEAPONS\Weapons\Snipers\PTRD\data\BC_PTRD.rvmat"};
		modes[]={"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]={"BC_PTRD_SoundSet"};
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
					overrideParticle="weapon_shot_akm_01";
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
					hitpoints=4500000;
					healthLevels[]=
					{{1,{"BUCA_WEAPONS\Weapons\Snipers\PTRD\data\BC_PTRD.rvmat"}},
					{0.69999999,{"BUCA_WEAPONS\Weapons\Snipers\PTRD\data\BC_PTRD.rvmat"}},
					{0.5,{"BUCA_WEAPONS\Weapons\Snipers\PTRD\data\BC_PTRD_damage.rvmat"}},
					{0.30000001,{"BUCA_WEAPONS\Weapons\Snipers\PTRD\data\BC_PTRD_damage.rvmat"}},
					{0,{"BUCA_WEAPONS\Weapons\Snipers\PTRD\data\BC_PTRD_destruct.rvmat"}}};
				};
			};
		};
	};
	class BC_PTRD: BC_PTRD_Base
	{
		scope=2;
		displayName="PTRD-41";
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\PTRD\data\BC_PTRD_co.paa"};
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class BC_PTRD_SoundShaderClose
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\PTRD\Sounds\ptrd",1}};
		volume=1.4;
		range=100;
	};
	class BC_PTRD_SoundShaderMid
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\PTRD\Sounds\ptrd_mid",1}};
		volume=1.1;
		range=500;
	};
	class BC_PTRD_SoundShaderLong
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\PTRD\Sounds\ptrd_far",1}};
		volume=0.5;
		range=2000;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class BC_PTRD_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]={"BC_PTRD_SoundShaderClose","BC_PTRD_SoundShaderMid","BC_PTRD_SoundShaderLong"};
	};
};
