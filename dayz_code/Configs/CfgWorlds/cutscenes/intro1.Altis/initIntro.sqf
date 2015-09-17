[
	[3534.2,13398.6,2.000],			// Target position
	"DayZ Altis intro",						// SITREP text
	2,						// 300 Altitude
	4,						// 150m radius
	180,						// 100 degree viewing angle
	0,						// Anti-clockwise movement
	[],
	1						// World scene mode
] spawn BIS_fnc_establishingShot;

waitUntil {!(isNil "BIS_fnc_establishingShot_playing")};

sleep 3;

playMusic "dayz_track_intro_1";
addMusicEventHandler ["MusicStop", {[] spawn {sleep 12; playMusic "dayz_track_intro_1"}}];