class CfgPatches {
	class IMP_PistolGrip_AR_AR15TacticalDynamicsHexgrip
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class IMP_PistolGrip_AR_AR15TacticalDynamicsHexgrip_Base : Inventory_Base {
		scope = 0;
		displayName = "AR15TacticalDynamicsHexgrip";
		descriptionShort = "$STR_IMP_PistolgriupAR";
		inventorySlot = "HandlesM4";
		attachments[] = {};
		model = "IMPWMOD\Weapons\Attachments\PistolGrip\AR\AR15TacticalDynamicsHexgrip\models\AR15TacticalDynamicsHexgrip.p3d";
		itemSize[] = {1, 2};
		weight = 10;
		hiddenSelections[] = {"AR15TacticalDynamicsHexgrip"};
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
	};
	
	class IMP_PistolGrip_AR_AR15TacticalDynamicsHexgrip : IMP_PistolGrip_AR_AR15TacticalDynamicsHexgrip_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\PistolGrip\AR\AR15TacticalDynamicsHexgrip\data\AR15TacticalDynamicsHexgrip_co.paa"};
	};
};