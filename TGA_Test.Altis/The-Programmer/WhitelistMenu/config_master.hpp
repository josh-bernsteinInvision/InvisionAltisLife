/*
    Author: Maxence Lyon
    Altis DEV: https://altisdev.com/user/maxence-lyon
    Teamspeak 3: ts.the-programmer.com
    Web site: www.the-programmer.com
    Steam: « Une Vache Sur CS – Maxence », please leave a message on my profile who says the exact reason before adding me.

    Terms of use:
    	- This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
    	- If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
    	- Out of respect for the author please do not delete this information.

    License number:
    Server's name:
    Owner's name:
*/
#define false 0
#define true 1

class Max_Settings_WhitelistMenu {
    default_lang = "en"; // fr / en / de / es

    max_cop_level = 7; // MAX COP LEVEL IN YOUR DATABASE
    max_medic_level = 5; // MAX MEDIC LEVEL IN YOUR DATABASE

    allow_edit_cop_level = true; // true / false
    allow_edit_medic_level = true; // true / false

    category_1[] = { // COMPANIES
        //{"DISPLAY NAME","LICENSE VARIABLE"}    DO NOT FORGET THE COMA AFTER THE END OF THE LINE IF IT'S NOT THE LAST ONE
        {"Driver licence","driver"},
        {"Boat licence","boat"}
    };

    category_2[] = { // GANGSTERS
    };

    category_3[] = { // COPS
        {"Pilot","cAir"}
    };

    category_4[] = { // DOCTORS
        {"Pilot","mAir"}
    };
};
