uiSleep 10;
if (!hasInterface) exitWith {};

waitUntil {!isNil "ExileClientLoadedIn"};
 // Waits for Exile to finish up

player createDiarySubject ["Main","Rules"];
player createDiarySubject ["Main 2","Building"];
player createDiarySubject ["Main 3","Safe Zone"];
player createDiarySubject ["Info","General"];
player createDiarySubject ["Info 2","Useful"];
player createDiarySubject ["Info 3","Staff"];
player createDiarySubject ["Info 4","NEW"];
player createDiarySubject ["credits", "Credits"];


	player createDiaryRecord ["Main",
		[
			"Rules",
		"
	<br/> - English only in side chat.
	<br/>
	<br/> - No hacking, no duping, no glitching, nor any exploits of any kind - NO EXCEPTIONS!
	<br/>
	<br/> - Respect all players and Admins at all times.
	<br/>
	<br/> - Glitching into another player's base is not allowed (Running at a wall and diving into it, vaulting into a wall ect . .) and will be dealt with accordingly.
	<br/>
	<br/> - Helicopters will not be used to “Kamikaze” into other players bases.
    <br/> 
	<br/> - The use of cars, trucks, vans, quadbikes, bikes or any other vehicle as projectiles from helicopters to damage bases or players (Sling Bombing) Is not allowed and will result in corrective action.
		"
		]
	];
	player createDiaryRecord ["Main 2",
		[
			"Building",
		"								
	<br/> - Bases must be 500m away from ANY Military location and 1KM from ANY Spawn or Trade location.
	<br/>
	<br/> - No building within 500 meters of any Black Market Traders.
	<br/>
	<br/> - Roads and bridges must not be obstructed by bases. The same goes for mission areas like the prison and military loot areas as well. Your base will be removed without warning if you violate this rule.
	<br/> - Territory-
		<br/> 	Level	Cost 	Radius 	Pieces
		<br/> 	Level 1	{5000,	15, 	30}
		<br/> 	Level 2	{7500,	30, 	60}
		<br/> 	Level 3	{10000,	45, 	90}
		<br/> 	Level 4	{12500,	60, 	120}
		<br/> 	Level 5	{15000,	75, 	150}
		<br/> 	Level 6	{17500,	90, 	180}
		<br/> 	Level 7	{20000,	105,	210}
		<br/> 	Level 8	{22500,	120,	240}
		<br/> 	Level 9	{30000,	135,	325}
		<br/> 	Level 10{50000,	150,	550}
		"
		]
	];
	player createDiaryRecord ["Main 3",
		[
			"Safe Zone",
		"
	<br/>-Safe zones are for trading only. Any players found to be using the safe zones to exit frag or camp will be subject to removal from SG servers. Any proof of Safe Zone camping will result in an immediate ban for 24 hours.
	<br/>
	<br/>-The safe zone is not for your vehicle storage.
	<br/>
	<br/>-Any vehicles left within a safe zone after a restart will be automatically unlocked and are free to take.
	<br/>
	<br/>-Do NOT leave your vehicle in safe zone over a restart and you will be fine. This does not mean you are allowed to camp a vehicle and steal directly from a player in Safe Zone, that is not allowed.
	<br/>
	<br/>-There is a BIG difference in taking one of those vehicles and stealing outright from another player when they are in a safe zone directly. If someone is trying to steal from you directly, please post a screenshot to the forums, then contact an admin the thieves will then be dealt with.
    <br/>
	<br/>-Theft directly from players within Safe zones is a serious offense.
		"
		]
	];
	player createDiaryRecord ["Info",
		[
			"General",
		"
	<br/>-The server will auto-kick ALL players 1 minute prior to restart.
	<br/>
	<br/>-All spawned vehicles you find in the world disappear on restarts, so you need to buy a vehicle with a lock to keep it safe.
	<br/>
	<br/>-To avoid confusion, players entering safe zones should always park away from other players and lock their vehicle.
	<br/>
	<br/>-TeamSpeak IP: ts.humboltgaming.com
	<br/>
	<br/>IMPORTANT: VEHICLES WILL FALL FROM THE AIR WHEN SIGNING IN NEAR THEM, THE SERVER WILL NOT BE RESPONSIBLE FOR LOST VEHICLES DUE TO THIS GLITCH	
		"
		]
	];
	player createDiaryRecord ["Info 2",
		[
			"Useful",
		"
		<br/>-Key Bindings-
		<br/>1 = Primary
		<br/>2 = Secondary
		<br/>3 = Optional (Axe / Launcher)
		<br/>4 = Holster your current weapon
		<br/>5 = Earplugs
		<br/>0 = Autorun<br/>
		
		<br/>-Loot-
		<br/>-Different types of loot will spawn depending on what type of building you are in
		<br/>-Military buildings will often spawn Helmets; Uniforms; Chest Rigs; Backpacks; Ammo AND Weapons
		<br/>-Civilian Buildings will spawn weapons and ammo as well, but only low grade weapons like 5.56 and 6.5. They will also spawn items like food/drinks; building supplies; fuel; attachments; ETC. 
		<br/>-Selling items or using the waste dump will now earn you respect<br/>
		<br/>-Vehicle Spawns-				
		<br/>-Rare vehicles spawn away from player spawn zone locations. 
		<br/>-Normal vehicles like hatchback and and offroad truck spawn close to spawn zones. 
		<br/>-Both of them are non-persistent, so they will de-spawn on server restarts.
		<br/>-Vehicle Cleanup: 10 days from last used date
		<br/> Base Cleanup: 10 days from last payed date
		<br/>
		<br/>-Server Features-
		<br/>-Custom Missions
		<br/>-Zombies
		"
		]
	];
	player createDiaryRecord ["Info 3",
		[
			"Staff",
		"
		<br/>Bruiser - Owner
		<br/>
		<br/>
		<br/>
		"
		]
	];
	
	player createDiaryRecord ["Info 4",
		[
			"NEW",
		"
		<br/>Added Zombies back in. Changed server restarts to 3 Hours.
		<br/>2-22-16
		<br/>
		<br/>-Check back here for announcements related to the server. 
		<br/>12/08/2015
		<br/>-
		"
		]
	];
	player createDiaryRecord
["credits",
	[
		"Credits",
		"
		<br/> 
		<br/> Defent and Eraser1 (DMS Mission System)
		<br/> Infistar (AnitHack / Admin Tools)
		"
	]
];