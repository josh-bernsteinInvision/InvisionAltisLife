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

class Max_Settings_Facture {
    default_lang = "en"; // fr / en / de / es

    send_for_cops = true;
    send_for_meds = true;
    send_for_all_civilan = true;
    send_autorized_license_civ[] = { "license_civ_depanneur","license_civ_variable_licence_entreprise" }; //ONLY IF send_for_all_civilan=false !
};
