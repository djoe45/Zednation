class Furniture : Default {
	lootChance = 0.2;
	isBuildingPos = 0;
	zombieChance = 0;
	zombieClass[] = {};
};

class Furniture_Supermarket: Furniture {
	itemType[] =	{
		{"","furniture_food"},
		{"","items_lite"},
		{"ItemMatchbox","magazine"},
		{"Battery_mag","magazine"},
		{"acc_lampflashlight","item"},
		{"FMradio_Mag","magazine"},
		{"ChemlightBox","object"},
		{"itemCampingLight","magazine"}
	};
	itemChance[] =	{
		0.06,	//	furniture_food
		0.02,	//	items_lite
		0.04,	//	ItemMatchbox
		0.04,	//	Battery_mag
		0.04,	//	acc_lampflashlight
		0.03,	//	FMradio_Mag
		0.04,	//	ChemlightBox
		0.03	//	itemCampingLight
	};	
};

class Land_ShelvesMetal_F_Supermarket : Furniture_Supermarket {
	lootChance = 0.1;
	lootPos[] = {
		{0.206055,-0.773438,1.2709},{0.206055,-0.0136719,1.2709},{0.206055,0.794922,1.2709},
		{0.206055,-0.773438,0.919653},{0.206055,-0.0136719,0.919653},{0.206055,0.794922,0.919653},
		{0.206055,-0.773438,0.56},{0.206055,-0.0136719,0.56},{0.206055,0.794922,0.56},
		{0.206055,-0.773438,0.21},{0.206055,-0.0136719,0.21},{0.206055,0.794922,0.21},		
		{-0.206055,-0.773438,1.2709},{-0.206055,-0.0136719,1.2709},{-0.206055,0.794922,1.2709},
		{-0.206055,-0.773438,0.919653},{-0.206055,-0.0136719,0.919653},{-0.206055,0.794922,0.919653},
		{-0.206055,-0.773438,0.56},{-0.206055,-0.0136719,0.56},{-0.206055,0.794922,0.56},
		{-0.206055,-0.773438,0.21},{-0.206055,-0.0136719,0.21},{-0.206055,0.794922,0.21}
	};
};
class Land_ShelvesMetal_F_Pharmacy : Land_ShelvesMetal_F_Supermarket {
	itemType[] =	{
		{"","furniture_medical"}
	};
	itemChance[] =	{
		0.04	//	furniture_medical
	};
};
class Land_Metal_rack_F_Supermarket : Furniture_Supermarket {
	lootChance = 0.1;
	lootPos[] = {
//				{-0.365234,0,0.549997},{0,0,0.549997},{0.365234,0,0.549997},
				{-0.365234,0,0.1},{0,0,0.1},{0.365234,0,0.1},
				{-0.365234,0,-0.35},{0,0,-0.35},{0.365234,0,-0.35},
				{-0.365234,0,-0.79},{0,0,-0.79},{0.365234,0,-0.79}
	};
};

class Land_Icebox_F_Supermarket : Furniture {
	lootChance = 0.4;
	itemType[] =	{
		{"","food"}
	};
	itemChance[] =	{
		0.05	//	food
	};	
	lootPos[] = {{-0.550781,-0.107422,0.0167103},{-0.0449219,-0.163086,0.0167103},{0.535156,-0.105469,0.0167103}};
};

