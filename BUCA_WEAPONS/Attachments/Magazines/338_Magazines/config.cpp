class CfgPatches
{
	class BC_338_Magazines
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Weapons_Firearms","DZ_Weapons_Ammunition","DZ_Weapons_Magazines","DZ_Weapons_Muzzles","DZ_Weapons_Optics"};
		magazines[]={"BC_5Rnd_338_Magazine","BC_8Rnd_338_Magazine"};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class BC_338_Magazine_Base: Magazine_Base
	{
		scope=0;
		ammo="IMP_Bullet_408";
		ammoItems[]={"IMP_Ammo_408"};
		weight=230;
		isMeleeWeapon=0;
		tracersEvery=1;
	};
	class BC_5Rnd_338_Magazine: BC_338_Magazine_Base
	{
		scope=2;
		displayName="5Rnd .338 Magazine";
		descriptionShort="A 5 Round .338 Lapua Magnum magazine that R700-A5 / AWM / C14 Timberwolf uses";
		hiddenSelections[]={"cumbuca"};
		model="BUCA_WEAPONS\Attachments\Magazines\338_Magazines\BC_5Rnd_338_Magazine.p3d";
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Attachments\Magazines\338_Magazines\data\Magazine_co.paa"};
		hiddenSelectionsMaterials[]={"BUCA_WEAPONS\Attachments\Magazines\338_Magazines\data\Magazine.rvmat"};
		itemSize[]={2,1};
		count=5;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{{1,{"BUCA_WEAPONS\Attachments\Magazines\338_Magazines\data\Magazine.rvmat"}},
					{0.69999999,{"BUCA_WEAPONS\Attachments\Magazines\338_Magazines\data\Magazine.rvmat"}},
					{0.5,{"BUCA_WEAPONS\Attachments\Magazines\338_Magazines\data\Magazine_damage.rvmat"}},
					{0.30000001,{"BUCA_WEAPONS\Attachments\Magazines\338_Magazines\data\Magazine_damage.rvmat"}},
					{0,{"BUCA_WEAPONS\Attachments\Magazines\338_Magazines\data\Magazine_destruct.rvmat"}}};
				};
			};
		};
	};
	class BC_8Rnd_338_Extended_Magazine: BC_338_Magazine_Base
	{
		scope=2;
		displayName="8Rnd .338 LPM Extended Magazine";
		descriptionShort="A 8 Round .338 Lapua Magnum magazine that R700-A5 / AWM / C14 Timberwolf uses";
		hiddenSelections[]={"cumbuca"};
		model="BUCA_WEAPONS\Attachments\Magazines\338_Magazines\BC_8Rnd_338_Extended_Magazine.p3d";
		hiddenSelectionsTextures[]={"BUCA_WEAPONS\Attachments\Magazines\338_Magazines\data\ExtendedMagazine_co.paa"};
		hiddenSelectionsMaterials[]={"BUCA_WEAPONS\Attachments\Magazines\338_Magazines\data\ExtendedMagazine.rvmat"};
		itemSize[]={2,2};
		count=8;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{{1,{"BUCA_WEAPONS\Attachments\Magazines\338_Magazines\data\ExtendedMagazine.rvmat"}},
					{0.69999999,{"BUCA_WEAPONS\Attachments\Magazines\338_Magazines\data\ExtendedMagazine.rvmat"}},
					{0.5,{"BUCA_WEAPONS\Attachments\Magazines\338_Magazines\data\ExtendedMagazine_damage.rvmat"}},
					{0.30000001,{"BUCA_WEAPONS\Attachments\Magazines\338_Magazines\data\ExtendedMagazine_damage.rvmat"}},
					{0,{"BUCA_WEAPONS\Attachments\Magazines\338_Magazines\data\ExtendedMagazine_destruct.rvmat"}}};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyBC_5Rnd_338_Magazine: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="BUCA_WEAPONS\Attachments\Magazines\338_Magazines\BC_5Rnd_338_Magazine.p3d";
	};
};
