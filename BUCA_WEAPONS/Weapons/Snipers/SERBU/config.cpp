class CfgPatches
{
	class BC_SERBU
	{
		units[]={};
		weapons[]={"BC_SERBU"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class BC_SERBU_Base: Rifle_Base
	{
		scope=0;
		displayName="SERBU";
		model="BUCA_WEAPONS\Weapons\Snipers\SERBU\BC_SERBU.p3d";
		descriptionShort="Оружие использует калибр 127x108 | The weapon uses a 127x108 caliber.";
		attachments[]= { "weaponOpticsHunting", "weaponOptics","weaponWrap"};
		chamberableFrom[]={"IMP_Ammo_127x108"};
		weight=3000;
		itemSize[]={10,2};
		absorbency=0;
		DisplayMagazine=0;
		repairableWithKits[]={5,1};
		repairCosts[]={30,25};
		PPDOFProperties[]={1,0.5,20,170,4,10};
		WeaponLength=1;
		chamberSize=1;
		chamberedRound="";
		ironsightsExcludingOptics[]={};
		magazines[]={};
		magazineSwitchTime=0.24999999;
		ejectType=1;
		recoilModifier[]={0.25,0.25,0.25};
		swayModifier[]={0,0,0};
		simpleHiddenSelections[]={"hide_barrel"};
		hiddenSelections[]={"zbytek1","zbytek2","zbytek3"};
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\SERBU\data\Barrel\BC_SERBU_Barrel.paa","BUCA_WEAPONS\Weapons\Snipers\SERBU\data\Body\BC_SERBU_Body.paa","BUCA_WEAPONS\Weapons\Snipers\SERBU\data\Scope\BC_SERBU_Scope.paa"};
		hiddenSelectionsMaterials[]={"BUCA_WEAPONS\Weapons\Snipers\SERBU\data\Barrel\BC_SERBU_Barrel.rvmat","BUCA_WEAPONS\Weapons\Snipers\SERBU\data\Body\BC_SERBU_Body.rvmat","BUCA_WEAPONS\Weapons\Snipers\SERBU\data\Scope\BC_SERBU_Scope.rvmat"};
		modes[]={"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]={"Serbu_SoundSet"};
			reloadTime=1.25;
			recoil="recoil_izh18";
			recoilProne="recoil_izh18_prone";
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
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={25};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=25;
			distanceZoomMax=25;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=45000000;
					healthLevels[]=
					{{1,{"BUCA_WEAPONS\Weapons\Snipers\SERBU\data\Barrel\BC_SERBU_Barrel.rvmat","BUCA_WEAPONS\Weapons\Snipers\SERBU\data\Body\BC_SERBU_Body.rvmat","BUCA_WEAPONS\Weapons\Snipers\SERBU\data\Scope\BC_SERBU_Scope.rvmat"}},
					{0.69999999,{"BUCA_WEAPONS\Weapons\Snipers\SERBU\data\Barrel\BC_SERBU_Barrel.rvmat","BUCA_WEAPONS\Weapons\Snipers\SERBU\data\Body\BC_SERBU_Body.rvmat","BUCA_WEAPONS\Weapons\Snipers\SERBU\data\Scope\BC_SERBU_Scope.rvmat"}},
					{0.5,{"BUCA_WEAPONS\Weapons\Snipers\SERBU\data\Barrel\BC_SERBU_Barrel_damage.rvmat","BUCA_WEAPONS\Weapons\Snipers\SERBU\data\Body\BC_SERBU_Body_damage.rvmat","BUCA_WEAPONS\Weapons\Snipers\SERBU\data\Scope\BC_SERBU_Scope_damage.rvmat"}},
					{0.30000001,{"BUCA_WEAPONS\Weapons\Snipers\SERBU\data\Barrel\BC_SERBU_Barrel_damage.rvmat","BUCA_WEAPONS\Weapons\Snipers\SERBU\data\Body\BC_SERBU_Body_damage.rvmat","BUCA_WEAPONS\Weapons\Snipers\SERBU\data\Scope\BC_SERBU_Scope_damage.rvmat"}},
					{0,{"BUCA_WEAPONS\Weapons\Snipers\SERBU\data\Barrel\BC_SERBU_Barrel_destruct.rvmat","BUCA_WEAPONS\Weapons\Snipers\SERBU\data\Body\BC_SERBU_Body_destruct.rvmat","BUCA_WEAPONS\Weapons\Snipers\SERBU\data\Scope\BC_SERBU_Scope_destruct.rvmat"}}};
				};
			};
		};
	};
	class BC_SERBU: BC_SERBU_Base
	{
		scope=2;
		displayName="SERBU-20";
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\SERBU\data\Barrel\BC_SERBU_Barrel.paa","BUCA_WEAPONS\Weapons\Snipers\SERBU\data\Body\BC_SERBU_Body.paa","BUCA_WEAPONS\Weapons\Snipers\SERBU\data\Scope\BC_SERBU_Scope.paa"};
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class base_HomeSilenced_distShot_SoundShader;
	class Serbu_closeShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\SERBU\Sounds\SERBU_close",1}};
		volume=1;
		range=100;
	};
	class Serbu_midShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\SERBU\Sounds\SERBU_distant",1}};
		volume=0.60000002;
		range=500;
	};
	class Serbu_farShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\SERBU\Sounds\SERBU_far",1}};
		volume=0.40000001;
		range=2000;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class Serbu_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]={"Serbu_closeShot_SoundShader","Serbu_midShot_SoundShader","Serbu_farShot_SoundShader"};
	};
};
