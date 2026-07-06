class CfgPatches
{
	class A2CHEY_Suppressor
	{
		units[]=
		{
			"BC_A2CHEY_Suppressor",
			"BC_A2CHEY_Suppressor_Black"
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
	class BC_A2CHEY_Suppressor_Base: ItemSuppressor
	{
		scope=0;
		displayName="Cheytac M200 Suppressor";
		descriptionShort="Fits only on the ARMA Cheytac M200";
		model="BUCA_WEAPONS\Attachments\Suppressors\CHEY_Suppressor\A2CHEYSup.p3d";
		rotationFlags=17;
		reversed=0;
		weight=100;
		itemSize[]={3,1};
		itemModelLength=0.2;
		barrelArmor=3500;
		lootCategory="Attachments";
		inventorySlot[]=
		{
			"A2CHEY_Suppressor"
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
	class BC_A2CHEY_Suppressor: BC_A2CHEY_Suppressor_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Attachments\Suppressors\CHEY_Suppressor\data\A2CSup_co.paa"
		};
	};
	class BC_A2CHEY_Suppressor_Black: BC_A2CHEY_Suppressor_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Attachments\Suppressors\CHEY_Suppressor\data\A2CSup_Black.paa"
		};
	};
};
class CfgSlots
{
	class Slot_A2CHEY_Suppressor
	{
		name="A2CHEY_Suppressor";
		displayName="Cheytac M200 Suppressor";
		ghostIcon="supressor";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyA2CHEYSup: ProxyAttachment
	{
		scope=2;
		inventorySlot="A2CHEY_Suppressor";
		model="BUCA_WEAPONS\Attachments\Suppressors\CHEY_Suppressor\A2CHEYSup.p3d";
	};
};
