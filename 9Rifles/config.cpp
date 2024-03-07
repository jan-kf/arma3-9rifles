class CfgPatches 
{ 
    class UK_9Rifles 
    { 
        units[] = {
            "UK_9Rifles", 
            "Flag_UK_9Rifles_F",
            "Banner_01_9Rifles_F",
            "Land_PaperBox_01_small_closed_barrisonprime_F"
        }; 
        requiredAddons[] = {
            "A3_Characters_F", 
            "A3_Structures_F_Mil",
            "A3_Structures_F_Orange_Humanitarian",
            "A3_Supplies_F_Exp"
        }; 
        requiredVersion = 0.1; 
        weapons[] = {}; 
    }; 
}; 

//************************************************************************************************************************************************************************************************
//*****        Factions                  *********************************************************************************************************************************************************
//************************************************************************************************************************************************************************************************
class cfgFactionClasses 
{ 
    class UK_9Rifles 
    { 
        displayName = "9 Rifles"; 
        priority = 3; // Position in list. 
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = ""; //Custom Icon 
    };  
};

// class CfgUnitInsignia
// {
//     class Custom_Insignia
//     {
//         displayName = "My Custom Patch"; // Name displayed in Arsenal
//         author = "Astartes"; // Author displayed in Arsenal
//         texture = "9Rifles\UI\custom_patch_co.paa"; // Image path
//         textureVehicle = ""; // Does nothing currently, reserved for future use
//     };
// }; 

class UniformSlotInfo 
{ 
    slotType = 0; 
    linkProxy = "-"; 
}; 

class CfgUnitInsignia {
    class UK_9Rifles_Patch {
        displayName = "9 Rifles"; 
        author = "Yoshi";
        texture = "9Rifles\Data\Patches\uk9riflesPatch.paa"; 
        textureVehicle = ""; // Leave empty
    };
	class UK_4Commando_big4_Patch {
        displayName = "4 Commando [Big 4]"; 
        author = "Yoshi";
        texture = "9Rifles\Data\Patches\uk4commandoBig4Patch.paa"; 
        textureVehicle = ""; // Leave empty
    };
	class UK_4Commando_fullName_Patch {
        displayName = "4 Commando [name]"; 
        author = "Yoshi";
        texture = "9Rifles\Data\Patches\uk4commandoNamePatch.paa"; 
        textureVehicle = ""; // Leave empty
    };
};

class CfgVehicles 
{     
    //************************************************************************************************************************************************************************************************
    //*****             Units                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    // class B_Soldier_F; 
    
    // class UK_9Rifles_Rifleman: B_soldier_F {
    //     author = "Astartes"; 
    //     _generalMacro = "B_soldier_F"; 
    //     scope = 2; 
    //     displayName = "Custom Soldier"; 
    //     identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
    //     genericNames = "NATOMen"; 
    //     faction = "UK_9Rifles";
    //     model = "\A3\characters_f\BLUFOR\b_soldier_01.p3d"; //Default NATO 
    //     uniformClass = "Custom_Camo"; 
    //     hiddenSelections[] = {"Camo","Insignia"}; 
    //     hiddenSelectionsTextures[] = {"9Rifles\Data\uk_nato.paa"};
    //     // hiddenSelectionsMaterials[] = {"9Rifles\Data\custom_camo.rvmat"};  
    //      weapons[] = {"arifle_TRG20_ACO_Flash_F","Throw","Put"}; 
    //     respawnWeapons[] = {"arifle_TRG20_ACO_Flash_F","Throw","Put"}; 
    //     magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"}; 
    //     respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
    //     linkedItems[] = {"Custom_Vest1", "ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
    //     respawnLinkedItems[] = {"Custom_Vest1","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; 
    // };

    // class LandVehicle;

    class B_Heli_Light_01_F;

    class BarrisonPrime_MH6: B_Heli_Light_01_F
    {
        side = 1;
        scope = 2;
        crew = "B_Helipilot_F";
        faction = "UK_9Rifles";
        displayName = "Barrison Prime MH-6 Hummingbird";
        hiddenSelections[] = {"Camo1"};
        hiddenSelectionsTextures[] = {"9Rifles\Data\barrisonprime_heli_mh6.paa"};
        class TextureSources {
            class BarrisonPrimeSkin {
                displayName = "Barrison Prime Skin";
                author = "YourName";
                textures[] = {"9Rifles\Data\barrisonprime_heli_mh6.paa"};
            };
        };
    };

