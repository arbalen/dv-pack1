class CfgPatches {
	class IMP_Ammo_338LM {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Weapons_Magazines", "DZ_Weapons_Ammunition", "DZ_Scripts"};
	};
};

class CfgMagazines 
{
	class Ammunition_Base;

	class IMP_Ammo_338LM : Ammunition_Base 
	{
		scope = 2;
		displayName="$STR_IMP_338lm";
		descriptionShort="$STR_IMP_338lm1";
		model = "IMPWMOD\Weapons\Ammo\338LM\models\IMP_338LM_Rounds.p3d";
		iconCartridge = 2;
		weight=4;
		count=20;
		itemSize[]={1,1};
		ammo = "IMP_Bullet_338LM";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000000;
					healthLevels[] = {
						{1.0,{"IMPWMOD\Weapons\Ammo\338LM\data\338lm.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Ammo\338LM\data\338lm.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Ammo\338LM\data\338lm.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Ammo\338LM\data\338lm.rvmat"}},
						{0.0,{"IMPWMOD\Weapons\Ammo\338LM\data\338lm.rvmat"}}
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
	class IMP_AmmoBox_338LM_100Rnd: IMP_Box_base
	{
		scope=2;
		displayName="$STR_IMP_ammobox338lm";
		descriptionShort="";
		model="\IMPWMOD\Weapons\Ammo\AmmoBox\AmmoBoxIMP.p3d";
		debug_ItemCategory=5;
		rotationFlags=17;
		itemSize[]={1,2};
		hiddenSelections[] = {"camoground"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Ammo\AmmoBox\338LM_box_co.paa"};
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
			class IMP_Ammo_338LM
			{
				value=100;
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
	class IMP_AmmoBox_338LM_20Rnd: Box_Base
	{
		scope=2;
		displayName="$STR_IMP_ammobox338lm";
		descriptionShort="";
		model="\IMPWMOD\Weapons\Ammo\AmmoBox\AmmoBoxIMP.p3d";
		debug_ItemCategory=5;
		itemSize[]={1,2};
		rotationFlags=17;
		hiddenSelections[] = {"camoground"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Ammo\AmmoBox\338LM_box_co.paa"};
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
			class IMP_Ammo_338LM
			{
				value=20;
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
