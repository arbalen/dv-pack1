class CfgPatches
{
	class BC_AWP
	{
		units[]={};
		weapons[]={"BC_AWP","BC_AWP_Asiimov","BC_AWP_Atheris","BC_AWP_DragonLore","BC_AWP_Gungnir","BC_AWP_HyperBeast","BC_AWP_Medusa","BC_AWP_NeoNoir","BC_AWP_OniTaiji","BC_AWP_Redline","BC_AWP_ThePrince","BC_AWP_Anime","BC_AWP_Apolo","BC_AWP_BlueAngel","BC_AWP_BlueWolf","BC_AWP_Boom","BC_AWP_BrotherHood","BC_AWP_Camo","BC_AWP_Carbon","BC_AWP_CaseHardned","BC_AWP_Cyrex","BC_AWP_DarkSmoke","BC_AWP_Dawning","BC_AWP_DeadlyBird","BC_AWP_DeadPool","BC_AWP_EletricHive","BC_AWP_EliteBuild","BC_AWP_Fade","BC_AWP_FeverDream","BC_AWP_GoldenPhoenix","BC_AWP_Graphite","BC_AWP_HellGate","BC_AWP_IceTitan","BC_AWP_LightningStrike","BC_AWP_Lilium","BC_AWP_Phobos","BC_AWP_RailGun","BC_AWP_RoyalDice","BC_AWP_SafariMesh","BC_AWP_StarKeeper","BC_AWP_Tactical","BC_AWP_TertRoner","BC_AWP_TokyoGhoul","BC_AWP_UltraJade","BC_AWP_Unicorn","BC_AWP_Vertex","BC_AWP_WormGod","BC_AWP_Xray"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[]={"BC_AWP_Magazine"};
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
	class BC_AWP_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope=0;
		displayName="AWP";
		model="BUCA_WEAPONS\Weapons\Snipers\AWP\BC_AWP.p3d";
		descriptionShort="Оружие использует калибр 12.7x99 | The weapon uses a 12.7x99 caliber.";
		attachments[]={"weaponOpticsHunting","weaponOptics","weaponWrap"};
		magazines[]={"BC_AWP_Magazine"};
		chamberableFrom[]={"IMP_Ammo_127x99"};
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
		recoilModifier[]={0.25,0.25,0.25};
		swayModifier[]={0,0,0};
		simpleHiddenSelections[]={"hide_barrel"};
		hiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\AWP\data\AWP_co.paa"};
		hiddenSelectionsMaterials[]={"BUCA_WEAPONS\Weapons\Snipers\AWP\data\AWP.rvmat"};
		modes[]={"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]={"awp_SoundSet"};
			soundSetShotExt[]={{"awp_sup_SoundSet"}};
			reloadTime=1;
			dispersion=9.9999997e-05;
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
					hitpoints=40000000500;
					healthLevels[]=
					{{1,{"BUCA_WEAPONS\Weapons\Snipers\AWP\data\AWP.rvmat"}},
					{0.69999999,{"BUCA_WEAPONS\Weapons\Snipers\AWP\data\AWP.rvmat"}},
					{0.5,{"BUCA_WEAPONS\Weapons\Snipers\AWP\data\AWP_damage.rvmat"}},
					{0.30000001,{"BUCA_WEAPONS\Weapons\Snipers\AWP\data\AWP_damage.rvmat"}},
					{0,{"BUCA_WEAPONS\Weapons\Snipers\AWP\data\AWP_destruct.rvmat"}}};
				};
			};
		};
	};
	class BC_AWP: BC_AWP_Base
	{
		scope=2;
		displayName="AWP";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\AWP_co.paa"
		};
	};
	class BC_AWP_Asiimov: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Asiimov";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\AWP_Asiimov.paa"
		};
	};
	class BC_AWP_Atheris: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Atheris";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\AWP_Atheris.paa"
		};
	};
	class BC_AWP_DragonLore: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Dragon Lore";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\AWP_DragonLore.paa"
		};
	};
	class BC_AWP_Gungnir: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Gungnir";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\AWP_Gungnir.paa"
		};
	};
	class BC_AWP_HyperBeast: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | HyperBeast";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\AWP_HyperBeast.paa"
		};
	};
	class BC_AWP_Medusa: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Medusa";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\AWP_Medusa.paa"
		};
	};
	class BC_AWP_NeoNoir: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | NeoNoir";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\AWP_NeoNoir.paa"
		};
	};
	class BC_AWP_OniTaiji: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | OniTaiji";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\AWP_OniTaiji.paa"
		};
	};
	class BC_AWP_Redline: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Redline";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\AWP_Redline.paa"
		};
	};
	class BC_AWP_ThePrince: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | ThePrince";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\AWP_ThePrince.paa"
		};
	};
	class BC_AWP_Anime: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Anime";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_Anime.paa"
		};
	};
	class BC_AWP_Apolo: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Apolo";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_Apolo.paa"
		};
	};
	class BC_AWP_BlueAngel: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Blue Angel";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_BlueAngel.paa"
		};
	};
	class BC_AWP_BlueWolf: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Blue Wolf";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_Bluewolf.paa"
		};
	};
	class BC_AWP_Boom: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Boom";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_Boom.paa"
		};
	};
	class BC_AWP_BrotherHood: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | BrotherHood";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_Brotherhood.paa"
		};
	};
	class BC_AWP_Camo: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Camo";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_Camo.paa"
		};
	};
	class BC_AWP_Carbon: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Carbon";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_Carbon.paa"
		};
	};
	class BC_AWP_CaseHardned: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Case Hardned";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_CaseHardned.paa"
		};
	};
	class BC_AWP_Cyrex: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Cyrex";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_Cyrex.paa"
		};
	};
	class BC_AWP_DarkSmoke: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Dark Smoke";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_DarkSmoke.paa"
		};
	};
	class BC_AWP_Dawning: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Dawning";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_Dawning.paa"
		};
	};
	class BC_AWP_DeadlyBird: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Deadly Bird";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_DeadlyBird.paa"
		};
	};
	class BC_AWP_DeadPool: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | DeadPool";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_Deadpool.paa"
		};
	};
	class BC_AWP_EletricHive: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Eletric Hive";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_EletricHive.paa"
		};
	};
	class BC_AWP_EliteBuild: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Elite Build";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_EliteBuild.paa"
		};
	};
	class BC_AWP_Fade: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Fade";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_Fade.paa"
		};
	};
	class BC_AWP_FeverDream: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | FeverDream";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_FeverDream.paa"
		};
	};
	class BC_AWP_GoldenPhoenix: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Golden Phoenix";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_GoldenPhoenix.paa"
		};
	};
	class BC_AWP_Graphite: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Graphite";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_Graphite.paa"
		};
	};
	class BC_AWP_HellGate: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Hell Gate";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_HellGate.paa"
		};
	};
	class BC_AWP_IceTitan: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Ice Titan";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_IceTitan.paa"
		};
	};
	class BC_AWP_LightningStrike: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Lightning Strike";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_LightningStrike.paa"
		};
	};
	class BC_AWP_Lilium: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Lilium";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_Lilium.paa"
		};
	};
	class BC_AWP_Phobos: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Phobos";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_Phobos.paa"
		};
	};
	class BC_AWP_RailGun: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Rail Gun";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_RailGun.paa"
		};
	};
	class BC_AWP_RoyalDice: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Royal Dice";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_RoyalDice.paa"
		};
	};
	class BC_AWP_SafariMesh: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Safari Mesh";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_SafariMesh.paa"
		};
	};
	class BC_AWP_StarKeeper: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | StarKeeper";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_StarKeeper.paa"
		};
	};
	class BC_AWP_Tactical: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Tactical";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_Tactical.paa"
		};
	};
	class BC_AWP_TertRoner: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | TartRoner";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_TertRoner.paa"
		};
	};
	class BC_AWP_TokyoGhoul: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Tokyo Ghoul";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_TokyoGhoul.paa"
		};
	};
	class BC_AWP_UltraJade: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Ultra Jade";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_UltraJade.paa"
		};
	};
	class BC_AWP_Unicorn: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Unicorn";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_Unicorn.paa"
		};
	};
	class BC_AWP_Vertex: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | Vertex";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_Vertex.paa"
		};
	};
	class BC_AWP_WormGod: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | WormGod";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_WormGod.paa"
		};
	};
	class BC_AWP_Xray: BC_AWP_Base
	{
		scope=2;
		displayName="AWP | XRay";
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Weapons\Snipers\AWP\data\New\AWP_Xray.paa"
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class BC_AWP_Magazine: Magazine_Base
	{
		scope=2;
		displayName="10rd AWP Magazine";
		descriptionShort="10 .50 BMG Rounds Magazine for the AWP";
		model="BUCA_WEAPONS\Weapons\Snipers\AWP\BC_AWP_Magazine.p3d";
		ammo="IMP_Bullet_127x99";
		ammoItems[]={"IMP_Ammo_127x99"};
		weight=230;
		itemSize[]={2,2};
		count=10;
		isMeleeWeapon=0;
		tracersEvery=1;
		hiddenSelections[]={"cumbuca"};
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\AWP\data\AWP_co.paa"};
		hiddenSelectionsMaterials[]={"BUCA_WEAPONS\Weapons\Snipers\AWP\data\AWP.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=5000000;
					healthLevels[]=
					{{1,{"BUCA_WEAPONS\Weapons\Snipers\AWP\data\AWP.rvmat"}},
					{0.69999999,{"BUCA_WEAPONS\Weapons\Snipers\AWP\data\AWP.rvmat"}},
					{0.5,{"BUCA_WEAPONS\Weapons\Snipers\AWP\data\AWP_damage.rvmat"}},
					{0.30000001,{"BUCA_WEAPONS\Weapons\Snipers\AWP\data\AWP_damage.rvmat"}},
					{0,{"BUCA_WEAPONS\Weapons\Snipers\AWP\data\AWP_destruct.rvmat"}}};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyBC_AWP_Magazine: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="BUCA_WEAPONS\Weapons\Snipers\AWP\BC_AWP_Magazine.p3d";
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class base_HomeSilenced_distShot_SoundShader;
	class awp_closeShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\AWP\Sounds\awp",1}};
		volume=1.3;
		range=100;
	};
	class awp_midShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\AWP\Sounds\awp_mid",1}};
		volume=0.80000001;
		range=500;
	};
	class awp_farShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\AWP\Sounds\awp_far",1}};
		volume=0.5;
		range=1500;
	};
	class awp_SilcloseShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\AWP\Sounds\awp_sup",1}};
		volume=0.80000001;
		range=50;
	};
	class awp_SilmidShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\AWP\Sounds\awp_sup_mid",1}};
		volume=0.60000002;
		range=100;
	};
	class awp_SilfarShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\AWP\Sounds\awp_sup_far",1}};
		volume=0.40000001;
		range=150;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class awp_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]={"awp_closeShot_SoundShader","awp_midShot_SoundShader","awp_farShot_SoundShader"};
	};
	class awp_sup_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]={"awp_SilcloseShot_SoundShader","awp_SilmidShot_SoundShader","awp_SilfarShot_SoundShader"};
	};
};
