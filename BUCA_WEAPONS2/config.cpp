class CfgPatches
{
	class BUCA_WEAPONS2
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Ammunition",
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Muzzles",
			"DZ_Weapons_Optics"
		};
	};
};
class CfgMods
{
	class BUCA_WEAPONS2
	{
		dir = "BUCA_WEAPONS2";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "BUCA_WEAPONS2";
		author = "Cumbuca";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"BUCA_WEAPONS2\Scripts\4_World"};
			};	
		};
	};
};