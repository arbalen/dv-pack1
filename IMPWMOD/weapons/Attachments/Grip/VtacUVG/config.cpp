class CfgPatches {
	class IMP_Grip_VtacUVG 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class IMP_Grip_VtacUVG_Base : Inventory_Base {
		scope = 0;
		displayName = "Vtac UVG";
		descriptionShort = "$STR_IMP_DscrGrip";
		inventorySlot = "grip1";
		attachments[] = {};
		model = "IMPWMOD\Weapons\Attachments\Grip\VtacUVG\models\VtacUVG.p3d";
		itemSize[] = {1, 2};
		weight = 200;
		NeedRis = 1;
		hiddenSelections[] = {"VtacUVG"};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
	};
	
	class IMP_Grip_VtacUVG : IMP_Grip_VtacUVG_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\Grip\VtacUVG\data\VtacUVG_co.paa"};
	};
};