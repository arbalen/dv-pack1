class CfgPatches
{
	class BC_Ammo_46x30mm
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Weapons_Magazines","DZ_Weapons_Ammunition","DZ_Weapons_Projectiles"};	
		magazines[]=
		{
			"BC_Ammo_46x30mm"
		};
		ammo[]=
		{
			"BC_Bullet_46x30mm"
		};
	};
};
class CfgVehicles
{
	class FxCartridge;
	class FxCartridge_46x30mm: FxCartridge
	{
		model="BUCA_WEAPONS\Ammo\46x30mm\BC_46x30mm.p3d";
	};
	class FxRound;
	class FxRound_46x30mm: FxRound
	{
		model="BUCA_WEAPONS\Ammo\46x30mm\BC_46x30mm.p3d";
	};
};
class CfgMagazines
{
	class Ammunition_Base;
	class BC_Ammo_46x30mm: Ammunition_Base
	{
		scope=2;
		displayName="4.6x30mm Rounds";
		descriptionShort="The 4.6x30mm (designated as the 4,6 x 30 by the C.I.P.) cartridge is a small-caliber, high-velocity, smokeless powder, rebated, bottleneck, centerfire cartridge designed for personal defense weapons (PDW) developed by German armament manufacturer Heckler & Koch (HK) in 1999 - Ported by Cumbuca";
		model="BUCA_WEAPONS\Ammo\46x30mm\BC_46x30mm.p3d";
		itemSize[]={1,1};
		rotationFlags=34;
		weight=0.001;
		count=50;
		ammo="BC_Bullet_46x30mm";
	};
};
class cfgAmmoTypes
{
	class BC_Bullet_46x30mm
	{
		name="BC_Bullet_46x30mm";
	};
};
class cfgAmmo
{
	class Bullet_Base;
	class BC_Bullet_46x30mm: Bullet_Base
	{
		scope=2;
		model="BUCA_WEAPONS\Ammo\Tracers\Pink\BC_Tracer_Pink.p3d";
		spawnPileType="BC_Ammo_46x30mm";
		casing="FxCartridge_9mm";
		round="FxRound_45acp";
		hit=8;
		indirectHit=0;
		indirectHitRange=0;
		initSpeed=550;
		typicalSpeed=800;
		airFriction=-0.00125;
		caliber=1.2;
		deflecting=10;
		tracerScale=1;
		tracerStartTime=-1;
		tracerEndTime=1;
		nvgOnly=0;
		damageBarrel=250;
		damageBarrelDestroyed=250;
		weight=0.0040000002;
		impactBehaviour=0;
		hitAnimation=1;
		unconRefillModifier=4;
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
				damage=130;
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
