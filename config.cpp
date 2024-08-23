class CfgPatches
{
    class Lean
    {
        units[] = {"Lean"};
        requiredVersion = 0.1;
        requiredAddons[] = {};
    };
};

class CfgMods
{
	class Lean
	{
		dir = "leanskyleansky";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "leanskyleansky";
		credits = "Chasir01";
		author = "Chasir01";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
        class defs
        {
            class worldScriptModule
            {
                files[] = {"leanskyleansky\4_world"};
            };
        };
	};
};

class CfgVehicles
{
	class Bottle_Base;
    class Lean_Base: Bottle_Base
    {
        scope = 2;
        displayName = "LeanBase";
        descriptionShort = "A 'cup' of Lean. You should not have this.";
        model = "\leanskyleansky\assets\stteacan.p3d";
        weight = 500;
        itemSize[] = {1,2};
        itemsCargoSize[] = {0,0};
        inventorySlot[] = {"CookingEquipment","DirectCookingA","DirectCookingB","DirectCookingC"};
        stackedRandom = 0;
        canBeDigged = 1;
        allowOwnedCargoManipulation = 1;
        varLiquidTypeInit = 512;
        liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536 + 131072 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
        destroyOnEmpty = 1;
        varQuantityDestroyOnMin = 1;
        varQuantityInit = 500;
        varQuantityMin = 0;
        varQuantityImax = 500;
    };
    class Lean_Lean: Lean_Base
    {
        displayName = "Lean";
        descriptionShort = "A 'cup' of Lean.";
        model = "\leanskyleansky\assets\stteacan.p3d";
        itemSize[] = {2,1};
        itemsCargoSize[] = {0,0};
        varLiquidTypeInit = 131072;
        destroyOnEmpty = 1;
        varQuantityDestroyOnMin = 1;
        varQuantityInit = 500;
        varQuantityMin = 0;
        varQuantityImax = 500;
    };
};

class cfgLiquidDefinitions
{
class Lean
    {
     type = 131072;
    displayName = "Lean";
    flammability = 50;
    class Nutrition
	    {
        fullnessIndex = 1;
        energy = 75;
        water = 200;
        nutritionalIndex = 75;
        toxicity = -10;
        };
	};
};
