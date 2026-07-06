class CfgPatches
{
	class IMP_RN50
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Scripts","DZ_Sounds_Weapons","DZ_Sounds_Effects"};
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
	class BoltActionRifle_ExternalMagazine_Base;
	class IMP_RN50_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		weight = 8000;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		DisplayMagazine = 0;
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		opticsFlare = 0;
		winchesterTypeOpticsMount = 0;
		ironsightsExcludingOptics[] = {"HuntingOptic"};
		WeaponLength = 1;
		barrelArmor = 1.111;
		initSpeedMultiplier = 1.2;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"IMP_Ammo_127x99","IMP_Ammo_50BMG"};
		magazines[] = {};
		magazineSwitchTime = 0.5;
		ejectType = 0;
		recoilModifier[]={0.25,0.25,0.25};
		swayModifier[]={0,0,0};
		hiddenSelections[] = {"camoflage","camoflage1"};
		hiddenSelectionsTextures[] = {"impwmod\weapons\sniper\rn50\data\rn501_co.paa","impwmod\weapons\sniper\rn50\data\rn50_co.paa"};
		simpleHiddenSelections[] = {"hide_barrel"};
		drySound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\CR527\cz527_reload_0",1,1,20};
		reloadSound[] = {"dz\sounds\weapons\firearms\CR527\cz527_cycling_0",1,1,20};
		reloadAction = "Reloadcz527";
		shotAction = "Reloadcz527Shot";
		modes[] = {"Single"};
		class Single: Mode_Single
		{
			soundSetShot[] = {"Anzio_mid_SoundSet","Mosin_Tail_SoundSet","Mosin_InteriorTail_SoundSet"};
			reloadTime = 1;
			recoil = "recoil_izh18";
			recoilProne = "recoil_izh18_prone";
			dispersion = 0;
			magazineSlot = "magazine";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					overridePoint = "Usti hlavne";
				};
				class ChamberFlash
				{
					overridePoint = "dust_point";
					overrideParticle = "weapon_dust_izh18_01";
				};
			};
		};
		class NoiseShoot
		{
			strength = 80;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
		};
	};
	class IMP_RN50: IMP_RN50_Base
	{
		scope = 2;
		displayName = "RN-50";
		descriptionShort = "Оружие использует калибр 12.7x99 | The weapon uses a 12.7x99 caliber.";
		model = "IMPWMOD\Weapons\Sniper\RN50\models\RN50.p3d";
		hiddenSelectionsTextures[] = {"impwmod\weapons\sniper\rn50\data\rn501_co.paa","impwmod\weapons\sniper\rn50\data\rn50_co.paa"};
		attachments[] = {"weaponWrap","weaponOpticsHunting"};
		itemSize[] = {10,2};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200000000;
					healthLevels[] = 
					{
						{1,{"impwmod\weapons\sniper\rn50\data\rn501.rvmat", "impwmod\weapons\sniper\rn50\data\rn50.rvmat"}},
						{0.7,{"impwmod\weapons\sniper\rn50\data\rn501.rvmat", "impwmod\weapons\sniper\rn50\data\rn50.rvmat"}},
						{0.5,{"impwmod\weapons\sniper\rn50\data\rn501_damage.rvmat", "impwmod\weapons\sniper\rn50\data\rn50_damage.rvmat"}},
						{0.3,{"impwmod\weapons\sniper\rn50\data\rn501_damage.rvmat", "impwmod\weapons\sniper\rn50\data\rn50_damage.rvmat"}},
						{0,{"impwmod\weapons\sniper\rn50\data\rn501_destruct.rvmat", "impwmod\weapons\sniper\rn50\data\rn50_destruct.rvmat"}}
					};
				};
			};
		};
	};
};