class CfgPatches
{
	class IMP_Weapons_CSR
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
class Mode_Single;
class OpticsInfoRifle;

class cfgWeapons
{
	class BoltActionRifle_InnerMagazine_Base;
	
	class IMP_CSR50_Base : BoltActionRifle_InnerMagazine_Base 
	{
		scope = 0;
		weight = 16000;//вес
		model="IMPWMOD\Weapons\Sniper\CSR\models\CSR.p3d";//путь до модели
		absorbency = 0.0;//промокание предмета
		repairableWithKits[] = {1};//кит для починки
		repairCosts[] = {25};//сколько % будет снимать за починку из кита
		PPDOFProperties[]={1, 0.5, 20, 170, 4, 10};
		chamberedRound="";
		chamberSize = 3;// 1 заряд патрона
		chamberableFrom[] = {"IMP_Ammo_127x99"};//какой патрон использует
		ejectType = 1;//
		initSpeedMultiplier = 1.05;
		magazineSwitchTime = 0.45; // mag reload speed
		itemSize[] = {10, 2};
		WeaponLength=1;//ВАЖНО длина ствола
		barrelArmor=1.8;//защита оружия
		magazines[]={};
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\CSR\data\CSR.rvmat"};
		DisplayMagazine=0;//отображение магазина
		simpleHiddenSelections[]={"hide_barrel"};//то что пропадает при прицеливании
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
					hitpoints=200000000;
					healthLevels[]=
					{		
						{1,{"IMPWMOD\Weapons\Sniper\CSR\data\CSR.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\CSR\data\CSR.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\CSR\data\CSR_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\CSR\data\CSR_damage.rvmat"}},
						{0,{"IMPWMOD\Weapons\Sniper\CSR\data\CSR_destruct.rvmat"}}
					};
				};
			};
		};
		
		class Single: Mode_Single
		{
			soundSetShot[]= {"CSR50_Shot_SoundSet","CSR50_Tail_SoundSet","CSR50_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"CSR50_silencerHomeMade_SoundSet","CSR50_silencerHomeMadeTail_SoundSet","CSR50_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=1;//задержка выстрела
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
			distanceZoomMin=100;
			distanceZoomMax=100;
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex=0;// OpticsInfo отвечает за! eye-точка взгляда из лода memory
		};
		class NoiseShoot//звук агра зомби
		{
			strength=125;
			type="shot";
		};
	};
	
	class IMP_CSR50 : IMP_CSR50_Base 
	{
		scope = 2;
		displayName = "CSR PLUS";//Название предмета	
		descriptionShort = "Оружие использует калибр 12.7x99 3 зарядный | The weapon uses a 12.7x99 caliber 3 round.";//Описание предмета
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\CSR\data\CSR_co.paa"};
	};

};
class CfgSoundSets {
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class Rifle_silencerHomemadeTail_Base_SoundSet;
	class Rifle_silencerInteriorHomeMadeTail_Base_SoundSet;
	class CSR50_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"CSR50_closeShot_SoundShader",
			"CSR50_midShot_SoundShader",
			"CSR50_distShot_SoundShader"
		};
	};
	class CSR50_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"CSR50_tailDistant_SoundShader",
			"CSR50_tailTrees_SoundShader",
			"CSR50_tailForest_SoundShader",
			"CSR50_tailMeadows_SoundShader",
			"CSR50_tailHouses_SoundShader"
		};
	};
	class CSR50_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"CSR50_tailInterior_SoundShader"
		};
	};
	class CSR50_silencerHomeMade_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[]=
		{
			"CSR50_silencerHomeMadeCloseShot_SoundShader",
			"CSR50_silencerHomeMadeMidShot_SoundShader",
			"CSR50_silencerHomeMadeDistShot_SoundShader"
		};
	};
	class CSR50_silencerHomeMadeTail_SoundSet: Rifle_silencerHomemadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"CSR50_silencerHomeMadeTailTrees_SoundShader",
			"CSR50_silencerHomeMadeTailForest_SoundShader",
			"CSR50_silencerHomeMadeTailMeadows_SoundShader",
			"CSR50_silencerHomeMadeTailHouses_SoundShader"
		};
	};
	class CSR50_silencerInteriorHomeMadeTail_SoundSet: Rifle_silencerInteriorHomeMadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"CSR50_silencerHomeMadeTailInterior_SoundShader"
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
	class CSR50_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\CSR\sounds\csr50_Shot", 1}, {"IMPWMOD\Weapons\Sniper\CSR\sounds\csr50_Shot", 1}, {"IMPWMOD\Weapons\Sniper\CSR\sounds\csr50_Shot", 1}};
		volume=1.5;
	};
	class CSR50_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\CSR\sounds\csr50_Shot_mid", 1}, {"IMPWMOD\Weapons\Sniper\CSR\sounds\csr50_Shot_mid", 1}, {"IMPWMOD\Weapons\Sniper\CSR\sounds\csr50_Shot_mid", 1}};
		volume=1.2;
	};
	class CSR50_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\CSR\sounds\csr50_Shot_dist", 1}, {"IMPWMOD\Weapons\Sniper\CSR\sounds\csr50_Shot_dist", 1}, {"IMPWMOD\Weapons\Sniper\CSR\sounds\csr50_Shot_dist", 1}};
		volume=0.7;
	};
	class CSR50_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\CSR\sounds\csr50_Shot_dist", 1}};
		volume=1.5;
	};
	class CSR50_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\CSR\sounds\csr50_Shot_dist", 1}};
	};
	class CSR50_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\CSR\sounds\csr50_Shot_dist", 1}};
	};
	class CSR50_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\CSR\sounds\csr50_Shot_dist", 1}};
	};
	class CSR50_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\CSR\sounds\csr50_Shot_dist", 1}};
	};
	class CSR50_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\CSR\sounds\csr50_Shot_dist", 1}};
	};
	class CSR50_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\CSR\sounds\csr50_Shot", 1}, {"IMPWMOD\Weapons\Sniper\CSR\sounds\csr50_Shot", 1}, {"IMPWMOD\Weapons\Sniper\CSR\sounds\csr50_Shot", 1}};
		volume=1.0;
	};
	class CSR50_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\CSR\sounds\csr50_Shot", 1}, {"IMPWMOD\Weapons\Sniper\CSR\sounds\csr50_Shot", 1}, {"IMPWMOD\Weapons\Sniper\CSR\sounds\csr50_Shot", 1}};
		volume=0.8;
	};
	class CSR50_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\CSR\sounds\csr50_Shot", 1}, {"IMPWMOD\Weapons\Sniper\CSR\sounds\csr50_Shot", 1}, {"IMPWMOD\Weapons\Sniper\CSR\sounds\csr50_Shot", 1}};
		volume=0.5;
	};
	class CSR50_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\CSR\sounds\csr50_Shot", 1}};
	};
	class CSR50_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\CSR\sounds\csr50_Shot", 1}};
	};
	class CSR50_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\CSR\sounds\csr50_Shot", 1}};
	};
	class CSR50_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\CSR\sounds\csr50_Shot", 1}};
	};
	class CSR50_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\CSR\sounds\csr50_Shot", 1}};
	};
};