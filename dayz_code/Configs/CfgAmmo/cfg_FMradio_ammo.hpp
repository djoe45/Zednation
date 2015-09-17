class FMradio_Ammo : PipeBombBase {
	hit = 0;	//hit = 1000;
	indirectHit = 0;	//indirectHit = 1000;
	indirectHitRange = 0;	//indirectHitRange = 10;
	model = "\A3\Structures_F\Items\Electronics\FMradio_F.p3d";
	mineModelDisabled = "\A3\Structures_F\Items\Electronics\FMradio_F.p3d";
	soundHit[] = {"A3\Sounds_F\weapons\Mines\mine_debris_5", db10, 1, 1500};
	defaultMagazine = "FMradio_Mag";
	ExplosionEffects = "";	//ExplosionEffects = "MineNondirectionalExplosionSmall";
	CraterEffects = "";	//CraterEffects = "MineNondirectionalCraterSmall";
	whistleDist = 0;	//whistleDist = 32;
	mineInconspicuousness = 5;
//	mineTrigger = "RemoteTrigger";
	explosionType = "";	//explosionType = "bomb";
//	soundTrigger[] = {"A3\Sounds_F\weapons\mines\electron_trigger_1", 0.562341, 1, 50};
//	soundActivation[] = {"A3\Sounds_F\weapons\mines\electron_activate_mine_1", 0.562341, 1, 50};
//	soundDeactivation[] = {"A3\Sounds_F\weapons\mines\deactivate_mine_3a", 0.562341, 1, 50};
};