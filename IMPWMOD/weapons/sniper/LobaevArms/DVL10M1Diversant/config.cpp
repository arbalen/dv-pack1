class CfgPatches
{
	class IMP_Weapons_DVL1
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
    class BoltActionRifle_ExternalMagazine_Base;
    class IMP_DVL10M1_Diversant_Base : BoltActionRifle_ExternalMagazine_Base {
		scope = 0;
		displayName = "$STR_IMP_DVL10M1Diversant";
		descriptionShort = "Оружие использует калибр 338lm | The weapon uses a 338lm caliber.";
		model = "IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\models\DVL10M1Diversant.p3d";
		attachments[] = {"weaponWrap","weaponOpticsHunting", "HandlesM4"};
		weight = 7100;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {10};
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		WeaponLength=1;
		chamberedRound = "";
		chamberSize = 1;
        hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
        chamberableFrom[] = {"IMP_Ammo_338LM"};
		magazines[] = 
		{
			"IMP_Mag_DVL10M1_10Rnd",
			"IMP_Mag_DVL10M1_Tkali_10Rnd"
		};
		simpleHiddenSelections[] = {"HandlesM4"};
		ejectType = 1;
		itemSize[] = {10, 2};
		barrelArmor = 900;
		recoilModifier[]={0.25,0.25,0.25};
		swayModifier[]={0,0,0};
		modes[] = {"Single"};

		class Single: Mode_SemiAuto
		{
			soundSetShot[]= {"Kivaari_Shot_SoundSet","Kivaari_Tail_SoundSet","Kivaari_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"Kivaari_Shot_SoundSet","Kivaari_Tail_SoundSet","Kivaari_InteriorTail_SoundSet"}};
			reloadTime = 1;
			recoil = "recoil_Winchester";
			recoilProne = "recoil_Winchester_prone";
			dispersion = 0;
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
		
		class OpticsInfo: OpticsInfoRifle
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
					hitpoints = 1000000000;
					healthLevels[] = 
					{
						{1.0,{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_1.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_2.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_3.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_4.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_1.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_2.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_3.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_4.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_1_damage.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_2_damage.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_3_damage.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_4_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_1_damage.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_2_damage.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_3_damage.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_4_damage.rvmat"}},
						{0.0,{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_1_destruct.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_2_destruct.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_3_destruct.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_4_destruct.rvmat"}}
					};
				};
			};
		}; 
    };

    class IMP_DVL10M1_Diversant : IMP_DVL10M1_Diversant_Base {
        scope = 2;
        barrelArmor=2.36;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_6_ca.paa","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_2_ca.paa","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_5_ca.paa","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_4_ca.paa","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_7_ca.paa"};
		hiddenSelectionsMaterials[] = {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_6.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_2.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_5.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_4.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_7.rvmat"};	       
    };
    class IMP_DVL10M1_Diversant_Green : IMP_DVL10M1_Diversant {
        scope = 2;
        barrelArmor=2.36;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_6_green_ca.paa","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_2_green_ca.paa","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_5_green_ca.paa","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_4_green_ca.paa","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_7_green_ca.paa"};
		hiddenSelectionsMaterials[] = {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_6.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_2.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_5.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_4.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_7.rvmat"};	       
    };
	class IMP_DVL10M1_Diversant_Tkali : IMP_DVL10M1_Diversant {
        scope = 2;
        barrelArmor=2.36;
		hiddenSelectionsTextures[] = {"IMPWMODPart2\Weapons\Tex\dvl_1_tkali_ca.paa","IMPWMODPart2\Weapons\Tex\dvl_2_tkali_ca.paa","IMPWMODPart2\Weapons\Tex\dvl_3_tkali_ca.paa","IMPWMODPart2\Weapons\Tex\dvl_4_tkali_ca.paa","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_7_green_ca.paa"};
		hiddenSelectionsMaterials[] = {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_6.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_2.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_5.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_4.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_7.rvmat"};	       
    };
};

class CfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_DVL10M1_10Rnd: Magazine_Base
	{
		scope=2;
		displayName="$STR_IMP_DVL10M1Diversant3";
		descriptionShort="$STR_IMP_DVL10M1Diversant4";
		model="IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\models\Mag_DVL10M1Diversant_10Rnd.p3d";
		weight=240;
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		itemSize[]={1,2};
		count=10;
		ammo="IMP_Bullet_338LM";
		ammoItems[]={"IMP_Ammo_338LM"};
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_mag_ca.paa"};
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_mag.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000000;
					healthLevels[]=
					{
						{1,{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_mag.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_mag.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_mag_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_mag_damage.rvmat"}},
						{0,{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\data\dvl_mag_destruct.rvmat"}}
					};
				};
			};
		};
	};
};

class CfgNonAIVehicles
{
    class ProxyAttachment;
    class ProxyMag_DVL10M1Diversant_10Rnd: ProxyAttachment
    {
        scope = 2;
        inventorySlot = "magazine";
        model="IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\models\Mag_DVL10M1Diversant_10Rnd.p3d";
    };
};
class CfgSoundSets {
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class Rifle_silencerHomemadeTail_Base_SoundSet;
	class Rifle_silencerInteriorHomeMadeTail_Base_SoundSet;
	class DVL10M1_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"DVL10M1_closeShot_SoundShader",
			"DVL10M1_midShot_SoundShader",
			"DVL10M1_distShot_SoundShader"
		};
	};
	class DVL10M1_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DVL10M1_tailDistant_SoundShader",
			"DVL10M1_tailTrees_SoundShader",
			"DVL10M1_tailForest_SoundShader",
			"DVL10M1_tailMeadows_SoundShader",
			"DVL10M1_tailHouses_SoundShader"
		};
	};
	class DVL10M1_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DVL10M1_tailInterior_SoundShader"
		};
	};
	class DVL10M1_silencerHomeMade_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[]=
		{
			"DVL10M1_silencerHomeMadeCloseShot_SoundShader",
			"DVL10M1_silencerHomeMadeMidShot_SoundShader",
			"DVL10M1_silencerHomeMadeDistShot_SoundShader"
		};
	};
	class DVL10M1_silencerHomeMadeTail_SoundSet: Rifle_silencerHomemadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DVL10M1_silencerHomeMadeTailTrees_SoundShader",
			"DVL10M1_silencerHomeMadeTailForest_SoundShader",
			"DVL10M1_silencerHomeMadeTailMeadows_SoundShader",
			"DVL10M1_silencerHomeMadeTailHouses_SoundShader"
		};
	};
	class DVL10M1_silencerInteriorHomeMadeTail_SoundSet: Rifle_silencerInteriorHomeMadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DVL10M1_silencerHomeMadeTailInterior_SoundShader"
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
	class DVL10M1_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\sounds\dvl_close_shot_proSilenced_01", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\sounds\dvl_close_shot_proSilenced_01", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\sounds\dvl_close_shot_proSilenced_01", 1}};
		volume=1.5;
	};
	class DVL10M1_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\sounds\dvl_mid_shot_proSilenced_01", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\sounds\dvl_mid_shot_proSilenced_01", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\sounds\dvl_mid_shot_proSilenced_01", 1}};
		volume=1.2;
	};
	class DVL10M1_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\sounds\dvl_close_shot_proSilenced_01", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\sounds\dvl_close_shot_proSilenced_01", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\sounds\dvl_close_shot_proSilenced_01", 1}};
		volume=0.7;
	};
	class DVL10M1_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\sounds\dvl_close_shot_proSilenced_01", 1}};
		volume=1.5;
	};
	class DVL10M1_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\sounds\dvl_close_shot_proSilenced_01", 1}};
	};
	class DVL10M1_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\sounds\dvl_close_shot_proSilenced_01", 1}};
	};
	class DVL10M1_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\sounds\dvl_close_shot_proSilenced_01", 1}};
	};
	class DVL10M1_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\sounds\dvl_close_shot_proSilenced_01", 1}};
	};
	class DVL10M1_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\sounds\dvl_close_shot_proSilenced_01", 1}};
	};
	class DVL10M1_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\sounds\dvl_close_shot_proSilenced_01", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\sounds\dvl_close_shot_proSilenced_01", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\sounds\dvl_close_shot_proSilenced_01", 1}};
		volume=1.0;
	};
	class DVL10M1_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\sounds\dvl_close_shot_proSilenced_01", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\sounds\dvl_close_shot_proSilenced_01", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\sounds\dvl_close_shot_proSilenced_01", 1}};
		volume=0.8;
	};
	class DVL10M1_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\sounds\dvl_close_shot_proSilenced_01", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\sounds\dvl_close_shot_proSilenced_01", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\sounds\dvl_close_shot_proSilenced_01", 1}};
		volume=0.5;
	};
	class DVL10M1_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\sounds\dvl_close_shot_proSilenced_01", 1}};
	};
	class DVL10M1_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\sounds\dvl_close_shot_proSilenced_01", 1}};
	};
	class DVL10M1_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\sounds\dvl_close_shot_proSilenced_01", 1}};
	};
	class DVL10M1_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\sounds\dvl_close_shot_proSilenced_01", 1}};
	};
	class DVL10M1_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M1Diversant\sounds\dvl_close_shot_proSilenced_01", 1}};
	};
};