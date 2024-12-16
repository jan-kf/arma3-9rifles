class CfgPatches 
{ 
    class UK_9Rifles_3CB_Addons 
    { 
        units[] = {
            "BarrisonPrime_Ambulance"
        }; 
        requiredAddons[] = {
			"UK3CB_BAF_Vehicles_LandRover",
            "UK_9Rifles_Core"
        }; 
        requiredVersion = 0.1; 
        weapons[] = {}; 
        skipWhenMissingDependencies=1;
    }; 
}; 

class CfgVehicles {
    class UK3CB_BAF_LandRover_Amb_Base;
	class BarrisonPrime_Ambulance: UK3CB_BAF_LandRover_Amb_Base
	{
		author="www.3commandobrigade.com";
		displayname="Barry's Ambulance (9 Rifles)";
		DLC="UK3CB_BAF_Vehicles";
		side = 1;
        scope = 2;
		scopeCurator = 2;
		faction = "UK_9Rifles";
		editorPreview="\UK3CB_BAF_Vehicles\addons\UK3CB_BAF_Vehicles_LandRover\data\ui\UK3CB_BAF_LandRover_Amb_Green_A.jpg";
        _generalMacro="B_AMB_9RIFLES_F";
		crew="B_Soldier_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_base_baf_green_co.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_hardtop_baf_green_co.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\lr_special_baf_green_co.paa",
			"9Rifles_Addon_3CB\Data\Vehicles\amb.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_landrover\data\flag_unionJack.paa"
		};
	};
};