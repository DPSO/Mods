#include "script_component.hpp"
ADDON = false;
#include "XEH_PREP.hpp"

GVAR(aceSafemode)= isClass (configFile >> "CfgPatches" >> "ace_safemode");
GVAR(warningGrenadeConfirmed) = profileNamespace getVariable [QGVAR(warningGrenadeConfirmed), false];

#include "initSettings.sqf"

if (hasInterface) then {

    [QGVAR(enableSafety), {
        params ["_player"];

        [_player] call FUNC(lowerWeapon);

        if (GVAR(aceSafemode) && {GVAR(startLocked)}) then {
            [_player, currentWeapon _player, true] call ACEFUNC(safemode,setWeaponSafety);
        };

        if (DIK_G in actionKeys "Throw" && {!GVAR(warningGrenadeConfirmed)}) then {
            [] call FUNC(warnGrenade);
        };

    }] call CBA_fnc_addEventHandler;

    [QGVAR(lowerWeapon), {
        params ["_unit"];

        _unit action ["WeaponOnBack", _unit];

    }] call CBA_fnc_addEventHandler;
};

ADDON = true;
