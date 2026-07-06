class CfgPatches {
	class IMP_PistolGrip_AK_KGB
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class IMP_PistolGrip_AK_Kgb_Base : Inventory_Base {
		scope = 0;
		displayName = "АК КГБ";
		descriptionShort = "$STR_IMP_PistolgriupAKDescr";
		inventorySlot = "HandlesAK";
		attachments[] = {};
		model = "IMPWMOD\Weapons\Attachments\PistolGrip\AK\AKKgb\models\AKKgb.p3d";
		itemSize[] = {1, 2};
		weight = 10;
		hiddenSelections[] = {"AKKgb"};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
	};
	
	class IMP_PistolGrip_AK_Kgb_red : IMP_PistolGrip_AK_Kgb_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\PistolGrip\AK\AKKgb\data\AKKgb_red_co.paa"};
	};
	
	class IMP_PistolGrip_AK_Kgb_gold : IMP_PistolGrip_AK_Kgb_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\PistolGrip\AK\AKKgb\data\AKKgb_co.paa"};
	};
};