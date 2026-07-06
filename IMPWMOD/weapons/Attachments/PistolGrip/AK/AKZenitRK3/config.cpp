class CfgPatches {
	class IMP_PistolGrip_AK_ZenitRK3
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class IMP_PistolGrip_AK_ZenitRK3_Base : Inventory_Base {
		scope = 0;
		displayName = "$STR_IMP_ZenitRK3";
		descriptionShort = "$STR_IMP_PistolgriupAKDescr";
		inventorySlot = "HandlesAK";
		attachments[] = {};
		model = "IMPWMOD\Weapons\Attachments\PistolGrip\AK\AKZenitRK3\models\IMP_Handle_AK_ZenitRK3.p3d";
		itemSize[] = {1, 2};
		weight = 10;
		hiddenSelections[] = {"AKZenitRK3"};
		recoilModifier[]={0.85, 0.85, 1};
		swayModifier[]={0.85, 0.85, 1};
	};
	
	class IMP_PistolGrip_AK_ZenitRK3 : IMP_PistolGrip_AK_ZenitRK3_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\PistolGrip\AK\AKZenitRK3\data\AKZenitRK3_co.paa"};
	};
};