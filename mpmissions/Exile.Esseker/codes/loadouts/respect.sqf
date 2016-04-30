
uiSleep 5;

_respect = ExileClientPlayerScore;

switch (true) do 
{
	
	case (_respect < 2500):
	{
		[parseText format["<t size='0.6'>You need to reach 2'500 respect to get your first loadout.</t>"],0,0,10,0] spawn bis_fnc_dynamictext;
	};
	
	case (_respect > 2500 && _respect < 4999):
	{
		[parseText format["<t size='0.6'>You need to reach 5'000 respect for the next loadout.</t>"],0,0,10,0] spawn bis_fnc_dynamictext;
	};
	
	case (_respect > 5000 && _respect < 9999):
	{
		[parseText format["<t size='0.6'>You need to reach 10'000 respect for the next loadout.</t>"],0,0,10,0] spawn bis_fnc_dynamictext;

	};
	
	case (_respect > 10000 && _respect < 14999):
	{
		[parseText format["<t size='0.6'>You need to reach 15'000 respect for the next loadout.</t>"],0,0,10,0] spawn bis_fnc_dynamictext;

	};
	
	case (_respect > 15000 && _respect < 19999):
	{
		[parseText format["<t size='0.6'>You need to reach 20'000 respect for the next loadout.</t>"],0,0,10,0] spawn bis_fnc_dynamictext;

	};	
	
	case (_respect > 20000 && _respect < 29999):
	{
		[parseText format["<t size='0.6'>You need to reach 30'000 respect for the next loadout.</t>"],0,0,10,0] spawn bis_fnc_dynamictext;

	};
	
	case (_respect > 30000 && _respect < 39999):
	{
		[parseText format["<t size='0.6'>You need to reach 40'000 respect for the next loadout.</t>"],0,0,10,0] spawn bis_fnc_dynamictext;

	};
	
	 case (_respect > 40000 && _respect < 49999):
	{
		[parseText format["<t size='0.6'>You need to reach 50'000 respect for the next loadout.</t>"],0,0,10,0] spawn bis_fnc_dynamictext;

	};
	
	case (_respect > 50000):
	{
		[parseText format["<t size='0.6'>You have reach the last loadout. Enjoy it.</t>"],0,0,10,0] spawn bis_fnc_dynamictext;

	};

	default
	{	 
		[parseText format["<t size='0.6'>You need to reach 2,500 respect for the next loadout.</t>"],0,0,10,0] spawn bis_fnc_dynamictext;
	};
};