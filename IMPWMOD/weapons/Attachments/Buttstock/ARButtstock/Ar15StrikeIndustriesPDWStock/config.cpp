class CfgPatches
{
	class IMP_Weapons_Supports_Ar15StrikeIndustriesPDWStock
	{
		units[]={};
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
	class IMP_Bttstk_AR_Ar15StrikeIndustriesPDWStock: Inventory_Base
	{
		scope=2;
		displayName="StrikeIndustries PDW Stock";
		descriptionShort="$STR_IMP_ButtARM4";
		model="IMPWMOD\Weapons\Attachments\Buttstock\ARButtstock\Ar15StrikeIndustriesPDWStock\models\Ar15StrikeIndustriesPDWStock.p3d";
		rotationFlags=17;
		reversed=0;
		inventorySlot[]=
		{
			"weaponButtstockM4"
		};
		weight=363;
		itemSize[]={3,1};
		recoilModifier[]={0.8, 0.8, 1};
		swayModifier[]={1,1,1};
		hiddenSelections[]=
		{
			"camoflage"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Attachments\Buttstock\ARButtstock\Ar15StrikeIndustriesPDWStock\data\Ar15StrikeIndustriesPDWStock_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"IMPWMOD\Weapons\Attachments\Buttstock\ARButtstock\Ar15StrikeIndustriesPDWStock\data\Ar15StrikeIndustriesPDWStock.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\ARButtstock\Ar15StrikeIndustriesPDWStock\data\Ar15StrikeIndustriesPDWStock.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\ARButtstock\Ar15StrikeIndustriesPDWStock\data\Ar15StrikeIndustriesPDWStock.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\ARButtstock\Ar15StrikeIndustriesPDWStock\data\Ar15StrikeIndustriesPDWStock_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\ARButtstock\Ar15StrikeIndustriesPDWStock\data\Ar15StrikeIndustriesPDWStock_damage.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\ARButtstock\Ar15StrikeIndustriesPDWStock\data\Ar15StrikeIndustriesPDWStock_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeLightBlunt";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeLightBlunt_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeLightBlunt_Heavy";
				range=2.8;
			};
		};
	};
};