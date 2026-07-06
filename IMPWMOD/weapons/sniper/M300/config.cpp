class CfgPatches
{
	class IMP_Weapons_M300
	{
		units[]= {}; 
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
	class IMP_M300_Base: BoltActionRifle_ExternalMagazine_Base	
	{
		scope=0;
		animName="CZ527";
		weight=3621;
		absorbency=0;
		repairableWithKits[]={5,1};
		repairCosts[]={30,25};
		modelOptics="-";
		distanceZoomMin=100;
		distanceZoomMax=100;
		PPDOFProperties[]={};
		opticsFlare=0;
		initSpeedMultiplier = 1;
		ironsightsExcludingOptics[]=
		{
			"HuntingOptic"
		};
		WeaponLength=1;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"IMP_Ammo_408"
		};
		magazines[]=
		{
			"IMP_Mag_M300_5Rnd"
		};
		magazineSwitchTime=0.38;
		barrelArmor=900;
		ejectType=0;
		recoilModifier[]={0.25,0.25,0.25};
		swayModifier[]={0,0,0};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		hiddenSelections[]=
		{
			"camoflage"
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]= {"M300_Shot_SoundSet","M300_Tail_SoundSet","M300_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"M300_silencerHomeMade_SoundSet","M300_silencerHomeMadeTail_SoundSet","M300_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=1;
			recoil="recoil_svd";
			recoilProne="recoil_svd_prone";
			dispersion=0;
			magazineSlot="magazine";
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
					overrideParticle="weapon_shot_svd_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={-0.050000001,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=1;
				maxOverheatingValue=4;
				overheatingDecayInterval=3;
				class BarrelSmoke
				{
					overrideParticle="smoking_barrel_small";
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
			memoryPointCamera="eye";
			modelOptics="-";
			distanceZoomMin=200;
			distanceZoomMax=200;
			discreteDistance[]={200};
			discreteDistanceInitIndex=0;
		};
	};
	class IMP_M300: IMP_M300_Base
	{
		scope=2;
		displayName="CheyTac M300 Praetorian";
		descriptionShort="Оружие использует калибр 408 | The weapon uses a 408 caliber.";
		model="IMPWMOD\Weapons\Sniper\M300\models\IMP_M300.p3d";
		attachments[]=
		{
			"weaponOpticsHunting",
			"Suppressor_408",
			"weaponWrap"
		};
		itemSize[] = {10, 2};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Sniper\M300\data\m300_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"IMPWMOD\Weapons\Sniper\M300\data\m300.rvmat"
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
						
						{
							1,
							
							{
								"IMPWMOD\Weapons\Sniper\M300\data\m300.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"IMPWMOD\Weapons\Sniper\M300\data\m300.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Sniper\M300\data\m300_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"IMPWMOD\Weapons\Sniper\M300\data\m300_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"IMPWMOD\Weapons\Sniper\M300\data\m300_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class IMP_M300_Tkali: IMP_M300
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"IMPWMODPart2\Weapons\Tex\m300_tkali.paa"
		};
	};
};

class CfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_M300_5Rnd: Magazine_Base
	{
		scope=2;
		displayName="$STR_IMP_M300Mag";
		descriptionShort="$STR_IMP_cap4085ammo";
		model="IMPWMOD\Weapons\Sniper\M300\models\IMP_Mag_M300_5Rnd.p3d";
		weight=90;
		itemSize[]={1,2};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		count=7;
		ammo="IMP_Bullet_408";
		ammoItems[]={"IMP_Ammo_408"};
		hiddenSelections[]={"camoflage"};
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\M300\data\m300_co.paa"};
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\M300\data\m300.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000000;
					healthLevels[]=
					{
						{1,{"IMPWMOD\Weapons\Sniper\M300\data\M300.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\M300\data\M300.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\M300\data\M300_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\M300\data\M300_damage.rvmat"}},
						{0,{"IMPWMOD\Weapons\Sniper\M300\data\M300_destruct.rvmat"}}
					};
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
	class M300_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"M300_closeShot_SoundShader",
			"M300_midShot_SoundShader",
			"M300_distShot_SoundShader"
		};
	};
	class M300_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M300_tailDistant_SoundShader",
			"M300_tailTrees_SoundShader",
			"M300_tailForest_SoundShader",
			"M300_tailMeadows_SoundShader",
			"M300_tailHouses_SoundShader"
		};
	};
	class M300_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M300_tailInterior_SoundShader"
		};
	};
	class M300_silencerHomeMade_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[]=
		{
			"M300_silencerHomeMadeCloseShot_SoundShader",
			"M300_silencerHomeMadeMidShot_SoundShader",
			"M300_silencerHomeMadeDistShot_SoundShader"
		};
	};
	class M300_silencerHomeMadeTail_SoundSet: Rifle_silencerHomemadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M300_silencerHomeMadeTailTrees_SoundShader",
			"M300_silencerHomeMadeTailForest_SoundShader",
			"M300_silencerHomeMadeTailMeadows_SoundShader",
			"M300_silencerHomeMadeTailHouses_SoundShader"
		};
	};
	class M300_silencerInteriorHomeMadeTail_SoundSet: Rifle_silencerInteriorHomeMadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M300_silencerHomeMadeTailInterior_SoundShader"
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
	class M300_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300\sounds\M300_Close", 1}, {"IMPWMOD\Weapons\Sniper\M300\sounds\M300_Close", 1}, {"IMPWMOD\Weapons\Sniper\M300\sounds\M300_Close", 1}};
		volume=1.5;
	};
	class M300_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300\sounds\M300_Mid", 1}, {"IMPWMOD\Weapons\Sniper\M300\sounds\M300_Mid", 1}, {"IMPWMOD\Weapons\Sniper\M300\sounds\M300_Mid", 1}};
		volume=1.2;
	};
	class M300_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300\sounds\M300_Dist", 1}, {"IMPWMOD\Weapons\Sniper\M300\sounds\M300_Dist", 1}, {"IMPWMOD\Weapons\Sniper\M300\sounds\M300_Dist", 1}};
		volume=0.7;
	};
	class M300_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300\sounds\M300_Dist", 1}};
		volume=1.5;
	};
	class M300_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300\sounds\M300_Dist", 1}};
	};
	class M300_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300\sounds\M300_Dist", 1}};
	};
	class M300_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300\sounds\M300_Dist", 1}};
	};
	class M300_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300\sounds\M300_Dist", 1}};
	};
	class M300_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300\sounds\M300_Dist", 1}};
	};
	class M300_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300\sounds\M300_Supp_Close", 1}, {"IMPWMOD\Weapons\Sniper\M300\sounds\M300_Supp_Close", 1}, {"IMPWMOD\Weapons\Sniper\M300\sounds\M300_Supp_Close", 1}};
		volume=1.2;
	};
	class M300_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300\sounds\M300_Supp_Close", 1}, {"IMPWMOD\Weapons\Sniper\M300\sounds\M300_Supp_Close", 1}, {"IMPWMOD\Weapons\Sniper\M300\sounds\M300_Supp_Close", 1}};
		volume=1.0;
	};
	class M300_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300\sounds\M300_Supp_middist", 1}, {"IMPWMOD\Weapons\Sniper\M300\sounds\M300_Supp_middist", 1}, {"IMPWMOD\Weapons\Sniper\M300\sounds\M300_Supp_middist", 1}};
		volume=0.8;
	};
	class M300_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300\sounds\M300_Supp_middist", 1}};
	};
	class M300_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300\sounds\M300_Supp_middist", 1}};
	};
	class M300_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300\sounds\M300_Supp_middist", 1}};
	};
	class M300_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300\sounds\M300_Supp_middist", 1}};
	};
	class M300_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300\sounds\M300_Supp_middist", 1}};
	};
};