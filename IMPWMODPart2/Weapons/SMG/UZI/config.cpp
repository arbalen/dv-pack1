class CfgPatches
{
	class IMP_UZI
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Ammunition",
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Muzzles",
			"DZ_Weapons_Optics",
			"IMP_UZI_Sounds"
		};
		magazines[]={};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class CfgWeapons
{
	class Rifle_Base;
	class IMP_UZI_Base: Rifle_Base
	{
		scope=0;
		weight=3500;
		absorbency=0;
		repairableWithKits[]={5,1};
		repairCosts[]={30,25};
		PPDOFProperties[]={0,0,0,0,0,0};
		simpleHiddenSelections[]={"hide_rail"};
		WeaponLength=0.470;
		initSpeedMultiplier = 1.05;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"BC_Ammo_46x30mm"
		};
		magazines[]=
		{
			"IMP_Mag_UZI_32rnd",
			"IMP_Mag_UZI_72rnd"
		};
		magazineSwitchTime = 1.4;
		ejectType=1;
		barrelArmor = 1.25;
		recoilModifier[] = {1.1,1.03,1.05};
		swayModifier[] = {1.1,1.1,1};
		reloadAction="ReloadCZ61";
		hiddenSelections[] = {"color"};
		modes[]=
		{
			"FullAuto",
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"UZI_SoundSet",
				"CZ61_Tail_SoundSet",
				"CZ61_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"CZ61_silencer_SoundSet",
					"CZ61_silencerTail_SoundSet",
					"CZ61_silencerInteriorTail_SoundSet"
				},
				
				{
					"CZ61_silencerHomeMade_SoundSet",
					"CZ61_silencerHomeMadeTail_SoundSet",
					"CZ61_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			recoil="recoil_cz61";
			recoilProne="recoil_cz61_prone";
			reloadTime = 0.145;
			dispersion = 0;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"UZI_SoundSet",
				"CZ61_Tail_SoundSet",
				"CZ61_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"CZ61_silencer_SoundSet",
					"CZ61_silencerTail_SoundSet",
					"CZ61_silencerInteriorTail_SoundSet"
				},
				
				{
					"CZ61_silencerHomeMade_SoundSet",
					"CZ61_silencerHomeMadeTail_SoundSet",
					"CZ61_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			recoil="recoil_cz61";
			recoilProne="recoil_cz61_prone";
			reloadTime = 0.063;
			dispersion = 0;
			magazineSlot="magazine";
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
					overrideParticle="weapon_shot_winded_smoke_small";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=3;
				maxOverheatingValue=10;
				overheatingDecayInterval=1;
				class SmokingBarrel
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.5};
					onlyWithinRainLimits[]={0,0.2};
					ignoreIfSuppressed=1;
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.1,0.02,0};
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
			discreteDistance[]={25,50,100,200,300};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=25;
			distanceZoomMax=300;
		};
	};
	class IMP_UZI: IMP_UZI_Base
	{
		scope=2;
		displayName="UZI";
		descriptionShort="Оружие использует калибр 46x30 | The weapon uses a 46x30 caliber.";
		model="IMPWMODPart2\Weapons\SMG\UZI\LAB_UZI.p3d";
		attachments[]=
		{
			"pistolMuzzle",
			"weaponOptics"
		};
		hiddenSelectionsTextures[] = {"IMPWMODPart2\Weapons\SMG\uzi\data\uzi_co.paa"};
		itemSize[]={5,2};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=3500000;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"IMPWMODPart2\Weapons\SMG\UZI\Data\UZI.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Rail.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Attachments.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\HK416-2.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Mag_UZI_32rnd.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Mag_UZI_72rnd.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\UZI_Plastic.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"IMPWMODPart2\Weapons\SMG\UZI\Data\UZI.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Rail.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Attachments.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\HK416-2.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Mag_UZI_32rnd.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Mag_UZI_72rnd.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\UZI_Plastic.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMODPart2\Weapons\SMG\UZI\Data\UZI_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Rail_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Attachments_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\HK416-2_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Mag_UZI_32rnd_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Mag_UZI_72rnd_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\UZI_Plastic_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"IMPWMODPart2\Weapons\SMG\UZI\Data\UZI_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Rail_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Attachments_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\HK416-2_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Mag_UZI_32rnd_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Mag_UZI_72rnd_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\UZI_Plastic_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"IMPWMODPart2\Weapons\SMG\UZI\Data\UZI_destruct.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Rail_destruct.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Attachments_destruct.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\HK416-2_destruct.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Mag_UZI_32rnd_destruct.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Mag_UZI_72rnd_destruct.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\UZI_Plastic_destruct.rvmat"
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
  	class IMP_Mag_UZI_32rnd: Magazine_Base
 	{
		scope=2;
		displayName="$STR_IMP_UZIMagN";
		descriptionShort="$STR_IMP_UZIMagN22";
		model="IMPWMODPart2\Weapons\SMG\UZI\Mag_UZI_32rnd.p3d";
		weight=150;
		itemSize[]={1,3};
		count=32;
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
					hitpoints=250000;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"IMPWMODPart2\Weapons\SMG\UZI\Data\UZI.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Rail.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Attachments.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\HK416-2.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Mag_UZI_32rnd.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Mag_UZI_72rnd.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\UZI_Plastic.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"IMPWMODPart2\Weapons\SMG\UZI\Data\UZI.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Rail.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Attachments.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\HK416-2.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Mag_UZI_32rnd.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Mag_UZI_72rnd.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\UZI_Plastic.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMODPart2\Weapons\SMG\UZI\Data\UZI_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Rail_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Attachments_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\HK416-2_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Mag_UZI_32rnd_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Mag_UZI_72rnd_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\UZI_Plastic_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"IMPWMODPart2\Weapons\SMG\UZI\Data\UZI_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Rail_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Attachments_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\HK416-2_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Mag_UZI_32rnd_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Mag_UZI_72rnd_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\UZI_Plastic_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"IMPWMODPart2\Weapons\SMG\UZI\Data\UZI_destruct.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Rail_destruct.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Attachments_destruct.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\HK416-2_destruct.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Mag_UZI_32rnd_destruct.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Mag_UZI_72rnd_destruct.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\UZI_Plastic_destruct.rvmat"
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
	class IMP_Mag_UZI_72rnd: IMP_Mag_UZI_32rnd
 	{
		scope=2;
		displayName="$STR_IMP_UZIMagN2";
		descriptionShort="$STR_IMP_UZIMagN222";
		model="IMPWMODPart2\Weapons\SMG\UZI\Mag_UZI_72rnd.p3d";
		weight=320;
		itemSize[]={2,3};
		count=72;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=25000000;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"IMPWMODPart2\Weapons\SMG\UZI\Data\UZI.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Rail.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Attachments.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\HK416-2.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Mag_UZI_32rnd.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Mag_UZI_72rnd.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\UZI_Plastic.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"IMPWMODPart2\Weapons\SMG\UZI\Data\UZI.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Rail.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Attachments.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\HK416-2.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Mag_UZI_32rnd.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Mag_UZI_72rnd.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\UZI_Plastic.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMODPart2\Weapons\SMG\UZI\Data\UZI_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Rail_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Attachments_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\HK416-2_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Mag_UZI_32rnd_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Mag_UZI_72rnd_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\UZI_Plastic_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"IMPWMODPart2\Weapons\SMG\UZI\Data\UZI_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Rail_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Attachments_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\HK416-2_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Mag_UZI_32rnd_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Mag_UZI_72rnd_damage.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\UZI_Plastic_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"IMPWMODPart2\Weapons\SMG\UZI\Data\UZI_destruct.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Rail_destruct.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Attachments_destruct.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\HK416-2_destruct.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Mag_UZI_32rnd_destruct.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\Mag_UZI_72rnd_destruct.rvmat",
								"IMPWMODPart2\Weapons\SMG\UZI\Data\UZI_Plastic_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyMag_UZI_32rnd: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="IMPWMODPart2\Weapons\SMG\UZI\Mag_UZI_32rnd.p3d";
	};
	class ProxyMag_UZI_72rnd: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="IMPWMODPart2\Weapons\SMG\UZI\Mag_UZI_72rnd.p3d";
	};
};