class CfgPatches
{
	class IMP_Weapons_Supports_Ak_HexagonKocherga
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
	class IMP_Bttstk_AK_HexagonKocherga: Inventory_Base
	{
		scope=2;
		displayName="$STR_IMP_HexagonButt";
		descriptionShort="$STR_IMP_BttstckAK";
		model="IMPWMOD\Weapons\Attachments\Buttstock\AKButtstock\HexagonKocherga\models\HexagonKocherga.p3d";
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
			"HexagonKocherga"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Attachments\Buttstock\AKButtstock\HexagonKocherga\data\HexagonKocherga_co.paa"
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
								"IMPWMOD\Weapons\Attachments\Buttstock\AKButtstock\HexagonKocherga\data\HexagonKocherga.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\AKButtstock\HexagonKocherga\data\HexagonKocherga.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\AKButtstock\HexagonKocherga\data\HexagonKocherga.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\AKButtstock\HexagonKocherga\data\HexagonKocherga.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\AKButtstock\HexagonKocherga\data\HexagonKocherga.rvmat"
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