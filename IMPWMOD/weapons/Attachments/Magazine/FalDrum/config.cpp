class CfgPatches {
	class IMP_Magazine_FAL_Drum {
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

class cfgMagazines {
	class Magazine_Base;
	
	class IMP_Mag_Fal_Drum_50Rnd : Magazine_Base {
		scope = 2;
		displayName = "$STR_IMP_DrumFnFal";
		descriptionShort = "$STR_IMP_DrumFnFaldescr";
		model = "IMPWMOD\Weapons\Attachments\Magazine\FalDrum\models\Fal_Drum_50Rnd.p3d";
		weight = 500;
		itemSize[] = {2, 3};
		count = 50;
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		ammo = "Bullet_308Win";
		ammoItems[] = {"Ammo_308Win", "Ammo_308WinTracer"};
		tracersEvery = 0;
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 100;
					healthLevels[] = {
						{1.0, {"IMPWMOD\Weapons\Attachments\Magazine\FalDrum\data\FalDrum.rvmat"}}, 
						{0.7, {"IMPWMOD\Weapons\Attachments\Magazine\FalDrum\data\FalDrum.rvmat"}}, 
						{0.5, {"IMPWMOD\Weapons\Attachments\Magazine\FalDrum\data\FalDrum_damage.rvmat"}}, 
						{0.3, {"IMPWMOD\Weapons\Attachments\Magazine\FalDrum\data\FalDrum_damage.rvmat"}}, 
						{0.01, {"IMPWMOD\Weapons\Attachments\Magazine\FalDrum\data\FalDrum_destruct.rvmat"}}
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


	class ProxyFal_Drum_50Rnd : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Attachments\Magazine\FalDrum\models\Fal_Drum_50Rnd.p3d";
	};
};