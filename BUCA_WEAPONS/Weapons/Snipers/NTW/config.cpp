class CfgPatches
{
	class BC_NTW
	{
		units[]={};
		weapons[]={"BC_NTW"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[]={"BC_NTW_Magazine"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class BoltActionRifle_ExternalMagazine_Base;
	class BC_NTW_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope=0;
		displayName="NTW-20";
		model="BUCA_WEAPONS\Weapons\Snipers\NTW\BC_NTW.p3d";
		descriptionShort="Оружие использует калибр 20mm | The weapon uses a 20mm caliber.";
		attachments[]= { "weaponOpticsHunting", "weaponOptics","weaponWrap"};
		magazines[]={"BC_NTW_Magazine"};
		chamberableFrom[]={"IMP_Ammo_20mm"};
		itemSize[]={10,2};
		winchesterTypeOpticsMount=1;
		weight=3700;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,50,180,4,10};
		WeaponLength=1;
		barrelArmor=12.6;
		initSpeedMultiplier=1;
		chamberedRound="";
		chamberSize=1;
		magazineSwitchTime=0.25;
		ejectType=1;
		recoilModifier[]={0.25,0.25,0.25};
		swayModifier[]={0,0,0};
		simpleHiddenSelections[]={"hide_barrel"};
		hiddenSelections[]={"zbytek1","zbytek2"};
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\NTW\data\01\BC_NTW1_co.paa","BUCA_WEAPONS\Weapons\Snipers\NTW\data\02\BC_NTW2_co.paa"};
		hiddenSelectionsMaterials[]={"BUCA_WEAPONS\Weapons\Snipers\NTW\data\01\BC_NTW.rvmat","BUCA_WEAPONS\Weapons\Snipers\NTW\data\02\BC_NTW.rvmat"};
		modes[]={"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]={"BC_NTW_SoundSet"};
			reloadTime=1;
			dispersion=0;
			magazineSlot="magazine";
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
					hitpoints=45000000;
					healthLevels[]=
					{{1,{"BUCA_WEAPONS\Weapons\Snipers\NTW\data\01\BC_NTW.rvmat","BUCA_WEAPONS\Weapons\Snipers\NTW\data\02\BC_NTW.rvmat"}},
					{0.69999999,{"BUCA_WEAPONS\Weapons\Snipers\NTW\data\01\BC_NTW.rvmat","BUCA_WEAPONS\Weapons\Snipers\NTW\data\02\BC_NTW.rvmat"}},
					{0.5,{"BUCA_WEAPONS\Weapons\Snipers\NTW\data\01\BC_NTW.rvmat","BUCA_WEAPONS\Weapons\Snipers\NTW\data\02\BC_NTW.rvmat"}},
					{0.30000001,{"BUCA_WEAPONS\Weapons\Snipers\NTW\data\01\BC_NTW.rvmat","BUCA_WEAPONS\Weapons\Snipers\NTW\data\02\BC_NTW.rvmat"}},
					{0,{"BUCA_WEAPONS\Weapons\Snipers\NTW\data\01\BC_NTW.rvmat","BUCA_WEAPONS\Weapons\Snipers\NTW\data\02\BC_NTW.rvmat"}}};
				};
			};
		};
	};
	class BC_NTW: BC_NTW_Base
	{
		scope=2;
		displayName="NTW-20 | Grey";
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\NTW\data\01\BC_NTW1_co.paa","BUCA_WEAPONS\Weapons\Snipers\NTW\data\02\BC_NTW2_co.paa"};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class BC_NTW_Magazine: Magazine_Base
	{
		scope=2;
		displayName="5rd NTW Magazine";
		descriptionShort="5 Round Magazine for the NTW 20mm";
		model="BUCA_WEAPONS\Weapons\Snipers\NTW\BC_NTW_Magazine.p3d";
		ammo="IMP_Bullet_20mm";
		ammoItems[]={"IMP_Ammo_20mm"};
		weight=230;
		itemSize[]={2,2};
		count=5;
		isMeleeWeapon=0;
		tracersEvery=1;
		hiddenSelections[]={"magazine"};
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\NTW\data\02\BC_NTW2_co.paa"};
		hiddenSelectionsMaterials[]={"BUCA_WEAPONS\Weapons\Snipers\NTW\data\02\BC_NTW.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50000000;
					healthLevels[]=
					{{1,{"BUCA_WEAPONS\Weapons\Snipers\NTW\data\02\BC_NTW.rvmat"}},
					{0.69999999,{"BUCA_WEAPONS\Weapons\Snipers\NTW\data\02\BC_NTW.rvmat"}},
					{0.5,{"BUCA_WEAPONS\Weapons\Snipers\NTW\data\02\BC_NTW.rvmat"}},
					{0.30000001,{"BUCA_WEAPONS\Weapons\Snipers\NTW\data\02\BC_NTW.rvmat"}},
					{0,{"BUCA_WEAPONS\Weapons\Snipers\NTW\data\02\BC_NTW.rvmat"}}};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyBC_NTW_Magazine: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="BUCA_WEAPONS\Weapons\Snipers\NTW\BC_NTW_Magazine.p3d";
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class BC_NTW_SoundShaderClose
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\NTW\Sounds\NTW_close",1}};
		volume=1.1;
		range=100;
	};
	class BC_NTW_SoundShaderMid
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\NTW\Sounds\NTW_mid",1}};
		volume=0.69999999;
		range=500;
	};
	class BC_NTW_SoundShaderLong
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\NTW\Sounds\NTW_far",1}};
		volume=0.40000001;
		range=2000;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class BC_NTW_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]={"BC_NTW_SoundShaderClose","BC_NTW_SoundShaderMid","BC_NTW_SoundShaderLong"};
	};
};
