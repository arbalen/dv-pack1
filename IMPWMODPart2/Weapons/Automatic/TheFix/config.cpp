class CfgPatches
{
	class IMP_TheFix
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
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
	class IMP_TheFix_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		animName = "cz527";
		weight = 3300;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		opticsFlare = 0;
		winchesterTypeOpticsMount = 1;
		ironsightsExcludingOptics[] = {"HuntingOptic"};
		WeaponLength = 0.931718;
		barrelArmor = 4.0;		
		initSpeedMultiplier = 1.15;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"IMP_Ammo_338LM"};
		magazines[] = {"IMP_Mag_TheFix_10rnd"};
		magazineSwitchTime = 0.38;
		ejectType = 0;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.2,2.2,1.2};
		simpleHiddenSelections[] = {"hide_barrel"};
		reloadAction = "Reloadcz527";
		shotAction = "Reloadcz527Shot";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"IMPWMODPart2\Weapons\Automatic\TheFix\Data\BodyMagazine_co.paa","IMPWMODPart2\Weapons\Automatic\TheFix\Data\Stock_co.paa"};
		hiddenSelectionsMaterials[] = {"IMPWMODPart2\Weapons\Automatic\TheFix\Data\BodyMagazine.rvmat","IMPWMODPart2\Weapons\Automatic\TheFix\Data\Stock.rvmat"};
		modes[] = {"Single"};
		class Single: Mode_Single
		{
			soundSetShot[] = {"IMP_TheFix_Shot_SoundSet","IMP_TheFix_Shot_SoundSet","IMP_TheFix_Shot_SoundSet"};
			soundSetShotExt[] = {{"SCOUT_silencer_SoundSet","SCOUT_silencerTail_SoundSet","SCOUT_silencerInteriorTail_SoundSet"},{"SCOUT_silencerHomeMade_SoundSet","SCOUT_silencerHomeMadeTail_SoundSet","SCOUT_silencerInteriorTail_SoundSet"}};
			reloadTime = 1;
			dispersion = 0.0005;
			magazineSlot = "magazine";
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_cz527_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={-0.050000001,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 1;
				maxOverheatingValue = 4;
				overheatingDecayInterval = 3;
				class BarrelSmoke
				{
					overrideParticle = "smoking_barrel_small";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
		};
		class NoiseShoot
		{
			strength = 15;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 200;
			distanceZoomMax = 200;
			discreteDistance[] = {200};
			discreteDistanceInitIndex = 0;
		};
	};
	class IMP_TheFix: IMP_TheFix_Base
	{
		scope = 2;
		displayName = "The Fix";
		descriptionShort = "$STR_FixDescr";
		model = "IMPWMODPart2\Weapons\Automatic\TheFix\TheFix.p3d";
		attachments[] = {"weaponOpticsHunting","Suppressor_338","weaponWrap"};
		hiddenSelectionsTextures[] = {"IMPWMODPart2\Weapons\Automatic\TheFix\Data\BodyMagazine_co.paa","IMPWMODPart2\Weapons\Automatic\TheFix\Data\Stock_co.paa"};
		hiddenSelectionsMaterials[] = {"IMPWMODPart2\Weapons\Automatic\TheFix\Data\BodyMagazine.rvmat","IMPWMODPart2\Weapons\Automatic\TheFix\Data\Stock.rvmat"};
		itemSize[] = {10,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"IMPWMODPart2\Weapons\Automatic\TheFix\Data\BodyMagazine.rvmat","IMPWMODPart2\Weapons\Automatic\TheFix\Data\Stock.rvmat","IMPWMODPart2\Weapons\Automatic\TheFix\Data\Bipod.rvmat"}},{0.7,{"IMPWMODPart2\Weapons\Automatic\TheFix\Data\BodyMagazine.rvmat","IMPWMODPart2\Weapons\Automatic\TheFix\Data\Stock.rvmat","IMPWMODPart2\Weapons\Automatic\TheFix\Data\Bipod.rvmat"}},{0.5,{"IMPWMODPart2\Weapons\Automatic\TheFix\Data\BodyMagazine_damage.rvmat","IMPWMODPart2\Weapons\Automatic\TheFix\Data\Stock_damage.rvmat","IMPWMODPart2\Weapons\Automatic\TheFix\Data\Bipod_damage.rvmat"}},{0.3,{"IMPWMODPart2\Weapons\Automatic\TheFix\Data\BodyMagazine_damage.rvmat","IMPWMODPart2\Weapons\Automatic\TheFix\Data\Stock_damage.rvmat","IMPWMODPart2\Weapons\Automatic\TheFix\Data\Bipod_damage.rvmat"}},{0.0,{"IMPWMODPart2\Weapons\Automatic\TheFix\Data\BodyMagazine_destruct.rvmat","IMPWMODPart2\Weapons\Automatic\TheFix\Data\Stock_destruct.rvmat","IMPWMODPart2\Weapons\Automatic\TheFix\Data\Bipod_destruct.rvmat"}}};
				};
			};
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_TheFix_10rnd: Magazine_Base
	{
		scope = 2;
		displayName = "$STR_FixMagN";
		descriptionShort = "$STR_FixMagD";
		model = "IMPWMODPart2\Weapons\Automatic\TheFix\TheFix_Mag.p3d";
		weight = 220;
		itemSize[] = {1,2};
		count = 10;
		ammo = "IMP_Bullet_338LM";
		ammoItems[] = {"IMP_Ammo_338LM"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{"IMPWMODPart2\Weapons\Automatic\TheFix\Data\BodyMagazine.rvmat"}},{0.7,{"IMPWMODPart2\Weapons\Automatic\TheFix\Data\BodyMagazine.rvmat"}},{0.5,{"IMPWMODPart2\Weapons\Automatic\TheFix\Data\BodyMagazine_damage.rvmat"}},{0.3,{"IMPWMODPart2\Weapons\Automatic\TheFix\Data\BodyMagazine_damage.rvmat"}},{0.0,{"IMPWMODPart2\Weapons\Automatic\TheFix\Data\BodyMagazine_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
};
class CfgSlots
{
	class Slot_TheFixSuppressor
	{
		name = "TheFixSuppressor";
		displayName = "$STR_FixSlotSupp";
		ghostIcon = "set:dayz_inventory image:supressor";
	};
};	

class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyTheFix_Mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMODPart2\Weapons\Automatic\TheFix\TheFix_Mag.p3d";
	};
	class ProxyTheFix_Scope: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponOptics";
		model = "IMPWMODPart2\Weapons\Automatic\TheFix\proxy\TheFix_Scope.p3d";
	};
	class ProxyTheFix_Suppressor: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "TheFixSuppressor";
		model = "IMPWMODPart2\Weapons\Automatic\TheFix\proxy\TheFix_Suppressor.p3d";
	};
};

