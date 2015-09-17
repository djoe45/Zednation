private["_iItem","_iClass","_iPos","_zPos","_radius","_itemTypes","_index","_item","_qty","_max","_tQty","_canType","_weights","_cntWeights","_dateNow"];

_fnc_SpawnWeapon = {
	_Weapon = (_this select 1) call _fnc_SelectType;
	(_this select 0)  addWeaponCargoGlobal [_Weapon, 1];
	_mags = [] + getArray (configFile >> "cfgWeapons" >> _Weapon >> "magazines");
	if ((count _mags) > 0) then {
		(_this select 0) addMagazineCargoGlobal [(_mags select 0), (round(random 2))];
	};
};
_fnc_SelectType = {
	_itemTypes = [] + ((getArray (missionconfigFile >> "cfgLoot" >> _this)) select 0);
	_index = dayz_CLBase find _iClass;
	_weights = dayz_CLChances select _index;
	_cntWeights = count _weights;
	_index = floor(random _cntWeights);
	_index = _weights select _index;
	_canType = _itemTypes select _index;
	_canType
};

_iItem = 	_this select 0;
_iClass = 	_this select 1;
_iPos =	(_this select 2) select 0;
_zPos =	(_this select 2) select 1;
_radius =	_this select 3;

switch (_this select 4) do {
	case "GroundWeaponHolder": {
		if !(_iClass == "object") then {
			_item = createVehicle ["GroundWeaponHolder", _iPos, [], _radius, "CAN_COLLIDE"];
		};
	};
	case "objectHolder": {
		// WeaponBox
		_item = _this select 5;
	};
	default {};
};

switch (_iClass) do {
	default {
		
//		_item addMagazineCargoGlobal [(_iClass call _fnc_SelectType),1];
	
		
		//Item is food, add random quantity of cans along with an item (if exists)
		_itemTypes = [] + ((getArray (missionconfigFile >> "cfgLoot" >> _iClass)) select 0);
		_index = dayz_CLBase find _iClass;
		_weights = dayz_CLChances select _index;
		_cntWeights = count _weights;
		_qty = 0;
		_max = round(random 1) + 1;
		while {_qty < _max} do {
			_tQty = round(random 1) + 1;
			_index = floor(random _cntWeights);
			_index = _weights select _index;
			_canType = _itemTypes select _index;
			_item addMagazineCargoGlobal [_canType, _tQty];
			_qty = _qty + _tQty;
		};
		if (_iItem != "") then {
			_item addWeaponCargoGlobal [_iItem,1];
		};
		
	};
	case "furniture_food": {
		_item addMagazineCargoGlobal [(_iClass call _fnc_SelectType),1];
	};
	case "furniture_medical": {
		_item addMagazineCargoGlobal [(_iClass call _fnc_SelectType),1];
	};
	case "weapon": {
		//Item is a weapon, add it and a random quantity of magazines
		_item addWeaponCargoGlobal [_iItem,1];
		_mags = [] + getArray (configFile >> "cfgWeapons" >> _iItem >> "magazines");
		if ((count _mags) > 0) then {
			_item addMagazineCargoGlobal [(_mags select 0), (round(random 2))];
		};
	};
	case "magazine": {
		//Item is one magazine
		_item addMagazineCargoGlobal [_iItem,1];
	};
	case "item": {
		_item addItemCargoGlobal [_iItem,1];
	};
	case "items_lite": {
		_item addItemCargoGlobal [(_iClass call _fnc_SelectType),1];
	};
	case "items": {
		_item addItemCargoGlobal [(_iClass call _fnc_SelectType),1];
	};
	case "backpack": {
		_item addBackpackCargoGlobal [(_iClass call _fnc_SelectType),1];
	};
	case "boat_backpack": {
		_item addBackpackCargoGlobal [(_iClass call _fnc_SelectType),1];
	};
	case "weapons_lite": {
		[_item, _iClass] call _fnc_SpawnWeapon;
	};
	case "weapons_shop": {
		[_item, _iClass] call _fnc_SpawnWeapon;
	};
	case "weapons": {
		[_item, _iClass] call _fnc_SpawnWeapon;
	};
	case "weapons_special": {
		[_item, _iClass] call _fnc_SpawnWeapon;
	};
	case "uniform_civilian": {
		_item addItemCargoGlobal [(_iClass call _fnc_SelectType),1];
	};
	case "uniform_military": {
		_item addItemCargoGlobal [(_iClass call _fnc_SelectType),1];
	};
	case "headgear_civilian": {
		_item addItemCargoGlobal [(_iClass call _fnc_SelectType),1];
	};
	case "headgear_military": {
		_item addItemCargoGlobal [(_iClass call _fnc_SelectType),1];
	};
	case "glasses_civilian": {
		_item addItemCargoGlobal [(_iClass call _fnc_SelectType),1];
	};
	case "glasses_military": {
		_item addItemCargoGlobal [(_iClass call _fnc_SelectType),1];
	};
	case "object": {
		_item = createVehicle [_iItem, _iPos, [], _radius, "CAN_COLLIDE"];
	};
};

if (_zPos) then {
	_item setPosATL _iPos;
};

// timestamp for later clearing
_dateNow = (DateToNumber date);
_item setVariable ["looted",_dateNow,true];