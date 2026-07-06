class CfgPatches
{
	class BC_K14
	{
		units[]={};
		weapons[]={"BC_K14"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[]={"BC_K14_Magazine"};
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
	class BC_K14_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope=0;
		displayName="K14";
		model="BUCA_WEAPONS\Weapons\Snipers\K14\BC_K14.p3d";
		descriptionShort="Оружие использует калибр 408 | The weapon uses a 408 caliber.";
		attachments[]= { "weaponOpticsHunting", "weaponOptics","408_Suppressor","weaponWrap"};
		magazines[]={"BC_K14_Magazine"};
		chamberableFrom[]={"IMP_Ammo_408"};
		itemSize[]={10,2};
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
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\K14\data\BC_K14_co.paa"};
		hiddenSelectionsMaterials[]={"BUCA_WEAPONS\Weapons\Snipers\K14\data\BC_K14.rvmat"};
		modes[]={"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]={"K14_SoundSet"};
			soundSetShotExt[]={{"K14_sup_SoundSet"}};
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
					hitpoints=450000000;
					healthLevels[]=
					{{1,{"BUCA_WEAPONS\Weapons\Snipers\K14\data\BC_K14.rvmat"}},
					{0.69999999,{"BUCA_WEAPONS\Weapons\Snipers\K14\data\BC_K14.rvmat"}},
					{0.5,{"BUCA_WEAPONS\Weapons\Snipers\K14\data\BC_K14_damage.rvmat"}},
					{0.30000001,{"BUCA_WEAPONS\Weapons\Snipers\K14\data\BC_K14_damage.rvmat"}},
					{0,{"BUCA_WEAPONS\Weapons\Snipers\K14\data\BC_K14_destruct.rvmat"}}};
				};
			};
		};
	};
	class BC_K14: BC_K14_Base
	{
		scope=2;
		displayName="K14 | Black";
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\K14\data\BC_K14_co.paa"};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class BC_K14_Magazine: Magazine_Base
	{
		scope=2;
		displayName="10rd K14 Magazine";
		descriptionShort="10 408 Round magazien for the K14";
		model="BUCA_WEAPONS\Weapons\Snipers\K14\BC_K14_Magazine.p3d";
		ammo="IMP_Bullet_408";
		ammoItems[]={"IMP_Ammo_408"};
		weight=230;
		itemSize[]={1,2};
		count=10;
		isMeleeWeapon=0;
		tracersEvery=1;
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\K14\data\BC_K14_co.paa"};
		hiddenSelectionsMaterials[]={"BUCA_WEAPONS\Weapons\Snipers\K14\data\BC_K14.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50000000;
					healthLevels[]=
					{{1,{"BUCA_WEAPONS\Weapons\Snipers\K14\data\BC_K14.rvmat"}},
					{0.69999999,{"BUCA_WEAPONS\Weapons\Snipers\K14\data\BC_K14.rvmat"}},
					{0.5,{"BUCA_WEAPONS\Weapons\Snipers\K14\data\BC_K14_damage.rvmat"}},
					{0.30000001,{"BUCA_WEAPONS\Weapons\Snipers\K14\data\BC_K14_damage.rvmat"}},
					{0,{"BUCA_WEAPONS\Weapons\Snipers\K14\data\BC_K14_destruct.rvmat"}}};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyBC_K14_Magazine: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="BUCA_WEAPONS\Weapons\Snipers\K14\BC_K14_Magazine.p3d";
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class base_HomeSilenced_distShot_SoundShader;
	class K14_closeShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\K14\Sounds\k14",1}};
		volume=1;
		range=100;
	};
	class K14_midShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\K14\Sounds\k14_mid",1}};
		volume=0.60000002;
		range=500;
	};
	class K14_farShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\K14\Sounds\k14_far",1}};
		volume=0.40000001;
		range=1500;
	};
	class K14_SilcloseShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\K14\Sounds\k14_sup",1}};
		volume=0.80000001;
		range=50;
	};
	class K14_SilmidShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\K14\Sounds\k14_sup_mid",1}};
		volume=0.60000002;
		range=100;
	};
	class K14_SilfarShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\K14\Sounds\k14_sup_far",1}};
		volume=0.40000001;
		range=150;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class K14_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]={"K14_closeShot_SoundShader","K14_midShot_SoundShader","K14_farShot_SoundShader"};
	};
	class K14_sup_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]={"K14_SilcloseShot_SoundShader","K14_SilmidShot_SoundShader","K14_SilfarShot_SoundShader"};
	};
};
