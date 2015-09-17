createVehicle ["FirePlace_burning_F",[3294.48, 5599.27,0], [],0, "CAN_COLLIDE"];
titleCut ["","BLACK FADED",10e10];

setViewDistance 6000;
setTerrainGrid 3.125;

0 fadeMusic 0;
playMusic "dayz_track_intro_1";
5 fadeMusic 0.5;


_target = [3295.16,5592.97,1.00125122];
_position = [3295.16,5592.97,1.00125122];

_camera = "camera" camCreate position player;
_camera cameraEffect ["internal","back"];

_camera camPrepareTarget _target;
_camera camPreparePos _position;
_camera camPrepareFov 0.5;
_camera camCommitPrepared 0;

sleep 0.01;
showCinemaBorder false;

waitUntil {preloadCamera _position};

titleCut ["","BLACK IN",3];