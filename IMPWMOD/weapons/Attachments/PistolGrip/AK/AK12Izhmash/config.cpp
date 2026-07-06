class CfgPatches {
	class IMP_PistolGrip_AK_AK12Izhmash
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class IMP_PistolGrip_AK_AK12Izhmash_Base : Inventory_Base {
		scope = 0;
		displayName = "$STR_IMP_AK12 Izhmash";
		descriptionShort = "$STR_IMP_PistolgriupAKDescr";
		inventorySlot = "HandlesAK";
		attachments[] = {};
		model = "IMPWMOD\Weapons\Attachments\PistolGrip\AK\AK12Izhmash\models\AK12Izhmash.p3d";
		itemSize[] = {1, 2};
		weight = 10;
		hiddenSelections[] = {"AK12Izhmash"};
		recoilModifier[]={0.85, 0.85, 1};
		swayModifier[]={0.85, 0.85, 1};
	};
	
	class IMP_PistolGrip_AK_AK12Izhmash : IMP_PistolGrip_AK_AK12Izhmash_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\PistolGrip\AK\AK12Izhmash\data\AK12Izhmash_co.paa"};
	};
};

class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyAK12Izhmash: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "HandlesAK";
		model = "IMPWMOD\Weapons\Attachments\PistolGrip\AK\AK12Izhmash\models\AK12Izhmash.p3d";
	};
};
class CfgSlots
{
	class Slot_HandlesAK
	{
		name = "HandlesAK";
		displayName = "$STR_IMP_PistolGripSlot";
		modGhostIcon = "set:Slots image:HandlesAK";
	};
};