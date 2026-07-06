class CfgPatches
{
	class IMP_Weapons_T5000
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
	
	class IMP_T5000_Base : BoltActionRifle_ExternalMagazine_Base 
	{
		scope = 0;
		displayName = "$STR_IMP_OrsisT5000";//Название предмета	
		descriptionShort = "Оружие использует калибр 338lm | The weapon uses a 338lm caliber.";//Описание предмета
		model="IMPWMOD\Weapons\Sniper\T5000\models\IMP_T5000.p3d";//путь до модели
		weight = 5000;//вес
		absorbency = 0.0;//промокание предмета
		repairableWithKits[] = {1};//кит для починки
		repairCosts[] = {10};//сколько % будет снимать за починку из кита
		PPDOFProperties[] = {1,0.5,50,160,4,10};//
		initSpeedMultiplier = 1;
		chamberedRound = "";//
		chamberSize = 1;// 1 заряд патрона
		chamberableFrom[] = {"IMP_Ammo_338LM"};
		magazines[]={"IMP_Mag_T5000_5Rnd"};//какие  магазины вставляются
		ejectType = 1;//
		itemSize[] = {10, 2};//размер предмета 1 горизонталь 2 вертикаль
		WeaponLength=1;
		barrelArmor=1.8;//защита оружия
		simpleHiddenSelections[]={"hide_barrel"};//то что пропадает при прицеливании
		hiddenSelections[]={"camoflage"};//ваша селекция для ретекстура
		attachments[]=
		{
			"weaponOpticsHunting",
			"grip1",
			"weaponWrap",
			"Suppressor_338", 
			"weaponBipod"
		};//аттачменты
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
						{1,{"IMPWMOD\Weapons\Sniper\T5000\data\T5000.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\T5000\data\T5000.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\T5000\data\T5000_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\T5000\data\T5000_damage.rvmat"}},
						{0,{"IMPWMOD\Weapons\Sniper\T5000\data\T5000_destruct.rvmat"}}
					};
				};
			};
		};
		
		class Single: Mode_SemiAuto
		{
			soundSetShot[]= {"T5000_Shot_SoundSet","T5000_Tail_SoundSet","T5000_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"T5000_silencerHomeMade_SoundSet","T5000_silencerHomeMadeTail_SoundSet","T5000_silencerInteriorHomeMadeTail_SoundSet"}};
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
		
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
		};
		class NoiseShoot//звук агра зомби
		{
			strength=80;
			type="shot";
		};
	};		
	class IMP_T5000 : IMP_T5000_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\T5000\data\T5000_co.paa"};
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\T5000\data\T5000.rvmat"};
	};
};

class CfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_T5000_5Rnd: Magazine_Base
	{
		scope=2;//видимость в админке
		displayName="$STR_IMP_OrsisT50002";//Название предмета
		descriptionShort="$STR_IMP_3385am";//Описание предмета
		model="IMPWMOD\Weapons\Sniper\T5000\models\IMP_T5000_Mag.p3d";//Путь до модели
		weight=90;//Вес в инвентаре ГРАММЫ
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		itemSize[]={1,2};//Размер в инвентаре (1 число по горизонтали, 2 по вертикали)
		count=5;// кол-во патронов
		ammo = "IMP_Bullet_338LM";
		ammoItems[] = {"IMP_Ammo_338LM"};
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\T5000\data\T5000_co.paa"};
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\T5000\data\T5000.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000000;
					healthLevels[]=
					{
						{1,{"IMPWMOD\Weapons\Sniper\T5000\data\T5000_Mag.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\T5000\data\T5000_Mag.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\T5000\data\T5000_Mag_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\T5000\data\T5000_Mag_damage.rvmat"}},
						{0,{"IMPWMOD\Weapons\Sniper\T5000\data\T5000_Mag_destruct.rvmat"}}
					};
				};
			};
		};
	};
};

