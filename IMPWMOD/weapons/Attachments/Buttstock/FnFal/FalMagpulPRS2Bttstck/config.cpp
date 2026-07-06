class CfgPatches
{
	class IMP_Bttstk_Fal_MagpulPRS2
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
	class IMP_Bttstk_Fal_MagpulPRS2: Inventory_Base
	{
		scope=2;
		displayName="Magpul PRS2";
		descriptionShort="$STR_IMP_FallButt";
		model="IMPWMOD\Weapons\Attachments\Buttstock\FnFal\FalMagpulPRS2Bttstck\models\FalMagpulPRS2Bttstck.p3d";
		rotationFlags=17;
		reversed=0;
		inventorySlot[]=
		{
			"IMP_Fal_Buttstock"
		};
		weight=363;
		itemSize[]={3,1};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={1,1,1};
		hiddenSelections[]=
		{
			"FalMagpulPRS2Bttstck"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Attachments\Buttstock\FnFal\FalMagpulPRS2Bttstck\data\FalMagpulPRS2Bttstck_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"IMPWMOD\Weapons\Attachments\Buttstock\FnFal\FalMagpulPRS2Bttstck\data\FalMagpulPRS2Bttstck.rvmat"
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
								"IMPWMOD\Weapons\Attachments\Buttstock\FnFal\FalMagpulPRS2Bttstck\data\FalMagpulPRS2Bttstck.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\FnFal\FalMagpulPRS2Bttstck\data\FalMagpulPRS2Bttstck.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\FnFal\FalMagpulPRS2Bttstck\data\FalMagpulPRS2Bttstck_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\FnFal\FalMagpulPRS2Bttstck\data\FalMagpulPRS2Bttstck_damage.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\FnFal\FalMagpulPRS2Bttstck\data\FalMagpulPRS2Bttstck_destruct.rvmat"
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

class CfgSlots {
	class Slot_IMP_Fal_Buttstock {
		name = "IMP_Fal_Buttstock";
		displayName = "$STR_IMP_SlotFalButts";
		modGhostIcon = "set:Slots image:Butts";
	};
};

class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyFalMagpulPRS2Bttstck: ProxyAttachment
	{
		scope=2;
		inventorySlot="IMP_Fal_Buttstock";
		model="IMPWMOD\Weapons\Attachments\Buttstock\FnFal\FalMagpulPRS2Bttstck\models\FalMagpulPRS2Bttstck.p3d";
	};
};