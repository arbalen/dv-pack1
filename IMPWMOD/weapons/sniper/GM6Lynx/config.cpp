class CfgPatches
{
	class IMP_W_GM6Lynx
	{
		units[]={};
		weapons[]=
		{
			"IMP_W_GM6Lynx"
		};
		magazines[]=
		{
			"IMP_Mag_GM6Lynx_5Rnd"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",
			"DZ_Sounds_Effects",
			"DZ_Weapons_Magazines"
		};
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
	class IMP_W_GM6Lynx_Base: Rifle_Base
	{
		scope = 0;
		weight = 8000;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {};
		initSpeedMultiplier = 1.01;
		WeaponLength = 1;
		barrelArmor = 5.0;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"IMP_Ammo_127x99"};
		magazines[] = {"IMP_Mag_GM6Lynx_5Rnd"};
		magazineSwitchTime = 0.45;
		ejectType = 1;
		recoilModifier[]={0.5,0.5,0.5};
		swayModifier[]={0,0,0};
		modes[] = {"SemiAuto"};
		simpleHiddenSelections[] = {};
		hiddenSelections[] = {"camoflage"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]= {"M82A1_Shot_SoundSet","M82A1_Tail_SoundSet","M82A1_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"GM6Lynx_silencerHomeMade_SoundSet","GM6Lynx_silencerHomeMadeTail_SoundSet","GM6Lynx_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.35;
			recoil = "recoil_Saiga12";
			recoilProne = "recoil_Saiga12_prone";
			dispersion = 0;
			magazineSlot = "magazine";
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
					overrideParticle="weapon_shot_ump45_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
				};
				class ChamberSmokeBurst
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=60;
				shotsToStartOverheating=25;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.2};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.2,0.60000002};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.60000002,1};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.34999999,0,0};
					onlyWithinOverheatLimits[]={0,1};
					onlyWithinRainLimits[]={0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen=1;
					overrideParticle="smoking_barrel_small";
					overridePoint="Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
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
	};
	class IMP_W_GM6Lynx: IMP_W_GM6Lynx_Base
	{
		scope = 2;
		displayName = "GM6 Lynx";
		descriptionShort = "Оружие использует калибр 12.7x99 | The weapon uses a 12.7x99 caliber.";
		model = "IMPWMOD\Weapons\Sniper\GM6Lynx\models\GM6Lynx.p3d";
		attachments[]=
		{
			"weaponOpticsHunting",
			"weaponWrap",
			"weaponFlashlight",
			"weaponBipod"
		};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Sniper\GM6Lynx\Data\material_co.paa"};
		itemSize[] = {10, 2};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000;
					healthLevels[] = {{1.0,{"IMPWMOD\Weapons\Sniper\GM6Lynx\Data\material.rvmat"}},{0.7,{"IMPWMOD\Weapons\Sniper\GM6Lynx\Data\material.rvmat"}},{0.5,{"IMPWMOD\Weapons\Sniper\GM6Lynx\Data\material_damage.rvmat"}},{0.3,{"IMPWMOD\Weapons\Sniper\GM6Lynx\Data\material_damage.rvmat"}},{0.0,{"IMPWMOD\Weapons\Sniper\GM6Lynx\Data\material_destruct.rvmat"}}};
				};
			};
		};
	};
	class IMP_W_GM6Lynx_Tkali: IMP_W_GM6Lynx
	{
		scope = 2;
		displayName = "GM6 Lynx";
		descriptionShort = "Оружие использует калибр 12.7x99 | The weapon uses a 12.7x99 caliber.";
		model = "IMPWMOD\Weapons\Sniper\GM6Lynx\models\GM6Lynx.p3d";
		attachments[]=
		{
			"weaponOpticsHunting",
			"weaponWrap",
			"weaponFlashlight",
			"weaponBipod"
		};
		hiddenSelectionsTextures[] = {"IMPWMODPart2\Weapons\Tex\lynx_tkali.paa"};
		itemSize[] = {10, 2};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000000;
					healthLevels[] = {{1.0,{"IMPWMOD\Weapons\Sniper\GM6Lynx\Data\material.rvmat"}},{0.7,{"IMPWMOD\Weapons\Sniper\GM6Lynx\Data\material.rvmat"}},{0.5,{"IMPWMOD\Weapons\Sniper\GM6Lynx\Data\material_damage.rvmat"}},{0.3,{"IMPWMOD\Weapons\Sniper\GM6Lynx\Data\material_damage.rvmat"}},{0.0,{"IMPWMOD\Weapons\Sniper\GM6Lynx\Data\material_destruct.rvmat"}}};
				};
			};
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_GM6Lynx_5Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "$STR_IMP_gm6mag";
		descriptionShort = "$STR_IMP_descr12799gm6";
		model = "IMPWMOD\Weapons\Sniper\GM6Lynx\models\Mag_GM6Lynx_5Rnd.p3d";
		weight = 250;
		itemSize[] = {2,2};
		count = 7;
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		ammo = "IMP_Bullet_127x99";
		ammoItems[] = {"IMP_Ammo_127x99"};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10000000;
					healthLevels[] = {{1.0,{"IMPWMOD\Weapons\Sniper\GM6Lynx\Data\magazine.rvmat"}},{0.7,{"IMPWMOD\Weapons\Sniper\GM6Lynx\Data\magazine.rvmat"}},{0.5,{"IMPWMOD\Weapons\Sniper\GM6Lynx\Data\magazine_damage.rvmat"}},{0.3,{"IMPWMOD\Weapons\Sniper\GM6Lynx\Data\magazine_damage.rvmat"}},{0.0,{"IMPWMOD\Weapons\Sniper\GM6Lynx\Data\magazine_destruct.rvmat"}}};
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
class CfgSoundSets {
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class Rifle_silencerHomemadeTail_Base_SoundSet;
	class Rifle_silencerInteriorHomeMadeTail_Base_SoundSet;
	class GM6Lynx_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"GM6Lynx_closeShot_SoundShader",
			"GM6Lynx_midShot_SoundShader",
			"GM6Lynx_distShot_SoundShader"
		};
	};
	class GM6Lynx_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"GM6Lynx_tailDistant_SoundShader",
			"GM6Lynx_tailTrees_SoundShader",
			"GM6Lynx_tailForest_SoundShader",
			"GM6Lynx_tailMeadows_SoundShader",
			"GM6Lynx_tailHouses_SoundShader"
		};
	};
	class GM6Lynx_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"GM6Lynx_tailInterior_SoundShader"
		};
	};
	class GM6Lynx_silencerHomeMade_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[]=
		{
			"GM6Lynx_silencerHomeMadeCloseShot_SoundShader",
			"GM6Lynx_silencerHomeMadeMidShot_SoundShader",
			"GM6Lynx_silencerHomeMadeDistShot_SoundShader"
		};
	};
	class GM6Lynx_silencerHomeMadeTail_SoundSet: Rifle_silencerHomemadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"GM6Lynx_silencerHomeMadeTailTrees_SoundShader",
			"GM6Lynx_silencerHomeMadeTailForest_SoundShader",
			"GM6Lynx_silencerHomeMadeTailMeadows_SoundShader",
			"GM6Lynx_silencerHomeMadeTailHouses_SoundShader"
		};
	};
	class GM6Lynx_silencerInteriorHomeMadeTail_SoundSet: Rifle_silencerInteriorHomeMadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"GM6Lynx_silencerHomeMadeTailInterior_SoundShader"
		};
	};
};
class CfgSoundShaders {
	class baseCharacter_SoundShader;
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	class base_tailDistant_SoundShader;
	class base_tailForest_SoundShader;
	class base_tailHouses_SoundShader;
	class base_tailMeadows_SoundShader;
	class base_tailTrees_SoundShader;
	class base_tailInterior_SoundShader;
	class base_HomeSilenced_closeShot_SoundShader;
	class base_HomeSilenced_midShot_SoundShader;
	class base_HomeSilenced_distShot_SoundShader;
	class base_HomeSilenced_tailForest_SoundShader;
	class base_HomeSilenced_tailHouses_SoundShader;
	class base_HomeSilenced_tailMeadows_SoundShader;
	class base_HomeSilenced_tailTrees_SoundShader;
	class base_HomeSilenced_tailInterior_SoundShader;
	class GM6Lynx_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\GM6Lynx\sounds\GM6LYNX_close", 1}, {"IMPWMOD\Weapons\Sniper\GM6Lynx\sounds\GM6LYNX_close", 1}, {"IMPWMOD\Weapons\Sniper\GM6Lynx\sounds\GM6LYNX_close", 1}};
		volume=1.5;
	};
	class GM6Lynx_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\GM6Lynx\sounds\GM6LYNX_mid", 1}, {"IMPWMOD\Weapons\Sniper\GM6Lynx\sounds\GM6LYNX_mid", 1}, {"IMPWMOD\Weapons\Sniper\GM6Lynx\sounds\GM6LYNX_mid", 1}};
		volume=1.2;
	};
	class GM6Lynx_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\GM6Lynx\sounds\GM6LYNX_far", 1}, {"IMPWMOD\Weapons\Sniper\GM6Lynx\sounds\GM6LYNX_far", 1}, {"IMPWMOD\Weapons\Sniper\GM6Lynx\sounds\GM6LYNX_far", 1}};
		volume=0.7;
	};
	class GM6Lynx_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\GM6Lynx\sounds\GM6LYNX_far", 1}};
		volume=1.5;
	};
	class GM6Lynx_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\GM6Lynx\sounds\GM6LYNX_far", 1}};
	};
	class GM6Lynx_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\GM6Lynx\sounds\GM6LYNX_far", 1}};
	};
	class GM6Lynx_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\GM6Lynx\sounds\GM6LYNX_far", 1}};
	};
	class GM6Lynx_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\GM6Lynx\sounds\GM6LYNX_far", 1}};
	};
	class GM6Lynx_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\GM6Lynx\sounds\GM6LYNX_far", 1}};
	};
	class GM6Lynx_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\GM6Lynx\sounds\GM6LYNX_Sil_close", 1}, {"IMPWMOD\Weapons\Sniper\GM6Lynx\sounds\GM6LYNX_Sil_close", 1}, {"IMPWMOD\Weapons\Sniper\GM6Lynx\sounds\GM6LYNX_Sil_close", 1}};
		volume=1.0;
	};
	class GM6Lynx_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\GM6Lynx\sounds\GM6LYNX_Sil_mid", 1}, {"IMPWMOD\Weapons\Sniper\GM6Lynx\sounds\GM6LYNX_Sil_mid", 1}, {"IMPWMOD\Weapons\Sniper\GM6Lynx\sounds\GM6LYNX_Sil_mid", 1}};
		volume=0.8;
	};
	class GM6Lynx_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\GM6Lynx\sounds\GM6LYNX_Sil_far", 1}, {"IMPWMOD\Weapons\Sniper\GM6Lynx\sounds\GM6LYNX_Sil_far", 1}, {"IMPWMOD\Weapons\Sniper\GM6Lynx\sounds\GM6LYNX_Sil_far", 1}};
		volume=0.5;
	};
	class GM6Lynx_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\GM6Lynx\sounds\GM6LYNX_Sil_far", 1}};
	};
	class GM6Lynx_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\GM6Lynx\sounds\GM6LYNX_Sil_far", 1}};
	};
	class GM6Lynx_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\GM6Lynx\sounds\GM6LYNX_Sil_far", 1}};
	};
	class GM6Lynx_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\GM6Lynx\sounds\GM6LYNX_Sil_far", 1}};
	};
	class GM6Lynx_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\GM6Lynx\sounds\GM6LYNX_Sil_far", 1}};
	};
};