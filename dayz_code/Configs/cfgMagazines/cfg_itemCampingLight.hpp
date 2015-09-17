class itemCampingLight : CA_Magazine {
	scope = public;
	displayName = "Camping light";
	model = "\A3\Structures_F\Civ\Camping\Camping_Light_off_F.p3d";
	picture = "\A3\Weapons_F\data\UI\icon_unarmed_ca.paa";
	count = 1;
	mass = 15;
	type = 256;
	
	class ItemActions {
		class Build {
			text = "$STR_USE";
			script = "spawn electronics_build";
			create = "Land_Camping_Light_off_F";
		};
	};
}