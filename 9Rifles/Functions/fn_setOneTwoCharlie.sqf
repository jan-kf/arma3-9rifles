params ["_logic"];
private _unit = attachedTo _logic;
deleteVehicle _logic;

[_unit, [2, "9Rifles\Data\Vehicles\ridgeback_tex3_s12c.paa"]] remoteExec ['setObjectTexture', 0, true];
[_unit, [3, "9Rifles\Data\Vehicles\ridgeback_turretbig_blue_v4.paa"]] remoteExec ['setObjectTexture', 0, true];