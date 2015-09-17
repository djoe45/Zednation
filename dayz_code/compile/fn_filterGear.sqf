/*
	Эта функция производит поиск всех элементов определённого класса в инвенторе юнита, и возвращает массив найденных элементов.
	
	Вызов:
	[_class,_unit] call PTm_fnc_filterGear
	
	Параметры:
	_class = Имя класса для поиска, определённое в конфиг файле
	_unit  = Объект в инвенторе которого необходимо произвести поиск
	
	Пример:
	["30Rnd_9x21_Mag", player] call PTm_fnc_filterGear;
	
	Created by SteelRat ( ProjectTeam )
*/

Private ["_class","_unit","_magazinesAmmo","_return"];

_class			= _this select 0;
_unit			= _this select 1;
_magazinesAmmo	= magazinesAmmo _unit;
_return			= [];

{
	if (_class == _x select 0) then {
		_return SET [count _return, _x];
	};
} forEach _magazinesAmmo;

// Учёт пустых магазинов
{
	if (_x select 0 == _class) then {
		_return set [count _return, _x];
	};
} forEach (_unit call PTm_fnc_getMagazinesEmpty);

_return