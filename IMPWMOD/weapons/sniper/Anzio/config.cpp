class CfgPatches
{
	class IMP_Weapons_Anzio
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
	
	class IMP_Anzio_Base : BoltActionRifle_InnerMagazine_Base 
	{
		scope = 0;
		weight = 16000;//вес
		displayName = "Anzio";
		descriptionShort = "$STR_IMP_AnzioDescr";
		model = "IMPWMOD\Weapons\Sniper\Anzio\models\anzio.p3d";
		absorbency = 0.0;//промокание предмета
		repairableWithKits[] = {1};//кит для починки
		repairCosts[] = {25};//сколько % будет снимать за починку из кита
		PPDOFProperties[]={1, 0.5, 20, 170, 4, 10};
		chamberedRound="";
		chamberSize = 3;// 1 заряд патрона
		chamberableFrom[]=
		{
			"IMP_Ammo_127x108"
		};
		ejectType = 1;//
		initSpeedMultiplier = 1.05;
		magazineSwitchTime = 0.45; // mag reload speed
		itemSize[] = {10, 2};//размер предмета 1 горизонталь 2 вертикаль
		WeaponLength=1.2;//ВАЖНО длина ствола
		barrelArmor=1.8;//защита оружия
		magazines[]={};
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\Anzio\data\Anzio.rvmat"};
		DisplayMagazine=0;//отображение мага
		simpleHiddenSelections[]={"hide_barrel"};//то что пропадает при прицеливании
		hiddenSelections[]={"camoflage"};//ваша селекция для ретекстура
		attachments[] = 
		{
			"weaponOpticsHunting",
			"weaponWrap", 
			"weaponBipod"
		};
		swayModifier[]={0,0,0};// раскачка прицела
		recoilModifier[] = {0,0,0};//модификатор отдачи
		modes[] = {"Single"};//режим стрельбы
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000;
					healthLevels[]=
					{		
						{1,{"IMPWMOD\Weapons\Sniper\Anzio\data\Anzio.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\Anzio\data\Anzio.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\Anzio\data\Anzio_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\Anzio\data\Anzio_damage.rvmat"}},
						{0,{"IMPWMOD\Weapons\Sniper\Anzio\data\Anzio_destruct.rvmat"}}
					};
				};
			};
		};
		
		class Single: Mode_Single
		{
			soundSetShot[] = {"Anzio_mid_SoundSet", "Anzio_Tail_SoundSet", "Anzio_InteriorTail_SoundSet"};
			reloadTime=1;//задержка выстрела
			recoil="recoil_cz527";
			recoilProne="recoil_cz527_prone";
			dispersion=0.0001;
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
	
	class IMP_Anzio : IMP_Anzio_Base 
	{
		scope = 0;
		displayName = "Anzio";
		descriptionShort = "$STR_IMP_AnzioDescr";
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\Anzio\data\anzio.paa"};
	};
};

class CfgSoundSets {
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class Rifle_silencerHomemadeTail_Base_SoundSet;
	class Rifle_silencerInteriorHomeMadeTail_Base_SoundSet;
	class Anzio_mid_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"Anzio_closeShot_SoundShader",
			"Anzio_midShot_SoundShader",
			"Anzio_distShot_SoundShader"
		};
	};
	class Anzio_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Anzio_tailDistant_SoundShader",
			"Anzio_tailTrees_SoundShader",
			"Anzio_tailForest_SoundShader",
			"Anzio_tailMeadows_SoundShader",
			"Anzio_tailHouses_SoundShader"
		};
	};
	class Anzio_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Anzio_tailInterior_SoundShader"
		};
	};
	class Anzio_silencerHomeMade_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[]=
		{
			"Anzio_silencerHomeMadeCloseShot_SoundShader",
			"Anzio_silencerHomeMadeMidShot_SoundShader",
			"Anzio_silencerHomeMadeDistShot_SoundShader"
		};
	};
	class Anzio_silencerHomeMadeTail_SoundSet: Rifle_silencerHomemadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Anzio_silencerHomeMadeTailTrees_SoundShader",
			"Anzio_silencerHomeMadeTailForest_SoundShader",
			"Anzio_silencerHomeMadeTailMeadows_SoundShader",
			"Anzio_silencerHomeMadeTailHouses_SoundShader"
		};
	};
	class Anzio_silencerInteriorHomeMadeTail_SoundSet: Rifle_silencerInteriorHomeMadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Anzio_silencerHomeMadeTailInterior_SoundShader"
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
	class Anzio_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Anzio\sounds\Anzio_mid", 1}, {"IMPWMOD\Weapons\Sniper\Anzio\sounds\Anzio_mid", 1}, {"IMPWMOD\Weapons\Sniper\Anzio\sounds\Anzio_mid", 1}};
		volume=1.5;
	};
	class Anzio_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Anzio\sounds\Anzio_mid", 1}, {"IMPWMOD\Weapons\Sniper\Anzio\sounds\Anzio_mid", 1}, {"IMPWMOD\Weapons\Sniper\Anzio\sounds\Anzio_mid", 1}};
		volume=1.2;
	};
	class Anzio_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Anzio\sounds\Anzio_mid", 1}, {"IMPWMOD\Weapons\Sniper\Anzio\sounds\Anzio_mid", 1}, {"IMPWMOD\Weapons\Sniper\Anzio\sounds\Anzio_mid", 1}};
		volume=0.7;
	};
	class Anzio_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Anzio\sounds\Anzio_mid", 1}};
		volume=1.5;
	};
	class Anzio_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Anzio\sounds\Anzio_mid", 1}};
	};
	class Anzio_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Anzio\sounds\Anzio_mid", 1}};
	};
	class Anzio_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Anzio\sounds\Anzio_mid", 1}};
	};
	class Anzio_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Anzio\sounds\Anzio_mid", 1}};
	};
	class Anzio_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Anzio\sounds\Anzio_mid", 1}};
	};
	class Anzio_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Anzio\sounds\Anzio_mid", 1}, {"IMPWMOD\Weapons\Sniper\Anzio\sounds\Anzio_mid", 1}, {"IMPWMOD\Weapons\Sniper\Anzio\sounds\Anzio_mid", 1}};
		volume=1.0;
	};
	class Anzio_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Anzio\sounds\Anzio_mid", 1}, {"IMPWMOD\Weapons\Sniper\Anzio\sounds\Anzio_mid", 1}, {"IMPWMOD\Weapons\Sniper\Anzio\sounds\Anzio_mid", 1}};
		volume=0.8;
	};
	class Anzio_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Anzio\sounds\Anzio_mid", 1}, {"IMPWMOD\Weapons\Sniper\Anzio\sounds\Anzio_mid", 1}, {"IMPWMOD\Weapons\Sniper\Anzio\sounds\Anzio_mid", 1}};
		volume=0.5;
	};
	class Anzio_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Anzio\sounds\Anzio_mid", 1}};
	};
	class Anzio_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Anzio\sounds\Anzio_mid", 1}};
	};
	class Anzio_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Anzio\sounds\Anzio_mid", 1}};
	};
	class Anzio_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Anzio\sounds\Anzio_mid", 1}};
	};
	class Anzio_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\Anzio\sounds\Anzio_mid", 1}};
	};
};