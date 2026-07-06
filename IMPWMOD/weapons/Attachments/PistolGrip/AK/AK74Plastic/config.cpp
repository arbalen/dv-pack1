class CfgPatches {
	class IMP_PistolGrip_AK_AK74Plastic
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class IMP_PistolGrip_AK_AK74Plastic_Base : Inventory_Base {
		scope = 0;
		displayName = "АК74 Plastic";
		descriptionShort = "$STR_IMP_PistolgriupAKDescr";
		inventorySlot = "HandlesAK";
		attachments[] = {};
		model = "IMPWMOD\Weapons\Attachments\PistolGrip\AK\AK74Plastic\models\AK74Plastic.p3d";
		itemSize[] = {1, 2};
		weight = 10;
		hiddenSelections[] = {"AK74Plastic"};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
	};
	
	class IMP_PistolGrip_AK_AK74Plastic : IMP_PistolGrip_AK_AK74Plastic_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\PistolGrip\AK\AK74Plastic\data\AK74Plastic_co.paa"};
	};
};