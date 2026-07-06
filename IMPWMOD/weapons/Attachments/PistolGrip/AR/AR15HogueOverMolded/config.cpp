class CfgPatches {
	class IMP_PistolGrip_AR_AR15HogueOverMolded
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines", "DZ_Weapons_Supports", "DZ_Scripts"};
	};
};

class CfgVehicles {
	class Inventory_Base;
	
	class IMP_PistolGrip_AR_AR15HogueOverMolded_Base : Inventory_Base {
		scope = 0;
		displayName = "AR15HogueOverMolded";
		descriptionShort = "$STR_IMP_PistolgriupAR";
		inventorySlot = "HandlesM4";
		attachments[] = {};
		model = "IMPWMOD\Weapons\Attachments\PistolGrip\AR\AR15HogueOverMolded\models\AR15HogueOverMolded.p3d";
		itemSize[] = {1, 2};
		weight = 10;
		hiddenSelections[] = {"AR15HogueOverMolded"};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
	};
	
	class IMP_PistolGrip_AR_AR15HogueOverMolded : IMP_PistolGrip_AR_AR15HogueOverMolded_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\PistolGrip\AR\AR15HogueOverMolded\data\AR15HogueOverMolded_co.paa"};
	};
	
	class IMP_PistolGrip_AR_AR15HogueOverMolded_Tan : IMP_PistolGrip_AR_AR15HogueOverMolded_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\PistolGrip\AR\AR15HogueOverMolded\data\AR15HogueOverMolded_tan_co.paa"};
	};
	
	class IMP_PistolGrip_AR_AR15HogueOverMolded_Green : IMP_PistolGrip_AR_AR15HogueOverMolded_Base {
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\PistolGrip\AR\AR15HogueOverMolded\data\AR15HogueOverMolded_green_co.paa"};
	};
};