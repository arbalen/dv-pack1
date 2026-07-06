class CfgPatches {
	class IMP_PistolGrip_AR_AR15MagpulMoe
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class IMP_PistolGrip_AR_AR15MagpulMoe_Base : Inventory_Base {
		scope = 0;
		displayName = "AR15MagpulMoe";
		descriptionShort = "$STR_IMP_PistolgriupAR";
		inventorySlot = "HandlesM4";
		attachments[] = {};
		model = "IMPWMOD\Weapons\Attachments\PistolGrip\AR\AR15MagpulMoe\models\AR15MagpulMoe.p3d";
		itemSize[] = {1, 2};
		weight = 10;
		hiddenSelections[] = {"AR15MagpulMoe"};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
	};
	
	class IMP_PistolGrip_AR_AR15MagpulMoe : IMP_PistolGrip_AR_AR15MagpulMoe_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\PistolGrip\AR\AR15MagpulMoe\data\AR15MagpulMoe_co.paa"};
	};
	
	class IMP_PistolGrip_AR_AR15MagpulMoe_Tan : IMP_PistolGrip_AR_AR15MagpulMoe_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\PistolGrip\AR\AR15MagpulMoe\data\AR15MagpulMoe_tan_co.paa"};
	};
};