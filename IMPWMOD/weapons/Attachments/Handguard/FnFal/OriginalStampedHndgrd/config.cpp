class CfgPatches
{
	class IMP_Hndgrd_FnFal_OriginalStampedHndgrd
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
	class IMP_Hndgrd_FnFal_OriginalStampedHndgrd: Inventory_Base
	{
		scope=2;
		displayName="OriginalStamped";
		descriptionShort="$STR_IMP_HndgrdDesrc";
		model="IMPWMOD\Weapons\Attachments\Handguard\FnFal\OriginalStampedHndgrd\models\OriginalStampedHndgrd.p3d";
		rotationFlags=17;
		reversed=0;
		inventorySlot[]=
		{
			"weaponHandguardFnFal"
		};
		weight=363;
		hasRailFunctionality = 0;
		itemSize[]={3,1};
		recoilModifier[]={1, 1, 1};
		swayModifier[]={0.9,0.9,1};
		hiddenSelections[]=
		{
			"OriginalStampedHndgrd"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Attachments\Handguard\FnFal\OriginalStampedHndgrd\data\OriginalStampedHndgrd_co.paa"
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
								"IMPWMOD\Weapons\Attachments\Handguard\FnFal\OriginalStampedHndgrd\data\OriginalStampedHndgrd.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\FnFal\OriginalStampedHndgrd\data\OriginalStampedHndgrd.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\FnFal\OriginalStampedHndgrd\data\OriginalStampedHndgrd.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\FnFal\OriginalStampedHndgrd\data\OriginalStampedHndgrd.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\FnFal\OriginalStampedHndgrd\data\OriginalStampedHndgrd.rvmat"
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