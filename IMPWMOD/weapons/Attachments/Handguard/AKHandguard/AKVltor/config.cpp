class CfgPatches
{
	class IMP_Weapons_Hndgrd_AKVltor
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
	class IMP_Hndgrd_AK_AKVltor: Inventory_Base
	{
		scope=2;
		displayName="VLTOR АК";
		descriptionShort="$STR_IMP_HndgrdDesrc";
		model="IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKVltor\models\AKVltor.p3d";
		rotationFlags=17;
		reversed=0;
		inventorySlot[]=
		{
			"weaponHandguardAK"
		};
		weight=363;
		hasRailFunctionality = 0;
		itemSize[]={3,1};
		recoilModifier[]={1, 1, 1};
		swayModifier[]={0.85,0.85,1};
		hiddenSelections[]=
		{
			"AKVltor"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKVltor\data\AKVltor_co.paa"
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
								"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKVltor\data\AKVltor.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKVltor\data\AKVltor.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKVltor\data\AKVltor.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKVltor\data\AKVltor.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKVltor\data\AKVltor.rvmat"
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