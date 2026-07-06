class CfgPatches {
	class IMP_Grip_TacticalDynamicsSkel 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class IMP_Grip_TacticalDynamicsSkel_Base : Inventory_Base {
		scope = 0;
		displayName = "Tactical Dynamics Skeleton";
		descriptionShort = "$STR_IMP_DscrGrip";
		inventorySlot = "grip1";
		attachments[] = {};
		model = "IMPWMOD\Weapons\Attachments\Grip\TacticalDynamicsSkel\models\TacticalDynamicsSkel.p3d";
		itemSize[] = {1, 2};
		NeedRis = 1;
		weight = 200;
		hiddenSelections[] = {"TacticalDynamicsSkel"};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
	};
	
	class IMP_Grip_TacticalDynamicsSkel : IMP_Grip_TacticalDynamicsSkel_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\Grip\TacticalDynamicsSkel\data\TacticalDynamicsSkel_co.paa"};
	};
};