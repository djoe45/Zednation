
if (ZN_Monitor) then {ZN_Monitor = false;hint "";} else {ZN_Monitor = true;};

_reboot = getnumber (missionconfigFile >> "cfgGame" >> "reboot");
while {ZN_Monitor} do {

	_time = (round(_reboot-(serverTime)/60));  
	_hours = (floor(_time/60));
	_minutes = (_time - (_hours * 60));

	switch(_minutes) do
	{
		case 9: {_minutes = "09"};
		case 8: {_minutes = "08"};
		case 7: {_minutes = "07"};
		case 6: {_minutes = "06"};
		case 5: {_minutes = "05"};
		case 4: {_minutes = "04"};
		case 3: {_minutes = "03"};
		case 2: {_minutes = "02"};
		case 1: {_minutes = "01"};
		case 0: {_minutes = "00"};
	};

	hintSilent parseText format ["
		
		<t size='1.20' font='PuristaLight' color='#5882FA'>%1</t><br/><br/>
		<t size='1.20' font='PuristaLight' color='#5882FA'>Survived %7 Days</t><br/><br/>
		<t size='1.15' font='PuristaLight' align='left'>Zombies Killed: </t><t size='1.15' font='PuristaLight' align='right'>%2</t><br/>
		<t size='1.15' font='PuristaLight' align='left'>Headshots: </t><t size='1.15' font='PuristaLight' align='right'>%3</t><br/>
		<t size='1.15' font='PuristaLight' align='left'>Murders: </t><t size='1.15' font='PuristaLight' align='right'>%4</t><br/>
		<t size='1.15' font='PuristaLight' align='left'>Bandits Killed: </t><t size='1.15' font='PuristaLight' align='right'>%5</t><br/><br/>
		<t size='1.15' font='PuristaLight' align='left'>Humanity: </t><t size='1.15' font='PuristaLight' align='right'>%6</t><br/><br/>
		<t size='1.15' font='PuristaLight' align='left'>Blood: </t><t size='1.15' font='PuristaLight' align='right'>%8</t><br/>
		<t size='1.15' font='PuristaLight' align='left'>FPS: </t><t size='1.15' font='PuristaLight' align='right'>%9</t><br/>
		<t size='1.15' font='PuristaLight' align='left'>Restart: </t><t size='1.15' font='PuristaLight' align='right'>%10H%11M</t><br/>",
		
		(name player),
		(player getVariable['zombieKills', 0]),
		(player getVariable['headShots', 0]),
		(player getVariable['humanKills', 0]),
		(player getVariable['banditKills', 0]),
		(player getVariable['humanity', 0]),
		(dayz_skilllevel),
		r_player_blood,
		(round diag_fps),
		_hours,
		_minutes
		
	];
	sleep 1;
};
