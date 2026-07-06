class CfgPatches
{
	class IMP_Hndgrd_FnFal_BelgianStyleHndgrd
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
	class IMP_Hndgrd_FnFal_BelgianStyleHndgrd: Inventory_Base
	{
		scope=2;
		displayName="BelgianStyle";
		descriptionShort="$STR_IMP_HndgrdDesrc";
		model="IMPWMOD\Weapons\Attachments\Handguard\FnFal\BelgianStyleHndgrd\models\BelgianStyleHndgrd.p3d";
		rotationFlags=17;
		reversed=0;
		inventorySlot[]=
		{
			"weaponHandguardFnFal"
		};
		weight=363;
		itemSize[]={3,1};
		hasRailFunctionality = 0;
		recoilModifier[]={1, 1, 1};
		swayModifier[]={0.9,0.9,1};
		hiddenSelections[]=
		{
			"BelgianStyleHndgrd"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Attachments\Handguard\FnFal\BelgianStyleHndgrd\data\BelgianStyleHndgrd_co.paa"
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
								"IMPWMOD\Weapons\Attachments\Handguard\FnFal\BelgianStyleHndgrd\data\BelgianStyleHndgrd.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\FnFal\BelgianStyleHndgrd\data\BelgianStyleHndgrd.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\FnFal\BelgianStyleHndgrd\data\BelgianStyleHndgrd.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\FnFal\BelgianStyleHndgrd\data\BelgianStyleHndgrd.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\FnFal\BelgianStyleHndgrd\data\BelgianStyleHndgrd.rvmat"
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