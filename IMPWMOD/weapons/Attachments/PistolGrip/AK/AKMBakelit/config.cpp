class CfgPatches {
	class IMP_PistolGrip_AK_Bakelit
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class IMP_PistolGrip_AK_Bakelit_Base : Inventory_Base {
		scope = 0;
		displayName = "$STR_IMP_AKMBakelite";
		descriptionShort = "$STR_IMP_PistolgriupAKDescr";
		inventorySlot = "HandlesAK";
		attachments[] = {};
		model = "IMPWMOD\Weapons\Attachments\PistolGrip\AK\AKMBakelit\models\IMP_Handle_AK_Bakelit.p3d";
		itemSize[] = {1, 2};
		weight = 10;
		hiddenSelections[] = {"AKMBakelit"};
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
	};
	
	class IMP_PistolGrip_AK_Bakelit : IMP_PistolGrip_AK_Bakelit_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\PistolGrip\AK\AKMBakelit\data\AKMBakelit_co.paa"};
	};
};