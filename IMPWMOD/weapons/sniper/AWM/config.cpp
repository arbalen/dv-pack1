class CfgPatches
{
	class IMP_Weapons_AWM
	{
		units[]={};
		weapons[]={};
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
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class BoltActionRifle_ExternalMagazine_Base;
	class IMP_AWM_Base : BoltActionRifle_ExternalMagazine_Base 
	{
		scope = 0;
		displayName = "AWM";
		descriptionShort = "$STR_IMP_awmdescr";
		model = "IMPWMOD\Weapons\Sniper\AWM\models\IMP_AWM.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsHunting",
			"Suppressor_338"
		};
		weight = 6100;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {10};
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		initSpeedMultiplier = 1;
		WeaponLength=1.228;
		barrelArmor = 900;
		chamberedRound = "";
		chamberSize = 1;
		chamberableFrom[] = {"IMP_Ammo_338LM"};
		magazines[]={"IMP_Mag_AWM_5Rnd"};
		ejectType = 1;
		itemSize[] = {10, 2};
		recoilModifier[]={0.25,0.25,0.25};
		swayModifier[]={0,0,0};
		simpleHiddenSelections[]={"hide_barrel"};
		hiddenSelections[]={"camoflage"};
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\AWM\data\AWM2.rvmat"};
		modes[] = {"Single"};
		
		class Single : Mode_SemiAuto {
			soundSetShot[]= {"AWM_Shot_SoundSet","AWM_Tail_SoundSet","AWM_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"AWM_silencerHomeMade_SoundSet","AWM_silencerHomeMadeTail_SoundSet","AWM_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=1.8;
			dispersion=0;
			magazineSlot = "magazine";
		};
		
		class Particles {
			class OnFire {
				class SmokeCloud {
					overrideParticle = "weapon_shot_winded_smoke";
				};
				
				class MuzzleFlash {
					overrideParticle = "weapon_shot_cz527_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05, 0, 0};
				};
			};
			
			class OnOverheating {
				shotsToStartOverheating = 1;
				maxOverheatingValue = 4;
				overheatingDecayInterval = 3;
				
				class BarrelSmoke {
					overrideParticle = "smoking_barrel_small";
				};
			};
			
			class OnBulletCasingEject {
				class ChamberSmokeRaise {
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
		};
		
		class OpticsInfo : OpticsInfoRifle 
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10000000;
					healthLevels[]=
					{		
						{1,{"IMPWMOD\Weapons\Sniper\AWM\data\awm2.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\AWM\data\awm2.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\AWM\data\awm2_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\AWM\data\awm2_damage.rvmat"}},
						{0,{"IMPWMOD\Weapons\Sniper\AWM\data\awm2_destruct.rvmat"}}
					};
				};
			};
		};
	};
	
	class IMP_AWM : IMP_AWM_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\AWM\data\awm2_co.paa"};
	};
	class IMP_AWM_Black : IMP_AWM_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\AWM\data\awm2_black_co.paa"};
	};
};

class CfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_AWM_5Rnd: Magazine_Base
	{
		scope=2;
		displayName="$STR_IMP_AWMMag";
		descriptionShort="$STR_IMP_AWMMagd";
		model="IMPWMOD\Weapons\Sniper\AWM\models\IMP_Mag_AWM_5_Rnd.p3d";
		weight=90;
		itemSize[]={1,2};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		count=5;
		ammo="IMP_Bullet_338LM";
		ammoItems[]={"IMP_Ammo_338LM"};
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\AWM\data\awm2_co.paa"};
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\AWM\data\awm2.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000000;
					healthLevels[]=
					{
						{1,{"IMPWMOD\Weapons\Sniper\AWM\data\awm2.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\AWM\data\awm2.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\AWM\data\awm2_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\AWM\data\awm2_damage.rvmat"}},
						{0,{"IMPWMOD\Weapons\Sniper\AWM\data\awm2_destruct.rvmat"}}
					};
				};
			};
		};
	};
};

