class CfgPatches
{
	class BC_AR50
	{
		units[]={};
		weapons[]={"BC_AR50"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Weapons_Firearms","DZ_Sounds_Effects"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Single;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class BoltActionRifle_InnerMagazine_Base;
	class BC_AR50_Base: BoltActionRifle_InnerMagazine_Base
	{
		scope=0;
		displayName="AR-20 | BLACK";
		descriptionShort="Оружие использует калибр 20mm | The weapon uses a 20mm caliber.";
		model="BUCA_WEAPONS\Weapons\Snipers\AR50\BC_AR50.p3d";
		attachments[]= { "weaponOpticsHunting", "weaponOptics","weaponWrap"};
		chamberableFrom[]={"IMP_Ammo_20mm"};
		itemSize[]={10,2};
		weight=15500;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,50,160,4,10};
		opticsFlare=0;
		WeaponLength=1;
		barrelArmor=3;
		initSpeedMultiplier=1;
		chamberSize=5;
		chamberedRound="";
		magazines[]={};
		DisplayMagazine=0;
		ejectType=0;
		simpleHiddenSelections[]={};
		recoilModifier[]={0.25,0.25,0.25};
		swayModifier[]={0,0,0};
		hiddenSelections[]={"bipod","body","muzzle"};
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\AR50\Data\bipod\BC_AR50_bipod_co.paa","BUCA_WEAPONS\Weapons\Snipers\AR50\Data\body\BC_AR50_co.paa","BUCA_WEAPONS\Weapons\Snipers\AR50\Data\muzzle\BC_AR50_muzzle_co.paa"};
		hiddenSelectionsMaterials[]={"BUCA_WEAPONS\Weapons\Snipers\AR50\Data\bipod\BC_AR50_bipod.rvmat","BUCA_WEAPONS\Weapons\Snipers\AR50\Data\body\BC_AR50.rvmat","BUCA_WEAPONS\Weapons\Snipers\AR50\Data\muzzle\BC_AR50_muzzle.rvmat"};
		modes[]={"Single"};
		class Single: Mode_Single
		{
			soundSetShot[]={"BC_ANZIO_SoundSet"};
			reloadTime=1;
			dispersion=0;
			magazineSlot="magazine";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=45000000;
					healthLevels[]=
					{{1,{"BUCA_WEAPONS\Weapons\Snipers\AR50\Data\bipod\BC_AR50_bipod.rvmat","BUCA_WEAPONS\Weapons\Snipers\AR50\Data\body\BC_AR50.rvmat","BUCA_WEAPONS\Weapons\Snipers\AR50\Data\muzzle\BC_AR50_muzzle.rvmat"}},
					{0.69999999,{"BUCA_WEAPONS\Weapons\Snipers\AR50\Data\bipod\BC_AR50_bipod.rvmat","BUCA_WEAPONS\Weapons\Snipers\AR50\Data\body\BC_AR50.rvmat","BUCA_WEAPONS\Weapons\Snipers\AR50\Data\muzzle\BC_AR50_muzzle.rvmat"}},
					{0.5,{"BUCA_WEAPONS\Weapons\Snipers\AR50\Data\bipod\BC_AR50_bipod.rvmat","BUCA_WEAPONS\Weapons\Snipers\AR50\Data\body\BC_AR50_damage.rvmat","BUCA_WEAPONS\Weapons\Snipers\AR50\Data\muzzle\BC_AR50_muzzle.rvmat"}},
					{0.30000001,{"BUCA_WEAPONS\Weapons\Snipers\AR50\Data\bipod\BC_AR50_bipod.rvmat","BUCA_WEAPONS\Weapons\Snipers\AR50\Data\body\BC_AR50_damage.rvmat","BUCA_WEAPONS\Weapons\Snipers\AR50\Data\muzzle\BC_AR50_muzzle.rvmat"}},
					{0,{"BUCA_WEAPONS\Weapons\Snipers\AR50\Data\bipod\BC_AR50_bipod.rvmat","BUCA_WEAPONS\Weapons\Snipers\AR50\Data\body\BC_AR50_destruct.rvmat","BUCA_WEAPONS\Weapons\Snipers\AR50\Data\muzzle\BC_AR50_muzzle.rvmat"}}};
				};
			};
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
			strength=150;
			type="shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			modelOptics="-";
			distanceZoomMin=300;
			distanceZoomMax=300;
			discreteDistance[]={300};
			discreteDistanceInitIndex=0;
		};
	};
	class BC_AR50: BC_AR50_Base
	{
		scope=2;
		displayName="AR-50 | Black";
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\AR50\Data\bipod\BC_AR50_bipod_co.paa","BUCA_WEAPONS\Weapons\Snipers\AR50\Data\body\BC_AR50_co.paa","BUCA_WEAPONS\Weapons\Snipers\AR50\Data\muzzle\BC_AR50_muzzle_co.paa"};
	};
};
