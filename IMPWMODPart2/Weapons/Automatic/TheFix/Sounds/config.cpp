class CfgPatches
{
	class IMP_TheFix_Sounds
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	class IMP_TheFix_Shot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMODPart2\Weapons\Automatic\TheFix\Sounds\TheFix_close",1}};
		volume = 0.7;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class IMP_TheFix_midshot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMODPart2\Weapons\Automatic\TheFix\Sounds\TheFix_med",1}};
		volume = 0.4;
		range = 1500;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1500,0}};
	};
	class IMP_TheFix_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMODPart2\Weapons\Automatic\TheFix\Sounds\TheFix_distant",1}};
		volume = 0.2;
		range = 1500;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1500,1}};
	};
	class IMP_TheFix_Suppressed_Shot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMODPart2\Weapons\Automatic\TheFix\Sounds\TheFix_silenced_close",1}};
		volume = 0.6;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class IMP_TheFix_Suppressed_midshot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMODPart2\Weapons\Automatic\TheFix\Sounds\TheFix_silenced_close",1}};
		volume = 0.1;
		range = 300;
		rangeCurve[] = {{0,0.2},{50,1},{100,0},{200,0}};
	};
	class IMP_TheFix_Suppressed_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMODPart2\Weapons\Automatic\TheFix\Sounds\TheFix_silenced_distant",1}};
		volume = 0.05;
		range = 400;
		rangeCurve[] = {{0,0.2},{50,1},{100,0},{200,0}};
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class rifle_tail_Base_soundset;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class Rifle_silencerHomemadeTail_Base_SoundSet;
	class Rifle_silencerInteriorHomeMadeTail_Base_SoundSet;
	class baseCharacter_SoundSet;
	class IMP_TheFix_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"IMP_TheFix_Shot_SoundShader","IMP_TheFix_midShot_SoundShader","IMP_TheFix_distShot_SoundShader"};
	};
	class IMP_TheFix_Suppressed_Shot_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[] = {"IMP_TheFix_Suppressed_Shot_SoundShader","IMP_TheFix_Suppressed_midshot_SoundShader","IMP_TheFix_Suppressed_distShot_SoundShader"};
	};
};