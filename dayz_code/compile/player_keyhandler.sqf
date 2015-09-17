private ["_handled", "_ctrl", "_dikCode", "_shift", "_ctrlKey", "_alt"];
_ctrl = _this select 0;
_dikCode = _this select 1;
_shift = _this select 2;
_ctrlKey = _this select 3;
_alt = _this select 4;

_handled = false;

switch (_dikCode) do
{
	case 35: //Holster
	{
		if(_shift && !_ctrlKey && currentWeapon player != "") then {
			DZ_curWep_h = currentWeapon player;
			player action ["SwitchWeapon", player, player, 100];
			player switchcamera cameraView;
		};
		
		if(_shift && !_ctrlKey && !isNil "DZ_curWep_h" && {(DZ_curWep_h != "")}) then {
			if(DZ_curWep_h in [primaryWeapon player,secondaryWeapon player,handgunWeapon player]) then {
				player selectWeapon DZ_curWep_h;
			};
		};
	};

	//Space key for Jumping
	case 57:
	{
		if(isNil "jumpActionTime") then {jumpActionTime = 0;};
		if(_shift && {animationState player != "AovrPercMrunSrasWrflDf"} && {isTouchingGround player} && {stance player == "STAND"} && {speed player > 2} && {(velocity player) select 2 < 2.5} && {time - jumpActionTime > 1.5}) then {
			jumpActionTime = time; //Update the time.
			[player,true] spawn dz_fnc_jumpFnc; //Local execution
			[[player,false],"dz_fnc_jumpFnc",nil,FALSE] call bis_fnc_MP; //Global execution 
			_handled = true;
		};
	};
	
	case 210:
	{			
		if (!dz_debugmonitor) then 
		{
			dz_debugmonitor = true;
			[] execVM "\z\addons\dayz_code\actions\playerstats.sqf";
		}else{
			dz_debugmonitor = false;
			hintSilent '';
			[] execVM "\z\addons\dayz_code\actions\playerstats.sqf";
		};
	};		
};


_handled;  
	