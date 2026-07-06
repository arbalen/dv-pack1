class CfgPatches
{
	class IMP_Weapons_Supports_AK_Tact_2
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
	class IMP_Bttstk_AK_Tact2: Inventory_Base
	{
		scope=2;
		displayName="$STR_IMP_ButttacticalAK";
		descriptionShort="$STR_IMP_BttstckAK";
		model="\IMPWMOD\Weapons\Attachments\Buttstock\AKButtstock\Tactical2AKButtstock\models\TacticalAK2Buttstock.p3d";
		rotationFlags=17;
		reversed=0;
		inventorySlot[]=
		{
			"weaponButtstockAK"
		};
		weight=363;
		itemSize[]={3,1};
		recoilModifier[]={0.8, 0.8, 1};
		swayModifier[]={1,1,1};
		hiddenSelections[]=
		{
			"camoflage"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Attachments\Buttstock\AKButtstock\Tactical2AKButtstock\data\Buttstock_co.paa"
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
								"IMPWMOD\Weapons\Attachments\Buttstock\AKButtstock\Tactical2AKButtstock\data\Tactical2AKButtstock.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\AKButtstock\Tactical2AKButtstock\data\Tactical2AKButtstock.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\AKButtstock\Tactical2AKButtstock\data\Tactical2AKButtstock.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\AKButtstock\Tactical2AKButtstock\data\Tactical2AKButtstock.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\AKButtstock\Tactical2AKButtstock\data\Tactical2AKButtstock.rvmat"
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