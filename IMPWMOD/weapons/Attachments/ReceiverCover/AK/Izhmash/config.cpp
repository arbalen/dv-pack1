class CfgPatches {
	class IMP_ReceiverCover_AK
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class IMP_ReceiverCover_AK_Izhmash_Base : Inventory_Base {
		scope = 0;
		rotationFlags=12;
		displayName = "$STR_IMP_AK Izhmaskkkk";
		descriptionShort = "$STR_IMP_Receivercover";
		inventorySlot = "ReceiverCover";
		attachments[] = {};
		model = "IMPWMOD\Weapons\Attachments\ReceiverCover\AK\Izhmash\models\Izhmash.p3d";
		itemSize[] = {1, 2};
		weight = 10;
		hiddenSelections[] = {"AK12Izhmash"};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
	};
	
	class IMP_ReceiverCover_AK_Izhmash : IMP_ReceiverCover_AK_Izhmash_Base {
		scope = 0;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\ReceiverCover\AK\Izhmash\data\Izhmash_co.paa"};
	};
};