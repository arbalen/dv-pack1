class CfgPatches 
{
	class IMPWMOD 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Gear_Medical", "DZ_Structures_Furniture", "DZ_Data", "DZ_Characters", "DZ_Scripts", "DZ_gear_food", "DZ_Gear_Consumables", "DZ_Characters_Vests", "DZ_Gear_Containers", "DZ_Weapons_Melee", "DZ_Weapons_Magazines", "DZ_Weapons_Supports"};
	};
};
class CfgMods
{
	class IMPWMOD
	{
		dir = IMPWMOD;
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = IMPWMOD;
		credits = "https://steamcommunity.com/id/IMPERIVM15";
		author = "https://steamcommunity.com/id/IMPERIVM15";
		authorID = "0";
		version = 0.1;
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		inputs = "IMPWMOD/modded_Inputs.xml";
		
		class defs
		{
			class imageSets
			{
				files[] = {"IMPCOREMOD\GUI\imagesets\Slots.imageset"};
			};
			
			class worldScriptModule {
				value = "";
				files[] = {"IMPWMOD\scripts\4_World"};
			};
		};
	};
};
class CfgSlots
{
	class Slot_weaponBipod
	{
		name = "weaponBipod";
		displayName = "$STR_IMP_BipodSlot";
		modGhostIcon = "set:Slots image:Soshki";
	};
};
