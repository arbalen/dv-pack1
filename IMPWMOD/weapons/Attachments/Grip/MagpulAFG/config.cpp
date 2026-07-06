class CfgPatches {
	class IMP_Grip_MagpulAFG 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class IMP_Grip_MagpulAFG_Base : Inventory_Base {
		scope = 0;
		displayName = "Magpul AFG";
		descriptionShort = "$STR_IMP_DscrGrip";
		inventorySlot = "grip1";
		attachments[] = {};
		model = "IMPWMOD\Weapons\Attachments\Grip\MagpulAFG\models\MagpulAFG.p3d";
		itemSize[] = {1, 2};
		NeedRis = 1;
		weight = 200;
		hiddenSelections[] = {"MagpulAFG"};
		recoilModifier[]={0.85, 0.85, 1};
		swayModifier[]={0.85, 0.85, 1};
	};
	
	class IMP_Grip_MagpulAFG_Black : IMP_Grip_MagpulAFG_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\Grip\MagpulAFG\data\MagpulAFG_Black_co.paa"};
	};
	
	class IMP_Grip_MagpulAFG_Green : IMP_Grip_MagpulAFG_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\Grip\MagpulAFG\data\MagpulAFG_Green_co.paa"};
	};
	
	class IMP_Grip_MagpulAFG_Tan : IMP_Grip_MagpulAFG_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\Grip\MagpulAFG\data\MagpulAFG_Tan_co.paa"};
	};
};