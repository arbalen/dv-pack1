class CfgPatches
{
	class IMP_Sounds
	{
		units[]={};
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
    class IMP_SoundShaderClose
    {
        samples[] = {{"IMPWMODPart2\Weapons\Automatic\Sounds\Rifle1Close",1}}; 
        volume = 1; 
        range = 50; 
        rangeCurve = "closeShotCurve"; 
    };
    class IMP_SoundShaderMid
    {
        samples[] = {{"IMPWMODPart2\Weapons\Automatic\Sounds\Rifle1Mid",1}}; 
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
    class IMP_SoundShaderLong
    {
        samples[] = {{"IMPWMODPart2\Weapons\Automatic\Sounds\Rifle1Long",1}}; 
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
	
	
	class IMP_RifleShot_SoundShaderClose
    {
        samples[] = {{"IMPWMODPart2\Weapons\Automatic\Sounds\RifleShot1",1}}; 
        volume = 1; 
        range = 50; 
        rangeCurve = "closeShotCurve"; 
    };
    class IMP_RifleShot_SoundShaderMid
    {
        samples[] = {{"IMPWMODPart2\Weapons\Automatic\Sounds\RifleShot2",1}}; 
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
    class IMP_RifleShot_SoundShaderLong
    {
        samples[] = {{"IMPWMODPart2\Weapons\Automatic\Sounds\RifleShot3",1}}; 
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
	
	
	class IMP_Suppressed_RifleShot_SoundShaderClose
	{
		samples[] = {{"IMPWMODPart2\Weapons\Automatic\Sounds\RifleShot1Suppressed",1}};
		range = 50;
		volume = 1.166836;
	};
	class IMP_Suppressed_RifleShot_SoundShaderMid
	{
		samples[] = {{"IMPWMODPart2\Weapons\Automatic\Sounds\RifleShot2Suppressed",1}};
		volume = 0.9;
		range = 150;
	};
	class IMP_FG42_SoundShaderClose
    {
        samples[] = {{"IMPWMODPart2\Weapons\Automatic\Sounds\Rifle2Close",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 1; // Edit this
        range = 50; // This is how close/far you have to be in order to hear said sound
        rangeCurve = "closeShotCurve"; // Have a look through over configs to find out what this does!
    };
    class IMP_FG42_SoundShaderMid
    {
        samples[] = {{"IMPWMODPart2\Weapons\Automatic\Sounds\Rifle2Close",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 0.56234133; // Edit this
        range = 1500; // This is how close/far you have to be in order to hear said sound
        rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1500,0}
		}; // Have a look through over configs to find out what this does!
    };
    class IMP_FG42_SoundShaderLong
    {
        samples[] = {{"IMPWMODPart2\Weapons\Automatic\Sounds\Rifle2Close",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 1; // Edit this
        range = 1500; // This is how close/far you have to be in order to hear said sound
        rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{1500,1}
		}; // Have a look through over configs to find out what this does!
    };
	
	
	class IMP_New_FG42_SoundShaderClose
    {
        samples[] = {{"IMPWMODPart2\Weapons\Automatic\Sounds\FG42",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 1; // Edit this
        range = 50; // This is how close/far you have to be in order to hear said sound
        rangeCurve = "closeShotCurve"; // Have a look through over configs to find out what this does!
    };
    class IMP_New_FG42_SoundShaderMid
    {
        samples[] = {{"IMPWMODPart2\Weapons\Automatic\Sounds\FG42",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 0.56234133; // Edit this
        range = 1500; // This is how close/far you have to be in order to hear said sound
        rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1500,0}
		}; // Have a look through over configs to find out what this does!
    };
    class IMP_New_FG42_SoundShaderLong
    {
        samples[] = {{"IMPWMODPart2\Weapons\Automatic\Sounds\FG42",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 1; // Edit this
        range = 1500; // This is how close/far you have to be in order to hear said sound
        rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{1500,1}
		}; // Have a look through over configs to find out what this does!
    };
	
	class IMP_NewTest_FG42_SoundShaderClose
    {
        samples[] = {{"IMPWMODPart2\Weapons\Automatic\Sounds\MG42",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 1; // Edit this
        range = 50; // This is how close/far you have to be in order to hear said sound
        rangeCurve = "closeShotCurve"; // Have a look through over configs to find out what this does!
    };
    class IMP_NewTest_FG42_SoundShaderMid
    {
        samples[] = {{"IMPWMODPart2\Weapons\Automatic\Sounds\MG42",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 0.56234133; // Edit this
        range = 1500; // This is how close/far you have to be in order to hear said sound
        rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1500,0}
		}; // Have a look through over configs to find out what this does!
    };
    class IMP_NewTest_FG42_SoundShaderLong
    {
        samples[] = {{"IMPWMODPart2\Weapons\Automatic\Sounds\MG42",1}}; //You DON'T need to put the .ogg at the end. the \sound part of the sample is the file you want it to read.
        volume = 1; // Edit this
        range = 1500; // This is how close/far you have to be in order to hear said sound
        rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{1500,1}
		}; // Have a look through over configs to find out what this does!
    };
	
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	class AssaultRifle_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMODPart2\Weapons\Automatic\Sounds\AR_close",1}};
		volume = 1.0;
	};
	class AssaultRifle_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMODPart2\Weapons\Automatic\Sounds\AR_mid",1}};
		volume = 0.56234133;
	};
	class AssaultRifle_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMODPart2\Weapons\Automatic\Sounds\AR_far",1}};
		volume = 1.0;
	};
	
	class base_ProfessionalSilenced_closeShot_SoundShader;
	class AssaultRifle_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"IMPWMODPart2\Weapons\Automatic\Sounds\AR_silenced_close",
				1
			}
		};
		volume=1;
	};
	class base_ProfessionalSilenced_midShot_SoundShader;
	class AssaultRifle_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"IMPWMODPart2\Weapons\Automatic\Sounds\AR_silenced_mid",
				1
			}
		};
		volume=0.56234133;
	};
	class base_ProfessionalSilenced_distShot_SoundShader;
	class AssaultRifle_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"IMPWMODPart2\Weapons\Automatic\Sounds\AR_silenced_mid",
				1
			}
		};
		volume=0.25;
	};
};
class CfgSoundSets
{
    class Rifle_Shot_Base_SoundSet;
    class IMP_Rifle1_SoundSet: Rifle_Shot_Base_SoundSet
    {
        soundShaders[] = {"IMP_SoundShaderClose","IMP_SoundShaderMid","IMP_SoundShaderLong"}; 
    };
	class IMP_RifleShot_SoundSet: Rifle_Shot_Base_SoundSet
    {
        soundShaders[] = {"IMP_RifleShot_SoundShaderClose","IMP_RifleShot_SoundShaderMid","IMP_RifleShot_SoundShaderLong"}; 
    };
	class IMP_Suppressed_RifleShot_SoundSet: Rifle_Shot_Base_SoundSet
    {
        soundShaders[] = {"IMP_Suppressed_RifleShot_SoundShaderClose","IMP_Suppressed_RifleShot_SoundShaderMid"}; 
    };
	class IMP_FG42_SoundSet: Rifle_Shot_Base_SoundSet
    {
        soundShaders[] = {"IMP_FG42_SoundShaderClose","IMP_FG42_SoundShaderMid","IMP_FG42_SoundShaderLong"}; 
    };
	class IMP_New_FG42_SoundSet: Rifle_Shot_Base_SoundSet
    {
        soundShaders[] = {"IMP_New_FG42_SoundShaderClose","IMP_New_FG42_SoundShaderMid","IMP_New_FG42_SoundShaderLong"}; 
    };
	class IMP_NewTest_FG42_SoundSet: Rifle_Shot_Base_SoundSet
    {
        soundShaders[] = {"IMP_NewTest_FG42_SoundShaderClose","IMP_NewTest_FG42_SoundShaderMid","IMP_NewTest_FG42_SoundShaderLong"}; 
    };
	class AssaultRifle_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"AssaultRifle_closeShot_SoundShader","AssaultRifle_midShot_SoundShader","AssaultRifle_distShot_SoundShader"};
	};
	class Rifle_silencerShot_Base_SoundSet;
	class AssaultRifle_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"AssaultRifle_silencerCloseShot_SoundShader",
			"AssaultRifle_silencerMidShot_SoundShader",
			"AssaultRifle_silencerDistShot_SoundShader",
			"M4_Closure_SoundShader"
		};
	};
};