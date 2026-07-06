class CfgPatches
{
	class DZ_Weapons_Supports
	{
		units[] = {"Atlas_Bipod"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Supports"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class Switchable_Base;
	class Atlas_Bipod: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_IMP_Atlas";
		descriptionShort = "$STR_IMP_AtlasDescr";
		model = "\DZ\weapons\attachments\support\bipod_atlas.p3d";
		rotationFlags = 12;
		reversed = 0;
		inventorySlot[] = {"weaponBipod"};
		weight = 376;
		NeedRis = 1;
		itemSize[] = {1,3};
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\attachments\data\m4_bipod.rvmat"}},{0.7,{"DZ\weapons\attachments\data\m4_bipod.rvmat"}},{0.5,{"DZ\weapons\attachments\data\m4_bipod_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\m4_bipod_damage.rvmat"}},{0.0,{"DZ\weapons\attachments\data\m4_bipod_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimationSources
		{
			class bipod
			{
				source = "user";
				animPeriod = 0.5;
				initPhase = 0;
			};
		};
	};
};

class CfgSlots {
	class Slot_weaponBipod {
		name = "weaponBipod";
		displayName = "$STR_IMP_BipodSlot";
		modGhostIcon = "set:Slots image:Soshki";
	};
};