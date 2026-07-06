class CfgPatches {
	class IMP_Suppressor_AK_Hexagon {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Muzzles", "DZ_Scripts"};
	};
};

class cfgVehicles {
	class ImprovisedSuppressor;
	class M4_Suppressor;

    class IMP_Suppressor_AK_Hexagon_Base : M4_Suppressor 
    {
        scope = 0;
        displayName="$STR_IMP_SuppHexa";
		descriptionShort="$STR_IMP_DescrSupp";
		model="IMPWMOD\Weapons\Attachments\Suppressor\AKSuppressor\Hexagon\models\Hexagon.p3d";
        weight=400;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
        lootCategory="Attachments";
		lootTag[]=
		{
            "Military_west"
		};
		inventorySlot[]=
		{
			"weaponMuzzleAK"
		};
        recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
        soundIndex=1;
        dispersionModifier=-9.9999997e-005;
        dispersionCondition="true";
        barrelArmor=15000.25;
        itemSize[]={3,1};
        itemModelLength=0.25;
        hiddenSelections[] = {"Hexagon"};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlashAssault
				{
					overrideParticle="weapon_shot_akm_02";
					onlyWithinHealthLabel[]={0,3};
				};
				class Ruined
				{
					onlyWithinHealthLabel[]={4,4};
					illuminateWorld=1;
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=2;
				maxOverheatingValue=20;
				overheatingDecayInterval=1;
				class SmokingBarrel
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0,0.1,0};
					onlyWithinRainLimits[]={0.2,1};
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = {
						{1.01,{"IMPWMOD\Weapons\Attachments\Suppressor\AKSuppressor\Hexagon\data\Hexagon.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Attachments\Suppressor\AKSuppressor\Hexagon\data\Hexagon.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Attachments\Suppressor\AKSuppressor\Hexagon\data\Hexagon_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Attachments\Suppressor\AKSuppressor\Hexagon\data\Hexagon_damage.rvmat"}},
						{0.01,{"IMPWMOD\Weapons\Attachments\Suppressor\AKSuppressor\Hexagon\data\Hexagon_destruct.rvmat"}}
					};
				};
			};
		};
    };
    class IMP_Suppressor_AK_Hexagon : IMP_Suppressor_AK_Hexagon_Base {
        scope = 2;
        hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Attachments\Suppressor\AKSuppressor\Hexagon\data\Hexagon_co.paa"};
    };
};