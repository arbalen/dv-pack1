class CfgPatches {
	class IMP_PistolGrip_AK_AKM_Wood
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class IMP_PistolGrip_AK_AKM_Wood_Base : Inventory_Base {
		scope = 0;
		displayName = "$STR_IMP_AKMWood";
		descriptionShort = "$STR_IMP_PistolgriupAKDescr";
		inventorySlot = "HandlesAK";
		attachments[] = {};
		model = "IMPWMOD\Weapons\Attachments\PistolGrip\AK\AKMWood\models\IMP_Handle_AK_Wood.p3d";
		itemSize[] = {1, 2};
		weight = 10;
		hiddenSelections[] = {"AKMWood"};
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
	};
	
	class IMP_PistolGrip_AK_AKM_Wood : IMP_PistolGrip_AK_AKM_Wood_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\PistolGrip\AK\AKMWood\data\AKMWood_co.paa"};
	};
};