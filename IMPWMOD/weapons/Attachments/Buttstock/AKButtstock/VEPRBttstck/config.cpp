class CfgPatches
{
	class IMP_Weapons_Supports_VEPR_Buttstock
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
	class IMP_Bttstk_AK_VEPR: Inventory_Base
	{
		scope=2;
		displayName="$STR_IMP_VEPRBtt";
		descriptionShort="$STR_IMP_OthButt";
		model="IMPWMOD\Weapons\Attachments\Buttstock\AKButtstock\VEPRBttstck\models\IMP_VEPR_Bttstck.p3d";
		rotationFlags=17;
		reversed=0;
		inventorySlot[]=
		{
			"weaponButtstockAK"
		};
		weight=363;
		itemSize[]={3,1};
		recoilModifier[]={0.85, 0.85, 1};
		swayModifier[]={1,1,1};
		hiddenSelections[]=
		{
			"camoflage"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Shotgun\VEPR12\data\Bttstck_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"IMPWMOD\Weapons\Shotgun\VEPR12\data\Bttstck.rvmat"
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
								"IMPWMOD\Weapons\Shotgun\VEPR12\data\Bttstck.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Shotgun\VEPR12\data\Bttstck.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Shotgun\VEPR12\data\Bttstck_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Shotgun\VEPR12\data\Bttstck_damage.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"IMPWMOD\Weapons\Shotgun\VEPR12\data\Bttstck_destruct.rvmat"
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