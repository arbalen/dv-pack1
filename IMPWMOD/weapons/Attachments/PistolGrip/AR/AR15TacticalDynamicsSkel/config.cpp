class CfgPatches {
	class IMP_PistolGrip_AR_AR15TacticalDynamicsSkel
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class IMP_PistolGrip_AR_AR15TacticalDynamicsSkel_Base : Inventory_Base {
		scope = 0;
		displayName = "AR15TacticalDynamicsSkel";
		descriptionShort = "$STR_IMP_PistolgriupAR";
		inventorySlot = "HandlesM4";
		attachments[] = {};
		model = "IMPWMOD\Weapons\Attachments\PistolGrip\AR\AR15TacticalDynamicsSkel\models\AR15TacticalDynamicsSkel.p3d";
		itemSize[] = {1, 2};
		weight = 10;
		hiddenSelections[] = {"AR15TacticalDynamicsSkel"};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
	};
	
	class IMP_PistolGrip_AR_AR15TacticalDynamicsSkel : IMP_PistolGrip_AR_AR15TacticalDynamicsSkel_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\PistolGrip\AR\AR15TacticalDynamicsSkel\data\AR15TacticalDynamicsSkel_co.paa"};
	};
};