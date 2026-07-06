class CfgPatches
{
	class IMP_UZI_Sounds
	{
		units[]=
		{
			"UZI"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgSoundShaders
{
    class baseCharacter_SoundShader;
    class UZI_SoundShaderClose
    {
        samples[] = {{"IMPWMODPart2\Weapons\SMG\UZI\Sounds\UZIClose",1}};
        volume = 1.3;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class UZI_SoundShaderMid
    {
        samples[] = {{"IMPWMODPart2\Weapons\SMG\UZI\Sounds\UZIMid",1}};
        volume = 0.56234133;
        range = 1500;
        rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1500,0}
		};
    };
    class UZI_SoundShaderLong
    {
        samples[] = {{"IMPWMODPart2\Weapons\SMG\UZI\Sounds\UZILong",1}};
        volume = 1;
        range = 1500;
        rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{1500,1}
		};
    };
};
class CfgSoundSets
{
    class Rifle_Shot_Base_SoundSet;
    class UZI_SoundSet: Rifle_Shot_Base_SoundSet
    {
        soundShaders[] = {"UZI_SoundShaderClose","UZI_SoundShaderMid","UZI_SoundShaderLong"};
    };
};