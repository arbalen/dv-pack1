class CfgPatches
{
	class BC_NoreenULR50
	{
		units[]={};
		weapons[]={"BC_NoreenULR50_Black"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[]={};
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
	class BC_NoreenULR50_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope=0;
		displayName="ULR-20";
		model="BUCA_WEAPONS2\Weapons\Snipers\NoreenULR50\BC_NoreenULR50.p3d";
		descriptionShort="Оружие использует калибр 20mm | The weapon uses a 20mm caliber.";
		attachments[]={"weaponOpticsHunting","weaponWrap"};
		magazines[]={};
		chamberableFrom[]={"IMP_Ammo_20mm"};
		itemSize[]={10,2};
		weight=3700;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,50,180,4,10};
		DisplayMagazine=0;
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
		hiddenSelectionsTextures[]={"BUCA_WEAPONS2\Weapons\Snipers\NoreenULR50\data\NoreenULR50_co.paa"};
		hiddenSelectionsMaterials[]={"BUCA_WEAPONS2\Weapons\Snipers\NoreenULR50\data\NoreenULR50.rvmat"};
		modes[]={"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]={"BC_NoreenULR50_SoundSet","Mosin9130_Shot_iterior_SoundSet","Mosin9130_Tail_SoundSet","Mosin9130_InteriorTail_SoundSet","Mosin9130_Tail_2D_SoundSet"};
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
					hitpoints=5000000;
					healthLevels[]=
					{{1,{"BUCA_WEAPONS2\Weapons\Snipers\NoreenULR50\data\NoreenULR50.rvmat"}},
					{0.69999999,{"BUCA_WEAPONS2\Weapons\Snipers\NoreenULR50\data\NoreenULR50.rvmat"}},
					{0.5,{"BUCA_WEAPONS2\Weapons\Snipers\NoreenULR50\data\NoreenULR50_damage.rvmat"}},
					{0.30000001,{"BUCA_WEAPONS2\Weapons\Snipers\NoreenULR50\data\NoreenULR50_damage.rvmat"}},
					{0,{"BUCA_WEAPONS2\Weapons\Snipers\NoreenULR50\data\NoreenULR50_destruct.rvmat"}}};
				};
			};
		};
	};
	class BC_NoreenULR50_Black: BC_NoreenULR50_Base
	{
		scope=2;
		displayName="$STR_BC_NoreenULR50_N_B";
		hiddenSelectionsTextures[]={"BUCA_WEAPONS2\Weapons\Snipers\NoreenULR50\data\NoreenULR50_co.paa"};
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class base_HomeSilenced_distShot_SoundShader;
	class BC_NoreenULR50_closeShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS2\Weapons\Snipers\NoreenULR50\Sounds\NoreenULR50",1}};
		volume=1;
		range=100;
	};
	class BC_NoreenULR50_midShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS2\Weapons\Snipers\NoreenULR50\Sounds\NoreenULR50_mid",1}};
		volume=0.6;
		range=500;
	};
	class BC_NoreenULR50_farShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS2\Weapons\Snipers\NoreenULR50\Sounds\NoreenULR50_far",1}};
		volume=0.2;
		range=1500;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class BC_NoreenULR50_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]={"BC_NoreenULR50_closeShot_SoundShader","BC_NoreenULR50_midShot_SoundShader","BC_NoreenULR50_farShot_SoundShader"};
	};
	class BC_NoreenULR50_sup_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]={"BC_NoreenULR50_SilcloseShot_SoundShader","BC_NoreenULR50_SilmidShot_SoundShader","BC_NoreenULR50_SilfarShot_SoundShader"};
	};
};
