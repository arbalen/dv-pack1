class CfgPatches {
	class IMP_Grip_StrikeIndustriesCT 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class IMP_Grip_StrikeIndustriesCT_Base : Inventory_Base {
		scope = 0;
		displayName = "Strike Industries CT";
		descriptionShort = "$STR_IMP_DscrGrip";
		inventorySlot = "grip1";
		attachments[] = {};
		model = "IMPWMOD\Weapons\Attachments\Grip\StrikeIndustriesCT\models\StrikeIndustriesCT.p3d";
		itemSize[] = {1, 2};
		NeedRis = 1;
		weight = 200;
		hiddenSelections[] = {"StrikeIndustriesCT"};
		recoilModifier[]={0.85, 0.85, 1};
		swayModifier[]={0.85, 0.85, 1};
	};
	
	class IMP_Grip_StrikeIndustriesCT : IMP_Grip_StrikeIndustriesCT_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\Grip\StrikeIndustriesCT\data\StrikeIndustriesCT_co.paa"};
	};
};