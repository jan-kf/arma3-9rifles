params ["_logic"];
private _unit = attachedTo _logic;
deleteVehicle _logic;

[_unit, [2, "9Rifles\Data\Vehicles\tesco.paa"]] remoteExec ['setObjectTexture', 0, true];
[_unit, [3, "9Rifles\Data\Vehicles\USA_turret.paa"]] remoteExec ['setObjectTexture', 0, true];

