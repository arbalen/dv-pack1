class CfgPatches
{
	class BC_50BMGDeagle
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
	class Rifle_Base;
	class BC_50BMGDeagle_Base: Rifle_Base
	{
		scope=0;
		model="BUCA_WEAPONS2\Weapons\Pistols\50BMGDeagle\BC_50BMGDeagle.p3d";
		displayName="$STR_BC_50BMGDeagle_N";
		descriptionShort="Оружие использует калибр 12.7x99 | The weapon uses a 12.7x99 caliber.";		
		itemSize[]={9,2};
		weight=4800;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,50,180,4,10};
		ironsightsExcludingOptics[]={};
		WeaponLength=1;
		ObstructionDistance=0.50999999;
		barrelArmor=2.6;
		initSpeedMultiplier=1;
		chamberedRound="";
		chamberSize=1;
		attachments[]={"weaponOpticsHunting","weaponWrap"};
		magazines[]={"BC_50BMGDeagle_Magazine"};
		chamberableFrom[]={"IMP_Ammo_127x99"};
		ejectType=1;
		recoilModifier[]={0.5,0.5,0.5};
		swayModifier[]={0,0,0};
		simpleHiddenSelections[]={};
		hiddenSelections[] = {"cumbucabody","cumbucagrip"};
		hiddenSelectionsTextures[] ={"BUCA_WEAPONS2\Weapons\Pistols\50BMGDeagle\data\50bmgmotherfuckingdeagle_co.paa","BUCA_WEAPONS2\Weapons\Pistols\50BMGDeagle\data\50bmgmotherfuckingdeagle_grip_co.paa"};
		hiddenSelectionsMaterials[] ={"BUCA_WEAPONS2\Weapons\Pistols\50BMGDeagle\data\50bmgmotherfuckingdeagle.rvmat","BUCA_WEAPONS2\Weapons\Pistols\50BMGDeagle\data\50bmgmotherfuckingdeagle_grip.rvmat"};
		modes[]={"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"BC_50BMGDeagle_SoundSet","Mosin9130_Shot_iterior_SoundSet","Mosin9130_Tail_SoundSet","Mosin9130_InteriorTail_SoundSet","Mosin9130_Tail_2D_SoundSet"};
			reloadTime=0.32500001;
			dispersion = 0;
			magazineSlot = "magazine";
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
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={-0.25,0.035,0};
				orientation[]={0,0,0};
			};
			class Melee
			{
				position[]={-0.25,0.035,-0.029999999};
				orientation[]={0,0,0};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000000;
					healthLevels[]=
					{
					{1,{"BUCA_WEAPONS2\Weapons\Pistols\50BMGDeagle\data\50bmgmotherfuckingdeagle.rvmat","BUCA_WEAPONS2\Weapons\Pistols\50BMGDeagle\data\50bmgmotherfuckingdeagle_grip.rvmat"}},
					{0.69999999,{"BUCA_WEAPONS2\Weapons\Pistols\50BMGDeagle\data\50bmgmotherfuckingdeagle.rvmat","BUCA_WEAPONS2\Weapons\Pistols\50BMGDeagle\data\50bmgmotherfuckingdeagle_grip.rvmat"}},
					{0.5,{"BUCA_WEAPONS2\Weapons\Pistols\50BMGDeagle\data\50bmgmotherfuckingdeagle_damage.rvmat","BUCA_WEAPONS2\Weapons\Pistols\50BMGDeagle\data\50bmgmotherfuckingdeagle_grip_damage.rvmat"}},
					{0.30000001,{"BUCA_WEAPONS2\Weapons\Pistols\50BMGDeagle\data\50bmgmotherfuckingdeagle_damage.rvmat","BUCA_WEAPONS2\Weapons\Pistols\50BMGDeagle\data\50bmgmotherfuckingdeagle_grip_damage.rvmat"}},
					{0,{"BUCA_WEAPONS2\Weapons\Pistols\50BMGDeagle\data\50bmgmotherfuckingdeagle_destruct.rvmat","BUCA_WEAPONS2\Weapons\Pistols\50BMGDeagle\data\50bmgmotherfuckingdeagle_grip_destruct.rvmat"}}
					};
				};
			};
		};	
	};
	class BC_50BMGDeagle: BC_50BMGDeagle_Base
	{
		scope=2;
		hiddenSelectionsTextures[] ={"BUCA_WEAPONS2\Weapons\Pistols\50BMGDeagle\data\50bmgmotherfuckingdeagle_co.paa","BUCA_WEAPONS2\Weapons\Pistols\50BMGDeagle\data\50bmgmotherfuckingdeagle_grip_co.paa"};
	};
	class BC_50BMGDeagle_Gold: BC_50BMGDeagle_Base
	{
		scope=2;
		hiddenSelectionsTextures[] ={"BUCA_WEAPONS2\Weapons\Pistols\50BMGDeagle\data\50bmgmotherfuckingdeagle_gold.paa","BUCA_WEAPONS2\Weapons\Pistols\50BMGDeagle\data\50bmgmotherfuckingdeagle_grip_co.paa"};
		hiddenSelectionsMaterials[] ={"BUCA_WEAPONS2\Weapons\Pistols\50BMGDeagle\data\50bmgmotherfuckingdeagle_gold.rvmat","BUCA_WEAPONS2\Weapons\Pistols\50BMGDeagle\data\50bmgmotherfuckingdeagle_grip.rvmat"};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class BC_50BMGDeagle_Magazine: Magazine_Base
	{
		scope=2;
		displayName="$STR_BC_50BMGDeagle_Magazine_N";
		descriptionShort="$STR_BC_50BMGDeagle_Magazine_D";
		model="BUCA_WEAPONS2\Weapons\Pistols\50BMGDeagle\BC_50BMGDeagle_Magazine.p3d";
		weight=230;
		itemSize[]={2,2};
		count=7;
		hiddenSelections[] = {"cumbucamagazine"};
		hiddenSelectionsTextures[] ={"BUCA_WEAPONS2\Weapons\Pistols\50BMGDeagle\data\50bmgmotherfuckingdeagle_grip_co.paa"};
		ammo="IMP_Bullet_127x99";
		ammoItems[]={"IMP_Ammo_127x99"};
		isMeleeWeapon=0;
		tracersEvery=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
					{1,{"BUCA_WEAPONS2\Weapons\Pistols\50BMGDeagle\data\50bmgmotherfuckingdeagle_grip.rvmat"}},
					{0.69999999,{"BUCA_WEAPONS2\Weapons\Pistols\50BMGDeagle\data\50bmgmotherfuckingdeagle_grip.rvmat"}},
					{0.5,{"BUCA_WEAPONS2\Weapons\Pistols\50BMGDeagle\data\50bmgmotherfuckingdeagle_grip.rvmat"}},
					{0.30000001,{"BUCA_WEAPONS2\Weapons\Pistols\50BMGDeagle\data\50bmgmotherfuckingdeagle_grip.rvmat"}},
					{0,{"BUCA_WEAPONS2\Weapons\Pistols\50BMGDeagle\data\50bmgmotherfuckingdeagle_grip.rvmat"}}
					};
				};
			};
		};
	};
};

