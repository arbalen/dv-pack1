class CfgPatches {
	class IMP_Grip_ZenitRK4 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class IMP_Grip_ZenitRK4_Base : Inventory_Base {
		scope = 0;
		displayName = "Зенит РК4";
		descriptionShort = "$STR_IMP_DscrGrip";
		inventorySlot = "grip1";
		attachments[] = {};
		model = "IMPWMOD\Weapons\Attachments\Grip\ZenitRK4\models\ZenitRK4.p3d";
		itemSize[] = {1, 2};
		weight = 200;
		NeedRis = 1;
		hiddenSelections[] = {"ZenitRK4"};
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
	};
	
	class IMP_Grip_ZenitRK4 : IMP_Grip_ZenitRK4_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\Grip\ZenitRK4\data\ZenitRK4_co.paa"};
	};
};