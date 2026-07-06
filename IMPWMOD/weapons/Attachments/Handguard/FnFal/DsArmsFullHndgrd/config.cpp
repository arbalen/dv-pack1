class CfgPatches
{
	class IMP_Hndgrd_FnFal_DsArmsFullHndgrd
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
	class IMP_Hndgrd_FnFal_DsArmsFullHndgrd: Inventory_Base
	{
		scope=2;
		displayName="DsArms Full";
		descriptionShort="$STR_IMP_HndgrdDesrc";
		model="IMPWMOD\Weapons\Attachments\Handguard\FnFal\DsArmsFullHndgrd\models\DsArmsFullHndgrd.p3d";
		rotationFlags=17;
		reversed=0;
		inventorySlot[]=
		{
			"weaponHandguardFnFal"
		};
		weight=363;
		hasRailFunctionality = 1;
		itemSize[]={3,1};
		recoilModifier[]={1, 1, 1};
		swayModifier[]={0.8,0.8,1};
		hiddenSelections[]=
		{
			"DsArmsFullHndgrd"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Attachments\Handguard\FnFal\DsArmsFullHndgrd\data\DsArmsFullHndgrd_co.paa"
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
								"IMPWMOD\Weapons\Attachments\Handguard\FnFal\DsArmsFullHndgrd\data\DsArmsFullHndgrd.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\FnFal\DsArmsFullHndgrd\data\DsArmsFullHndgrd.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\FnFal\DsArmsFullHndgrd\data\DsArmsFullHndgrd.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\FnFal\DsArmsFullHndgrd\data\DsArmsFullHndgrd.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\FnFal\DsArmsFullHndgrd\data\DsArmsFullHndgrd.rvmat"
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