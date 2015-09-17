

while {!r_player_dead && dz_debugmonitor} do {
	hintSilent parseText format ["
		<t size='1.20' font='PuristaLight' color='#5882FA'>%1</t><br/><br/>
		<t size='1.20' font='PuristaLight' color='#5882FA'>Survived %8 Days</t><br/><br/>
		<t size='1.15' font='PuristaLight' align='left'>Blood:</t><t size='1.15' font='PuristaLight' align='right'>%9</t><br/>
		<t size='1.15' font='PuristaLight' align='left'>Zombies Killed: </t><t size='1.15' font='PuristaLight' align='right'>%2</t><br/>
		<t size='1.15' font='PuristaLight' align='left'>Headshots: </t><t size='1.15' font='PuristaLight' align='right'>%3</t><br/>
		<t size='1.15' font='PuristaLight' align='left'>Murders: </t><t size='1.15' font='PuristaLight' align='right'>%4</t><br/>
		<t size='1.15' font='PuristaLight' align='left'>Bandits Killed: </t><t size='1.15' font='PuristaLight' align='right'>%5</t><br/><br/>
		<t size='1.15' font='PuristaLight' align='left'>Humanity: </t><t size='1.15' font='PuristaLight' align='right'>%6</t><br/><br/>
		<t size='1.15' font='PuristaLight' align='left'>FPS: </t><t size='1.15' font='PuristaLight' align='right' color='#FFFFFF' >%7</t><br/>",
		(name player),
		(player getVariable['zombieKills', 0]),
		(player getVariable['headShots', 0]),
		(player getVariable['humanKills', 0]),
		(player getVariable['banditKills', 0]),
		(player getVariable['humanity', 0]),
		(diag_fps),
		(dayz_skilllevel),
		(r_player_blood)
	];
	sleep 1;
};