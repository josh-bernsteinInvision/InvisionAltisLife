/*--------------------------------------------------------------------------
    Author:		Bytex Digital
    Website:	https://bytex.digital

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/

#ifdef MAVFNC
#include "\a3\3den\UI\dikCodes.inc"
#define MAVGUI #MAVFNC
#define MAVV(NAME) MAVFNC##_##NAME
#define MAVQ(NAME) #MAVV(NAME)
#endif

#define MAV_IDD_GUINAVIGATION 52001
#define MAV_IDC_GUINAVIGATION_MAINGRP 0x01
#define MAV_IDC_GUINAVIGATION_CLOSE 0x02
#define MAV_IDC_GUINAVIGATION_FOOTER 0x03

#define MAV_IDD_GUINAVIGATIONCURRENT 52002
#define MAV_IDC_GUINAVIGATIONCURRENT_INFO 0x01
#define MAV_IDC_GUINAVIGATIONCURRENT_BTN 0x02
#define MAV_IDC_GUINAVIGATIONCURRENT_CLOSE 0x03
#define MAV_IDC_GUINAVIGATIONCURRENT_BTNRECALCULATE 0x04

#define MAV_IDD_GUINAVIGATIONNEW 52003
#define MAV_IDC_GUINAVIGATIONNEW_BTN 0x01
#define MAV_IDC_GUINAVIGATIONNEW_CLOSE 0x02
#define MAV_IDC_GUINAVIGATIONNEW_TABS 0x03
#define MAV_IDC_GUINAVIGATIONNEW_MAP 0x04
#define MAV_IDC_GUINAVIGATIONNEW_COMMON 0x05
#define MAV_IDC_GUINAVIGATIONNEW_SAVED 0x06
#define MAV_IDC_GUINAVIGATIONNEW_CHECKBOX 0x07

#define MAV_IDD_GUINAVIGATIONSETTINGS 52004
#define MAV_IDC_GUINAVIGATIONSETTINGS_BTN 0x01
#define MAV_IDC_GUINAVIGATIONSETTINGS_CLOSE 0x02
#define MAV_IDC_GUINAVIGATIONSETTINGS_DISTANCE 0x03
#define MAV_IDC_GUINAVIGATIONSETTINGS_PATH 0x04
#define MAV_IDC_GUINAVIGATIONSETTINGS_CUSTOMIZE 0x05
#define MAV_IDC_GUINAVIGATIONSETTINGS_COLOR 0x06
#define MAV_IDC_GUINAVIGATIONSETTINGS_RED 0x07
#define MAV_IDC_GUINAVIGATIONSETTINGS_GREEN 0x08
#define MAV_IDC_GUINAVIGATIONSETTINGS_BLUE 0x09
#define MAV_IDC_GUINAVIGATIONSETTINGS_RESET 0x10
#define MAV_IDC_GUINAVIGATIONSETTINGS_VOICE 0x11

#define MAV_IDD_GUINAVIGATIONRESIZE 52005
#define MAV_IDC_GUINAVIGATIONRESIZE_MAP 0x01
#define MAV_IDC_GUINAVIGATIONRESIZE_BOTTOMTEXT 0x02
#define MAV_IDC_GUINAVIGATIONRESIZE_AHEAD 0x03
#define MAV_IDC_GUINAVIGATIONRESIZE_BG 0x04
#define MAV_IDC_GUINAVIGATIONRESIZE_INDICATOR 0x05
#define MAV_IDC_GUINAVIGATIONRESIZE_TEXT 0x06

#define MAV_IDD_GUINAVIGATIONSAVED 52006
#define MAV_IDC_GUINAVIGATIONSAVED_LIST 0x01
#define MAV_IDC_GUINAVIGATIONSAVED_START 0x02
#define MAV_IDC_GUINAVIGATIONSAVED_DELETE 0x03
#define MAV_IDC_GUINAVIGATIONSAVED_BACK 0x04

#define MAV_IDD_GUINAVIGATIONCALCULATEWO 52007
#define MAV_IDC_GUINAVIGATIONCALCULATEWO_START 0x01
#define MAV_IDC_GUINAVIGATIONCALCULATEWO_SAVE 0x02
#define MAV_IDC_GUINAVIGATIONCALCULATEWO_CLOSE 0x03
#define MAV_IDC_GUINAVIGATIONCALCULATEWO_GRP 0x04
#define MAV_IDC_GUINAVIGATIONCALCULATEWO_IMAGE 0x05
#define MAV_IDC_GUINAVIGATIONCALCULATEWO_LOADINGTXT 0x06
#define MAV_IDC_GUINAVIGATIONCALCULATEWO_TXT 0x07
#define MAV_IDC_GUINAVIGATIONCALCULATEWO_TABCONTROL 0x08
#define MAV_IDC_GUINAVIGATIONCALCULATEWO_MAP 0x09

#define MAV_IDD_GUINAVIGATIONCALCULATE 52008
#define MAV_IDC_GUINAVIGATIONCALCULATE_START 0x01
#define MAV_IDC_GUINAVIGATIONCALCULATE_SAVE 0x02
#define MAV_IDC_GUINAVIGATIONCALCULATE_CLOSE 0x03
#define MAV_IDC_GUINAVIGATIONCALCULATE_MAP 0x04
#define MAV_IDC_GUINAVIGATIONCALCULATE_INFO 0x05
#define MAV_IDC_GUINAVIGATIONCALCULATE_TXT 0x06

#define MAV_IDD_TITLENAVIGATION 52009
#define MAV_IDC_TITLENAVIGATION_TEST_MAP 0x01
#define MAV_IDC_TITLENAVIGATION_TEST_BOTTOMTEXT 0x02
#define MAV_IDC_TITLENAVIGATION_TEST_ARROWIMAGE 0x03
#define MAV_IDC_TITLENAVIGATION_TEST_ARROWIMAGE_DESCRIPTION 0x04
#define MAV_IDC_TITLENAVIGATION_TEST_ARROWIMAGE_AHEAD 0x05
#define MAV_IDC_TITLENAVIGATION_TEST_ARROWIMAGE_BACKGROUNDCOLOR 0x06
#define MAV_IDC_TITLENAVIGATION_TEST_ETA 0x07
#define MAV_IDC_TITLENAVIGATION_TEST_DISTANCE 0x08
#define MAV_IDC_TITLENAVIGATION_TEST_WARNINGIMAGES 0x09
#define MAV_IDC_TITLENAVIGATION_TEST_WARNINGIMAGES_BACKGROUND 0xA

#define MAV_IDD_GUINAVIGATIONSAVE 52010
#define MAV_IDC_GUINAVIGATIONSAVE_SAVE 0x01
#define MAV_IDC_GUINAVIGATIONSAVE_CLOSE 0x02
#define MAV_IDC_GUINAVIGATIONSAVE_EDIT 0x03
