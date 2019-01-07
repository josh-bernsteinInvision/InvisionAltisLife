#include "..\..\script_macros.hpp"
/*
    File:   fn_Robshops.sqf
    Author: MrKraken

    Description:

    Modified by: Pril


*/
private ["_robber","_shop","_kassa","_ui","_pgText","_progress","_cP","_rip","_action"];

_shop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_robber = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param;
_action = [_this,2] call BIS_fnc_param;
if(side _robber !=civilian) exitWith {hint "You need to be a civilian to rob this shop.";};
if(_robber distance _shop > 3) exitWith {hint "You need to stay within 3m to rob this shop";};
if (vehicle player !=_robber) exitWith {hint "You need to be out of your vehicle first!";};

if!(alive _robber) exitWith {};
if (currentWeapon _robber isEqualTo "") exitWith {hint "You need a weapons to rob this shop!";};

_rip = true;
_kassa = 5000 + round(random 50000);
_shop removeAction _action;
//[_shop, _action, 300] remoteExec ["life_fnc_shopRobbed",civilian];
_chance = random(100);

if(_chance >=60) then {
[1,format["000 ALERT:\n\nA gas station is being robbed by %2",_robber, name _robber]] remoteExec ["life_fnc_broadcast",west]
};

disableSerialization;
5 cutRsc ["life_progress", "PLAIN"];
_ui = uiNamespace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Robbing Shop, stay close (3m) (1%1)...","%"];
_progress progressSetPosition 0.01;
_cP = 0.01;

if(_rip) then
{
    while{true} do
        {
            sleep 0.85;
            _cP = _cP + 0.01;
            _progress progressSetPosition _cP;
            _pgText ctrlSetText format ["Robbing Shop, stay close (3m)  (%1%2)...",round(_cP * 100), "%"];

             if (LIFE_SETTINGS(getNumber,"robberyMarkers") isEqualTo 1) then {
                _marker = createMarker ["Marker200", _shop];
                "Marker200" setMarkerColor "ColorRed";
                "Marker200" setMarkerText "ATTENTION: ROBBERY IN PROGRESS!!!";
                "Marker200" setMarkerType "mil_warning";
                };

            if(_cP >=1) exitWith {};
            if(_robber distance _shop > 3.5) exitWith{};
            if!(alive _robber) exitWith {};
        };

        if(_robber getVariable "restrained") exitWith {_rip = false; hint "You have been restrained!!";};      //Player got arrested, or restrained by another player!
        if(life_istazed) exitWith {_rip = false; hint "You were tazed!";};                                     //Player was tazed
        if!(alive _robber) exitWith {_rip = false;};

        if(_robber distance _shop > 3.5) exitWith {
        hint "You need to stay within 3m to rob this shop! Cash register is now locked, and police have been notified!";
         5 cutText ["","PLAIN"];
        [1,format["%1 attempted to rob a gas station!",_robber,name _robber]] remoteExec ["life_fnc_broadcast",west];
        [getPlayerUID _robber, _robber getVariable ["realname",name _robber], "211"] remoteExecCall ["life_fnc_wantedAdd", RSERV];
        };
        5 cutText ["","PLAIN"];

        titleText[format["You managed to steal %1, now get away before the cops arrive!",[_kassa] call life_fnc_numberText], "PLAIN"];
        life_cash = life_cash + _kassa;
        deleteMarker "Marker200";
        _rip = false;
        life_use_atm = false;
        playSound3D ["A3\Sounds_F\sfx\alarm_independent.wss", _robber];
        sleep 25;
        [1, format["Altis News Corp: A gas staion was recently robbed for a total of $%2", [_kassa] call life_fnc_numberText]] remoteExec ["life_fnc_broadcast", civilian];
        sleep ((LIFE_SETTINGS(getNumber,"noatm_timer")) * 60);
        life_use_atm = true;
        _shop addAction
        if!(alive _robber) exitWith {};
        [getPlayerUID _robber, _robber getVariable ["realname",name _robber], "211"] remoteExecCall ["life_fnc_wantedAdd", RSERV];
        call SOCK_fnc_updatePartial;
        };
