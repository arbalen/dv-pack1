class CfgPatches
{
	class IMP_Weapons_AX50
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
	
	class IMP_AX50_Base : BoltActionRifle_ExternalMagazine_Base 
	{
		scope = 0;
		displayName = "AX50";//Название предмета	
		descriptionShort = "Оружие использует калибр 12.7x99 | The weapon uses a 12.7x99 caliber.";//Описание предмета
		model="IMPWMOD\Weapons\Sniper\AX50\models\IMP_AX50.p3d";//путь до модели
		weight = 14800;//вес
		absorbency = 0.0;//промокание предмета
		repairableWithKits[] = {1};//кит для починки
		repairCosts[] = {10};//сколько % будет снимать за починку из кита
		initSpeedMultiplier = 1;//скорость пули
		PPDOFProperties[] = {1,0.5,50,160,4,10};//
		chamberedRound = "";//
		chamberSize = 1;// 1 заряд патрона
		chamberableFrom[] = {"IMP_Ammo_127x99"};//какой патрон использует
		magazines[]={"IMP_Mag_AX50_5Rnd","Stilyaga_Mag_AX50_5Rnd","Xotaro_Mag_AX50_5Rnd"};//какие  магазины вставляются
		ejectType = 1;//
		itemSize[] = {10, 2};
		WeaponLength=1;//ВАЖНО длина ствола
		barrelArmor=1.8;//защита оружия
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
					hitpoints = 1000000000;
					healthLevels[]=
					{		
						{1,{"IMPWMOD\Weapons\Sniper\AX50\data\AX50.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\AX50\data\AX50.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\AX50\data\AX50_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\AX50\data\AX50_damage.rvmat"}},
						{0,{"IMPWMOD\Weapons\Sniper\AX50\data\AX50_destruct.rvmat"}}
					};
				};
			};
		};
		
		class Single: Mode_SemiAuto
		{
			soundSetShot[]= {"AX50_Shot_SoundSet","AX50_Tail_SoundSet","AX50_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"AX50_silencerHomeMade_SoundSet","AX50_silencerHomeMadeTail_SoundSet","AX50_silencerInteriorHomeMadeTail_SoundSet"}};
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
	
	class IMP_AX50_Black : IMP_AX50_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\AX50\data\AX50_black.paa"};
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\AX50\data\AX50.rvmat"};
	};
	class IMP_AX50_Tkali : IMP_AX50_Black 
	{
		scope = 2;
		hiddenSelectionsTextures[]={"IMPWMODPart2\Weapons\Tex\ax50_tkali.paa"};
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\AX50\data\AX50.rvmat"};
	};
};

class CfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_AX50_5Rnd: Magazine_Base
	{
		scope=2;//видимость в админке
		displayName="$STR_IMP_AX50MAGUPD";
		descriptionShort="$STR_IMP_AX50MAGUPD2";
		model="IMPWMOD\Weapons\Sniper\AX50\models\IMP_AX50_Mag.p3d";
		weight=90;
		itemSize[]={2,2};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		count=5;// кол-во патронов
		ammo = "IMP_Bullet_127x99";
		ammoItems[] = {"IMP_Ammo_127x99"};
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\AX50\data\AX50_black.paa"};
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\AX50\data\AX50.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000;
					healthLevels[]=
					{
						{1,{"IMPWMOD\Weapons\Sniper\AX50\data\AX50.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\AX50\data\AX50.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\AX50\data\AX50_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\AX50\data\AX50_damage.rvmat"}},
						{0,{"IMPWMOD\Weapons\Sniper\AX50\data\AX50_destruct.rvmat"}}
					};
				};
			};
		};
	};
};

