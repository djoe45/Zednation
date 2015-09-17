class cfgVehiclesSpawner {
	
	frequency = (1);		// Определяет время в сек. в данном случае это (50 мин), до спавна очередного экземпляра техники, значение этого параметра используется функционалом в не изменном виде
	variance = (15* 60);		// Тоже в сек. в данном случае это (15 мин), значение этого параметра принимается для расчёта рандома по времени, прибавляемого к значению параметра выше
	spawnChance = 1;			// Шанс спавна очередного экземпляра техники, принимаемые значения от 0 до 1
	spawnquantity = 100;                             // total vehicles on server

	Civilian[] = {
		{"C_SUV_01_F", 10},			
		{"C_Offroad_01_F", 10},
		{"B_G_Offroad_01_F", 3},
		{"C_Quadbike_01_F", 10},
		{"B_G_Van_01_transport_F", 2},
		{"C_SUV_01_F", 1},
		{"C_Hatchback_01_F", 15},
		{"C_Hatchback_01_sport_F", 5},
		{"C_Van_01_transport_F", 4},
		{"C_Van_01_box_F", 4},
		//Heli
		{"B_Heli_Transport_03_unarmed_F", 2},
		{"O_Heli_Transport_04_F", 1},
		{"O_Heli_Light_02_unarmed_F", 2},
		{"B_Heli_Light_01_F", 2},
		{"C_Heli_Light_01_civil_F", 3},
		{"I_Heli_Transport_02_F", 1}
		
	};
	Military[] = {
		{"O_Quadbike_01_F", 10},
		{"B_G_Quadbike_01_F", 3},
		{"B_Quadbike_01_F", 3},
		{"I_Quadbike_01_F", 3},
		{"B_Truck_01_covered_F", 1},
		{"B_Truck_01_transport_F", 1},
		{"B_G_Offroad_01_F",3},
		{"B_G_Offroad_01_armed_F", 1},
		{"O_MRAP_02_F", 2},
		{"B_MRAP_01_F", 3}
		
	};
	Ships[] = {
		{"C_Boat_Civil_01_F", 3},
		{"C_Boat_Civil_01_police_F", 3},
		{"C_Boat_Civil_01_rescue_F", 3},
		{"O_Boat_Armed_01_hmg_F", 1},
		{"I_Boat_Armed_01_minigun_F", 1},
		{"B_Boat_Armed_01_minigun_F", 1}
	};
};