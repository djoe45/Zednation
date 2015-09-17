class CarWreck;

class Wreck_Base_DZ: CarWreck {
	scope = protected;
	hiddenSelections[] = {"camo", "camo2"};
	destrType = "";
	explosionEffect = "";
	class EventHandlers;
}

class Wreck_SUV_01_SRV : Wreck_Base_DZ {
	scope = public;
	mapSize = 6.18;
	displayName = "SUV_Wreck";
	picture = "\A3\soft_f_gamma\SUV_01\Data\UI\portrait_suv_01_CA.paa";
	Icon = "\A3\soft_f_gamma\SUV_01\Data\UI\map_suv_01_CA.paa";
	model = "\A3\soft_f_gamma\SUV_01\SUV_01_F";
	hiddenSelections[] = {"Camo1", "num_1", "num_2", "num_3", "num_4"};
	class EventHandlers : EventHandlers {
		init = "(_this select 0) setObjectMaterial [0,""A3\soft_f_gamma\SUV_01\Data\SUV_01_ext_damage.rvmat""]; (_this select 0) execVM ""\A3\soft_f_gamma\SUV_01\scripts\randomize.sqf""";
	};
};

class Wreck_Hatchback_01_SRV : Wreck_Base_DZ {
	scope = public;
	displayName = "Hatchback_Wreck";
	model = "\A3\soft_f_gamma\Hatchback_01\Hatchback_01_F";
	hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_CO.paa"};
	class EventHandlers : EventHandlers {
		init = "(_this select 0) setObjectMaterial [0,""A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_paint_damage.rvmat""]; (_this select 0) execVM ""\A3\soft_f_gamma\Hatchback_01\scripts\randomize.sqf""";
	};
};

class Wreck_Offroad_01_SRV : C_Offroad_01_F {
	displayName = "Offroad wreck";
/*	driverLeftHandAnimName = "";
	driverRightHandAnimName = "";
	attenuationEffectType = "";
	driverAction = "";
	cargoAction[] = {};
	getInAction = "";
	getOutAction = "";
	cargoGetInAction[] = {""};
	cargoGetOutAction[] = {""};
	driverCompartments = "";
	cargoCompartments[] = {};
	
//	destrType = "";
//	explosionEffect = "";
	
	transportSoldier = 0;
	transportMaxBackpacks = 0; */
	
	class TransportItems {};
	
	class EventHandlers : EventHandlers {
		init = "(_this select 0) execVM ""\z\addons\dayz_code\Configs\CfgVehicles\Wrecks\scripts\wreck_Offroad_init.sqf""";
//		init = "(_this select 0) execVM ""\scripts\dayz_code\wreck_Offroad_init.sqf""";
	};
};

/*
class Wreck_base_F {
	class EventHandlers;
};
class Wreck_Offroad_01_SRV : Wreck_base_F {
//class Wreck_Offroad_01_SRV : Wreck_Base_DZ {
	scope = public;
//	_generalMacro = "C_Offroad_01_F";
	mapSize = 6.86;
	displayName = "Offroad_Wreck";
	model = "\A3\soft_f\Offroad_01\Offroad_01_unarmed_F";
	hiddenSelectionsTextures[] = {"\A3\soft_f\Offroad_01\data\Offroad_01_ext_co.paa", "\A3\soft_f\Offroad_01\data\Offroad_01_ext_co.paa"};
	class EventHandlers : EventHandlers {
		init = "(_this select 0) execVM ""\A3\soft_F\Offroad_01\scripts\randomize.sqf""";
	};
};
*/
class Wreck_Van_01_transport_SRV : Wreck_Base_DZ {
	scope = public;
	displayName = "Van_transport_Wreck";
	model = "\A3\soft_f_gamma\van_01\Van_01_transport_F";
	hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa", "\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa"};
	class EventHandlers : EventHandlers {
		init = "(_this select 0) execVM ""\A3\soft_f_gamma\van_01\scripts\randomize_doors.sqf"";(_this select 0) setDamage 1";
	};
};
class Wreck_Van_01_box_SRV : Wreck_Van_01_transport_SRV {
	displayName = "Van_box_Wreck";
	model = "\A3\soft_f_gamma\van_01\Van_01_box_F";
	hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa", "\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa"};
};
class Wreck_Van_01_fuel_SRV : Wreck_Van_01_transport_SRV {
	displayName = "Van_fuel_Wreck";
	model = "\A3\soft_f_gamma\van_01\Van_01_fuel_F";
	hiddenSelectionsTextures[] = {"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa", "\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa"};
};


