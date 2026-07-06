class CfgPatches
{
	class IMP_W_Items_DuctTape
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class IMP_W_Items_DuctTape: Inventory_Base
	{
		scope=2;
		displayName="$STR_DTapeMagName";
		descriptionShort="$STR_DTapeMagDescr";
		model="IMPWMOD\Weapons\Attachments\Tape\models\DuctTape.p3d";
		isMeleeWeapon = 1;
		weight = 100;
		itemSize[] = {1,2};
		rotationFlags = 17;
		hiddenSelections[]=
		{
			"DuctTape"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Attachments\Tape\data\DuctTape_co.paa"
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
						{1.0,{"IMPWMOD\Weapons\Attachments\Tape\data\DuctTape.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Attachments\Tape\data\DuctTape.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Attachments\Tape\data\DuctTape_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Attachments\Tape\data\DuctTape_damage.rvmat"}},
						{0.0,{"IMPWMOD\Weapons\Attachments\Tape\data\DuctTape_destruct.rvmat"}}
					};
				};
			};
		};
	};
};