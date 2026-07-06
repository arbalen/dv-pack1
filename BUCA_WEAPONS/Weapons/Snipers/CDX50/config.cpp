class CfgPatches
{
	class BC_CDX50
	{
		units[]={};
		weapons[]={"BC_CDX50"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[]={"BC_CDX50_Magazine"};
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
	class BC_CDX50_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope=0;
		displayName="CDX-50";
		model="BUCA_WEAPONS\Weapons\Snipers\CDX50\BC_CDX50.p3d";
		descriptionShort="Оружие использует калибр 12.7x99 | The weapon uses a 12.7x99 caliber.";
		attachments[]= { "weaponOpticsHunting", "weaponOptics","weaponWrap"};
		magazines[]={"BC_CDX50_Magazine"};
		chamberableFrom[]={"IMP_Ammo_127x99"};
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
		lootCategory="Attachments";
		magazineSwitchTime=0.25;
		ejectType=1;
		recoilModifier[]={0.25,0.25,0.25};
		swayModifier[]={0,0,0};
		simpleHiddenSelections[]={"muzzle"};
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\CDX50\data\BC_CDX50_co.paa"};
		hiddenSelectionsMaterials[]={"BUCA_WEAPONS\Weapons\Snipers\CDX50\data\BC_CDX50.rvmat"};
		modes[]={"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]={"CDX50_SoundSet"};
			soundSetShotExt[]={{"CDX50_sup_SoundSet"}};
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
					hitpoints=4500;
					healthLevels[]=
					{{1,{"BUCA_WEAPONS\Weapons\Snipers\CDX50\data\BC_CDX50.rvmat"}},
					{0.69999999,{"BUCA_WEAPONS\Weapons\Snipers\CDX50\data\BC_CDX50.rvmat"}},
					{0.5,{"BUCA_WEAPONS\Weapons\Snipers\CDX50\data\BC_CDX50_damage.rvmat"}},
					{0.30000001,{"BUCA_WEAPONS\Weapons\Snipers\CDX50\data\BC_CDX50_damage.rvmat"}},
					{0,{"BUCA_WEAPONS\Weapons\Snipers\CDX50\data\BC_CDX50_destruct.rvmat"}}};
				};
			};
		};
	};
	class BC_CDX50: BC_CDX50_Base
	{
		scope=2;
		displayName="CDX-50 | Grey";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\CDX50\data\BC_CDX50_co.paa"
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class BC_CDX50_Magazine: Magazine_Base
	{
		scope=2;
		displayName="5d CDX-50 Magazine";
		descriptionShort="5 .50Cal Round Magazine";
		model="BUCA_WEAPONS\Weapons\Snipers\CDX50\BC_CDX50_Magazine.p3d";
		ammo="IMP_Bullet_127x99";
		ammoItems[]={"IMP_Ammo_127x99"};
		weight=230;
		itemSize[]={2,2};
		count=5;
		isMeleeWeapon=0;
		tracersEvery=1;
		hiddenSelections[]={"cumbuca"};
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\CDX50\data\BC_CDX50_co.paa"};
		hiddenSelectionsMaterials[]={"BUCA_WEAPONS\Weapons\Snipers\CDX50\data\BC_CDX50.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{{1,{"BUCA_WEAPONS\Weapons\Snipers\CDX50\data\BC_CDX50.rvmat"}},
					{0.69999999,{"BUCA_WEAPONS\Weapons\Snipers\CDX50\data\BC_CDX50.rvmat"}},
					{0.5,{"BUCA_WEAPONS\Weapons\Snipers\CDX50\data\BC_CDX50_damage.rvmat"}},
					{0.30000001,{"BUCA_WEAPONS\Weapons\Snipers\CDX50\data\BC_CDX50_damage.rvmat"}},
					{0,{"BUCA_WEAPONS\Weapons\Snipers\CDX50\data\BC_CDX50_destruct.rvmat"}}};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyBC_CDX50_Magazine: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="BUCA_WEAPONS\Weapons\Snipers\CDX50\BC_CDX50_Magazine.p3d";
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class base_HomeSilenced_distShot_SoundShader;
	class CDX50_closeShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\CDX50\Sounds\CDX50_close",1}};
		volume=0.5;
		range=100;
	};
	class CDX50_midShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\CDX50\Sounds\CDX50_distant",1}};
		volume=0.30000001;
		range=500;
	};
	class CDX50_farShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\CDX50\Sounds\CDX50_far",1}};
		volume=0.2;
		range=1500;
	};
	class CDX50_SilcloseShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\CDX50\Sounds\CDX50_sup_close",1}};
		volume=0.60000002;
		range=50;
	};
	class CDX50_SilmidShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\CDX50\Sounds\CDX50_sup_mid",1}};
		volume=0.30000001;
		range=100;
	};
	class CDX50_SilfarShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\CDX50\Sounds\CDX50_sup_far",1}};
		volume=0.1;
		range=150;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class CDX50_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]={"CDX50_closeShot_SoundShader","CDX50_midShot_SoundShader","CDX50_farShot_SoundShader"};
	};
	class CDX50_sup_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]={"CDX50_SilcloseShot_SoundShader","CDX50_SilmidShot_SoundShader","CDX50_SilfarShot_SoundShader"};
	};
};
