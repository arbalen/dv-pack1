class CfgPatches
{
	class IMP_Weapons_AR50
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
	
	class IMP_AR50_Base : BoltActionRifle_ExternalMagazine_Base 
	{
		scope = 0;
		displayName = "AR50";//Название предмета	
		descriptionShort = "Оружие использует калибр 12.7x99 | The weapon uses a 12.7x99 caliber.";//Описание предмета
		model="IMPWMOD\Weapons\Sniper\AR50\models\AR50.p3d";//путь до модели
		weight = 12300;//вес
		absorbency = 0.0;//промокание предмета
		repairableWithKits[] = {1};//кит для починки
		repairCosts[] = {10};//сколько % будет снимать за починку из кита
		PPDOFProperties[] = {1,0.5,50,160,4,10};//
		initSpeedMultiplier = 1;
		chamberedRound = "";//
		chamberSize = 1;
		DisplayMagazine = 0;
		chamberableFrom[] = {"IMP_Ammo_127x99"};
		magazines[]={""};//какие  магазины вставляются
		ejectType = 1;//
		itemSize[] = {10, 2};
		WeaponLength=1;//ВАЖНО длина ствола
		barrelArmor=1.8;//защита оружия
		simpleHiddenSelections[]={"hide_barrel", "Supp"};//то что пропадает при прицеливании
		hiddenSelections[]={"camoflage"};//ваша селекция для ретекстура
		attachments[]={"weaponWrap","weaponOpticsHunting"};//аттачменты
		recoilModifier[]={0.25,0.25,0.25};
		swayModifier[]={0,0,0};
		modes[] = {"Single"};//режим стрельбы
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000;
					healthLevels[]=
					{		
						{1,{"IMPWMOD\Weapons\Sniper\AR50\data\AR50.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\AR50\data\AR50.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\AR50\data\AR50_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\AR50\data\AR50_damage.rvmat"}},
						{0,{"IMPWMOD\Weapons\Sniper\AR50\data\AR50_destruct.rvmat"}}
					};
				};
			};
		};
		
		class Single: Mode_SemiAuto
		{
			soundSetShot[]= {"AR50_Shot_SoundSet","AR50_Tail_SoundSet","AR50_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"AR50_silencerHomeMade_SoundSet","AR50_silencerHomeMadeTail_SoundSet","AR50_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=1.8;//задержка выстрела
			recoil="recoil_cz527";
			recoilProne="recoil_cz527_prone";
			dispersion=0;
			magazineSlot="magazine";
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
		
		class OpticsInfo : OpticsInfoRifle {
			memoryPointCamera="eye";
			modelOptics="-";
			distanceZoomMin=200;
			distanceZoomMax=200;
			discreteDistance[]={200};
			discreteDistanceInitIndex=0;// OpticsInfo отвечает за! eye-точка взгляда из лода memory
		};
		class NoiseShoot//звук агра зомби
		{
			strength=200;
			type="shot";
		};
	};
	
	class IMP_AR50 : IMP_AR50_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\AR50\data\AR50_co.paa"};
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\AR50\data\AR50.rvmat"};
	};
	class IMP_AR50_Tkali : IMP_AR50 
	{
		scope = 2;
		hiddenSelectionsTextures[]={"IMPWMODPart2\Weapons\Tex\ar50_tkali.paa"};
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\AR50\data\AR50.rvmat"};
	};
};

class CfgSoundSets {
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class Rifle_silencerHomemadeTail_Base_SoundSet;
	class Rifle_silencerInteriorHomeMadeTail_Base_SoundSet;
	class AR50_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"AR50_closeShot_SoundShader",
			"AR50_midShot_SoundShader",
			"AR50_distShot_SoundShader"
		};
	};
	class AR50_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AR50_tailDistant_SoundShader",
			"AR50_tailTrees_SoundShader",
			"AR50_tailForest_SoundShader",
			"AR50_tailMeadows_SoundShader",
			"AR50_tailHouses_SoundShader"
		};
	};
	class AR50_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AR50_tailInterior_SoundShader"
		};
	};
	class AR50_silencerHomeMade_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[]=
		{
			"AR50_silencerHomeMadeCloseShot_SoundShader",
			"AR50_silencerHomeMadeMidShot_SoundShader",
			"AR50_silencerHomeMadeDistShot_SoundShader"
		};
	};
	class AR50_silencerHomeMadeTail_SoundSet: Rifle_silencerHomemadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AR50_silencerHomeMadeTailTrees_SoundShader",
			"AR50_silencerHomeMadeTailForest_SoundShader",
			"AR50_silencerHomeMadeTailMeadows_SoundShader",
			"AR50_silencerHomeMadeTailHouses_SoundShader"
		};
	};
	class AR50_silencerInteriorHomeMadeTail_SoundSet: Rifle_silencerInteriorHomeMadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AR50_silencerHomeMadeTailInterior_SoundShader"
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
	class AR50_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AR50\sounds\AR50_Shot", 1}, {"IMPWMOD\Weapons\Sniper\AR50\sounds\AR50_Shot", 1}, {"IMPWMOD\Weapons\Sniper\AR50\sounds\AR50_Shot", 1}};
		volume=1.5;
	};
	class AR50_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AR50\sounds\AR50_Shot", 1}, {"IMPWMOD\Weapons\Sniper\AR50\sounds\AR50_Shot", 1}, {"IMPWMOD\Weapons\Sniper\AR50\sounds\AR50_Shot", 1}};
		volume=1.2;
	};
	class AR50_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AR50\sounds\AR50_Shot", 1}, {"IMPWMOD\Weapons\Sniper\AR50\sounds\AR50_Shot", 1}, {"IMPWMOD\Weapons\Sniper\AR50\sounds\AR50_Shot", 1}};
		volume=0.7;
	};
	class AR50_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AR50\sounds\AR50_Shot", 1}};
		volume=1.5;
	};
	class AR50_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AR50\sounds\AR50_Shot", 1}};
	};
	class AR50_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AR50\sounds\AR50_Shot", 1}};
	};
	class AR50_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AR50\sounds\AR50_Shot", 1}};
	};
	class AR50_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AR50\sounds\AR50_Shot", 1}};
	};
	class AR50_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AR50\sounds\AR50_Shot", 1}};
	};
	class AR50_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AR50\sounds\AR50_Shot", 1}, {"IMPWMOD\Weapons\Sniper\AR50\sounds\AR50_Shot", 1}, {"IMPWMOD\Weapons\Sniper\AR50\sounds\AR50_Shot", 1}};
		volume=1.0;
	};
	class AR50_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AR50\sounds\AR50_Shot", 1}, {"IMPWMOD\Weapons\Sniper\AR50\sounds\AR50_Shot", 1}, {"IMPWMOD\Weapons\Sniper\AR50\sounds\AR50_Shot", 1}};
		volume=0.8;
	};
	class AR50_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AR50\sounds\AR50_Shot", 1}, {"IMPWMOD\Weapons\Sniper\AR50\sounds\AR50_Shot", 1}, {"IMPWMOD\Weapons\Sniper\AR50\sounds\AR50_Shot", 1}};
		volume=0.5;
	};
	class AR50_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AR50\sounds\AR50_Shot", 1}};
	};
	class AR50_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AR50\sounds\AR50_Shot", 1}};
	};
	class AR50_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AR50\sounds\AR50_Shot", 1}};
	};
	class AR50_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AR50\sounds\AR50_Shot", 1}};
	};
	class AR50_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AR50\sounds\AR50_Shot", 1}};
	};
};