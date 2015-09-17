class ItemFirstAidkit : CA_Magazine {
	scope = public;
	count = 1;
	type = 256;
	displayName = $STR_EQUIP_NAME_47;
	picture = "\A3\Weapons_F\Items\data\UI\gear_FirstAidKit_CA.paa";
	model = "\A3\Weapons_F\Items\FirstAidkit";
	descriptionShort = $STR_EQUIP_DESC_47;
	mass = 8;
		
	class ItemActions {
		class Use {
			text = $STR_ACTIONS_FIRSTAIDKIT;
			script = "spawn player_useMeds;";
		};
	};
};