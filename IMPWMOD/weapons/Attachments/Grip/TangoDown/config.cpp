class CfgPatches {
	class IMP_Grip_TangoDown 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class IMP_Grip_TangoDown_Base : Inventory_Base {
		scope = 0;
		displayName = "Tango Down";
		descriptionShort = "$STR_IMP_DscrGrip";
		inventorySlot = "grip1";
		attachments[] = {};
		model = "IMPWMOD\Weapons\Attachments\Grip\TangoDown\models\TangoDown.p3d";
		itemSize[] = {1, 2};
		weight = 200;
		NeedRis = 1;
		hiddenSelections[] = {"TangoDown"};
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
	};
	
	class IMP_Grip_TangoDown_Black : IMP_Grip_TangoDown_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\Grip\TangoDown\data\TangoDown_co.paa"};
	};
	
	class IMP_Grip_TangoDown_Blue : IMP_Grip_TangoDown_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\Grip\TangoDown\data\TangoDown_Blue_co.paa"};
	};
	
	class IMP_Grip_TangoDown_Tan : IMP_Grip_TangoDown_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\Grip\TangoDown\data\TangoDown_Tan_co.paa"};
	};
};