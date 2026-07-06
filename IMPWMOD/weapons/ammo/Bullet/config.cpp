class CfgPatches 
{
	class IMP_Bullet_Projectiles 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Weapons_Projectiles", "DZ_Scripts", "DZ_Weapons_Firearms"};
		ammo[] = {"IMP_Bullet_338LM", "IMP_Bullet_408", "IMP_Bullet_127x42", "IMP_Bullet_127x55", "IMP_Bullet_127x99", "IMP_Bullet_300AAC", "IMP_Bullet_792x57", "IMP_Bullet_762x25", "IMP_Bullet_9x18", "IMP_Bullet_127x108", "IMP_Bullet_20mm"};
	};
};

class cfgAmmoTypes {
	class AType_IMP_Bullet_338LM
	{
		name = "IMP_Bullet_338LM";
	};
	
	class AType_IMP_Bullet_408
	{
		name = "IMP_Bullet_408";
	};
	
	class AType_IMP_Bullet_127x42
	{
		name = "IMP_Bullet_127x42";
	};
	
	class AType_IMP_Bullet_127x55
	{
		name = "IMP_Bullet_127x55";
	};
	
	class AType_IMP_Bullet_127x99
	{
		name = "IMP_Bullet_127x99";
	};
	
	class AType_IMP_Bullet_300AAC
	{
		name = "IMP_Bullet_300AAC";
	};
	
	class AType_IMP_Bullet_792x57
	{
		name = "IMP_Bullet_792x57";
	};
	
	class AType_IMP_Bullet_762x25
	{
		name = "IMP_Bullet_762x25";
	};
	
	class AType_IMP_Bullet_9x18
	{
		name = "IMP_Bullet_9x18";
	};
	
	class AType_IMP_Bullet_127x108
	{
		name = "IMP_Bullet_127x108";
	};
	class AType_IMP_Bullet_20mm
	{
		name = "IMP_Bullet_20mm";
	};
};

class cfgAmmo {
	class Bullet_Base;
	class ShotgunCore;
	class DefaultAmmo;
	class BulletCore;
	class Shotgun_Base;
	
	class Bullet_45ACP: Bullet_Base
	{
		caliber = 2;
		initSpeed=300;
		typicalSpeed = 350;
		impactBehaviour = 0;
		hitAnimation = 0;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 0.3;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage = 25;
			};
			class Blood
			{
				damage = 25;
			};
			class Shock
			{
				damage = 25;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	
	class Bullet_9x19: Bullet_Base
	{
		caliber = 2;
		impactBehaviour = 0;
		initSpeed=400;
		typicalSpeed = 450;
		hitAnimation = 0;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 0.3;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage = 125;
			};
			class Blood
			{
				damage = 25;
			};
			class Shock
			{
				damage = 25;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	
	class Bullet_380: Bullet_Base
	{
		caliber = 2;
		initSpeed=275;
		typicalSpeed = 325;
		hitAnimation = 0;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 0.3;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage = 25;
			};
			class Blood
			{
				damage = 25;
			};
			class Shock
			{
				damage = 25;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	
	class Bullet_22: Bullet_Base
	{
		caliber = 2;
		class DamageApplied
		{
			type = "Projectile";
			initSpeed=280;
			dispersion = 0;
			bleedThreshold = 0.3;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage = 25;
			};
			class Blood
			{
				damage = 25;
			};
			class Shock
			{
				damage = 25;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	
	class Bullet_12GaugePellets: Shotgun_Base
	{
		caliber=0.5;
		projectilesCount=8;
		impactBehaviour = 0;
		initSpeed=340;
		typicalSpeed=420;
		airFriction = -0,0018;
		hitAnimation = 0;
		class DamageApplied
		{
			type="Projectile";
			dispersion = 0;
			bleedThreshold = 0.3;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage=25;
			};
			class Blood
			{
				damage=25;
			};
			class Shock
			{
				damage=25;
			};
		};
		class NoiseHit
		{
			strength=2;
			type="shot";
		};
	};
	
	class Bullet_12GaugeSlug: Bullet_Base
	{
		caliber=1;
		impactBehaviour = 0;
		initSpeed=380;
		typicalSpeed=420;
		airFriction = -0,0018;
		hitAnimation = 0;
		class DamageApplied
		{
			type="Projectile";
			dispersion = 0;
			bleedThreshold = 0.3;
			class Health
			{
				damage=25;
			};
			class Blood
			{
				damage=25;
			};
			class Shock
			{
				damage=25;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
	
