class CfgPatches {
	class IMP_Grip_ZenitB25u 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class IMP_Grip_ZenitB25u_Base : Inventory_Base {
		scope = 0;
		displayName = "Зенит Б25у";
		descriptionShort = "$STR_IMP_DscrGrip";
		inventorySlot = "grip1";
		attachments[] = {};
		model = "IMPWMOD\Weapons\Attachments\Grip\ZenitB25u\models\ZenitB25u.p3d";
		itemSize[] = {1, 2};
		weight = 200;
		NeedRis = 1;
		hiddenSelections[] = {"ZenitB25u"};
		recoilModifier[]={0.85, 0.85, 1};
		swayModifier[]={0.85, 0.85, 1};
	};
	
	class IMP_Grip_ZenitB25u : IMP_Grip_ZenitB25u_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\Grip\ZenitB25u\data\ZenitB25u_co.paa"};
	};
};