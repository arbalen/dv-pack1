class CfgPatches {
	class IMP_Weapons_Suppressor_338 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Muzzles", "DZ_Scripts"};
	};
};

class cfgVehicles 
{
	class ItemSuppressor;

    class IMP_Supp_338Muzzle : ItemSuppressor
    {
		scope=0;
		displayName="$STR_IMP_Supp338muzz";
		descriptionShort="$STR_IMP_DescrSupp";
		model="IMPWMOD\Weapons\Attachments\Suppressor\Muzzle338\models\IMP_Muzzle338.p3d";
		soundIndex=0;
		rotationFlags=17;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		reversed=0;
		weight=600;
		itemSize[]={2,1};
		itemModelLength=0.089000002;
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		lootCategory="Attachments";
		barrelArmor=15000.25;
		lootTag[]=
		{
			"Military_east",
			"Military_west",
			"Police",
			"Civilian"
		};
		inventorySlot="Suppressor_338";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=4;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"DZ\weapons\attachments\data\mosin_compensator.rvmat"
							}
						},
						
						{
							0.6,
							
							{
								"DZ\weapons\attachments\data\mosin_compensator.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\mosin_compensator_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"DZ\weapons\attachments\data\mosin_compensator_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\mosin_compensator_destruct.rvmat"
							}
						}
					};
				};
			};
        };
	};
};