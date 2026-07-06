class CfgPatches
{
	class IMP_Weapons_Fal
	{
		units[]=
		{
			"IMP_Fal"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms"
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
	class IMP_FAL_Base: Rifle_Base
	{
		scope=0;
		weight=3700;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,20,170,4,10};
		WeaponLength=0.77;
		barrelArmor=2.2;
		initSpeedMultiplier=0.89999998;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer"
		};
		magazines[]=
		{
			"Mag_FAL_20Rnd", "IMP_Mag_Fal_Drum_50Rnd", "IMP_Mag_FAL_CoupledTape_40Rnd", "IMP_Mag_FAL_CoupledClip_40Rnd"
		};
		magazineSwitchTime=0.44999999;
		ejectType=1;
		recoilModifier[]={0.25,0.25,0.25};
		swayModifier[]={0,0,0};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		modes[]=
		{
			"FullAuto",
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"FnFal_Shot_SoundSet", "FnFal_Tail_SoundSet", "FnFal_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "FnFal_silencer_SoundSet", "FnFal_silencerTail_SoundSet", "FnFal_silencerInteriorTail_SoundSet"}};
			reloadTime=0.08;
			recoil="recoil_fal";
			recoilProne="recoil_fal_prone";
			dispersion=0;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"FnFal_Shot_SoundSet", "FnFal_Tail_SoundSet", "FnFal_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "FnFal_silencer_SoundSet", "FnFal_silencerTail_SoundSet", "FnFal_silencerInteriorTail_SoundSet"}};
			reloadTime=0.07;
			recoil="recoil_fal";
			recoilProne="recoil_fal_prone";
			dispersion=0;
			magazineSlot="magazine";
		};
		class NoiseShoot
		{
			strength=100;
			type="shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={200,300,400,500,600};
			discreteDistanceInitIndex=0;
			distanceZoomMin=200;
			distanceZoomMax=600;
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
				class MuzzleFlashStar
				{
					overrideParticle="weapon_shot_Flame_3D_4star";
					ignoreIfSuppressed=1;
					overrideDirectionVector[]={0,45,0};
					positionOffset[]={0.0099999998,0,0};
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
					onlyWithinOverheatLimits[]={0,0.40000001};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.40000001,0.89999998};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.89999998,1};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.2,0,0};
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
	};
	class IMP_FAL: IMP_FAL_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_FAL0";
		descriptionShort="$STR_cfgWeapons_FAL1";
		model="\IMPWMOD\Weapons\Automatic\FnFal\models\IMP_FnFal.p3d";
		attachments[]=
		{
			"weaponOptics",
			"Suppressor_308",
			"weaponHandguardFnFal",
			"IMP_Fal_Buttstock",
			"weaponFlashlight",
			"weaponWrap", 
			"grip1",
			"weaponBipod"
		};
		itemSize[] = {9, 2};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"IMPWMOD\Weapons\Automatic\FnFal\data\FnFal.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Automatic\FnFal\data\FnFal.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Automatic\FnFal\data\FnFal_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Automatic\FnFal\data\FnFal_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"IMPWMOD\Weapons\Automatic\FnFal\data\FnFal_destruct.rvmat"
							}
						}
					};
				};
			};
		};
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
	class FnFal_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"FnFal_closeShot_SoundShader",
			"FnFal_midShot_SoundShader",
			"FnFal_distShot_SoundShader"
		};
	};
	class FnFal_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"FnFal_tailDistant_SoundShader",
			"FnFal_tailTrees_SoundShader",
			"FnFal_tailForest_SoundShader",
			"FnFal_tailMeadows_SoundShader",
			"FnFal_tailHouses_SoundShader"
		};
	};
	class FnFal_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"FnFal_tailInterior_SoundShader"
		};
	};
	class FnFal_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"FnFal_silencerCloseShot_SoundShader",
			"FnFal_silencerMidShot_SoundShader",
			"FnFal_silencerDistShot_SoundShader"
		};
	};
	class FnFal_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"FnFal_silencerTailTrees_SoundShader",
			"FnFal_silencerTailForest_SoundShader",
			"FnFal_silencerTailMeadows_SoundShader",
			"FnFal_silencerTailHouses_SoundShader"
		};
	};
	class FnFal_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"FnFal_silencerTailInterior_SoundShader"
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
	class FnFal_closeShot_SoundShader: closeShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\FnFal\sounds\FAL_fire_outdoor_close", 1},{"IMPWMOD\Weapons\Automatic\FnFal\sounds\FAL_fire_outdoor_close", 1},{"IMPWMOD\Weapons\Automatic\FnFal\sounds\FAL_fire_outdoor_close", 1}};
		volume=0.8;
	};
	class FnFal_midShot_SoundShader: midShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\FnFal\sounds\FAL_fire_outdoor_distant", 1},{"IMPWMOD\Weapons\Automatic\FnFal\sounds\FAL_fire_outdoor_distant", 1},{"IMPWMOD\Weapons\Automatic\FnFal\sounds\FAL_fire_outdoor_distant", 1}};
		volume=0.5;
	};
	class FnFal_distShot_SoundShader: distShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\FnFal\sounds\FAL_fire_outdoor_far", 1},{"IMPWMOD\Weapons\Automatic\FnFal\sounds\FAL_fire_outdoor_far", 1},{"IMPWMOD\Weapons\Automatic\FnFal\sounds\FAL_fire_outdoor_far", 1}};
		volume=0.3;
	};
	class FnFal_tailDistant_SoundShader: tailDistantRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\FnFal\sounds\FAL_fire_outdoor_far", 1}};
		volume=0.8;
	};
	class FnFal_tailForest_SoundShader: tailForestRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\FnFal\sounds\FAL_fire_outdoor_far", 1}};
	};
	class FnFal_tailHouses_SoundShader: tailHousesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\FnFal\sounds\FAL_fire_outdoor_far", 1}};
	};
	class FnFal_tailMeadows_SoundShader: tailMeadowsRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\FnFal\sounds\FAL_fire_outdoor_far", 1}};
	};
	class FnFal_tailTrees_SoundShader: tailTreesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\FnFal\sounds\FAL_fire_outdoor_far", 1}};
	};
	class FnFal_tailInterior_SoundShader: tailInteriorRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\FnFal\sounds\FAL_fire_outdoor_far", 1}};
	};
	class FnFal_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\FnFal\sounds\FAL_fire_outdoor_silenced_close", 1},{"IMPWMOD\Weapons\Automatic\FnFal\sounds\FAL_fire_outdoor_silenced_close", 1},{"IMPWMOD\Weapons\Automatic\FnFal\sounds\FAL_fire_outdoor_silenced_close", 1}};
		volume=0.5;
	};
	class FnFal_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\FnFal\sounds\FAL_fire_outdoor_silenced_close", 1},{"IMPWMOD\Weapons\Automatic\FnFal\sounds\FAL_fire_outdoor_silenced_close", 1},{"IMPWMOD\Weapons\Automatic\FnFal\sounds\FAL_fire_outdoor_silenced_close", 1}};
		volume=0.3;
	};
	class FnFal_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\FnFal\sounds\FAL_fire_outdoor_silenced_distant", 1},{"IMPWMOD\Weapons\Automatic\FnFal\sounds\FAL_fire_outdoor_silenced_distant", 1},{"IMPWMOD\Weapons\Automatic\FnFal\sounds\FAL_fire_outdoor_silenced_distant", 1}};
		volume=0.15;
	};
	class FnFal_silencerTailForest_SoundShader: base_ProfessionalSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\FnFal\sounds\FAL_fire_outdoor_silenced_distant", 1}};
	};
	class FnFal_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\FnFal\sounds\FAL_fire_outdoor_silenced_distant", 1}};
	};
	class FnFal_silencerTailMeadows_SoundShader: base_ProfessionalSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\FnFal\sounds\FAL_fire_outdoor_silenced_distant", 1}};
	};
	class FnFal_silencerTailTrees_SoundShader: base_ProfessionalSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\FnFal\sounds\FAL_fire_outdoor_silenced_distant", 1}};
	};
	class FnFal_silencerTailInterior_SoundShader: base_ProfessionalSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\FnFal\sounds\FAL_fire_outdoor_silenced_distant", 1}};
	};
};