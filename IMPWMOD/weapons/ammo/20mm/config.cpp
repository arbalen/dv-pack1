class CfgPatches {
	class IMP_Ammo_20mm {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Magazines", "DZ_Weapons_Ammunition", "DZ_Scripts"};
	};
};

class CfgMagazines 
{
    class Ammunition_Base;

	class IMP_Ammo_20mm : Ammunition_Base 
	{
		scope = 2;
		displayName = "$STR_IMP_20mm";
		descriptionShort = "$STR_IMP_20mmD";
		model = "IMPWMOD\Weapons\Ammo\20mm\models\20mm.p3d";
		iconCartridge = 2;
		weight = 30;
		itemSize[]={1,3};
		count = 10;
		ammo = "IMP_Bullet_20mm";
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 100;
					healthLevels[] = {
						{1.0, {"IMPWMOD\Weapons\Ammo\20mm\data\20mm.rvmat"}}, 
						{0.7, {"IMPWMOD\Weapons\Ammo\20mm\data\20mm.rvmat"}}, 
						{0.5, {"IMPWMOD\Weapons\Ammo\20mm\data\20mm_damage.rvmat"}}, 
						{0.3, {"IMPWMOD\Weapons\Ammo\20mm\data\20mm_damage.rvmat"}}, 
						{0.0, {"IMPWMOD\Weapons\Ammo\20mm\data\20mm_destruct.rvmat"}}
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
	class IMP_AmmoBox_20mm_5Rnd: IMP_Box_base
	{
		scope=2;
		displayName="$STR_20mmAboxName";
		descriptionShort="";
		model="\IMPWMOD\Weapons\Ammo\AmmoBox\AmmoBoxIMP.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		itemSize[]={2,1};
		hiddenSelections[] = {"camoground"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Ammo\AmmoBox\20mm_box_co.paa"};
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
			class IMP_Ammo_20mm
			{
				value=10;
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