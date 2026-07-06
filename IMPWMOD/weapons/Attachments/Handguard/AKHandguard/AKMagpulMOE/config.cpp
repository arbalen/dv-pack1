class CfgPatches
{
	class IMP_Weapons_Hndgrd_AKMagpulMOE
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
	class IMP_Hndgrd_AK_AKMagpulMOE_black: Inventory_Base
	{
		scope=2;
		displayName="Magpul MOE АК";
		descriptionShort="$STR_IMP_HndgrdDesrc";
		model="IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKMagpulMOE\models\AKMagpulMOE.p3d";
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
		swayModifier[]={0.85,0.85,1};
		hiddenSelections[]=
		{
			"AKMagpulMOE"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKMagpulMOE\data\AKMagpulMOE_co.paa"
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
								"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKMagpulMOE\data\AKMagpulMOE.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKMagpulMOE\data\AKMagpulMOE.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKMagpulMOE\data\AKMagpulMOE.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKMagpulMOE\data\AKMagpulMOE.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKMagpulMOE\data\AKMagpulMOE.rvmat"
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
	
	class IMP_Hndgrd_AK_AKMagpulMOE_fde : IMP_Hndgrd_AK_AKMagpulMOE_black
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKMagpulMOE\data\AKMagpulMOE_fde_co.paa"};
	};
	
	class IMP_Hndgrd_AK_AKMagpulMOE_od : IMP_Hndgrd_AK_AKMagpulMOE_black
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKMagpulMOE\data\AKMagpulMOE_od_co.paa"};
	};
	
	class IMP_Hndgrd_AK_AKMagpulMOE_plm : IMP_Hndgrd_AK_AKMagpulMOE_black
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKMagpulMOE\data\AKMagpulMOE_plm_co.paa"};
	};
	
	class IMP_Hndgrd_AK_AKMagpulMOE_sg : IMP_Hndgrd_AK_AKMagpulMOE_black
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKMagpulMOE\data\AKMagpulMOE_sg_co.paa"};
	};
};