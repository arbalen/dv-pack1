class CfgPatches
{
	class IMP_W_SnipeX_Alligator
	{
		units[]={};
		weapons[]=
		{
			"IMP_SnipeX_Alligator"
		};
		magazines[]=
		{
			"IMP_Mag_SnipeX_Alligator_5Rnd"
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
class Mode_SemiAuto;
class Mode_Single;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class BoltActionRifle_Base;
	class IMP_SnipeX_Alligator_Base: BoltActionRifle_Base
	{
		scope=0;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={30,25};
		PPDOFProperties[]={1,0.60000002,50,200,4,10};
		initSpeedMultiplier=1;
		WeaponLength=1;
		weight=15000;
		ironsightsExcludingOptics[]=
		{
		};
		barrelArmor = 7.0;		
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"IMP_Ammo_20mm"
		};
		magazines[]=
		{
			"IMP_Mag_SnipeX_Alligator_5Rnd"
		};
		ejectType=1;
		recoilModifier[]={0.7,0.7,0.7};
		swayModifier[]={0,0,0};
		simpleHiddenSelections[]=
		{
			"hide_barrel", 
			"HandlesM4"
		};
		hiddenSelections[] = {"camoflage"};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_Single
		{
			soundSetShot[]= {"Alligator_Shot_SoundSet","Alligator_Tail_SoundSet","Alligator_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"Alligator_Shot_SoundSet","Alligator_Tail_SoundSet","Alligator_InteriorTail_SoundSet"}};
			reloadTime=0.12;
			dispersion=0.00025000001;
			magazineSlot="magazine";
		};
		class NoiseShoot
		{
			strength=150;
			type="shot";
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
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={100,200,300,400,500};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=500;
		};
	};
	class IMP_SnipeX_Alligator: IMP_SnipeX_Alligator_Base
	{
		scope=2;
		displayName="SnipeX Alligator";
		descriptionShort="$STR_IMP_alligatordescr";
		model="IMPWMOD\Weapons\Sniper\SnipeXAlligator\models\SnipeX_Alligator.p3d";
		attachments[]=
		{
			"weaponOpticsHunting",
			"weaponWrap",
			"HandlesM4"
		};
		itemSize[] = {10, 2};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Sniper\SnipeXAlligator\data\SnipeX_co.paa"};	
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 30000;
                    healthLevels[] = 
                    {
                        {1.0,{"IMPWMOD\Weapons\Sniper\SnipeXAlligator\data\SnipeX.rvmat"}},
                        {0.7,{"IMPWMOD\Weapons\Sniper\SnipeXAlligator\data\SnipeX.rvmat"}},
                        {0.5,{"IMPWMOD\Weapons\Sniper\SnipeXAlligator\data\SnipeX_damage.rvmat"}},
                        {0.3,{"IMPWMOD\Weapons\Sniper\SnipeXAlligator\data\SnipeX_damage.rvmat"}},
                        {0.0,{"IMPWMOD\Weapons\Sniper\SnipeXAlligator\data\SnipeX_destruct.rvmat"}}
					};
                };
            };
        };
	};
};
class cfgMagazines
{
	class Magazine_Base;
  	class IMP_Mag_SnipeX_Alligator_5Rnd: Magazine_Base
 	{
		scope=2;
		displayName="$STR_IMP_alligatordescr1";
		descriptionShort="$STR_IMP_alligatordescr2";
		model="IMPWMOD\Weapons\Sniper\SnipeXAlligator\models\Mag_SnipeX_5Rnd.p3d";
		weight=500;
		itemSize[]={2,2};
		count=5;
		recoilModifier[]={0.7,0.7,0.7};
		swayModifier[]={0,0,0};
		ammo="IMP_Bullet_20mm";
		ammoItems[]=
		{
			"IMP_Ammo_20mm"
		};
		tracersEvery=0;
		mass=10;
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 300;
                    healthLevels[] = 
                    {
                        {1.0,{"IMPWMOD\Weapons\Sniper\SnipeXAlligator\data\SnipeX.rvmat"}},
                        {0.7,{"IMPWMOD\Weapons\Sniper\SnipeXAlligator\data\SnipeX.rvmat"}},
                        {0.5,{"IMPWMOD\Weapons\Sniper\SnipeXAlligator\data\SnipeX_damage.rvmat"}},
                        {0.3,{"IMPWMOD\Weapons\Sniper\SnipeXAlligator\data\SnipeX_damage.rvmat"}},
                        {0.0,{"IMPWMOD\Weapons\Sniper\SnipeXAlligator\data\SnipeX_destruct.rvmat"}}
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
	class ProxyMag_SnipeX_5Rnd: ProxyAttachment
	{
		scope=0;
		inventorySlot="magazine";
		model="IMPWMOD\Weapons\Sniper\SnipeXAlligator\models\Mag_SnipeX_5Rnd.p3d";
	};
};

class CfgSoundSets {
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class Rifle_silencerHomemadeTail_Base_SoundSet;
	class Rifle_silencerInteriorHomeMadeTail_Base_SoundSet;
	class Alligator_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"Alligator_closeShot_SoundShader",
			"Alligator_midShot_SoundShader",
			"Alligator_distShot_SoundShader"
		};
	};
	class Alligator_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Alligator_tailDistant_SoundShader",
			"Alligator_tailTrees_SoundShader",
			"Alligator_tailForest_SoundShader",
			"Alligator_tailMeadows_SoundShader",
			"Alligator_tailHouses_SoundShader"
		};
	};
	class Alligator_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Alligator_tailInterior_SoundShader"
		};
	};
	class Alligator_silencerHomeMade_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[]=
		{
			"Alligator_silencerHomeMadeCloseShot_SoundShader",
			"Alligator_silencerHomeMadeMidShot_SoundShader",
			"Alligator_silencerHomeMadeDistShot_SoundShader"
		};
	};
	class Alligator_silencerHomeMadeTail_SoundSet: Rifle_silencerHomemadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Alligator_silencerHomeMadeTailTrees_SoundShader",
			"Alligator_silencerHomeMadeTailForest_SoundShader",
			"Alligator_silencerHomeMadeTailMeadows_SoundShader",
			"Alligator_silencerHomeMadeTailHouses_SoundShader"
		};
	};
	class Alligator_silencerInteriorHomeMadeTail_SoundSet: Rifle_silencerInteriorHomeMadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Alligator_silencerHomeMadeTailInterior_SoundShader"
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
	class Alligator_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SnipeXAlligator\sounds\Alligator_Shot", 1}, {"IMPWMOD\Weapons\Sniper\SnipeXAlligator\sounds\Alligator_Shot", 1}, {"IMPWMOD\Weapons\Sniper\SnipeXAlligator\sounds\Alligator_Shot", 1}};
		volume=1.5;
	};
	class Alligator_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SnipeXAlligator\sounds\Alligator_Shot", 1}, {"IMPWMOD\Weapons\Sniper\SnipeXAlligator\sounds\Alligator_Shot", 1}, {"IMPWMOD\Weapons\Sniper\SnipeXAlligator\sounds\Alligator_Shot", 1}};
		volume=1.2;
	};
	class Alligator_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SnipeXAlligator\sounds\Alligator_Shot", 1}, {"IMPWMOD\Weapons\Sniper\SnipeXAlligator\sounds\Alligator_Shot", 1}, {"IMPWMOD\Weapons\Sniper\SnipeXAlligator\sounds\Alligator_Shot", 1}};
		volume=0.7;
	};
	class Alligator_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SnipeXAlligator\sounds\Alligator_Shot", 1}};
		volume=1.5;
	};
	class Alligator_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SnipeXAlligator\sounds\Alligator_Shot", 1}};
	};
	class Alligator_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SnipeXAlligator\sounds\Alligator_Shot", 1}};
	};
	class Alligator_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SnipeXAlligator\sounds\Alligator_Shot", 1}};
	};
	class Alligator_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SnipeXAlligator\sounds\Alligator_Shot", 1}};
	};
	class Alligator_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SnipeXAlligator\sounds\Alligator_Shot", 1}};
	};
	class Alligator_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SnipeXAlligator\sounds\Alligator_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\SnipeXAlligator\sounds\Alligator_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\SnipeXAlligator\sounds\Alligator_Shot_Supp", 1}};
		volume=1.0;
	};
	class Alligator_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SnipeXAlligator\sounds\Alligator_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\SnipeXAlligator\sounds\Alligator_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\SnipeXAlligator\sounds\Alligator_Shot_Supp", 1}};
		volume=0.8;
	};
	class Alligator_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SnipeXAlligator\sounds\Alligator_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\SnipeXAlligator\sounds\Alligator_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\SnipeXAlligator\sounds\Alligator_Shot_Supp", 1}};
		volume=0.5;
	};
	class Alligator_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SnipeXAlligator\sounds\Alligator_Shot_Supp", 1}};
	};
	class Alligator_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SnipeXAlligator\sounds\Alligator_Shot_Supp", 1}};
	};
	class Alligator_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SnipeXAlligator\sounds\Alligator_Shot_Supp", 1}};
	};
	class Alligator_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SnipeXAlligator\sounds\Alligator_Shot_Supp", 1}};
	};
	class Alligator_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SnipeXAlligator\sounds\Alligator_Shot_Supp", 1}};
	};
};