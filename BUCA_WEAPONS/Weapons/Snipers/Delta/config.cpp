class CfgPatches
{
	class BC_DELTA
	{
		units[]={};
		weapons[]={"BC_DELTA","BC_DELTA_Fade","BC_DELTA_LowFade","BC_DELTA_Red","BC_DELTA_Stripes","BC_DELTA_Caution"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[]={"BC_Delta_Magazine"};
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
	class BC_DELTA_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope=0;
		displayName="Delta-5";
		model="BUCA_WEAPONS\Weapons\Snipers\Delta\BC_Delta.p3d";
		descriptionShort="Оружие использует калибр 408 | The weapon uses a 408 caliber.";
		attachments[]= { "weaponOpticsHunting", "weaponOptics","BC_338_Suppressor","weaponWrap"};
		magazines[]={"BC_Delta_Magazine"};
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
		simpleHiddenSelections[]={"pistolgrip"};
		hiddenSelections[]={"cumbuca"};
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\Delta\data\BC_Delta_co.paa"};
		hiddenSelectionsMaterials[]={"BUCA_WEAPONS\Weapons\Snipers\Delta\data\BC_Delta.rvmat"};
		modes[]={"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]={"delta_SoundSet","Winchester70_Shot_iterior_SoundSet","Winchester70_Tail_SoundSet","Winchester70_InteriorTail_SoundSet","Winchester70_Tail_2D_SoundSet"};
			soundSetShotExt[]={{"delta_sup_SoundSet","Winchester70_silencerHomeMadeTail_SoundSet","Winchester70_silencerInteriorHomeMadeTail_SoundSet"}};
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
					{{1,{"BUCA_WEAPONS\Weapons\Snipers\Delta\data\BC_Delta.rvmat"}},
					{0.69999999,{"BUCA_WEAPONS\Weapons\Snipers\Delta\data\BC_Delta.rvmat"}},
					{0.5,{"BUCA_WEAPONS\Weapons\Snipers\Delta\data\BC_Delta_damage.rvmat"}},
					{0.30000001,{"BUCA_WEAPONS\Weapons\Snipers\Delta\data\BC_Delta_damage.rvmat"}},
					{0,{"BUCA_WEAPONS\Weapons\Snipers\Delta\data\BC_Delta_destruct.rvmat"}}};
				};
			};
		};
	};
	class BC_DELTA: BC_DELTA_Base
	{
		scope=2;
		displayName="Delta-5 | Tan";
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\Delta\data\BC_Delta_co.paa"};
	};
	class BC_DELTA_Fade: BC_DELTA_Base
	{
		scope=2;
		displayName="Delta-5 | Fade";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\Delta\data\BC_Delta_Fade.paa"
		};
	};
	class BC_DELTA_LowFade: BC_DELTA_Base
	{
		scope=2;
		displayName="Delta-5 | Low Fade";
		hiddenSelectionsTextures[]=
		{
			"\BUCA_WEAPONS\Weapons\Snipers\Delta\data\BC_Delta_LowFade.paa"
		};
	};
	class BC_DELTA_Red: BC_DELTA_Base
	{
		scope=2;
		displayName="Delta-5 | Red";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\Delta\data\BC_Delta_Red.paa"
		};
	};
	class BC_DELTA_Stripes: BC_DELTA_Base
	{
		scope=2;
		displayName="Delta-5 | Stripes";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\Delta\data\BC_Delta_Stripes.paa"
		};
	};
	class BC_DELTA_Caution: BC_DELTA_Base
	{
		scope=2;
		displayName="Delta-5 | Caution";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\Delta\data\BC_Delta_Caution.paa"
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class BC_Delta_Magazine: Magazine_Base
	{
		scope=2;
		displayName="10rd Delta Magazine";
		descriptionShort="10 .408 Round Magazine for the Delta-5";
		model="BUCA_WEAPONS\Weapons\Snipers\Delta\BC_Delta_Magazine.p3d";
		ammo="IMP_Bullet_408";
		ammoItems[]={"IMP_Ammo_408"};
		weight=230;
		itemSize[]={1,2};
		count=10;
		isMeleeWeapon=0;
		tracersEvery=1;
		hiddenSelections[]={"cumbuca"};
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\Delta\data\BC_Delta_co.paa"};
		hiddenSelectionsMaterials[]={"BUCA_WEAPONS\Weapons\Snipers\Delta\data\BC_Delta.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=5000000000;
					healthLevels[]=
					{{1,{"BUCA_WEAPONS\Weapons\Snipers\Delta\data\BC_Delta.rvmat"}},
					{0.69999999,{"BUCA_WEAPONS\Weapons\Snipers\Delta\data\BC_Delta.rvmat"}},
					{0.5,{"BUCA_WEAPONS\Weapons\Snipers\Delta\data\BC_Delta_damage.rvmat"}},
					{0.30000001,{"BUCA_WEAPONS\Weapons\Snipers\Delta\data\BC_Delta_damage.rvmat"}},
					{0,{"BUCA_WEAPONS\Weapons\Snipers\Delta\data\BC_Delta_destruct.rvmat"}}};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyBC_Delta_Magazine: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="BUCA_WEAPONS\Weapons\Snipers\Delta\BC_Delta_Magazine.p3d";
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class base_HomeSilenced_distShot_SoundShader;
	class delta_closeShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\Delta\Sounds\delta",1}};
		volume=3;
		range=100;
	};
	class delta_midShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\Delta\Sounds\delta_mid",1}};
		volume=1;
		range=500;
	};
	class delta_farShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\Delta\Sounds\delta_far",1}};
		volume=0.5;
		range=1500;
	};
	class delta_SilcloseShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\Delta\Sounds\delta_sup",1}};
		volume=3;
		range=50;
	};
	class delta_SilmidShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\Delta\Sounds\delta_sup_mid",1}};
		volume=1;
		range=100;
	};
	class delta_SilfarShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\Delta\Sounds\delta_sup_far",1}};
		volume=0.5;
		range=150;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class delta_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]={"delta_closeShot_SoundShader","delta_midShot_SoundShader","delta_farShot_SoundShader"};
	};
	class delta_sup_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]={"delta_SilcloseShot_SoundShader","delta_SilmidShot_SoundShader","delta_SilfarShot_SoundShader"};
	};
};
