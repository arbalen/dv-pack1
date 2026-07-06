class CfgPatches
{
	class IMP_Bttstk_Fal_ParaFoldingBttstck
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
	class IMP_Bttstk_Fal_ParaFoldingBttstck: Inventory_Base
	{
		scope=2;
		displayName="ParaFolding";
		descriptionShort="$STR_IMP_FallButt";
		model="IMPWMOD\Weapons\Attachments\Buttstock\FnFal\ParaFoldingBttstck\models\ParaFoldingBttstck.p3d";
		rotationFlags=17;
		reversed=0;
		inventorySlot[]=
		{
			"IMP_Fal_Buttstock"
		};
		weight=363;
		itemSize[]={3,1};
		recoilModifier[]={0.85, 0.85, 1};
		swayModifier[]={1,1,1};
		hiddenSelections[]=
		{
			"ParaFoldingBttstck"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Attachments\Buttstock\FnFal\ParaFoldingBttstck\data\ParaFoldingBttstck_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"IMPWMOD\Weapons\Attachments\Buttstock\FnFal\ParaFoldingBttstck\data\ParaFoldingBttstck.rvmat"
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
								"IMPWMOD\Weapons\Attachments\Buttstock\FnFal\ParaFoldingBttstck\data\ParaFoldingBttstck.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\FnFal\ParaFoldingBttstck\data\ParaFoldingBttstck.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\FnFal\ParaFoldingBttstck\data\ParaFoldingBttstck_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\FnFal\ParaFoldingBttstck\data\ParaFoldingBttstck_damage.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\FnFal\ParaFoldingBttstck\data\ParaFoldingBttstck_destruct.rvmat"
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