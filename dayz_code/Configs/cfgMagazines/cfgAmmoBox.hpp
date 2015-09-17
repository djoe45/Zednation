class AmmoBox_Base : CA_Magazine {
	typeBox = "AmmoBox";
	model = "\A3\Structures_F_EPB\Items\Military\Ammobox_rounds_F.p3d";
	picture = "\A3\weapons_F\data\UI\m_30stanag_CA.paa";
	class ItemActions {
		class ReammoMagazines {
			text = "Reammo magazines";
			script = "spawn player_ReammoMagazines;";
		};
	};
	
};

class 556x45_AmmoBox : AmmoBox_Base {
	scope = public;
	displayName = "556x45 Ammo Box";
	ammo = "B_556x45_Ball";
	count = 300;
	initSpeed = 930;
	tracersEvery = 0;
	lastRoundsTracer = 4;
	descriptionShort = "300 Rnd 556x45 Stanag";
	mass = 50;
};