class CfgPatches
{
	class BC_Scout
	{
		units[]={};
		weapons[]={"BC_Scout","BC_Scout_Fever_Dream","BC_Scout_DragonFire","BC_Scout_BloodInTheWater","BC_Scout_BigIron","BC_Scout_Abyss","BC_Scout_AcidFade","BC_Scout_GhostCrusader","BC_Scout_Harpy","BC_Scout_HyperBeast","BC_Scout_Necropos","BC_Scout_NeedleWork","BC_Scout_Novritsch","BC_Scout_Tread"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Sounds_Effects"};
		magazines[]={"BC_Scout_Magazine"};
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
	class BC_Scout_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope=0;
		displayName="SCOUT";
		model="BUCA_WEAPONS\Weapons\Snipers\Scout\BC_scout.p3d";
		descriptionShort="Оружие использует калибр 408 | The weapon uses a 408 caliber.";
		attachments[]= { "weaponOpticsHunting", "weaponOptics","408_Suppressor","weaponWrap"};
		magazines[]={"BC_Scout_Magazine"};
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
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\Scout\data\Sct_co.paa"};
		hiddenSelectionsMaterials[]={"BUCA_WEAPONS\Weapons\Snipers\Scout\data\Sct.rvmat"};
		modes[]={"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]={"scout_SoundSet"};
			soundSetShotExt[]={{"scoutsup_SoundSet"}};
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
					hitpoints=4500000;
					healthLevels[]=
					{{1,{"BUCA_WEAPONS\Weapons\Snipers\Scout\data\Sct.rvmat"}},
					{0.69999999,{"BUCA_WEAPONS\Weapons\Snipers\Scout\data\Sct.rvmat"}},
					{0.5,{"BUCA_WEAPONS\Weapons\Snipers\Scout\data\Sct_damage.rvmat"}},
					{0.30000001,{"BUCA_WEAPONS\Weapons\Snipers\Scout\data\Sct_damage.rvmat"}},
					{0,{"BUCA_WEAPONS\Weapons\Snipers\Scout\data\Sct_destruct.rvmat"}}};
				};
			};
		};
	};
	class BC_Scout: BC_Scout_Base
	{
		scope=2;
		displayName="SCOUT";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\Scout\data\Sct_co.paa"
		};
	};
	class BC_Scout_Fever_Dream: BC_Scout_Base
	{
		scope=2;
		displayName="SCOUT | Fever Dream";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\Scout\data\Sct_FeverDream.paa"
		};
	};
	class BC_Scout_DragonFire: BC_Scout_Base
	{
		scope=2;
		displayName="SCOUT | Dragon Fire";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\Scout\data\Sct_Dragonfire.paa"
		};
	};
	class BC_Scout_BloodInTheWater: BC_Scout_Base
	{
		scope=2;
		displayName="SCOUT | Blood in the Water";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\Scout\data\Sct_BitW.paa"
		};
	};
	class BC_Scout_BigIron: BC_Scout_Base
	{
		scope=2;
		displayName="SCOUT | Big Iron";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\Scout\data\Sct_BigIron.paa"
		};
	};
	class BC_Scout_Abyss: BC_Scout_Base
	{
		scope=2;
		displayName="SCOUT | Abyss";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\Scout\data\New\Scout_Abyss.paa"
		};
	};
	class BC_Scout_AcidFade: BC_Scout_Base
	{
		scope=2;
		displayName="SCOUT | Acid Fade";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\Scout\data\New\Scout_AcidFade.paa"
		};
	};
	class BC_Scout_GhostCrusader: BC_Scout_Base
	{
		scope=2;
		displayName="SCOUT | Ghost Crusader";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\Scout\data\New\Scout_GhostCrusader.paa"
		};
	};
	class BC_Scout_Harpy: BC_Scout_Base
	{
		scope=2;
		displayName="SCOUT | Harpy";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\Scout\data\New\Scout_Harpy.paa"
		};
	};
	class BC_Scout_HyperBeast: BC_Scout_Base
	{
		scope=2;
		displayName="SCOUT | HyperBeast";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\Scout\data\New\Scout_HyperBeast.paa"
		};
	};
	class BC_Scout_Necropos: BC_Scout_Base
	{
		scope=2;
		displayName="SCOUT | Necropos";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\Scout\data\New\Scout_Necropos.paa"
		};
	};
	class BC_Scout_NeedleWork: BC_Scout_Base
	{
		scope=2;
		displayName="SCOUT | Needle Work";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\Scout\data\New\Scout_NeedleWork.paa"
		};
	};
	class BC_Scout_Novritsch: BC_Scout_Base
	{
		scope=2;
		displayName="SCOUT | Novritsch";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\Scout\data\New\Scout_Novritsch.paa"
		};
	};
	class BC_Scout_Tread: BC_Scout_Base
	{
		scope=2;
		displayName="SCOUT | Tread";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\Scout\data\New\Scout_Tread.paa"
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class BC_Scout_Magazine: Magazine_Base
	{
		scope=2;
		displayName="10rd Scout Magazine";
		descriptionShort="10 Rounds 408 Magazine for the Scout";
		model="BUCA_WEAPONS\Weapons\Snipers\Scout\BC_Scout_Magazine.p3d";
		ammo="IMP_Bullet_408";
		ammoItems[]={"IMP_Ammo_408"};
		weight=230;
		itemSize[]={1,2};
		count=10;
		isMeleeWeapon=0;
		tracersEvery=1;
		hiddenSelections[]={"magazine"};
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\Scout\data\Sct_co.paa"};
		hiddenSelectionsMaterials[]={"BUCA_WEAPONS\Weapons\Snipers\Scout\data\Sct.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=5000000;
					healthLevels[]=
					{{1,{"BUCA_WEAPONS\Weapons\Snipers\Scout\data\Sct.rvmat"}},
					{0.69999999,{"BUCA_WEAPONS\Weapons\Snipers\Scout\data\Sct.rvmat"}},
					{0.5,{"BUCA_WEAPONS\Weapons\Snipers\Scout\data\Sct_damage.rvmat"}},
					{0.30000001,{"BUCA_WEAPONS\Weapons\Snipers\Scout\data\Sct_damage.rvmat"}},
					{0,{"BUCA_WEAPONS\Weapons\Snipers\Scout\data\Sct_destruct.rvmat"}}};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyBC_Scout_Magazine: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="BUCA_WEAPONS\Weapons\Snipers\Scout\BC_Scout_Magazine.p3d";
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class base_HomeSilenced_distShot_SoundShader;
	class scout_closeShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\Scout\Sounds\scout",1}};
		volume=1;
		range=100;
	};
	class scout_midShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\Scout\Sounds\scout_mid",1}};
		volume=0.80000001;
		range=500;
	};
	class scout_farShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\Scout\Sounds\scout_far",1}};
		volume=0.60000002;
		range=1500;
	};
	class scout_SilcloseShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\Scout\Sounds\scoutsup",1}};
		volume=0.80000001;
		range=50;
	};
	class scout_SilmidShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\Scout\Sounds\scoutsup_mid",1}};
		volume=0.60000002;
		range=100;
	};
	class scout_SilfarShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\Scout\Sounds\scoutsup_far",1}};
		volume=0.40000001;
		range=150;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class scout_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]={"scout_closeShot_SoundShader","scout_midShot_SoundShader","scout_farShot_SoundShader"};
	};
	class scoutsup_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]={"scout_SilcloseShot_SoundShader","scout_SilmidShot_SoundShader","scout_SilfarShot_SoundShader"};
	};
};
