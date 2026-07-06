class CfgPatches
{
	class BC_HS50M1
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
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
	class BC_HS50M1_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope=0;
		displayName="HS20-M1";
		model="BUCA_WEAPONS2\Weapons\Snipers\HS50M1\BC_HS50M1.p3d";
		descriptionShort="Оружие использует калибр 20mm | The weapon uses a 20mm caliber.";		
		attachments[]={"weaponOpticsHunting","weaponWrap"};
		magazines[]={"BC_HS50M1_Magazine"};
		chamberableFrom[]={"IMP_Ammo_20mm"};
		itemSize[]={10,2};
		weight=3700;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,50,180,4,10};
		WeaponLength=1;
		barrelArmor=12.6;
		initSpeedMultiplier=1;
		chamberedRound="";
		chamberSize=1;
		ejectType=1;
		recoilModifier[]={0.25,0.25,0.25};
		swayModifier[]={0,0,0};
		simpleHiddenSelections[]={"hidemuzzle","pistolgrip"};
		hiddenSelections[] = {"cumbucaequipment","cumbucahandle","cumbucapipe","cumbucariflebutts"};
		hiddenSelectionsTextures[] ={"BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucaequipment_co.paa","BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucahandle_co.paa","BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucapipe_co.paa","BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucariflebutts_co.paa"};
		hiddenSelectionsMaterials[] ={"BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucaequipment.rvmat","BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucahandle.rvmat","BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucapipe.rvmat","BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucariflebutts.rvmat"};
		modes[]={"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"BC_HS50M1_SoundSet","Mosin9130_Shot_iterior_SoundSet","Mosin9130_Tail_SoundSet","Mosin9130_InteriorTail_SoundSet","Mosin9130_Tail_2D_SoundSet"};
			soundSetShotExt[] = {{"BC_HS50M1_Sup_SoundSet","Mosin9130_silencerHomeMadeTail_SoundSet","Mosin9130_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 1;
			dispersion = 0;
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
                    overrideParticle="weapon_shot_izh18_01";
                    ignoreIfSuppressed=1;
                    illuminateWorld=1;
                    positionOffset[]={-0.050000001,0,0};
                };
                class ChamberSmoke
                {
                    overrideParticle="weapon_shot_chamber_smoke";
                    overridePoint="Nabojnicestart";
                    overrideDirectionPoint="Nabojniceend";
                };
                class ChamberSmokeRaise
                {
                    overrideParticle="weapon_shot_chamber_smoke_raise";
                    overridePoint="Nabojnicestart";
                };
				class MuzzleFlashStar
				{
					overrideParticle = "weapon_shot_Flame_3D_4star";
					overridePoint = "Usti hlavne";
					ignoreIfSuppressed = 1;
				};
            };
            class OnOverheating
            {
                maxOverheatingValue=40;
                shotsToStartOverheating=5;
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
                class ChamberSmokeRaise
                {
                    overrideParticle="smoking_barrel_small";
                    overridePoint="Nabojnicestart";
                    onlyWithinOverheatLimits[]={0.5,1};
                };
            };
        };
		class NoiseShoot
		{
			strength=100;
			type="shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			distanceZoomMin=100;
			distanceZoomMax=100;
			discreteDistance[]={50,100,150};
			discreteDistanceInitIndex=0;
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000000;
					healthLevels[]=
					{
					{1,{"BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucaequipment.rvmat","BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucahandle.rvmat","BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucapipe.rvmat","BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucariflebutts.rvmat"}},
					{0.69999999,{"BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucaequipment.rvmat","BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucahandle.rvmat","BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucapipe.rvmat","BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucariflebutts.rvmat"}},
					{0.5,{"BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucaequipment_damage.rvmat","BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucahandle_damage.rvmat","BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucapipe_damage.rvmat","BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucariflebutts_damage.rvmat"}},
					{0.30000001,{"BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucaequipment_damage.rvmat","BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucahandle_damage.rvmat","BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucapipe_damage.rvmat","BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucariflebutts_damage.rvmat"}},
					{0,{"BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucaequipment_destruct.rvmat","BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucahandle_destruct.rvmat","BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucapipe_destruct.rvmat","BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucariflebutts_destruct.rvmat"}}
					};
				};
			};
		};	
	};
	class BC_HS50M1_Black: BC_HS50M1_Base
	{
		scope=2;
		displayName="$STR_BC_HS50M1_N_B";
		hiddenSelectionsTextures[] = {"BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucaequipment_co.paa","BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucahandle_co.paa","BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucapipe_co.paa","BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucariflebutts_co.paa"};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class BC_HS50M1_Magazine: Magazine_Base
	{
		scope=2;
		displayName="$STR_BC_HS50M1_Magazine_N";
		descriptionShort="$STR_BC_HS50M1_Magazine_D";
		model="BUCA_WEAPONS2\Weapons\Snipers\HS50M1\BC_HS50M1_Magazine.p3d";
		weight=230;
		itemSize[]={2,2};
		count=5;
		ammo="IMP_Bullet_20mm";
		ammoItems[]={"IMP_Ammo_20mm"};
		isMeleeWeapon=0;
		tracersEvery=1;
		hiddenSelections[] = {"cumbucamagazine"};
		hiddenSelectionsTextures[]={"BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucaequipment_co.paa"};
		hiddenSelectionsMaterials[]={"BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucaequipment.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000000;
					healthLevels[]=
					{
					{1,{"BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucaequipment.rvmat"}},
					{0.69999999,{"BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucaequipment.rvmat"}},
					{0.5,{"BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucaequipment_damage.rvmat"}},
					{0.30000001,{"BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucaequipment_damage.rvmat"}},
					{0,{"BUCA_WEAPONS2\Weapons\Snipers\HS50M1\data\cumbucaequipment_destruct.rvmat"}}
					};
				};
			};
		};
	};
};

