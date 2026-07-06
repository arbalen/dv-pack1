	class CfgPatches 
{
	class IMP_PKP_Zenitco
	{
		units[] = 
		{
			"IMP_PKPZ_Black",
			"IMP_PKPZ_FDE"
		};
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
	class IMP_PKPZ_Base : Rifle_Base {
		scope = 0;
		displayName = "$STR_IMP_PKPZenitko";
		descriptionShort = "$STR_IMP_PKPTact2";
		model = "IMPWMOD\Weapons\Submachine\PKPZenitco\models\ZenitcoPKP.p3d";
		attachments[] = 
		{
			"weaponWrap",
			"weaponMuzzleAK",
			"weaponOptics",
			"ZenitkoBttstck",
			"weaponFlashlight",
			"grip1", 
			"weaponBipod",
			"HandlesAK"
		};
		itemSize[] = {10, 2};
		initSpeedMultiplier = 1;
		weight = 14000;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {10};
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		WeaponLength = 0.91;
		barrelArmor = 8.5;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_762x54", "Ammo_762x54Tracer"};
		magazines[] = {"IMP_Mag_PKP_200Rnd"};
		magazineSwitchTime=0.2;
		ejectType=1;
		recoilModifier[]={0.25,0.25,0.25};
		swayModifier[]={0,0,0};
		hiddenSelections[] = {"PKP1", "PKP2", "PKP3", "PKP4", "PKP5", "PKP6"};
		hiddenSelectionsMaterials[] = {"IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp.rvmat", "IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp2.rvmat", "IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp3.rvmat", "IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp4.rvmat", "IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp5.rvmat", "IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp6.rvmat"};
		simpleHiddenSelections[] = {"HandlesAK"};
		modes[] = {"FullAuto", "SemiAuto"};
		class SemiAuto : Mode_SemiAuto {
			soundSetShot[] = {"PKPZ_Shot_SoundSet", "PKPZ_Tail_SoundSet", "PKPZ_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "PKPZ_silencer_SoundSet", "PKPZ_silencerTail_SoundSet", "PKPZ_silencerInteriorTail_SoundSet"}};
			reloadTime=0.08;
			recoil="recoil_AKM";
			recoilProne="recoil_AKM_prone";
			dispersion=0;
			magazineSlot="magazine";
		};
		class FullAuto : Mode_FullAuto {
			soundSetShot[] = {"PKPZ_Shot_SoundSet", "PKPZ_Tail_SoundSet", "PKPZ_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "PKPZ_silencer_SoundSet", "PKPZ_silencerTail_SoundSet", "PKPZ_silencerInteriorTail_SoundSet"}};
			reloadTime=0.08;
			recoil="recoil_AKM";
			recoilProne="recoil_AKM_prone";
			dispersion=0;
			magazineSlot="magazine";
		};
		class NoiseShoot
		{
			strength=130;
			type="shot";
		};
		class OpticsInfo : OpticsInfoRifle {
			memoryPointCamera = "eye";
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
		};
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 100000000;
					healthLevels[] = {
						{1.0, {"IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp.rvmat","IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp2.rvmat","IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp3.rvmat","IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp4.rvmat","IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp5.rvmat","IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp6.rvmat"}}, 
						{0.7, {"IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp.rvmat","IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp2.rvmat","IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp3.rvmat","IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp4.rvmat","IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp5.rvmat","IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp6.rvmat"}}, 
						{0.5, {"IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp_damage.rvmat","IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp2_damage.rvmat","IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp3_damage.rvmat","IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp4_damage.rvmat","IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp5_damage.rvmat","IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp6_damage.rvmat"}}, 
						{0.3, {"IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp_damage.rvmat","IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp2_damage.rvmat","IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp3_damage.rvmat","IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp4_damage.rvmat","IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp5_damage.rvmat","IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp6_damage.rvmat"}}, 
						{0.01, {"IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp_destruct.rvmat","IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp2_destruct.rvmat","IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp3_destruct.rvmat","IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp4_destruct.rvmat","IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp5_destruct.rvmat","IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp6_destruct.rvmat"}}
					};
				};
			};
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
					overrideParticle="weapon_shot_akm_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={-0.050000001,0,0};
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
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.5};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.5,0.80000001};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.80000001,1};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.30000001,0,0};
					onlyWithinRainLimits[]={0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.30000001,0,0};
					onlyWithinRainLimits[]={0.5,1};
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
	class IMP_PKPZ_Black : IMP_PKPZ_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp1_co.paa",
			"IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp2_co.paa",
			"IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp3_co.paa", 
			"IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp4_co.paa", 
			"IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp5_co.paa", 
			"IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp6_co.paa"
		};
	};
	class IMP_PKPZ_FDE : IMP_PKPZ_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = 
		{
			"IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp1_fde.paa",
			"IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp2_fde.paa",
			"IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp3_co.paa", 
			"IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp4_fde.paa", 
			"IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp5_fde.paa", 
			"IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp6_co.paa"
		};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class IMP_PKP_Bttstck: Inventory_Base
	{
		scope=2;
		displayName="$STR_IMP_PKPZenitko2";
		descriptionShort="$STR_IMP_PKPZenitko3";
		model="IMPWMOD\Weapons\Submachine\PKPZenitco\models\ZenitkoBttstck.p3d";
		rotationFlags=17;
		reversed=0;
		inventorySlot[]=
		{
			"ZenitkoBttstck"
		};
		weight=363;
		itemSize[]={3,1};
		recoilModifier[]={0.8, 0.8, 1};
		swayModifier[]={1,1,1};
		hiddenSelections[]=
		{
			"camoflage"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp5_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp5.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						{
							1.01,
							{
								"IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp5.rvmat"
							}
						},
						{
							0.69999999,
							{
								"IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp5.rvmat"
							}
						},
						{
							0.5,
							{
								"IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp5_damage.rvmat"
							}
						},
						{
							0.30000001,
							{
								"IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp5_damage.rvmat"
							}
						},
						{
							0.01,
							{
								"IMPWMOD\Weapons\Submachine\PKPZenitco\data\pkp5_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeLightBlunt";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeLightBlunt_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeLightBlunt_Heavy";
				range=2.8;
			};
		};
	};
	class IMP_PKP_Bttstck_FDE: IMP_PKP_Bttstck
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoflage"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Submachine\PKPZenitco\data\PKP5_fde.paa"
		};
	};
};
class CfgSlots {
	class Slot_ZenitkoBttstck {
		name = "ZenitkoBttstck";
		displayName = "$STR_IMP_PKPZenitko4";
		modGhostIcon = "set:Slots image:Butts";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyZenitkoBttstck: ProxyAttachment
	{
		scope=2;
		inventorySlot="ZenitkoBttstck";
		model="IMPWMOD\Weapons\Submachine\PKPZenitco\models\ZenitkoBttstck.p3d";
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
	class PKPZ_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"PKPZ_closeShot_SoundShader",
			"PKPZ_midShot_SoundShader",
			"PKPZ_distShot_SoundShader"
		};
	};
	class PKPZ_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"PKPZ_tailDistant_SoundShader",
			"PKPZ_tailTrees_SoundShader",
			"PKPZ_tailForest_SoundShader",
			"PKPZ_tailMeadows_SoundShader",
			"PKPZ_tailHouses_SoundShader"
		};
	};
	class PKPZ_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"PKPZ_tailInterior_SoundShader"
		};
	};
	class PKPZ_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"PKPZ_silencerCloseShot_SoundShader",
			"PKPZ_silencerMidShot_SoundShader",
			"PKPZ_silencerDistShot_SoundShader"
		};
	};
	class PKPZ_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"PKPZ_silencerTailTrees_SoundShader",
			"PKPZ_silencerTailForest_SoundShader",
			"PKPZ_silencerTailMeadows_SoundShader",
			"PKPZ_silencerTailHouses_SoundShader"
		};
	};
	class PKPZ_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"PKPZ_silencerTailInterior_SoundShader"
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
	class PKPZ_closeShot_SoundShader: closeShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKPZenitco\sounds\pkp_close", 1},{"IMPWMOD\Weapons\Submachine\PKPZenitco\sounds\pkp_close", 1},{"IMPWMOD\Weapons\Submachine\PKPZenitco\sounds\pkp_close", 1}};
		volume=1.0;
	};
	class PKPZ_midShot_SoundShader: midShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKPZenitco\sounds\pkp_mid", 1},{"IMPWMOD\Weapons\Submachine\PKPZenitco\sounds\pkp_mid", 1},{"IMPWMOD\Weapons\Submachine\PKPZenitco\sounds\pkp_mid", 1}};
		volume=0.8;
	};
	class PKPZ_distShot_SoundShader: distShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKPZenitco\sounds\pkp_far", 1},{"IMPWMOD\Weapons\Submachine\PKPZenitco\sounds\pkp_far", 1},{"IMPWMOD\Weapons\Submachine\PKPZenitco\sounds\pkp_far", 1}};
		volume=0.5;
	};
	class PKPZ_tailDistant_SoundShader: tailDistantRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKPZenitco\sounds\pkp_far", 1}};
		volume=1.0;
	};
	class PKPZ_tailForest_SoundShader: tailForestRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKPZenitco\sounds\pkp_far", 1}};
	};
	class PKPZ_tailHouses_SoundShader: tailHousesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKPZenitco\sounds\pkp_far", 1}};
	};
	class PKPZ_tailMeadows_SoundShader: tailMeadowsRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKPZenitco\sounds\pkp_far", 1}};
	};
	class PKPZ_tailTrees_SoundShader: tailTreesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKPZenitco\sounds\pkp_far", 1}};
	};
	class PKPZ_tailInterior_SoundShader: tailInteriorRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKPZenitco\sounds\pkp_far", 1}};
	};
	class PKPZ_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKPZenitco\sounds\pkp_supp", 1},{"IMPWMOD\Weapons\Submachine\PKPZenitco\sounds\pkp_supp", 1},{"IMPWMOD\Weapons\Submachine\PKPZenitco\sounds\pkp_supp", 1}};
		volume=0.5;
	};
	class PKPZ_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKPZenitco\sounds\pkp_supp", 1},{"IMPWMOD\Weapons\Submachine\PKPZenitco\sounds\pkp_supp", 1},{"IMPWMOD\Weapons\Submachine\PKPZenitco\sounds\pkp_supp", 1}};
		volume=0.3;
	};
	class PKPZ_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKPZenitco\sounds\pkp_supp", 1},{"IMPWMOD\Weapons\Submachine\PKPZenitco\sounds\pkp_supp", 1},{"IMPWMOD\Weapons\Submachine\PKPZenitco\sounds\pkp_supp", 1}};
		volume=0.15;
	};
	class PKPZ_silencerTailForest_SoundShader: base_ProfessionalSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKPZenitco\sounds\pkp_supp", 1}};
	};
	class PKPZ_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKPZenitco\sounds\pkp_supp", 1}};
	};
	class PKPZ_silencerTailMeadows_SoundShader: base_ProfessionalSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKPZenitco\sounds\pkp_supp", 1}};
	};
	class PKPZ_silencerTailTrees_SoundShader: base_ProfessionalSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKPZenitco\sounds\pkp_supp", 1}};
	};
	class PKPZ_silencerTailInterior_SoundShader: base_ProfessionalSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKPZenitco\sounds\pkp_supp", 1}};
	};
};