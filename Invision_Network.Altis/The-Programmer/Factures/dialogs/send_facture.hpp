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
class send_facture {
   idd = 5540;
   name = "send_facture";
   movingenable = false;
   enablesimulation = true;
   onload = "[] spawn max_facture_fnc_factureMenu";
   class controlsBackground
   {
       class Life_RscBackground0 : Life_RscBackground
       {
           colorbackground[] = {0, 0, 0, 0.7};
           idc = -1;
           x = 0.339583333333333 * safezoneW + safezoneX;
           y = 0.2 * safezoneH + safezoneY;
           w = 0.323958333333333 * safezoneW;
           h = 0.5 * safezoneH;
       };
   };
   class controls
   {
       class Life_RscTitleBackground : Life_RscText
       {
           idc = 1205;
           colorbackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
           text = "";
           x = 0.339583333333333 * safezoneW + safezoneX;
           y = 0.175 * safezoneH + safezoneY;
           w = 0.323958333333333 * safezoneW;
           h = 0.0216568338249754 * safezoneH;
       };
       class objet : Life_RscEdit
       {
           idc = 5541;
           text = "";
           x = 0.344791666666667 * safezoneW + safezoneX;
           y = 0.38877269426289 * safezoneH + safezoneY;
           w = 0.315104166666667 * safezoneW;
           h = 0.28 * safezoneH;
           linespacing = 1;
           style = 0 + 16 + 0x200;
       };
       class PlayerList : Life_RscCombo
       {
           idc = 5542;
           x = 0.5 * safezoneW + safezoneX;
           y = 0.263616400871459 * safezoneH + safezoneY;
           w = 0.102 * safezoneW;
           h = 0.02 * safezoneH;
       };
       class Life_Rsgdjhdjgh : Life_RscText
       {
           x = 0.4 * safezoneW + safezoneX;
           y = 0.263616400871459 * safezoneH + safezoneY;
           h = 0.02 * safezoneH;
           w = 0.1 * safezoneW;
           text = "";
           idc = 1456;
       };
       class Life_RscTgdjhdgjh3 : Life_RscText
       {
           x = 0.4 * safezoneW + safezoneX;
           y = 0.316071169208424 * safezoneH + safezoneY;
           h = 0.02 * safezoneH;
           w = 0.1 * safezoneW;
           text = "";
           idc = 2540;
       };
       class montant : Life_RscEdit
       {
           idc = 5543;
           text = "";
           x = 0.5 * safezoneW + safezoneX;
           y = 0.316071169208424 * safezoneH + safezoneY;
           w = 0.07 * safezoneW;
           h = 0.02 * safezoneH;
       };
       class Life_RscTdghjdjgh5 : Life_RscText
       {
           x = 0.569453125 * safezoneW + safezoneX;
           y = 0.316071169208424 * safezoneH + safezoneY;
           h = 0.02 * safezoneH;
           w = 0.00999999999999996 * safezoneW;
           text = "";
           idc = 4560;
       };
       class Life_Rshgkjgkhj : Life_RscText
       {
           x = 0.344791666666668 * safezoneW + safezoneX;
           y = 0.361311183732752 * safezoneH + safezoneY;
           w = 0.315104166666667 * safezoneW;
           h = 0.02 * safezoneH;
           text = "";
           idc = 4550;
       };
       class Life_RscTedgjhjgh : Life_RscText
       {
           x = 0.4 * safezoneW + safezoneX;
           y = 0.217305737109659 * safezoneH + safezoneY;
           h = 0.02 * safezoneH;
           w = 0.1 * safezoneW;
           text = "";
           idc = 4561;
       };
       class nomentreprise : Life_RscEdit
       {
           idc = 5544;
           text = "";
           x = 0.5 * safezoneW + safezoneX;
           y = 0.217305737109659 * safezoneH + safezoneY;
           w = 0.102 * safezoneW;
           h = 0.02 * safezoneH;
       };
       class send : Life_RscButtonMenu
       {
           idc = 4562;
           x = 0.339583333333333 * safezoneW + safezoneX;
           y = 0.678516715830875 * safezoneH + safezoneY;
           w = 0.323958333333333 * safezoneW;
           h = 0.022 * safezoneH;
           text = "";
           onbuttonclick = "[] spawn max_facture_fnc_sendFacture";
           class Attributes {align = "center";};
       };
   };
};
