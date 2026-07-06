class CfgPatches
{
	class IMP_Weapons_M82A1
	{
		units[] = {};
		weapons[] = {};
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
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class IMP_M82A1_Base: Rifle_Base
	{
		scope = 0;
		model = "IMPWMOD\Weapons\Sniper\M82A1\models\M82A1.p3d";
		attachments[] = {"weaponOpticsHunting", "HandlesM4"};
		weight = 13500;
		absorbency = 0.1;
		repairableWithKits[] = {1};
		repairCosts[] = {10};
		PPDOFProperties[]={1,0.5,50,180,4,10};
		initSpeedMultiplier = 1;
		chamberedRound="";
		chamberSize=1;
		chamberableFrom[] = {"IMP_Ammo_127x99"};
		magazines[] = {"IMP_Mag_M82A1_10Rnd"};		
		ejectType = 1;
		WeaponLength=1;
		itemSize[] = {10, 2};
		barrelArmor=1.6;		
		recoilModifier[]={0.5,0.5,0.5};
		swayModifier[]={0,0,0};
		magazineSwitchTime=0.25;
		hiddenSelections[] = {"camoflage"};
		simpleHiddenSelections[]=
		{
			"hide_barrel", "HandlesM4"
		};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]= {"M82A1_Shot_SoundSet","M82A1_Tail_SoundSet","M82A1_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"M82A1_silencerHomeMade_SoundSet","M82A1_silencerHomeMadeTail_SoundSet","M82A1_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.550;
			dispersion=0;
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
					overrideParticle = "weapon_shot_cz527_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05,0,0};
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
		class OpticsInfo : OpticsInfoRifle {
			memoryPointCamera="eye";
			modelOptics="-";
			distanceZoomMin=200;
			distanceZoomMax=200;
			discreteDistance[]={200};
			discreteDistanceInitIndex=0;
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
					hitpoints = 130000000;
					healthLevels[] = 
					{
						{1.0,{"IMPWMOD\Weapons\Sniper\M82A1\data\M82A1.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\M82A1\data\M82A1.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\M82A1\data\M82A1_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\M82A1\data\M82A1_damage.rvmat"}},
						{0.0,{"IMPWMOD\Weapons\Sniper\M82A1\data\M82A1_destruct.rvmat"}}
					};
				};
			};
		};	
	};	
	class IMP_M82A1: IMP_M82A1_Base
	{
		scope = 2;
		displayName = "Barret M82A1";
		descriptionShort = "Оружие использует калибр 12.7x99 | The weapon uses a 12.7x99 caliber.";
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Sniper\M82A1\data\M82A1_co.paa"};		
	};	
};
class cfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_M82A1_10Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "$STR_IMP_M82a13";
		descriptionShort = "$STR_IMP_M82a12";
		model = "IMPWMOD\Weapons\Sniper\M82A1\models\IMP_M82A1_Mag.p3d";
		weight = 350;
		itemSize[] = {2,2};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		count = 10;
		ammo = "IMP_Bullet_127x99";
		ammoItems[] = {"IMP_Ammo_127x99"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10000000;
					healthLevels[] = 
					{
						{1.0,{"IMPWMOD\Weapons\Sniper\M82A1\data\M82A1_Mag.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\M82A1\data\M82A1_Mag.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\M82A1\data\M82A1_Mag_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\M82A1\data\M82A1_Mag_damage.rvmat"}},
						{0.0,{"IMPWMOD\Weapons\Sniper\M82A1\data\M82A1_Mag_destruct.rvmat"}}
					};
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
	class M82A1_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"M82A1_closeShot_SoundShader",
			"M82A1_midShot_SoundShader",
			"M82A1_distShot_SoundShader"
		};
	};
	class M82A1_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M82A1_tailDistant_SoundShader",
			"M82A1_tailTrees_SoundShader",
			"M82A1_tailForest_SoundShader",
			"M82A1_tailMeadows_SoundShader",
			"M82A1_tailHouses_SoundShader"
		};
	};
	class M82A1_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M82A1_tailInterior_SoundShader"
		};
	};
	class M82A1_silencerHomeMade_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[]=
		{
			"M82A1_silencerHomeMadeCloseShot_SoundShader",
			"M82A1_silencerHomeMadeMidShot_SoundShader",
			"M82A1_silencerHomeMadeDistShot_SoundShader"
		};
	};
	class M82A1_silencerHomeMadeTail_SoundSet: Rifle_silencerHomemadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M82A1_silencerHomeMadeTailTrees_SoundShader",
			"M82A1_silencerHomeMadeTailForest_SoundShader",
			"M82A1_silencerHomeMadeTailMeadows_SoundShader",
			"M82A1_silencerHomeMadeTailHouses_SoundShader"
		};
	};
	class M82A1_silencerInteriorHomeMadeTail_SoundSet: Rifle_silencerInteriorHomeMadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M82A1_silencerHomeMadeTailInterior_SoundShader"
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
	class M82A1_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M82A1\sounds\M82A1_Shot", 1}, {"IMPWMOD\Weapons\Sniper\M82A1\sounds\M82A1_Shot", 1}, {"IMPWMOD\Weapons\Sniper\M82A1\sounds\M82A1_Shot", 1}};
		volume=1.5;
	};
	class M82A1_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M82A1\sounds\M82A1_Shot", 1}, {"IMPWMOD\Weapons\Sniper\M82A1\sounds\M82A1_Shot", 1}, {"IMPWMOD\Weapons\Sniper\M82A1\sounds\M82A1_Shot", 1}};
		volume=1.2;
	};
	class M82A1_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M82A1\sounds\M82A1_Shot", 1}, {"IMPWMOD\Weapons\Sniper\M82A1\sounds\M82A1_Shot", 1}, {"IMPWMOD\Weapons\Sniper\M82A1\sounds\M82A1_Shot", 1}};
		volume=0.7;
	};
	class M82A1_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M82A1\sounds\M82A1_Shot", 1}};
		volume=1.5;
	};
	class M82A1_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M82A1\sounds\M82A1_Shot", 1}};
	};
	class M82A1_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M82A1\sounds\M82A1_Shot", 1}};
	};
	class M82A1_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M82A1\sounds\M82A1_Shot", 1}};
	};
	class M82A1_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M82A1\sounds\M82A1_Shot", 1}};
	};
	class M82A1_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M82A1\sounds\M82A1_Shot", 1}};
	};
	class M82A1_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M82A1\sounds\M82A1_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\M82A1\sounds\M82A1_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\M82A1\sounds\M82A1_Shot_Supp", 1}};
		volume=1.0;
	};
	class M82A1_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M82A1\sounds\M82A1_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\M82A1\sounds\M82A1_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\M82A1\sounds\M82A1_Shot_Supp", 1}};
		volume=0.8;
	};
	class M82A1_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M82A1\sounds\M82A1_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\M82A1\sounds\M82A1_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\M82A1\sounds\M82A1_Shot_Supp", 1}};
		volume=0.5;
	};
	class M82A1_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M82A1\sounds\M82A1_Shot_Supp", 1}};
	};
	class M82A1_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M82A1\sounds\M82A1_Shot_Supp", 1}};
	};
	class M82A1_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M82A1\sounds\M82A1_Shot_Supp", 1}};
	};
	class M82A1_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M82A1\sounds\M82A1_Shot_Supp", 1}};
	};
	class M82A1_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M82A1\sounds\M82A1_Shot_Supp", 1}};
	};
};