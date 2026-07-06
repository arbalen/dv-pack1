class CfgPatches
{
	class BC_OSV96
	{
		units[]={};
		weapons[]={"BC_OSV96"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[]={"BC_OSV96_Magazine"};
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
	class BC_OSV96_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope=0;
		displayName="OSV-96";
		descriptionShort="The OSV-96 (.20mm) is a long and heavy rifle. It is a further development of the V-94 prototype. The OSV-96 is gas operated semi-automatic firearm. There is a gas tube above the barrel, with the bipod fitted underneath. The long barrel is fitted with a multi-slotted muzzle brake. Back-up iron sights are fitted, with the weapon normally fired using the POS 13x60 optical sight. The stock is wooden with a rubber shoulder pad. A unique feature is that the weapon can be folded halfway to make this very long firearm easier to transport.";
		model="BUCA_WEAPONS\Weapons\Snipers\OSV96\BC_OSV96.p3d";
		attachments[]={"BC_BucaLogo","weaponOpticsHunting","weaponOptics","weaponWrap"};
		magazines[]={"BC_OSV96_Magazine"};
		chamberableFrom[]={"IMP_Ammo_127x108"};
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
		magazineSwitchTime=0.25;
		ejectType=1;
		simpleHiddenSelections[]={"hide_barrel"};
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\OSV96\data\BC_OSV96_co.paa"};
		hiddenSelectionsMaterials[]={"BUCA_WEAPONS\Weapons\Snipers\OSV96\data\BC_OSV96.rvmat"};
		modes[]={"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]={"OSV96_SoundSet"};
			reloadTime=1;
			recoil="recoil_AKM";
			recoilProne="recoil_AKM_prone";
			dispersion=0;
			magazineSlot="magazine";
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
					overrideParticle="weapon_shot_Flame_3D_4star";
					overridePoint="Usti hlavne";
					ignoreIfSuppressed=1;
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
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex=0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=4500000000;
					healthLevels[]=
					{{1,{"BUCA_WEAPONS\Weapons\Snipers\OSV96\data\BC_OSV96.rvmat"}},
					{0.69999999,{"BUCA_WEAPONS\Weapons\Snipers\OSV96\data\BC_OSV96.rvmat"}},
					{0.5,{"BUCA_WEAPONS\Weapons\Snipers\OSV96\data\BC_OSV96_damage.rvmat"}	},
					{0.30000001,{"BUCA_WEAPONS\Weapons\Snipers\OSV96\data\BC_OSV96_damage.rvmat"}},
					{0,{"BUCA_WEAPONS\Weapons\Snipers\OSV96\data\BC_OSV96_destruct.rvmat"}}};
				};
			};
		};
	};
	class BC_OSV96: BC_OSV96_Base
	{
		scope=2;
		displayName="OSV-96 | Black";
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\OSV96\data\BC_OSV96_co.paa"};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class BC_OSV96_Magazine: Magazine_Base
	{
		scope=2;
		displayName="5rd OSV96 Magazine";
		descriptionShort="5 Round .20mm Magazine for the OSV-96";
		model="BUCA_WEAPONS\Weapons\Snipers\OSV96\BC_OSV96_Magazine.p3d";
		ammo="IMP_Bullet_127x108";
		ammoItems[]={"IMP_Ammo_127x108"};
		weight=230;
		itemSize[]={2,2};
		count=5;
		isMeleeWeapon=0;
		tracersEvery=1;
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\OSV96\data\BC_OSV96_co.paa"};
		hiddenSelectionsMaterials[]={"BUCA_WEAPONS\Weapons\Snipers\OSV96\data\BC_OSV96.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=5000000000;
					healthLevels[]=
					{{1,{"BUCA_WEAPONS\Weapons\Snipers\OSV96\data\BC_OSV96.rvmat"}},
					{0.69999999,{"BUCA_WEAPONS\Weapons\Snipers\OSV96\data\BC_OSV96.rvmat"}},
					{0.5,{"BUCA_WEAPONS\Weapons\Snipers\OSV96\data\BC_OSV96_damage.rvmat"}	},
					{0.30000001,{"BUCA_WEAPONS\Weapons\Snipers\OSV96\data\BC_OSV96_damage.rvmat"}},
					{0,{"BUCA_WEAPONS\Weapons\Snipers\OSV96\data\BC_OSV96_destruct.rvmat"}}};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyBC_OSV96_Magazine: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="BUCA_WEAPONS\Weapons\Snipers\OSV96\BC_OSV96_Magazine.p3d";
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class OSV96_closeShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\OSV96\Sounds\OSV96",1}};
		volume=1;
		range=100;
	};
	class OSV96_midShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\OSV96\Sounds\OSV96_mid",1}};
		volume=0.80000002;
		range=500;
	};
	class OSV96_farShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\OSV96\Sounds\OSV96_far",1}};
		volume=0.60000001;
		range=2000;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class OSV96_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]={"OSV96_closeShot_SoundShader","OSV96_midShot_SoundShader","OSV96_farShot_SoundShader"};
	};
};
