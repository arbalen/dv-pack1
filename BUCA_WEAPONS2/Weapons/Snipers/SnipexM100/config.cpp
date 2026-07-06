class CfgPatches
{
	class BC_SnipexM100
	{
		units[]={};
		weapons[]={"BC_SnipexM100_Black","BC_SnipexM100_Tan"};
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
	class BC_SnipexM100_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope=0;
		displayName="$STR_BC_SnipexM100_N";
		model="BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\BC_SnipexM100.p3d";
		descriptionShort="Оружие использует калибр 145x114 | The weapon uses a 145x114 caliber.";
		attachments[]={"weaponOpticsHunting","weaponWrap"};
		magazines[]={};
		chamberableFrom[]={"BC_Ammo_20mm"};
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
		simpleHiddenSelections[]={"hidemuzzle"};
		hiddenSelections[]={"cumbucabarrel","cumbucabipod","cumbucabolt","cumbucagrip","cumbucahandguard","cumbucamuzzle","cumbucastock"};
		hiddenSelectionsTextures[]={"BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100barrel_co.paa","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100bipod_co.paa","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100bolt_co.paa","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100grip_co.paa","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100handguard_co.paa","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100muzzle_co.paa","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100stock_co.paa"};
		hiddenSelectionsMaterials[]={"BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100barrel.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100bipod.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100bolt.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100grip.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100handguard.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100muzzle.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100stock.rvmat"};
		modes[]={"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]={"BC_SnipexM100_SoundSet","Mosin9130_Shot_iterior_SoundSet","Mosin9130_Tail_SoundSet","Mosin9130_InteriorTail_SoundSet","Mosin9130_Tail_2D_SoundSet"};
			soundSetShotExt[] = {{"BC_SnipexM100_sup_SoundSet","Mosin9130_silencerHomeMadeTail_SoundSet","Mosin9130_silencerInteriorHomeMadeTail_SoundSet"}};
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
					{{1,{"BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100barrel.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100bipod.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100bolt.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100grip.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100handguard.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100muzzle.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100stock.rvmat"}},
					{0.69999999,{"BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100barrel.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100bipod.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100bolt.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100grip.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100handguard.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100muzzle.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100stock.rvmat"}},
					{0.5,{"BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100barrel_damage.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100bipod_damage.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100bolt_damage.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100grip_damage.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100handguard_damage.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100muzzle_damage.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100stock_damage.rvmat"}},
					{0.30000001,{"BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100barrel_damage.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100bipod_damage.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100bolt_damage.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100grip_damage.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100handguard_damage.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100muzzle_damage.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100stock_damage.rvmat"}},
					{0,{"BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100barrel_destruct.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100bipod_destruct.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100bolt_destruct.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100grip_destruct.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100handguard_destruct.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100muzzle_destruct.rvmat","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100stock_destruct.rvmat"}}};
				};
			};
		};
	};
	class BC_SnipexM100_Black: BC_SnipexM100_Base
	{
		scope=2;
		displayName="$STR_BC_SnipexM100_N_B";
		hiddenSelectionsTextures[]={"BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100barrel_co.paa","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100bipod_co.paa","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100bolt_co.paa","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100grip_co.paa","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100handguard_co.paa","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100muzzle_co.paa","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100stock_co.paa"};
	};
	class BC_SnipexM100_FDE: BC_SnipexM100_Base
	{
		scope=2;
		displayName="$STR_BC_SnipexM100_N_FDE";
		hiddenSelectionsTextures[]={"BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100barrel_fde.paa","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100bipod_fde.paa","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100bolt_fde.paa","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100grip_fde.paa","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100handguard_fde.paa","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100muzzle_fde.paa","BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\data\snipexm100stock_fde.paa"};
	};
};
class CfgSoundShaders 
{
	class baseCharacter_SoundShader;
	class base_HomeSilenced_distShot_SoundShader;
	class BC_SnipexM100_closeShot_SoundShader 
	{
		samples[] = {{"BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\Sounds\SnipexM100_Close", 1}};
		volume = 1.0;
		range=100;
	};
	
	class BC_SnipexM100_midShot_SoundShader 
    {
		samples[] = {{"BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\Sounds\SnipexM100_Mid", 1}};
		volume = 0.6;
		range=500;
	};
	
	class BC_SnipexM100_farShot_SoundShader  
	{
		samples[] = {{"BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\Sounds\SnipexM100_Far", 1}};
		volume = 0.4;
		range=2000;
	};
		class BC_SnipexM100_SilcloseShot_SoundShader 
	{
		samples[] = {{"BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\Sounds\SnipexM100_Sup_Close", 1}};
		volume = 0.8;
		range=50;
	};
	
	class BC_SnipexM100_SilmidShot_SoundShader 
	{
		samples[] = {{"BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\Sounds\SnipexM100_Sup_Mid", 1}};
		volume = 0.6;
		range=100;
	};
	class BC_SnipexM100_SilfarShot_SoundShader 
	{
		samples[] = {{"BUCA_WEAPONS2\Weapons\Snipers\SnipexM100\Sounds\SnipexM100_Sup_Far", 1}};
		volume = 0.4;
		range=150;
	};
};

class CfgSoundSets 
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
    class BC_SnipexM100_SoundSet : Rifle_Shot_Base_SoundSet 
	{
		soundShaders[] = {"BC_SnipexM100_closeShot_SoundShader", "BC_SnipexM100_midShot_SoundShader", "BC_SnipexM100_farShot_SoundShader"};
	};
	class BC_SnipexM100_sup_SoundSet : Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"BC_SnipexM100_SilcloseShot_SoundShader", "BC_SnipexM100_SilmidShot_SoundShader", "BC_SnipexM100_SilfarShot_SoundShader"};
	};
};	