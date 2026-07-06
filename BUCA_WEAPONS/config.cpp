class CfgPatches
{
	class BUCA_WEAPONS
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
			"DZ_Weapons_Optics",
			"DZ_Weapons_Projectiles"
		};
	};
};
class CfgMods
{
	class BUCA_WEAPONS
	{
		dir="BUCA_WEAPONS";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="BUCA_WEAPONS";
		credits="";
		author="";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"BUCA_WEAPONS\Scripts\4_World"
				};
			};
			class imageSets
			{
				files[]=
				{
					"BUCA_WEAPONS\Icons\ImageSets\Icons.imageset"
				};
			};
		};
	};
};
