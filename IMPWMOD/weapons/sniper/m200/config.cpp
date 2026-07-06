class CfgPatches
{
	class IMP_Weapons_M200
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
	
	class IMP_M200_Base : BoltActionRifle_ExternalMagazine_Base 
	{
		scope = 0;
		displayName = "CheyTac M200";//Название предмета	
		descriptionShort = "Оружие использует калибр 408 | The weapon uses a 408 caliber.";//Описание предмета
		model="IMPWMOD\Weapons\Sniper\M200\models\IMP_M200.p3d";//путь до модели
		weight = 12300;//вес
		absorbency = 0.0;//промокание предмета
		repairableWithKits[] = {1};//кит для починки
		repairCosts[] = {10};//сколько % будет снимать за починку из кита
		PPDOFProperties[] = {1,0.5,50,160,4,10};//В данном случае, значение параметра равно {1,0.5,50,160,4,10}, что означает, что эффект глубины резкости включен, задняя часть изображения будет размыта на 50%, эффект начинается на расстоянии 50 метров, достигает максимальной интенсивности на расстоянии 160 метров, переход от начального расстояния до максимальной интенсивности занимает 4 секунды, а переход от максимальной интенсивности до полной резкости занимает 10 секунд
		initSpeedMultiplier = 1;//Параметр "initSpeedMultiplier" определяет множитель начальной скорости пули, который будет использоваться при выстреле из данного оружия. В данном случае, значение параметра равно 1, что означает, что начальная скорость пули будет равна стандартной скорости для данного типа патронов
		chamberedRound = "";//Параметр "chamberedRound" определяет тип патрона, который находится в патроннике оружия при его создании. В данном случае, значение параметра равно пустой строке "", что означает, что патронник оружия пустой при его создании
		chamberSize = 1;// 1 заряд патрона
		chamberableFrom[] = {"IMP_Ammo_408"};//какой патрон использует
		magazines[]={"IMP_Mag_M200_5Rnd"};//какие  магазины вставляются
		ejectType = 1;//Параметр "ejectType" определяет тип выброса гильз при стрельбе. В данном случае, значение параметра равно 1, что означает, что гильзы будут выбрасываться вправо от оружия. Параметр 0 это влево
		itemSize[] = {10, 2};//размер предмета 1 горизонталь 2 вертикаль
		WeaponLength=1;//Длина оружия определяет, насколько оно удобно для использования в различных условиях. Например, более короткое оружие может быть удобнее для использования в зданиях или в тесных пространствах, а более длинное оружие может быть более точным на больших расстояниях
		barrelArmor=1.8;//защита оружия
		simpleHiddenSelections[]={"hide_barrel"};//то что пропадает при прицеливании
		hiddenSelections[]={"camoflage"};//ваша селекция для ретекстура
		attachments[]={"weaponWrap","weaponOpticsHunting","Suppressor_408"};//аттачменты
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
						{1,{"IMPWMOD\Weapons\Sniper\M200\data\M200.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\M200\data\M200.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\M200\data\M200_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\M200\data\M200_damage.rvmat"}},
						{0,{"IMPWMOD\Weapons\Sniper\M200\data\M200_destruct.rvmat"}}
					};
				};
			};
		};
		
		class Single: Mode_SemiAuto
		{
			soundSetShot[]= {"M200_Shot_SoundSet","M200_Tail_SoundSet","M200_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"M200_silencerHomeMade_SoundSet","M200_silencerHomeMadeTail_SoundSet","M200_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=1.8;//задержка выстрела
			recoil="recoil_cz527";
			recoilProne="recoil_cz527_prone";
			dispersion=0;//Параметр "dispersion" определяет уровень разброса пуль при стрельбе из оружия. В данном случае, значение параметра равно 0.0001, что означает, что разброс пуль будет очень маленьким
			magazineSlot="magazine";
		};
		
		class Particles {
			class OnFire {
				class SmokeCloud {
					overrideParticle = "weapon_shot_winded_smoke";
				};
				
				class MuzzleFlash {
					overrideParticle = "weapon_shot_cz527_01";
					ignoreIfSuppressed = 1;//Параметр "ignoreIfSuppressed" определяет, будет ли игнорироваться подавление звука выстрела при использовании данного оружия. В данном случае, значение параметра равно 1, что означает, что подавление звука выстрела будет игнорироваться
					illuminateWorld = 1;
					positionOffset[] = {-0.05, 0, 0};//Параметр "positionOffset" определяет смещение положения оружия в виде массива из трех значений. Первое значение определяет смещение по оси X, второе значение - смещение по оси Y, а третье значение - смещение по оси Z. В данном случае, значение параметра равно {-0.05, 0, 0}, что означает, что положение оружия будет смещено на 0.05 метра влево от центра экрана
				};
			};
			
			class OnOverheating {
				shotsToStartOverheating = 1;//Параметр "shotsToStartOverheating" определяет количество выстрелов, необходимых для начала перегрева оружия. В данном случае, значение параметра равно 1, что означает, что оружие начнет перегреваться после первого выстрела. Перегрев оружия может привести к снижению точности стрельбы, увеличению отдачи и повреждению оружия. Параметр "shotsToStartOverheating" позволяет контролировать количество выстрелов, которые можно сделать до начала перегрева оружия. Однако, слишком маленькое значение параметра может сделать оружие менее эффективным и быстро выходить из строя
				maxOverheatingValue = 4;//Параметр "maxOverheatingValue" определяет максимальное значение перегрева оружия. В данном случае, значение параметра равно 4, что означает, что оружие может перегреться до максимального значения 4. Перегрев оружия может привести к снижению точности стрельбы, увеличению отдачи и повреждению оружия. Параметр "maxOverheatingValue" позволяет контролировать максимальное значение перегрева оружия, которое может быть достигнуто. Если значение перегрева достигает максимального значения, то оружие может перестать работать или стать менее эффективным
				overheatingDecayInterval = 3;//Параметр "overheatingDecayInterval" определяет интервал времени, через который оружие начинает охлаждаться после перегрева. В данном случае, значение параметра равно 3, что означает, что оружие начнет охлаждаться через 3 секунды после перегрева. Интервал охлаждения оружия после перегрева позволяет контролировать время, необходимое для восстановления работоспособности оружия после перегрева. Если значение параметра "overheatingDecayInterval" слишком маленькое, то оружие может перегреваться слишком часто и становиться менее эффективным. Если значение параметра слишком большое, то оружие может оставаться перегретым слишком долго и становиться непригодным для использования
				
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
	
	class IMP_M200 : IMP_M200_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\M200\data\M200_co.paa"};
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\M200\data\M200.rvmat"};
	};
		
	class IMP_M200_1 : IMP_M200_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\M200\data\M200_EMR_co.paa"};
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\M200\data\M200.rvmat"};	
	};
	class IMP_M200_Tkali : IMP_M200_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[]={"IMPWMODPart2\Weapons\Tex\m200_tkali.paa"};
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\M200\data\M200.rvmat"};	
	};
};

class CfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_M200_5Rnd: Magazine_Base
	{
		scope=2;//видимость в админке
		displayName="$STR_IMP_M200Mag";//Название предмета
		descriptionShort="$STR_IMP_cap4085ammo";//Описание предмета
		model="IMPWMOD\Weapons\Sniper\M200\models\IMP_M200_Mag.p3d";//Путь до модели
		weight=90;//Вес в инвентаре ГРАММЫ
		itemSize[]={1,2};//Размер в инвентаре (1 число по горизонтали, 2 по вертикали)
		count=7;// кол-во патронов
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		ammo="IMP_Bullet_408";//Пуля в магазине и которая будет использоваться в оружии
		ammoItems[]={"IMP_Ammo_408"};//Сам класснейм пули
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\M200\data\M200_co.paa"};
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\M200\data\M200.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000000000;
					healthLevels[]=
					{
						{1,{"IMPWMOD\Weapons\Sniper\M200\data\M200.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\M200\data\M200.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\M200\data\M200_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\M200\data\M200_damage.rvmat"}},
						{0,{"IMPWMOD\Weapons\Sniper\M200\data\M200_destruct.rvmat"}}
					};
				};
			};
		};
	};
};

class CfgNonAIVehicles
{
    class ProxyAttachment;
    class ProxyIMP_M200_Mag: ProxyAttachment
    {
        scope = 2;
        inventorySlot = "magazine";
        model="IMPWMOD\Weapons\Sniper\M200\models\IMP_M200_Mag.p3d";
    };
};

