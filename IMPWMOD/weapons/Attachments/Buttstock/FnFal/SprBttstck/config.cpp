class CfgPatches
{
	class IMP_Bttstk_Fal_SprBttstck
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
	class IMP_Bttstk_Fal_SprBttstck: Inventory_Base
	{
		scope=2;
		displayName="SPR";
		descriptionShort="$STR_IMP_FallButt";
		model="IMPWMOD\Weapons\Attachments\Buttstock\FnFal\SprBttstck\models\SprBttstck.p3d";
		rotationFlags=17;
		reversed=0;
		inventorySlot[]=
		{
			"IMP_Fal_Buttstock"
		};
		weight=363;
		itemSize[]={3,1};
		recoilModifier[]={1, 0.4, 1};
		swayModifier[]={0.69999999,0.69999999,0.69999999};
		hiddenSelections[]=
		{
			"SprBttstck"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Attachments\Buttstock\FnFal\SprBttstck\data\SprBttstck_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"IMPWMOD\Weapons\Attachments\Buttstock\FnFal\SprBttstck\data\SprBttstck.rvmat"
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
								"IMPWMOD\Weapons\Attachments\Buttstock\FnFal\SprBttstck\data\SprBttstck.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\FnFal\SprBttstck\data\SprBttstck.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\FnFal\SprBttstck\data\SprBttstck_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\FnFal\SprBttstck\data\SprBttstck_damage.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\FnFal\SprBttstck\data\SprBttstck_destruct.rvmat"
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