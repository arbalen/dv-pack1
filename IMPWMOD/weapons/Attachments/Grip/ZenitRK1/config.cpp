class CfgPatches {
	class IMP_Grip_ZenitRK1 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class IMP_Grip_ZenitRK1_Base : Inventory_Base {
		scope = 0;
		displayName = "Зенит РК1";
		descriptionShort = "$STR_IMP_DscrGrip";
		inventorySlot = "grip1";
		attachments[] = {};
		model = "IMPWMOD\Weapons\Attachments\Grip\ZenitRK1\models\ZenitRK1.p3d";
		itemSize[] = {1, 2};
		NeedRis = 1;
		weight = 200;
		hiddenSelections[] = {"ZenitRK1"};
		recoilModifier[]={0.85, 0.85, 1};
		swayModifier[]={0.85, 0.85, 1};
	};
	
	class IMP_Grip_ZenitRK1 : IMP_Grip_ZenitRK1_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\Grip\ZenitRK1\data\ZenitRK1_co.paa"};
	};
};