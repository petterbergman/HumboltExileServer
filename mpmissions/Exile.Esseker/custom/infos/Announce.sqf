
	_announceText = [
				"TIPS : Website : www.sagergaming.com",
				"TIPS : Join Our Teamspeak : ts.sagergaming.com",
				"TIPS : Admin : Bruiser",
				"TIPS : Adjust view distance to increase FPS",
				"TIPS : Zombies hordes can invade towns",
				"TIPS : SagerGaming Servers are free to Play but all donations are very much appreciated.",
				"TIPS : Night Vision don't spawn. You can Buy them",
				"TIPS : Spawned loot message appear now",
				"TIPS : You can donate! ",
				"TIPS : Mission are hard. Be carefull",
				"TIPS : Loadouts based on respect",
				"TIPS : Active admin and Update weekly",
				"TIPS : This is a PVP Server!",
				"TIPS : Restarts are every 3 hours",
				"TIPS : SagerGaming Servers are free to Play but all donations are very much appreciated.",
				"TIPS : You got a problem ? Message an Admin"
				];
				


while {true} do {
	sleep 600;
	_Text = _announceText call BIS_fnc_selectRandom;
	systemChat _Text;
};