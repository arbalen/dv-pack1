class CfgPatches {
	class IMP_PistolGrip_AR_AR15F1Skeletonized
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class IMP_PistolGrip_AR_AR15F1Skeletonized_Base : Inventory_Base {
		scope = 0;
		displayName = "AR15F1Skeletonized";
		descriptionShort = "$STR_IMP_PistolgriupAR";
		inventorySlot = "HandlesM4";
		attachments[] = {};
		model = "IMPWMOD\Weapons\Attachments\PistolGrip\AR\AR15F1Skeletonized\models\AR15F1Skeletonized.p3d";
		itemSize[] = {1, 2};
		weight = 10;
		hiddenSelections[] = {"AR15F1Skeletonized"};
		recoilModifier[]={0.85, 0.85, 1};
		swayModifier[]={0.85, 0.85, 1};
	};
	
	class IMP_PistolGrip_AR_AR15F1Skeletonized : IMP_PistolGrip_AR_AR15F1Skeletonized_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\PistolGrip\AR\AR15F1Skeletonized\data\AR15F1Skeletonized_co.paa"};
	};
};