    // **********      FLAGS        ************

    class FlagCarrierCore;
	class FlagCarrier: FlagCarrierCore
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="FlagCarrier";
		scope=0;
		scopeCurator=0;
		displayName="";
		model="\a3\Structures_F\Mil\Flags\Mast_F.p3d";
		icon="iconObject_circle";
		editorSubcategory="EdSubcat_Flags";
		vehicleClass="Flag";
		cost=1000;
		keepHorizontalPlacement=1;
		accuracy=1000;
		animated=0;
		nameSound="obj_flag";
		supplyRadius=2;
		hiddenSelections[]=
		{
			"Camo_1"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F\Mil\Flags\Data\Mast_civ_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Structures_F\Mil\Flags\Data\Mast_civ.rvmat"
		};
	};
    class Flag_UK_9Rifles_F: FlagCarrier
    {
        author="Yoshi";
        class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"flag",
					0
				}
			};
			hide[]={};
			verticalOffset=3.977;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="9Rifles\Data\Flags\Flag_9rifles_F.jpg"; // Correct use, copy this for future ref
		_generalMacro="Flag_UK_9Rifles_F";
		scope=2;
		scopeCurator=2;
		displayName = "Flag (9 Rifles)";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '9Rifles\Data\Flags\flag_9rifles_co.paa'";
		};
    };

    // **********      BANNERS        ************

    class NonStrategic;
	class Banner_01_base_F: NonStrategic
	{
		DLC="ORANGE";
		scope=0;
		scopeCurator=0;
		model="\a3\Structures_F_Orange\Humanitarian\Flags\Banner_01_F.p3d";
		icon="iconObject_10x1";
		editorCategory="EdCat_Signs";
		editorSubcategory="EdSubcat_Flags";
		vehicleClass="Flag";
		cost=1000;
		keepHorizontalPlacement=1;
		destrType="DestructNo";
		class DestructionEffects
		{
		};
		accuracy=1000;
		animated=0;
		nameSound="obj_flag";
		hiddenSelections[]=
		{
			"camo"
		};
		class Attributes
		{
			class ObjectTextureCustom0
			{
				displayName="$STR_3den_object_attribute_objecttexturecustom0_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom0";
				control="Edit";
				expression="_this setObjectTextureGlobal [0,_value]";
				defaultValue="getObjectTextures _this select 0";
			};
		};
	};
    class Banner_01_9Rifles_F: Banner_01_base_F
	{
		author="Yoshi";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.46900001;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="9Rifles\Data\Flags\Banner_01_9Rifles_F.jpg"; 
		_generalMacro="Banner_01_9Rifles_F";
		scope=2;
		scopeCurator=2;
		displayName="Banner (9 Rifles)";
		hiddenSelectionsTextures[]=
		{
			"9Rifles\Data\Flags\flag_9rifles_co.paa"
		};
	};
	class Banner_01_9Rifles_Falcon_F: Banner_01_base_F
	{
		author="Yoshi";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.46900001;
			verticalOffsetWorld=0;
			init="''";
		};
		// editorPreview="9Rifles\Data\Flags\Banner_01_9Rifles_F.jpg"; 
		_generalMacro="Banner_01_9Rifles_Falcon_F";
		scope=2;
		scopeCurator=2;
		displayName="Camp Falcon Banner (9 Rifles)";
		hiddenSelectionsTextures[]=
		{
			"9Rifles\Data\Flags\banner_falcon.paa"
		};
	};
	class Banner_01_9Rifles_Copper_F: Banner_01_base_F
	{
		author="Yoshi";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.46900001;
			verticalOffsetWorld=0;
			init="''";
		};
		// editorPreview="9Rifles\Data\Flags\Banner_01_9Rifles_F.jpg"; 
		_generalMacro="Banner_01_9Rifles_Copper_F";
		scope=2;
		scopeCurator=2;
		displayName="Camp Copper Banner (9 Rifles)";
		hiddenSelectionsTextures[]=
		{
			"9Rifles\Data\Flags\banner_copper.paa"
		};
	};

    // **********      SUPPLIES        ************


    class Items_base_F;
	class Land_PaperBox_01_small_closed_base_F: Items_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=0.68000001;
		_generalMacro="Land_PaperBox_01_small_closed_base_F";
		scope=0;
		scopeCurator=0;
		model="\A3\Props_F_Orange\Humanitarian\Supplies\PaperBox_01_small_closed_F.p3d";
		DLC="Orange";
		icon="iconObject_1x1";
		editorSubcategory="EdSubcat_Humanitarian";
		hiddenSelections[]=
		{
			"Camo"
		};
		armor=1;
		waterLeakiness=0.15000001;
	};
    class Land_PaperBox_01_small_closed_barrisonprime_F: Land_PaperBox_01_small_closed_base_F
	{
		author="Yoshi";
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.207;
			verticalOffsetWorld=0;
			init="''";
		};
		// editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_PaperBox_01_small_closed_barrisonprime_F.jpg"; //TODO
		_generalMacro="Land_PaperBox_01_small_closed_barrisonprime_F";
		scope=2;
		scopeCurator=2;
		displayName="Cardboard Box (Barrison Prime)";
		hiddenSelectionsTextures[]=
		{
			"9Rifles\Data\Supplies\barrisonPrime_box.paa" 
		};
	};

    class ReammoBox_F;
    class Box_9Rifles_Medical_F: ReammoBox_F
	{
		author="Yoshi";
		mapSize=1.25;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.382;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Box_NATO_Uniforms_F.jpg"; //TODO
		_generalMacro="Box_9Rifles_Medical_F"; 
		scope=2;
		displayName="Medical Box (9 Rifles)"; 
		model="\A3\Supplies_F_Exp\Ammoboxes\Uniforms_Box_F.p3d";
		icon="\A3\Supplies_F_Exp\Ammoboxes\Data\UI\icon_equipment_box_ca.paa"; //TODO I think this is the icon on the item once it's placed?
		DLC="Expansion";
		editorCategory="EdCat_Supplies";
		maximumLoad=7000;

		ace_cargo_size = 2;  // Adjust the size as needed
		ace_cargo_canLoad = 1;  // 1 to allow loading into vehicles, 0 to disallow
		ace_dragging_canDrag = 1;  // 1 to enable dragging, 0 to disable
		ace_dragging_canCarry = 1;  // 1 to enable carrying, 0 to disable
		ace_dragging_dragPosition[] = {0, 1.2, 0};  // Adjust the position as needed
		ace_dragging_dragDirection = 0;  // Adjust the direction as needed
		ace_dragging_ignoreWeightCarry = 1;
		ace_dragging_ignoreWeight = 1;

		hiddenSelections[]=
		{
			"camo",
			"camo_signs"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Exp\Ammoboxes\Data\uniforms_box_blufor_co.paa", // Texture
			"9Rifles\Data\Supplies\medical_text.paa" // Text
		};
		class DestructionEffects
		{
			class HouseDestr
			{
				simulation="destroy";
				type="DelayedDestructionAmmoBox";
				position="";
				intensity=1;
				interval=1;
				lifeTime=6;
			};
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
    class Box_9Rifles_Ammo_F: Box_9Rifles_Medical_F
    {
        editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Box_NATO_Uniforms_F.jpg"; //TODO
		_generalMacro="Box_9Rifles_Ammo_F"; 
		displayName="Ammo/Ammunition Box (9 Rifles)"; 
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Exp\Ammoboxes\Data\uniforms_box_blufor_co.paa", // Texture
			"9Rifles\Data\Supplies\ammo_text.paa" // Text
		};
    };
    class Box_9Rifles_Trash_F: Box_9Rifles_Medical_F
    {
        editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Box_NATO_Uniforms_F.jpg"; //TODO
		_generalMacro="Box_9Rifles_Trash_F"; 
		displayName="Trash/Rubbish/Disposable Box (9 Rifles)"; 
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Exp\Ammoboxes\Data\uniforms_box_blufor_co.paa", // Texture
			"9Rifles\Data\Supplies\trash_text.paa" // Text
		};
    };
    class Box_9Rifles_Supplies_F: Box_9Rifles_Medical_F
    {
        editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Box_NATO_Uniforms_F.jpg"; //TODO
		_generalMacro="Box_9Rifles_Supplies_F"; 
		displayName="Supplies Box (9 Rifles)"; 
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Exp\Ammoboxes\Data\uniforms_box_blufor_co.paa", // Texture
			"9Rifles\Data\Supplies\supplies_text.paa" // Text
		};
    };
    class Box_9Rifles_Food_F: Box_9Rifles_Medical_F
    {
        editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Box_NATO_Uniforms_F.jpg"; //TODO
		_generalMacro="Box_9Rifles_Food_F"; 
		displayName="Rations Food/Drink Box (9 Rifles)"; 
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Exp\Ammoboxes\Data\uniforms_box_blufor_co.paa", // Texture
			"9Rifles\Data\Supplies\food_text.paa" // Text
		};
    };
    class Box_9Rifles_Equipment_F: Box_9Rifles_Medical_F
    {
        editorPreview="\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Box_NATO_Uniforms_F.jpg"; //TODO
		_generalMacro="Box_9Rifles_Equipment_F"; 
		displayName="Equipment Box (9 Rifles)"; 
		hiddenSelectionsTextures[]=
		{
			"\A3\Supplies_F_Exp\Ammoboxes\Data\uniforms_box_blufor_co.paa", // Texture
			"9Rifles\Data\Supplies\equipment_text.paa" // Text
		};
    };
};

