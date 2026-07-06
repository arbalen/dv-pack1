class CfgPatches
{
	class IMP_MAR10_Sounds
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Sounds_Effects"};
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class Rifle_silencerInteriorTail_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class MAR10_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"MAR10_closeShot_SoundShader","MAR10_distShot_SoundShader"};
	};
	class MAR10_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[] = {"MAR10_tailDistant_SoundShader"};
	};
	class MAR10_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[] = {"MAR10_tailInterior_SoundShader"};
	};
	class MAR10_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[] = {"MAR10_silencerCloseShot_SoundShader","MAR10_silencerDistShot_SoundShader"};
	};
	class MAR10_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[] = {"MAR10_silencerTailInterior_SoundShader"};
	};
	class MAR10_silencerHomeMade_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[] = {"MAR10_silencerHomeMadeCloseShot_SoundShader","MAR10_silencerHomeMadeDistShot_SoundShader"};
	};
};
class CfgSoundShaders
{
	class closeShotRifle_SoundShader;
	class tailDistantRifle_SoundShader;
	class distShotRifle_SoundShader;
	class tailInteriorRifle_SoundShader;
	class base_closeShot_SoundShader;
	class base_HomeSilenced_closeShot_SoundShader;
	class base_HomeSilenced_distShot_SoundShader;
	class base_ProfessionalSilenced_tailInterior_SoundShader;
	class base_ProfessionalSilenced_distShot_SoundShader;
	class MAR10_closeShot_SoundShader: closeShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\MAR10\Sounds\mar10_fire_close",1}};
		volume = 1.0;
	};
	class MAR10_distShot_SoundShader: distShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\MAR10\Sounds\mar10_fire_distant",1}};
		volume = 1.0;
	};
	class MAR10_tailDistant_SoundShader: tailDistantRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\MAR10\Sounds\mar10_fire_distant",1}};
		volume = 1.7782794;
	};
	class MAR10_tailInterior_SoundShader: tailInteriorRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\MAR10\Sounds\mar10_fire_indoor_distant",1}};
	};
	class MAR10_silencerCloseShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\MAR10\Sounds\mar10_fire_silenced_close",1}};
		volume = 1.0;
	};
	class MAR10_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\MAR10\Sounds\mar10_fire_silenced_distant",1}};
		volume = 1.0;
	};
	class MAR10_silencerTailInterior_SoundShader: base_ProfessionalSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\MAR10\Sounds\mar10_fire_silenced_indoor_close",1}};
	};
	class MAR10_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\MAR10\Sounds\mar10_fire_silenced_close",1}};
		volume = 1.0;
	};
	class MAR10_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\MAR10\Sounds\mar10_fire_silenced_distant",1}};
		volume = 1.0;
	};
};