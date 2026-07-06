class CfgPatches
{
	class BC_A2CHEY
	{
		units[]={};
		weapons[]={"BC_A2CHEY","BC_A2CHEY_Black"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[]={"BC_A2CHEY_Magazine"};
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
	class BC_A2CHEY_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope=0;
		displayName="Cheytac M200 Plus";
		model="BUCA_WEAPONS\Weapons\Snipers\A2CHEY\BC_A2CHEY.p3d";
		descriptionShort="Оружие использует калибр 12.7x55 | The weapon uses a 12.7x55 caliber.";
		attachments[]= { "weaponOpticsHunting", "weaponOptics","A2CHEY_Suppressor","weaponWrap"};
		magazines[]={"BC_A2CHEY_Magazine"};
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
		recoilModifier[]={0.25, 0.25, 0.25};
		swayModifier[]={0,0,0};
		simpleHiddenSelections[]={"hide_barrel"};
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\A2CHEY\data\BC_A2CHEY_co.paa"};
		hiddenSelectionsMaterials[]={"BUCA_WEAPONS\Weapons\Snipers\A2CHEY\data\A2CHEY.rvmat"};
		modes[]={"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]={"A2CHEY_SoundSet","CZ550_Shot_iterior_SoundSet","CZ550_Tail_SoundSet","CZ550_InteriorTail_SoundSet","CZ550_Tail_2D_SoundSet"};
			soundSetShotExt[]={{"a2chey_sup_SoundSet","CZ550_silencerHomeMadeTail_SoundSet","CZ550_silencerInteriorHomeMadeTail_SoundSet"}};
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
					{{1,{"BUCA_WEAPONS\Weapons\Snipers\A2CHEY\data\A2CHEY.rvmat"}},
					{0.69999999,{"BUCA_WEAPONS\Weapons\Snipers\A2CHEY\data\A2CHEY.rvmat"}},
					{0.5,{"BUCA_WEAPONS\Weapons\Snipers\A2CHEY\data\A2CHEY.rvmat"}},
					{0.30000001,{"BUCA_WEAPONS\Weapons\Snipers\A2CHEY\data\A2CHEY.rvmat"}},
					{0,{"BUCA_WEAPONS\Weapons\Snipers\A2CHEY\data\A2CHEY.rvmat"}}};
				};
			};
		};
	};
	class BC_A2CHEY: BC_A2CHEY_Base
	{
		scope=2;
		displayName="Cheytac M200 plus";
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\A2CHEY\data\BC_A2CHEY_co.paa"};
	};
	class BC_A2CHEY_Black: BC_A2CHEY_Base
	{
		scope=2;
		displayName="Cheytac M200 plus";
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\A2CHEY\data\BC_A2CHEY_Black.paa"};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class BC_A2CHEY_Magazine: Magazine_Base
	{
		scope=2;
		displayName="7rd M200 plus Magazine";
		descriptionShort="Оружие использует калибр 12.7x55 | The weapon uses a 12.7x55 caliber";
		model="BUCA_WEAPONS\Weapons\Snipers\A2CHEY\BC_A2CHEY_Magazine.p3d";
		ammo="IMP_Bullet_127x55";
		ammoItems[]={"IMP_Ammo_127x55"};
		weight=230;
		itemSize[]={2,2};
		count=7;
		isMeleeWeapon=0;
		tracersEvery=1;
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\A2CHEY\data\BC_A2CHEY_co.paa"};
		hiddenSelectionsMaterials[]={"BUCA_WEAPONS\Weapons\Snipers\A2CHEY\data\A2CHEY.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{{1,{"BUCA_WEAPONS\Weapons\Snipers\A2CHEY\data\A2CHEY.rvmat"}},
					{0.69999999,{"BUCA_WEAPONS\Weapons\Snipers\A2CHEY\data\A2CHEY.rvmat"}},
					{0.5,{"BUCA_WEAPONS\Weapons\Snipers\A2CHEY\data\A2CHEY.rvmat"}},
					{0.30000001,{"BUCA_WEAPONS\Weapons\Snipers\A2CHEY\data\A2CHEY.rvmat"}},
					{0,{"BUCA_WEAPONS\Weapons\Snipers\A2CHEY\data\A2CHEY.rvmat"}}};
				};
			};
		};
	};
};
class CfgSlots
{
	class Slot_A2CHEY_Suppressor
	{
		name="A2CHEY_Suppressor";
		displayName="Cheytac M200 Suppressor";
		ghostIcon="supressor";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyBC_A2CHEY_Magazine: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="BUCA_WEAPONS\Weapons\Snipers\A2CHEY\BC_A2CHEY_Magazine.p3d";
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class A2CHEY_closeShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\A2CHEY\Sounds\A2CHEY_Close",1}};
		volume=1;
		range=100;
	};
	class A2CHEY_midShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\A2CHEY\Sounds\A2CHEY_Mid",1}};
		volume=0.60000002;
		range=500;
	};
	class A2CHEY_farShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\A2CHEY\Sounds\A2CHEY_Far",1}};
		volume=0.30000001;
		range=1500;
	};
	class a2chey_SilcloseShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\A2CHEY\Sounds\A2CHEY_close_shot_01suppressed",1}};
		volume=0.80000001;
		range=50;
	};
	class a2chey_SilmidShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\A2CHEY\Sounds\A2CHEY_close_shot_01suppressed_mid",1}};
		volume=0.60000002;
		range=100;
	};
	class a2chey_SilfarShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\A2CHEY\Sounds\A2CHEY_close_shot_01suppressed_far",1}};
		volume=0.40000001;
		range=150;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class A2CHEY_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]={"A2CHEY_closeShot_SoundShader","A2CHEY_midShot_SoundShader","A2CHEY_farShot_SoundShader"};
	};
	class a2chey_sup_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]={"a2chey_SilcloseShot_SoundShader","a2chey_SilmidShot_SoundShader","a2chey_SilfarShot_SoundShader"};
	};
};
