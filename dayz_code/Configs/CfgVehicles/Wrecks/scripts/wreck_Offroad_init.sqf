/*
_this animate ["HidePolice", 0];
_this animate ["HideServices", 0];
_this animate ["HideBackpacks", 1];
_this animate ["HideBumper1", round (random 1)];
_this animate ["HideBumper2", round (random 1)];
_this animate ["HideConstruction", round (random 1)];
*/

if (isServer) then {
	_rnd1 = floor random 6;
	_this setVariable ["BIS_randomSeed1", _rnd1, TRUE];
//	_this setVariable ["PTm_lootLastTime", time, TRUE];

	_rndType = (random 100);

	if (_rndType >= 30) then {	// Civilian
		_this setVariable ["PTm_vehicleType", "civilian", TRUE];
		_this animate ["HideConstruction", 0];
		_this animate ["HideBumper2", 0];
//		_this animate [(["HideBumper1","HideBumper2"] call BIS_fnc_selectRandom), round (random 1)];
	} else {
		if ((_rndType > 10) and (_rndType < 30)) then {	// Services
			_this setVariable ["PTm_vehicleType", "services", TRUE];
			_this animate ["HideServices", 0];
		} else {	// Police
			_this setVariable ["PTm_vehicleType", "police", TRUE];
			_this animate ["HidePolice", 0];
			_this animate ["HideBumper1", 0];
//			_this animate ["HideConstruction", round (random 1)];
//			_this animate [(["HideBumper1","HideBumper2"] call BIS_fnc_selectRandom), round (random 1)];
		};
	};
	
	{	
		private ["_Hit"];
		_Hit = [0.6, 0.8, 1] call BIS_fnc_selectRandom;
		if (_x != "") then {
			_this setHit [_x, _Hit];
		};
	} forEach getArray(configFile >> "CfgVehicles" >> (typeOf _this) >> "listHitPoints");
	
	_this setFuel ([0.1, 0.25, 0.5] call BIS_fnc_selectRandom);
	
/*
	if (round (random 1) == 1) then {
		_this animate ["HideDoor2", 1];
		_this animate ["HideGlass2", 1];
	};
	_this animate ["HideDoor1", round (random 1)];
	_this animate ["HideDoor3", round (random 1)];
	_this animate ["HideGlass3", round (random 1)];
*/
};

waitUntil {!(isNil {_this getVariable "BIS_randomSeed1"})};
waitUntil {!(isNil {_this getVariable "PTm_vehicleType"})};

switch (_this getVariable "PTm_vehicleType") do {
	case "civilian": {
		private ["_texture"];
		_texture = [
			["\A3\soft_F\Offroad_01\Data\Offroad_01_ext_co.paa", "Offroad_SRV"],
			["\A3\soft_F\Offroad_01\Data\Offroad_01_ext_BASE01_CO.paa", "Offroad_SRV_Beige"],
			["\A3\soft_F\Offroad_01\Data\Offroad_01_ext_BASE02_CO.paa", "Offroad_SRV_White"],
			["\A3\soft_F\Offroad_01\Data\Offroad_01_ext_BASE03_CO.paa", "Offroad_SRV_Blue"],
			["\A3\soft_F\Offroad_01\Data\Offroad_01_ext_BASE04_CO.paa", "Offroad_SRV_Purple"],
			["\A3\soft_F\Offroad_01\Data\Offroad_01_ext_BASE05_CO.paa", "Offroad_SRV_Black"]
		] select (_this getVariable "BIS_randomSeed1");
		{
			_this setObjectTexture [_x, _texture select 0];
		} forEach [0,1];
		if (isServer) then {
			_this setVariable ["PTm_vehicleClass", _texture select 1, TRUE];
		};
	};
	case "services": {
		{
			_this setObjectTexture [_x, "\A3\soft_F\Offroad_01\Data\Offroad_01_ext_BASE01_CO.paa"];
		} forEach [0,1];
		if (isServer) then {
			_this setVariable ["PTm_vehicleClass", "Offroad_Services_SRV_Beige", TRUE];
		};
	};
	case "police": {
		{
			_this setObjectTexture [_x, "\A3\soft_F\Offroad_01\Data\Offroad_01_ext_BASE02_CO.paa"];
		} forEach [0,1];
		if (isServer) then {
			_this setVariable ["PTm_vehicleClass", "Offroad_Police_SRV_White", TRUE];
		};
	};
};

/*
_this setObjectMaterial [0,"A3\soft_F\Offroad_01\Data\Offroad_01_ext_destruct.rvmat"];
if (round (random 1) == 1) then {
	_this setObjectMaterial [1,"A3\soft_F\Offroad_01\Data\Offroad_01_ext_damage.rvmat"];
} else {
	_this setObjectMaterial [1,"A3\soft_F\Offroad_01\Data\Offroad_01_ext_destruct.rvmat"];
};
*/


/*
if (isServer) then {
	waitUntil {!(isNil {_this getVariable "PTm_vehicleType"})};
//	if ((_this getVariable "PTm_vehicleType") == "civilian") exitWith {};

	_null = _this spawn {	//	Spawn loot

		private ["_weapons","_magazines","_items","_chance","_lootSpawnInterval","_type"];

		_type = _this getVariable "PTm_vehicleType";
		_chance = 1;
		_lootSpawnInterval = 300;
		
		while {true} do {
			
			if ((isNil {_this getVariable "PTm_lootLastTime"}) or ((time - (_this getVariable ["PTm_lootLastTime",0])) > _lootSpawnInterval)) then {
				_weapons =		getWeaponCargo _this;
				_magazines =	getMagazineCargo _this;
				_items =		getItemCargo _this;
//				systemChat format["%1",_weapons + _magazines + _items];
				
				if ((str(_weapons) == "[[],[]]") and (str(_magazines) == "[[],[]]") and (str(_items) == "[[],[]]")) then {
					if ((random 1) < _chance) then {
						switch (_type) do {
						systemChat format["%1","Spawn loot"];
							case "civilian": {
								_this addMagazineCargoGlobal ["FoodCanPowell",round(random 3) + 1];
							};
							case "services": {
								_this addMagazineCargoGlobal ["ItemJerrycan",round(random 3) + 1];
							};
							case "police": {
								_this addMagazineCargoGlobal ["30Rnd_45ACP_Mag_SMG_01",round(random 3) + 1];
							};
						};
					};
				};
				
				_this setVariable ["PTm_lootLastTime", time, TRUE];
			};
			
			sleep 10;
			if (isNull _this) exitWith {};
		};
	};
};
*/