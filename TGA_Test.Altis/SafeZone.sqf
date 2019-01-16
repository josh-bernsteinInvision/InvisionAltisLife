//////////////////////////////////////////////////////////////////
// Function file for Armed Assault
// Created by: TODO: Author Name
//////////////////////////////////////////////////////////////////
_title1  = "<t color='#ff0000' size='1.2' shadow='1' shadowColor='#000000' align='center'>You have Entered the Safezone!</t>";
_title2  = "<t color='#ff0000' size='1.2' shadow='1' shadowColor='#000000' align='center'>You have Left the Safezone</t>";
_title1u  = "<t color='0080FF' size='1.2' shadow='1' shadowColor='#000000' align='center'>Hostile RP is now forbidon</t>";

while {true} do
{
 	waituntil {((player distance safezone) <= 80);};
	hint parsetext(_title1 + _title1u);
	player allowDammage false;;
	waituntil {((player distance safezone) > 80);};
	hint parseText(_title2);
	player allowDammage true;
};

