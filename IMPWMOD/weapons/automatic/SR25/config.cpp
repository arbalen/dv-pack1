class CfgPatches
{
	class IMP_Weapons_SR25
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
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
	class Rifle_Base;
	class IMP_SR25_Base : Rifle_Base 
	{
		scope = 0;
		displayName = "SR-25";
		descriptionShort = "SR-25 — самозарядная снайперская винтовка, разработанная Юджином Стоунером в 1990-е годы на основе конструкции винтовки AR-15. Использует патроны калибра .308Win";
		itemSize[] = {9, 2};
		weight = 3800;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		PPDOFProperties[] = {1, 0.5, 20, 170, 4, 10};
		WeaponLength=0.833;
		initSpeedMultiplier = 1;
		chamberSize = 1;
		model = "IMPWMOD\Weapons\Automatic\SR25\models\IMP_SR25.p3d";
		chamberedRound = "";
		chamberableFrom[]={"Ammo_308Win","Ammo_308WinTracer"};
		magazines[] = {"IMP_Mag_SR25_10Rnd","IMP_Mag_SR25_20Rnd", "IMP_Mag_SR25_Tape_40Rnd", "IMP_Mag_SR25_Clip_40Rnd"};
		ejectType = 1;
		recoilModifier[]={0.25,0.25,0.25};
		swayModifier[]={0,0,0};
		simpleHiddenSelections[] = {"hide_barrel","irons_up","irons_down", "HandlesM4"};
		hiddenSelections[]={"camoflage"};
		hiddenSelectionsMaterials[] = {"IMPWMOD\Weapons\Automatic\SR25\data\SR25_New.rvmat"};
		attachments[] = {"weaponWrap", "weaponOptics", "Suppressor_308", "weaponButtstockM4", "HandlesM4"};
		modes[] = {"FullAuto", "SemiAuto"};
		
		class SemiAuto : Mode_SemiAuto 
		{
			soundSetShot[] = {"SR25_Shot_SoundSet", "SR25_Tail_SoundSet", "SR25_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "SR25_silencer_SoundSet", "SR25_silencerTail_SoundSet", "SR25_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.08;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0;
			magazineSlot = "magazine";
		};
		
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"SR25_Shot_SoundSet", "SR25_Tail_SoundSet", "SR25_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "SR25_silencer_SoundSet", "SR25_silencerTail_SoundSet", "SR25_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.08;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0;
			magazineSlot = "magazine";
		};
		
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100,200,300,400,500,600};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 600;
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
					overrideParticle="weapon_shot_ump45_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
				};
				class ChamberSmokeBurst
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=60;
				shotsToStartOverheating=25;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.2};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.2,0.60000002};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.60000002,1};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.34999999,0,0};
					onlyWithinOverheatLimits[]={0,1};
					onlyWithinRainLimits[]={0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen=1;
					overrideParticle="smoking_barrel_small";
					overridePoint="Nabojnicestart";
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
		class NoiseShoot
		{
			strength=82;
			type="shot";
		};
	};
	class IMP_SR25 : IMP_SR25_Base {
		scope = 2;
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Automatic\SR25\data\SR25_New_co.paa"};
		barrelArmor=3.75;
        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000000000;
					healthLevels[]= {
					{1.0,{"IMPWMOD\Weapons\Automatic\SR25\data\SR25_New.rvmat"}},
					{0.7,{"IMPWMOD\Weapons\Automatic\SR25\data\SR25_New.rvmat"}},
					{0.5,{"IMPWMOD\Weapons\Automatic\SR25\data\SR25_New_damage.rvmat"}},
					{0.3,{"IMPWMOD\Weapons\Automatic\SR25\data\SR25_New_damage.rvmat"}},
					{0.0,{"IMPWMOD\Weapons\Automatic\SR25\data\SR25_New_destruct.rvmat"}}
					};
				};
			};
		};
	};
};

class CfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_SR25_10Rnd : Magazine_Base {
		scope = 2;
		displayName="$STR_IMP_SR25Mag";
		descriptionShort="$STR_IMP_SR25magcap";
		model="IMPWMOD\Weapons\Automatic\SR25\models\Mag_sr25_10Rnd.p3d";
		weight=75;
		recoilModifier[]={0.85, 0.85, 1};
		swayModifier[]={0.85, 0.85, 1};
		ammo = "Bullet_308Win";
		ammoItems[] = {"Ammo_308Win", "Ammo_308WinTracer"};
		itemSize[]={1,2};
		count=10;
        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000;
					healthLevels[]= {
					{1.0,{"IMPWMOD\Weapons\Automatic\SR25\data\SR25_Mag10.rvmat"}},
					{0.7,{"IMPWMOD\Weapons\Automatic\SR25\data\SR25_Mag10.rvmat"}},
					{0.5,{"IMPWMOD\Weapons\Automatic\SR25\data\SR25_Mag10_damage.rvmat"}},
					{0.3,{"IMPWMOD\Weapons\Automatic\SR25\data\SR25_Mag10_damage.rvmat"}},
					{0.0,{"IMPWMOD\Weapons\Automatic\SR25\data\SR25_Mag10_destruct.rvmat"}}
					};
				};
			};
		};
	};

	class IMP_Mag_SR25_20Rnd : Magazine_Base {
		scope = 2;
		displayName="$STR_IMP_SR25Mag";
		descriptionShort="$STR_IMP_G28Mag1";
		model="\IMPWMOD\Weapons\Automatic\SR25\models\Mag_sr25_20Rnd.p3d";
		weight=150;
		ammo = "Bullet_308Win";
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		ammoItems[] = {"Ammo_308Win", "Ammo_308WinTracer"};
		itemSize[]={1,3};
		count=20;
        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000;
					healthLevels[]= {
					{1.0,{"IMPWMOD\Weapons\Automatic\SR25\data\SR25_Mag20.rvmat"}},
					{0.7,{"IMPWMOD\Weapons\Automatic\SR25\data\SR25_Mag20.rvmat"}},
					{0.5,{"IMPWMOD\Weapons\Automatic\SR25\data\SR25_Mag20_damage.rvmat"}},
					{0.3,{"IMPWMOD\Weapons\Automatic\SR25\data\SR25_Mag20_damage.rvmat"}},
					{0.0,{"IMPWMOD\Weapons\Automatic\SR25\data\SR25_Mag20_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class IMP_Mag_SR25_Tape_40Rnd : Magazine_Base {
		scope = 2;
		displayName="$STR_IMP_SR25Mag";
		descriptionShort="$STR_IMP_G28Mag2";
		model="\IMPWMOD\Weapons\Automatic\SR25\models\Mag_sr25_Tape_40_Rnd.p3d";
		weight=800;
		ammo = "Bullet_308Win";
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		ammoItems[] = {"Ammo_308Win", "Ammo_308WinTracer"};
		itemSize[]={2,3};
		count=40;
        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000000;
					healthLevels[]= {
					{1.0,{"IMPWMOD\Weapons\Automatic\SR25\data\SR25_Mag20.rvmat"}},
					{0.7,{"IMPWMOD\Weapons\Automatic\SR25\data\SR25_Mag20.rvmat"}},
					{0.5,{"IMPWMOD\Weapons\Automatic\SR25\data\SR25_Mag20_damage.rvmat"}},
					{0.3,{"IMPWMOD\Weapons\Automatic\SR25\data\SR25_Mag20_damage.rvmat"}},
					{0.0,{"IMPWMOD\Weapons\Automatic\SR25\data\SR25_Mag20_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class IMP_Mag_SR25_Clip_40Rnd : Magazine_Base {
		scope = 2;
		displayName="$STR_IMP_SR25Mag";
		descriptionShort="$STR_IMP_G28Mag2";
		model="\IMPWMOD\Weapons\Automatic\SR25\models\Mag_sr25_Clip_40_Rnd.p3d";
		weight=800;
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		ammo = "Bullet_308Win";
		ammoItems[] = {"Ammo_308Win", "Ammo_308WinTracer"};
		itemSize[]={2,3};
		count=40;
        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000;
					healthLevels[]= {
					{1.0,{"IMPWMOD\Weapons\Automatic\SR25\data\SR25_Mag20.rvmat"}},
					{0.7,{"IMPWMOD\Weapons\Automatic\SR25\data\SR25_Mag20.rvmat"}},
					{0.5,{"IMPWMOD\Weapons\Automatic\SR25\data\SR25_Mag20_damage.rvmat"}},
					{0.3,{"IMPWMOD\Weapons\Automatic\SR25\data\SR25_Mag20_damage.rvmat"}},
					{0.0,{"IMPWMOD\Weapons\Automatic\SR25\data\SR25_Mag20_destruct.rvmat"}}
					};
				};
			};
		};
	};
};

class CfgNonAIVehicles {
	class ProxyAttachment;


	class ProxyMag_sr25_10Rnd : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\SR25\models\Mag_sr25_10Rnd.p3d";
	};
	
	class ProxyMag_sr25_20Rnd : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\SR25\models\Mag_sr25_20Rnd.p3d";
	};
	class ProxyMag_sr25_Clip_40_Rnd : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\SR25\models\Mag_sr25_Clip_40_Rnd.p3d";
	};
	class ProxyMag_sr25_Tape_40_Rnd : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\SR25\models\Mag_sr25_Tape_40_Rnd.p3d";
	};
};
class CfgSoundSets 
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class Rifle_silencerTail_Base_SoundSet;
	class Rifle_silencerInteriorTail_Base_SoundSet;
	class SR25_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"SR25_closeShot_SoundShader",
			"SR25_midShot_SoundShader",
			"SR25_distShot_SoundShader"
		};
	};
	class SR25_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"SR25_tailDistant_SoundShader",
			"SR25_tailTrees_SoundShader",
			"SR25_tailForest_SoundShader",
			"SR25_tailMeadows_SoundShader",
			"SR25_tailHouses_SoundShader"
		};
	};
	class SR25_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"SR25_tailInterior_SoundShader"
		};
	};
	class SR25_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"SR25_silencerCloseShot_SoundShader",
			"SR25_silencerMidShot_SoundShader",
			"SR25_silencerDistShot_SoundShader"
		};
	};
	class SR25_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"SR25_silencerTailTrees_SoundShader",
			"SR25_silencerTailForest_SoundShader",
			"SR25_silencerTailMeadows_SoundShader",
			"SR25_silencerTailHouses_SoundShader"
		};
	};
	class SR25_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"SR25_silencerTailInterior_SoundShader"
		};
	};
};
class CfgSoundShaders 
{
	class tailInteriorRifle_SoundShader;
	class tailTreesRifle_SoundShader;
	class tailMeadowsRifle_SoundShader;
	class tailHousesRifle_SoundShader;
	class tailForestRifle_SoundShader;
	class tailDistantRifle_SoundShader;
	class base_Closure_SoundShader;
	class distShotRifle_SoundShader;
	class midShotRifle_SoundShader;
	class closeShotRifle_SoundShader;
	class base_ProfessionalSilenced_closeShot_SoundShader;
	class base_ProfessionalSilenced_midShot_SoundShader;
	class base_ProfessionalSilenced_distShot_SoundShader;
	class base_ProfessionalSilenced_tailForest_SoundShader;
	class base_ProfessionalSilenced_tailHouses_SoundShader;
	class base_ProfessionalSilenced_tailMeadows_SoundShader;
	class base_ProfessionalSilenced_tailTrees_SoundShader;
	class base_ProfessionalSilenced_tailInterior_SoundShader;
	class SR25_closeShot_SoundShader: closeShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SR25\sounds\sr25_fire_outdoor_close", 1},{"IMPWMOD\Weapons\Automatic\SR25\sounds\sr25_fire_outdoor_close", 1},{"IMPWMOD\Weapons\Automatic\SR25\sounds\sr25_fire_outdoor_close", 1}};
		volume=0.8;
	};
	class SR25_midShot_SoundShader: midShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SR25\sounds\sr25_fire_outdoor_close", 1},{"IMPWMOD\Weapons\Automatic\SR25\sounds\sr25_fire_outdoor_close", 1},{"IMPWMOD\Weapons\Automatic\SR25\sounds\sr25_fire_outdoor_close", 1}};
		volume=0.5;
	};
	class SR25_distShot_SoundShader: distShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SR25\sounds\sr25_fire_outdoor_distant", 1},{"IMPWMOD\Weapons\Automatic\SR25\sounds\sr25_fire_outdoor_distant", 1},{"IMPWMOD\Weapons\Automatic\SR25\sounds\sr25_fire_outdoor_distant", 1}};
		volume=0.3;
	};
	class SR25_tailDistant_SoundShader: tailDistantRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SR25\sounds\sr25_fire_outdoor_far", 1}};
		volume=0.8;
	};
	class SR25_tailForest_SoundShader: tailForestRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SR25\sounds\sr25_fire_outdoor_far", 1}};
	};
	class SR25_tailHouses_SoundShader: tailHousesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SR25\sounds\sr25_fire_outdoor_far", 1}};
	};
	class SR25_tailMeadows_SoundShader: tailMeadowsRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SR25\sounds\sr25_fire_outdoor_far", 1}};
	};
	class SR25_tailTrees_SoundShader: tailTreesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SR25\sounds\sr25_fire_outdoor_far", 1}};
	};
	class SR25_tailInterior_SoundShader: tailInteriorRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SR25\sounds\sr25_fire_outdoor_far", 1}};
	};
	class SR25_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SR25\sounds\sr25_fire_outdoor_silenced_close", 1},{"IMPWMOD\Weapons\Automatic\SR25\sounds\sr25_fire_outdoor_silenced_close", 1},{"IMPWMOD\Weapons\Automatic\SR25\sounds\sr25_fire_outdoor_silenced_close", 1}};
		volume=0.5;
	};
	class SR25_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SR25\sounds\sr25_fire_outdoor_silenced_close", 1},{"IMPWMOD\Weapons\Automatic\SR25\sounds\sr25_fire_outdoor_silenced_close", 1},{"IMPWMOD\Weapons\Automatic\SR25\sounds\sr25_fire_outdoor_silenced_close", 1}};
		volume=0.3;
	};
	class SR25_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SR25\sounds\sr25_fire_outdoor_silenced_distant", 1},{"IMPWMOD\Weapons\Automatic\SR25\sounds\sr25_fire_outdoor_silenced_distant", 1},{"IMPWMOD\Weapons\Automatic\SR25\sounds\sr25_fire_outdoor_silenced_distant", 1}};
		volume=0.15;
	};
	class SR25_silencerTailForest_SoundShader: base_ProfessionalSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SR25\sounds\sr25_fire_outdoor_silenced_distant", 1}};
	};
	class SR25_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SR25\sounds\sr25_fire_outdoor_silenced_distant", 1}};
	};
	class SR25_silencerTailMeadows_SoundShader: base_ProfessionalSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SR25\sounds\sr25_fire_outdoor_silenced_distant", 1}};
	};
	class SR25_silencerTailTrees_SoundShader: base_ProfessionalSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SR25\sounds\sr25_fire_outdoor_silenced_distant", 1}};
	};
	class SR25_silencerTailInterior_SoundShader: base_ProfessionalSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\SR25\sounds\sr25_fire_outdoor_silenced_distant", 1}};
	};
};