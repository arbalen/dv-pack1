class CfgPatches {
	class IMP_PistolGrip_AR_MagpulMiadGen1
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class IMP_PistolGrip_AR_MagpulMiadGen1_Base : Inventory_Base {
		scope = 0;
		displayName = "MagpulMiadGen1";
		descriptionShort = "$STR_IMP_PistolgriupAR";
		inventorySlot = "HandlesM4";
		attachments[] = {};
		model = "IMPWMOD\Weapons\Attachments\PistolGrip\AR\MagpulMiadGen1\models\MagpulMiadGen1.p3d";
		itemSize[] = {1, 2};
		weight = 10;
		hiddenSelections[] = {"MagpulMiadGen1"};
		recoilModifier[]={0.85, 0.85, 1};
		swayModifier[]={0.85, 0.85, 1};
	};
	
	class IMP_PistolGrip_AR_MagpulMiadGen1 : IMP_PistolGrip_AR_MagpulMiadGen1_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\PistolGrip\AR\MagpulMiadGen1\data\MagpulMiadGen1_co.paa"};
	};
};

class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyMagpulMiadGen1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "HandlesM4";
		model = "IMPWMOD\Weapons\Attachments\PistolGrip\AR\MagpulMiadGen1\models\MagpulMiadGen1.p3d";
	};
};
class CfgSlots
{
	class Slot_HandlesM4
	{
		name = "HandlesM4";
		displayName = "$STR_IMP_PistolGripSlot";
		modGhostIcon = "set:Slots image:HandlesAK";
	};
};