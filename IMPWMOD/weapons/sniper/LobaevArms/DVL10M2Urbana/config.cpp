class CfgPatches
{
	class IMP_Weapons_DVL2
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

    class IMP_DVL10M2_Urbana_Base : BoltActionRifle_ExternalMagazine_Base {
		scope = 0;
		displayName = "$STR_IMP_dvl10m2urbana";
		descriptionShort = "Оружие использует калибр 338lm | The weapon uses a 338lm caliber.";
		model = "IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\models\DVL10M2Urbana.p3d";
		attachments[] = {"weaponWrap","weaponOpticsHunting", "Suppressor_308", "grip1", "HandlesM4"};
		weight = 5200;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {30.0, 50.0};
		PPDOFProperties[] = {1, 0.5, 50, 180, 4, 10};
		initSpeedMultiplier = 1;
		WeaponLength=1;
		chamberedRound = "";
		chamberSize = 1;
        chamberableFrom[] = {"IMP_Ammo_338LM"};
		magazines[] = {"IMP_Mag_DVL10M2_10Rnd"};
		ejectType = 1;
		itemSize[] = {10, 2};
		barrelArmor = 4.0;
		recoilModifier[]={0.25,0.25,0.25};
		swayModifier[]={0,0,0};
		simpleHiddenSelections[] = {"HandlesM4"};
		modes[] = {"Single"};
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5"
		};

		class Single: Mode_SemiAuto
		{
			soundSetShot[]= {"DVL10M2Urbana_Shot_SoundSet","DVL10M2Urbana_Tail_SoundSet","DVL10M2Urbana_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"DVL10M2Urbana_silencerHomeMade_SoundSet","DVL10M2Urbana_silencerHomeMadeTail_SoundSet","DVL10M2Urbana_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.51;
			recoil = "recoil_Winchester";
			recoilProne = "recoil_Winchester_prone";
			dispersion = 0;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 20.0;
			type = "shot";
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000;
					healthLevels[] = 
					{
						{1.0,{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_6.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_2.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_5.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_4.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_7.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_6.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_2.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_5.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_4.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_7.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_6_damage.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_2_damage.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_5_damage.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_4_damage.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_7_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_6_damage.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_2_damage.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_5_damage.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_4_damage.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_7_damage.rvmat"}},
						{0.0,{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_6_destruct.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_2_destruct.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_5_destruct.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_4_destruct.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_7_destruct.rvmat"}}
					};
				};
			};
		}; 
    };

    class IMP_DVL10M2_Urbana : IMP_DVL10M2_Urbana_Base {
        scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_1_ca.paa","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_2_ca.paa","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_3_ca.paa","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_4_ca.paa"};
		hiddenSelectionsMaterials[] = {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_1.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_2.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_3.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_4.rvmat"};	       
    };
    class IMP_DVL10M2_Urbana_Green : IMP_DVL10M2_Urbana_Base {
        scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_1_green_ca.paa","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_2_green_ca.paa","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_3_green_ca.paa","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_4_green_ca.paa"};
		hiddenSelectionsMaterials[] = {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_1.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_2.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_3.rvmat","IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_4.rvmat"};	       
    };
};

class CfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_DVL10M2_10Rnd: Magazine_Base
	{
		scope=2;
		displayName="$STR_IMP_dvl10m2urbana3";
		descriptionShort="$STR_IMP_dvl10m2urbana4";
		model="IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\models\Mag_DVL10M2Urbana_10Rnd.p3d";
		weight=240;
		itemSize[]={2,2};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		count=10;
		ammo="IMP_Bullet_338LM";
		ammoItems[]={"IMP_Ammo_338LM"};
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_mag_ca.paa"};
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_mag.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000000;
					healthLevels[]=
					{
						{1,{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_mag.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_mag.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_mag_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_mag_damage.rvmat"}},
						{0,{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\data\dvl_mag_destruct.rvmat"}}
					};
				};
			};
		};
	};
};

class CfgNonAIVehicles
{
    class ProxyAttachment;
    class ProxyMag_DVL10M2Urbana_10Rnd: ProxyAttachment
    {
        scope = 2;
        inventorySlot = "magazine";
        model="IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\models\Mag_DVL10M2Urbana_10Rnd.p3d";
    };
};
class CfgSoundSets {
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class Rifle_silencerHomemadeTail_Base_SoundSet;
	class Rifle_silencerInteriorHomeMadeTail_Base_SoundSet;
	class DVL10M2Urbana_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"DVL10M2Urbana_closeShot_SoundShader",
			"DVL10M2Urbana_midShot_SoundShader",
			"DVL10M2Urbana_distShot_SoundShader"
		};
	};
	class DVL10M2Urbana_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DVL10M2Urbana_tailDistant_SoundShader",
			"DVL10M2Urbana_tailTrees_SoundShader",
			"DVL10M2Urbana_tailForest_SoundShader",
			"DVL10M2Urbana_tailMeadows_SoundShader",
			"DVL10M2Urbana_tailHouses_SoundShader"
		};
	};
	class DVL10M2Urbana_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DVL10M2Urbana_tailInterior_SoundShader"
		};
	};
	class DVL10M2Urbana_silencerHomeMade_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[]=
		{
			"DVL10M2Urbana_silencerHomeMadeCloseShot_SoundShader",
			"DVL10M2Urbana_silencerHomeMadeMidShot_SoundShader",
			"DVL10M2Urbana_silencerHomeMadeDistShot_SoundShader"
		};
	};
	class DVL10M2Urbana_silencerHomeMadeTail_SoundSet: Rifle_silencerHomemadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DVL10M2Urbana_silencerHomeMadeTailTrees_SoundShader",
			"DVL10M2Urbana_silencerHomeMadeTailForest_SoundShader",
			"DVL10M2Urbana_silencerHomeMadeTailMeadows_SoundShader",
			"DVL10M2Urbana_silencerHomeMadeTailHouses_SoundShader"
		};
	};
	class DVL10M2Urbana_silencerInteriorHomeMadeTail_SoundSet: Rifle_silencerInteriorHomeMadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DVL10M2Urbana_silencerHomeMadeTailInterior_SoundShader"
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
	class DVL10M2Urbana_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\sounds\DVL10M2Urbana_close", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\sounds\DVL10M2Urbana_close", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\sounds\DVL10M2Urbana_close", 1}};
		volume=1.1;
	};
	class DVL10M2Urbana_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\sounds\DVL10M2Urbana_mid", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\sounds\DVL10M2Urbana_mid", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\sounds\DVL10M2Urbana_mid", 1}};
		volume=0.9;
	};
	class DVL10M2Urbana_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\sounds\DVL10M2Urbana_dist", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\sounds\DVL10M2Urbana_dist", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\sounds\DVL10M2Urbana_dist", 1}};
		volume=0.7;
	};
	class DVL10M2Urbana_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\sounds\DVL10M2Urbana_dist", 1}};
		volume=1.1;
	};
	class DVL10M2Urbana_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\sounds\DVL10M2Urbana_dist", 1}};
	};
	class DVL10M2Urbana_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\sounds\DVL10M2Urbana_dist", 1}};
	};
	class DVL10M2Urbana_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\sounds\DVL10M2Urbana_dist", 1}};
	};
	class DVL10M2Urbana_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\sounds\DVL10M2Urbana_dist", 1}};
	};
	class DVL10M2Urbana_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\sounds\DVL10M2Urbana_dist", 1}};
	};
	class DVL10M2Urbana_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\sounds\DVL10M2Urbana_supp", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\sounds\DVL10M2Urbana_supp", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\sounds\DVL10M2Urbana_supp", 1}};
		volume=0.8;
	};
	class DVL10M2Urbana_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\sounds\DVL10M2Urbana_supp", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\sounds\DVL10M2Urbana_supp", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\sounds\DVL10M2Urbana_supp", 1}};
		volume=0.6;
	};
	class DVL10M2Urbana_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\sounds\DVL10M2Urbana_supp_close", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\sounds\DVL10M2Urbana_supp_close", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\sounds\DVL10M2Urbana_supp_close", 1}};
		volume=0.5;
	};
	class DVL10M2Urbana_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\sounds\DVL10M2Urbana_supp_close", 1}};
	};
	class DVL10M2Urbana_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\sounds\DVL10M2Urbana_supp_close", 1}};
	};
	class DVL10M2Urbana_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\sounds\DVL10M2Urbana_supp_close", 1}};
	};
	class DVL10M2Urbana_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\sounds\DVL10M2Urbana_supp_close", 1}};
	};
	class DVL10M2Urbana_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DVL10M2Urbana\sounds\DVL10M2Urbana_supp_close", 1}};
	};
};