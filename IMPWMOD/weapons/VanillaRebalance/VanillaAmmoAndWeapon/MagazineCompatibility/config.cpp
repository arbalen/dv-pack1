class CfgPatches {
	class IMP_Magazine_Compatibility 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Magazines",
			"DZ_Scripts",
			"DZ_Weapons_Firearms_AKM",
			"DZ_Weapons_Firearms_AK101",
			"DZ_Weapons_Firearms_M4",
			"DZ_Weapons_Firearms_aug",
			"DZ_Weapons_Firearms_M16A2",
			"DZ_Weapons_Firearms_FAL",
			"DZ_Pistols_Glock",
			"DZ_Weapons_Firearms_SVD",
			"DZ_Weapons_Firearms_VSS",
			"DZ_Weapons_Firearms_AK74"
		};
	};
};
class cfgWeapons
{
	class Rifle_Base;
	class Pistol_Base;
	
	class M4A1_Base: Rifle_Base
	{
		magazines[] += 
		{
			"Mag_STANAG_60Rnd",
			"IMP_Mag_M4_Drum60Rnd",
			"IMP_Mag_M4_Cmag_100Rnd", 
			"IMP_Mag_M4_Drum_60Rnd",
			"IMP_Mag_M4_Gen2_30Rnd", 
			"IMP_Mag_HK_Polymer_30Rnd",
			"IMP_Mag_M4_Stanag_30Rnd", 
			"IMP_Mag_M4_Polymer_10Rnd",
			"IMP_Mag_M4_Polymer_20Rnd", 
			"IMP_Mag_M4_Polymer_30Rnd", 
			"IMP_Mag_M4_Polymer_40Rnd", 
			"IMP_Mag_M4_Stanag_100Rnd"
		};
	};
	class Aug_Base: Rifle_Base
	{
		magazines[] += 
		{
			"Mag_STANAG_60Rnd",
			"IMP_Mag_M4_Drum60Rnd",
			"IMP_Mag_M4_Cmag_100Rnd", 
			"IMP_Mag_M4_Drum_60Rnd",
			"IMP_Mag_M4_Gen2_30Rnd", 
			"IMP_Mag_HK_Polymer_30Rnd",
			"IMP_Mag_M4_Stanag_30Rnd", 
			"IMP_Mag_M4_Polymer_10Rnd",
			"IMP_Mag_M4_Polymer_20Rnd", 
			"IMP_Mag_M4_Polymer_30Rnd", 
			"IMP_Mag_M4_Polymer_40Rnd", 
			"IMP_Mag_M4_Stanag_100Rnd"
		};
	};
	class M16A2_Base: Rifle_Base
	{
		magazines[] += 
		{ 
			"Mag_STANAG_60Rnd",
			"IMP_Mag_M4_Drum60Rnd",
			"IMP_Mag_M4_Cmag_100Rnd", 
			"IMP_Mag_M4_Drum_60Rnd",
			"IMP_Mag_M4_Gen2_30Rnd", 
			"IMP_Mag_HK_Polymer_30Rnd",
			"IMP_Mag_M4_Stanag_30Rnd", 
			"IMP_Mag_M4_Polymer_10Rnd",
			"IMP_Mag_M4_Polymer_20Rnd", 
			"IMP_Mag_M4_Polymer_30Rnd", 
			"IMP_Mag_M4_Polymer_40Rnd", 
			"IMP_Mag_M4_Stanag_100Rnd"
		};
	};
	class AK101_Base: Rifle_Base
	{
		magazines[] +=
		{
			"Mag_AK101_30Rnd", 
			"Mag_AK101_30Rnd_Black",
			"Mag_AK101_30Rnd_Green",
			"IMP_Mag_AK_Arsenal_30Rnd"
		};
	};
	class AKM_Base: Rifle_Base
	{
		magazines[] +=
		{
			"IMP_Mag_AKM_Magpul_Black",
			"IMP_Mag_AKM_Magpul_Banana",
			"IMP_Mag_AKM_Magpul_FDE",
			"IMP_Mag_AKM_Magpul_Black_Tape_60Rnd",
			"IMP_Mag_AKM_Magpul_Black_Clip_60Rnd",
			"IMP_Mag_AK_Bakelyt_40Rnd",
			"IMP_Mag_AK_Custom_10Rnd",
			"IMP_Mag_AK_FabDefence_30Rnd",
			"IMP_Mag_AK_Izhmash_30Rnd",
			"IMP_Mag_AK_IzhmashSTD_30Rnd",
			"IMP_Mag_AK_MagpulPMag_30Rnd",
			"IMP_Mag_AK_Aluminium_30Rnd",
			"IMP_Mag_AK_ProDrum_75Rnd",
			"IMP_Mag_AK_Drum_50Rnd"
		};
	};
	class AK74_Base: Rifle_Base
	{
		magazines[] +=
		{
			"IMP_Mag_AK74_6L18_45Rnd",
			"IMP_Mag_AK74_6L20_30Rnd",
			"IMP_Mag_AK74_6L23_30Rnd",
			"IMP_Mag_AK74_6L23P_30Rnd",
			"IMP_Mag_AK74_6L26_45Rnd",
			"IMP_Mag_AK74_6L31_60Rnd",
			"IMP_Mag_AK74_DTSaiga_10Rnd",
			"IMP_Mag_AK74_DTSaiga_20Rnd",
			"IMP_Mag_AK74_PMag_30Rnd",
			"IMP_Mag_AK74_PMag_FDE_30Rnd",
			"IMP_Mag_AK74_Drum_95Rnd",
			"IMP_Mag_RPK16_Drum_90Rnd",
			"IMP_Mag_AK12_30Rnd",
			"IMP_Mag_AK12_Tape_60Rnd",
			"IMP_Mag_AK12_Clip_60Rnd"
		};
	};
	class FAL_Base: Rifle_Base
	{
		magazines[] += 
		{
			"Mag_FAL_20Rnd",
			"IMP_Mag_Fal_Drum_50Rnd",
			"IMP_Mag_FAL_CoupledTape_40Rnd",
			"IMP_Mag_FAL_CoupledClip_40Rnd"
		};
	};
	class Glock19_Base: Pistol_Base
	{
		magazines[] +=
		{
			"IMP_Mag_Glock_21Rnd",
			"IMP_Mag_Glock_30Rnd",
			"IMP_Drum_Glock_50Rnd"
		};
	};
	class SVD_Base: Rifle_Base
	{
		magazines[] +=
		{
			"IMP_Mag_SVD_CoupledTape_20Rnd",
			"IMP_Mag_SVD_CoupledClip_20Rnd"
		};
	};
	class VSS_Base: Rifle_Base
	{
		magazines[] +=
		{
			"IMP_Mag_VAL_CoupledTape_40Rnd",
			"IMP_Mag_VAL_CoupledClip_40Rnd",
			"IMP_Mag_VSS_CoupledTape_20Rnd",
			"IMP_Mag_VSS_CoupledClip_20Rnd",
			"IMP_Mag_VSS_30Rnd",
			"Mag_VSS_10Rnd",
			"Mag_VAL_20Rnd",
			"Mag_Vikhr_30Rnd"
		};
	};
	class ASVAL: VSS_Base
	{
		magazines[] +=
		{
			"IMP_Mag_VAL_CoupledTape_40Rnd",
			"IMP_Mag_VAL_CoupledClip_40Rnd",
			"IMP_Mag_VSS_CoupledTape_20Rnd",
			"IMP_Mag_VSS_CoupledClip_20Rnd",
			"IMP_Mag_VSS_30Rnd",
			"Mag_VSS_10Rnd",
			"Mag_VAL_20Rnd",
			"Mag_Vikhr_30Rnd"
		};
	};
	class Vikhr: VSS_Base
	{
		magazines[] +=
		{
			"IMP_Mag_VAL_CoupledTape_40Rnd",
			"IMP_Mag_VAL_CoupledClip_40Rnd",
			"IMP_Mag_VSS_CoupledTape_20Rnd",
			"IMP_Mag_VSS_CoupledClip_20Rnd",
			"IMP_Mag_VSS_30Rnd",
			"Mag_VSS_10Rnd",
			"Mag_VAL_20Rnd",
			"Mag_Vikhr_30Rnd"
		};
	};
};