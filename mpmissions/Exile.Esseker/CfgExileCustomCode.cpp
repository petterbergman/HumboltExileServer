class CfgExileCustomCode 
{
	ExileServer_system_rcon_setupEvents = "codes\ExileServer_system_rcon_setupEvents.sqf"; // restart adjust
	
	ExileServer_object_vehicle_database_load = "safezones\ExileServer_object_vehicle_database_load.sqf"; //remove ammo
	ExileServer_object_vehicle_network_unlockVehicleRequest = "codes\ExileServer_object_vehicle_network_unlockVehicleRequest.sqf"; // godmode off
	
	ExileServer_object_player_network_createPlayerRequest = "codes\loadouts\ExileServer_object_player_network_createPlayerRequest.sqf"; //loadouts
	ExileClient_object_player_bambiStateBegin = "codes\loadouts\ExileClient_object_player_bambiStateBegin.sqf";		//announce respect needed
	
	ExileServer_world_spawnVehicles = "codes\ExileServer_world_spawnVehicles.sqf";		//vehicles spawns outside map fix
	ExileClient_object_item_construct = "codes\build\ExileClient_object_item_construct.sqf";		//restricted aera
	ExileClient_object_player_event_onEnterSafezone = "codes\ExileClient_object_player_event_onEnterSafezone.sqf";  //safezone towing fix
	
	//Infistar Trader Logs
	ExileServer_system_trading_network_sellItemRequest = "codes\logs\ExileServer_system_trading_network_sellItemRequest.sqf";
	ExileServer_system_trading_network_purchaseItemRequest = "codes\logs\ExileServer_system_trading_network_purchaseItemRequest.sqf";
	ExileServer_system_trading_network_purchaseVehicleRequest = "codes\logs\ExileServer_system_trading_network_purchaseVehicleRequest.sqf";
	ExileServer_system_territory_network_payTerritoryProtectionMoneyRequest = "codes\logs\ExileServer_system_territory_network_payTerritoryProtectionMoneyRequest.sqf";
	ExileServer_system_trading_network_wasteDumpRequest = "codes\logs\ExileServer_system_trading_network_wasteDumpRequest.sqf";
	ExileServer_system_trading_network_sendMoneyRequest = "codes\logs\ExileServer_system_trading_network_sendMoneyRequest.sqf";
	ExileServer_object_player_event_onMpKilled = "codes\logs\ExileServer_object_player_event_onMpKilled.sqf";
	
	//Ammo Vehicles Fix
	ExileServer_object_vehicle_createNonPersistentVehicle = "codes\ammo\ExileServer_object_vehicle_createNonPersistentVehicle.sqf"; 
	ExileServer_object_vehicle_createPersistentVehicle = "codes\ammo\ExileServer_object_vehicle_createPersistentVehicle.sqf"; 
	
	ExileClient_gui_map_event_onDraw = "codes\map\ExileClient_gui_map_event_onDraw.sqf"; //on map gps
	//revive system
	ExileClient_object_player_death_startBleedingOut = "custom\EnigmaRevive\ExileClient_object_player_death_startBleedingOut.sqf"; //Happys Revive
	ExileClient_object_player_event_onInventoryOpened = "custom\EnigmaRevive\ExileClient_object_player_event_onInventoryOpened.sqf"; //Happys Revive AntiDupe ---NEW with v0.65
	
	//XM8APP
	ExileClient_gui_xm8_slide_apps_onOpen = "xm8Apps\ExileClient_gui_xm8_slide_apps_onOpen.sqf";
	
	ExileServer_object_tree_network_chopTreeRequest = "codes\fix\ExileServer_object_tree_network_chopTreeRequest.sqf";
};