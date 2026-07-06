class CfgPatches {
	class IMP_Weapons_Kivaari {
		units[] = {"IMP_Kivaari"};
		weapons[] = {"IMP_Kivaari"};
		requiredVersion = 0.1;
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
class Mode_Burst;
class Mode_FullAuto;

class cfgWeapons {
	class OpticsInfoRifle;
	class Rifle_Base;
	
	class IMP_Kivaari_Base : Rifle_Base {
		scope = 0;
		displayName = "Kivaari";
		descriptionShort = "Оружие использует калибр 338lm | The weapon uses a 338lm caliber.";
		weight = 5824;
		attachments[] = 
		{
			"weaponOpticsHunting", 
			"Suppressor_338",
			"weaponWrap", 
			"weaponBipod", 
			"HandlesM4"
		};
		absorbency = 0.1;
		repairableWithKits[] = {5, 1};
		repairCosts[] = {30, 25};
		initSpeedMultiplier = 1;
		WeaponLength=1;
		discreteDistanceInitIndex = 0;
		modelOptics = "-";
		recoilModifier[]={0.25,0.25,0.25};
		swayModifier[]={0,0,0};
		PPDOFProperties[]={1,0.5,50,180,4,10};
		optics = 1;
		opticsFlare = 0;
		simpleHiddenSelections[] = {"hide_barrel", "irons_up", "irons_down", "HandlesM4"};
		ironsightsExcludingOptics[] = {"BUISOptic", "M68Optic", "M4_T3NRDSOptic", "ReflexOptic", "M4_CarryHandleOptic", "M4_T3NRDSOptic", "ReflexOptic", "ACOGOptic", "HuntingOptic", "LongrangeOptic", "sniperOptic"};
		value = 0;
		chamberedRound = "";
		chamberSize = 1;
		chamberableFrom[] = {"IMP_Ammo_338LM"};
		magazines[] = {"IMP_Mag_Kivaari_5Rnd"};
		magazineSwitchTime = 0.25;
		barrelArmor = 3000;
		ejectType = 1;
		hiddenSelections[] = {"camoflage"};
		modes[] = {"SemiAuto"};
		
		class SemiAuto : Mode_SemiAuto 
		{
			soundSetShot[]= {"Kivaari_Shot_SoundSet","Kivaari_Tail_SoundSet","Kivaari_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"Kivaari_silencerHomeMade_SoundSet","Kivaari_silencerHomeMadeTail_SoundSet","Kivaari_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.250;
			recoil = "recoil_sks";
			recoilProne = "recoil_sks_prone";
			dispersion = 0;
			magazineSlot = "magazine";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					ignoreIfSuppressed=1;
					overrideParticle="weapon_shot_mosin9130_01";
				};
				class SmokeCloud1
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class MuzzleFlash2
				{
					overrideParticle="weapon_shot_m4a1_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
				};
				class MuzzleFlashStar
				{
					overrideParticle="weapon_shot_Flame_3D_4star";
					overridePoint="StarFlash";
					ignoreIfSuppressed=1;
				};
				class GasPistonBurstR
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="GasPiston";
					overrideDirectionVector[]={0,0,0};
				};
				class GasPistonBurstL
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="GasPiston";
					overrideDirectionVector[]={180,0,0};
				};
				class GasPistonSmokeRaiseR
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="GasPiston";
					overrideDirectionVector[]={0,0,0};
				};
				class GasPistonSmokeRaiseL
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="GasPiston";
					overrideDirectionVector[]={180,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=5;
				maxOverheatingValue=20;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					overridePoint="GasPiston";
					positionOffset[]={0.050000001,-0.02,0};
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.2};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					overridePoint="GasPiston";
					positionOffset[]={0.12,-0.02,0};
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.2,0.60000002};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					overridePoint="GasPiston";
					positionOffset[]={0.20999999,-0.02,0};
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.60000002,1};
					onlyWithinRainLimits[]={0,0.2};
				};
				class Steam
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.40000001,0.02,0};
					onlyWithinOverheatLimits[]={0,0.5};
					onlyWithinRainLimits[]={0.2,1};
				};
				class Steam2
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.44999999,0.02,0};
					onlyWithinOverheatLimits[]={0.5,1};
					onlyWithinRainLimits[]={0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen=1;
					overrideParticle="smoking_barrel_small";
					overridePoint="Nabojnicestart";
					onlyWithinOverheatLimits[]={0,1};
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
		class NoiseShoot
		{
			strength=100;
			type="shot";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000;
					healthLevels[]=
					{		
						{1,{"IMPWMOD\Weapons\Sniper\Kivaari\data\KIVAARINEW.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\Kivaari\data\KIVAARINEW.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\Kivaari\data\KIVAARINEW_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\Kivaari\data\KIVAARINEW_damage.rvmat"}},
						{0,{"IMPWMOD\Weapons\Sniper\Kivaari\data\KIVAARINEW_destruct.rvmat"}}
					};
				};
			};
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
		class AnimEvents
		{
			class SoundWeapon
			{
				class walkErc_L
				{
					soundSet="Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id=1;
				};
				class walkErc_R
				{
					soundSet="Weapon_Movement_HRifle_walkErc_R_SoundSet";
					id=2;
				};
				class runErc_L
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=3;
				};
				class runErc_R
				{
					soundSet="Weapon_Movement_HRifle_runErc_R_SoundSet";
					id=4;
				};
				class sprintErc_L
				{
					soundSet="Weapon_Movement_HRifle_sprintErc_SoundSet";
					id=5;
				};
				class sprintErc_R
				{
					soundSet="Weapon_Movement_HRifle_sprintErc_SoundSet";
					id=6;
				};
				class walkCro_L
				{
					soundSet="Weapon_Movement_HRifle_walkCro_SoundSet";
					id=21;
				};
				class walkCro_R
				{
					soundSet="Weapon_Movement_HRifle_walkCro_SoundSet";
					id=22;
				};
				class runCro_L
				{
					soundSet="Weapon_Movement_HRifle_runCro_SoundSet";
					id=23;
				};
				class runCro_R
				{
					soundSet="Weapon_Movement_HRifle_runCro_SoundSet";
					id=24;
				};
				class walkProne_L
				{
					soundSet="Weapon_Movement_HRifle_walkCro_SoundSet";
					id=31;
				};
				class walkProne_R
				{
					soundSet="Weapon_Movement_HRifle_walkCro_SoundSet";
					id=32;
				};
				class runProne_L
				{
					soundSet="Weapon_Movement_HRifle_runCro_SoundSet";
					id=33;
				};
				class runProne_R
				{
					soundSet="Weapon_Movement_HRifle_runCro_SoundSet";
					id=34;
				};
				class jumpErc_L
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=35;
				};
				class jumpErc_R
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=36;
				};
				class landFootErc_L
				{
					soundSet="Weapon_Movement_HRifle_landFootErc_SoundSet";
					id=37;
				};
				class landFootErc_R
				{
					soundSet="Weapon_Movement_HRifle_landFootErc_SoundSet";
					id=38;
				};
				class walkRasErc_L
				{
					soundSet="Weapon_Movement_HRifle_walkRasErc_SoundSet";
					id=51;
				};
				class walkRasErc_R
				{
					soundSet="Weapon_Movement_HRifle_walkRasErc_SoundSet";
					id=52;
				};
				class runRasErc_L
				{
					soundSet="Weapon_Movement_HRifle_runRasErc_SoundSet";
					id=53;
				};
				class runRasErc_R
				{
					soundSet="Weapon_Movement_HRifle_runRasErc_SoundSet";
					id=54;
				};
				class HandStep_L
				{
					soundSet="Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id=61;
				};
				class HandStep_R
				{
					soundSet="Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id=62;
				};
				class HandStep_Hard_L
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=63;
				};
				class HandStep_Hard_R
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=64;
				};
				class landFeetErc
				{
					soundSet="Weapon_Movement_HRifle_landFeetErc_SoundSet";
					id=100;
				};
				class Weapon_Movement_HRifle_Walk
				{
					soundSet="Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id=101;
				};
				class Weapon_Movement_HRifle_Run
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=102;
				};
				class Weapon_Movement_HRifle_Sprint
				{
					soundSet="Weapon_Movement_HRifle_sprintErc_SoundSet";
					id=103;
				};
				class Weapon_Movement_HRifle_Land
				{
					soundSet="Weapon_Movement_HRifle_landFeetErc_SoundSet";
					id=104;
				};
				class Char_Gestures_Hand_Grab_Rifle
				{
					soundSet="Char_Gestures_Hand_Grab_FabricRifle_SoundSet";
					id=892;
				};
			};
		};
	};
	class IMP_Kivaari_Black : IMP_Kivaari_Base {
		scope = 0;
		model = "IMPWMOD\Weapons\Sniper\Kivaari\models\Kivaari.p3d";
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\Kivaari\data\Kivaari_co.paa"};
		itemSize[] = {10, 2};
	};
	
	class IMP_Kivaari_Green : IMP_Kivaari_Base {
		scope = 0;
		model = "IMPWMOD\Weapons\Sniper\Kivaari\models\Kivaari.p3d";
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\Kivaari\data\Kivaari_green_co.paa"};
		itemSize[] = {10, 2};
	};
	
	class IMP_Kivaari_Tan : IMP_Kivaari_Base {
		scope = 0;
		model = "IMPWMOD\Weapons\Sniper\Kivaari\models\Kivaari.p3d";
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\Kivaari\data\Kivaari_tan_co.paa"};
		itemSize[] = {10, 2};
	};
	class IMP_Kivaari_Silver : IMP_Kivaari_Base {
		scope = 0;
		model = "IMPWMOD\Weapons\Sniper\Kivaari\models\Kivaari.p3d";
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\Kivaari\data\Kivaari_silver_co.paa"};
		itemSize[] = {10, 2};
	};
};
	
