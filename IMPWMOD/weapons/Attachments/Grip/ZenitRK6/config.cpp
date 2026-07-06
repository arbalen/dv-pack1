class CfgPatches {
	class IMP_Grip_ZenitRK6 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class IMP_Grip_ZenitRK6_Base : Inventory_Base {
		scope = 0;
		displayName = "Зенит РК6";
		descriptionShort = "$STR_IMP_DscrGrip";
		inventorySlot = "grip1";
		attachments[] = {};
		NeedRis = 1;
		model = "IMPWMOD\Weapons\Attachments\Grip\ZenitRK6\models\ZenitRK6.p3d";
		itemSize[] = {1, 2};
		weight = 200;
		hiddenSelections[] = {"ZenitRK6"};
		recoilModifier[]={0.85, 0.85, 1};
		swayModifier[]={0.85, 0.85, 1};
	};
	
	class IMP_Grip_ZenitRK6 : IMP_Grip_ZenitRK6_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\Grip\ZenitRK6\data\ZenitRK6_co.paa"};
	};
};