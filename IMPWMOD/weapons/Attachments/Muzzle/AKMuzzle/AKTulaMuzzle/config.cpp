class CfgPatches {
	class IMP_Muzzle_AK_AKTulaMuzzle 
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

    class IMP_Muzzle_AK_AKTulaMuzzle : ItemSuppressor
    {
		scope=2;
		displayName="$STR_IMP_Muzzleantula";
		descriptionShort="$STR_IMP_MuzzleDescr";
		model="IMPWMOD\Weapons\Attachments\Muzzle\AKMuzzle\AKTulaMuzzle\models\AKTulaMuzzle.p3d";
		soundIndex=0;
		rotationFlags=17;
		reversed=0;
		weight=400;
		barrelArmor=6000.25;
		itemSize[]={2,1};
		itemModelLength=0.089000002;
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		lootCategory="Attachments";
		lootTag[]=
		{
			"Military_east",
			"Military_west",
			"Police",
			"Civilian"
		};
		inventorySlot="weaponMuzzleAK";
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