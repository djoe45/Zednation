private["_position","_num","_config","_itemType","_itemChance","_weights","_index","_iArray","_crashModel","_lootTable","_guaranteedLoot","_randomizedLoot","_frequency","_variance","_spawnChance","_spawnMarker","_spawnRadius","_spawnFire","_permanentFire","_crashName"];

//_guaranteedLoot = _this select 0;
//_randomizedLoot = _this select 1;
//_frequency	= _this select 2;
//_variance	= _this select 3;
//_spawnChance	= _this select 4;
//_spawnMarker	= _this select 5;
//_spawnRadius	= _this select 6;
//_spawnFire	= _this select 7;
//_fadeFire	= _this select 8;
_guaranteedLoot = getNumber (configFile >> "CfgSpawnCrashSite" >> "guaranteedLoot");
_randomizedLoot = getNumber (configFile >> "CfgSpawnCrashSite" >> "randomizedLoot");
_frequency	= getNumber (configFile >> "CfgSpawnCrashSite" >> "frequency");
_variance	= getNumber (configFile >> "CfgSpawnCrashSite" >> "variance");
_spawnChance	= getNumber (configFile >> "CfgSpawnCrashSite" >> "spawnChance");
_spawnMarker	= getArray (configFile >> "cfgWorlds" >> worldName >> "safePositionAnchor");
_spawnRadius	= (getNumber (configFile >> "cfgWorlds" >> worldName >> "safePositionRadius")) * 2.5;
if (getNumber (configFile >> "CfgSpawnCrashSite" >> "spawnFire") == 1) then {_spawnFire	= true;} else {_spawnFire	= false;};
if (getNumber (configFile >> "CfgSpawnCrashSite" >> "fadeFire") == 1) then {_fadeFire	= true;} else {_fadeFire	= false;};


diag_log("CRASHSPAWNER: Starting spawn logic for Crash Spawner");

while {true} do {
	private["_timeAdjust","_timeToSpawn","_spawnRoll","_crash","_hasAdjustment","_newHeight","_adjustedPos"];
	// Allows the variance to act as +/- from the spawn frequency timer
	_timeAdjust = round(random(_variance * 2) - _variance);
	_timeToSpawn = time + _frequency + _timeAdjust;
	
	//Adding some Random systems
//	_crashModel = ["HunterWreck_DZ","HeliWreck_DZ","BRDM2Wreck_DZ"] call BIS_fnc_selectRandom;
	_crashModel = (getArray (configFile >> "CfgSpawnCrashSite" >> "crashModel")) call BIS_fnc_selectRandom;
	
	//Crash loot just uncomment the one you wish to use by default with 50cals is enabled.
	//Table including 50 cals
//	_lootTable = ["Military","HeliCrash","MilitarySpecial"] call BIS_fnc_selectRandom;
	_lootTable = (getArray (configFile >> "CfgSpawnCrashSite" >> "lootTable")) call BIS_fnc_selectRandom;
	
	_crashName	= getText (configFile >> "CfgVehicles" >> _crashModel >> "displayName");

	diag_log(format["CRASHSPAWNER: %1%2 chance to spawn '%3' with loot table '%4' at %5", round(_spawnChance * 100), '%', _crashName, _lootTable, _timeToSpawn]);

	// Apprehensive about using one giant long sleep here given server time variances over the life of the server daemon
	while {time < _timeToSpawn} do {
		sleep 5;
	};

	_spawnRoll = random 1;

	// Percentage roll
	if (_spawnRoll <= _spawnChance) then {

		_position = [_spawnMarker,0,_spawnRadius,10,0,2000,0] call BIS_fnc_findSafePos;

		diag_log(format["CRASHSPAWNER: Spawning '%1' with loot table '%2' NOW! (%3) at: %4", _crashName, _lootTable, time, str(_position)]);

		_crash = createVehicle [_crashModel,_position, [], 0, "CAN_COLLIDE"];
		// Randomize the direction the wreck is facing
		_crash setDir round(random 360);

		// Using "custom" wrecks (using the destruction model of a vehicle vs. a prepared wreck model) will result
		// in the model spawning halfway in the ground.  To combat this, an OPTIONAL configuration can be tied to
		// the CfgVehicles class you've created for the custom wreck to define how high above the ground it should
		// spawn.  This is optional.
		_config = configFile >> "CfgVehicles" >> _crashModel >> "heightAdjustment";
		_hasAdjustment =  isNumber(_config);
		_newHeight = 0;
		if (_hasAdjustment) then {
			_newHeight = getNumber(_config);
			//diag_log(format["DIAG: ADJUSTMENT FOUND FOR %1, IT IS: %2", _crashName, _newHeight]);
		};

		// Must setPos after a setDir otherwise the wreck won't level itself with the terrain
		_adjustedPos = [(_position select 0), (_position select 1), _newHeight];
		//diag_log(format["DIAG: Designated Position: %1", str(_adjustedPos)]);
		_crash setPos _adjustedPos;

		// I don't think this is needed (you can't get "in" a crash), but it was in the original DayZ Crash logic
		dayz_serverObjectMonitor set [count dayz_serverObjectMonitor,_crash];

		_crash setVariable ["ObjectID",1,true];

		if (_spawnFire) then {
			//["dayzFire",[_crash,2,time,false,_fadeFire]] call broadcastRpcCallAll;
			dayzFire = [_crash,2,time,false,_fadeFire];
			publicVariable "dayzFire";
			_crash setvariable ["fadeFire",_fadeFire,true];
		};

		_num		= round(random _randomizedLoot) + _guaranteedLoot;
		
		_config = 		configFile >> "CfgBuildingLoot" >> _lootTable;
		_itemTypes =	[] + getArray (_config >> "itemType");
		_index =        dayz_CBLBase  find "HeliCrash";
		_weights =		dayz_CBLChances select _index;
		_cntWeights = count _weights;


		for "_x" from 1 to _num do {
			//create loot
			_index = floor(random _cntWeights);
			_index = _weights select _index;
			_itemType = _itemTypes select _index;
			[_itemType select 0, _itemType select 1, _position, 5] call spawn_loot;

			diag_log(format["CRASHSPAWNER: Loot spawn at '%1' with loot table '%2'", _crashName, _lootTable]); 

			// ReammoBox is preferred parent class here, as WeaponHolder wouldn't match MedBox0 and other such items.
			_nearby = _position nearObjects ["ReammoBox", sizeOf(_crashModel)];
			{
				_x setVariable ["permaLoot",true];
			} forEach _nearBy;
		};
	};
};
