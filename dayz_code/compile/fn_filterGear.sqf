/*
	��� ������� ���������� ����� ���� ��������� ������������ ������ � ��������� �����, � ���������� ������ ��������� ���������.
	
	�����:
	[_class,_unit] call PTm_fnc_filterGear
	
	���������:
	_class = ��� ������ ��� ������, ����������� � ������ �����
	_unit  = ������ � ��������� �������� ���������� ���������� �����
	
	������:
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

// ���� ������ ���������
{
	if (_x select 0 == _class) then {
		_return set [count _return, _x];
	};
} forEach (_unit call PTm_fnc_getMagazinesEmpty);

_return