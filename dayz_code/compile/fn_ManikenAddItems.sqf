/*
	Author: SteelRat ( ProjectTeam )
*/

fnc_SelectType = {
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
_Object = 	_this select 2;

switch (_iClass) do {
	
	default {
	
	};	
	case "uniform_civilian": {
		if (uniform _Object == "") then {
			[[[_Object,(_iClass call fnc_SelectType)],{(_this select 0) addUniform (_this select 1);}],"BIS_fnc_spawn"] spawn BIS_fnc_MP;
		};
	};	
	case "uniform_military": {
		if (uniform _Object == "") then {
			[[[_Object,(_iClass call fnc_SelectType)],{(_this select 0) addUniform (_this select 1);}],"BIS_fnc_spawn"] spawn BIS_fnc_MP;
		};
	};
	case "headgear_civilian": {
		if (headgear _Object == "") then {
			[[[_Object,(_iClass call fnc_SelectType)],{(_this select 0) addHeadgear (_this select 1);}],"BIS_fnc_spawn"] spawn BIS_fnc_MP;
		};
	};
	case "headgear_military": {
		if (headgear _Object == "") then {
			[[[_Object,(_iClass call fnc_SelectType)],{(_this select 0) addHeadgear (_this select 1);}],"BIS_fnc_spawn"] spawn BIS_fnc_MP;
		};
	};
	case "glasses_civilian": {
		if (goggles _Object == "") then {
			[[[_Object,(_iClass call fnc_SelectType)],{(_this select 0) addGoggles (_this select 1);}],"BIS_fnc_spawn"] spawn BIS_fnc_MP;
		};
	};
	case "glasses_military": {
		if (goggles _Object == "") then {
			[[[_Object,(_iClass call fnc_SelectType)],{(_this select 0) addGoggles (_this select 1);}],"BIS_fnc_spawn"] spawn BIS_fnc_MP;
		};
	};
	case "vest": {
		if (vest _Object == "") then {
			[[[_Object,(_iClass call fnc_SelectType)],{(_this select 0) addVest (_this select 1);}],"BIS_fnc_spawn"] spawn BIS_fnc_MP;
		};
	};
	case "backpack": {
		if (backpack _Object == "") then {
			[[[_Object,(_iClass call fnc_SelectType)],{(_this select 0) addBackpack (_this select 1);}],"BIS_fnc_spawn"] spawn BIS_fnc_MP;
		};
	};
};
