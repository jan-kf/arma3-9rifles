class CfgPatches 
{ 
    class UK_9Rifles_3CB_Addons 
    { 
        units[] = {
            "BarrisonPrime_Ambulance",
			"UK9Rifles_31_Husky",
			"UK9Rifles_10_Panther",
			"UK9Rifles_31W_Warrior",
			"UK9Rifles_F1_Wildcat"
        }; 
        requiredAddons[] = {
			"UK3CB_BAF_Vehicles_LandRover",
			"UK3CB_BAF_Vehicles_Husky",
			"UK3CB_BAF_Vehicles_Panther",
			"UK3CB_BAF_Vehicles_Warrior_A3",
			"UK3CB_BAF_Vehicles_Wildcat",
            "UK_9Rifles"
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
		author="Yoshi";
		displayname="Barry's Ambulance (9 Rifles)";
		DLC="UK3CB_BAF_Vehicles";
		side = 1;
        scope = 2;
		scopeCurator = 2;
		faction = "UK_9Rifles_F";
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
	class UK3CB_BAF_Husky_Passenger_HMG_Green;
	class UK9Rifles_31_Husky: UK3CB_BAF_Husky_Passenger_HMG_Green
	{
		displayName="3-1 Husky (9 Rifles)";
		author="Yoshi";
		dlc="UK3CB_BAF_Vehicles";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="UK_9Rifles_F";
		editorPreview="\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_husky\data\ui\UK3CB_BAF_Husky_Passenger_HMG_Green.jpg";
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"9Rifles_Addon_3CB\Data\Vehicles\3-1CHusky.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_husky\data\huskyFrontEnd_green_co.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_husky\data\huskyMisc_heavy_green_co.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_husky\data\huskyRearEnd_green_co.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_husky\data\huskyUnderside_green_co.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_husky\data\huskyTyre_green_co.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_husky\data\huskyDecals_green_ca.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_husky\data\huskySeats_green_co.paa"
		};
	};
	class UK3CB_BAF_Panther_GPMG_Green_A;
	class UK9Rifles_10_Panther:UK3CB_BAF_Panther_GPMG_Green_A
	{
		author="Yoshi";
		scope=2;
		dlc="UK3CB_BAF_Vehicles";
		scopeCurator=2;
		side=1;
		faction="UK_9Rifles_F";
		displayName="1-0 Panther GPMG (9 Rifles)";
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"9Rifles_Addon_3CB\Data\Vehicles\1-0Apanther.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_panther\data\pantherCanvas_w_co.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_panther\data\pantherFrontEnd_w_co.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_panther\data\pantherMisc1_w_co.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_panther\data\pantherMisc8_w_co.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_panther\data\pantherParts_w_co.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_panther\data\huskyTyre_w_co.paa"
		};
	};
	class UK3CB_BAF_Warrior_A3_W_Cage;
	class UK9Rifles_31W_Warrior: UK3CB_BAF_Warrior_A3_W_Cage
	{
		author="Yoshi";
		scope=2;
		dlc="UK3CB_BAF_Vehicles";
		scopeCurator=2;
		side=1;
		faction="UK_9Rifles_F";
		displayname="3-1 Whiskey Warrior (9 Rifles)";
		editorPreview="\UK3CB_BAF_Vehicles\Addons\UK3CB_BAF_Vehicles_Warrior_A3\data\ui\UK3CB_BAF_Warrior_A3_W.jpg";
		hiddenSelectionsTextures[]=
		{
			"9Rifles_Addon_3CB\Data\Vehicles\31Wwarrior.paa",
			"9Rifles_Addon_3CB\Data\Vehicles\warrior2.paa",
			"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Warrior_a3\data\camonet_baf_co.paa",
			"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Warrior_a3\data\cage_baf_co.paa"
		};
	};
	class UK3CB_BAF_Wildcat_AH1_CAS_6D;
	class UK9Rifles_F1_Wildcat: UK3CB_BAF_Wildcat_AH1_CAS_6D
	{
		scope=2;
		scopeCurator=2;
		side=1;
		displayName="Falcon 1 Wildcat (9 Rifles)";
		faction="UK_9Rifles_F";
		hiddenSelectionsTextures[]=
		{
			"9Rifles_Addon_3CB\Data\Vehicles\WildcatFalcon1.paa",
			"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Wildcat\data\wildcat_details_baf_grey_co.paa",
			"",
			"",
			"",
			"",
			"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Wildcat\data\decals_ca.paa",
			"",
			"",
			"\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Wildcat\data\wildcat_base_baf_grey_army_co.paa"
		};
	};
};