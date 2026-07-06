class CfgPatches {
	class IMP_Grip_Egg 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class IMP_Grip_Egg_Base : Inventory_Base {
		scope = 0;
		displayName = "Яички";
		descriptionShort = "$STR_IMP_DscrGrip";
		inventorySlot = "grip1";
		attachments[] = {};
		model = "IMPWMOD\Weapons\Attachments\Grip\Egg\models\Egg.p3d";
		itemSize[] = {1, 2};
		NeedRis = 1;
		weight = 200;
		hiddenSelections[] = {"Egg"};
		recoilModifier[]={0.85, 0.85, 1};
		swayModifier[]={0.85, 0.85, 1};
	};
	
	class IMP_Grip_Egg : IMP_Grip_Egg_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\Grip\Egg\data\Egg_co.paa"};
	};
};