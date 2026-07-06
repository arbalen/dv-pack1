class CfgPatches {
	class IMP_PistolGrip_AR_AR15HKErgoPSG1
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class IMP_PistolGrip_AR_AR15HKErgoPSG1_Base : Inventory_Base {
		scope = 0;
		displayName = "AR15HKErgoPSG1";
		descriptionShort = "$STR_IMP_PistolgriupAR";
		inventorySlot = "HandlesM4";
		attachments[] = {};
		model = "IMPWMOD\Weapons\Attachments\PistolGrip\AR\AR15HKErgoPSG1\models\AR15HKErgoPSG1.p3d";
		itemSize[] = {1, 2};
		weight = 10;
		hiddenSelections[] = {"AR15HKErgoPSG1"};
		recoilModifier[]={0.85, 0.85, 1};
		swayModifier[]={0.85, 0.85, 1};
	};
	
	class IMP_PistolGrip_AR_AR15HKErgoPSG1 : IMP_PistolGrip_AR_AR15HKErgoPSG1_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\PistolGrip\AR\AR15HKErgoPSG1\data\AR15HKErgoPSG1_co.paa"};
	};
};