class Land_Portable_generator_F : Items_base_F {
	fuelCapacity = 20;
	class EventHandlers {
		//init = "(_this select 0) execVM '\z\addons\dayz_code\Configs\CfgVehicles\Electronics\scripts\PortableGenerator_init.sqf'";
		init = "(_this select 0) execVM '\scripts\dayz_code\PortableGenerator_init.sqf'";
	};
};