class CfgMagazines
{
	class Magazine_Base;
	
	class IMP_Mag_Kivaari_5Rnd : Magazine_Base {
		scope = 0;
		displayName = "$STR_IMP_KivaariMag";
		descriptionShort = "$STR_IMP_3385am";
		model = "IMPWMOD\Weapons\Sniper\Kivaari\models\KivaariMag.p3d";
		weight = 90;
		itemSize[] = {1, 2};
		count = 10;
		ammo = "IMP_Bullet_338LM";
		ammoItems[] = {"IMP_Ammo_338LM"};
		tracersEvery = 0;
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 1000000;
					healthLevels[] = {{1, {"DZ\weapons\attachments\data\m4_mag.rvmat"}}, {0.7, {}}, {0.5, {"DZ\weapons\attachments\data\m4_mag_damage.rvmat"}}, {0.3, {}}, {0, {"DZ\weapons\attachments\data\m4_mag_destruct.rvmat"}}};
				};
			};
		};
		
		class AnimEvents {
			class SoundWeapon {
				class MagRifle_fill_in {
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				
				class MagRifle_fill_loop {
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				
				class MagRifle_fill_out {
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				
				class MagRifle_empty_in {
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				
				class MagRifle_empty_loop {
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				
				class MagRifle_empty_out {
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				
				class MagPistol_fill_in {
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				
				class MagPistol_fill_loop {
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				
				class MagPistol_fill_out {
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				
				class MagPistol_empty_in {
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				
				class MagPistol_empty_loop {
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				
				class MagPistol_empty_out {
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
	class Kivaari_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"Kivaari_closeShot_SoundShader",
			"Kivaari_midShot_SoundShader",
			"Kivaari_distShot_SoundShader"
		};
	};
	class Kivaari_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Kivaari_tailDistant_SoundShader",
			"Kivaari_tailTrees_SoundShader",
			"Kivaari_tailForest_SoundShader",
			"Kivaari_tailMeadows_SoundShader",
			"Kivaari_tailHouses_SoundShader"
		};
	};
	class Kivaari_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Kivaari_tailInterior_SoundShader"
		};
	};
	class Kivaari_silencerHomeMade_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[]=
		{
			"Kivaari_silencerHomeMadeCloseShot_SoundShader",
			"Kivaari_silencerHomeMadeMidShot_SoundShader",
			"Kivaari_silencerHomeMadeDistShot_SoundShader"
		};
	};
	class Kivaari_silencerHomeMadeTail_SoundSet: Rifle_silencerHomemadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Kivaari_silencerHomeMadeTailTrees_SoundShader",
			"Kivaari_silencerHomeMadeTailForest_SoundShader",
			"Kivaari_silencerHomeMadeTailMeadows_SoundShader",
			"Kivaari_silencerHomeMadeTailHouses_SoundShader"
		};
	};
	class Kivaari_silencerInteriorHomeMadeTail_SoundSet: Rifle_silencerInteriorHomeMadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Kivaari_silencerHomeMadeTailInterior_SoundShader"
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
	class Kivaari_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Kivaari\sounds\Kivaari_Shot", 1}, {"IMPWMOD\Weapons\Sniper\Kivaari\sounds\Kivaari_Shot", 1}, {"IMPWMOD\Weapons\Sniper\Kivaari\sounds\Kivaari_Shot", 1}};
		volume=1.5;
	};
	class Kivaari_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Kivaari\sounds\Kivaari_Shot", 1}, {"IMPWMOD\Weapons\Sniper\Kivaari\sounds\Kivaari_Shot", 1}, {"IMPWMOD\Weapons\Sniper\Kivaari\sounds\Kivaari_Shot", 1}};
		volume=1.2;
	};
	class Kivaari_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Kivaari\sounds\Kivaari_Shot", 1}, {"IMPWMOD\Weapons\Sniper\Kivaari\sounds\Kivaari_Shot", 1}, {"IMPWMOD\Weapons\Sniper\Kivaari\sounds\Kivaari_Shot", 1}};
		volume=0.7;
	};
	class Kivaari_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Kivaari\sounds\Kivaari_Shot", 1}};
		volume=1.5;
	};
	class Kivaari_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Kivaari\sounds\Kivaari_Shot", 1}};
	};
	class Kivaari_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Kivaari\sounds\Kivaari_Shot", 1}};
	};
	class Kivaari_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Kivaari\sounds\Kivaari_Shot", 1}};
	};
	class Kivaari_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Kivaari\sounds\Kivaari_Shot", 1}};
	};
	class Kivaari_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Kivaari\sounds\Kivaari_Shot", 1}};
	};
	class Kivaari_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Kivaari\sounds\Kivaari_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\Kivaari\sounds\Kivaari_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\Kivaari\sounds\Kivaari_Shot_Supp", 1}};
		volume=1.0;
	};
	class Kivaari_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Kivaari\sounds\Kivaari_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\Kivaari\sounds\Kivaari_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\Kivaari\sounds\Kivaari_Shot_Supp", 1}};
		volume=0.8;
	};
	class Kivaari_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Kivaari\sounds\Kivaari_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\Kivaari\sounds\Kivaari_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\Kivaari\sounds\Kivaari_Shot_Supp", 1}};
		volume=0.5;
	};
	class Kivaari_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Kivaari\sounds\Kivaari_Shot_Supp", 1}};
	};
	class Kivaari_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Kivaari\sounds\Kivaari_Shot_Supp", 1}};
	};
	class Kivaari_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Kivaari\sounds\Kivaari_Shot_Supp", 1}};
	};
	class Kivaari_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Kivaari\sounds\Kivaari_Shot_Supp", 1}};
	};
	class Kivaari_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Kivaari\sounds\Kivaari_Shot_Supp", 1}};
	};
};