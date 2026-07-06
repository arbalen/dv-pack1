class CfgPatches
{
	class IMP_Bttstk_Fal_ParaBrsBttstck
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
	class IMP_Bttstk_Fal_ParaBrsBttstck: Inventory_Base
	{
		scope=2;
		displayName="ParaBrs";
		descriptionShort="$STR_IMP_FallButt";
		model="IMPWMOD\Weapons\Attachments\Buttstock\FnFal\ParaBrsBttstck\models\ParaBrsBttstck.p3d";
		rotationFlags=17;
		reversed=0;
		inventorySlot[]=
		{
			"IMP_Fal_Buttstock"
		};
		weight=363;
		itemSize[]={3,1};
		recoilModifier[]={0.8, 0.8, 1};
		swayModifier[]={1,1,1};
		hiddenSelections[]=
		{
			"ParaBrsBttstck"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Attachments\Buttstock\FnFal\ParaBrsBttstck\data\ParaBrsBttstck_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"IMPWMOD\Weapons\Attachments\Buttstock\FnFal\ParaBrsBttstck\data\ParaBrsBttstck.rvmat"
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
								"IMPWMOD\Weapons\Attachments\Buttstock\FnFal\ParaBrsBttstck\data\ParaBrsBttstck.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\FnFal\ParaBrsBttstck\data\ParaBrsBttstck.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\FnFal\ParaBrsBttstck\data\ParaBrsBttstck_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\FnFal\ParaBrsBttstck\data\ParaBrsBttstck_damage.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\FnFal\ParaBrsBttstck\data\ParaBrsBttstck_destruct.rvmat"
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