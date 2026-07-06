class CfgPatches
{
	class ASH12
	{
		units[] = {};
		weapons[] = {};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Magazines",
			"DZ_Scripts"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_FullAuto;
class OpticsInfoRifle;
class CfgWeapons
{
	class Rifle_Base;
	class IMP_ASH12_Base: Rifle_Base
	{
		scope = 0;
		weight = 3500;
		displayName = "$STR_IMP_ASH12";
		descriptionShort = "$STR_IMP_ASH12descr";
		absorbency = 0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30,25};
		PPDOFProperties[] = {1,0.5,10,190,4,10};
		WeaponLength=0.82;
		barrelArmor=1.6;
		initSpeedMultiplier = 1;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"IMP_Ammo_127x42"};
		magazines[] = {"IMP_Mag_ASH12_10Rnd", "IMP_Mag_ASH12_20Rnd", "IMP_Mag_ASH12_Tape_40Rnd", "IMP_Mag_ASH12_Clip_40Rnd"};
		magazineSwitchTime = 0.3;
		ejectType = 1;
		recoilModifier[] = {1.3,1.3,1};
		swayModifier[] = {1,1,1};
		simpleHiddenSelections[] = {"irons_up", "irons_down"};
		hiddenSelections[] = {"camoflage"};
		modes[] = {"FullAuto","SemiAuto"};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"ASH12_Shot_SoundSet", "ASH12_Tail_SoundSet", "ASH12_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "ASH12_silencer_SoundSet", "ASH12_silencerTail_SoundSet", "ASH12_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.170;
			recoil = "recoil_cz61";
			recoilProne = "recoil_cz61_prone";
			dispersion = 0;
			magazineSlot = "magazine";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"ASH12_Shot_SoundSet", "ASH12_Tail_SoundSet", "ASH12_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "ASH12_silencer_SoundSet", "ASH12_silencerTail_SoundSet", "ASH12_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.170;
			recoil = "recoil_cz61";
			recoilProne = "recoil_cz61_prone";
			dispersion = 0;
			magazineSlot = "magazine";
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 3;
				maxOverheatingValue = 10;
				overheatingDecayInterval = 1;
				class SmokingBarrel
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.5};
					onlyWithinRainLimits[] = {0,0.2};
					ignoreIfSuppressed = 1;
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.1,0.02,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
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
			strength = 9;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			discreteDistance[] = {100,200,300,400};
			discreteDistanceInitIndex = 0;
			distanceZoomMin = 100;
			distanceZoomMax = 400;
		};
	};
	class IMP_ASH12: IMP_ASH12_Base
	{
		scope = 2;
		model = "IMPWMOD\Weapons\Automatic\ASH12\models\ASH12.p3d";
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\ASH12\data\ASH12_co.paa"};
		attachments[] = 
		{
			"weaponWrap",
			"weaponOptics",
			"weaponFlashlight",
			"grip1",
			"weaponBipod"
		};
		itemSize[] = {8,2};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000;
					healthLevels[] = {{1.01,{"IMPWMOD\Weapons\Automatic\ASH12\data\ASH12.rvmat"}},{0.7,{"IMPWMOD\Weapons\Automatic\ASH12\data\ASH12.rvmat"}},{0.5,{"IMPWMOD\Weapons\Automatic\ASH12\data\ASH12_damage.rvmat"}},{0.3,{"IMPWMOD\Weapons\Automatic\ASH12\data\ASH12_damage.rvmat"}},{0.01,{"IMPWMOD\Weapons\Automatic\ASH12\data\ASH12_destruct.rvmat"}}};
				};
			};
		};
	};
	class Ka_ASH12_SevenUp: IMP_ASH12_Base
	{
		scope = 2;
		model = "IMPWMOD\Weapons\Automatic\ASH12\models\ASH12.p3d";
		attachments[] = 
		{
			"weaponWrap",
			"weaponOptics",
			"weaponFlashlight",
			"grip1",
			"weaponBipod"
		};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\ASH12\data\ASH12_SevenUp_co.paa"};
	};
};

class CfgMagazines
{
	class Magazine_Base;
	
