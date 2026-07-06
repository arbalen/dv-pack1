class CfgPatches {
	class IMP_PistolGrip_AR_AR15HKGripV2
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class IMP_PistolGrip_AR_AR15HKGripV2_Base : Inventory_Base {
		scope = 0;
		displayName = "AR15HKGripV2";
		descriptionShort = "$STR_IMP_PistolgriupAR";
		inventorySlot = "HandlesM4";
		attachments[] = {};
		model = "IMPWMOD\Weapons\Attachments\PistolGrip\AR\AR15HKGripV2\models\AR15HKGripV2.p3d";
		itemSize[] = {1, 2};
		weight = 10;
		hiddenSelections[] = {"AR15HKGripV2"};
		recoilModifier[]={0.95, 0.95, 1};
	};
	
	class IMP_PistolGrip_AR_AR15HKGripV2 : IMP_PistolGrip_AR_AR15HKGripV2_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\PistolGrip\AR\AR15HKGripV2\data\AR15HKGripV2_co.paa"};
	};
};