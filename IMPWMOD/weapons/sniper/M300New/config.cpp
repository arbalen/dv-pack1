class CfgPatches
{
	class IMP_Weapons_M300New
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
	class IMP_M300New_Base: BoltActionRifle_ExternalMagazine_Base	
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
			"IMP_Mag_M300New_5Rnd"
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
			soundSetShot[]= {"M300New_Shot_SoundSet","M300New_Tail_SoundSet","M300New_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"M300New_silencerHomeMade_SoundSet","M300New_silencerHomeMadeTail_SoundSet","M300New_silencerInteriorHomeMadeTail_SoundSet"}};
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
			memoryPointCamera="eye";
			modelOptics="-";
			distanceZoomMin=200;
			distanceZoomMax=200;
			discreteDistance[]={200};
			discreteDistanceInitIndex=0;
		};
	};
	class IMP_M300New: IMP_M300New_Base
	{
		scope=2;
		displayName="CheyTac M300 Tactical";
		descriptionShort="Оружие использует калибр 408 | The weapon uses a 408 caliber.";
		model="IMPWMOD\Weapons\Sniper\M300New\models\IMP_M300New.p3d";
		attachments[]=
		{
			"weaponOpticsHunting",
			"Suppressor_408",
			"weaponWrap",
			"weaponBipod",
			"grip1"
		};
		itemSize[] = {10, 2};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Sniper\M300New\data\m300_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"IMPWMOD\Weapons\Sniper\M300New\data\m300New.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10000000000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"IMPWMOD\Weapons\Sniper\M300New\data\m300New.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Sniper\M300New\data\m300New.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Sniper\M300New\data\m300New_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Sniper\M300New\data\m300New_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"IMPWMOD\Weapons\Sniper\M300New\data\m300New_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};

class CfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_M300New_5Rnd: Magazine_Base
	{
		scope=2;
		displayName="$STR_IMP_MagM300New";
		descriptionShort="$STR_IMP_cap4085ammo";
		model="IMPWMOD\Weapons\Sniper\M300New\models\IMP_Mag_M300New_5Rnd.p3d";
		weight=90;
		itemSize[]={1,2};
		count=7;
		ammo="IMP_Bullet_408";
		ammoItems[]={"IMP_Ammo_408"};
		recoilModifier[]={0.85, 0.85, 1};
		swayModifier[]={0.85, 0.85, 1};
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\M300New\data\m300_co.paa"};
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\M300New\data\m300New.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000000;
					healthLevels[]=
					{
						{1,{"IMPWMOD\Weapons\Sniper\M300New\data\m300New.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\M300New\data\m300New.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\M300New\data\m300New_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\M300New\data\m300New_damage.rvmat"}},
						{0,{"IMPWMOD\Weapons\Sniper\M300New\data\m300New_destruct.rvmat"}}
					};
				};
			};
		};
	};
};

class CfgNonAIVehicles {
	class ProxyAttachment;


	class ProxyIMP_Mag_M300New_5Rnd : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Sniper\M300New\models\IMP_Mag_M300New_5Rnd.p3d";
	};
};
class CfgSoundSets {
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class Rifle_silencerHomemadeTail_Base_SoundSet;
	class Rifle_silencerInteriorHomeMadeTail_Base_SoundSet;
	class M300New_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"M300New_closeShot_SoundShader",
			"M300New_midShot_SoundShader",
			"M300New_distShot_SoundShader"
		};
	};
	class M300New_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M300New_tailDistant_SoundShader",
			"M300New_tailTrees_SoundShader",
			"M300New_tailForest_SoundShader",
			"M300New_tailMeadows_SoundShader",
			"M300New_tailHouses_SoundShader"
		};
	};
	class M300New_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M300New_tailInterior_SoundShader"
		};
	};
	class M300New_silencerHomeMade_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[]=
		{
			"M300New_silencerHomeMadeCloseShot_SoundShader",
			"M300New_silencerHomeMadeMidShot_SoundShader",
			"M300New_silencerHomeMadeDistShot_SoundShader"
		};
	};
	class M300New_silencerHomeMadeTail_SoundSet: Rifle_silencerHomemadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M300New_silencerHomeMadeTailTrees_SoundShader",
			"M300New_silencerHomeMadeTailForest_SoundShader",
			"M300New_silencerHomeMadeTailMeadows_SoundShader",
			"M300New_silencerHomeMadeTailHouses_SoundShader"
		};
	};
	class M300New_silencerInteriorHomeMadeTail_SoundSet: Rifle_silencerInteriorHomeMadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M300New_silencerHomeMadeTailInterior_SoundShader"
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
	class M300New_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300New\sounds\M300New_Shot", 1}, {"IMPWMOD\Weapons\Sniper\M300New\sounds\M300New_Shot", 1}, {"IMPWMOD\Weapons\Sniper\M300New\sounds\M300New_Shot", 1}};
		volume=1.5;
	};
	class M300New_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300New\sounds\M300New_Shot", 1}, {"IMPWMOD\Weapons\Sniper\M300New\sounds\M300New_Shot", 1}, {"IMPWMOD\Weapons\Sniper\M300New\sounds\M300New_Shot", 1}};
		volume=1.2;
	};
	class M300New_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300New\sounds\M300New_Shot", 1}, {"IMPWMOD\Weapons\Sniper\M300New\sounds\M300New_Shot", 1}, {"IMPWMOD\Weapons\Sniper\M300New\sounds\M300New_Shot", 1}};
		volume=0.7;
	};
	class M300New_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300New\sounds\M300New_Shot", 1}};
		volume=1.5;
	};
	class M300New_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300New\sounds\M300New_Shot", 1}};
	};
	class M300New_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300New\sounds\M300New_Shot", 1}};
	};
	class M300New_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300New\sounds\M300New_Shot", 1}};
	};
	class M300New_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300New\sounds\M300New_Shot", 1}};
	};
	class M300New_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300New\sounds\M300New_Shot", 1}};
	};
	class M300New_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300New\sounds\M300New_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\M300New\sounds\M300New_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\M300New\sounds\M300New_Shot_Supp", 1}};
		volume=1.0;
	};
	class M300New_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300New\sounds\M300New_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\M300New\sounds\M300New_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\M300New\sounds\M300New_Shot_Supp", 1}};
		volume=0.8;
	};
	class M300New_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300New\sounds\M300New_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\M300New\sounds\M300New_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\M300New\sounds\M300New_Shot_Supp", 1}};
		volume=0.5;
	};
	class M300New_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300New\sounds\M300New_Shot_Supp", 1}};
	};
	class M300New_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300New\sounds\M300New_Shot_Supp", 1}};
	};
	class M300New_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300New\sounds\M300New_Shot_Supp", 1}};
	};
	class M300New_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300New\sounds\M300New_Shot_Supp", 1}};
	};
	class M300New_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M300New\sounds\M300New_Shot_Supp", 1}};
	};
};