class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyBC_HS50M1_Magazine: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="BUCA_WEAPONS2\Weapons\Snipers\HS50M1\BC_HS50M1_Magazine.p3d";
	};	
};

class CfgSoundShaders 
{
	class baseCharacter_SoundShader;
	class base_HomeSilenced_distShot_SoundShader;
	class BC_HS50M1_closeShot_SoundShader
	{
		samples[] = {{"BUCA_WEAPONS2\Weapons\Snipers\HS50M1\Sounds\HS50", 1}};
		volume = 1.0;
		range=100;
	};
	
	class BC_HS50M1_midShot_SoundShader
    {
		samples[] = {{"BUCA_WEAPONS2\Weapons\Snipers\HS50M1\Sounds\HS50_mid", 1}};
		volume = 0.6;
		range=500;
	};
	
	class BC_HS50M1_distShot_SoundShader 
	{
		samples[] = {{"BUCA_WEAPONS2\Weapons\Snipers\HS50M1\Sounds\HS50_far", 1}};
		volume = 0.4;
		range=2000;
	};
	class BC_HS50M1_SilcloseShot_SoundShader 
	{
		samples[] = {{"BUCA_WEAPONS2\Weapons\Snipers\HS50M1\Sounds\HS50_sup", 1}};
		volume = 0.8;
		range=50;
	};
	
	class BC_HS50M1_SilmidShot_SoundShader 
	{
		samples[] = {{"BUCA_WEAPONS2\Weapons\Snipers\HS50M1\Sounds\HS50_sup_mid", 1}};
		volume = 0.6;
		range=100;
	};
	
	class BC_HS50M1_SilfarShot_SoundShader 
	{
		samples[] = {{"BUCA_WEAPONS2\Weapons\Snipers\HS50M1\Sounds\HS50_sup_far", 1}};
		volume = 0.4;
		range=150;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class BC_HS50M1_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"BC_HS50M1_closeShot_SoundShader","BC_HS50M1_midShot_SoundShader","BC_HS50M1_distShot_SoundShader"};
	};
	class BC_HS50M1_Sup_SoundSet : Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"BC_HS50M1_SilcloseShot_SoundShader", "BC_HS50M1_SilmidShot_SoundShader", "BC_HS50M1_SilfarShot_SoundShader"};
	};
};