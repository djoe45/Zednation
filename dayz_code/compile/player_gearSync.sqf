/*
	Author: SteelRat ( ProjectTeam )
*/

private ["_objects","_inventory"];

_debug = false;

_objects = nearestObjects [getPosATL player, config_VehiclesCheck, 20];
{
	dayzUpdateVehicle = [_x,"gear"];
	publicVariable "dayzUpdateVehicle";
} foreach _objects;

_inventory = player call ptm_fnc_getInventory;

if (_debug) then {
	diag_log format ["DEBUG: player_gearSync: %1: %2", player, _inventory];
};

dayz_unsaved = true;
dayz_Magazines = _inventory;