class CfgPatches
{
	class IMP_Weapons_Hndgrd_AKMagpulZhukov
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
	class IMP_Hndgrd_AK_AKMagpulZhukov_black: Inventory_Base
	{
		scope=2;
		displayName="Magpul Zhukov АК";
		descriptionShort="$STR_IMP_HndgrdDesrc";
		model="IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKMagpulZhukov\models\AKMagpulZhukov.p3d";
		rotationFlags=17;
		reversed=0;
		inventorySlot[]=
		{
			"weaponHandguardAK"
		};
		weight=363;
		itemSize[]={3,1};
		hasRailFunctionality = 0;
		recoilModifier[]={1, 1, 1};
		swayModifier[]={0.8,0.8,1};
		hiddenSelections[]=
		{
			"AKMagpulZhukov"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKMagpulZhukov\data\AKMagpulZhukov_co.paa"
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
								"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKMagpulZhukov\data\AKMagpulZhukov.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKMagpulZhukov\data\AKMagpulZhukov.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKMagpulZhukov\data\AKMagpulZhukov.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKMagpulZhukov\data\AKMagpulZhukov.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKMagpulZhukov\data\AKMagpulZhukov.rvmat"
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
	
	class IMP_Hndgrd_AK_AKMagpulZhukov_fde : IMP_Hndgrd_AK_AKMagpulZhukov_black
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKMagpulZhukov\data\AKMagpulZhukov_fde_co.paa"};
	};
	
	class IMP_Hndgrd_AK_AKMagpulZhukov_plm : IMP_Hndgrd_AK_AKMagpulZhukov_black
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKMagpulZhukov\data\AKMagpulZhukov_plm_co.paa"};
	};
};