	class Bullet_12GaugeRubberSlug: Bullet_12GaugeSlug
	{
		caliber=0.1;
		impactBehaviour = 0;
		initSpeed=60;
		typicalSpeed=80;
		airFriction = -0,0018;
		class DamageApplied
		{
			type="Projectile";
			dispersion = 0;
			bleedThreshold = 0;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage=0;
			};
			class Blood
			{
				damage=0;
			};
			class Shock
			{
				damage=150;
			};
		};
		class NoiseHit
		{
			strength=2;
			type="shot";
		};
	};
	
	class Bullet_545x39: Bullet_Base
	{
		caliber = 1.35;
		impactBehaviour = 0;
		initSpeed=890;
		airFriction = -0,0018;
		typicalSpeed = 950;
		hitAnimation = 0;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 0.3;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage = 150;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 0;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	class Bullet_762x39: Bullet_Base
	{
		caliber = 1.7;
		impactBehaviour = 0;
		initSpeed=730;
		airFriction = -0,0018;
		typicalSpeed = 800;
		hitAnimation = 0;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 0.3;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage = 185;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 0;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	
	class Bullet_556x45: Bullet_Base
	{
		caliber = 1.7;
		impactBehaviour = 0;
		initSpeed=950;
		airFriction = -0,0018;
		typicalSpeed = 1050;
		hitAnimation = 0;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 0.3;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage = 150;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 0;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	
	
	class Bullet_357: Bullet_Base
	{
		caliber = 1.7;
		impactBehaviour = 0;
		airFriction = -0,0018;
		hitAnimation = 0;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 0.3;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage = 90;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 0;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	
	class Bullet_9x39AP: Bullet_Base
	{
		caliber = 1.9;
		impactBehaviour = 0;
		initSpeed=320;
		typicalSpeed = 370;
		airFriction = -0,0018;
		hitAnimation = 0;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 0.3;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage = 170;
				armorDamage = 3;// По броне х3 урон (ТОЛЬКО ПО БРОНЕ)
			};
			class Blood
			{
				damage = 60;
			};
			class Shock
			{
				damage = 60;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	
	class Bullet_9x39: Bullet_Base
	{
		caliber = 1.7;
		initSpeed=300;
		typicalSpeed = 350;
		airFriction = -0,0018;
		impactBehaviour = 0;
		hitAnimation = 0;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 0.3;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage = 170;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 0;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	
	class Bullet_762x54: Bullet_Base
	{
		caliber = 2;
		initSpeed=890;
		typicalSpeed = 950;
		airFriction = -0,0018;
		hitAnimation = 0;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 0.3;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage = 185;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 0;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	
	class Bullet_308Win: Bullet_Base
	{
		caliber = 2;
		initSpeed=850;
		typicalSpeed = 900;
		airFriction = -0,0018;
		hitAnimation = 0;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 0.3;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage = 185;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 0;
			};
		};
		class NoiseHit
		{
			strength = 10;
			type = "shot";
		};
	};
	
	class IMP_Bullet_127x42: Bullet_Base
	{
		scope = 1;
		casing = "FxCartridge_762";
		round = "FxRound_762";
		spawnPileType = "IMP_Ammo_127x42";
		hit = 280;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 0;
		initSpeed=570;
		typicalSpeed=670;
		airFriction = -0,0018;
		caliber = 2.2;
		deflecting = 0;
		damageBarrel = 280;
		damageBarrelDestroyed = 280;
		weight = 0.001;
		impactBehaviour = 1;
		hitAnimation = 0;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 0.3;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage = 710;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 0;
			};
		};
		class NoiseHit
		{
			strength = 40;
			type = "shot";
		};
	};
	
	class IMP_Bullet_338LM: Bullet_Base
	{
		scope = 1;
		casing = "FxCartridge_762";
		round = "FxRound_762";
		spawnPileType = "IMP_Ammo_338LM";
		hit = 250;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 0;
		initSpeed = 1200;
		typicalSpeed = 1200;
		tracerScale = 1.2;
		tracerStartTime = -1;
		tracerEndTime = 1;
		airFriction = -0,0018;
		caliber = 1;
		deflecting = 0;
		damageBarrel = 250;
		damageBarrelDestroyed = 250;
		weight = 0.001;
		impactBehaviour = 1;
		hitAnimation = 0;
		unconRefillModifier=2.75;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 0.3;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage = 360;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 0;
			};
		};
		class NoiseHit
		{
			strength = 40;
			type = "shot";
		};
	};
	
