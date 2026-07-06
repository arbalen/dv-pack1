class CfgPatches
{
	class IMP_M87R_Sounds
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Sounds_Effects",
			"DZ_Data",
			"DZ_Weapons_Firearms"
		};
	};
};
class CfgSoundShaders
{
    class baseCharacter_SoundShader;
	class BOM87R_Closure_SoundShader
	{
		samples[] = {{"DZ\sounds\weapons\firearms\SVD\SVD_closure_01",1},{"DZ\sounds\weapons\firearms\SVD\SVD_closure_02",1}};
		range = 5;
		volume = 0.4466836;
	};
	class BOM87R_closeShot_SoundShader
	{
		samples[] = {{"IMPWMODPart2\Weapons\Sniper\M87R\Sounds\M87R",1}};
		volume = 2;
		range = 200;
		rangeCurve = "closeShotCurve";
	};
	class BOM87R_midShot_SoundShader
	{
		samples[] = {{"IMPWMODPart2\Weapons\Sniper\M87R\Sounds\M87R",1}};
		volume = 1.5623413;
		range = 1500;
		rangeCurve[]=
        {
            {0,0},
            {50,0},
            {300,1},
            {1500,2}
        };
	};
	class BOM87R_distShot_SoundShader
	{
		samples[] = {{"IMPWMODPart2\Weapons\Sniper\M87R\Sounds\M87R",1}};
		volume = 1;
		range = 2000;
        rangeCurve[]=
		{
			{0,0.2},
			{200,1},
			{700,0},
			{2000,0}
		};	
	};
};
class CfgSoundSets
{
    class Rifle_Shot_Base_SoundSet;
	class IMP_M87R_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"BOM87R_closeShot_SoundShader","BOM87R_midShot_SoundShader","BOM87R_distShot_SoundShader","BOM87R_Closure_SoundShader"};
	};
};	