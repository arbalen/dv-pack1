class CfgPatches
{
	class IMP_Mag_VAL_Coupled
	{
		units[] = {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Magazines",
			"DZ_Sounds_Effects",
			"DZ_Scripts"
		};
	};
};

class CfgMagazines
{
	class Mag_VAL_20Rnd;
	class IMP_Mag_VAL_CoupledTape_40Rnd: Mag_VAL_20Rnd
	{
		scope=2;
		displayName="$STR_IMP_VALm";
		descriptionShort="$STR_IMP_VALm1";
		model="IMPWMOD\Weapons\Attachments\Magazine\VALMagCoupled\models\VAL_MagCoupled_Tape.p3d";
		weight=1100;
		weightPerQuantityUnit=16;
		itemSize[]={2,3};
		count=40;
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		ammo="Bullet_9x39";
		ammoItems[]=
		{
			"Ammo_9x39",
			"Ammo_9x39AP"
		};
		tracersEvery=0;
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
								"DZ\weapons\attachments\magazine\data\val_mag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\magazine\data\val_mag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\magazine\data\val_mag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\magazine\data\val_mag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\magazine\data\val_mag_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet="MagRifle_fill_in_SoundSet";
					id=1;
				};
				class MagRifle_fill_loop
				{
					soundSet="MagRifle_fill_loop_SoundSet";
					id=2;
				};
				class MagRifle_fill_out
				{
					soundSet="MagRifle_fill_out_SoundSet";
					id=3;
				};
				class MagRifle_empty_in
				{
					soundSet="MagRifle_empty_in_SoundSet";
					id=4;
				};
				class MagRifle_empty_loop
				{
					soundSet="MagRifle_empty_loop_SoundSet";
					id=5;
				};
				class MagRifle_empty_out
				{
					soundSet="MagRifle_empty_out_SoundSet";
					id=6;
				};
				class MagPistol_fill_in
				{
					soundSet="MagPistol_fill_in_SoundSet";
					id=7;
				};
				class MagPistol_fill_loop
				{
					soundSet="MagPistol_fill_loop_SoundSet";
					id=8;
				};
				class MagPistol_fill_out
				{
					soundSet="MagPistol_fill_out_SoundSet";
					id=9;
				};
				class MagPistol_empty_in
				{
					soundSet="MagPistol_empty_in_SoundSet";
					id=10;
				};
				class MagPistol_empty_loop
				{
					soundSet="MagPistol_empty_loop_SoundSet";
					id=11;
				};
				class MagPistol_empty_out
				{
					soundSet="MagPistol_empty_out_SoundSet";
					id=12;
				};
			};
		};
	};
	class IMP_Mag_VAL_CoupledClip_40Rnd: IMP_Mag_VAL_CoupledTape_40Rnd
	{
		scope=2;
		displayName="$STR_IMP_VALm";
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		descriptionShort="$STR_IMP_VALm1";
		model="IMPWMOD\Weapons\Attachments\Magazine\VALMagCoupled\models\VAL_MagCoupled_Clip.p3d";
	};
};

class CfgNonAIVehicles {
	class ProxyAttachment;


	class ProxyVAL_MagCoupled_Clip : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Attachments\Magazine\VALMagCoupled\models\VAL_MagCoupled_Clip.p3d";
	};
	class ProxyVAL_MagCoupled_Tape : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Attachments\Magazine\VALMagCoupled\models\VAL_MagCoupled_Tape.p3d";
	};
};