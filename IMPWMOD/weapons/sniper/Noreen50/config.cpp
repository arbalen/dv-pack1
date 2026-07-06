class CfgPatches
{
	class IMP_Weapons_Noreen50
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
	
	class IMP_Noreen50_Base : BoltActionRifle_ExternalMagazine_Base 
	{
		scope = 0;
		displayName = "Noreen50";//Название предмета	
		descriptionShort = "Оружие использует калибр 12.7x99 | The weapon uses a 12.7x99 caliber.";//Описание предмета
		model="IMPWMOD\Weapons\Sniper\Noreen50\models\Noreen50.p3d";//путь до модели
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
		itemSize[] = {10, 2};//размер предмета 1 горизонталь 2 вертикаль
		WeaponLength=1;//ВАЖНО длина ствола
		barrelArmor=1.8;//защита оружия
		simpleHiddenSelections[]={"hide_barrel"};//то что пропадает при прицеливании
		hiddenSelections[]={"camoflage1"};//ваша селекция для ретекстура
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
						{1,{"IMPWMOD\Weapons\Sniper\Noreen50\data\Noreen50.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\Noreen50\data\Noreen50.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\Noreen50\data\Noreen50_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\Noreen50\data\Noreen50_damage.rvmat"}},
						{0,{"IMPWMOD\Weapons\Sniper\Noreen50\data\Noreen50_destruct.rvmat"}}
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
	
	class IMP_Noreen50 : IMP_Noreen50_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\Noreen50\data\Noreen50_co.paa"};
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\Noreen50\data\Noreen50.rvmat"};
	};
	class IMP_Noreen50_Tkali : IMP_Noreen50_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[]={"IMPWMODPart2\Weapons\Tex\nooren_tkali.paa"};
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\Noreen50\data\Noreen50.rvmat"};
	};
};