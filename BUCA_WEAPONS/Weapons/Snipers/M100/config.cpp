class CfgPatches
{
	class BC_M100
	{
		units[]={};
		weapons[]={"BC_M100"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[]={"BC_M100_Magazine"};
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
	class BC_M100_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope=0;
		displayName="M100";
		model="BUCA_WEAPONS\Weapons\Snipers\M100\BC_M100.p3d";
		descriptionShort="Оружие использует калибр 12.7x55 | The weapon uses a 12.7x55 caliber.";
		attachments[]= { "weaponOpticsHunting", "weaponOptics","weaponWrap"};
		magazines[]={"BC_M100_Magazine"};
		chamberableFrom[]={"IMP_Ammo_127x55"};
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
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\M100\data\M100_co.paa"};
		hiddenSelectionsMaterials[]={"BUCA_WEAPONS\Weapons\Snipers\M100\data\M100.rvmat"};
		modes[]={"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]={"BC_M100_SoundSet"};
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
					hitpoints=450000000;
					healthLevels[]=
					{{1,{"BUCA_WEAPONS\Weapons\Snipers\M100\data\M100.rvmat"}},
					{0.69999999,{"BUCA_WEAPONS\Weapons\Snipers\M100\data\M100_damage.rvmat"}},
					{0.5,{"BUCA_WEAPONS\Weapons\Snipers\M100\data\M100_damage.rvmat"}},
					{0.30000001,{"BUCA_WEAPONS\Weapons\Snipers\M100\data\M100_damage.rvmat"}},
					{0,{"BUCA_WEAPONS\Weapons\Snipers\M100\data\M100_destruct.rvmat"}}};
				};
			};
		};
	};
	class BC_M100: BC_M100_Base
	{
		scope=2;
		displayName="M100";
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\M100\data\M100_co.paa"};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class BC_M100_Magazine: Magazine_Base
	{
		scope=2;
		displayName="7rd M100 Magazine";
		descriptionShort="7 .408 Round magazine for the Cheytac M100";
		model="BUCA_WEAPONS\Weapons\Snipers\M100\BC_M100_Magazine.p3d";
		ammo="IMP_Bullet_127x55";
		ammoItems[]={"IMP_Ammo_127x55"};
		weight=230;
		itemSize[]={2,2};
		count=7;
		isMeleeWeapon=0;
		tracersEvery=1;
		hiddenSelections[]={"magazine"};
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\M100\data\M100_co.paa"};
		hiddenSelectionsMaterials[]={"BUCA_WEAPONS\Weapons\Snipers\M100\data\M100.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=5000000;
					healthLevels[]=
					{{1,{"BUCA_WEAPONS\Weapons\Snipers\M100\data\M100.rvmat"}},
					{0.69999999,{"BUCA_WEAPONS\Weapons\Snipers\M100\data\M100_damage.rvmat"}},
					{0.5,{"BUCA_WEAPONS\Weapons\Snipers\M100\data\M100_damage.rvmat"}},
					{0.30000001,{"BUCA_WEAPONS\Weapons\Snipers\M100\data\M100_damage.rvmat"}},
					{0,{"BUCA_WEAPONS\Weapons\Snipers\M100\data\M100_destruct.rvmat"}}};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyBC_M100_Magazine: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="BUCA_WEAPONS\Weapons\Snipers\M100\BC_M100_Magazine.p3d";
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class BC_M100_SoundShaderClose
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\M100\Sounds\m100_silenced_close",1}};
		volume=0.80000001;
		range=50;
	};
	class BC_M100_SoundShaderMid
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\M100\Sounds\m100_silenced_mid",1}};
		volume=0.5;
		range=100;
	};
	class BC_M100_SoundShaderLong
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\M100\Sounds\m100_silenced_far",1}};
		volume=0.2;
		range=180;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class BC_M100_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]={"BC_M100_SoundShaderClose","BC_M100_SoundShaderMid","BC_M100_SoundShaderLong"};
	};
};
