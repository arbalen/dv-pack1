class CfgPatches {
	class IMP_PistolGrip_AR_AR15HeraArmsHG15
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class IMP_PistolGrip_AR_AR15HeraArmsHG15_Base : Inventory_Base {
		scope = 0;
		displayName = "AR15HeraArmsHG15";
		descriptionShort = "$STR_IMP_PistolgriupAR";
		inventorySlot = "HandlesM4";
		attachments[] = {};
		model = "IMPWMOD\Weapons\Attachments\PistolGrip\AR\AR15HeraArmsHG15\models\AR15HeraArmsHG15.p3d";
		itemSize[] = {1, 2};
		weight = 10;
		hiddenSelections[] = {"AR15HeraArmsHG15"};
		recoilModifier[]={0.85, 0.85, 1};
		swayModifier[]={0.85, 0.85, 1};
	};
	
	class IMP_PistolGrip_AR_AR15HeraArmsHG15 : IMP_PistolGrip_AR_AR15HeraArmsHG15_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\PistolGrip\AR\AR15HeraArmsHG15\data\AR15HeraArmsHG15_co.paa"};
	};
};