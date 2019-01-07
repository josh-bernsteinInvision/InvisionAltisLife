/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 6500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 9850, -1 },
            { "hgun_ACPC2_F", "", 11500, -1 },
            { "hgun_PDW2000_F", "", 20000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
			{ "arifle_MXC_F", "", 40000, -1 },
			{ "arifle_MX_F", "", 50000, -1 },
			{ "arifle_MXM_F", "", 60000, -1 },
			{ "arifle_MX_SW_F", "", 70000, -1 },
			{ "arifle_SPAR_01_khk_F", "", 50000, -1 },
			{ "arifle_SPAR_02_khk_F", "", 70000, -1 },
			{ "arifle_SPAR_03_khk_F", "", 60000, -1 },
			{ "arifle_AK12_F", "", 60000, -1 },
			{ "arifle_AKM_F", "", 50000, -1 },
			{ "arifle_AKS_F", "", 50000, -1 },
			{ "arifle_Katiba_F", "", 40000, -1 },
			{ "arifle_Katiba_C_F", "", 40000, -1 },
			{ "arifle_Mk20_F", "", 40000, -1 },
			{ "arifle_SDAR_F", "", 30000, -1 },
			{ "arifle_TRG21_F", "", 40000, -1 },
			{ "SMG_01_F", "", 25000, -1 },
			{ "SMG_02_F", "", 25000, -1 },
			{ "srifle_DMR_01_DMS_BI_F", "", 40000, -1 },
			{ "srifle_EBR_F", "", 50000, -1 },
			{ "LMG_Mk200_F", "", 80000, -1 },
			{ "LMG_Zafir_F", "", 85000, -1 },
			{ "srifle_DMR_02_camo_F", "", 100000, -1 },
			{ "srifle_DMR_03_khaki_F", "", 70000, -1 },
			{ "srifle_DMR_04_F", "", 90000, -1 },
			{ "srifle_DMR_05_hex_F", "", 100000, -1 },
			{ "srifle_DMR_06_camo_F", "", 70000, -1 },
			{ "MMG_01_tan_F", "", 150000, -1 },
			{ "MMG_02_sand_RCO_LP_F", "", 150000, -1 },
			{ "srifle_GM6_F", "", 500000, -1 },
			{ "srifle_LRR_F", "", 500000, -1 },
			{ "arifle_ARX_hex_F", "", 60000, -1 },
			{ "arifle_CTAR_blk_F", "", 60000, -1 },
			{ "arifle_CTARS_blk_F", "", 70000, -1 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 100 },
			{ "100Rnd_65x39_caseless_mag", "", 100 },
			{ "150Rnd_556x45_Drum_Mag_F", "", 100 },
			{ "20Rnd_762x51_Mag", "", 100 },
			{ "30Rnd_65x39_caseless_green", "", 100 },
			{ "20Rnd_556x45_UW_mag", "", 100 },
			{ "30Rnd_556x45_Stanag", "", 100 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 100 },
			{ "30Rnd_9x21_Mag_SMG_02", "", 100 },
			{ "10Rnd_762x54_Mag", "", 100 },
			{ "200Rnd_65x39_cased_Box", "", 100 },
			{ "150Rnd_762x54_Box", "", 100 },
			{ "10Rnd_338_Mag", "", 100 },
			{ "10Rnd_127x54_Mag", "", 100 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 100 },
			{ "150Rnd_93x64_Mag", "", 100 },
			{ "130Rnd_338_Mag", "", 100 },
			{ "5Rnd_127x108_Mag", "", 100 },
			{ "5Rnd_127x108_APDS_Mag", "", 10000 },
			{ "7Rnd_408_Mag", "", 100 },
			{ "30Rnd_762x39_Mag_F", "", 100 },
			{ "30Rnd_545x39_Mag_F", "", 100 },
			{ "30Rnd_580x42_Mag_F", "", 100 },
			{ "100Rnd_580x42_Mag_F", "", 100 }
        };
        accs[] = {
            { "muzzle_snds_H", "", 2500 },
			{ "muzzle_snds_M", "", 2500 },
			{ "muzzle_snds_L", "", 2500 },
			{ "muzzle_snds_M", "", 2500 },
			{ "muzzle_snds_B", "", 2500 },
			{ "muzzle_snds_H_MG", "", 2500 },
			{ "optic_Arco", "", 2500 },
			{ "optic_Hamr", "", 2500 },
			{ "optic_Aco", "", 2500 },
			{ "optic_Holosight", "", 2500 },
			{ "optic_SOS", "", 2500 },
			{ "acc_flashlight", "", 2500 },
			{ "acc_pointer_IR", "", 2500 },
			{ "optic_MRCO", "", 2500 },
			{ "muzzle_snds_acp", "", 2500 },
			{ "optic_NVS", "", 50000 },
			{ "optic_Nightstalker", "", 100000 },
			{ "optic_DMS", "", 2500 },
			{ "optic_LRPS", "", 2500 },
			{ "muzzle_snds_338_black", "", 2500 },
			{ "muzzle_snds_93mmg_tan", "", 2500 },
			{ "optic_AMS", "", 2500 },
			{ "optic_KHS_blk", "", 2500 },
			{ "bipod_01_F_snd", "", 2500 },
			{ "muzzle_snds_58_blk_F", "", 2500 },
			{ "optic_ERCO_blk_F", "", 2500 }
        };
    };

	class BK {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "BK";
        level[] = { "", "", -1, "" };
        items[] = {
            { "launch_NLAW_F", "", 1000000, 2500 },
            { "launch_RPG32_F", "", 2000000, 5000 },
            { "srifle_DMR_01_F", "", 50000, -1 },
			{ "arifle_Mk20_F", "", 40000, -1 },
			{ "arifle_SDAR_F", "", 30000, -1 },
			{ "SMG_01_F", "", 25000, -1 },
			{ "SMG_02_F", "", 25000, -1 },
			{ "srifle_DMR_01_DMS_BI_F", "", 40000, -1 },
			{ "srifle_EBR_F", "", 50000, -1 },
			{ "LMG_Mk200_F", "", 80000, -1 },
			{ "LMG_Zafir_F", "", 85000, -1 },
			{ "srifle_DMR_02_camo_F", "", 100000, -1 },
			{ "srifle_DMR_03_khaki_F", "", 70000, -1 },
			{ "srifle_DMR_04_F", "", 90000, -1 },
			{ "srifle_DMR_05_hex_F", "", 100000, -1 },
			{ "srifle_DMR_06_camo_F", "", 70000, -1 },
			{ "MMG_01_tan_F", "", 150000, -1 },
			{ "MMG_02_sand_RCO_LP_F", "", 150000, -1 },
			{ "srifle_GM6_F", "", 500000, -1 },
			{ "srifle_LRR_F", "", 500000, -1 },
			{ "arifle_ARX_hex_F", "", 60000, -1 },
			{ "arifle_CTAR_blk_F", "", 60000, -1 },
			{ "arifle_CTARS_blk_F", "", 70000, -1 },
			{ "SatchelCharge_Remote_Mag", "", 2500000, -1 },
			{ "IEDUrbanBig_Remote_Mag", "", 2000000, -1 },
			{ "arifle_MX_SW_F", "", 20000, -1 },
			{ "arifle_MXM_F", "", 20000, -1 },
			{ "arifle_MX_pointer_F", "", 20000, -1 },
			{ "rifle_MXC_ACO_F", "", 20000, -1 },
			{ "arifle_TRG21_F", "", 20000, -1 },
			{ "srifle_LRR_F", "", 2000000, -1 },
			{ "IEDUrbanBig_Remote_Mag", "", 2000000, -1 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 100 },
			{ "100Rnd_65x39_caseless_mag", "", 100 },
			{ "150Rnd_556x45_Drum_Mag_F", "", 100 },
			{ "20Rnd_762x51_Mag", "", 100 },
			{ "30Rnd_65x39_caseless_green", "", 100 },
			{ "20Rnd_556x45_UW_mag", "", 100 },
			{ "30Rnd_556x45_Stanag", "", 100 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 100 },
			{ "30Rnd_9x21_Mag_SMG_02", "", 100 },
			{ "10Rnd_762x54_Mag", "", 100 },
			{ "200Rnd_65x39_cased_Box", "", 100 },
			{ "150Rnd_762x54_Box", "", 100 },
			{ "10Rnd_338_Mag", "", 100 },
			{ "10Rnd_127x54_Mag", "", 100 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 100 },
			{ "150Rnd_93x64_Mag", "", 100 },
			{ "130Rnd_338_Mag", "", 100 },
			{ "5Rnd_127x108_Mag", "", 100 },
			{ "5Rnd_127x108_APDS_Mag", "", 10000 },
			{ "7Rnd_408_Mag", "", 100 },
			{ "30Rnd_762x39_Mag_F", "", 100 },
			{ "30Rnd_545x39_Mag_F", "", 100 },
			{ "30Rnd_580x42_Mag_F", "", 100 },
			{ "100Rnd_580x42_Mag_F", "", 100 },
			{ "NLAW_F", "", 500000 },
			{ "RPG32_F", "", 600000 },
			{ "RPG32_HE_F", "", 1000000 }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 },
            { "optic_Hamr", "", 7500 },
            { "acc_flashlight", "", 1000 }
        };
    };
	
    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 15000, 500 },
            { "hgun_Pistol_heavy_02_F", "", 10000, -1 },
            { "hgun_ACPC2_F", "", 16000, -1 },
            { "hgun_PDW2000_F", "", 25000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 10000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_sdar_F", "Taser Rifle", 0, 0 },
            { "hgun_P07_snds_F", "Stun Pistol", 0, 0 },
            { "Binocular", "", 0, -1 },
            { "ItemGPS", "", 0, 45 },
            { "FirstAidKit", "", 0, 65 },
            { "NVGoggles", "", 0, 980 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 }
        };
        accs[] = {
            { "muzzle_snds_L", "", 650 }
        };
    };

    class cop_patrol {
        name = "Altis Deputy I Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "You must be a Deputy I Rank!" };
        items[] = {
            { "hgun_Pistol_heavy_01_F", "", 0, 0 },
            { "11Rnd_45ACP_Mag", "", 0, -1 },
            { "arifle_Katiba_F", "", 0, -1 },
            { "30Rnd_65x39_caseless_green_mag_Tracer", "", 0, 0 },
            { "arifle_Mk20_F", "", 0, 0 },
            { "30Rnd_556x45_Stanag_Tracer_Red", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
			{ "SMG_02_F", "", 0, -1 },
			{ "30Rnd_9x21_Mag", "", 0, -1 },
			{ "arifle_MXC_Black_F", "", 0, -1 },
			{ "30Rnd_65x39_caseless_mag", "", 0, -1 }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 130 },
            { "30Rnd_9x21_Mag", "", 250 }
        };
        accs[] = {
            { "acc_flashlight", "", 750 },
            { "optic_Holosight", "", 1200 },
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };

    class cop_Deputy {
        name = "Altis Deputy II Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Deputy II Rank!" };
        items[] = {
            { "hgun_Pistol_heavy_01_F", "", 0, 0 },
            { "11Rnd_45ACP_Mag", "", 0, -1 },
            { "arifle_Katiba_F", "", 0, -1 },
            { "30Rnd_65x39_caseless_green_mag_Tracer", "", 0, 0 },
            { "arifle_Mk20_F", "", 0, 0 },
            { "30Rnd_556x45_Stanag_Tracer_Red", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
			{ "SMG_02_F", "", 0, -1 },
			{ "30Rnd_9x21_Mag", "", 0, -1 },
			{ "arifle_MXC_Black_F", "", 0, -1 },
			{ "30Rnd_65x39_caseless_mag", "", 0, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };

	class cop_SD {
        name = "Altis Senior Deputy Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Senior Deputy Rank!" };
        items[] = {
            { "hgun_Pistol_heavy_01_F", "", 0, 0 },
            { "11Rnd_45ACP_Mag", "", 0, -1 },
            { "arifle_Katiba_F", "", 0, -1 },
            { "30Rnd_65x39_caseless_green_mag_Tracer", "", 0, 0 },
            { "arifle_Mk20_F", "", 0, 0 },
            { "30Rnd_556x45_Stanag_Tracer_Red", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
			{ "SMG_02_F", "", 0, -1 },
			{ "30Rnd_9x21_Mag", "", 0, -1 },
			{ "arifle_MXC_Black_F", "", 0, -1 },
			{ "30Rnd_65x39_caseless_mag", "", 0, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };
	
	class cop_LC {
        name = "Altis Lance Corporal Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 4, "You must be a Lance Corporal Rank!" };
        items[] = {
            { "hgun_Pistol_heavy_01_F", "", 0, 0 },
            { "11Rnd_45ACP_Mag", "", 0, -1 },
            { "arifle_Katiba_F", "", 0, -1 },
            { "30Rnd_65x39_caseless_green_mag_Tracer", "", 0, 0 },
            { "arifle_Mk20_F", "", 0, 0 },
            { "30Rnd_556x45_Stanag_Tracer_Red", "", 0, -1 },
            { "30Rnd_556x45_Stanag", "", 0, -1 },
			{ "SMG_02_F", "", 0, -1 },
			{ "30Rnd_9x21_Mag", "", 0, -1 },
			{ "arifle_MXC_Black_F", "", 0, -1 },
			{ "30Rnd_65x39_caseless_mag", "", 0, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };
	
    class cop_C {
        name = "Altis Corporal Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 5, "You must be a Corporal Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 0, -1 },
            { "SMG_02_ACO_F", "", 0, -1 },
            { "arifle_MXC_F", "", 0, 0 },
            { "HandGrenade_Stone", "Flashbang", 0, -1 },
            { "optic_Arco", "", 0, -1 },
            { "muzzle_snds_H", "", 0, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };
	
	class cop_S {
        name = "Altis Sergeant Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 6, "You must be a Sergeant Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 0, -1 },
            { "SMG_02_ACO_F", "", 0, -1 },
            { "arifle_MXC_F", "", 0, 0 },
            { "HandGrenade_Stone", "Flashbang", 0, -1 },
            { "optic_Arco", "", 0, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };
	
	class cop_LT {
        name = "Altis Lieutenant Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 7, "You must be a Lieutenant Rank!" };
        items[] = {
            { "arifle_MXC_F", "", 0, 0 },
            { "arifle_Katiba_ARCO_pointer_snds_F", "Flashbang", 0, -1 },
            { "30Rnd_65x39_caseless_green_mag_Tracer", "", 0, -1 },
			{ "130Rnd_338_Mag", "", 0, -1 },
			{ "arifle_SPAR_01_GL_blk_F", "", 0, -1 },
			{ "30Rnd_556x45_Stanag_Tracer_Yellow", "", 0, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };
	
    class cop_CP {
        name = "Altis Captain Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 8, "You must be a Captain Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 0, -1 },
            { "SMG_02_ACO_F", "", 0, -1 },
            { "arifle_MXC_F", "", 0, 0 },
            { "HandGrenade_Stone", "Flashbang", 0, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };
	
	class cop_CD {
        name = "Altis Commander Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 9, "You must be a Commander Rank!" };
        items[] = {
            { "hgun_ACPC2_F", "", 0, -1 },
            { "SMG_02_ACO_F", "", 0, -1 },
            { "arifle_MXC_F", "", 0, 0 },
            { "HandGrenade_Stone", "Flashbang", 0, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_9x21_Mag", "", 60 },
            { "30Rnd_65x39_caseless_mag", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };
	
	class Doc {
        name = "DOC";
        side = "cop";
        license = "Doc_1";
        level[] = {"", "", -1, ""};
        items[] = {
            { "hgun_ACPC2_F", "", 0, -1 },
            { "arifle_MXC_F", "", 0, 0 },
            { "HandGrenade_Stone", "Flashbang", 0, -1 }
        };
        mags[] = {
            { "9Rnd_45ACP_Mag", "", 200 },
            { "30Rnd_65x39_caseless_mag", "", 100 }
        };
        accs[] = {
            { "optic_Arco", "", 2500 },
            { "muzzle_snds_H", "", 2750 }
        };
    };
	
    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 1200, 980 }
        };
        mags[] = {};
        accs[] = {};
    };
};