	class IMP_Mag_ASH12_10Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "$STR_IMP_ASH12Mag";
		descriptionShort = "10 12.7x55";
		model = "IMPWMOD\Weapons\Automatic\ASH12\models\ASH12_Mag10.p3d";
		weight = 150;
		itemSize[] = {1,3};
		count = 10;
		ammo = "IMP_Bullet_127x42";
		ammoItems[] = {"IMP_Ammo_127x42"};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.01,{"IMPWMOD\Weapons\Automatic\ASH12\data\ASH12Mag10.rvmat"}},{0.7,{"IMPWMOD\Weapons\Automatic\ASH12\data\ASH12Mag10.rvmat"}},{0.5,{"IMPWMOD\Weapons\Automatic\ASH12\data\ASH12Mag10_damage.rvmat"}},{0.3,{"IMPWMOD\Weapons\Automatic\ASH12\data\ASH12Mag10_damage.rvmat"}},{0.01,{"IMPWMOD\Weapons\Automatic\ASH12\data\ASH12Mag10_destruct.rvmat"}}};
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
	class IMP_Mag_ASH12_20Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "$STR_IMP_ASH12Mag";
		descriptionShort = "$STR_IMP_ASH12Mag1";
		model = "IMPWMOD\Weapons\Automatic\ASH12\models\ASH12_Mag20.p3d";
		weight = 300;
		itemSize[] = {1,3};
		count = 20;
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		ammo = "IMP_Bullet_127x42";
		ammoItems[] = {"IMP_Ammo_127x42"};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.01,{"IMPWMOD\Weapons\Automatic\ASH12\data\ASH12Mag20.rvmat"}},{0.7,{"IMPWMOD\Weapons\Automatic\ASH12\data\ASH12Mag20.rvmat"}},{0.5,{"IMPWMOD\Weapons\Automatic\ASH12\data\ASH12Mag20_damage.rvmat"}},{0.3,{"IMPWMOD\Weapons\Automatic\ASH12\data\ASH12Mag20_damage.rvmat"}},{0.01,{"IMPWMOD\Weapons\Automatic\ASH12\data\ASH12Mag20_destruct.rvmat"}}};
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
	class IMP_Mag_ASH12_Tape_40Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "$STR_IMP_ASH12Mag";
		descriptionShort = "$STR_IMP_ASH12Mag2";
		model = "IMPWMOD\Weapons\Automatic\ASH12\models\ASH12_Mag_Tape_40_Rnd.p3d";
		weight = 600;
		itemSize[] = {2,3};
		count = 40;
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		ammo = "IMP_Bullet_127x42";
		ammoItems[] = {"IMP_Ammo_127x42"};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.01,{"IMPWMOD\Weapons\Automatic\ASH12\data\ASH12Mag20.rvmat"}},{0.7,{"IMPWMOD\Weapons\Automatic\ASH12\data\ASH12Mag20.rvmat"}},{0.5,{"IMPWMOD\Weapons\Automatic\ASH12\data\ASH12Mag20_damage.rvmat"}},{0.3,{"IMPWMOD\Weapons\Automatic\ASH12\data\ASH12Mag20_damage.rvmat"}},{0.01,{"IMPWMOD\Weapons\Automatic\ASH12\data\ASH12Mag20_destruct.rvmat"}}};
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
	class IMP_Mag_ASH12_Clip_40Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "$STR_IMP_ASH12Mag";
		descriptionShort = "$STR_IMP_ASH12Mag2";
		model = "IMPWMOD\Weapons\Automatic\ASH12\models\ASH12_Mag_Clip_40_Rnd.p3d";
		weight = 600;
		itemSize[] = {2,3};
		count = 40;
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		ammo = "IMP_Bullet_127x42";
		ammoItems[] = {"IMP_Ammo_127x42"};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.01,{"IMPWMOD\Weapons\Automatic\ASH12\data\ASH12Mag20.rvmat"}},{0.7,{"IMPWMOD\Weapons\Automatic\ASH12\data\ASH12Mag20.rvmat"}},{0.5,{"IMPWMOD\Weapons\Automatic\ASH12\data\ASH12Mag20_damage.rvmat"}},{0.3,{"IMPWMOD\Weapons\Automatic\ASH12\data\ASH12Mag20_damage.rvmat"}},{0.01,{"IMPWMOD\Weapons\Automatic\ASH12\data\ASH12Mag20_destruct.rvmat"}}};
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

class CfgNonAIVehicles {
	class ProxyAttachment;


