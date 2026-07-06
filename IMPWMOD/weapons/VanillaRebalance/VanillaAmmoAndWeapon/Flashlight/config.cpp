class CfgPatches
{
    class DZ_Weapons_Lights_ModdedIMP
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]={"DZ_Data", "DZ_Weapons_Lights"};
    };
};
class cfgVehicles
{
    class Inventory_Base;
    class Switchable_Base;
    class UniversalLight : Switchable_Base
    {
        scope=2;
		NeedRis = 1;
    };
    class TLRLight : Switchable_Base
    {
        scope=2;
		NeedRis = 1;
    };
};