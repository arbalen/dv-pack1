class CfgPatches
{
	class IMP_Weapons_Ammunition
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
class CfgVehicles
{
	class Box_Base;
	class AmmoBox_556x45_20Rnd: Box_Base
	{
		scope=2;
		model="\IMPWMOD\Weapons\Ammo\AmmoBox\AmmoBoxIMP.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		itemSize[]={2,1};
		hiddenSelections[] = {"camoground"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Ammo\AmmoBox\556x45_box_co.paa"};
	};
	class AmmoBox_556x45Tracer_20Rnd: Box_Base
	{
		scope=2;
		model="\IMPWMOD\Weapons\Ammo\AmmoBox\AmmoBoxIMP.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		itemSize[]={2,1};
		hiddenSelections[] = {"camoground"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Ammo\AmmoBox\556x45t_box_co.paa"};
	};
	class AmmoBox_308Win_20Rnd: Box_Base
	{
		scope=2;
		model="\IMPWMOD\Weapons\Ammo\AmmoBox\AmmoBoxIMP.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		itemSize[]={2,1};
		hiddenSelections[] = {"camoground"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Ammo\AmmoBox\308win_box_co.paa"};
	};
	class AmmoBox_308WinTracer_20Rnd: Box_Base
	{
		scope=2;
		model="\IMPWMOD\Weapons\Ammo\AmmoBox\AmmoBoxIMP.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		itemSize[]={2,1};
		hiddenSelections[] = {"camoground"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Ammo\AmmoBox\308wint_box_co.paa"};
	};
	class AmmoBox_762x54_20Rnd: Box_Base
	{
		scope=2;
		model="\IMPWMOD\Weapons\Ammo\AmmoBox\AmmoBoxIMP.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		itemSize[]={2,1};
		hiddenSelections[] = {"camoground"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Ammo\AmmoBox\762x54_box_co.paa"};
	};
	class AmmoBox_762x54Tracer_20Rnd: Box_Base
	{
		scope=2;
		model="\IMPWMOD\Weapons\Ammo\AmmoBox\AmmoBoxIMP.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		itemSize[]={2,1};
		hiddenSelections[] = {"camoground"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Ammo\AmmoBox\762x54t_box_co.paa"};
	};
	class AmmoBox_762x39_20Rnd: Box_Base
	{
		scope=2;
		model="\IMPWMOD\Weapons\Ammo\AmmoBox\AmmoBoxIMP.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		itemSize[]={2,1};
		hiddenSelections[] = {"camoground"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Ammo\AmmoBox\762x39_box_co.paa"};
	};
	class AmmoBox_762x39Tracer_20Rnd: Box_Base
	{
		scope=2;
		model="\IMPWMOD\Weapons\Ammo\AmmoBox\AmmoBoxIMP.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		itemSize[]={2,1};
		hiddenSelections[] = {"camoground"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Ammo\AmmoBox\762x39t_box_co.paa"};
	};
	class AmmoBox_22_50Rnd: Box_Base
	{
		scope=2;
		model="\IMPWMOD\Weapons\Ammo\AmmoBox\AmmoBoxIMP.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		itemSize[]={2,1};
		hiddenSelections[] = {"camoground"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Ammo\AmmoBox\22_box_co.paa"};
	};
	class AmmoBox_357_20Rnd: Box_Base
	{
		scope=2;
		model="\IMPWMOD\Weapons\Ammo\AmmoBox\AmmoBoxIMP.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		itemSize[]={2,1};
		hiddenSelections[] = {"camoground"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Ammo\AmmoBox\357_box_co.paa"};
	};
	class AmmoBox_45ACP_25rnd: Box_Base
	{
		scope=2;
		model="\IMPWMOD\Weapons\Ammo\AmmoBox\AmmoBoxIMP.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		itemSize[]={2,1};
		hiddenSelections[] = {"camoground"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Ammo\AmmoBox\45acp_box_co.paa"};
	};
	class AmmoBox_9x19_25rnd: Box_Base
	{
		scope=2;
		model="\IMPWMOD\Weapons\Ammo\AmmoBox\AmmoBoxIMP.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		itemSize[]={2,1};
		hiddenSelections[] = {"camoground"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Ammo\AmmoBox\9x19_box_co.paa"};
	};
	class AmmoBox_380_35rnd: Box_Base
	{
		scope=2;
		model="\IMPWMOD\Weapons\Ammo\AmmoBox\AmmoBoxIMP.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		itemSize[]={2,1};
		hiddenSelections[] = {"camoground"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Ammo\AmmoBox\380_box_co.paa"};
	};
	class AmmoBox_00buck_10rnd: Box_Base
	{
		scope=2;
		model="\IMPWMOD\Weapons\Ammo\AmmoBox\AmmoBoxIMP.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		itemSize[]={2,1};
		hiddenSelections[] = {"camoground"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Ammo\AmmoBox\12ga_box_co.paa"};
	};
	class AmmoBox_12gaSlug_10Rnd: Box_Base
	{
		scope=2;
		model="\IMPWMOD\Weapons\Ammo\AmmoBox\AmmoBoxIMP.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		itemSize[]={2,1};
		hiddenSelections[] = {"camoground"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Ammo\AmmoBox\12gs_box_co.paa"};
	};
	class AmmoBox_12gaRubberSlug_10Rnd: Box_Base
	{
		scope=2;
		model="\IMPWMOD\Weapons\Ammo\AmmoBox\AmmoBoxIMP.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		itemSize[]={2,1};
		hiddenSelections[] = {"camoground"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Ammo\AmmoBox\12grs_box_co.paa"};
	};
	class AmmoBox_12gaBeanbag_10Rnd: Box_Base
	{
		scope=0;
		model="\IMPWMOD\Weapons\Ammo\AmmoBox\AmmoBoxIMP.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		itemSize[]={2,1};
		hiddenSelections[] = {"camoground"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Ammo\AmmoBox\12gs_box_co.paa"};
	};
	class AmmoBox_545x39_20Rnd: Box_Base
	{
		scope=2;
		model="\IMPWMOD\Weapons\Ammo\AmmoBox\AmmoBoxIMP.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		itemSize[]={2,1};
		hiddenSelections[] = {"camoground"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Ammo\AmmoBox\545x39_box_co.paa"};
	};
	class AmmoBox_545x39Tracer_20Rnd: Box_Base
	{
		scope=2;
		model="\IMPWMOD\Weapons\Ammo\AmmoBox\AmmoBoxIMP.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		itemSize[]={2,1};
		hiddenSelections[] = {"camoground"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Ammo\AmmoBox\545x39t_box_co.paa"};
	};
	class AmmoBox_9x39AP_20Rnd: Box_Base
	{
		scope=2;
		model="\IMPWMOD\Weapons\Ammo\AmmoBox\AmmoBoxIMP.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		itemSize[]={2,1};
		hiddenSelections[] = {"camoground"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Ammo\AmmoBox\9x39ap_box_co.paa"};
	};
	class AmmoBox_9x39_20Rnd: Box_Base
	{
		scope=2;
		model="\IMPWMOD\Weapons\Ammo\AmmoBox\AmmoBoxIMP.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		itemSize[]={2,1};
		hiddenSelections[] = {"camoground"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Ammo\AmmoBox\9x39_box_co.paa"};
	};
	
	class AmmoBox_556x45_30Rnd: AmmoBox_556x45_20Rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_556x45
			{
				value=30;
				variable="quantity";
			};
		};
	};
	
	class AmmoBox_556x45_100Rnd: AmmoBox_556x45_20Rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_556x45
			{
				value=100;
				variable="quantity";
			};
		};
	};
	class AmmoBox_556x45Tracer_30Rnd: AmmoBox_556x45Tracer_20Rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_556x45Tracer
			{
				value=30;
				variable="quantity";
			};
		};
	};
	class AmmoBox_556x45Tracer_100Rnd: AmmoBox_556x45Tracer_20Rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_556x45Tracer
			{
				value=100;
				variable="quantity";
			};
		};
	};
	class AmmoBox_308Win_100Rnd: AmmoBox_308Win_20Rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_308Win
			{
				value=100;
				variable="quantity";
			};
		};
	};
	class AmmoBox_308WinTracer_100Rnd: AmmoBox_308WinTracer_20Rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_308WinTracer
			{
				value=100;
				variable="quantity";
			};
		};
	};
	class AmmoBox_762x54_100Rnd: AmmoBox_762x54_20Rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_762x54
			{
				value=100;
				variable="quantity";
			};
		};
	};
	class AmmoBox_762x54Tracer_100Rnd: AmmoBox_762x54Tracer_20Rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_762x54Tracer
			{
				value=100;
				variable="quantity";
			};
		};
	};
	class AmmoBox_762x39_30Rnd: AmmoBox_762x39_20Rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_762x39
			{
				value=30;
				variable="quantity";
			};
		};
	};
	class AmmoBox_762x39_100Rnd: AmmoBox_762x39_20Rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_762x39
			{
				value=100;
				variable="quantity";
			};
		};
	};
	class AmmoBox_762x39Tracer_100Rnd: AmmoBox_762x39Tracer_20Rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_762x39Tracer
			{
				value=100;
				variable="quantity";
			};
		};
	};
	class AmmoBox_762x39Tracer_30Rnd: AmmoBox_762x39Tracer_20Rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_762x39Tracer
			{
				value=30;
				variable="quantity";
			};
		};
	};
	class AmmoBox_22_100Rnd: AmmoBox_22_50Rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_22
			{
				value=100;
				variable="quantity";
			};
		};
	};
	class AmmoBox_357_100Rnd: AmmoBox_357_20Rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_357
			{
				value=100;
				variable="quantity";
			};
		};
	};
	class AmmoBox_357_30Rnd: AmmoBox_357_20Rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_357
			{
				value=30;
				variable="quantity";
			};
		};
	};
	class AmmoBox_45ACP_100rnd: AmmoBox_45ACP_25rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_45ACP
			{
				value=100;
				variable="quantity";
			};
		};
	};
	class AmmoBox_45ACP_50rnd: AmmoBox_45ACP_25rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_45ACP
			{
				value=50;
				variable="quantity";
			};
		};
	};
	class AmmoBox_9x19_100rnd: AmmoBox_9x19_25rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_9x19
			{
				value=100;
				variable="quantity";
			};
		};
	};
	class AmmoBox_9x19_50rnd: AmmoBox_9x19_25rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_9x19
			{
				value=50;
				variable="quantity";
			};
		};
	};
	class AmmoBox_380_100rnd: AmmoBox_380_35rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_380
			{
				value=100;
				variable="quantity";
			};
		};
	};
	class AmmoBox_380_50rnd: AmmoBox_380_35rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_380
			{
				value=50;
				variable="quantity";
			};
		};
	};
	class AmmoBox_00buck_100rnd: AmmoBox_00buck_10rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_12gaPellets
			{
				value=100;
				variable="quantity";
			};
		};
	};
	class AmmoBox_12gaSlug_100Rnd: AmmoBox_12gaSlug_10Rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_12gaSlug
			{
				value=100;
				variable="quantity";
			};
		};
	};
	class AmmoBox_12gaRubberSlug_100Rnd: AmmoBox_12gaRubberSlug_10Rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_12gaRubberSlug
			{
				value=100;
				variable="quantity";
			};
		};
	};
	class AmmoBox_12gaBeanbag_100Rnd: AmmoBox_12gaBeanbag_10Rnd
	{
		scope=0;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_12gaBeanbag
			{
				value=100;
				variable="quantity";
			};
		};
	};
	class AmmoBox_00buck_50rnd: AmmoBox_00buck_10rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_12gaPellets
			{
				value=50;
				variable="quantity";
			};
		};
	};
	class AmmoBox_12gaSlug_50Rnd: AmmoBox_12gaSlug_10Rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_12gaSlug
			{
				value=50;
				variable="quantity";
			};
		};
	};
	class AmmoBox_12gaRubberSlug_50Rnd: AmmoBox_12gaRubberSlug_10Rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_12gaRubberSlug
			{
				value=50;
				variable="quantity";
			};
		};
	};
	class AmmoBox_12gaBeanbag_50Rnd: AmmoBox_12gaBeanbag_10Rnd
	{
		scope=0;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_12gaBeanbag
			{
				value=50;
				variable="quantity";
			};
		};
	};
	class AmmoBox_545x39_100Rnd: AmmoBox_545x39_20Rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_545x39
			{
				value=100;
				variable="quantity";
			};
		};
	};
	class AmmoBox_545x39Tracer_100Rnd: AmmoBox_545x39Tracer_20Rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_545x39Tracer
			{
				value=100;
				variable="quantity";
			};
		};
	};
	class AmmoBox_545x39_40Rnd: AmmoBox_545x39_20Rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_545x39
			{
				value=40;
				variable="quantity";
			};
		};
	};
	class AmmoBox_545x39Tracer_40Rnd: AmmoBox_545x39Tracer_20Rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_545x39Tracer
			{
				value=40;
				variable="quantity";
			};
		};
	};
	class AmmoBox_9x39AP_100Rnd: AmmoBox_9x39AP_20Rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_9x39AP
			{
				value=100;
				variable="quantity";
			};
		};
	};
	class AmmoBox_9x39_100Rnd: AmmoBox_9x39_20Rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_9x39
			{
				value=100;
				variable="quantity";
			};
		};
	};
	class AmmoBox_9x39AP_25Rnd: AmmoBox_9x39AP_20Rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_9x39AP
			{
				value=25;
				variable="quantity";
			};
		};
	};
	class AmmoBox_9x39_25Rnd: AmmoBox_9x39_20Rnd
	{
		scope=2;
		itemSize[]={2,1};
		class Resources
		{
			class Ammo_9x39
			{
				value=25;
				variable="quantity";
			};
		};
	};
};