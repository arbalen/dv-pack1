class CfgPatches
{
	class IMP_Clip
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	
	class IMP_ClipMag: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_IMP_CLIPP";
		descriptionShort = "$STR_IMP_CLIPPD";
		model = "IMPWMOD\Weapons\Attachments\Clip\models\Clip.p3d";
		isMeleeWeapon = 1;
		weight = 100;
		itemSize[] = {1,2};
		rotationFlags = 17;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\weapons\attachments\data\m4_mag.rvmat"}},{0.7,{"DZ\weapons\attachments\data\m4_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\data\m4_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\m4_mag_damage.rvmat"}},{0,{"DZ\weapons\attachments\data\m4_mag_destruct.rvmat"}}};
				};
			};
		};
	};
};