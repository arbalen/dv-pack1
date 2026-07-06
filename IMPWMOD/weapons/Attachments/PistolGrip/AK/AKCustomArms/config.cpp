class CfgPatches {
	class IMP_PistolGrip_AK_AKCustomArms
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class IMP_PistolGrip_AK_CustomArms_Base : Inventory_Base {
		scope = 0;
		displayName = "AK CustomArms";
		descriptionShort = "$STR_IMP_PistolgriupAKDescr";
		inventorySlot = "HandlesAK";
		attachments[] = {};
		model = "IMPWMOD\Weapons\Attachments\PistolGrip\AK\AKCustomArms\models\AKCustomArms.p3d";
		itemSize[] = {1, 2};
		weight = 10;
		hiddenSelections[] = {"AKCustomArms"};
		recoilModifier[]={0.85, 0.85, 1};
		swayModifier[]={0.85, 0.85, 1};
	};
	
	class IMP_PistolGrip_AK_CustomArms : IMP_PistolGrip_AK_CustomArms_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\PistolGrip\AK\AKCustomArms\data\AKCustomArms_co.paa"};
	};
};