class CfgNonAIVehicles
{
    class ProxyAttachment;
    class ProxyIMP_AX50_Mag: ProxyAttachment
    {
        scope = 2;
        inventorySlot = "magazine";
        model="IMPWMOD\Weapons\Sniper\AX50\models\IMP_AX50_Mag.p3d";
    };
};
class CfgSoundSets {
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class Rifle_silencerHomemadeTail_Base_SoundSet;
	class Rifle_silencerInteriorHomeMadeTail_Base_SoundSet;
	class AX50_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"AX50_closeShot_SoundShader",
			"AX50_midShot_SoundShader",
			"AX50_distShot_SoundShader"
		};
	};
	class AX50_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AX50_tailDistant_SoundShader",
			"AX50_tailTrees_SoundShader",
			"AX50_tailForest_SoundShader",
			"AX50_tailMeadows_SoundShader",
			"AX50_tailHouses_SoundShader"
		};
	};
	class AX50_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AX50_tailInterior_SoundShader"
		};
	};
	class AX50_silencerHomeMade_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[]=
		{
			"AX50_silencerHomeMadeCloseShot_SoundShader",
			"AX50_silencerHomeMadeMidShot_SoundShader",
			"AX50_silencerHomeMadeDistShot_SoundShader"
		};
	};
	class AX50_silencerHomeMadeTail_SoundSet: Rifle_silencerHomemadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AX50_silencerHomeMadeTailTrees_SoundShader",
			"AX50_silencerHomeMadeTailForest_SoundShader",
			"AX50_silencerHomeMadeTailMeadows_SoundShader",
			"AX50_silencerHomeMadeTailHouses_SoundShader"
		};
	};
	class AX50_silencerInteriorHomeMadeTail_SoundSet: Rifle_silencerInteriorHomeMadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AX50_silencerHomeMadeTailInterior_SoundShader"
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
	class AX50_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AX50\sounds\AX50_Shot", 1}, {"IMPWMOD\Weapons\Sniper\AX50\sounds\AX50_Shot", 1}, {"IMPWMOD\Weapons\Sniper\AX50\sounds\AX50_Shot", 1}};
		volume=1.5;
	};
	class AX50_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AX50\sounds\AX50_Shot", 1}, {"IMPWMOD\Weapons\Sniper\AX50\sounds\AX50_Shot", 1}, {"IMPWMOD\Weapons\Sniper\AX50\sounds\AX50_Shot", 1}};
		volume=1.2;
	};
	class AX50_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AX50\sounds\AX50_Shot", 1}, {"IMPWMOD\Weapons\Sniper\AX50\sounds\AX50_Shot", 1}, {"IMPWMOD\Weapons\Sniper\AX50\sounds\AX50_Shot", 1}};
		volume=0.7;
	};
	class AX50_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AX50\sounds\AX50_Shot", 1}};
		volume=1.5;
	};
	class AX50_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AX50\sounds\AX50_Shot", 1}};
	};
	class AX50_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AX50\sounds\AX50_Shot", 1}};
	};
	class AX50_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AX50\sounds\AX50_Shot", 1}};
	};
	class AX50_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AX50\sounds\AX50_Shot", 1}};
	};
	class AX50_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AX50\sounds\AX50_Shot", 1}};
	};
	class AX50_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AX50\sounds\AX50_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\AX50\sounds\AX50_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\AX50\sounds\AX50_Shot_Supp", 1}};
		volume=1.0;
	};
	class AX50_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AX50\sounds\AX50_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\AX50\sounds\AX50_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\AX50\sounds\AX50_Shot_Supp", 1}};
		volume=0.8;
	};
	class AX50_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AX50\sounds\AX50_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\AX50\sounds\AX50_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\AX50\sounds\AX50_Shot_Supp", 1}};
		volume=0.5;
	};
	class AX50_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AX50\sounds\AX50_Shot_Supp", 1}};
	};
	class AX50_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AX50\sounds\AX50_Shot_Supp", 1}};
	};
	class AX50_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AX50\sounds\AX50_Shot_Supp", 1}};
	};
	class AX50_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AX50\sounds\AX50_Shot_Supp", 1}};
	};
	class AX50_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AX50\sounds\AX50_Shot_Supp", 1}};
	};
};