class Land_CashDesk_F_Supermarket : Furniture {
	itemType[] =	{
		{"hgun_P07_F","weapon"},
		{"hgun_Rook40_F","weapon"},
		{"hgun_ACPC2_F","weapon"},
		{"25Rnd_45acp_AmmoPack","magazine"}
	};
	itemChance[] =	{
		0.05,	// hgun_P07_F
		0.05,	// hgun_Rook40_F
		0.05,	// hgun_ACPC2_F
		0.1		// 25Rnd_45acp_AmmoPack
	};	
	lootPos[] = {{-0.03125,0.368164,0.05}};
};
class Land_Metal_wooden_rack_F_MilitaryShop : Furniture {
	lootChance = 0.4;
	itemType[] =	{
		{"","weapons_shop"},
		{"","items"},
		{"","magazines_shop"},
		{"","backpack"},
		{"ChemlightBox","object"},
		{"ItemCamoNetBig","magazine"},
		{"ItemCamoNet","magazine"},
		{"ItemCamoNetOpen","magazine"}
	};
	itemChance[] =	{
		0.06,	// weapons_shop
		0.09,	// items
		0.3,	// magazines_shop
		0.01,	// backpack
		0.05,	// ChemlightBox
		0.01,	// ItemCamoNetBig
		0.01,	// ItemCamoNet
		0.01	// ItemCamoOpen
	};	
	lootPos[] = {{0,0,-0.903646},{0,0,-0.403646},{0,0,0.0963535}};
};
class Land_Metal_wooden_rack_F_Warehouse : Furniture {
	itemType[] =	{
		{"","weapons_shop"},
		{"AmmoBox0","object"},
		{"TrowBox0","object"},
		{"ChemlightBox","object"},
		{"ItemTent","magazine"},
		{"ItemCamoNetBig","magazine"},
		{"ItemCamoNet","magazine"},
		{"ItemCamoNetOpen","magazine"},
		{"","boat_backpack"},
		{"","backpack"}
	};
	itemChance[] =	{
		0.15,	// weapons_shop
		0.2,	// AmmoBox0
		0.3,	// TrowBox0
		0.5,	// ChemlightBox
		0.1,	// ItemTent
		0.01,	// ItemCamoNetBig
		0.03,	// ItemCamoNet
		0.05,	// ItemCamoOpen
		0.01,	// boat_backpack
		0.05	// backpack
	};	
	lootPos[] = {{0,0,-0.903646},{0,0,-0.403646},{0,0,0.0963535}};
};
class Land_Metal_wooden_rack_F_Garage : Furniture {
	lootChance = 0.2;
	itemType[] =	{
		{"PartGeneric","magazine"},
		{"PartWheel","magazine"},
		{"PartFueltank","magazine"},
		{"PartEngine","magazine"},
//		{"ItemJerrycan","magazine"},
//		{"ItemJerrycanEmpty","magazine"},
		{"ItemToolbox","item"}
	};
	itemChance[] =	{
		0.04,	// PartGeneric
		0.03,	// PartWheel
		0.02,	// PartFueltank
		0.01,	// PartEngine
//		0.05,	// ItemJerrycan
//		0.05,	// ItemJerrycanEmpty
		0.05	// ItemToolbox
	};	
	lootPos[] = {{0,0,-0.903646},{0,0,-0.403646},{0,0,0.0963535}};
};
class Land_Metal_wooden_rack_F_Supermarket : Furniture {
	lootChance = 0.2;
	itemType[] =	{
		{"FoodBox0","object"}
	};
	itemChance[] =	{
		1	// FoodBox0
	};	
	lootPos[] = {{0,0,-0.903646},{0,0,-0.403646},{0,0,0.0963535}};
};
class Land_Metal_wooden_rack_F_Pharmacy : Furniture {
	lootChance = 0.2;
	itemType[] =	{
		{"MedBox0","object"}
	};
	itemChance[] =	{
		1	// MedBox0
	};	
	lootPos[] = {{0,0,-0.903646},{0,0,-0.403646},{0,0,0.0963535}};
};
class Land_CampingTable_F_MilitaryShop : Furniture {
	lootChance = 0.1;
	itemType[] =	{
		{"","uniform_military"},
		{"","backpack"},
//		{"","headgear_military"},
//		{"","glasses_military"},
		{"","vest"}
	};
	itemChance[] =	{
		0.9,	//uniform_military
		0.5,	//backpack
//		0.5, 	//headgear_military
//		0.5,  	//glasses_military
		0.1		// vest
	};	
	lootPos[] = {{-0.573486,0,0.426605},{0.573486,0,0.426605}};
};