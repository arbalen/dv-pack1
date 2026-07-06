class CfgPatches
{
	class BC_C14
	{
		units[]={};
		weapons[]={"BC_C14_Black"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[]={"BC_C14_Magazine"};
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
	class BC_C14_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope=0;
		displayName="C14";
		model="BUCA_WEAPONS\Weapons\Snipers\C14\BC_C14.p3d";
		descriptionShort="Оружие использует калибр 408 | The weapon uses a 408 caliber.";
		attachments[]= { "weaponOpticsHunting", "weaponOptics","weaponWrap"};
		magazines[]={"BC_5Rnd_338_Magazine","BC_8Rnd_338_Extended_Magazine"};
		chamberableFrom[]={"IMP_Ammo_408"};
		itemSize[]={8,2};
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
		simpleHiddenSelections[]={"hide_barrel","muzzle"};
		hiddenSelections[]={"action","barrel","body","muzzle","rails"};
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\C14\data\action\Action_co.paa","BUCA_WEAPONS\Weapons\Snipers\C14\data\barrel\barrel_co.paa","BUCA_WEAPONS\Weapons\Snipers\C14\data\body\body_co.paa","BUCA_WEAPONS\Weapons\Snipers\C14\data\muzzle\muzzle_co.paa","BUCA_WEAPONS\Weapons\Snipers\C14\data\rails\rails_co.paa"};
		hiddenSelectionsMaterials[]={"BUCA_WEAPONS\Weapons\Snipers\C14\data\action\action.rvmat","BUCA_WEAPONS\Weapons\Snipers\C14\data\barrel\barrel.rvmat","BUCA_WEAPONS\Weapons\Snipers\C14\data\body\body.rvmat","BUCA_WEAPONS\Weapons\Snipers\C14\data\muzzle\muzzle.rvmat","BUCA_WEAPONS\Weapons\Snipers\C14\data\rails\rails.rvmat"};
		modes[]={"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]={"C14_SoundSet","Winchester70_Shot_iterior_SoundSet","Winchester70_Tail_SoundSet","Winchester70_InteriorTail_SoundSet","Winchester70_Tail_2D_SoundSet"};
			soundSetShotExt[]={{"C14_sup_SoundSet","Winchester70_silencerHomeMadeTail_SoundSet","Winchester70_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=1;
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
					hitpoints=4500;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"BUCA_WEAPONS\Weapons\Snipers\C14\data\action\action.rvmat",
								"BUCA_WEAPONS\Weapons\Snipers\C14\data\barrel\barrel.rvmat",
								"BUCA_WEAPONS\Weapons\Snipers\C14\data\body\body.rvmat",
								"BUCA_WEAPONS\Weapons\Snipers\C14\data\muzzle\muzzle.rvmat",
								"BUCA_WEAPONS\Weapons\Snipers\C14\data\rails\rails.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"BUCA_WEAPONS\Weapons\Snipers\C14\data\action\action.rvmat",
								"BUCA_WEAPONS\Weapons\Snipers\C14\data\barrel\barrel.rvmat",
								"BUCA_WEAPONS\Weapons\Snipers\C14\data\body\body.rvmat",
								"BUCA_WEAPONS\Weapons\Snipers\C14\data\muzzle\muzzle.rvmat",
								"BUCA_WEAPONS\Weapons\Snipers\C14\data\rails\rails.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"BUCA_WEAPONS\Weapons\Snipers\C14\data\action\action.rvmat",
								"BUCA_WEAPONS\Weapons\Snipers\C14\data\barrel\barrel.rvmat",
								"BUCA_WEAPONS\Weapons\Snipers\C14\data\body\body.rvmat",
								"BUCA_WEAPONS\Weapons\Snipers\C14\data\muzzle\muzzle.rvmat",
								"BUCA_WEAPONS\Weapons\Snipers\C14\data\rails\rails.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"BUCA_WEAPONS\Weapons\Snipers\C14\data\action\action.rvmat",
								"BUCA_WEAPONS\Weapons\Snipers\C14\data\barrel\barrel.rvmat",
								"BUCA_WEAPONS\Weapons\Snipers\C14\data\body\body.rvmat",
								"BUCA_WEAPONS\Weapons\Snipers\C14\data\muzzle\muzzle.rvmat",
								"BUCA_WEAPONS\Weapons\Snipers\C14\data\rails\rails.rvmat"
							}
						},
						
						{
							0,
							
							{
								"BUCA_WEAPONS\Weapons\Snipers\C14\data\action\action.rvmat",
								"BUCA_WEAPONS\Weapons\Snipers\C14\data\barrel\barrel.rvmat",
								"BUCA_WEAPONS\Weapons\Snipers\C14\data\body\body.rvmat",
								"BUCA_WEAPONS\Weapons\Snipers\C14\data\muzzle\muzzle.rvmat",
								"BUCA_WEAPONS\Weapons\Snipers\C14\data\rails\rails.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class BC_C14_Black: BC_C14_Base
	{
		scope=2;
		displayName="C14 | Black";
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Weapons\Snipers\C14\data\action\Action_co.paa","BUCA_WEAPONS\Weapons\Snipers\C14\data\barrel\barrel_co.paa","BUCA_WEAPONS\Weapons\Snipers\C14\data\body\body_co.paa","BUCA_WEAPONS\Weapons\Snipers\C14\data\muzzle\muzzle_co.paa","BUCA_WEAPONS\Weapons\Snipers\C14\data\rails\rails_co.paa"};
	};
};

class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class base_HomeSilenced_distShot_SoundShader;
	class C14_closeShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\C14\Sounds\C14_close",1}};
		volume=1;
		range=500;
	};
	class C14_midShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\C14\Sounds\C14_mid",1}};
		volume=0.60000002;
		range=500;
	};
	class C14_farShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\C14\Sounds\C14_far",1}};
		volume=0.40000001;
		range=1300;
	};
	class C14_SilcloseShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\C14\Sounds\C14_silenced",1}};
		volume=0.80000001;
		range=50;
	};
	class C14_SilmidShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\C14\Sounds\C14_silenced_mid",1}};
		volume=0.60000002;
		range=100;
	};
	class C14_SilfarShot_SoundShader
	{
		samples[]={{"BUCA_WEAPONS\Weapons\Snipers\C14\Sounds\C14_silenced_far",1}};
		volume=0.40000001;
		range=150;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class C14_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]={"C14_closeShot_SoundShader","C14_midShot_SoundShader","C14_farShot_SoundShader"};
	};
	class C14_sup_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]={"C14_SilcloseShot_SoundShader","C14_SilmidShot_SoundShader","C14_SilfarShot_SoundShader"};
	};
};
