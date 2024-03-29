
private["_obj","_type","_config","_configPos","_isBuildingPos","_buildingPos","_checkPos","_isOk","_iPos","_nearBy","_itemType","_itemTypes","_itemChances","_lootChance","_weights","_cntWeights","_index","_canLoot","_isObjectHolder","_holderType","_zPos"];
_obj = 			_this select 0;
_type = 		typeOf _obj;
_config = 		missionconfigFile >> "CfgBuildingLoot" >> _type;
_configPos =	[] + getArray (_config >> "lootPos");
_isBuildingPos = getNumber (_config >> "isBuildingPos");
_buildingPos = [];

//Check position in building
if (_isBuildingPos == 1) then {
	_index = 0;
	_checkPos = [];
	_isOk = true;
	While {_isOk} do {
		_checkPos = _obj BuildingPos _index;
		if (str(_checkPos) == "[0,0,0]") then {
			_isOk = false;
		}else{
			_buildingPos SET [count _buildingPos, _checkPos];
			_index = _index + 1;
		};
	};
};

_itemTypes =	[] + getArray (_config >> "itemType");
_lootChance =	getNumber (_config >> "lootChance");
_isObjectHolder = getNumber (_config >> "isObjectHolder");
	
if (_obj isKindOf "Maniken_Base") then {
	if ((random 1) < _lootChance) then {
		_index = dayz_CBLBase find _type;
		_weights = dayz_CBLChances select _index;
		_cntWeights = count _weights;
		_index = floor(random _cntWeights);
		_index = _weights select _index;
		_itemType = _itemTypes select _index;
		[_itemType select 0, _itemType select 1 , _obj]  call fnc_ManikenAddItems;
		_obj setVariable ["created",(DateToNumber date),true];
	};
} else {
	
	_zPos = true;
	{
		if ((random 1) < _lootChance) then {
			_iPos = _obj modelToWorld _x;
			_nearBy = nearestObjects [_iPos, ["GroundWeaponHolder","ReammoBox"], 1];
			if (count _nearBy == 0) then {
				_index = dayz_CBLBase find _type;
				_weights = dayz_CBLChances select _index;
				_cntWeights = count _weights;
				_index = floor(random _cntWeights);
				_index = _weights select _index;
				_itemType = _itemTypes select _index;
				[_itemType select 0, _itemType select 1 , [_iPos, _zPos], 0.0,"GroundWeaponHolder"]  call spawn_loot;
				_obj setVariable ["created",(DateToNumber date),true];
			};
		};
	} forEach _configPos;
	
//	_zPos = false;
	{
		if ((random 1) < _lootChance) then {
			_nearBy = nearestObjects [_x, ["GroundWeaponHolder","ReammoBox"], 1];
			if (count _nearBy == 0) then {
				_index = dayz_CBLBase find _type;
				_weights = dayz_CBLChances select _index;
				_cntWeights = count _weights;
				_index = floor(random _cntWeights);
				_index = _weights select _index;
				_itemType = _itemTypes select _index;
				[_itemType select 0, _itemType select 1 , [_x, _zPos], 0.0,"GroundWeaponHolder"]  call spawn_loot;
				_obj setVariable ["created",(DateToNumber date),true];
			};
		};
	} forEach _buildingPos;
};

// Spawn loot in Weapon box
if (_isObjectHolder == 1) then {
	if ((random 1) < _lootChance) then {
		_index = dayz_CBLBase find _type;
		_weights = dayz_CBLChances select _index;
		_cntWeights = count _weights;
		_index = floor(random _cntWeights);
		_index = _weights select _index;
		_itemType = _itemTypes select _index;
		[_itemType select 0, _itemType select 1 , [[],false], 0.0, "objectHolder", _obj]  call spawn_loot;
		_obj setVariable ["created",(DateToNumber date),true];
	};
};