class CfgSoundSets {
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class Rifle_silencerHomemadeTail_Base_SoundSet;
	class Rifle_silencerInteriorHomeMadeTail_Base_SoundSet;
	class M200_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"M200_closeShot_SoundShader",
			"M200_midShot_SoundShader",
			"M200_distShot_SoundShader"
		};
	};
	class M200_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M200_tailDistant_SoundShader",
			"M200_tailTrees_SoundShader",
			"M200_tailForest_SoundShader",
			"M200_tailMeadows_SoundShader",
			"M200_tailHouses_SoundShader"
		};
	};
	class M200_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M200_tailInterior_SoundShader"
		};
	};
	class M200_silencerHomeMade_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[]=
		{
			"M200_silencerHomeMadeCloseShot_SoundShader",
			"M200_silencerHomeMadeMidShot_SoundShader",
			"M200_silencerHomeMadeDistShot_SoundShader"
		};
	};
	class M200_silencerHomeMadeTail_SoundSet: Rifle_silencerHomemadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M200_silencerHomeMadeTailTrees_SoundShader",
			"M200_silencerHomeMadeTailForest_SoundShader",
			"M200_silencerHomeMadeTailMeadows_SoundShader",
			"M200_silencerHomeMadeTailHouses_SoundShader"
		};
	};
	class M200_silencerInteriorHomeMadeTail_SoundSet: Rifle_silencerInteriorHomeMadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M200_silencerHomeMadeTailInterior_SoundShader"
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
	class M200_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M200\sounds\M200_Shot", 1}, {"IMPWMOD\Weapons\Sniper\M200\sounds\M200_Shot", 1}, {"IMPWMOD\Weapons\Sniper\M200\sounds\M200_Shot", 1}};
		volume=1.5;
	};
	class M200_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M200\sounds\M200_Shot", 1}, {"IMPWMOD\Weapons\Sniper\M200\sounds\M200_Shot", 1}, {"IMPWMOD\Weapons\Sniper\M200\sounds\M200_Shot", 1}};
		volume=1.2;
	};
	class M200_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M200\sounds\M200_Shot", 1}, {"IMPWMOD\Weapons\Sniper\M200\sounds\M200_Shot", 1}, {"IMPWMOD\Weapons\Sniper\M200\sounds\M200_Shot", 1}};
		volume=0.7;
	};
	class M200_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M200\sounds\M200_Shot", 1}};
		volume=1.5;
	};
	class M200_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M200\sounds\M200_Shot", 1}};
	};
	class M200_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M200\sounds\M200_Shot", 1}};
	};
	class M200_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M200\sounds\M200_Shot", 1}};
	};
	class M200_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M200\sounds\M200_Shot", 1}};
	};
	class M200_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M200\sounds\M200_Shot", 1}};
	};
	class M200_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M200\sounds\M200_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\M200\sounds\M200_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\M200\sounds\M200_Shot_Supp", 1}};
		volume=1.0;
	};
	class M200_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M200\sounds\M200_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\M200\sounds\M200_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\M200\sounds\M200_Shot_Supp", 1}};
		volume=0.8;
	};
	class M200_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M200\sounds\M200_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\M200\sounds\M200_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\M200\sounds\M200_Shot_Supp", 1}};
		volume=0.5;
	};
	class M200_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M200\sounds\M200_Shot_Supp", 1}};
	};
	class M200_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M200\sounds\M200_Shot_Supp", 1}};
	};
	class M200_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M200\sounds\M200_Shot_Supp", 1}};
	};
	class M200_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M200\sounds\M200_Shot_Supp", 1}};
	};
	class M200_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M200\sounds\M200_Shot_Supp", 1}};
	};
};