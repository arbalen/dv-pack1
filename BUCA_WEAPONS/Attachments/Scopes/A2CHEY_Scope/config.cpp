class CfgPatches
{
	class BC_A2CHEY_Scope
	{
		units[]=
		{
			"BC_A2CHEY_Scope",
			"BC_A2CHEY_Scope_Black"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class ItemOptics_Base;
	class BC_A2CHEY_Scope_Base: ItemOptics_Base
	{
		scope=0;
		displayName="Cheytac M200 Scope";
		descriptionShort="Arma Cheytac scope uses the Hunting Optic slot";
		model="BUCA_WEAPONS\Attachments\Scopes\A2CHEY_Scope\BC_A2CHEY_Scope.p3d";
		debug_ItemCategory=3;
		animClass="Binoculars";
		rotationFlags=4;
		reversed=0;
		weight=700;
		itemSize[]={4,1};
		inventorySlot[]=
		{
			"weaponOpticsHunting"
		};
		simulation="itemoptics";
		dispersionModifier=-0.001;
		dispersionCondition="true";
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		memoryPointCamera="eyeScope_temp";
		cameraDir="cameraDir";
		hiddenSelections[]=
		{
			"CUMBUCA"
		};
		simpleHiddenSelections[]=
		{
			"hide"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"BUCA_WEAPONS\Attachments\Scopes\A2CHEY_Scope\data\A2CHEY_Scope.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"BUCA_WEAPONS\Attachments\Scopes\A2CHEY_Scope\data\A2CHEY_Scope.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"BUCA_WEAPONS\Attachments\Scopes\A2CHEY_Scope\data\A2CHEY_Scope.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"BUCA_WEAPONS\Attachments\Scopes\A2CHEY_Scope\data\A2CHEY_Scope.rvmat"
							}
						},
						
						{
							0,
							
							{
								"BUCA_WEAPONS\Attachments\Scopes\A2CHEY_Scope\data\A2CHEY_Scope.rvmat"
							}
						}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			useModelOptics=1;
			modelOptics="BUCA_WEAPONS\Attachments\Scopes\A2CHEY_Scope\BC_A2CHEY_Reticle.p3d";
			preloadOpticType="BC_A2CHEY_Reticle";
			opticsDisablePeripherialVision=0.67000002;
			opticsFlare=1;
			opticsPPEffects[]=
			{
				"OpticsCHAbera3",
				"OpticsBlur1"
			};
			opticsZoomMin="0.3926/4";
			opticsZoomMax="0.3926/12";
			opticsZoomInit="0.3926/4";
			discretefov[]=
			{
				"0.3926/4",
				"0.3926/8",
				"0.3926/12"
			};
			discreteInitIndex=0;
			distanceZoomMin=100;
			distanceZoomMax=1000;
			discreteDistance[]={200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.43000001,0.1};
			PPLensProperties[]={0.30000001,0.15000001,0,0};
			PPBlurProperties=0.30000001;
		};
		class AnimationSources
		{
			class hide
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class rings_ris
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class rings_ris_pilot
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class rings_winchester
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class rings_winchester_pilot
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
		};
	};
	class BC_A2CHEY_Reticle: Inventory_Base
	{
		scope=0;
		model="BUCA_WEAPONS\Attachments\Scopes\A2CHEY_Scope\BC_A2CHEY_Reticle.p3d";
	};
	class BC_A2CHEY_Scope: BC_A2CHEY_Scope_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Attachments\Scopes\A2CHEY_Scope\data\A2CHEY_Scope_co.paa"
		};
	};
	class BC_A2CHEY_Scope_Black: BC_A2CHEY_Scope_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"BUCA_WEAPONS\Attachments\Scopes\A2CHEY_Scope\data\A2CHEY_Scope_Black.paa"
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyBC_A2CHEY_Scope: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponOptics";
		model="BUCA_WEAPONS\Attachments\Scopes\A2CHEY_Scope\BC_A2CHEY_Scope.p3d";
	};
};