class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyBC_50BMGDeagle_Magazine: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="BUCA_WEAPONS2\Weapons\Pistols\50BMGDeagle\BC_50BMGDeagle_Magazine.p3d";
	};	
};
class CfgSoundShaders 
{
	class baseCharacter_SoundShader;
	class base_HomeSilenced_distShot_SoundShader;
	class BC_50BMGDeagle_closeShot_SoundShader 
	{
		samples[] = {{"BUCA_WEAPONS2\Weapons\Pistols\50BMGDeagle\Sounds\deaglefun", 1}};
		volume = 1.0;
		range=100;
	};
	
	class BC_50BMGDeagle_midShot_SoundShader 
    {
		samples[] = {{"BUCA_WEAPONS2\Weapons\Pistols\50BMGDeagle\Sounds\deaglefun_mid", 1}};
		volume = 0.6;
		range=500;
	};
	
	class BC_50BMGDeagle_farShot_SoundShader  
	{
		samples[] = {{"BUCA_WEAPONS2\Weapons\Pistols\50BMGDeagle\Sounds\deaglefun_far", 1}};
		volume = 0.4;
		range=2000;
	};
};

class CfgSoundSets 
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
    class BC_50BMGDeagle_SoundSet : Rifle_Shot_Base_SoundSet 
	{
		soundShaders[] = {"BC_50BMGDeagle_closeShot_SoundShader", "BC_50BMGDeagle_midShot_SoundShader", "BC_50BMGDeagle_farShot_SoundShader"};
	};
};	