
class CfgPatches
{
	class IMP_Lasers
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts"};
		worlds[] = {};
	};
};
class cfgVehicles
{
	class Switchable_Base;
	class Inventory_Base;
	class IMP_Laser : Inventory_Base
	{
		scope = 1;
		model = "IMPWMOD\Weapons\Attachments\Support\Laser\Models\Luch.p3d";
		hiddenSelections[] = {"zbytek"};
		simpleHiddenSelections[]={"zbytek"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0,0,0,0,co)"};
		hiddenSelectionsMaterials[] = {"IMPWMOD\Weapons\Attachments\Support\Laser\Data\l.rvmat"};
	};
	class IMP_Lasers_Base : Switchable_Base
	{
		scope = 1;
		rotationFlags = 17;
		model = "IMPWMOD\Weapons\Attachments\Support\Laser\Models\Luch.p3d";
		reversed = 1;
		weight = 150;
		itemSize[] = {2,1};
		inventorySlot[] = {"weaponFlashlight"};
		attachments[] = {"BatteryD"};
		repairableWithKits[] = {7};
		repairCosts[] = {25.0};
		soundImpactType = "plastic";
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 0.0025;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 30;
		};
		hiddenSelections[] = 
		{
			"zbytek",
			"Beam1",
			"glass"
		};
		simpleHiddenSelections[]=
		{
			"Beam1"
		};
	};
};