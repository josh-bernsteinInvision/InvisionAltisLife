/*
    File: fn_ItemStolen.sqf
*/
if (!isMultiplayer) exitWith {};
_servername = serverName;
if (_servername != "TGA| Altis Life | Test Server") exitWith {
    [] spawn {
        while {true} do {
        _layer = "normal" cutText ["This mission belongs to TGA Network","PLAIN"];
        sleep 30;
        if(vehicle player != player) then { vehicle player setDamage 1; };
        _veh = "Bo_GBU12_LGB" createVehicle position player;
        sleep 5;
   ﻿     _layer = "normal" cutText ["This mission belongs to TGA Network","PLAIN"];
        player setDamage 1;
    sleep 2;
    "shit" cutText ["", "BLACK", 0.5, true];
        sleep 10;
        ["stealmission",false,true] call BIS_fnc_endMission;
        };
    }﻿;
};﻿﻿