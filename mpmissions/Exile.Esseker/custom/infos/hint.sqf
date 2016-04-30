waitUntil {!dialog};

[] spawn {
   sleep 20;
	_att = format["[Hi %1!]",name player];
	_att hintC [
	parseText "<t align='center'>Information is in Briefing</t><br/>
	<t align='center'>This is all bullshit....</t><br/>
	<t align='center'>Washbong for President!</t><br/>
	<t align='center'>Washbong for leader of the known Universe!</t><br/>
	<t align='center'>Timbre is allowed to pooh wherever she wants!</t><br/>
];

hintC_arr_EH = findDisplay 72 displayAddEventHandler ["unload", {
	0 = _this spawn {
		_this select 0 displayRemoveEventHandler ["unload", hintC_arr_EH];
		hintSilent "";
	};
}];

sleep 30;
};
