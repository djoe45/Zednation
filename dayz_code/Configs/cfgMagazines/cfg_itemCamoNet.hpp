class ItemCamoNetBig : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_A3_cfgVehicles_CamoNet_big_F0;
	model = "\a3\structures_f\Civ\Camping\Sleeping_bag_folded_F.p3d";
	picture = "\A3\Weapons_F\data\UI\icon_unarmed_ca.paa";
	descriptionShort = $STR_EQUIP_DESC_50;
	mass = 60;
		
	class ItemActions {
		class Pitch {
			text = $STR_PITCH_CamoNet;
			script = "spawn player_tentPitch;";
		};
	};
};
class ItemCamoNet : ItemCamoNetBig {
	displayName = $STR_A3_cfgVehicles_CamoNet_F0;
};
class ItemCamoNetOpen : ItemCamoNetBig {
	displayName = $STR_A3_cfgVehicles_CamoNet_open_F0;
};