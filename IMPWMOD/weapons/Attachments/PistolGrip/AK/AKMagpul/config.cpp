class CfgPatches {
	class IMP_PistolGrip_AK_Magpul
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class IMP_PistolGrip_AK_Magpul_Base : Inventory_Base {
		scope = 0;
		displayName = "АК Magpul";
		descriptionShort = "$STR_IMP_PistolgriupAKDescr";
		inventorySlot = "HandlesAK";
		attachments[] = {};
		model = "IMPWMOD\Weapons\Attachments\PistolGrip\AK\AKMagpul\models\IMP_Handle_AK_Magpul.p3d";
		itemSize[] = {1, 2};
		weight = 10;
		hiddenSelections[] = {"AKMagpul"};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
	};
	
	class IMP_PistolGrip_AK_Magpul : IMP_PistolGrip_AK_Magpul_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\PistolGrip\AK\AKMagpul\data\AKMagpul_co.paa"};
	};
};