class CfgNonAIVehicles
{
    class ProxyAttachment;
    class ProxyIMP_T5000_Mag: ProxyAttachment
    {
        scope = 2;
        inventorySlot = "magazine";
        model="IMPWMOD\Weapons\Sniper\T5000\models\IMP_T5000_Mag.p3d";
    };
};
class CfgSoundSets {
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class Rifle_silencerHomemadeTail_Base_SoundSet;
	class Rifle_silencerInteriorHomeMadeTail_Base_SoundSet;
	class T5000_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"T5000_closeShot_SoundShader",
			"T5000_midShot_SoundShader",
			"T5000_distShot_SoundShader"
		};
	};
	class T5000_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"T5000_tailDistant_SoundShader",
			"T5000_tailTrees_SoundShader",
			"T5000_tailForest_SoundShader",
			"T5000_tailMeadows_SoundShader",
			"T5000_tailHouses_SoundShader"
		};
	};
	class T5000_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"T5000_tailInterior_SoundShader"
		};
	};
	class T5000_silencerHomeMade_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[]=
		{
			"T5000_silencerHomeMadeCloseShot_SoundShader",
			"T5000_silencerHomeMadeMidShot_SoundShader",
			"T5000_silencerHomeMadeDistShot_SoundShader"
		};
	};
	class T5000_silencerHomeMadeTail_SoundSet: Rifle_silencerHomemadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"T5000_silencerHomeMadeTailTrees_SoundShader",
			"T5000_silencerHomeMadeTailForest_SoundShader",
			"T5000_silencerHomeMadeTailMeadows_SoundShader",
			"T5000_silencerHomeMadeTailHouses_SoundShader"
		};
	};
	class T5000_silencerInteriorHomeMadeTail_SoundSet: Rifle_silencerInteriorHomeMadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"T5000_silencerHomeMadeTailInterior_SoundShader"
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
	class T5000_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\T5000\sounds\T5000_Shot", 1}, {"IMPWMOD\Weapons\Sniper\T5000\sounds\T5000_Shot", 1}, {"IMPWMOD\Weapons\Sniper\T5000\sounds\T5000_Shot", 1}};
		volume=1.5;
	};
	class T5000_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\T5000\sounds\T5000_Shot", 1}, {"IMPWMOD\Weapons\Sniper\T5000\sounds\T5000_Shot", 1}, {"IMPWMOD\Weapons\Sniper\T5000\sounds\T5000_Shot", 1}};
		volume=1.2;
	};
	class T5000_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\T5000\sounds\T5000_Shot", 1}, {"IMPWMOD\Weapons\Sniper\T5000\sounds\T5000_Shot", 1}, {"IMPWMOD\Weapons\Sniper\T5000\sounds\T5000_Shot", 1}};
		volume=0.7;
	};
	class T5000_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\T5000\sounds\T5000_Shot", 1}};
		volume=1.5;
	};
	class T5000_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\T5000\sounds\T5000_Shot", 1}};
	};
	class T5000_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\T5000\sounds\T5000_Shot", 1}};
	};
	class T5000_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\T5000\sounds\T5000_Shot", 1}};
	};
	class T5000_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\T5000\sounds\T5000_Shot", 1}};
	};
	class T5000_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\T5000\sounds\T5000_Shot", 1}};
	};
	class T5000_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\T5000\sounds\T5000_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\T5000\sounds\T5000_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\T5000\sounds\T5000_Shot_Supp", 1}};
		volume=1.0;
	};
	class T5000_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\T5000\sounds\T5000_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\T5000\sounds\T5000_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\T5000\sounds\T5000_Shot_Supp", 1}};
		volume=0.8;
	};
	class T5000_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\T5000\sounds\T5000_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\T5000\sounds\T5000_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\T5000\sounds\T5000_Shot_Supp", 1}};
		volume=0.5;
	};
	class T5000_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\T5000\sounds\T5000_Shot_Supp", 1}};
	};
	class T5000_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\T5000\sounds\T5000_Shot_Supp", 1}};
	};
	class T5000_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\T5000\sounds\T5000_Shot_Supp", 1}};
	};
	class T5000_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\T5000\sounds\T5000_Shot_Supp", 1}};
	};
	class T5000_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\T5000\sounds\T5000_Shot_Supp", 1}};
	};
};