class CfgPatches
{
	class BC_338_Suppressor
	{
		units[]=
		{
			"BC_338_Suppressor"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Muzzles"
		};
	};
};
class cfgVehicles
{
	class ItemSuppressor;
	class BC_338_Suppressor_Base: ItemSuppressor
	{
		scope=0;
		displayName="Глушитель FN-EVOLYS";
		descriptionShort="Глушитель FN-EVOLYS";
		model="BUCA_WEAPONS\Attachments\Suppressors\338_Suppressor\BC_338_Suppressor.p3d";
		rotationFlags=17;
		reversed=0;
		weight=100;
		itemSize[]={3,1};
		itemModelLength=0.2;
		barrelArmor=3500;
		lootCategory="Attachments";
		inventorySlot[]=
		{
			"BC_338_Suppressor"
		};
		simulation="ItemSuppressor";
		dispersionModifier=-0.00050000002;
		dispersionCondition="true";
		noiseShootModifier=-0.94999999;
		recoilModifier[]={0.85000002,0.85000002,0.85000002};
		swayModifier[]={1.1,1.1,1.1};
		selectionFireAnim="zasleh";
		soundIndex=1;
		muzzlePos="usti hlavne";
		hiddenSelections[]=
		{
			"camo"
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlashAssault
				{
					overrideParticle="weapon_shot_fnx_02";
					onlyWithinHealthLabel[]={0,3};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=10;
				maxOverheatingValue=30;
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
	};
	class BC_338_Suppressor: BC_338_Suppressor_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Attachments\Suppressors\338_Suppressor\data\BC_338_Suppressor_co.paa"
		};
	};
};
class CfgSlots
{
	class Slot_BC_338_Suppressor
	{
		name="BC_338_Suppressor";
		displayName="Buca's 338 Suppressor";
		ghostIcon="supressor";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyBC_338_Suppressor: ProxyAttachment
	{
		scope=2;
		inventorySlot="BC_338_Suppressor";
		model="BUCA_WEAPONS\Attachments\Suppressors\338_Suppressor\BC_338_Suppressor.p3d";
	};
};
