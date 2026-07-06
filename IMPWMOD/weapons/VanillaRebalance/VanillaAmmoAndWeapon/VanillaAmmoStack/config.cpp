class CfgPatches
{
	class DZ_Weapons_Ammunition_IMP
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Magazines", "DZ_Weapons_Ammunition"
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class Ammunition_Base;
	class Ammo_45ACP: Ammunition_Base
	{
		scope=2;
		//count=25;
		count=50;
	};
	class Ammo_308Win: Ammunition_Base
	{
		scope=2;
		weight=10;
		//count=20;
		count=20;
	};
	class Ammo_308WinTracer: Ammunition_Base
	{
		scope=2;
		weight=9;
		//count=20;
		count=20;
	};
	class Ammo_9x19: Ammunition_Base
	{
		scope=2;
		weight=8;
		//count=25;
		count=50;
	};
	class Ammo_380: Ammunition_Base
	{
		scope=2;
		weight=6;
		//count=35;
		count=50;
	};
	class Ammo_556x45: Ammunition_Base
	{
		scope=2;
		weight=4;
		//count=20;
		count=30;
	};
	class Ammo_556x45Tracer: Ammunition_Base
	{
		scope=2;
		weight=4;
		//count=20;
		count=30;
	};
	class Ammo_762x54: Ammunition_Base
	{
		scope=2;
		weight=9;
		//count=20;
		count=20;
	};
	class Ammo_762x54Tracer: Ammunition_Base
	{
		scope=2;
		weight=9;
		//count=20;
		count=20;
	};
	class Ammo_762x39: Ammunition_Base
	{
		scope=2;
		weight=8;
		//count=20;
		count=30;
	};
	class Ammo_762x39Tracer: Ammunition_Base
	{
		scope=2;
		weight=8;
		//count=20;
		count=30;
	};
	class Ammo_9x39AP: Ammunition_Base
	{
		scope=2;
		weight=16;
		//count=20;
		count=25;
	};
	class Ammo_9x39: Ammunition_Base
	{
		scope=2;
		weight=17;
		//count=20;
		count=25;
	};
	class Ammo_22: Ammunition_Base
	{
		scope=2;
		weight=3;
		//count=50;
		count=50;
	};
	class Ammo_12gaPellets: Ammunition_Base
	{
		scope=2;
		weight=35;
		//count=10;
		count=50;
	};
	class Ammo_12gaSlug: Ammunition_Base
	{
		scope=2;
		weight=35;
		//count=10;
		count=50;
	};
	class Ammo_12gaRubberSlug: Ammunition_Base
	{
		scope=2;
		weight=8;
		//count=10;
		count=50;
	};
	class Ammo_12gaBeanbag: Ammunition_Base
	{
		scope=0;
		weight=8;
		//count=10;
		count=50;
	};
	class Ammo_357: Ammunition_Base
	{
		scope=2;
		weight=8;
		//count=20;
		count=30;
	};
	class Ammo_545x39: Ammunition_Base
	{
		scope=2;
		weight=4;
		//count=20;
		count=40;
	};
	class Ammo_545x39Tracer: Ammunition_Base
	{
		scope=2;
		weight=4;
		//count=20;
		count=40;
	};
	class Ammo_HuntingBolt: Ammunition_Base
	{
		scope=2;
		weight=35;
		itemSize[]={4,1};
		//count=5;
		count=5;
	};
	class Ammo_ImprovisedBolt_1: Ammunition_Base
	{
		scope=2;
		weight=35;
		itemSize[]={4,1};
		//count=5;
		count=5;
	};
	class Ammo_ImprovisedBolt_2: Ammunition_Base
	{
		scope=2;
		weight=45;
		itemSize[]={4,1};
		//count=5;
		count=5;
	};
	class Ammo_CupidsBolt: Ammunition_Base
	{
		scope=2;
		//count=5;
		count=5;
	};
	class Ammo_Flare: Ammunition_Base
	{
		scope=2;
		weight=80;
		//count=5;
		count=5;
	};
	class Ammo_RPG7_HE: Ammunition_Base
	{
		scope=0;
	};
	class Ammo_RPG7_AP: Ammunition_Base
	{
		scope=0;
	};
	class Ammo_LAW_HE: Ammunition_Base
	{
		scope=0;
	};
	class Ammo_GrenadeM4: Ammunition_Base
	{
		scope=0;
	};
	class Ammo_40mm_Base: Ammunition_Base
	{
		scope=0;
		itemSize[]={2,1};
		weight=230;
		//count=1;
		count=3;
	};
};