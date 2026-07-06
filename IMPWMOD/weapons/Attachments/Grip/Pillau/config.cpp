class CfgPatches {
	class IMP_Grip_Pillau 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class IMP_Grip_Pillau_Base : Inventory_Base {
		scope = 0;
		displayName = "Pillau";
		descriptionShort = "$STR_IMP_DscrGrip";
		inventorySlot = "grip1";
		attachments[] = {};
		model = "IMPWMOD\Weapons\Attachments\Grip\Pillau\models\Pillau.p3d";
		itemSize[] = {1, 2};
		NeedRis = 1;
		weight = 200;
		hiddenSelections[] = {"Pillau"};
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
	};
	
	class IMP_Grip_Pillau : IMP_Grip_Pillau_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\Grip\Pillau\data\Pillau_co.paa"};
	};
};