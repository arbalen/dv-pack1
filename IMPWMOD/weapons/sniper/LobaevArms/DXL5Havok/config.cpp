class CfgPatches
{
	class IMP_W_DXL5Havok
	{
		units[]={};
		weapons[]=
		{
			"IMP_W_DXL5Havok"
		};
		magazines[]=
		{
			"IMP_Mag_DXL5Havok_7Rnd"
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
	class IMP_W_DXL5Havok_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope=0;
		displayName="$STR_IMP_devas1";
		descriptionShort="Оружие использует калибр 12.7x99 | The weapon uses a 12.7x99 caliber.";
		weight=13000;
		model="IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\models\DXL5Havok.p3d";
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
		itemSize[] = {10, 2};
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]={"IMP_Ammo_127x99"};
		magazines[]={"IMP_Mag_DXL5Havok_7Rnd"};
		ejectType=1;
		recoilModifier[]={0.25,0.25,0.25};
		swayModifier[]={0,0,0};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\data\body_co.paa"};
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\data\material.rvmat"};
		simpleHiddenSelections[]={"hide_barrel", "HandlesM4"};
		modes[]={"Single"};
		class Single: Mode_Single
		{
			soundSetShot[]= {"DXL5_Shot_SoundSet","DXL5_Tail_SoundSet","DXL5_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"DXL5_silencerHomeMade_SoundSet","DXL5_silencerHomeMadeTail_SoundSet","DXL5_silencerInteriorHomeMadeTail_SoundSet"}};
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
                    hitpoints = 20000000;
                    healthLevels[] = 
                    {
                        {1.0,{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\data\material.rvmat"}},
                        {0.7,{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\data\material.rvmat"}},
                        {0.5,{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\data\material_damage.rvmat"}},
                        {0.3,{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\data\material_damage.rvmat"}},
                        {0.0,{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\data\material_destruct.rvmat"}}
                    };
                };
            };
        };  
	};
	class IMP_W_DXL5Havok: IMP_W_DXL5Havok_Base
	{
		scope=2;
	};
	class IMP_W_DXL5Havok_Tkali: IMP_W_DXL5Havok
	{
		hiddenSelectionsTextures[]={"IMPWMODPart2\Weapons\Tex\havoc_tkali.paa"};
		scope=2;
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_DXL5Havok_7Rnd: Magazine_Base
	{
		scope=2;
		displayName="$STR_IMP_devas125";
		descriptionShort="$STR_IMP_devas126";
		model="IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\models\Mag_DXL5Havok_7Rnd.p3d";
		weight=300;
		itemSize[]={2,2};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		count=7;
		ammo = "IMP_Bullet_127x99";
		ammoItems[] = {"IMP_Ammo_127x99"};
		tracersEvery=0;
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 20000000;
                    healthLevels[] = 
                    {
                        {1.0,{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\data\material.rvmat"}},
                        {0.7,{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\data\material.rvmat"}},
                        {0.5,{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\data\material_damage.rvmat"}},
                        {0.3,{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\data\material_damage.rvmat"}},
                        {0.0,{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\data\material_destruct.rvmat"}}
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
	class ProxyMag_DXL5Havok_7Rnd: ProxyAttachment
	{
		scope=0;
		inventorySlot="magazine";
		model="IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\models\Mag_DXL5Havok_7Rnd.p3d";
	};
};
class CfgSoundSets {
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class Rifle_silencerHomemadeTail_Base_SoundSet;
	class Rifle_silencerInteriorHomeMadeTail_Base_SoundSet;
	class DXL5_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"DXL5_closeShot_SoundShader",
			"DXL5_midShot_SoundShader",
			"DXL5_distShot_SoundShader"
		};
	};
	class DXL5_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DXL5_tailDistant_SoundShader",
			"DXL5_tailTrees_SoundShader",
			"DXL5_tailForest_SoundShader",
			"DXL5_tailMeadows_SoundShader",
			"DXL5_tailHouses_SoundShader"
		};
	};
	class DXL5_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DXL5_tailInterior_SoundShader"
		};
	};
	class DXL5_silencerHomeMade_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[]=
		{
			"DXL5_silencerHomeMadeCloseShot_SoundShader",
			"DXL5_silencerHomeMadeMidShot_SoundShader",
			"DXL5_silencerHomeMadeDistShot_SoundShader"
		};
	};
	class DXL5_silencerHomeMadeTail_SoundSet: Rifle_silencerHomemadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DXL5_silencerHomeMadeTailTrees_SoundShader",
			"DXL5_silencerHomeMadeTailForest_SoundShader",
			"DXL5_silencerHomeMadeTailMeadows_SoundShader",
			"DXL5_silencerHomeMadeTailHouses_SoundShader"
		};
	};
	class DXL5_silencerInteriorHomeMadeTail_SoundSet: Rifle_silencerInteriorHomeMadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DXL5_silencerHomeMadeTailInterior_SoundShader"
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
	class DXL5_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = 
		{
			{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\sounds\DXL5_Shot", 1},
			{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\sounds\DXL5_Shot", 1}, 
			{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\sounds\DXL5_Shot", 1}
		};
		volume=1.5;
	};
	class DXL5_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\sounds\DXL5_Shot", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\sounds\DXL5_Shot", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\sounds\DXL5_Shot", 1}};
		volume=1.2;
	};
	class DXL5_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\sounds\DXL5_Shot", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\sounds\DXL5_Shot", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\sounds\DXL5_Shot", 1}};
		volume=0.7;
	};
	class DXL5_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\sounds\DXL5_Shot", 1}};
		volume=1.5;
	};
	class DXL5_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\sounds\DXL5_Shot", 1}};
	};
	class DXL5_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\sounds\DXL5_Shot", 1}};
	};
	class DXL5_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\sounds\DXL5_Shot", 1}};
	};
	class DXL5_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\sounds\DXL5_Shot", 1}};
	};
	class DXL5_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\sounds\DXL5_Shot", 1}};
	};
	class DXL5_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\sounds\DXL5_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\sounds\DXL5_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\sounds\DXL5_Shot_Supp", 1}};
		volume=1.0;
	};
	class DXL5_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\sounds\DXL5_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\sounds\DXL5_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\sounds\DXL5_Shot_Supp", 1}};
		volume=0.8;
	};
	class DXL5_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\sounds\DXL5_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\sounds\DXL5_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\sounds\DXL5_Shot_Supp", 1}};
		volume=0.5;
	};
	class DXL5_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\sounds\DXL5_Shot_Supp", 1}};
	};
	class DXL5_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\sounds\DXL5_Shot_Supp", 1}};
	};
	class DXL5_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\sounds\DXL5_Shot_Supp", 1}};
	};
	class DXL5_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\sounds\DXL5_Shot_Supp", 1}};
	};
	class DXL5_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\LobaevArms\DXL5Havok\sounds\DXL5_Shot_Supp", 1}};
	};
};