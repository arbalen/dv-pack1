class CfgPatches
{
	class IMP_MAR10_Buttstock
	{
		units[] = {"IMP_M4_CSBttstck_Base","IMP_M4_CSBttstck"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Supports"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class IMP_M4_CSBttstck_Base: Inventory_Base
	{
		scope = 0;
		displayName = "$STR_IMP_Mar10Butt";
		descriptionShort = "$STR_IMP_ButtARM4";
		model = "IMPWMOD\Weapons\Attachments\Buttstock\MAR10\models\MAR10_Buttstock.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"weaponButtstockM4"};
		weight = 400;
		itemSize[] = {2,1};
		dispersionModifier = -0.0002;
		dispersionCondition = "true";
		recoilModifier[]={0.8, 0.8, 1};
		swayModifier[]={1,1,1};
		hiddenSelections[] = {"camo"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = 
					{
						{1.0,{"IMPWMOD\Weapons\Attachments\Buttstock\MAR10\data\MAR10_Buttstock.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Attachments\Buttstock\MAR10\data\MAR10_Buttstock.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Attachments\Buttstock\MAR10\data\MAR10_Buttstock_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Attachments\Buttstock\MAR10\data\MAR10_Buttstock_damage.rvmat"}},
						{0.0,{"IMPWMOD\Weapons\Attachments\Buttstock\MAR10\data\MAR10_Buttstock_destruct.rvmat"}}
					};
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
	};
    class IMP_M4_CSBttstck : IMP_M4_CSBttstck_Base 
    {
        scope = 2;
        hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\Buttstock\MAR10\data\MAR10_Buttstock_co.paa"};
    };
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyMAR10_Buttstock: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "weaponButtstockM4";
		model = "IMPWMOD\Weapons\Attachments\Buttstock\MAR10\models\MAR10_Buttstock.p3d";
	};
};
