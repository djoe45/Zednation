#include "CfgLoot.hpp"

class CfgBuildingLoot {
	class Default {
		zombieChance = 0.2;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {
			"Z_man_polo_1_F", "Z_man_polo_1_F_afro", "Z_man_polo_1_F_euro", "Z_man_polo_1_F_asia",
			"Z_man_polo_2_F", "Z_man_polo_2_F_afro", "Z_man_polo_2_F_euro", "Z_man_polo_2_F_asia",
			"Z_man_polo_3_F", "Z_man_polo_3_F_afro", "Z_man_polo_3_F_euro", "Z_man_polo_3_F_asia",
			"Z_man_polo_4_F", "Z_man_polo_4_F_afro", "Z_man_polo_4_F_euro", "Z_man_polo_4_F_asia",
			"Z_man_polo_5_F", "Z_man_polo_5_F_afro", "Z_man_polo_5_F_euro", "Z_man_polo_5_F_asia",
			"Z_man_polo_6_F", "Z_man_polo_6_F_afro", "Z_man_polo_6_F_euro", "Z_man_polo_6_F_asia",
			"Z_man_p_fugitive_F", "Z_man_p_fugitive_F_afro", "Z_man_p_fugitive_F_euro", "Z_man_p_fugitive_F_asia",
			"Z_man_p_beggar_F", "Z_man_p_beggar_F_afro", "Z_man_p_beggar_F_euro", "Z_man_p_beggar_F_asia",
			"Z_man_w_worker_F", "Z_scientist_F", "Z_man_hunter_1_F",
			"Z_man_p_shorts_1_F", "Z_man_p_shorts_1_F_afro", "Z_man_p_shorts_1_F_euro", "Z_man_p_shorts_1_F_asia",
			"Z_man_shorts_1_F", "Z_man_shorts_1_F_afro", "Z_man_shorts_1_F_euro", "Z_man_shorts_1_F_asia",
			"Z_man_shorts_2_F", "Z_man_shorts_2_F_afro", "Z_man_shorts_2_F_euro", "Z_man_shorts_2_F_asia",
			"Z_man_shorts_3_F", "Z_man_shorts_3_F_afro", "Z_man_shorts_3_F_euro", "Z_man_shorts_3_F_asia",
			"Z_man_shorts_4_F", "Z_man_shorts_4_F_afro", "Z_man_shorts_4_F_euro", "Z_man_shorts_4_F_asia"
		};
		lootChance = 0;
		lootPos[] = {};
		itemType[] = {};
		itemChance[] = {};
		hangPos[] = {};
		vehPos[] = {};
		isObjectHolder = 0;
		isBuildingPos = 0;
	};
	class Master {
		weapons[] = {
			"launch_NLAW_F",
			"launch_RPG32_F"
		};
	};
	class Ruins: Default {
		zombieChance = 0;
		lootChance = 0.1;
		lootPos[] = {};
		itemType[] =	{
			{"","trash"},
			{"","medical"},
			{"","food"}
		};
		itemChance[] =	{
			0.1,  //trash
			0.01, //medical
			0.05  //food
		};		
	};
	class Residential: Default {
		zombieChance = 0.3;
		maxRoaming = 2;
		zombieClass[] = {
			
		};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] =	{
			{"","trash"},
			{"","backpack"},
			{"","generic"},
//			{"","military"},
			{"","glasses_civilian"},
			{"","headgear_civilian"},
			{"","uniform_civilian"},
			{"SMG_01_F","weapon"},
			{"SMG_02_F","weapon"},
			{"hgun_PDW2000_F","weapon"},
			{"hgun_Pistol_heavy_01_F","weapon"},
			{"hgun_Pistol_heavy_02_F","weapon"},
			{"hgun_P07_F","weapon"},
			{"hgun_Rook40_F","weapon"},
			{"hgun_ACPC2_F","weapon"},
			{"ItemWatch","item"},
			{"ItemMap","item"},
			{"ItemCompass","item"},
			{"Binocular","item"},
			{"acc_lampflashlight","item"},
			{"ItemTent","magazine"},
			{"Battery_mag","magazine"},
			{"FMradio_Mag","magazine"},
			{"ChemlightBox","object"},
			{"itemCampingLight","magazine"},
			{"itemCanOpener","magazine"}
		};
		itemChance[] =	{
			0.60,    // trash
			0.01,	// backpack
			0.60,	// generic
//			0.10,	// military
			0.40,	// glasses_civilian
			0.30,	// headgear_civilian
			0.20,	// uniform_civilian
			0.02,	// SMG_01_F
			0.02,	// SMG_02_F
			0.02,	// hgun_PDW2000_F
			0.03,	// hgun_Pistol_heavy_01_F
			0.03,	// hgun_Pistol_heavy_02_F
			0.04,	// hgun_P07_F
			0.04,	// hgun_Rook40_F
			0.04,	// hgun_ACPC2_F
			0.05,	// ItemWatch
			0.03,	// ItemMap
			0.05,	// ItemCompass
			0.06,	// Binocular
			0.07,	// acc_lampflashlight
			0.01,	// ItemTent
			0.07,	// Battery_mag
			0.03,	// FMradio_Mag
			0.07,	// ChemlightBox	
			0.05,	// itemCampingLight
			0.05	// itemCanOpener
		};		
	};
	class Office: Residential {
		maxRoaming = 3;
		zombieClass[] = {
			
		};
	};
	class Industrial: Default {
		zombieChance = 0.4;
		zombieClass[] = {
			"Z_man_w_worker_F"
		};
		maxRoaming = 2;
		lootChance = 0.3;
		lootPos[] = {};
		itemType[] =	{
			{"","trash"},
			{"PartGeneric","magazine"},
			{"PartWheel","magazine"},
			{"PartFueltank","magazine"},
			{"PartEngine","magazine"},
			{"PartGlass","magazine"},
			{"PartVRotor","magazine"},
			{"ItemJerrycan","magazine"},
//			{"ItemJerrycanEmpty","magazine"},
			{"ItemToolbox","item"},
			{"ItemWire","magazine"},
			{"","generic"}
		};
		itemChance[] =	{
			0.60,	//trash
			0.04,	//PartGeneric
			0.02,	//PartWheel
			0.04,	//PartFueltank
			0.01,	//PartEngine
			0.04,	//PartGlass
			0.02,	//PartVRotor
			0.05,	//ItemJerrycan
//			0.05,	//ItemJerrycanEmpty
			0.04,	//ItemToolbox
			0.01,	//ItemWire
			0.60	//generic
		};
	};
	class Instrumental: Default {
		zombieChance = 0;
		lootChance = 0.3;
		lootPos[] = {};
		itemType[] =	{
			{"","trash"},
			{"ItemToolbox","item"},
			{"ItemEtool","item"},
			{"ItemWire","magazine"},
			{"ItemTent","magazine"},
			{"ItemTentDome","magazine"},
			{"ItemCamoNetBig","magazine"},
			{"ItemCamoNet","magazine"},
			{"ItemCamoNetOpen","magazine"},
			{"ItemSandbag","magazine"},
			{"PartWoodPile","magazine"},
			{"ItemJerrycan","magazine"},
			{"ItemJerrycanEmpty","magazine"},
			{"TrapBear","magazine"}
		};
		itemChance[] =	{
			0.08,	//trash
			0.02,	//ItemToolbox
			0.03,	//ItemEtool
			0.04,	//ItemWire
			0.01,	//ItemTent
			0.01,	//ItemTentDome
			0.01,	//ItemCamoNetBig
			0.01,	//ItemCamoNet
			0.01,	//ItemCamoNetOpen
			0.04,	//ItemSandbag
			0.06,	//PartWoodPile
			0.05,	//ItemJerrycan
			0.05,	//ItemJerrycanEmpty
			0.01	//TrapBear
		};
	};
	class Farm: Default {
		zombieChance = 0.3;
		maxRoaming = 3;
		zombieClass[] = {
			"Z_man_polo_1_F", "Z_man_polo_1_F_afro", "Z_man_polo_1_F_asia",
			"Z_man_polo_2_F", "Z_man_polo_2_F_afro", "Z_man_polo_2_F_asia",
			"Z_man_polo_3_F", "Z_man_polo_3_F_afro", "Z_man_polo_3_F_asia",
			"Z_man_polo_4_F", "Z_man_polo_4_F_afro", "Z_man_polo_4_F_asia",
			"Z_man_polo_5_F", "Z_man_polo_5_F_afro", "Z_man_polo_5_F_asia",
			"Z_man_polo_6_F", "Z_man_polo_6_F_afro", "Z_man_polo_6_F_asia",
			"Z_man_hunter_1_F"
		};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] =	{
			{"","trash"},
			{"ItemJerrycan","magazine"},
			{"PartWoodPile","magazine"},
			{"srifle_EBR_F","weapon"},
			{"srifle_DMR_01_F","weapon"},
			{"ChemlightBox","object"},
			{"","military"},
			{"","generic"}
		};
		itemChance[] =	{
			0.08,	//trash
			0.03,	//ItemJerrycan
			0.08,	//PartWoodPile
			0.02,	//srifle_EBR_F
			0.02,	//srifle_DMR_01_F
			0.01,	//ChemlightBox
			0.10,	//military
			0.60	//generic
		};
	};
	class Boutique: Default {
		lootChance = 0.6;
		minRoaming = 2;
		maxRoaming = 6;
		zombieChance = 0.3;
		zombieClass[] = {
			
		};
		itemType[] = {
			{"","trash"},
			{"","uniform_civilian"},
			{"","headgear_civilian"},
			{"","glasses_civilian"}
		};
		itemChance[] =	{
			0.06,	//trash
			0.05,	//uniform_civilian
			0.05,	//headgear_civilian
			0.05	//glasses_civilian
		};
	};
	class Supermarket: Default {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieChance = 0.3;
		zombieClass[] = {
			
		};
		itemType[] = {
			{"","trash"},
			{"ItemWatch","item"},
			{"ItemCompass","item"},
			{"ItemMap","item"},
			{"Binocular","item"},
			{"acc_lampflashlight","item"},
			{"ItemMatchbox","magazine"},
			{"Battery_mag","magazine"},
			{"FMradio_Mag","magazine"},
			{"PartWoodPile","magazine"},
			{"itemCampingLight","magazine"},
			{"itemCanOpener","magazine"},
			{"hgun_Pistol_heavy_01_F","weapon"},
			{"hgun_Pistol_heavy_02_F","weapon"},
			{"hgun_P07_F","weapon"},
			{"hgun_Rook40_F","weapon"},
			{"hgun_ACPC2_F","weapon"},
			{"ChemlightBox","object"},
			{"","food"},
			{"","military"},
			{"","generic"}
		};
		itemChance[] =	{
			0.6,	// trash
			0.05,	// ItemWatch
			0.01,	// ItemCompass
			0.05,	// ItemMap
			0.03,	// Binocular
			0.03,	// acc_lampflashlight
			0.05,	// ItemMatchbox
			0.03,	// Battery_mag
			0.02,	// FMradio_Mag
			0.04,	// PartWoodPile
			0.03,	// itemCampingLight
			0.05,	// itemCanOpener
			0.02,	// hgun_Pistol_heavy_01_F
			0.02,	// hgun_Pistol_heavy_02_F
			0.02,	// hgun_P07_F
			0.02,	// hgun_Rook40_F
			0.02,	// hgun_ACPC2_F
			0.05,	// ChemlightBox
			0.07,	// food
			0.03,	// military
			0.60	// generic
		};
	};
	class MilitaryShop: Default {
		lootChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieChance = 0.3;
		zombieClass[] = {
			
		};
		itemType[] = {
			{"","trash"},
			{"","weapons_shop"},
			{"","magazines_shop"},		
//			{"","backpack"},
//			{"","items"},
			{"ChemlightBox","object"},
			{"","uniform_military"},
			{"","headgear_military"},
			{"","glasses_military"}
		};
		itemChance[] =	{
			0.08,	//trash
			0.05,	//weapons
			0.09,	//magazines
//			0.01, 	//backpack
//			0.02,	//items
			0.07,	//ChemlightBox
			0.3,	//uniform_military
			0.8,	//headgear_military
			0.8		//glasses_military
		};
	};
	class HeliCrash: Default {
		zombieChance = 0.4;
		maxRoaming = 2;
		zombieClass[] = {
			"Z_B_Soldier_F", "Z_B_Soldier_lite_F", "Z_B_medic_F", "Z_B_Helipilot_F"
		};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] =	{		
			{"","weapons_special"},
			{"","magazines"},
			{"","items_special"}
		};
		itemChance[] =	{
			0.05,	//weapons_special
			0.03,	//magazines
			0.05	//items_special
		};
	};
	class HeliCrash_No50s: Default {
		zombieChance = 0.4;
		maxRoaming = 2;
		zombieClass[] = {
			"Z_B_Soldier_F", "Z_B_Soldier_lite_F", "Z_B_medic_F", "Z_B_Helipilot_F"
		};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] =	{
			{"","weapons_special"},
			{"","magazines"},
			{"","items_special"}
		};
		itemChance[] =	{
			0.05,	//weapons_special
			0.03,	//magazines
			0.05	//items_special
		};
	};
	class Hospital: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {
			"Z_scientist_F", "Z_scientist_F", "Z_scientist_F", "Z_scientist_F", "Z_scientist_F", "Z_scientist_F", "Z_scientist_F", "Z_scientist_F",
			"Z_scientist_F", "Z_scientist_F", "Z_scientist_F", "Z_scientist_F", "Z_scientist_F", "Z_scientist_F", "Z_scientist_F", "Z_scientist_F",
			"Z_scientist_F", "Z_scientist_F", "Z_scientist_F", "Z_scientist_F", "Z_scientist_F", "Z_scientist_F", "Z_scientist_F", "Z_scientist_F",
			"Z_scientist_F", "Z_scientist_F", "Z_scientist_F", "Z_scientist_F", "Z_scientist_F", "Z_scientist_F", "Z_scientist_F", "Z_scientist_F",
			"Z_man_shorts_1_F", "Z_man_shorts_1_F_afro", "Z_man_shorts_1_F_euro", "Z_man_shorts_1_F_asia",
			"Z_man_shorts_2_F", "Z_man_shorts_2_F_afro", "Z_man_shorts_2_F_euro", "Z_man_shorts_2_F_asia",
			"Z_man_shorts_3_F", "Z_man_shorts_3_F_afro", "Z_man_shorts_3_F_euro", "Z_man_shorts_3_F_asia",
			"Z_man_shorts_4_F", "Z_man_shorts_4_F_afro", "Z_man_shorts_4_F_euro", "Z_man_shorts_4_F_asia",
			"Z_man_p_fugitive_F", "Z_man_p_fugitive_F_afro", "Z_man_p_fugitive_F_euro", "Z_man_p_fugitive_F_asia",
			"Z_man_p_beggar_F", "Z_man_p_beggar_F_afro", "Z_man_p_beggar_F_euro", "Z_man_p_beggar_F_asia",
			"Z_man_w_worker_F", "Z_man_hunter_1_F"
		};
		lootChance = 0.3;
		lootPos[] = {};
		itemType[] =	{
			{"","hospital"},
			{"MedBox1","object"},
			{"","generic"},
		};
		itemChance[] =	{
			0.9,	//hospital
			0.5,	//MedBox1
			0.1		//generic
		};
	};
	class Military: Default {
		zombieChance = 0.3;
		maxRoaming = 6;
		zombieClass[] = {
			"Z_B_Soldier_F", "Z_B_Soldier_lite_F", "Z_B_medic_F", "Z_B_Helipilot_F"
		};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] =	{
			{"","trash"},
			{"","weapons"},
			{"","magazines"},
			{"","items"},
			{"","backpack"},
			{"","medical"},
			{"","food"}
		};
		itemChance[] =	{
			0.08,	//trash
			0.08,	//weapons
			0.1,	//magazines
			0.06,	//items
			0.04, 	//backpack
			0.02, 	//medical
			0.01,	//food
		};
	};
	class MilitarySpecial: Default {
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {
			"Z_B_Soldier_F", "Z_B_Soldier_lite_F", "Z_B_medic_F"
		};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] =	{
			{"","weapons_special"},
			{"","magazines"},
			{"","items_special"},
			{"","backpack"}
			
		};
		itemChance[] =	{
			0.03,	//weapons_special
			0.04,	//magazines
			0.02,	//items_special
			0.01 	//backpack
		};
	};
	class Hunting: Default {
		zombieChance = 0.4;
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {
			"Z_man_hunter_1_F"
		};
		lootChance = 1;
		lootPos[] = {};
		itemType[] =	{
			{"","trash"},
			{"ItemMap","item"},
			{"ItemMatchbox","magazine"},
			{"srifle_EBR_F","weapon"},
			{"srifle_DMR_01_F","weapon"},
			{"","military"},
			{"","hunter"},
			{"","generic"},
		};
		itemChance[] =	{
			0.50,	// Trash
			0.08,	// ItemMap
			0.07,	// ItemMatchbox
			0.05,	// srifle_EBR_F
			0.05,	// srifle_DMR_01_F
			0.15,	// military
			0.10,	// hunter
			0.50	// generic
		};
	};
	class Church: Residential {
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {
			
		};
	};
	
	#include "CfgBuildingPos.hpp"
	#include "CfgFurniturePos.hpp"
};