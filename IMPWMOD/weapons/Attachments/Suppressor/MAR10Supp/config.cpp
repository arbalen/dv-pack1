class CfgPatches
{
	class IMP_MAR10_Suppressor
	{
		units[]={"IMP_MAR10_Suppressor_Base","IMP_MAR10_Suppressor"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data", "DZ_Weapons_Muzzles"};
	};
};
class cfgVehicles
{
	class M4_Suppressor;
	class IMP_MAR10_Suppressor_Base: M4_Suppressor
	{
		scope=0;
		displayName="$STR_IMP_SuppMAR10";
		descriptionShort="$STR_IMP_DescrSupp"; 
		model="IMPWMOD\Weapons\Attachments\Suppressor\MAR10Supp\models\MAR10_Suppressor.p3d";
		rotationFlags=17;
		reversed=0;
		weight=200;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		itemSize[]={3,1};
		itemModelLength=0.148;
		barrelArmor=3281.25;
		lootCategory="Attachments";
		lootTag[]={"Military_west"};
		inventorySlot[]={"suppressorMAR"};
		simulation="ItemSuppressor";
		noiseShootModifier=-0.8;
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		dispersionModifier = -0.0007;
		dispersionCondition = "true";
		selectionFireAnim="zasleh";
		soundIndex=1;
		muzzlePos="usti hlavne";
		hiddenSelections[] = {"camo"};
		class DamageSystem 
		{
			class GlobalHealth 
			{
				class Health 
				{
					hitpoints = 4;
					healthLevels[] = 
					{
						{1.0, {"IMPWMOD\Weapons\Attachments\Suppressor\MAR10Supp\data\MAR10_suppressor.rvmat"}}, 
						{0.7, {"IMPWMOD\Weapons\Attachments\Suppressor\MAR10Supp\data\MAR10_suppressor.rvmat"}}, 
						{0.5, {"IMPWMOD\Weapons\Attachments\Suppressor\MAR10Supp\data\MAR10_suppressor_damage.rvmat"}}, 
						{0.3, {"IMPWMOD\Weapons\Attachments\Suppressor\MAR10Supp\data\MAR10_suppressor_damage.rvmat"}}, 
						{0.0, {"IMPWMOD\Weapons\Attachments\Suppressor\MAR10Supp\data\MAR10_suppressor_destruct.rvmat"}}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_fnx_02";
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
				shotsToStartOverheating=3;
				maxOverheatingValue=10;
				overheatingDecayInterval=1;
				class SmokeTrail
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0,0.1,0};
					onlyWithinOverheatLimits[]={0,1};
					onlyWithinRainLimits[]={0.2,1};
				};
			};
		};
	};
	class IMP_MAR10_Suppressor : IMP_MAR10_Suppressor_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\Suppressor\MAR10Supp\data\MAR10_Suppressor_co.paa"};
	};
};

class CfgSlots {
	class Slot_suppressorMAR
	{
		name = "suppressorMAR";
		displayName = "$STR_IMP_SuppMar10Name";
		modGhostIcon = "set:Slots image:AACHBSupp";
	};
};

class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyMAR10_Suppressor: ProxyAttachment
	{
		scope = 0;
		inventorySlot = "suppressorMAR";
		model="IMPWMOD\Weapons\Attachments\Suppressor\MAR10Supp\models\MAR10_Suppressor.p3d";
	};
};
