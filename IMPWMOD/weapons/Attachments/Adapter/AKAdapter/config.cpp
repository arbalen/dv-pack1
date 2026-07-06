class CfgPatches
{
	class IMP_AK_Adapter
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Supports", 
			"DZ_Scripts"
		};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class IMP_AK_Adapter: Inventory_Base
	{
		scope=2;
		displayName="$STR_IMP_AKAdapter";
		descriptionShort="$STR_IMP_AKAdapter1";
		model="\IMPWMOD\Weapons\Attachments\Adapter\AKAdapter\models\AKAdapter.p3d";
		rotationFlags=17;
		reversed=0;
		inventorySlot[] = {"weaponButtstockAK"};
		attachments[] = {"weaponButtstockM4"};
		weight=363;
		itemSize[]={3,1};
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		hiddenSelections[]=
		{
			"camoflage"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Attachments\Adapter\AKAdapter\data\AKAdapter_co.paa"
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
						{1.0,{"IMPWMOD\Weapons\Attachments\Adapter\AKAdapter\data\AKAdapter.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Attachments\Adapter\AKAdapter\data\AKAdapter.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Attachments\Adapter\AKAdapter\data\AKAdapter.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Attachments\Adapter\AKAdapter\data\AKAdapter.rvmat"}},
						{0.0,{"IMPWMOD\Weapons\Attachments\Adapter\AKAdapter\data\AKAdapter.rvmat"}}
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
	class IMP_AK_Adapter2: IMP_AK_Adapter
	{
		scope=2;
		model="\IMPWMOD\Weapons\Attachments\Adapter\AKAdapter\models\AKAdapter2.p3d";
		hiddenSelections[]=
		{
			"camoflage1",
			"camoflage2"
		};
		hiddenSelectionsTextures[]=
		{
			"impwmod\weapons\attachments\adapter\akadapter\data\akadapter3_co.paa",
			"impwmod\weapons\attachments\adapter\akadapter\data\tube_co.paa"
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
						{1.0,{"impwmod\weapons\attachments\adapter\akadapter\data\akadapter3.rvmat", "impwmod\weapons\attachments\adapter\akadapter\data\tube.rvmat"}},
						{0.7,{"impwmod\weapons\attachments\adapter\akadapter\data\akadapter3.rvmat", "impwmod\weapons\attachments\adapter\akadapter\data\tube.rvmat"}},
						{0.5,{"impwmod\weapons\attachments\adapter\akadapter\data\akadapter3.rvmat", "impwmod\weapons\attachments\adapter\akadapter\data\tube.rvmat"}},
						{0.3,{"impwmod\weapons\attachments\adapter\akadapter\data\akadapter3.rvmat", "impwmod\weapons\attachments\adapter\akadapter\data\tube.rvmat"}},
						{0.0,{"impwmod\weapons\attachments\adapter\akadapter\data\akadapter3.rvmat", "impwmod\weapons\attachments\adapter\akadapter\data\tube.rvmat"}}
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