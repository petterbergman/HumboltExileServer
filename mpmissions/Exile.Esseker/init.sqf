
[] execVM "custom\money\takegive_poptab_init.sqf";			// money refull
execVM "R3F_LOG\init.sqf";									// towing
[] execVM "IgiLoad\IgiLoadInit.sqf";  // Igiload
if(hasInterface) then{
	[] execVM "custom\service\service_point.sqf";			// refull / rearm
    [] execVM "custom\infos\hint.sqf";						// welcome message
	[] execVM "custom\infos\Announce.sqf"; 					// announcement
};


	
if (!isDedicated && hasInterface) then {
	null =[] execVM "custom\infos\briefing.sqf";			// Briefing and Rules
	[] execVM "addons\ZCP.sqf";								// zcp notification
	
	_GF = [] execVM "addons\ground_fog.sqf";					// fog
	call compileFinal preprocessFileLineNumbers "addons\statusBar\statusbar.sqf"; //Status Bar
	[] execVM "custom\infos\welcome.sqf";					//Welcome Messages
	execVM "voiceControl.sqf"; // voice canal camp
	[] execVM "custom\KillMessages.sqf";					// Kill Messages By GR8
	
};
[] execVM "Custom\EnigmaRevive\init.sqf";					//revive
call ExileClient_system_map_initialize 
NETmonkey_fnc_Hidebody = compileFinal preprocessFileLineNumbers "addons\Hide\HideBody.sqf"; //hide body
JohnO_fnc_repairWheels = compileFinal preprocessFileLineNumbers "codes\repair\JohnO_fnc_repairWheels.sqf";
JohnO_fnc_repairchopper = compileFinal preprocessFileLineNumbers "codes\repair\JohnO_fnc_repairchopper.sqf";
JohnO_fnc_repairchopperhalf = compileFinal preprocessFileLineNumbers "codes\repair\JohnO_fnc_repairchopperhalf.sqf";
JohnO_fnc_vehicleRepairCar = compile preprocessFileLineNumbers "codes\repair\JohnO_fnc_vehicleRepairCar.sqf";
