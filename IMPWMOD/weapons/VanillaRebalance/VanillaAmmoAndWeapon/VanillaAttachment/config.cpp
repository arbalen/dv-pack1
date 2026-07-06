class CfgPatches
{
	class DZ_Weapons_Supports_IMPW
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Supports"
		};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class M4_OEBttstck: Inventory_Base
	{
		scope=2;
		recoilModifier[]={0.8, 0.8, 1};
		swayModifier[]={1,1,1};
	};
	class M4_OEBttstck_Black: M4_OEBttstck
	{
		scope=2;
		color="Black";
		lootCategory="Crafted";
	};
	class M4_OEBttstck_Green: M4_OEBttstck
	{
		scope=2;
		color="Green";
		lootCategory="Crafted";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"
		};
	};
	class M4_MPBttstck: Inventory_Base
	{
		scope=2;
		recoilModifier[]={0.85, 0.85, 1};
		swayModifier[]={1,1,1};
	};
	class M4_MPBttstck_Black: M4_MPBttstck
	{
		scope=2;
		color="Black";
		lootCategory="Crafted";
	};
	class M4_MPBttstck_Green: M4_MPBttstck
	{
		scope=2;
		color="Green";
		lootCategory="Crafted";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"
		};
	};
	class M4_CQBBttstck: Inventory_Base
	{
		scope=2;
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={1,1,1};
	};
	class M4_CQBBttstck_Black: M4_CQBBttstck
	{
		scope=2;
		color="Black";
		lootCategory="Crafted";
	};
	class M4_CQBBttstck_Green: M4_CQBBttstck
	{
		scope=2;
		color="Green";
		lootCategory="Crafted";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"
		};
	};
	class AK_WoodBttstck: Inventory_Base
	{
		scope=2;
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={1,1,1};
	};
	class AK_WoodBttstck_Black: AK_WoodBttstck
	{
		scope=2;
		color="Black";
		lootCategory="Crafted";
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\data\akm_wood_black_co.paa"
		};
	};
	class AK_WoodBttstck_Camo: AK_WoodBttstck
	{
		scope=2;
		color="Green";
		lootCategory="Crafted";
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\data\akm_wood_camo_co.paa"
		};
	};
	class AK74_WoodBttstck: Inventory_Base
	{
		scope=2;
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={1,1,1};
	};
	class AK74_WoodBttstck_Black: AK74_WoodBttstck
	{
		scope=2;
		color="Black";
		lootCategory="Crafted";
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\data\akm_wood_black_co.paa"
		};
	};
	class AK74_WoodBttstck_Camo: AK74_WoodBttstck
	{
		scope=2;
		color="Camo";
		lootCategory="Crafted";
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\data\akm_wood_camo_co.paa"
		};
	};
	class AK_FoldingBttstck: Inventory_Base
	{
		scope=2;
		recoilModifier[]={0.85, 0.85, 1};
		swayModifier[]={1,1,1};
	};
	class AK_FoldingBttstck_Black: AK_FoldingBttstck
	{
		scope=2;
		color="Black";
		lootCategory="Crafted";
	};
	class AK_FoldingBttstck_Green: AK_FoldingBttstck
	{
		scope=2;
		color="Green";
		lootCategory="Crafted";
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\data\akm_accessories_green_co.paa"
		};
	};
	class AK_PlasticBttstck: Inventory_Base
	{
		scope=2;
		recoilModifier[]={0.8, 0.8, 1};
		swayModifier[]={1,1,1};
	};
	class AK_PlasticBttstck_Black: AK_PlasticBttstck
	{
		scope=2;
		color="Black";
		lootCategory="Crafted";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"
		};
	};
	class AK_PlasticBttstck_Green: AK_PlasticBttstck
	{
		scope=2;
		color="Green";
		lootCategory="Crafted";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"
		};
	};
	class AKS74U_Bttstck: Inventory_Base
	{
		scope=2;
		recoilModifier[]={0.85, 0.85, 1};
		swayModifier[]={1,1,1};
	};
	class AKS74U_Bttstck_Black: AKS74U_Bttstck
	{
		scope=2;
		color="Black";
		lootCategory="Crafted";
	};
	class AKS74U_Bttstck_Green: AKS74U_Bttstck
	{
		scope=2;
		color="Green";
		lootCategory="Crafted";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.35,0.37,0.28,1.0,CO)"
		};
	};
	class MP5k_StockBttstck: Inventory_Base
	{
		scope=2;
		recoilModifier[]={0.85, 0.85, 1};
		swayModifier[]={1,1,1};
	};
	class Red9Bttstck: Inventory_Base
	{
		scope=0;
	};
	class Fal_OeBttstck: Inventory_Base
	{
		scope=2;
		recoilModifier[]={0.89, 0.89, 1};
		swayModifier[]={1,1,1};
	};
	class Fal_FoldingBttstck: Inventory_Base
	{
		scope=2;
		recoilModifier[]={0.85, 0.85, 1};
		swayModifier[]={1,1,1};
	};
	class Saiga_Bttstck: Inventory_Base
	{
		scope=2;
		recoilModifier[]={0.8, 0.8, 1};
		swayModifier[]={1,1,1};
	};
	class PP19_Bttstck: Inventory_Base
	{
		scope=2;
		recoilModifier[]={0.85, 0.85, 1};
		swayModifier[]={1,1,1};
	};
	class M4_PlasticHndgrd: Inventory_Base
	{
		scope=2;
		recoilModifier[]={1, 1, 1};
		swayModifier[]={0.9,0.9,1};
	};
	class M4_PlasticHndgrd_Black: M4_PlasticHndgrd
	{
		scope=2;
		color="Black";
		lootCategory="Crafted";
	};
	class M4_PlasticHndgrd_Green: M4_PlasticHndgrd
	{
		scope=2;
		color="Green";
		lootCategory="Crafted";
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\data\handguard_green_co.paa"
		};
	};
	class M4_RISHndgrd: Inventory_Base
	{
		scope=2;
		recoilModifier[]={1, 1, 1};
		swayModifier[]={0.8,0.8,1};
	};
	class M4_RISHndgrd_Black: M4_RISHndgrd
	{
		scope=2;
		color="Black";
		lootCategory="Crafted";
	};
	class M4_RISHndgrd_Green: M4_RISHndgrd
	{
		scope=2;
		color="Green";
		lootCategory="Crafted";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"
		};
	};
	class M4_MPHndgrd: Inventory_Base
	{
		scope=2;
		recoilModifier[]={1, 1, 1};
		swayModifier[]={0.85,0.85,1};
	};
	class M4_MPHndgrd_Black: M4_MPHndgrd
	{
		scope=2;
		color="Black";
		lootCategory="Crafted";
	};
	class M4_MPHndgrd_Green: M4_MPHndgrd
	{
		scope=2;
		color="Green";
		lootCategory="Crafted";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"
		};
	};
	class AK_WoodHndgrd: Inventory_Base
	{
		scope=2;
		recoilModifier[]={1, 1, 1};
		swayModifier[]={0.9,0.9,1};
	};
	class AK_WoodHndgrd_Black: AK_WoodHndgrd
	{
		scope=2;
		color="Black";
		lootCategory="Crafted";
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\data\akm_wood_black_co.paa"
		};
	};
	class AK_WoodHndgrd_Camo: AK_WoodHndgrd
	{
		scope=2;
		color="Camo";
		lootCategory="Crafted";
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\data\akm_wood_camo_co.paa"
		};
	};
	class AK74_Hndgrd: Inventory_Base
	{
		scope=2;
		recoilModifier[]={1, 1, 1};
		swayModifier[]={0.9,0.9,1};
	};
	class AK74_Hndgrd_Black: AK74_Hndgrd
	{
		scope=2;
		color="Black";
		lootCategory="Crafted";
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\data\akm_wood_black_co.paa"
		};
	};
	class AK74_Hndgrd_Camo: AK74_Hndgrd
	{
		scope=2;
		color="Camo";
		lootCategory="Crafted";
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\data\akm_wood_camo_co.paa"
		};
	};
	class AK_RailHndgrd: Inventory_Base
	{
		scope=2;
		recoilModifier[]={1, 1, 1};
		swayModifier[]={0.8,0.8,1};
	};
	class AK_RailHndgrd_Black: AK_RailHndgrd
	{
		scope=2;
		color="Black";
		lootCategory="Crafted";
	};
	class AK_RailHndgrd_Green: AK_RailHndgrd
	{
		scope=2;
		color="Green";
		lootCategory="Crafted";
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\data\akm_accessories_green_co.paa"
		};
	};
	class AK_PlasticHndgrd: Inventory_Base
	{
		scope=2;
		recoilModifier[]={1, 1, 1};
		swayModifier[]={0.85,0.85,1};
	};
	class MP5_PlasticHndgrd: Inventory_Base
	{
		scope=2;
		recoilModifier[]={1, 1, 1};
		swayModifier[]={0.85,0.85,1};
	};
	class MP5_RailHndgrd: Inventory_Base
	{
		scope=2;
		recoilModifier[]={1, 1, 1};
		swayModifier[]={0.8,0.8,1};
	};
	class M249_Hndgrd: Inventory_Base
	{
		scope=0;
	};
	class M249_RisHndgrd: Inventory_Base
	{
		scope=0;
	};
	class AtlasBipod: Inventory_Base
	{
		scope=2;
		inventorySlot[]=
		{
			"weaponBipod"
		};
		weight=376;
		itemSize[]={1,3};
		dispersionModifier=-0.00025000001;
		dexterityModifier=-0.2;
		recoilModifier[]={0.80000001,0.80000001,0.80000001};
		swayModifier[]={1,1,1};
	};
	class M249_Bipod: Inventory_Base
	{
		scope=0;
	};
	class Groza_LowerReceiver: Inventory_Base
	{
		scope=0;
	};
	class GrozaGL_LowerReceiver: Inventory_Base
	{
		scope=0;
	};
};
