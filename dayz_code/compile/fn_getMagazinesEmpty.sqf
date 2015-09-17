/*
	Эта функция производит поиск пустых магазинов в инвенторе юнита, и возвращает массив найденных элементов.
	
	Вызов:
	_unit call PTm_fnc_getMagazinesEmpty
	
	Параметры:
	_unit  = Объект в инвенторе которого необходимо произвести поиск
	
	Пример:
	_countEmpty = player call PTm_fnc_getMagazinesEmpty;
	
	Возвращаемое значение имеет формат:
	_countEmpty = [["Class",0],["Class",0],["Class",0], ....]
	
	Created by SteelRat ( ProjectTeam )
*/

Private ["_unit","_magazinesEmpty","_item","_items","_index","_return"];

_unit =				_this;
_return =			[];
_magazinesEmpty = 	[];
_items = 			(uniformItems _unit) + (vestItems _unit) + (backpackItems _unit);

{
	_isOK = isClass(configFile >> "CfgMagazines" >> _x);
	if (_isOK) then {
		_magazinesEmpty set [count _magazinesEmpty, _x];
	};
} forEach _items;

{
	if (typeName _x == "ARRAY") then {
		_item = _x select 0;
	} else {
		_item = _x;
	};
	
	_index = _magazinesEmpty find _item;
	if (_index != -1) then {
		_magazinesEmpty SET [_index, ""];
	};
} forEach magazines _unit;

{
	if (_x != "") then {
		_return set [count _return, [_x, 0]];
	};
} forEach _magazinesEmpty;

_return