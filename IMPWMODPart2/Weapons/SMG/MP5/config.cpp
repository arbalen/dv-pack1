class CfgPatches
{
	class TheIMP_Firearms_MP5
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
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
	class IMP_MP5SDA2_Base: Rifle_Base
	{
		scope = 0;
		weight = 1840;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.75,40,180,4,10};
		ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic"};
		WeaponLength = 0.583269;
		barrelArmor = 1.25;
		initSpeedMultiplier = 1.05;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"BC_Ammo_46x30mm"};
		magazines[] = {"Mag_MP5_15Rnd","Mag_MP5_30Rnd","IMP_Mag_MP5_30rnd","IMP_Mag_MP5_50rnd"};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		simpleHiddenSelections[] = {"hide_barrel"};
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_fnx_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={0,0,0};
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
				};
				class ChamberSmokeBurst
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 15;
				maxOverheatingValue = 30;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					ignoreIfSuppressed = 1;
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.3};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					ignoreIfSuppressed = 1;
					overrideParticle = "smoking_barrel";
					positionOffset[] = {0.1,0,0};
					onlyWithinOverheatLimits[] = {0.3,0.9};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot2
				{
					ignoreIfSuppressed = 1;
					overrideParticle = "smoking_barrel_heavy";
					positionOffset[] = {0.1,0,0};
					onlyWithinOverheatLimits[] = {0.9,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.1,0.05,0};
					onlyWithinOverheatLimits[] = {0,0.5};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class SmokingBarrelHotSteam2
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.13,0.05,0};
					onlyWithinOverheatLimits[] = {0.5,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
		};
	};
	class IMP_MP5SDA2: IMP_MP5SDA2_Base
	{
		scope = 2;
		displayName = "MP5SD";
		descriptionShort = "Оружие использует калибр 46х30 | The weapon uses a 46х30 caliber.";
		model = "IMPWMODPart2\Weapons\SMG\MP5\MP5SDA2.p3d";
		itemSize[] = {5,2};
		attachments[] = {"weaponOptics", "weaponWrap"};
		noiseShootModifier = -2.0;
		recoilModifier[] = {0.45,0.45,0.45};
		swayModifier[] = {0.6,0.6,0.5};
		reloadAction = "ReloadMP5";
		modes[] = {"FullAuto","Burst","SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"MP5K_Shot_1st_SoundSet",
				"MP5K_Shot_1st_iterior_SoundSet",
				"MP5K_Tail_SoundSet",
				"MP5K_InteriorTail_SoundSet",
				"MP5K_Slapback_SoundSet",
				"MP5K_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"MP5K_1st_silencer_SoundSet",
					"MP5K_silencerTail_SoundSet",
					"MP5K_silencerInteriorTail_SoundSet"
				},
				
				{
					"MP5K_1st_silencerHomeMade_SoundSet",
					"MP5K_silencerHomeMadeTail_SoundSet",
					"MP5K_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime = 0.12;
			recoil = "recoil_mp5";
			recoilProne = "recoil_mp5_prone";
			dispersion = 0;
			magazineSlot = "magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot1st[]=
			{
				"MP5K_Shot_1st_SoundSet",
				"MP5K_Shot_1st_iterior_SoundSet"
			};
			soundSetShot[]=
			{
				"MP5K_Shot_SoundSet",
				"MP5K_Shot_iterior_SoundSet",
				"MP5K_Tail_SoundSet",
				"MP5K_InteriorTail_SoundSet",
				"MP5K_Slapback_SoundSet",
				"MP5K_Tail_2D_SoundSet"
			};
			soundSetShotExt1st[]=
			{
				
				{
					"MP5K_1st_silencer_SoundSet"
				},
				
				{
					"MP5K_1st_silencerHomeMade_SoundSet"
				}
			};
			soundSetShotExt[]=
			{
				
				{
					"MP5K_silencer_SoundSet",
					"MP5K_silencerTail_SoundSet",
					"MP5K_silencerInteriorTail_SoundSet"
				},
				
				{
					"MP5K_silencerHomeMade_SoundSet",
					"MP5K_silencerHomeMadeTail_SoundSet",
					"MP5K_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			burst = 3;
			reloadTime = 0.065;
			recoil = "recoil_mp5";
			recoilProne = "recoil_mp5_prone";
			dispersion = 0;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot1st[]=
			{
				"MP5K_Shot_1st_SoundSet",
				"MP5K_Shot_1st_iterior_SoundSet"
			};
			soundSetShot[]=
			{
				"MP5K_Shot_SoundSet",
				"MP5K_Shot_iterior_SoundSet",
				"MP5K_Tail_SoundSet",
				"MP5K_InteriorTail_SoundSet",
				"MP5K_Slapback_SoundSet",
				"MP5K_Tail_2D_SoundSet"
			};
			soundSetShotExt1st[]=
			{
				
				{
					"MP5K_1st_silencer_SoundSet"
				},
				
				{
					"MP5K_1st_silencerHomeMade_SoundSet"
				}
			};
			soundSetShotExt[]=
			{
				
				{
					"MP5K_silencer_SoundSet",
					"MP5K_silencerTail_SoundSet",
					"MP5K_silencerInteriorTail_SoundSet"
				},
				
				{
					"MP5K_silencerHomeMade_SoundSet",
					"MP5K_silencerHomeMadeTail_SoundSet",
					"MP5K_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime = 0.065;
			recoil = "recoil_mp5";
			recoilProne = "recoil_mp5_prone";
			dispersion = 0;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 3.0;
			type = "sound";
		};		
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 450000;
					healthLevels[] = {{1.0,{"IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A1.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A2.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_Rails.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5magpul.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A1.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A2.rvmat"}},{0.7,{"IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A1.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A2.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_Rails.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5magpul.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A1.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A2.rvmat"}},{0.5,{"IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A1_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A2_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_Rails_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5magpul_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A1_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A2_damage.rvmat"}},{0.3,{"IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A1_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A2_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_Rails_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5magpul_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A1_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A2_damage.rvmat"}},{0.0,{"IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A1_destruct.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A2_destruct.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_destruct.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_Rails_destruct.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5magpul_destruct.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A1_destruct.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A2_destruct.rvmat"}}};
				};
			};
		};
	};	
	class IMP_MP5SDA2_FDE: IMP_MP5SDA2
	{
		scope = 2;
		displayName = "MP5SD";
		descriptionShort = "Оружие использует калибр 46х30 | The weapon uses a 46х30 caliber.";
		model = "IMPWMODPart2\Weapons\SMG\MP5\MP5SDA2.p3d";
		hiddenSelections[] = {"sdhgcamo","maincamo","sa2camo","EVO_3A1"};
		hiddenSelectionsTextures[] = {"IMPWMODPart2\Weapons\SMG\MP5\data\HG_A2_FDE_co.paa","IMPWMODPart2\Weapons\SMG\MP5\data\MP5_FDE_co.paa","IMPWMODPart2\Weapons\SMG\MP5\data\Stock_A2_FDE_co.paa","IMPWMODPart2\Weapons\SMG\evo\data\EVO_3A1_Grip_FDE_co.paa"};
		
	};
	class IMP_MP5MPA2_Base: Rifle_Base
	{
		scope = 0;
		weight = 1840;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.75,40,180,4,10};
		ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic"};
		WeaponLength = 0.583269;
		barrelArmor = 1.25;
		initSpeedMultiplier = 1.05;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"BC_Ammo_46x30mm"};
		magazines[] = {"Mag_MP5_15Rnd","Mag_MP5_30Rnd","IMP_Mag_MP5_30rnd","IMP_Mag_MP5_50rnd"};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		simpleHiddenSelections[] = {"hide_barrel"};
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		reloadAction = "ReloadMP5";
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_fnx_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={0,0,0};
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
				};
				class ChamberSmokeBurst
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 15;
				maxOverheatingValue = 30;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					ignoreIfSuppressed = 1;
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.3};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					ignoreIfSuppressed = 1;
					overrideParticle = "smoking_barrel";
					positionOffset[] = {0.1,0,0};
					onlyWithinOverheatLimits[] = {0.3,0.9};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot2
				{
					ignoreIfSuppressed = 1;
					overrideParticle = "smoking_barrel_heavy";
					positionOffset[] = {0.1,0,0};
					onlyWithinOverheatLimits[] = {0.9,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.1,0.05,0};
					onlyWithinOverheatLimits[] = {0,0.5};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class SmokingBarrelHotSteam2
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.13,0.05,0};
					onlyWithinOverheatLimits[] = {0.5,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
		};
	};
	class IMP_MP5MPA2: IMP_MP5MPA2_Base
	{
		scope = 2;
		displayName = "MP5A2";
		descriptionShort = "Оружие использует калибр 46х30 | The weapon uses a 46х30 caliber.";
		model = "IMPWMODPart2\Weapons\SMG\MP5\MP5MPA2.p3d";
		itemSize[] = {6,3};
		attachments[] = {"weaponOptics","weaponMuzzleMP5","pistolMuzzle","weaponFlashlight", "weaponWrap"};
		recoilModifier[] = {0.45,0.45,0.45};
		swayModifier[] = {0.6,0.6,0.5};
		reloadAction = "ReloadMP5";
		modes[] = {"FullAuto","Burst","SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"MP5K_Shot_1st_SoundSet",
				"MP5K_Shot_1st_iterior_SoundSet",
				"MP5K_Tail_SoundSet",
				"MP5K_InteriorTail_SoundSet",
				"MP5K_Slapback_SoundSet",
				"MP5K_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"MP5K_1st_silencer_SoundSet",
					"MP5K_silencerTail_SoundSet",
					"MP5K_silencerInteriorTail_SoundSet"
				},
				
				{
					"MP5K_1st_silencerHomeMade_SoundSet",
					"MP5K_silencerHomeMadeTail_SoundSet",
					"MP5K_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime = 0.12;
			recoil = "recoil_mp5";
			recoilProne = "recoil_mp5_prone";
			dispersion = 0;
			magazineSlot = "magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot1st[]=
			{
				"MP5K_Shot_1st_SoundSet",
				"MP5K_Shot_1st_iterior_SoundSet"
			};
			soundSetShot[]=
			{
				"MP5K_Shot_SoundSet",
				"MP5K_Shot_iterior_SoundSet",
				"MP5K_Tail_SoundSet",
				"MP5K_InteriorTail_SoundSet",
				"MP5K_Slapback_SoundSet",
				"MP5K_Tail_2D_SoundSet"
			};
			soundSetShotExt1st[]=
			{
				
				{
					"MP5K_1st_silencer_SoundSet"
				},
				
				{
					"MP5K_1st_silencerHomeMade_SoundSet"
				}
			};
			soundSetShotExt[]=
			{
				
				{
					"MP5K_silencer_SoundSet",
					"MP5K_silencerTail_SoundSet",
					"MP5K_silencerInteriorTail_SoundSet"
				},
				
				{
					"MP5K_silencerHomeMade_SoundSet",
					"MP5K_silencerHomeMadeTail_SoundSet",
					"MP5K_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			burst = 3;
			reloadTime = 0.065;
			recoil = "recoil_mp5";
			recoilProne = "recoil_mp5_prone";
			dispersion = 0;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot1st[]=
			{
				"MP5K_Shot_1st_SoundSet",
				"MP5K_Shot_1st_iterior_SoundSet"
			};
			soundSetShot[]=
			{
				"MP5K_Shot_SoundSet",
				"MP5K_Shot_iterior_SoundSet",
				"MP5K_Tail_SoundSet",
				"MP5K_InteriorTail_SoundSet",
				"MP5K_Slapback_SoundSet",
				"MP5K_Tail_2D_SoundSet"
			};
			soundSetShotExt1st[]=
			{
				
				{
					"MP5K_1st_silencer_SoundSet"
				},
				
				{
					"MP5K_1st_silencerHomeMade_SoundSet"
				}
			};
			soundSetShotExt[]=
			{
				
				{
					"MP5K_silencer_SoundSet",
					"MP5K_silencerTail_SoundSet",
					"MP5K_silencerInteriorTail_SoundSet"
				},
				
				{
					"MP5K_silencerHomeMade_SoundSet",
					"MP5K_silencerHomeMadeTail_SoundSet",
					"MP5K_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime = 0.065;
			recoil = "recoil_mp5";
			recoilProne = "recoil_mp5_prone";
			dispersion = 0;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={25,50,100,200,300};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=25;
			distanceZoomMax=300;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4000050;
					healthLevels[] = {{1.0,{"IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A1.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A2.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_Rails.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5magpul.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A1.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A2.rvmat"}},{0.7,{"IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A1.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A2.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_Rails.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5magpul.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A1.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A2.rvmat"}},{0.5,{"IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A1_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A2_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_Rails_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5magpul_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A1_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A2_damage.rvmat"}},{0.3,{"IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A1_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A2_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_Rails_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5magpul_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A1_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A2_damage.rvmat"}},{0.0,{"IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A1_destruct.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A2_destruct.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_destruct.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_Rails_destruct.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5magpul_destruct.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A1_destruct.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A2_destruct.rvmat"}}};
				};
			};
		};
	};
	class IMP_MP5MPA2_FDE: IMP_MP5MPA2
	{
		scope = 2;
		displayName = "MP5A2";
		descriptionShort = "Оружие использует калибр 46х30 | The weapon uses a 46х30 caliber.";
		model = "IMPWMODPart2\Weapons\SMG\MP5\MP5MPA2.p3d";
		hiddenSelections[] = {"magpulcamo","maincamo","sa2camo","EVO_3A1"};
		hiddenSelectionsTextures[] = {"IMPWMODPart2\Weapons\SMG\MP5\data\MP5magpul_FDE_co.paa","IMPWMODPart2\Weapons\SMG\MP5\data\MP5_FDE_co.paa","IMPWMODPart2\Weapons\SMG\MP5\data\Stock_A2_FDE_co.paa","IMPWMODPart2\Weapons\SMG\evo\data\EVO_3A1_Grip_FDE_co.paa"};
		
	};
	class IMP_MP5RailA2_Base: Rifle_Base
	{
		scope = 0;
		weight = 1840;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.75,40,180,4,10};
		ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic"};
		WeaponLength = 0.583269;
		barrelArmor = 1.25;
		initSpeedMultiplier = 1.05;
		itemSize[] = {5,2};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"BC_Ammo_46x30mm"};
		magazines[] = {"Mag_MP5_15Rnd","Mag_MP5_30Rnd","IMP_Mag_MP5_30rnd","IMP_Mag_MP5_50rnd"};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		simpleHiddenSelections[] = {"hide_barrel"};
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		reloadAction = "ReloadMP5";
		attachments[] = {"weaponOptics","weaponFlashlight","weaponMuzzleMP5","pistolMuzzle", "weaponWrap"};
		modes[] = {"FullAuto","Burst","SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"MP5K_Shot_1st_SoundSet",
				"MP5K_Shot_1st_iterior_SoundSet",
				"MP5K_Tail_SoundSet",
				"MP5K_InteriorTail_SoundSet",
				"MP5K_Slapback_SoundSet",
				"MP5K_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"MP5K_1st_silencer_SoundSet",
					"MP5K_silencerTail_SoundSet",
					"MP5K_silencerInteriorTail_SoundSet"
				},
				
				{
					"MP5K_1st_silencerHomeMade_SoundSet",
					"MP5K_silencerHomeMadeTail_SoundSet",
					"MP5K_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime = 0.12;
			recoil = "recoil_mp5";
			recoilProne = "recoil_mp5_prone";
			dispersion = 0;
			magazineSlot = "magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot1st[]=
			{
				"MP5K_Shot_1st_SoundSet",
				"MP5K_Shot_1st_iterior_SoundSet"
			};
			soundSetShot[]=
			{
				"MP5K_Shot_SoundSet",
				"MP5K_Shot_iterior_SoundSet",
				"MP5K_Tail_SoundSet",
				"MP5K_InteriorTail_SoundSet",
				"MP5K_Slapback_SoundSet",
				"MP5K_Tail_2D_SoundSet"
			};
			soundSetShotExt1st[]=
			{
				
				{
					"MP5K_1st_silencer_SoundSet"
				},
				
				{
					"MP5K_1st_silencerHomeMade_SoundSet"
				}
			};
			soundSetShotExt[]=
			{
				
				{
					"MP5K_silencer_SoundSet",
					"MP5K_silencerTail_SoundSet",
					"MP5K_silencerInteriorTail_SoundSet"
				},
				
				{
					"MP5K_silencerHomeMade_SoundSet",
					"MP5K_silencerHomeMadeTail_SoundSet",
					"MP5K_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			burst = 3;
			reloadTime = 0.065;
			recoil = "recoil_mp5";
			recoilProne = "recoil_mp5_prone";
			dispersion = 0;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot1st[]=
			{
				"MP5K_Shot_1st_SoundSet",
				"MP5K_Shot_1st_iterior_SoundSet"
			};
			soundSetShot[]=
			{
				"MP5K_Shot_SoundSet",
				"MP5K_Shot_iterior_SoundSet",
				"MP5K_Tail_SoundSet",
				"MP5K_InteriorTail_SoundSet",
				"MP5K_Slapback_SoundSet",
				"MP5K_Tail_2D_SoundSet"
			};
			soundSetShotExt1st[]=
			{
				
				{
					"MP5K_1st_silencer_SoundSet"
				},
				
				{
					"MP5K_1st_silencerHomeMade_SoundSet"
				}
			};
			soundSetShotExt[]=
			{
				
				{
					"MP5K_silencer_SoundSet",
					"MP5K_silencerTail_SoundSet",
					"MP5K_silencerInteriorTail_SoundSet"
				},
				
				{
					"MP5K_silencerHomeMade_SoundSet",
					"MP5K_silencerHomeMadeTail_SoundSet",
					"MP5K_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime = 0.065;
			recoil = "recoil_mp5";
			recoilProne = "recoil_mp5_prone";
			dispersion = 0;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={25,50,100,200,300};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=25;
			distanceZoomMax=300;
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_fnx_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={0,0,0};
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
				};
				class ChamberSmokeBurst
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 15;
				maxOverheatingValue = 30;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					ignoreIfSuppressed = 1;
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.3};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					ignoreIfSuppressed = 1;
					overrideParticle = "smoking_barrel";
					positionOffset[] = {0.1,0,0};
					onlyWithinOverheatLimits[] = {0.3,0.9};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot2
				{
					ignoreIfSuppressed = 1;
					overrideParticle = "smoking_barrel_heavy";
					positionOffset[] = {0.1,0,0};
					onlyWithinOverheatLimits[] = {0.9,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.1,0.05,0};
					onlyWithinOverheatLimits[] = {0,0.5};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class SmokingBarrelHotSteam2
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.13,0.05,0};
					onlyWithinOverheatLimits[] = {0.5,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4500000;
					healthLevels[] = {{1.0,{"IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A1.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A2.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_Rails.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5magpul.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A1.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A2.rvmat"}},{0.7,{"IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A1.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A2.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_Rails.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5magpul.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A1.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A2.rvmat"}},{0.5,{"IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A1_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A2_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_Rails_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5magpul_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A1_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A2_damage.rvmat"}},{0.3,{"IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A1_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A2_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_Rails_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5magpul_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A1_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A2_damage.rvmat"}},{0.0,{"IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A1_destruct.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A2_destruct.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_destruct.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_Rails_destruct.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5magpul_destruct.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A1_destruct.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A2_destruct.rvmat"}}};
				};
			};
		};
	};
	class IMP_MP5RailA2: IMP_MP5RailA2_Base
	{
		scope = 2;
		displayName = "MP5A2";
		descriptionShort = "Оружие использует калибр 46х30 | The weapon uses a 46х30 caliber.";
		model = "IMPWMODPart2\Weapons\SMG\MP5\MP5RailA2.p3d";
		itemSize[] = {5,2};
		attachments[] = {"weaponOptics","weaponFlashlight","weaponMuzzleMP5","pistolMuzzle", "weaponWrap"};
		recoilModifier[] = {0.45,0.45,0.45};
		swayModifier[] = {0.6,0.6,0.5};
		reloadAction = "ReloadMP5";
		modes[] = {"FullAuto","Burst","SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"MP5K_Shot_1st_SoundSet",
				"MP5K_Shot_1st_iterior_SoundSet",
				"MP5K_Tail_SoundSet",
				"MP5K_InteriorTail_SoundSet",
				"MP5K_Slapback_SoundSet",
				"MP5K_Tail_2D_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"MP5K_1st_silencer_SoundSet",
					"MP5K_silencerTail_SoundSet",
					"MP5K_silencerInteriorTail_SoundSet"
				},
				
				{
					"MP5K_1st_silencerHomeMade_SoundSet",
					"MP5K_silencerHomeMadeTail_SoundSet",
					"MP5K_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime = 0.12;
			recoil = "recoil_mp5";
			recoilProne = "recoil_mp5_prone";
			dispersion = 0;
			magazineSlot = "magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot1st[]=
			{
				"MP5K_Shot_1st_SoundSet",
				"MP5K_Shot_1st_iterior_SoundSet"
			};
			soundSetShot[]=
			{
				"MP5K_Shot_SoundSet",
				"MP5K_Shot_iterior_SoundSet",
				"MP5K_Tail_SoundSet",
				"MP5K_InteriorTail_SoundSet",
				"MP5K_Slapback_SoundSet",
				"MP5K_Tail_2D_SoundSet"
			};
			soundSetShotExt1st[]=
			{
				
				{
					"MP5K_1st_silencer_SoundSet"
				},
				
				{
					"MP5K_1st_silencerHomeMade_SoundSet"
				}
			};
			soundSetShotExt[]=
			{
				
				{
					"MP5K_silencer_SoundSet",
					"MP5K_silencerTail_SoundSet",
					"MP5K_silencerInteriorTail_SoundSet"
				},
				
				{
					"MP5K_silencerHomeMade_SoundSet",
					"MP5K_silencerHomeMadeTail_SoundSet",
					"MP5K_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			burst = 3;
			reloadTime = 0.065;
			recoil = "recoil_mp5";
			recoilProne = "recoil_mp5_prone";
			dispersion = 0;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot1st[]=
			{
				"MP5K_Shot_1st_SoundSet",
				"MP5K_Shot_1st_iterior_SoundSet"
			};
			soundSetShot[]=
			{
				"MP5K_Shot_SoundSet",
				"MP5K_Shot_iterior_SoundSet",
				"MP5K_Tail_SoundSet",
				"MP5K_InteriorTail_SoundSet",
				"MP5K_Slapback_SoundSet",
				"MP5K_Tail_2D_SoundSet"
			};
			soundSetShotExt1st[]=
			{
				
				{
					"MP5K_1st_silencer_SoundSet"
				},
				
				{
					"MP5K_1st_silencerHomeMade_SoundSet"
				}
			};
			soundSetShotExt[]=
			{
				
				{
					"MP5K_silencer_SoundSet",
					"MP5K_silencerTail_SoundSet",
					"MP5K_silencerInteriorTail_SoundSet"
				},
				
				{
					"MP5K_silencerHomeMade_SoundSet",
					"MP5K_silencerHomeMadeTail_SoundSet",
					"MP5K_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime = 0.065;
			recoil = "recoil_mp5";
			recoilProne = "recoil_mp5_prone";
			dispersion = 0;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={25,50,100,200,300};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=25;
			distanceZoomMax=300;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 45000000;
					healthLevels[] = {{1.0,{"IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A1.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A2.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_Rails.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5magpul.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A1.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A2.rvmat"}},{0.7,{"IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A1.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A2.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_Rails.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5magpul.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A1.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A2.rvmat"}},{0.5,{"IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A1_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A2_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_Rails_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5magpul_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A1_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A2_damage.rvmat"}},{0.3,{"IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A1_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A2_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_Rails_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5magpul_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A1_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A2_damage.rvmat"}},{0.0,{"IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A1_destruct.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A2_destruct.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_destruct.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_Rails_destruct.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5magpul_destruct.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A1_destruct.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A2_destruct.rvmat"}}};
				};
			};
		};
	};
	class IMP_MP5RailA2_FDE: IMP_MP5RailA2
	{
		scope = 2;
		displayName = "MP5A2";
		model = "IMPWMODPart2\Weapons\SMG\MP5\MP5RailA2.p3d";
		hiddenSelections[] = {"maincamo","sa2camo","EVO_3A1"};
		hiddenSelectionsTextures[] = {"IMPWMODPart2\Weapons\SMG\MP5\data\MP5_FDE_co.paa","IMPWMODPart2\Weapons\SMG\MP5\data\Stock_A2_FDE_co.paa","IMPWMODPart2\Weapons\SMG\evo\data\EVO_3A1_Grip_FDE_co.paa"};
		
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_MP5_30rnd: Magazine_Base
 	{
		scope=2;
		displayName="$STR_IMP_MP5SD5DMagN";
		descriptionShort="$STR_IMP_MP5SD5DMag2N2";
		model="IMPWMODPart2\Weapons\SMG\MP5\MP5_30Mag.p3d";
		weight=225;
		itemSize[]={1,3};
		count=30;
		ammo="BC_Bullet_46x30mm";
		ammoItems[]=
		{
			"BC_Ammo_46x30mm"
		};
		tracersEvery=0;
		mass=10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250000;
					healthLevels[] = {{1.0,{"IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A1.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A2.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_Rails.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5magpul.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A1.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A2.rvmat"}},{0.7,{"IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A1.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A2.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_Rails.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5magpul.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A1.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A2.rvmat"}},{0.5,{"IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A1_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A2_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_Rails_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5magpul_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A1_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A2_damage.rvmat"}},{0.3,{"IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A1_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A2_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_Rails_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5magpul_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A1_damage.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A2_damage.rvmat"}},{0.0,{"IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A1_destruct.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\HG_A2_destruct.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_destruct.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5_Rails_destruct.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\MP5magpul_destruct.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A1_destruct.rvmat","IMPWMODPart2\Weapons\SMG\MP5\Data\Stock_A2_destruct.rvmat"}}};
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
  	class IMP_Mag_MP5_50rnd: Magazine_Base
 	{
		scope=2;
		displayName="$STR_IMP_MP5SD5DMag2N";
		descriptionShort="$STR_IMP_MP5SD5DMag2N23";
		model="IMPWMODPart2\Weapons\SMG\MP5\Mags\MP5DrumMag.p3d";
		weight=225;
		itemSize[]={2,3};
		count=50;
		ammo="BC_Bullet_46x30mm";
		ammoItems[]=
		{
			"BC_Ammo_46x30mm"
		};
		tracersEvery=0;
		mass=10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10000000;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"IMPWMODPart2\Weapons\SMG\MP5\Mags\Data\DrumMagazine.rvmat",
								"IMPWMODPart2\Weapons\SMG\MP5\Data\MP5.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"IMPWMODPart2\Weapons\SMG\MP5\Mags\Data\DrumMagazine.rvmat",
								"IMPWMODPart2\Weapons\SMG\MP5\Data\MP5.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMODPart2\Weapons\SMG\MP5\Mags\Data\DrumMagazine.rvmat",
								"IMPWMODPart2\Weapons\SMG\MP5\Data\MP5.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"IMPWMODPart2\Weapons\SMG\MP5\Mags\Data\DrumMagazine.rvmat",
								"IMPWMODPart2\Weapons\SMG\MP5\Data\MP5.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"IMPWMODPart2\Weapons\SMG\MP5\Mags\Data\DrumMagazine.rvmat",
								"IMPWMODPart2\Weapons\SMG\MP5\Data\MP5.rvmat"
							}
						}
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
	class ProxyMP5_30Mag: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="IMPWMODPart2\Weapons\SMG\MP5\MP5_30Mag.p3d";
	};
	class ProxyMP5DrumMag: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="IMPWMODPart2\Weapons\SMG\MP5\Mags\MP5DrumMag.p3d";
	};
};	
