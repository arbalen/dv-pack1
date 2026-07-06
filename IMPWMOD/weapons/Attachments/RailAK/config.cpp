class CfgPatches
{
	class IMP_RailAK
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
class CfgVehicles {
	class Inventory_Base;
	class IMP_RailAK: Inventory_Base
	{
		scope=2;
		displayName="$STR_IMP_Piccatiniplank";
		descriptionShort="$STR_IMP_RailDescr";
		model="IMPWMOD\Weapons\Attachments\RailAK\models\Rail.p3d";
		rotationFlags = 17;
        reversed = 0;
        weight = 150;
        itemSize[] = {2, 2};
        inventorySlot[] = {"Rail"};
        hasRailFunctionality = 1;
        dispersionModifier = -0.0075;
        dispersionCondition = "true";
        recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=70;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"IMPWMOD\Weapons\Attachments\RailAK\data\Rail.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Attachments\RailAK\data\Rail.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Attachments\RailAK\data\Rail.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Attachments\RailAK\data\Rail.rvmat"
							}
						},
						
						{
							0,
							
							{
								"IMPWMOD\Weapons\Attachments\RailAK\data\Rail.rvmat"
							}
						}
					};
				};
			};
		};
	};
};

class CfgSlots {
	class Slot_Rail
    {
        name = "Rail";
        displayName = "Rail";
        modGhostIcon = "set:Slots image:Rail";
    };
	
	class Slot_SwapOptic
    {
        name = "SwapOptic";
        displayName = "SwapOptic";
        modGhostIcon = "set:Slots image:SwapOptic";
    };
};

class CfgNonAIVehicles {
	class ProxyAttachment;
	
	class ProxyRail : ProxyAttachment {
		scope = 2;
		inventorySlot = "Rail";
		model = "\IMPWMOD\Weapons\Attachments\RailAK\models\Rail.p3d";
	};
};