class FMradio_Mag : CA_Magazine {
	scope = public;
	displayName = "$STR_A3_cfgVehicles_Land_FMradio_F0";
	picture = "\A3\Weapons_F\data\UI\icon_unarmed_ca.paa";
	model = "\A3\Structures_F\Items\Electronics\FMradio_F";
	descriptionShort = "$STR_A3_cfgVehicles_Land_FMradio_F0";
	descriptionUse = "$STR_A3_cfgVehicles_Land_FMradio_F0";
	type = 2*		256;
//	ammo = "FMradio_Ammo";
	mass = 20;
	count = 1;
	class ItemActions {
		class Build {
			text = "$STR_USE";
			script = "spawn electronics_build";
			create = "Land_FMradio_F";
		};
	};
};
/*
class FMradio_Mag : CA_Magazine {
	scope = public;
	displayName = "$STR_A3_cfgVehicles_Land_FMradio_F0";
	picture = "\A3\Weapons_F\data\UI\icon_unarmed_ca.paa";
	model = "\A3\Structures_F\Items\Electronics\FMradio_F";
	descriptionShort = "$STR_A3_cfgVehicles_Land_FMradio_F0";
	descriptionUse = "$STR_A3_cfgVehicles_Land_FMradio_F0";
	type = 2*		256;
	value = 5;
	ammo = "FMradio_Ammo";
	mass = 20;
	count = 1;
	initSpeed = 0;
	maxLeadSpeed = 0;	// max estimated speed km/h
	nameSoundWeapon = "satchelcharge";
	nameSound = "satchelcharge";
	weaponPoolAvailable = 1;
	useAction = true;
	useActionTitle = $STR_ACTION_PUTBOMB;
	sound[] = {"A3\sounds_f\dummysound", db-70, 1, 10};
};
*/
