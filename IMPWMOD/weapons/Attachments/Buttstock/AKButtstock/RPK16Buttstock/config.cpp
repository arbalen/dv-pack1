class CfgPatches
{
	class IMP_Bttstk_RPK16
	{
		units[] = {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data", "DZ_Weapons_Supports", "DZ_Scripts"
		};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class IMP_Bttstk_RPK16_Base: Inventory_Base
	{
		scope = 0;
		displayName = "$STR_IMP_RPK16Butt";
		descriptionShort = "$STR_IMP_OthButt";
		model = "IMPWMOD\Weapons\Attachments\Buttstock\AKButtstock\RPK16Buttstock\models\RPK16_Buttstock.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"weaponButtstockAK"};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\RPK16\data\RPK16_tan_co.paa"};
		weight = 730;
		itemSize[] = {3,1};
		recoilModifier[]={0.85, 0.85, 1};
		swayModifier[]={1,1,1};
		dispersionModifier = -0.0002;
		dispersionCondition = "true";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.01,{"DZ\weapons\attachments\support\data\FAL_stock_oe.rvmat"}},{0.7,{"DZ\weapons\attachments\support\data\FAL_stock_oe.rvmat"}},{0.5,{"DZ\weapons\attachments\support\data\FAL_stock_oe_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\support\data\FAL_stock_oe_damage.rvmat"}},{0.01,{"DZ\weapons\attachments\support\data\FAL_stock_oe_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class IMP_Bttstk_RPK16_Black: IMP_Bttstk_RPK16_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\RPK16\data\RPK16_co.paa"};
	};
	class IMP_Bttstk_RPK16_Green: IMP_Bttstk_RPK16_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\RPK16\data\RPK16_green_co.paa"};
	};
	class IMP_Bttstk_RPK16_Tan: IMP_Bttstk_RPK16_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\RPK16\data\RPK16_tan_co.paa"};
	};
};
