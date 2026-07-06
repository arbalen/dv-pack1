class CfgPatches
{
	class BC_Ammo_20mm
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Weapons_Magazines","DZ_Weapons_Ammunition","DZ_Weapons_Projectiles"};
		magazines[]=
		{
			"BC_Ammo_20mm"
		};
		ammo[]=
		{
			"BC_Bullet_20mm"
		};
	};
};
class CfgVehicles
{
	class FxCartridge;
	class FxCartridge_BC_Cartridge_20mm: FxCartridge
	{
		model="BUCA_WEAPONS\Ammo\20mm\BC_20mm_shell.p3d";
	};
	class FxRound;
	class FxRound_Bullet_BC_20mm: FxRound
	{
		model="BUCA_WEAPONS\Ammo\20mm\BC_20mm_single.p3d";
	};
};
class CfgMagazines
{
	class Ammunition_Base;
	class BC_Ammo_20mm: Ammunition_Base
	{
		scope=2;
		displayName="Патрон-Снаряд 145x114";
		descriptionShort="eh does it job";
		model="BUCA_WEAPONS\Ammo\20mm\BC_20mm_bullet.p3d";
		itemSize[]={1,3};
		rotationFlags=34;
		weight = 0.01;
		count=10;
		ammo="BC_Bullet_20mm";
	};
};
class cfgAmmoTypes
{
	class BC_Bullet_20mm
	{
		name="BC_Bullet_20mm";
	};
};
class cfgAmmo
{
	class Bullet_Base;
	class BC_Bullet_20mm: Bullet_Base
	{
		scope=2;
		model="\DZ\weapons\projectiles\tracer_red.p3d";
		spawnPileType="BC_Ammo_20mm";
		casing="FxCartridge_BC_Cartridge_20mm";
		round="FxRound_Bullet_BC_20mm";
		hit=12;
		indirectHit=0;
		indirectHitRange=0;
		airLock=1;
		typicalSpeed=3888;
		initSpeed=3888;
		tracerScale=2.2;
		tracerStartTime=0.075000003;
		tracerEndTime=3;
		airFriction=-0;
		caliber=17;
		deflecting=4;
		damageBarrel=500;
		damageBarrelDestroyed=500;
		weight = 0.01;
		impactBehaviour=1;
		hitAnimation=1;
		unconRefillModifier=2.75;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.5,1}
			};
			class Health
			{
				damage=36000;
			};
			class Blood
			{
				damage=0;
			};
			class Shock
			{
				damage=0;
			};
		};
		class NoiseHit
		{
			strength=50;
			type="shot";
		};
	};
};