	class IMP_Bullet_408: Bullet_Base
	{
		scope = 1;
		casing = "FxCartridge_762";
		round = "FxRound_762";
		spawnPileType = "IMP_Ammo_408";
		hit = 30;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 2100;
		typicalSpeed = 1950;
		tracerScale = 1.2;
		tracerStartTime = -1;
		tracerEndTime = 1;
		airFriction = -0,0018;
		caliber = 2;
		deflecting = 0;
		damageBarrel = 375;
		damageBarrelDestroyed = 375;
		weight = 0.001;
		impactBehaviour = 1;
		hitAnimation = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 0.3;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage = 710;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 0;
			};
		};
		class NoiseHit
		{
			strength = 40;
			type = "shot";
		};
	};
	
	class IMP_Bullet_127x55: Bullet_Base
	{
		scope = 1;
		casing = "FxCartridge_762";
		round = "FxRound_762";
		spawnPileType = "IMP_Ammo_127x55";
		hit = 20;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 1500;
		typicalSpeed = 1500;
		airFriction = -0,0060;
		caliber = 8;
		tracerScale=0;
		tracerStartTime=0;
		tracerEndTime=0;
		deflecting = 0;
		damageBarrel = 530;
		damageBarrelDestroyed = 530;
		weight = 0.001;
		impactBehaviour = 1;
		hitAnimation = 1;// параметр hitAnimation в конфигурационном файле патрона определяет анимацию, которая будет проигрываться при попадании пули в объект. Значение параметра hitAnimation = 0 означает, что анимация не будет проигрываться при попадании пули в объект
		unconRefillModifier=2.75;//параметр unconRefillModifier в конфигурационном файле патрона определяет, насколько быстро игрок может восстановить сознание после потери его в результате попадания пули. Значение параметра unconRefillModifier=2.75 означает, что игрок может восстановить сознание в 2.75 раза быстрее, чем обычно
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;//параметр dispersion в конфигурационном файле патрона определяет разброс пули при выстреле из оружия. Значение параметра dispersion = 0 означает, что пуля не будет разбрасываться при выстреле
			bleedThreshold = 0.3;//параметр bleedThreshold в конфигурационном файле патрона определяет минимальный урон, который должен быть нанесен игроку, чтобы он начал кровоточить. Значение параметра bleedThreshold = 1 означает, что игрок начнет кровоточить при получении любого урона
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage = 4000;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 0;
			};
		};
		class NoiseHit
		{
			strength = 40;
			type = "shot";
		};
	};
	
	class IMP_Bullet_127x99: Bullet_Base
	{
		scope = 1;
		casing = "FxCartridge_762";
		round = "FxRound_762";
		spawnPileType = "IMP_Ammo_127x99";
		hit = 20;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 1950;
		typicalSpeed = 1950;
		airFriction = 0;
		caliber = 4;
		tracerScale=0;
		tracerStartTime=0;
		tracerEndTime=0;
		deflecting = 0;
		damageBarrel = 530;
		damageBarrelDestroyed = 530;
		weight = 0.001;
		impactBehaviour = 1;
		hitAnimation = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 0.3;
			defaultDamageOverride[]=
			{
				{0.5,1}
			};
			class Health
			{
				damage = 3000;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 0;
			};
		};
		class NoiseHit
		{
			strength = 50;
			type = "shot";
		};
	};
	
	class IMP_Bullet_300AAC: Bullet_Base
	{
		scope = 1;
		spawnPileType = "IMP_Ammo_300AAC";
		caliber = 2;
		impactBehaviour = 1;
		initSpeed = 650;
		airFriction = -0,0018;
		typicalSpeed = 750;
		hitAnimation = 0;
		
		unconRefillModifier=4;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 0.3;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage = 60;
			};
			class Blood
			{
				damage = 60;
			};
			class Shock
			{
				damage = 60;
			};
		};
		class NoiseHit
		{
			strength = 15;
			type = "shot";
		};
	};
	
