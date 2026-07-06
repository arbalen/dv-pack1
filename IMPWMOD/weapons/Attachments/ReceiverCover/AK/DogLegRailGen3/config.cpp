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
	
	class IMP_ReceiverCover_AK_DogLegRailGen3_Base : Inventory_Base {
		scope = 0;
		rotationFlags=12;
		displayName = "АК DogLegRail Gen3";
		descriptionShort = "$STR_IMP_Receivercover";
		inventorySlot = "ReceiverCover";
		attachments[] = {};
		model = "IMPWMOD\Weapons\Attachments\ReceiverCover\AK\DogLegRailGen3\models\DogLegRailGen3.p3d";
		itemSize[] = {1, 2};
		weight = 350;
		hasRailFunctionality = 1;
		hiddenSelections[] = {"DogLegRailGen3"};
		recoilModifier[]={0.85, 0.85, 1};
		swayModifier[]={0.85, 0.85, 1};
	};
	
	class IMP_ReceiverCover_AK_DogLegRailGen3 : IMP_ReceiverCover_AK_DogLegRailGen3_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\ReceiverCover\AK\DogLegRailGen3\data\DogLegRailGen3_co.paa"};
	};
};