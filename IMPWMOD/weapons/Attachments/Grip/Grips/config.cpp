class CfgPatches {
	class IMP_Grip 
	{
		units[] = {"IMP_VerticalGrip_Black", "IMP_Bipod_Black"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class IMP_VerticalGrip_Base : Inventory_Base {
		scope = 0;
		displayName = "$STR_IMP_DscrGrip";
		descriptionShort = "";
		inventorySlot = "grip1";
		NeedRis = 1;
		attachments[] = {};
		model = "\IMPWMOD\Weapons\Attachments\Grip\Grips\models\grip1.p3d";
		itemSize[] = {1, 2};
		weight = 200;
		hiddenSelections[] = {"camo"};
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
	};
	
	class IMP_VerticalGrip_Black : IMP_VerticalGrip_Base {
		scope = 2;
		inventorySlot = "grip1";
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\Grip\Grips\Data\VGRIP_Base_co.paa"};
	};
	
	class IMP_Bipod_Base : Inventory_Base {
		scope = 0;
		displayName = "$STR_IMP_BipodSlot";
		descriptionShort = "";
		inventorySlot = "grip2";
		attachments[] = {};
		model = "\IMPWMOD\Weapons\Attachments\Grip\Grips\models\grip2.p3d";
		itemSize[] = {1, 2};
		weight = 200;
		hiddenSelections[] = {"camo"};
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
	};
	
	class IMP_Bipod_Black : IMP_Bipod_Base {
		scope = 0;
		inventorySlot = "grip2";
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\Grip\Grips\Data\BIPOD_Base_co.paa"};
	};
	class AtlasBipod: Inventory_Base
	{
		scope=0;
	};
	class M249_Bipod: Inventory_Base
	{
		scope=0;
	};
};

class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxygrip1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "grip1";
		model = "IMPWMOD\Weapons\Attachments\Grip\Grips\models\grip1.p3d";
	};
	class Proxygrip2: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "grip2";
		model = "IMPWMOD\Weapons\Attachments\Grip\Grips\models\grip2.p3d";
	};
};
class CfgSlots
{
	class Slot_grip1
	{
		name = "grip1";
		displayName = "$STR_IMP_GripSlot1";
		modGhostIcon = "set:Slots image:GripRuk";
	};
	class Slot_grip2
	{
		name = "grip2";
		displayName = "$STR_IMP_BipodSlot";
		modGhostIcon = "set:Slots image:Soshki";
	};
};