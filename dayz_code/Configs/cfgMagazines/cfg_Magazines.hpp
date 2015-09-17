class 30Rnd_556x45_Stanag : CA_Magazine {
	model = "\arp_objects2\models\mag.p3d";
};

class 30Rnd_65x39_caseless_mag : CA_Magazine {
	model = "\A3\weapons_F\ammo\mag_mxrifle.p3d";
};
class 20Rnd_556x45_UW_mag : CA_Magazine {
	model = "\A3\Structures_F_EPB\Items\Military\Magazine_rifle_F.p3d";
};

class 30Rnd_65x39_caseless_green : CA_Magazine {
	model = "\A3\Structures_F_EPB\Items\Military\Magazine_rifle_F.p3d";
};

class 20Rnd_556_AmmoPack : CA_Magazine {
	scope = public;
	model = "\dz\weapons\ammunition\556_20RoundBox.p3d";
	displayName = "Ammo 5.56mm 20 Rounds";
	descriptionShort = "A cardbox box with 'Contains 20 5.56 rifle cartridges' written on it. Presumably contains 20 rounds in a disposable cardboard wrapper.";
	picture = "\A3\weapons_F\data\UI\m_30stanag_CA.paa";
	ammo = "B_556x45_Ball";
	count = 20;
	initSpeed = 930;
	tracersEvery = 0;
	lastRoundsTracer = 4;
};

class 20Rnd_556_UW_AmmoPack : 20Rnd_556_AmmoPack {
	displayName = "Ammo 5.56mm UW 20 Rounds";
	picture = "\A3\weapons_f\data\ui\m_20stanag_CA.paa";
	ammo = "B_556x45_dual";
	mass = 10;
	initSpeed = 270;
	tracersEvery = 0;
	lastRoundsTracer = 0;
};

class 20Rnd_762_AmmoPack : CA_Magazine {
	scope = public;
	displayName = "Ammo 7.62mm 20 Rounds";
	model = "\dz\weapons\ammunition\762_20RoundBox.p3d";
	descriptionShort = "A cardbox box with 'Contains 20 7.62 rifle cartridges' written on it. Presumably contains 20 rounds in a disposable cardboard wrapper.";
	picture = "\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
	count = 20;
	ammo = "B_762x51_Ball";
	mass = 12;
	initSpeed = 850;
};

class 25Rnd_45acp_AmmoPack : CA_Magazine {
	scope = public;
	displayName = "Ammo 45acp 25 Rounds";
	model = "\dz\weapons\ammunition\45acp_25rnd_box.p3d";
	descriptionShort = "A cardbox box with 'Contains 25 45acp pistol cartridges' written on it. Presumably contains 25 rounds in a disposable cardboard wrapper.";
	picture = "\A3\weapons_f\data\UI\M_16Rnd_9x21_CA.paa";
	count = 25;
	ammo = "B_45ACP_Ball";
	mass = 12;
	initSpeed = 260;
};
