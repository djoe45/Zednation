class WeaponsBox_SRV : ThingX {
	animated = false;
	scope = public;
	hiddenSelections[] = {"Camo_Signs", "Camo"};
	hiddenSelectionsTextures[] = {"A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa", "A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};
	icon = "iconCrateWpns";
	model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
	displayName = "$STR_A3_CfgVehicles_Box_NATO_Wps0";
	accuracy = 1000;	// accuracy needed to recognize type of this target
	typicalCargo[] = {};
	vehicleClass = "Ammo";
	destrType = "";
	explosionEffect = "";
	maximumLoad = 9999;
	transportMaxWeapons = 2;
	transportMaxMagazines = 15;
	transportMaxBackpacks = 1;
	transportMaxItems = 5;
	transportAmmo = 0;
	transportRepair = 0;
	transportFuel = 0;
	supplyRadius = 1.4;
	cost = 0;
	armor = 200;
	mapSize = 2;
	waterLinearDampingCoefY = 1.0;
	waterAngularDampingCoef = 0.1;
		
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportItems {};
};	