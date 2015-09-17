class cfgGame {
	

	DebugVehicleLoadInventory		= false;		
	DebugVehicleForceSpawn		= false;		
	mapArea[]			= {-10000, 50000}; 		
	maxZeds				= 250;					
	maxLocalZombies		= 10;					
	maxWildZombies		= 3;					
	zedsRespawnDelay	= 30;					
	
	reboot				= 180; //3Hours
	ZN_Debug			= false;
	
	animalssupported[]	= {"Alsatian_Sandblack_F","Hen_random_F","Sheep_random_F","Rabbit_F","Cock_random_F","Goat_random_F"};

	/*
	[
		["uniform class", [array items in uniform]],
		["vest class", [array items in vest]],
		["backpack class", [array items in backpack]],
		"headgear class",
		"goggles class",
		"Binocular class",
		["class primary weapon", [array weapon Linked Items], "Magazine"],
		["class secondary weapon", [array weapon Linked Items], "Magazine"],
		["class handgun weapon", [array weapon Linked Items], "Magazine"],
		[array linked items]
	]
	*/

	PlayerStartKit[] = {
		{{"U_C_Citizen_clothes1","U_C_Citizen_clothes2","U_C_Citizen_clothes3","U_B_Guerilla2_2_srv","U_B_Guerilla2_3_srv"}, {"ItemBandage"}},
		{"V_Rangemaster_belt", {"RH_12Rnd_45cal_usp","RH_12Rnd_45cal_usp","ItemBandage","ItemPainkiller","HandFlashlight","acc_lampflashlight","Battery_mag"}},
		{{"B_FieldPack_khk"}, {}},
		"",
		{"G_Sport_BlackWhite", "G_Sport_Blackyellow", "G_Sport_Greenblack", "G_Sport_Checkered", "G_Sport_Red"},
		"",
		{{"RH_usp", ""}, "RH_12Rnd_45cal_usp"},
		{{"", "", ""}, {}, ""},
		{"", {}, ""},
		{"itemMap"}
	};
};