class CfgNonAIVehicles
{
    class ProxyAttachment;
    class ProxyIMP_Mag_AWM_5_Rnd: ProxyAttachment
    {
        scope = 2;
        inventorySlot = "magazine";
        model="IMPWMOD\Weapons\Sniper\AWM\models\IMP_Mag_AWM_5_Rnd.p3d";
    };
};
class CfgSoundSets {
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class Rifle_silencerHomemadeTail_Base_SoundSet;
	class Rifle_silencerInteriorHomeMadeTail_Base_SoundSet;
	class AWM_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"AWM_closeShot_SoundShader",
			"AWM_midShot_SoundShader",
			"AWM_distShot_SoundShader"
		};
	};
	class AWM_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AWM_tailDistant_SoundShader",
			"AWM_tailTrees_SoundShader",
			"AWM_tailForest_SoundShader",
			"AWM_tailMeadows_SoundShader",
			"AWM_tailHouses_SoundShader"
		};
	};
	class AWM_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AWM_tailInterior_SoundShader"
		};
	};
	class AWM_silencerHomeMade_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[]=
		{
			"AWM_silencerHomeMadeCloseShot_SoundShader",
			"AWM_silencerHomeMadeMidShot_SoundShader",
			"AWM_silencerHomeMadeDistShot_SoundShader"
		};
	};
	class AWM_silencerHomeMadeTail_SoundSet: Rifle_silencerHomemadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AWM_silencerHomeMadeTailTrees_SoundShader",
			"AWM_silencerHomeMadeTailForest_SoundShader",
			"AWM_silencerHomeMadeTailMeadows_SoundShader",
			"AWM_silencerHomeMadeTailHouses_SoundShader"
		};
	};
	class AWM_silencerInteriorHomeMadeTail_SoundSet: Rifle_silencerInteriorHomeMadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AWM_silencerHomeMadeTailInterior_SoundShader"
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
	class AWM_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AWM\sounds\AWM_Shot", 1}, {"IMPWMOD\Weapons\Sniper\AWM\sounds\AWM_Shot", 1}, {"IMPWMOD\Weapons\Sniper\AWM\sounds\AWM_Shot", 1}};
		volume=1.5;
	};
	class AWM_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AWM\sounds\AWM_Shot", 1}, {"IMPWMOD\Weapons\Sniper\AWM\sounds\AWM_Shot", 1}, {"IMPWMOD\Weapons\Sniper\AWM\sounds\AWM_Shot", 1}};
		volume=1.2;
	};
	class AWM_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AWM\sounds\AWM_Shot", 1}, {"IMPWMOD\Weapons\Sniper\AWM\sounds\AWM_Shot", 1}, {"IMPWMOD\Weapons\Sniper\AWM\sounds\AWM_Shot", 1}};
		volume=0.7;
	};
	class AWM_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AWM\sounds\AWM_Shot", 1}};
		volume=1.5;
	};
	class AWM_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AWM\sounds\AWM_Shot", 1}};
	};
	class AWM_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AWM\sounds\AWM_Shot", 1}};
	};
	class AWM_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AWM\sounds\AWM_Shot", 1}};
	};
	class AWM_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AWM\sounds\AWM_Shot", 1}};
	};
	class AWM_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AWM\sounds\AWM_Shot", 1}};
	};
	class AWM_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AWM\sounds\AWM_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\AWM\sounds\AWM_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\AWM\sounds\AWM_Shot_Supp", 1}};
		volume=1.0;
	};
	class AWM_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AWM\sounds\AWM_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\AWM\sounds\AWM_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\AWM\sounds\AWM_Shot_Supp", 1}};
		volume=0.8;
	};
	class AWM_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AWM\sounds\AWM_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\AWM\sounds\AWM_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\AWM\sounds\AWM_Shot_Supp", 1}};
		volume=0.5;
	};
	class AWM_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AWM\sounds\AWM_Shot_Supp", 1}};
	};
	class AWM_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AWM\sounds\AWM_Shot_Supp", 1}};
	};
	class AWM_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AWM\sounds\AWM_Shot_Supp", 1}};
	};
	class AWM_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AWM\sounds\AWM_Shot_Supp", 1}};
	};
	class AWM_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AWM\sounds\AWM_Shot_Supp", 1}};
	};
};