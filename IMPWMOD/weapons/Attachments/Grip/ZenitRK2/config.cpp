class CfgPatches {
	class IMP_Grip_ZenitRK2 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class IMP_Grip_ZenitRK2_Base : Inventory_Base {
		scope = 0;
		displayName = "Зенит РК2";
		descriptionShort = "$STR_IMP_DscrGrip";
		inventorySlot = "grip1";
		attachments[] = {};
		model = "IMPWMOD\Weapons\Attachments\Grip\ZenitRK2\models\ZenitRK2.p3d";
		itemSize[] = {1, 2};
		weight = 200;
		NeedRis = 1;
		hiddenSelections[] = {"ZenitRK2"};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
	};
	
	class IMP_Grip_ZenitRK2 : IMP_Grip_ZenitRK2_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\Grip\ZenitRK2\data\ZenitRK2_co.paa"};
	};
};