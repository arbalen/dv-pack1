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
	
	class IMP_ReceiverCover_AK_AcademiaBastion_Base : Inventory_Base 
	{
		scope = 0;
		rotationFlags=12;
		displayName = "АК AcademiaBastion";
		descriptionShort = "$STR_IMP_Receivercover";
		inventorySlot = "ReceiverCover";
		attachments[] = {};
		model = "IMPWMOD\Weapons\Attachments\ReceiverCover\AK\AcademiaBastion\models\AcademiaBastion.p3d";
		itemSize[] = {1, 2};
		weight = 350;
		hasRailFunctionality = 1;
		hiddenSelections[] = {"AcademiaBastion"};
		recoilModifier[]={0.8, 0.8, 1};
		swayModifier[]={0.8, 0.8, 1};
	};
	
	class IMP_ReceiverCover_AK_AcademiaBastion : IMP_ReceiverCover_AK_AcademiaBastion_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\ReceiverCover\AK\AcademiaBastion\data\AcademiaBastion_co.paa"};
	};
};

class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyAcademiaBastion: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "ReceiverCover";
		model = "IMPWMOD\Weapons\Attachments\ReceiverCover\AK\AcademiaBastion\models\AcademiaBastion.p3d";
	};
};
class CfgSlots
{
	class Slot_ReceiverCover
	{
		name = "ReceiverCover";
		displayName = "ReceiverCover";
		modGhostIcon = "set:Slots image:ReceiverCover";
	};
};