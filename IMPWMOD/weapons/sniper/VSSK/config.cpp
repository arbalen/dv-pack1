class CfgPatches
{
	class IMP_Weapons_VSSK
	{
		units[] = {};
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
class Mode_FullAuto;
class OpticsInfoRifle;
class CfgWeapons
{
	class Rifle_Base;
	class IMP_VSSK_Base: Rifle_Base
	{
		scope=0;
		weight=9700;
		absorbency=0.1;
		repairableWithKits[]={1};
		repairCosts[]={10};
		PPDOFProperties[]={1,0.5,50,180,4,10};
		WeaponLength=1;
		initSpeedMultiplier = 1;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[] = {"IMP_Ammo_127x55"};
		magazines[] = {"IMP_Mag_VSSK_5Rnd"};
		magazineSwitchTime=0.25;
		ejectType=1;
		attachments[] = {"weaponWrap", "weaponOpticsHunting"};
		itemSize[] = {10, 2};
		barrelArmor=1.6;
		recoilModifier[]={0.25,0.25,0.25};
		swayModifier[]={0,0,0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000000000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"IMPWMOD\Weapons\Sniper\VSSK\data\VSSK.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Sniper\VSSK\data\VSSK.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Sniper\VSSK\data\VSSK_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Sniper\VSSK\data\VSSK_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"IMPWMOD\Weapons\Sniper\VSSK\data\VSSK_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		simpleHiddenSelections[] = {};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsMaterials[] = {"IMPWMOD\Weapons\Sniper\VSSK\data\VSSK.rvmat"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Sniper\VSSK\data\VSSK_co.paa"};
		modes[] = {"Single"};
		
		class Single : Mode_SemiAuto {
			soundSetShot[]= {"VSSK_Shot_SoundSet","VSSK_Tail_SoundSet","VSSK_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"VSSK_silencerHomeMade_SoundSet","VSSK_silencerHomeMadeTail_SoundSet","VSSK_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.750;
			recoil = "recoil_svd";
			recoilProne = "recoil_svd_prone";
			dispersion=0;
			magazineSlot = "magazine";
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
			discreteDistanceInitIndex=0;
		};
		class NoiseShoot
		{
			strength=100;
			type="shot";
		};	
	};
	
	class IMP_VSSK : IMP_VSSK_Base 
	{
		scope=2;
		displayName="$STR_IMP_VSSK";
		descriptionShort="Оружие использует калибр 12.7x55 | The weapon uses a 12.7x55 caliber.";
		model="IMPWMOD\Weapons\Sniper\VSSK\models\IMP_VSSK.p3d";
		attachments[]=
		{
			"weaponWrap", "weaponOpticsHunting", "VSSK_Supp"
		};
   
   class Dev_VSSK_Egorik: IMP_VSSK_Base
    {
        scope=2;
		displayName = "VSSK";
        hiddenSelectionsTextures[]=
        {
            "Devastion_Retex2\Weapon\egorik\data\vssk_egorik.paa"
        };
    };
	
	};
};

class cfgMagazines {
	class Magazine_Base;
	
	class IMP_Mag_VSSK_5Rnd : Magazine_Base {
		scope = 2;
		displayName = "$STR_IMP_VSSK3";
		descriptionShort = "$STR_IMP_VSSK4";
		model = "IMPWMOD\Weapons\Sniper\VSSK\models\IMP_VSSK_Mag.p3d";
		weight = 400;
		itemSize[] = {2, 2};
		count = 5;
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		ammo = "IMP_Bullet_127x55";
		ammoItems[] = {"IMP_Ammo_127x55"};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsMaterials[] = {"IMPWMOD\Weapons\Sniper\VSSK\data\VSSK_Mag.rvmat"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Sniper\VSSK\data\VSSK_Mag_co.paa"};
		tracersEvery = 0;
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 100000000000;
					healthLevels[] = {{1.01, {"IMPWMOD\Weapons\Sniper\VSSK\data\VSSK_Mag.rvmat"}}, {0.7, {"IMPWMOD\Weapons\Sniper\VSSK\data\VSSK_Mag.rvmat"}}, {0.5, {"IMPWMOD\Weapons\Sniper\VSSK\data\VSSK_Mag_damage.rvmat"}}, {0.3, {"IMPWMOD\Weapons\Sniper\VSSK\data\VSSK_Mag_damage.rvmat"}}, {0.01, {"IMPWMOD\Weapons\Sniper\VSSK\data\VSSK_Mag_destruct.rvmat"}}};
				};
			};
		};
		
		class AnimEvents {
			class SoundWeapon {
				class MagRifle_fill_in {
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				
				class MagRifle_fill_loop {
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				
				class MagRifle_fill_out {
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				
				class MagRifle_empty_in {
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				
				class MagRifle_empty_loop {
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				
				class MagRifle_empty_out {
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				
				class MagPistol_fill_in {
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				
				class MagPistol_fill_loop {
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				
				class MagPistol_fill_out {
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				
				class MagPistol_empty_in {
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				
				class MagPistol_empty_loop {
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				
				class MagPistol_empty_out {
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
};

class CfgSoundSets {
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class Rifle_silencerHomemadeTail_Base_SoundSet;
	class Rifle_silencerInteriorHomeMadeTail_Base_SoundSet;
	class VSSK_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"VSSK_closeShot_SoundShader",
			"VSSK_midShot_SoundShader",
			"VSSK_distShot_SoundShader"
		};
	};
	class VSSK_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"VSSK_tailDistant_SoundShader",
			"VSSK_tailTrees_SoundShader",
			"VSSK_tailForest_SoundShader",
			"VSSK_tailMeadows_SoundShader",
			"VSSK_tailHouses_SoundShader"
		};
	};
	class VSSK_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"VSSK_tailInterior_SoundShader"
		};
	};
	class VSSK_silencerHomeMade_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[]=
		{
			"VSSK_silencerHomeMadeCloseShot_SoundShader",
			"VSSK_silencerHomeMadeMidShot_SoundShader",
			"VSSK_silencerHomeMadeDistShot_SoundShader"
		};
	};
	class VSSK_silencerHomeMadeTail_SoundSet: Rifle_silencerHomemadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"VSSK_silencerHomeMadeTailTrees_SoundShader",
			"VSSK_silencerHomeMadeTailForest_SoundShader",
			"VSSK_silencerHomeMadeTailMeadows_SoundShader",
			"VSSK_silencerHomeMadeTailHouses_SoundShader"
		};
	};
	class VSSK_silencerInteriorHomeMadeTail_SoundSet: Rifle_silencerInteriorHomeMadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"VSSK_silencerHomeMadeTailInterior_SoundShader"
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
	class VSSK_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\VSSK\sounds\VSSK_Shot", 1}, {"IMPWMOD\Weapons\Sniper\VSSK\sounds\VSSK_Shot", 1}, {"IMPWMOD\Weapons\Sniper\VSSK\sounds\VSSK_Shot", 1}};
		volume=1.5;
	};
	class VSSK_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\VSSK\sounds\VSSK_Shot", 1}, {"IMPWMOD\Weapons\Sniper\VSSK\sounds\VSSK_Shot", 1}, {"IMPWMOD\Weapons\Sniper\VSSK\sounds\VSSK_Shot", 1}};
		volume=1.2;
	};
	class VSSK_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\VSSK\sounds\VSSK_Shot", 1}, {"IMPWMOD\Weapons\Sniper\VSSK\sounds\VSSK_Shot", 1}, {"IMPWMOD\Weapons\Sniper\VSSK\sounds\VSSK_Shot", 1}};
		volume=0.7;
	};
	class VSSK_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\VSSK\sounds\VSSK_Shot", 1}};
		volume=1.5;
	};
	class VSSK_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\VSSK\sounds\VSSK_Shot", 1}};
	};
	class VSSK_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\VSSK\sounds\VSSK_Shot", 1}};
	};
	class VSSK_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\VSSK\sounds\VSSK_Shot", 1}};
	};
	class VSSK_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\VSSK\sounds\VSSK_Shot", 1}};
	};
	class VSSK_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\VSSK\sounds\VSSK_Shot", 1}};
	};
	class VSSK_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\VSSK\sounds\VSSK_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\VSSK\sounds\VSSK_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\VSSK\sounds\VSSK_Shot_Supp", 1}};
		volume=1.0;
	};
	class VSSK_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\VSSK\sounds\VSSK_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\VSSK\sounds\VSSK_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\VSSK\sounds\VSSK_Shot_Supp", 1}};
		volume=0.8;
	};
	class VSSK_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\VSSK\sounds\VSSK_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\VSSK\sounds\VSSK_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\VSSK\sounds\VSSK_Shot_Supp", 1}};
		volume=0.5;
	};
	class VSSK_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\VSSK\sounds\VSSK_Shot_Supp", 1}};
	};
	class VSSK_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\VSSK\sounds\VSSK_Shot_Supp", 1}};
	};
	class VSSK_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\VSSK\sounds\VSSK_Shot_Supp", 1}};
	};
	class VSSK_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\VSSK\sounds\VSSK_Shot_Supp", 1}};
	};
	class VSSK_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\VSSK\sounds\VSSK_Shot_Supp", 1}};
	};
};