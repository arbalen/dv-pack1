class CfgPatches
{
	class IMP_Weapons_Hndgrd_AKRedHeadAgressor
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
	class IMP_Hndgrd_AK_AKRedHeadAgressor: Inventory_Base
	{
		scope=2;
		displayName="Red Head Agressor АК";
		descriptionShort="$STR_IMP_HndgrdDesrc";
		model="IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKRedHeadAgressor\models\AKRedHeadAgressor.p3d";
		rotationFlags=17;
		reversed=0;
		IsRis = 1;
		hasRailFunctionality = 1;
		inventorySlot[]=
		{
			"weaponHandguardAK"
		};
		weight=363;
		itemSize[]={3,1};
		recoilModifier[]={1, 1, 1};
		swayModifier[]={0.8,0.8,1};
		hiddenSelections[]=
		{
			"AKRedHeadAgressor"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKRedHeadAgressor\data\AKRedHeadAgressor_co.paa"
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
								"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKRedHeadAgressor\data\AKRedHeadAgressor.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKRedHeadAgressor\data\AKRedHeadAgressor.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKRedHeadAgressor\data\AKRedHeadAgressor.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKRedHeadAgressor\data\AKRedHeadAgressor.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKRedHeadAgressor\data\AKRedHeadAgressor.rvmat"
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