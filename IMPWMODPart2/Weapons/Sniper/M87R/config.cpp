class CfgPatches
{
	class IMP_M87R
	{
		units[] = {"IMP_M87R"};
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
	class IMP_M87R_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		displayName = "McMillan M87R";
		descriptionShort = "Оружие использует калибр 12.7x99 | The weapon uses a 12.7x99 caliber.";
		model = "IMPWMODPart2\Weapons\Sniper\M87R\M87R.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsHunting"
		};
		itemSize[]={10,3};
		animName = "cz527";
		weight = 9500;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		opticsFlare = 0;
		ironsightsExcludingOptics[] = {"HuntingOptic"};
		WeaponLength = 1;
		barrelArmor = 4.0;		
		initSpeedMultiplier = 1;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"IMP_Ammo_127x99"};
		magazines[] = {"IMP_Mag_M87R_5rnd"};
		magazineSwitchTime = 0.38;
		ejectType = 0;
		recoilModifier[]={0.25,0.25,0.25};
		swayModifier[]={0,0,0};
		simpleHiddenSelections[] = {"hide_muzzlebreak"};
		drySound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\CR527\cz527_reload_0",1,1,20};
		reloadSound[] = {"dz\sounds\weapons\firearms\CR527\cz527_cycling_0",1,1,20};
		reloadAction = "Reloadcz527";
		shotAction = "Reloadcz527Shot";
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		class Single: Mode_Single
		{
			soundSetShot[]=
			{
				"IMP_M87R_Shot_SoundSet",
				"IMP_M87R_Shot_SoundSet",
				"CR527_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				{
					"M82A1_Suppressed_SoundSet",
					"CR527_silencerHomeMadeTail_SoundSet",
					"CR527_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime = 0.2;
			recoil = "recoil_cz527";
			recoilProne = "recoil_cz527_prone";
			dispersion = 0;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 100;
			type = "shot";
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
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350000000;
					healthLevels[] = {{1,{"IMPWMODPart2\Weapons\Sniper\M87R\Data\M87R.rvmat"}},{0.7,{"IMPWMODPart2\Weapons\Sniper\M87R\Data\M87R.rvmat"}},{0.5,{"IMPWMODPart2\Weapons\Sniper\M87R\Data\M87R_damage.rvmat"}},{0.3,{"IMPWMODPart2\Weapons\Sniper\M87R\Data\M87R_damage.rvmat"}},{0,{"IMPWMODPart2\Weapons\Sniper\M87R\Data\M87R_destruct.rvmat"}}};
				};
			};
		};
	};
	class IMP_M87R: IMP_M87R_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMODPart2\Weapons\Sniper\M87R\Data\M87R_co.paa"};
		hiddenSelectionsMaterials[] = {"IMPWMODPart2\Weapons\Sniper\M87R\Data\M87R.rvmat"};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_M87R_Base: Magazine_Base
	{
		scope = 0;
		displayName = "$STR_IMP_M87Ra";
		descriptionShort = "$STR_IMP_M87Ras";
		model = "IMPWMODPart2\Weapons\Sniper\M87R\M87R_Mag.p3d";
		weight = 230;
		itemSize[] = {2,2};
		count = 5;
		rotationFlags = 17;
		ammo = "IMP_Bullet_127x99";
		ammoItems[] = {"IMP_Ammo_127x99"};
		hiddenSelections[] = {"camo"};
		isMeleeWeapon = 0;
		tracersEvery = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {{1,{"IMPWMODPart2\Weapons\Sniper\M87R\Data\M87R.rvmat"}},{0.7,{"IMPWMODPart2\Weapons\Sniper\M87R\Data\M87R.rvmat"}},{0.5,{"IMPWMODPart2\Weapons\Sniper\M87R\Data\M87R_damage.rvmat"}},{0.3,{"IMPWMODPart2\Weapons\Sniper\M87R\Data\M87R_damage.rvmat"}},{0,{"IMPWMODPart2\Weapons\Sniper\M87R\Data\M87R_destruct.rvmat"}}};
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
	class IMP_Mag_M87R_5rnd: IMP_Mag_M87R_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMODPart2\Weapons\Sniper\M87R\Data\M87R_co.paa"};
		hiddenSelectionsMaterials[] = {"IMPWMODPart2\Weapons\Sniper\M87R\Data\M87R.rvmat"};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyM87R_Magazine: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "magazine";
		model = "IMPWMODPart2\Weapons\Sniper\M87R\M87R_Mag.p3d";
	};
};
