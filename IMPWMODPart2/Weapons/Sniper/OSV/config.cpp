class CfgPatches
{
	class IMP_OSV
	{
		units[]={};
		weapons[]=
		{
			"IMP_OSV"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Ammunition",
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Muzzles",
			"DZ_Weapons_Optics"
		};
		magazines[]=
		{
			"IMP_Mag_OSV_5rnd"
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
	class IMP_OSV_Base: BoltActionRifle_Base
	{
		scope=0;
		animName="cz527";
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		modelOptics="-";
		distanceZoomMin=100;
		distanceZoomMax=100;
		PPDOFProperties[]={1,0.5,50,160,4,10};
		simpleHiddenSelections[]=
		{
			"hide_barrel",
			"hide_ironsights"
		};
		initSpeedMultiplier=1.05509;
		WeaponLength=1;
		weight=12500;
		opticsFlare=0;
		ironsightsExcludingOptics[]=
		{
			"M4_CarryHandleOptic",
			"BUISOptic",
			"M68Optic",
			"M4_T3NRDSOptic",
			"ReflexOptic",
			"ACOGOptic",
			"HuntingOptic"
		};
		barrelArmor = 4.0;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"BC_Ammo_20mm"
		};
		magazines[]=
		{
			"IMP_Mag_OSV_5rnd"
		};
		hiddenSelections[] = {"color1","color2"};
		magazineSwitchTime=0.38;
		ejectType=0;
		recoilModifier[]={0.25,0.25,0.25};
		swayModifier[]={0,0,0};
		drySound[]=
		{
			"dz\sounds\weapons\firearms\mosin9130\mosin_dry",
			0.5,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\CR527\cz527_reload_0",
			1,
			1,
			20
		};
		reloadSound[]=
		{
			"dz\sounds\weapons\firearms\CR527\cz527_cycling_0",
			1,
			1,
			20
		};
		reloadAction="Reloadcz527";
		shotAction="Reloadcz527Shot";
		modes[]=
		{
			"Single"
		};
		class Single: Mode_Single
		{
			soundSetShot[]= {"AX50_Shot_SoundSet","AX50_Tail_SoundSet","AX50_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"AX50_silencerHomeMade_SoundSet","AX50_silencerHomeMadeTail_SoundSet","AX50_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.2;
			recoil="recoil_cz527";
			recoilProne="recoil_cz527_prone";
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
					overrideParticle="weapon_shot_cz527_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={-0.050000001,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=1;
				maxOverheatingValue=4;
				overheatingDecayInterval=3;
				class BarrelSmoke
				{
					overrideParticle="smoking_barrel_small";
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
		class NoiseShoot
		{
			strength=100;
			type="shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
	};
	class IMP_OSV: IMP_OSV_Base
	{
		scope=2;
		displayName = "$STR_IMP_OSV96N";
		descriptionShort = "Оружие использует калибр 145x114 | The weapon uses a 145x114 caliber.";
		model="IMPWMODPart2\Weapons\Sniper\OSV\OSV.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsHunting"
		};
		hiddenSelectionsTextures[] = {"IMPWMODPart2\Weapons\Sniper\osv\data\osv_main_co.paa","IMPWMODPart2\Weapons\Sniper\osv\data\osv_other_co.paa"};
		itemSize[]={10,2};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 300000000000;
                    healthLevels[] = 
                    {
                        {1.0,{"IMPWMODPart2\Weapons\Sniper\OSV\data\OSV_Light.rvmat", "IMPWMODPart2\Weapons\Sniper\OSV\data\OSV_Main.rvmat", "IMPWMODPart2\Weapons\Sniper\OSV\data\OSV_Other.rvmat"}},
                        {0.7,{"IMPWMODPart2\Weapons\Sniper\OSV\data\OSV_Light.rvmat", "IMPWMODPart2\Weapons\Sniper\OSV\data\OSV_Main.rvmat", "IMPWMODPart2\Weapons\Sniper\OSV\data\OSV_Other.rvmat"}},
                        {0.5,{"IMPWMODPart2\Weapons\Sniper\OSV\data\OSV_Light.rvmat", "IMPWMODPart2\Weapons\Sniper\OSV\data\OSV_Main.rvmat", "IMPWMODPart2\Weapons\Sniper\OSV\data\OSV_Other.rvmat"}},
                        {0.3,{"IMPWMODPart2\Weapons\Sniper\OSV\data\OSV_Light.rvmat", "IMPWMODPart2\Weapons\Sniper\OSV\data\OSV_Main.rvmat", "IMPWMODPart2\Weapons\Sniper\OSV\data\OSV_Other.rvmat"}},
                        {0.0,{"IMPWMODPart2\Weapons\Sniper\OSV\data\OSV_Light.rvmat", "IMPWMODPart2\Weapons\Sniper\OSV\data\OSV_Main.rvmat", "IMPWMODPart2\Weapons\Sniper\OSV\data\OSV_Other.rvmat"}}
					};
                };
            };
        };
	};
	
};
class cfgMagazines
{
	class Magazine_Base;
  	class IMP_Mag_OSV_5rnd: Magazine_Base
 	{
		scope=2;
		displayName = "$STR_IMP_OSV96NDs";
		descriptionShort = "$STR_IMP_OSV96NDss";
		model="IMPWMODPart2\Weapons\Sniper\OSV\OSV_mag.p3d";
		weight=300;
		itemSize[]={2,2};
		count=5;
		ammo = "BC_Bullet_20mm";
		ammoItems[] = {"BC_Ammo_20mm"};
		tracersEvery=0;
		mass=10;
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 1500000000000;
                    healthLevels[] = 
                    {
                        {1.0,{"IMPWMODPart2\Weapons\Sniper\OSV\data\OSV_Light.rvmat", "IMPWMODPart2\Weapons\Sniper\OSV\data\OSV_Main.rvmat", "IMPWMODPart2\Weapons\Sniper\OSV\data\OSV_Other.rvmat"}},
                        {0.7,{"IMPWMODPart2\Weapons\Sniper\OSV\data\OSV_Light.rvmat", "IMPWMODPart2\Weapons\Sniper\OSV\data\OSV_Main.rvmat", "IMPWMODPart2\Weapons\Sniper\OSV\data\OSV_Other.rvmat"}},
                        {0.5,{"IMPWMODPart2\Weapons\Sniper\OSV\data\OSV_Light.rvmat", "IMPWMODPart2\Weapons\Sniper\OSV\data\OSV_Main.rvmat", "IMPWMODPart2\Weapons\Sniper\OSV\data\OSV_Other.rvmat"}},
                        {0.3,{"IMPWMODPart2\Weapons\Sniper\OSV\data\OSV_Light.rvmat", "IMPWMODPart2\Weapons\Sniper\OSV\data\OSV_Main.rvmat", "IMPWMODPart2\Weapons\Sniper\OSV\data\OSV_Other.rvmat"}},
                        {0.0,{"IMPWMODPart2\Weapons\Sniper\OSV\data\OSV_Light.rvmat", "IMPWMODPart2\Weapons\Sniper\OSV\data\OSV_Main.rvmat", "IMPWMODPart2\Weapons\Sniper\OSV\data\OSV_Other.rvmat"}}
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
	class ProxyMag_OSV_5rnd: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="IMPWMODPart2\Weapons\Sniper\OSV\OSV_mag.p3d";
	};
};