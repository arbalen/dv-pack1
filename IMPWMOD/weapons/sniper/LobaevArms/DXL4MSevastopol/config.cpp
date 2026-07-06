class CfgPatches
{
	class IMP_W_DXL4MSevastopol
	{
		units[]={};
		weapons[]=
		{
			"IMP_W_DXL4MSevastopol"
		};
		magazines[]=
		{
			"IMP_Mag_DXL4MSevastopol_5Rnd"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",
			"DZ_Sounds_Effects",
			"DZ_Weapons_Magazines"
		};
	};
};
class Mode_Safe;
class Mode_Single;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class BoltActionRifle_ExternalMagazine_Base;
	class IMP_W_DXL4MSevastopol_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope=0;
		displayName="$STR_IMP_DXL1";
		descriptionShort="Оружие использует калибр 408 | The weapon uses a 408 caliber.";
		weight=8500;
		model="IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\models\DXL4MSevastopol.p3d";
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={30,25};
		PPDOFProperties[]={1,0.60000002,50,200,4,10};
		initSpeedMultiplier=1.1;
		WeaponLength=1;
		barrelArmor=3.888;
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsHunting",
			"weaponBipod",
			"grip1", 
			"HandlesM4"
		};
		itemSize[]={9,2};
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"IMP_Ammo_408"
		};
		magazines[]=
		{
			"IMP_Mag_DXL4MSevastopol_5Rnd"
		};
		ejectType=1;
		recoilModifier[]={0.25,0.25,0.25};
		swayModifier[]={0,0,0};
		simpleHiddenSelections[]=
		{
			"hide_barrel", "HandlesM4"
		};
		modes[]=
		{
			"Single"
		};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\data\body_co.paa"};
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\data\material.rvmat"};
		class Single: Mode_Single
		{
			soundSetShot[]= {"DXL4M_Shot_SoundSet","DXL4M_Tail_SoundSet","DXL4M_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"DXL4M_silencerHomeMade_SoundSet","DXL4M_silencerHomeMadeTail_SoundSet","DXL4M_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=0.12;
			dispersion=0;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={100,200,300,400,500};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=500;
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
				maxOverheatingValue=120;
				shotsToStartOverheating=2;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					positionOffset[]={-0.02,0,0};
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.2};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[]={0.1,0,0};
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.2,0.60000002};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[]={0.30000001,0,0};
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
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 2000000;
                    healthLevels[] = 
                    {
                        {1.0,{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\data\material.rvmat"}},
                        {0.7,{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\data\material.rvmat"}},
                        {0.5,{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\data\material_damage.rvmat"}},
                        {0.3,{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\data\material_damage.rvmat"}},
                        {0.0,{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\data\material_destruct.rvmat"}}
                    };
                };
            };
        };   
	};
	class IMP_W_DXL4MSevastopol: IMP_W_DXL4MSevastopol_Base
	{
		scope=2;
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_DXL4MSevastopol_5Rnd: Magazine_Base
	{
		scope=2;
		displayName="$STR_IMP_DXL3";
		descriptionShort="$STR_IMP_DXL4";
		model="IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\models\Mag_DXL4MSevastopol_5Rnd.p3d";
		weight=300;
		itemSize[]={1,2};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		count=5;
		ammo="IMP_Bullet_408";
		ammoItems[]=
		{
			"IMP_Ammo_408"
		};
		tracersEvery=0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=2000000;
					healthLevels[]=
					{
						{1,{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\data\material.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\data\material.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\data\material_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\data\material_damage.rvmat"}},
						{0,{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\data\material_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet="MagRifle_fill_in_SoundSet";
					id=1;
				};
				class MagRifle_fill_loop
				{
					soundSet="MagRifle_fill_loop_SoundSet";
					id=2;
				};
				class MagRifle_fill_out
				{
					soundSet="MagRifle_fill_out_SoundSet";
					id=3;
				};
				class MagRifle_empty_in
				{
					soundSet="MagRifle_empty_in_SoundSet";
					id=4;
				};
				class MagRifle_empty_loop
				{
					soundSet="MagRifle_empty_loop_SoundSet";
					id=5;
				};
				class MagRifle_empty_out
				{
					soundSet="MagRifle_empty_out_SoundSet";
					id=6;
				};
				class MagPistol_fill_in
				{
					soundSet="MagPistol_fill_in_SoundSet";
					id=7;
				};
				class MagPistol_fill_loop
				{
					soundSet="MagPistol_fill_loop_SoundSet";
					id=8;
				};
				class MagPistol_fill_out
				{
					soundSet="MagPistol_fill_out_SoundSet";
					id=9;
				};
				class MagPistol_empty_in
				{
					soundSet="MagPistol_empty_in_SoundSet";
					id=10;
				};
				class MagPistol_empty_loop
				{
					soundSet="MagPistol_empty_loop_SoundSet";
					id=11;
				};
				class MagPistol_empty_out
				{
					soundSet="MagPistol_empty_out_SoundSet";
					id=12;
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyMag_DXL4MSevastopol_5Rnd: ProxyAttachment
	{
		scope=0;
		inventorySlot="magazine";
		model="IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\models\Mag_DXL4MSevastopol_5Rnd.p3d";
	};
};
class CfgSoundSets {
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class Rifle_silencerHomemadeTail_Base_SoundSet;
	class Rifle_silencerInteriorHomeMadeTail_Base_SoundSet;
	class DXL4M_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"DXL4M_closeShot_SoundShader",
			"DXL4M_midShot_SoundShader",
			"DXL4M_distShot_SoundShader"
		};
	};
	class DXL4M_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DXL4M_tailDistant_SoundShader",
			"DXL4M_tailTrees_SoundShader",
			"DXL4M_tailForest_SoundShader",
			"DXL4M_tailMeadows_SoundShader",
			"DXL4M_tailHouses_SoundShader"
		};
	};
	class DXL4M_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DXL4M_tailInterior_SoundShader"
		};
	};
	class DXL4M_silencerHomeMade_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[]=
		{
			"DXL4M_silencerHomeMadeCloseShot_SoundShader",
			"DXL4M_silencerHomeMadeMidShot_SoundShader",
			"DXL4M_silencerHomeMadeDistShot_SoundShader"
		};
	};
	class DXL4M_silencerHomeMadeTail_SoundSet: Rifle_silencerHomemadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DXL4M_silencerHomeMadeTailTrees_SoundShader",
			"DXL4M_silencerHomeMadeTailForest_SoundShader",
			"DXL4M_silencerHomeMadeTailMeadows_SoundShader",
			"DXL4M_silencerHomeMadeTailHouses_SoundShader"
		};
	};
	class DXL4M_silencerInteriorHomeMadeTail_SoundSet: Rifle_silencerInteriorHomeMadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DXL4M_silencerHomeMadeTailInterior_SoundShader"
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
	class DXL4M_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\sounds\DXL4M_Shot", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\sounds\DXL4M_Shot", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\sounds\DXL4M_Shot", 1}};
		volume=1.5;
	};
	class DXL4M_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\sounds\DXL4M_Shot", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\sounds\DXL4M_Shot", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\sounds\DXL4M_Shot", 1}};
		volume=1.2;
	};
	class DXL4M_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\sounds\DXL4M_Shot", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\sounds\DXL4M_Shot", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\sounds\DXL4M_Shot", 1}};
		volume=0.7;
	};
	class DXL4M_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\sounds\DXL4M_Shot", 1}};
		volume=1.5;
	};
	class DXL4M_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\sounds\DXL4M_Shot", 1}};
	};
	class DXL4M_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\sounds\DXL4M_Shot", 1}};
	};
	class DXL4M_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\sounds\DXL4M_Shot", 1}};
	};
	class DXL4M_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\sounds\DXL4M_Shot", 1}};
	};
	class DXL4M_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\sounds\DXL4M_Shot", 1}};
	};
	class DXL4M_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\sounds\DXL4M_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\sounds\DXL4M_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\sounds\DXL4M_Shot_Supp", 1}};
		volume=1.0;
	};
	class DXL4M_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\sounds\DXL4M_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\sounds\DXL4M_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\sounds\DXL4M_Shot_Supp", 1}};
		volume=0.8;
	};
	class DXL4M_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\sounds\DXL4M_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\sounds\DXL4M_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\sounds\DXL4M_Shot_Supp", 1}};
		volume=0.5;
	};
	class DXL4M_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\sounds\DXL4M_Shot_Supp", 1}};
	};
	class DXL4M_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\sounds\DXL4M_Shot_Supp", 1}};
	};
	class DXL4M_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\sounds\DXL4M_Shot_Supp", 1}};
	};
	class DXL4M_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\sounds\DXL4M_Shot_Supp", 1}};
	};
	class DXL4M_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL4MSevastopol\sounds\DXL4M_Shot_Supp", 1}};
	};
};