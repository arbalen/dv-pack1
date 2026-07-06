class CfgPatches {
	class IMP_Magazine_FAL_Coupled {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Magazines",
			"DZ_Scripts"
		};
	};
};

class cfgMagazines 
{
	class Magazine_Base;
	
	class IMP_Mag_FAL_CoupledTape_40Rnd : Magazine_Base {
		scope = 2;
		displayName = "$STR_IMP_MagFalcoupled";
		descriptionShort = "$STR_IMP_MagFalcoupleddescr";
		model = "IMPWMOD\Weapons\Attachments\Magazine\FalCoupled\models\FAL_MagCoupled_Tape.p3d";
		weight = 500;
		itemSize[] = {2, 3};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		count = 40;
		ammo = "Bullet_308Win";
		ammoItems[] = {"Ammo_308Win", "Ammo_308WinTracer"};
		tracersEvery = 0;
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 100;
					healthLevels[] = {
						{1.0, {"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}}, 
						{0.7, {"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}}, 
						{0.5, {"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}}, 
						{0.3, {"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}}, 
						{0.01, {"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}
					};
				};
			};
		};
		
		class AnimEvents {
			class SoundWeapon {
				class MagRifle_fill_in {
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				
				class MagRifle_fill_loop {
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				
				class MagRifle_fill_out {
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				
				class MagRifle_empty_in {
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				
				class MagRifle_empty_loop {
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				
				class MagRifle_empty_out {
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				
				class MagPistol_fill_in {
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				
				class MagPistol_fill_loop {
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				
				class MagPistol_fill_out {
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				
				class MagPistol_empty_in {
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				
				class MagPistol_empty_loop {
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				
				class MagPistol_empty_out {
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
	class IMP_Mag_FAL_CoupledClip_40Rnd : Magazine_Base {
		scope = 2;
		displayName = "$STR_IMP_MagFalcoupled";
		descriptionShort = "$STR_IMP_MagFalcoupleddescr";
		model = "IMPWMOD\Weapons\Attachments\Magazine\FalCoupled\models\FAL_MagCoupled_Clip.p3d";
		weight = 500;
		itemSize[] = {2, 3};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		count = 40;
		ammo = "Bullet_308Win";
		ammoItems[] = {"Ammo_308Win", "Ammo_308WinTracer"};
		tracersEvery = 0;
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 100;
					healthLevels[] = {
						{1.0, {"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}}, 
						{0.7, {"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}}, 
						{0.5, {"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}}, 
						{0.3, {"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}}, 
						{0.01, {"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}
					};
				};
			};
		};
		
		class AnimEvents {
			class SoundWeapon {
				class MagRifle_fill_in {
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				
				class MagRifle_fill_loop {
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				
				class MagRifle_fill_out {
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				
				class MagRifle_empty_in {
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				
				class MagRifle_empty_loop {
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				
				class MagRifle_empty_out {
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				
				class MagPistol_fill_in {
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				
				class MagPistol_fill_loop {
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				
				class MagPistol_fill_out {
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				
				class MagPistol_empty_in {
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				
				class MagPistol_empty_loop {
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				
				class MagPistol_empty_out {
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
};

class CfgNonAIVehicles {
	class ProxyAttachment;


	class ProxyFAL_MagCoupled_Clip : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Attachments\Magazine\FalCoupled\models\FAL_MagCoupled_Clip.p3d";
	};
	class ProxyFAL_MagCoupled_Tape : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Attachments\Magazine\FalCoupled\models\FAL_MagCoupled_Tape.p3d";
	};
};