	class IMP_Bullet_792x57: Bullet_Base
	{
		scope = 1;
		casing = "FxCartridge_762";
		round = "FxRound_762";
		spawnPileType = "IMP_Ammo_792x57";
		hit = 14;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 0;
		initSpeed = 880;
		typicalSpeed = 980;
		airFriction = -0,0018;
		caliber = 2;
		deflecting = 10;
		damageBarrel = 60;
		damageBarrelDestroyed = 60;
		weight = 0.001;
		impactBehaviour = 0;
		hitAnimation = 0;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 0.3;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage = 180;
			};
			class Blood
			{
				damage = 180;
			};
			class Shock
			{
				damage = 180;
			};
		};
		class NoiseHit
		{
			strength = 40;
			type = "shot";
		};
	};
	
	class IMP_Bullet_762x25: Bullet_Base
	{
		scope=1;
		casing="FxCartridge_9mm";
		round="FxRound_9mm";
		spawnPileType="IMP_Ammo_762x25";
		hit=7;
		indirectHit=0;
		indirectHitRange=0;
		tracerScale=1;
		caliber=2;
		deflecting=30;
		initSpeed=350;
		typicalSpeed=380;
		airFriction = -0,0018;
		supersonicCrackNear[]={};
		supersonicCrackFar[]={};
		damageBarrel=166.66667;
		damageBarrelDestroyed=166.66667;
		weight=0.001;
		impactBehaviour=0;
		hitAnimation=0;
		unconRefillModifier=6;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage=24;
			};
			class Blood
			{
				damage=24;
			};
			class Shock
			{
				damage=24;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
	
	class IMP_Bullet_9x18: Bullet_Base
	{
		scope=1;
		casing="FxCartridge_9mm";
		round="FxRound_9mm";
		spawnPileType="IMP_Ammo_9x18";
		hit=7;
		indirectHit=0;
		indirectHitRange=0;
		tracerScale=1;
		caliber=2;
		deflecting=30;
		initSpeed=350;
		typicalSpeed=380;
		airFriction = -0,0018;
		supersonicCrackNear[]={};
		supersonicCrackFar[]={};
		damageBarrel=166.66667;
		damageBarrelDestroyed=166.66667;
		weight=0.001;
		impactBehaviour=0;
		hitAnimation=0;
		unconRefillModifier=6;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage=40;
			};
			class Blood
			{
				damage=40;
			};
			class Shock
			{
				damage=40;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
	};
	
	class IMP_Bullet_127x108: Bullet_Base
	{
		scope = 1;
		casing = "FxCartridge_762";
		round = "FxRound_762";
		spawnPileType = "IMP_Ammo_127x108";
		hit = 20;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 2100;
		typicalSpeed = 2100;
		airFriction = 0;
		caliber = 12;
		tracerScale=0;
		tracerStartTime=0;
		tracerEndTime=0;
		deflecting = 0;
		damageBarrel = 530;
		damageBarrelDestroyed = 530;
		weight = 0.01;
		impactBehaviour = 1;
		hitAnimation = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 0.3;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage = 9000;
			};
			class Blood
			{
				damage = 9000;
			};
			class Shock
			{
				damage = 9000;
			};
		};
		class NoiseHit
		{
			strength = 200;
			type = "shot";
		};
	};
	
	class IMP_Bullet_20mm: Bullet_Base
	{
		scope = 1;
		casing = "FxCartridge_762";
		round = "FxRound_762";
		spawnPileType = "IMP_Ammo_20mm";
		hit = 20;
		indirectHit = 0;
		indirectHitRange = 0;
		airLock = 1;
		initSpeed = 2200;
		typicalSpeed = 2200;
		airFriction = 0;
		caliber = 27;
		tracerScale=0;
		tracerStartTime=0;
		tracerEndTime=0;
		deflecting = 0;
		damageBarrel = 530;
		damageBarrelDestroyed = 530;
		weight = 0.01;
		impactBehaviour = 1;
		hitAnimation = 1;
		class DamageApplied
		{
			type = "Projectile";
			dispersion = 0;
			bleedThreshold = 0.3;
			defaultDamageOverride[]=
			{
				{1,1}
			};
			class Health
			{
				damage = 18000;
			};
			class Blood
			{
				damage = 18000;
			};
			class Shock
			{
				damage = 18000;
			};
		};
		class NoiseHit
		{
			strength = 200;
			type = "shot";
		};
	};
};