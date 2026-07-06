class CfgPatches
{
	class IMP_EVO3A1
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
	class IMP_EVO3A1: Rifle_Base
	{
		scope = 2;
		displayName = "Scorpion Evo 3 A1";
		descriptionShort = "$STR_IMP_EVO3D";
		model = "\IMPWMODPart2\Weapons\SMG\EVO\EVO.p3d";
		weight = 1840;
		absorbency = 0.0;
		itemSize[] = {5,2};
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		PPDOFProperties[] = {1,0.75,40,180,4,10};
		WeaponLength = 0.583269;
		barrelArmor = 1.25;
		initSpeedMultiplier = 1.05;
		chamberSize = 1;
		chamberedRound = "";
		ejectType = 1;
		chamberableFrom[] = {"BC_Ammo_46x30mm"};
		magazines[] = {"IMP_Mag_EVO_30rnd"};
		attachments[] = {"weaponOptics","weaponFlashlight","pistolMuzzle", "weaponWrap"};
		recoilModifier[] = {0.75,0.75,0.75};
		swayModifier[] = {1.2,1.2,1};
		simpleHiddenSelections[] = {"hide_barrel"};
		hiddenSelections[] = {"camo"};
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
			burst=3;
			reloadTime = 0.054;
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
			reloadTime = 0.054;
			recoil = "recoil_mp5";
			recoilProne = "recoil_mp5_prone";
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 66;
			type = "shot";
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
		weaponStateAnim = "dz\anims\anm\player\reloads\MP5\w_mp5k_states.anm";
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[] = {-0.1,0.01,0};
				orientation[] = {0,-8,0};
			};
			class Melee
			{
				position[] = {-0.1,0.01,-0.02};
				orientation[] = {0,0,0};
			};
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
					hitpoints=450;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"IMPWMODPart2\Weapons\SMG\EVO\Data\EVO.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"IMPWMODPart2\Weapons\SMG\EVO\Data\EVO.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMODPart2\Weapons\SMG\EVO\Data\EVO.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"IMPWMODPart2\Weapons\SMG\EVO\Data\EVO.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"IMPWMODPart2\Weapons\SMG\EVO\Data\EVO.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_EVO_30rnd: Magazine_Base
 	{
		scope=2;
		displayName="$STR_IMP_EVO3DMagn";
		descriptionShort="$STR_IMP_EVO3DMagnD";
		model="\IMPWMODPart2\Weapons\SMG\EVO\EVO3A1Mag.p3d";
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
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"IMPWMODPart2\Weapons\SMG\EVO\Data\EVO_Mag.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"IMPWMODPart2\Weapons\SMG\EVO\Data\EVO_Mag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMODPart2\Weapons\SMG\EVO\Data\EVO_Mag_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"IMPWMODPart2\Weapons\SMG\EVO\Data\EVO_Mag_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"IMPWMODPart2\Weapons\SMG\EVO\Data\EVO_Mag_destruct.rvmat"
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
	class ProxyEVO3A1Mag: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="\IMPWMODPart2\Weapons\SMG\EVO\EVO3A1Mag.p3d";
	};
};