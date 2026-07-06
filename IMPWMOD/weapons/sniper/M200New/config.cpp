class CfgPatches
{
	class IMP_Weapons_M200New
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
	
	class IMP_M200New_Base : BoltActionRifle_ExternalMagazine_Base 
	{
		scope = 0;
		displayName = "CheyTac M200";//Название предмета	
		descriptionShort = "Оружие использует калибр 408 | The weapon uses a 408 caliber.";//Описание предмета
		model="IMPWMOD\Weapons\Sniper\M200New\models\IMP_M200New.p3d";//путь до модели
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
		hiddenSelections[]={"camoflage", "camoflage1"};//ваша селекция для ретекстура
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
					hitpoints = 10000000;
					healthLevels[]=
					{		
						{1,{"impwmod\weapons\sniper\m200new\data\m200new2.rvmat", "impwmod\weapons\sniper\m200new\data\m200new.rvmat"}},
						{0.7,{"impwmod\weapons\sniper\m200new\data\m200new2.rvmat", "impwmod\weapons\sniper\m200new\data\m200new.rvmat"}},
						{0.5,{"impwmod\weapons\sniper\m200new\data\m200new2_damage.rvmat", "impwmod\weapons\sniper\m200new\data\m200new_damage.rvmat"}},
						{0.3,{"impwmod\weapons\sniper\m200new\data\m200new2_damage.rvmat", "impwmod\weapons\sniper\m200new\data\m200new_damage.rvmat"}},
						{0,{"impwmod\weapons\sniper\m200new\data\m200new2_destruct.rvmat", "impwmod\weapons\sniper\m200new\data\m200new_destruct.rvmat"}}
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
	
	class IMP_M200New_1 : IMP_M200New_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[]={"impwmod\weapons\sniper\m200new\data\m200new2_1_co.paa", "impwmod\weapons\sniper\m200new\data\m200new_1_co.paa"};
		hiddenSelectionsMaterials[]={"impwmod\weapons\sniper\m200new\data\m200new2.rvmat", "impwmod\weapons\sniper\m200new\data\m200new.rvmat"};
	};
		
	class IMP_M200New_2 : IMP_M200New_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[]={"impwmod\weapons\sniper\m200new\data\m200new2_2_co.paa", "impwmod\weapons\sniper\m200new\data\m200new_2_co.paa"};
		hiddenSelectionsMaterials[]={"impwmod\weapons\sniper\m200new\data\m200new2.rvmat", "impwmod\weapons\sniper\m200new\data\m200new.rvmat"};	
	};
};