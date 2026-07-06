class CfgPatches 
{
	class IMPWMODPart2 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Gear_Medical", "DZ_Structures_Furniture", "DZ_Data", "DZ_Characters", "DZ_Scripts", "DZ_gear_food", "DZ_Gear_Consumables", "DZ_Characters_Vests", "DZ_Gear_Containers", "DZ_Weapons_Melee", "DZ_Weapons_Magazines", "DZ_Weapons_Supports"};
	};
};
class CfgMods
{
	class IMPWMODPart2
	{
		dir = IMPWMODPart2;
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = IMPWMODPart2;
		credits = "https://steamcommunity.com/id/IMPERIVM15";
		author = "https://steamcommunity.com/id/IMPERIVM15";
		authorID = "0";
		version = 0.1;
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		
		class defs
		{
			class worldScriptModule {
				value = "";
				files[] = {"IMPWMODPart2\scripts\4_World"};
			};
		};
	};
};