class cfgWeapons 
{ 
    //********************************************************************************************************************************************************************************************
    //*****            Uniforms              *****************************************************************************************************************************************************
    //********************************************************************************************************************************************************************************************
    // class ItemCore; 
    // class UniformItem; 
    // class Uniform_Base: ItemCore 
    // { 
    //     class ItemInfo; 
    // }; 

    // class Custom_Camo: Uniform_Base 
    // { 
    //     scope = 2; 
    //     displayName = "Custom Camo"; 
    //     picture = "-"; 
    //     model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d"; 
    //     class ItemInfo : UniformItem { 
    //         uniformClass = "Custom_Uniform"; 
    //         containerClass = "Supply50"; 
    //         mass = 50; 
    //     }; 
    // }; 

    //************************************************************************************************************************************************************************************************
    //*****             Vests                *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
    
    // class VestItem; 
    // class Vest_Camo_Base: ItemCore 
    // { 
    //     class ItemInfo; 
    // }; 
     
    // class Custom_Vest1: Vest_Camo_Base 
    // { 
    //     scope = 2; 
    //     displayName = "Custom Platecarrier"; 
    //     picture = "-"; 
    //     model = "A3\Characters_F\BLUFOR\equip_b_Vest01"; 
    //     hiddenSelections[] = {"Camo"}; 
    //     hiddenSelectionsTextures[] = {"9Rifles\Data\uk_plates.paa"}; 
    //     class ItemInfo: VestItem 
    //     { 
    //         uniformModel = "A3\Characters_F\BLUFOR\equip_b_Vest01.p3d"; 
    //         containerClass = "Supply120"; 
    //         mass = 80; 
    //         armor = "5"; 
    //         passThrough = 0.3; 
    //         hiddenSelections[] = {"camo"}; 
    //     }; 
    // };

    //************************************************************************************************************************************************************************************************
    //*****            Headgear              *********************************************************************************************************************************************************
    //************************************************************************************************************************************************************************************************
     
    // class H_Beret_blk: ItemCore 
    // { 
    //     class ItemInfo; 
    // }; 
    // class Custom_Beret: H_Beret_blk
    // {
    //     displayName = "Rainbow Beret";
    //     picture = "";
    //     model = "\A3\Characters_F\Common\headgear_beret01";
    //     hiddenSelections[] = {"Camo"};
    //     hiddenSelectionsTextures[] = {"9Rifles\Data\rainbow_beret.paa"};
    //     class ItemInfo: ItemInfo
    //     {
    //         mass = 1;
    //         allowedSlots[] = {901,605};
    //         uniformModel = "\A3\Characters_F\Common\headgear_beret01";
    //         modelSides[] = {3,1};
    //         hiddenSelections[] = {"Camo"};
    //         armor = "0.1";
    //         passThrough = 0.75;
    //     };
    // };
    
}; 