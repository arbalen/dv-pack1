class CfgPatches
{
	class BC_Wrapped_Suppressor
	{
		units[]=
		{
			"BC_Wrapped_Suppressor"
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
	class BC_Wrapped_Suppressor_Base: ItemSuppressor
	{
		scope=0;
		displayName="Wrapped Suppressor";
		descriptionShort="Fits on most of the Semi-auto snipers";
		model="BUCA_WEAPONS\Attachments\Suppressors\Wrapped_Suppressor\BC_Wrapped_Suppressor.p3d";
		rotationFlags=17;
		reversed=0;
		weight=100;
		itemSize[]={3,1};
		itemModelLength=0.2;
		barrelArmor=3500;
		lootCategory="Attachments";
		inventorySlot[]=
		{
			"Wrapped_Suppressor"
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
			"body",
			"body2",
			"rope"
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
	class DamageSystem
	{
		class GlobalHealth
		{
			class Health
			{
				hitpoints=5000000;
				healthLevels[]=
				{
					
					{
						1,
						
						{
							"BUCA_WEAPONS\Attachments\Suppressors\Wrapped_Suppressor\data\body\body.rvmat",
							"BUCA_WEAPONS\Attachments\Suppressors\Wrapped_Suppressor\data\body2\body2.rvmat",
							"BUCA_WEAPONS\Attachments\Suppressors\Wrapped_Suppressor\data\Rope\rope"
						}
					},
					
					{
						0.69999999,
						
						{
							"BUCA_WEAPONS\Attachments\Suppressors\Wrapped_Suppressor\data\body\body.rvmat",
							"BUCA_WEAPONS\Attachments\Suppressors\Wrapped_Suppressor\data\body2\body2.rvmat",
							"BUCA_WEAPONS\Attachments\Suppressors\Wrapped_Suppressor\data\Rope\rope"
						}
					},
					
					{
						0.5,
						
						{
							"BUCA_WEAPONS\Attachments\Suppressors\Wrapped_Suppressor\data\body\body.rvmat",
							"BUCA_WEAPONS\Attachments\Suppressors\Wrapped_Suppressor\data\body2\body2.rvmat",
							"BUCA_WEAPONS\Attachments\Suppressors\Wrapped_Suppressor\data\Rope\rope"
						}
					},
					
					{
						0.30000001,
						
						{
							"BUCA_WEAPONS\Attachments\Suppressors\Wrapped_Suppressor\data\body\body.rvmat",
							"BUCA_WEAPONS\Attachments\Suppressors\Wrapped_Suppressor\data\body2\body2.rvmat",
							"BUCA_WEAPONS\Attachments\Suppressors\Wrapped_Suppressor\data\Rope\rope"
						}
					},
					
					{
						0,
						
						{
							"BUCA_WEAPONS\Attachments\Suppressors\Wrapped_Suppressor\data\body\body.rvmat",
							"BUCA_WEAPONS\Attachments\Suppressors\Wrapped_Suppressor\data\body2\body2.rvmat",
							"BUCA_WEAPONS\Attachments\Suppressors\Wrapped_Suppressor\data\Rope\rope.rvmat"
						}
					}
				};
			};
		};
	};
	class BC_Wrapped_Suppressor: BC_Wrapped_Suppressor_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Attachments\Suppressors\Wrapped_Suppressor\data\body\body_co.paa",
			"BUCA_WEAPONS\Attachments\Suppressors\Wrapped_Suppressor\data\body2\body2_co.paa",
			"BUCA_WEAPONS\Attachments\Suppressors\Wrapped_Suppressor\data\Rope\rope_co.paa"
		};
	};
};
class CfgSlots
{
	class Slot_Wrapped_Suppressor
	{
		name="Wrapped_Suppressor";
		displayName="Buca's Semis Suppressor";
		ghostIcon="set:BucaIcons image:SemisSuppressor";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyBC_Wrapped_Suppressor: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"Wrapped_Suppressor"
		};
		model="BUCA_WEAPONS\Attachments\Suppressors\Wrapped_Suppressor\BC_Wrapped_Suppressor.p3d";
	};
};
