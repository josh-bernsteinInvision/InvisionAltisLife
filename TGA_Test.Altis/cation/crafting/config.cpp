/*
    File: config.cpp
    Author: B4v4r!4n_Str!k3r (julianbauer@cationstudio.com)
    Licence: THIS FILE AND EXTRACTS OF IT IS THE MINDSET OF CATIONSTUDIO
             AND ONLY AUTHORIZED PEOPLE/SERVERS ARE ALLOWED TO USE IT.
    Description: Master config for crafting system. 
*/
#include "dialog\craft.hpp"
class Cation_Crafting {

    version = 5; // version 3.x -> 3 | 4.0 - 4.3 -> 4 | version 4.4+ -> 5
    duration = 0.3; //Dauer im Craftingvorgang für 1% in s (Mögliche Werte zwischen 0.1 und 10)
    
    
     // texts
    Craftingmenu = "Baumenü";
    CraftStats = "Things to Build";
    CraftingMaterials = "Things Needed";
    CraftButton = "Build!";
    Close = "Close";
    Craft = "Build";
    NoMaterial = "You do not have all building materials!";
    Process = "You made the following:";
    Process_Stay = "You must stay within 10m to craft.";
    NotificationBackpack = "You already have a backpack! Take the old one away.";
    NotificationVest = "You already have a Veste! Take the old one away.";
    NotificationUnifrom = "You already have something! Get naked and try again.";
    SelectItemFirst = "You must first select an item!";
    NothingNeeded = "Nothing is needed!";
    NoRoom = "You do not have enough space for the item.";
    Veh_Block = "A vehicle is currently blocking the spawn point";
    NoSpawnpoint = "No spawnpoint available";
    Color = "color";

    category[] = { //Kategorien
        {
            "weapon", //Variable
            "Weapons", //Text
            {"hgun_P07_F","",{"diamond_cut",2,"copper_refined",1},"","",0}, //{Item 1,Bedingung (default: ""),{benötigtes Item1, benötigte Anzahl des Item1, benötigtes Item2, benötigte Anzahl des Item2},"Skinname","Skinseite"(Skin nur bei Fahrzeugen),0 (für vItem | 1 für alle anderen Items)},
            {"SMG_01_F","(call life_adminlevel) > 0",{"copper_refined",3,"iron_refined",3,"diamond_cut",1},"","",0} //{Item 2,Bedingung (default: ""),{benötigtes Item1, benötigte Anzahl des Item1, benötigtes Item2, benötigte Anzahl des Item2},"Skinname","Skinseite" (Skin nur bei Fahrzeugen),0 (für vItem | 1 für alle anderen Items)} Kein Komma beim letzten!
        }, //Komma
        {
            "uniform",
            "Uniforms",
            {"U_IG_Guerilla1_1","",{"copper_refined",1},"","",0}
        },
        {
            "backpack",
            "Rucksäcke",
            {"B_Carryall_oli","",{"diamond_cut",1},"","",0}
        },
        {
            "vest",
            "Vesten",
            {"V_Press_F","",{"copper_refined",1},"","",0}
        },
        {
            "item",
            "Items",
            {"iron_refined","",{"copper_refined",2},"","",1},
            {"diamond_cut","",{"copper_refined",1,"iron_refined",1},"","",1}
        } //Kein Komma bei letzten
    };

    craftingStations[] = { //verfügbare Kategorien an verschiedenen Crafting Stationen
        {
            "craftingItems", //Variablenname
            "craftingItemsMarker", //Name des Spawnmarkers auf der Map (muss in der mission.sqm vorhanden seinen)
            {"item","weapon","uniform","backpack","vest"} //Variablennamen der verfügbaren Kategorien
        }, //Komma
        {
            "craftingClothes", //Variablenname
            "craftingClothesMarker", //Name des Spawnmarkers auf der Map (muss in der mission.sqm vorhanden seinen)
            {"uniform","backpack","vest"} //Variablennamen der verfügbaren Kategorien
        } //Kein Komma bei letzten
    };
};