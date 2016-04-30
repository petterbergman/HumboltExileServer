6m/*
	File: rules.sqf
	For exile edited by Repentz
*/
disableSerialization;
[
	"",
	0,
	0.2,
	10,
	0,
	0,
	8
] spawn BIS_fnc_dynamicText;

createDialog "RscDisplayWelcome";

_display = findDisplay 999999;
_text1 = _display displayCtrl 1100;
_buttonSpoiler = _display displayctrl 2400;
_textSpoiler = _display displayctrl 1101;
_text2 = _display displayCtrl 1102;

_message = "";
_message = _message + "<t align='center' size='2' shadow='0'></t><br />";
_message = _message + "<t align='center' size='2' shadow='0'><a href='' color='#ff0000'>NEW : </a> HumboltGaming appreciates any donations you want to give!</t><br />";
_message = _message + "<t align='center' size='2' shadow='0'></t><br />";
_message = _message + "<t align='center' size='2' shadow='0'><a href='' color='#ff0000'>NEW : </a> To donate, Click on the link : <a href='http://www.humboltgaming.com/stats'color='#ff9900'>Donate link</a></t><br />";
_message = _message + "<t align='center' size='2' shadow='0'></t><br />";
_message = _message + "<t align='center' size='2' shadow='0'><a href='' color='#ff9900'>Donation Box</a></t><br />";


//Fill only the first text
_text1 ctrlSetStructuredText (parseText _message);

//Resize StructuredText component to display the scrollbar if needed
_positionText1 = ctrlPosition _text1;
_yText1 = _positionText1 select 1;
_hText1 = ctrlTextHeight _text1;
_text1 ctrlSetPosition [_positionText1 select 0, _yText1, _positionText1 select 2, _hText1];
_text1 ctrlcommit 0;
//Hide second text, spoiler text and button
_buttonSpoiler ctrlSetFade 1;
_buttonSpoiler ctrlCommit 0;
_buttonSpoiler ctrlEnable false;
_textSpoiler ctrlSetFade 1;
_textSpoiler ctrlCommit 0;
_text2 ctrlSetFade 1;
_text2 ctrlCommit 0;
