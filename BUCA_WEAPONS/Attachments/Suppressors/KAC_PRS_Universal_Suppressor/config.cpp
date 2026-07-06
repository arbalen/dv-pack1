class CfgPatches
{
	class BC_KAC_PRS_Universal_Suppressor
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Weapons_Muzzles"};
	};
};
class cfgVehicles
{
	class ItemSuppressor;
	class BC_KAC_PRS_Universal_Suppressor_Base: ItemSuppressor
	{
		scope=0;
		displayName="KAC PRS/QDC Suppressor";
		descriptionShort="Knight's Armament Company PRS QDC sound suppressor, which can be installed over a compatable Knight's Armament flashhider.";
		model="BUCA_WEAPONS\Attachments\Suppressors\KAC_PRS_Universal_Suppressor\BC_KAC_PRS_Universal_Suppressor.p3d";
		rotationFlags=17;
		reversed=0;
		weight=100;
		itemSize[]={3,1};
		itemModelLength=0.23;
		barrelArmor=2250;
		inventorySlot[]={"suppressorImpro","weaponMuzzleM4"};
		simulation="ItemSuppressor";
		dispersionModifier=-0.00050000002;
		dispersionCondition="true";
		noiseShootModifier=-0.89999998;
		recoilModifier[]={0.89999998,0.89999998,0.89999998};
		selectionFireAnim="zasleh";
		soundIndex=1;
		muzzlePos="usti hlavne";
		hiddenSelections[]={"cumbuca"};
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Attachments\Suppressors\KAC_PRS_Universal_Suppressor\data\suppressor_co.paa"};
		hiddenSelectionsMaterials[]={"BUCA_WEAPONS\Attachments\Suppressors\KAC_PRS_Universal_Suppressor\data\suppressor.rvmat"};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlashAssault
				{
					overrideParticle="weapon_shot_akm_02";
					onlyWithinHealthLabel[]={0,3};
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
					hitpoints=8;
					healthLevels[]=
					{{1,{"BUCA_WEAPONS\Attachments\Suppressors\KAC_PRS_Universal_Suppressor\data\suppressor.rvmat"}},
					{0.77999999,{"BUCA_WEAPONS\Attachments\Suppressors\KAC_PRS_Universal_Suppressor\data\suppressor.rvmat"}},
					{0.5,{"BUCA_WEAPONS\Attachments\Suppressors\KAC_PRS_Universal_Suppressor\data\suppressor_damage.rvmat"}},
					{0.30000001,{"BUCA_WEAPONS\Attachments\Suppressors\KAC_PRS_Universal_Suppressor\data\suppressor_damage.rvmat"}},
					{0,{"BUCA_WEAPONS\Attachments\Suppressors\KAC_PRS_Universal_Suppressor\data\suppressor_destruct.rvmat"}}};
				};
			};
		};
	};
	class BC_KAC_PRS_Universal_Suppressor_Black: BC_KAC_PRS_Universal_Suppressor_Base
	{
		scope=2;
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Attachments\Suppressors\KAC_PRS_Universal_Suppressor\data\suppressor_co.paa"};
	};
};
