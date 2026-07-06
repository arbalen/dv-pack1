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
	
	class IMP_ReceiverCover_AK_ZenitB33_Base : Inventory_Base 
	{
		scope = 0;
		rotationFlags=12;
		displayName = "$STR_IMP_ZenitB33";
		descriptionShort = "$STR_IMP_Receivercover";
		inventorySlot = "ReceiverCover";
		attachments[] = {};
		model = "IMPWMOD\Weapons\Attachments\ReceiverCover\AK\ZenitB33\models\ZenitB33.p3d";
		itemSize[] = {1, 2};
		weight = 350;
		hasRailFunctionality = 1;
		hiddenSelections[] = {"AK12ZenitB33"};
		recoilModifier[]={0.85, 0.85, 1};
		swayModifier[]={0.85, 0.85, 1};
	};
	
	class IMP_ReceiverCover_AK_ZenitB33 : IMP_ReceiverCover_AK_ZenitB33_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\ReceiverCover\AK\ZenitB33\data\ZenitB33_co.paa"};
	};
};