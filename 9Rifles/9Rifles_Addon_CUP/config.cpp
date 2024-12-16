class CfgPatches 
{ 
    class UK_9Rifles_CUP_Addons 
    { 
        units[] = {
            "UK_9Rifles_Ridgback_HMG_11C",
			"UK_9Rifles_Ridgback_HMG_11D",
			"UK_9Rifles_Ridgback_HMG_12C",
			"UK_9Rifles_Ridgback_HMG_12D"
        }; 
        requiredAddons[] = {
			"CUP_WheeledVehicles_Ridgeback",
            "UK_9Rifles_Core"
        }; 
        requiredVersion = 0.1; 
        weapons[] = {}; 
        skipWhenMissingDependencies=1;
    }; 
}; 

class CfgVehicles {
	class CUP_B_Ridgback_HMG_GB_W;
	class UK_9Rifles_Ridgback_HMG_GB_W_BASE: CUP_B_Ridgback_HMG_GB_W
	{
		scope=1;
		scopeCurator=1;
		side=1;
		faction="UK_9Rifles";
		hiddenSelectionsMaterials[]=
		{
			"\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\tex1.rvmat",
			"\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\tex2.rvmat",
			"\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\tex3.rvmat",
			"\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\turretbig.rvmat"
		};
		editorPreview="CUP\WheeledVehicles\CUP_WheeledVehicles_Ridgeback\Data\preview\CUP_B_Ridgback_HMG_GB_W.jpg";
	};
	class UK_9Rifles_Ridgback_HMG_11C: UK_9Rifles_Ridgback_HMG_GB_W_BASE
	{
		scope=2;
		scopeCurator=2;
		displayName="1-1 Charlie Ridgeback (9 Rifles)";
		hiddenSelectionsTextures[]=
		{
			"\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex1_co.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex2_co.paa",
			"9Rifles_Addon_CUP\Data\Vehicles\1-1CRidgeback.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_turretbig_co.paa",
			"cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_bar_armourF_co.paa",
			"cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_bar_armourR_co.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex4_co.paa"
		};
	};
	class UK_9Rifles_Ridgback_HMG_11D: UK_9Rifles_Ridgback_HMG_GB_W_BASE
	{
		scope=2;
		scopeCurator=2;
		displayName="1-1 Delta Ridgeback (9 Rifles)";
		hiddenSelectionsTextures[]=
		{
			"\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex1_co.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex2_co.paa",
			"9Rifles_Addon_CUP\Data\Vehicles\1-1DRidgeback.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_turretbig_co.paa",
			"cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_bar_armourF_co.paa",
			"cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_bar_armourR_co.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex4_co.paa"
		};
	};
	class UK_9Rifles_Ridgback_HMG_12C: UK_9Rifles_Ridgback_HMG_GB_W_BASE
	{
		scope=2;
		scopeCurator=2;
		displayName="1-2 Charlie Ridgeback (9 Rifles)";
		hiddenSelectionsTextures[]=
		{
			"\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex1_co.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex2_co.paa",
			"9Rifles_Addon_CUP\Data\Vehicles\1-2CRidgeback.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_turretbig_co.paa",
			"cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_bar_armourF_co.paa",
			"cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_bar_armourR_co.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex4_co.paa"
		};
	};
	class UK_9Rifles_Ridgback_HMG_12D: UK_9Rifles_Ridgback_HMG_GB_W_BASE
	{
		scope=2;
		scopeCurator=2;
		displayName="1-2 Delta Ridgeback (9 Rifles)";
		hiddenSelectionsTextures[]=
		{
			"\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex1_co.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex2_co.paa",
			"9Rifles_Addon_CUP\Data\Vehicles\1-2DRidgeback.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_turretbig_co.paa",
			"cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_bar_armourF_co.paa",
			"cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_bar_armourR_co.paa",
			"\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex4_co.paa"
		};
	};
};