class CfgPatches {
	class IMP_Ammo_127x55 {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Magazines", "DZ_Weapons_Ammunition", "DZ_Scripts"};
	};
};

class CfgMagazines 
{
    class Ammunition_Base;

	class IMP_Ammo_127x55 : Ammunition_Base 
	{
		scope = 2;
		displayName = "$STR_IMP_12755";
		descriptionShort = "$STR_IMP_127421";
		model = "IMPWMOD\Weapons\Ammo\127x55\models\127x55.p3d";
		iconCartridge = 2;
		weight = 4;
		count = 15;
		itemSize[]={1,2};
		ammo = "IMP_Bullet_127x55";
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 100000;
					healthLevels[] = {
						{1.0, {"IMPWMOD\Weapons\Ammo\127x55\data\127x55.rvmat"}}, 
						{0.7, {"IMPWMOD\Weapons\Ammo\127x55\data\127x55.rvmat"}}, 
						{0.5, {"IMPWMOD\Weapons\Ammo\127x55\data\127x55.rvmat"}}, 
						{0.3, {"IMPWMOD\Weapons\Ammo\127x55\data\127x55.rvmat"}}, 
						{0.0, {"IMPWMOD\Weapons\Ammo\127x55\data\127x55.rvmat"}}
					};
				};
			};
		};
	};
};
class CfgVehicles
{
	class Box_Base;
	class IMP_Box_base;
	class IMP_AmmoBox_127x55_15Rnd: Box_Base
	{
		scope=2;
		displayName="$STR_IMP_127551";
		descriptionShort="";
		model="\IMPWMOD\Weapons\Ammo\AmmoBox\AmmoBoxIMP.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		itemSize[]={2,1};
		hiddenSelections[] = {"camoground"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Ammo\AmmoBox\127x55_box_co.paa"};
		weight=185;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"IMPWMOD\Weapons\Ammo\AmmoBox\IMP_box.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Ammo\AmmoBox\IMP_box.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Ammo\AmmoBox\IMP_box_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Ammo\AmmoBox\IMP_box_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"IMPWMOD\Weapons\Ammo\AmmoBox\IMP_box_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Resources
		{
			class IMP_Ammo_127x55
			{
				value=15;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
};
