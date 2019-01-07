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
class facture_list {
   idd = 4510;
   name = "facture_list";
   movingenable = 0;
   enablesimulation = 1;
   onload = "[] spawn max_facture_fnc_factureListMenu;";
   class controlsBackground
   {
       class MainBackground : Life_RscText
       {
           idc = -1;
           colorbackground[] = {0,0,0,0.7};
           x = 0.314375 * safezoneW + safezoneX;
           y = 0.313 * safezoneH + safezoneY;
           w = 0.37125 * safezoneW;
           h = 0.396 * safezoneH;
       };
       class Life_RscTitleBackground : Life_RscText
       {
           idc = 5265;
           colorbackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
           text = "";
           x = 0.314375 * safezoneW + safezoneX;
           y = 0.291 * safezoneH + safezoneY;
           w = 0.37125 * safezoneW;
           h = 0.022 * safezoneH;
       };
   };
   class controls
   {
       class create_facture : Life_RscButtonMenu
       {
           idc = 5420;
           text = "";
           onbuttonclick = "createDialog ""send_facture"";";
           x = 0.529582833333333 * safezoneW + safezoneX;
           y = 0.676 * safezoneH + safezoneY;
           w = 0.069063 * safezoneW;
           h = 0.022 * safezoneH;
           class Attributes {align = "center";};
       };
       class received_factures : Life_RscButtonMenu
       {
           idc = 5421;
           text = "";
           onbuttonclick = "[getPlayerUID player] remoteExec [""max_facture_fnc_getFacturesReceived"",2];";
           x = 0.324687 * safezoneW + safezoneX;
           y = 0.676 * safezoneH + safezoneY;
           w = 0.069063 * safezoneW;
           h = 0.022 * safezoneH;
           class Attributes {align = "center";};
       };
       class sended_factures : Life_RscButtonMenu
       {
           idc = 5422;
           text = "";
           onbuttonclick = "[getPlayerUID player] remoteExec [""max_facture_fnc_getFacturesSended"",2];";
           x = 0.405729166666667 * safezoneW + safezoneX;
           y = 0.676 * safezoneH + safezoneY;
           w = 0.069063 * safezoneW;
           h = 0.022 * safezoneH;
           class Attributes {align = "center";};
       };
       class close : Life_RscButtonMenu
       {
           idc = 2911;
           text = "$STR_Global_Close";
           onbuttonclick = "closeDialog 0;";
           x = 0.608228666666667 * safezoneW + safezoneX;
           y = 0.676 * safezoneH + safezoneY;
           w = 0.069063 * safezoneW;
           h = 0.022 * safezoneH;
           class Attributes {align = "center";};
       };
       class facture_list : Life_RscListBox
       {
           idc = 2902;
           text = "";
           sizeex = 0.035;
           onlbselchanged = "[_this] spawn max_facture_fnc_lbChangedFacture;";
           x = 0.324687 * safezoneW + safezoneX;
           y = 0.335 * safezoneH + safezoneY;
           w = 0.149271333333333 * safezoneW;
           h = 0.332649950835792 * safezoneH;
       };
       class facture_info : Life_RscStructuredText
       {
           idc = 2903;
           text = "";
           x = 0.477604166666667 * safezoneW + safezoneX;
           y = 0.335 * safezoneH + safezoneY;
           w = 0.1984375 * safezoneW;
           h = 0.303151425762045 * safezoneH;
           colorbackground[] = {0,0,0,0.7};
       };
       class pay_facture : Life_RscButtonMenu
       {
           idc = 5423;
           text = "";
           onbuttonclick = "[] call max_facture_fnc_payFacture;";
           x = 0.608228666666667 * safezoneW + safezoneX;
           y = 0.647800393313668 * safezoneH + safezoneY;
           w = 0.069063 * safezoneW;
           h = 0.022 * safezoneH;
           class Attributes {align = "center";};
       };
       class refuse_facture : Life_RscButtonMenu
       {
           idc = 5424;
           text = "";
           onbuttonclick = "[] call max_facture_fnc_refuseFacture;";
           x = 0.529582833333333 * safezoneW + safezoneX;
           y = 0.647800393313668 * safezoneH + safezoneY;
           w = 0.069063 * safezoneW;
           h = 0.022 * safezoneH;
           class Attributes {align = "center";};
       };
   };
};