	class ProxyASH12_Mag10 : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\ASH12\models\ASH12_Mag10.p3d";
	};
	class ProxyASH12_Mag20 : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\ASH12\models\ASH12_Mag20.p3d";
	};
	class ProxyASH12_Mag_Clip_40_Rnd : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\ASH12\models\ASH12_Mag_Clip_40_Rnd.p3d";
	};
	class ProxyASH12_Mag_Tape_40_Rnd : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\ASH12\models\ASH12_Mag_Tape_40_Rnd.p3d";
	};
};
class CfgSoundSets 
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class Rifle_silencerTail_Base_SoundSet;
	class Rifle_silencerInteriorTail_Base_SoundSet;
	class ASH12_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"ASH12_closeShot_SoundShader",
			"ASH12_midShot_SoundShader",
			"ASH12_distShot_SoundShader"
		};
	};
	class ASH12_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"ASH12_tailDistant_SoundShader",
			"ASH12_tailTrees_SoundShader",
			"ASH12_tailForest_SoundShader",
			"ASH12_tailMeadows_SoundShader",
			"ASH12_tailHouses_SoundShader"
		};
	};
	class ASH12_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"ASH12_tailInterior_SoundShader"
		};
	};
	class ASH12_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"ASH12_silencerCloseShot_SoundShader",
			"ASH12_silencerMidShot_SoundShader",
			"ASH12_silencerDistShot_SoundShader"
		};
	};
	class ASH12_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"ASH12_silencerTailTrees_SoundShader",
			"ASH12_silencerTailForest_SoundShader",
			"ASH12_silencerTailMeadows_SoundShader",
			"ASH12_silencerTailHouses_SoundShader"
		};
	};
	class ASH12_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"ASH12_silencerTailInterior_SoundShader"
		};
	};
};
class CfgSoundShaders 
{
	class tailInteriorRifle_SoundShader;
	class tailTreesRifle_SoundShader;
	class tailMeadowsRifle_SoundShader;
	class tailHousesRifle_SoundShader;
	class tailForestRifle_SoundShader;
	class tailDistantRifle_SoundShader;
	class base_Closure_SoundShader;
	class distShotRifle_SoundShader;
	class midShotRifle_SoundShader;
	class closeShotRifle_SoundShader;
	class base_ProfessionalSilenced_closeShot_SoundShader;
	class base_ProfessionalSilenced_midShot_SoundShader;
	class base_ProfessionalSilenced_distShot_SoundShader;
	class base_ProfessionalSilenced_tailForest_SoundShader;
	class base_ProfessionalSilenced_tailHouses_SoundShader;
	class base_ProfessionalSilenced_tailMeadows_SoundShader;
	class base_ProfessionalSilenced_tailTrees_SoundShader;
	class base_ProfessionalSilenced_tailInterior_SoundShader;
	class ASH12_closeShot_SoundShader: closeShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ASH12\sounds\ASH12_Shot", 1},{"IMPWMOD\Weapons\Automatic\ASH12\sounds\ASH12_Shot", 1},{"IMPWMOD\Weapons\Automatic\ASH12\sounds\ASH12_Shot", 1}};
		volume=0.8;
	};
	class ASH12_midShot_SoundShader: midShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ASH12\sounds\ASH12_Shot", 1},{"IMPWMOD\Weapons\Automatic\ASH12\sounds\ASH12_Shot", 1},{"IMPWMOD\Weapons\Automatic\ASH12\sounds\ASH12_Shot", 1}};
		volume=0.5;
	};
	class ASH12_distShot_SoundShader: distShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ASH12\sounds\ASH12_Shot", 1},{"IMPWMOD\Weapons\Automatic\ASH12\sounds\ASH12_Shot", 1},{"IMPWMOD\Weapons\Automatic\ASH12\sounds\ASH12_Shot", 1}};
		volume=0.3;
	};
	class ASH12_tailDistant_SoundShader: tailDistantRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ASH12\sounds\ASH12_Shot", 1}};
		volume=0.8;
	};
	class ASH12_tailForest_SoundShader: tailForestRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ASH12\sounds\ASH12_Shot", 1}};
	};
	class ASH12_tailHouses_SoundShader: tailHousesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ASH12\sounds\ASH12_Shot", 1}};
	};
	class ASH12_tailMeadows_SoundShader: tailMeadowsRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ASH12\sounds\ASH12_Shot", 1}};
	};
	class ASH12_tailTrees_SoundShader: tailTreesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ASH12\sounds\ASH12_Shot", 1}};
	};
	class ASH12_tailInterior_SoundShader: tailInteriorRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ASH12\sounds\ASH12_Shot", 1}};
	};
	class ASH12_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ASH12\sounds\ASH12_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\ASH12\sounds\ASH12_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\ASH12\sounds\ASH12_Shot_Supp", 1}};
		volume=0.5;
	};
	class ASH12_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ASH12\sounds\ASH12_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\ASH12\sounds\ASH12_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\ASH12\sounds\ASH12_Shot_Supp", 1}};
		volume=0.3;
	};
	class ASH12_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ASH12\sounds\ASH12_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\ASH12\sounds\ASH12_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\ASH12\sounds\ASH12_Shot_Supp", 1}};
		volume=0.15;
	};
	class ASH12_silencerTailForest_SoundShader: base_ProfessionalSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ASH12\sounds\ASH12_Shot_Supp", 1}};
	};
	class ASH12_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ASH12\sounds\ASH12_Shot_Supp", 1}};
	};
	class ASH12_silencerTailMeadows_SoundShader: base_ProfessionalSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ASH12\sounds\ASH12_Shot_Supp", 1}};
	};
	class ASH12_silencerTailTrees_SoundShader: base_ProfessionalSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ASH12\sounds\ASH12_Shot_Supp", 1}};
	};
	class ASH12_silencerTailInterior_SoundShader: base_ProfessionalSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ASH12\sounds\ASH12_Shot_Supp", 1}};
	};
};