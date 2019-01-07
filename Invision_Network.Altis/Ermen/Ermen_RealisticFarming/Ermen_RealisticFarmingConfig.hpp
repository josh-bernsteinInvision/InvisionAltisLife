/*
    Author: Ermen07
*/

#define false 0
#define true 1

class Ermen_RealisticFarmingConfig {

	// General Settings //
	debug = 0; // Enable Debug (spawn logs)
    enableLoop = 0; // Enable loop for gather (keep gather until you don't move)
    exitTime = 0.5; // Wait time before exit for prevent spam (Min 0.5)
    // Display //
    displayDistance = 10; // Display see distance
    displaySize = 1; // Display size
    displayFont = "PuristaBold"; // Font https://community.bistudio.com/wiki/FXY_File_Format#Arma3
    displayShadow = "1"; // Parameter can be '0' (no shadow), '1' (classic shadow, can be colored), '2' outline (always black)
    displayRemaining = "Remaining Resources:";
    // Translations //
    requiredItem = "You don't have";
    requiredLicense = "You don't have the license!";
    notAllowed = "You are not allowed to do this!";
    tooFarAway = "You are too far away!";
    waitGrow = "Wait for grow up!";
    resourceTerminated = "This resource is terminated!";
    deviceResourceTerminated = "Device: Gathering resource is terminated!";
    deviceNoNearResources = "Device: No near resources!";
    deviceGrowNearResources = "Device: Near resources need to grow!";
    // Device //
    deviceGatherDistance = 10; // Max gather distance
    deviceAutoSwitchResource = true; // Automatically switch near resource when resource is 0
    deviceGatherTime = 27; // Wait time in seconds before device gather resource
    deviceFuelUsage = 0.05; // Fuel usage for each resource gathered
    deviceGatherAmount = 5; // Gather Amount
    deviceGatherRandomAmount = 0; // Gather Extra Random Amount

    class Ermen_RealisticFarmingResources {
    
        // *Regen System: Resource can't despawn and every (secondsRegen) resource get + (addRegen)
        // **Respawn System: The Resource disappear when reach 0 and respawn every defined (secondsRegen) if resources are less than (respawnResourcesLimit)

        class apple_1 {
            // General Settings //
            useP3D = true;
            objectName = "a3\plants_f\tree\t_broussonetiap1s_f.p3d"; // If useP3D p3d else className
            // Spawn Settings //
            randomSpawn = true; // If true use marker else use coordinates
            marker = "apple_1"; // Random Spawn Marker
            coordinates[] = { // Spawn Coordinates
                {0,0,0},
                {0,0,0}
            };
            initSpawnResources = 10; // Number of resources to spawn initially (if use coordinates NEVER put more than it)
            initSpawnResourcesInside = 30; // Number of resources inside initially
            // Random Spawn Settings //
            zoneSize = 30;
            posZ = 0; // Object Height
            minDistanceObjects = 5; // Min distance for near objects
            // Respawn Settings //
            useRegenSystem = true; // If true Regen System* else Respawn System**
            respawnSeconds = 30;
            // Regen System //
			regenAll = false; // Regen (addAmount) in all resources in the area else regen only one selected random
            addAmount = 1;
            addRandomAmount = 0;
            regenResourcesLimit = 30; // Below this number resources will regen
            // Respawn System //
            respawnResourcesLimit = 10; // Below this number resources will respawn (if use coordinates NEVER put more than it)
            // Gather Settings //
            item = "apple"; // Item Variable you receive
            requiredItem = ""; // Item Variable you need
            requiredLicense = ""; // License Variable you need
            requiredConditions = "playerSide isEqualTo civilian"; // More Conditions
            gatherAmount = 5; // Amount you receive
            gatherRandomAmount = 0; // Extra Amount you can receive random
            sound = "harvest"; // Sound to do when gather (defined in CfgSounds)
            distanceSound = 35; // Distance that sound can be heard
            animation = "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon"; // Animation to do when gather
            animationTimes = 2; // How many times do the animation
            animationSleep = 1.5; // Wait time until each animation
            animationSwitchMove = 0; // If you get stucked in animation set to 1
            // Display //
            displayName = "Apple Tree"; // Display Name
            displayColor = "#FF0000"; // Display Color
            displayIcon = "icons\ico_apple.paa"; // Display Icon
            displayConditions = "playerSide isEqualTo civilian"; // Display Conditions
            displayOffsetX = 0; // Display Offset X
            displayOffsetY = 0; // Display Offset Y
            displayOffsetZ = 1; // Display Offset Z
        };

        class apple_2 {
            // General Settings //
            useP3D = true;
            objectName = "a3\plants_f\tree\t_broussonetiap1s_f.p3d"; // If useP3D p3d else className
            // Spawn Settings //
            randomSpawn = true; // If true use marker else use coordinates
            marker = "apple_2"; // Random Spawn Marker
            coordinates[] = { // Spawn Coordinates
                {0,0,0},
                {0,0,0}
            };
            initSpawnResources = 10; // Number of resources to spawn initially (if use coordinates NEVER put more than it)
            initSpawnResourcesInside = 30; // Number of resources inside initially
            // Random Spawn Settings //
            zoneSize = 30;
            posZ = 0; // Object Height
            minDistanceObjects = 5; // Min distance for near objects
            // Respawn Settings //
            useRegenSystem = true; // If true Regen System* else Respawn System**
            respawnSeconds = 30; 
            // Regen System //
			regenAll = true; // Regen (addAmount) in all resources in the area else regen only one selected random
            addAmount = 1;
            addRandomAmount = 0;
            regenResourcesLimit = 30; // Below this number resources will regen
            // Respawn System //
            respawnResourcesLimit = 10; // Below this number resources will respawn (if use coordinates NEVER put more than it)
            // Gather Settings //
            item = "apple"; // Item Variable you receive
            requiredItem = ""; // Item Variable you need
            requiredLicense = ""; // License Variable you need
            requiredConditions = "playerSide isEqualTo civilian"; // More Conditions
            gatherAmount = 5; // Amount you receive
            gatherRandomAmount = 0; // Extra Amount you can receive random
            sound = "harvest"; // Sound to do when gather (defined in CfgSounds)
            distanceSound = 35; // Distance that sound can be heard
            animation = "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon"; // Animation to do when gather
            animationTimes = 2; // How many times do the animation
            animationSleep = 1.5; // Wait time until each animation
            animationSwitchMove = 0; // If you get stucked in animation set to 1
            // Display //
            displayName = "Apple Tree"; // Display Name
            displayColor = "#FF0000"; // Display Color
            displayIcon = "icons\ico_apple.paa"; // Display Icon
            displayConditions = "playerSide isEqualTo civilian"; // Display Conditions
            displayOffsetX = 0; // Display Offset X
            displayOffsetY = 0; // Display Offset Y
            displayOffsetZ = 1; // Display Offset Z
        };

        class apple_3 {
            // General Settings //
            useP3D = true;
            objectName = "a3\plants_f\tree\t_broussonetiap1s_f.p3d"; // If useP3D p3d else className
            // Spawn Settings //
            randomSpawn = true; // If true use marker else use coordinates
            marker = "apple_3"; // Random Spawn Marker
            coordinates[] = { // Spawn Coordinates
                {0,0,0},
                {0,0,0}
            };
            initSpawnResources = 10; // Number of resources to spawn initially (if use coordinates NEVER put more than it)
            initSpawnResourcesInside = 30; // Number of resources inside initially
            // Random Spawn Settings //
            zoneSize = 30;
            posZ = 0; // Object Height
            minDistanceObjects = 5; // Min distance for near objects
            // Respawn Settings //
            useRegenSystem = true; // If true Regen System* else Respawn System**
            respawnSeconds = 30; 
            // Regen System //
			regenAll = true; // Regen (addAmount) in all resources in the area else regen only one selected random
            addAmount = 1;
            addRandomAmount = 0;
            regenResourcesLimit = 30; // Below this number resources will regen
            // Respawn System //
            respawnResourcesLimit = 10; // Below this number resources will respawn (if use coordinates NEVER put more than it)
            // Gather Settings //
            item = "apple"; // Item Variable you receive
            requiredItem = ""; // Item Variable you need
            requiredLicense = ""; // License Variable you need
            requiredConditions = "playerSide isEqualTo civilian"; // More Conditions
            gatherAmount = 5; // Amount you receive
            gatherRandomAmount = 0; // Extra Amount you can receive random
            sound = "harvest"; // Sound to do when gather (defined in CfgSounds)
            distanceSound = 35; // Distance that sound can be heard
            animation = "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon"; // Animation to do when gather
            animationTimes = 2; // How many times do the animation
            animationSleep = 1.5; // Wait time until each animation
            animationSwitchMove = 0; // If you get stucked in animation set to 1
            // Display //
            displayName = "Apple Tree"; // Display Name
            displayColor = "#FF0000"; // Display Color
            displayIcon = "icons\ico_apple.paa"; // Display Icon
            displayConditions = "playerSide isEqualTo civilian"; // Display Conditions
            displayOffsetX = 0; // Display Offset X
            displayOffsetY = 0; // Display Offset Y
            displayOffsetZ = 1; // Display Offset Z
        };

        class apple_4 {
            // General Settings //
            useP3D = true;
            objectName = "a3\plants_f\tree\t_broussonetiap1s_f.p3d"; // If useP3D p3d else className
            // Spawn Settings //
            randomSpawn = true; // If true use marker else use coordinates
            marker = "apple_4"; // Random Spawn Marker
            coordinates[] = { // Spawn Coordinates
                {0,0,0},
                {0,0,0}
            };
            initSpawnResources = 10; // Number of resources to spawn initially (if use coordinates NEVER put more than it)
            initSpawnResourcesInside = 30; // Number of resources inside initially
            // Random Spawn Settings //
            zoneSize = 30;
            posZ = 0; // Object Height
            minDistanceObjects = 5; // Min distance for near objects
            // Respawn Settings //
            useRegenSystem = true; // If true Regen System* else Respawn System**
            respawnSeconds = 30; 
            // Regen System //
			regenAll = true; // Regen (addAmount) in all resources in the area else regen only one selected random
            addAmount = 1;
            addRandomAmount = 0;
            regenResourcesLimit = 30; // Below this number resources will regen
            // Respawn System //
            respawnResourcesLimit = 10; // Below this number resources will respawn (if use coordinates NEVER put more than it)
            // Gather Settings //
            item = "apple"; // Item Variable you receive
            requiredItem = ""; // Item Variable you need
            requiredLicense = ""; // License Variable you need
            requiredConditions = "playerSide isEqualTo civilian"; // More Conditions
            gatherAmount = 5; // Amount you receive
            gatherRandomAmount = 0; // Extra Amount you can receive random
            sound = "harvest"; // Sound to do when gather (defined in CfgSounds)
            distanceSound = 35; // Distance that sound can be heard
            animation = "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon"; // Animation to do when gather
            animationTimes = 2; // How many times do the animation
            animationSleep = 1.5; // Wait time until each animation
            animationSwitchMove = 0; // If you get stucked in animation set to 1
            // Display //
            displayName = "Apple Tree"; // Display Name
            displayColor = "#FF0000"; // Display Color
            displayIcon = "icons\ico_apple.paa"; // Display Icon
            displayConditions = "playerSide isEqualTo civilian"; // Display Conditions
            displayOffsetX = 0; // Display Offset X
            displayOffsetY = 0; // Display Offset Y
            displayOffsetZ = 1; // Display Offset Z
        };

        class peaches_1 {
            // General Settings //
            useP3D = true;
            objectName = "a3\plants_f\tree\t_ficusb1s_f.p3d"; // If useP3D p3d else className
            // Spawn Settings //
            randomSpawn = true; // If true use marker else use coordinates
            marker = "peaches_1"; // Random Spawn Marker
            coordinates[] = { // Spawn Coordinates
                {0,0,0},
                {0,0,0}
            };
            initSpawnResources = 10; // Number of resources to spawn initially (if use coordinates NEVER put more than it)
            initSpawnResourcesInside = 30; // Number of resources inside initially
            // Random Spawn Settings //
            zoneSize = 20;
            posZ = 0; // Object Height
            minDistanceObjects = 5; // Min distance for near objects
            // Respawn Settings //
            useRegenSystem = true; // If true Regen System* else Respawn System**
            respawnSeconds = 30; 
            // Regen System //
			regenAll = true; // Regen (addAmount) in all resources in the area else regen only one selected random
            addAmount = 1;
            addRandomAmount = 0;
            regenResourcesLimit = 30; // Below this number resources will regen
            // Respawn System //
            respawnResourcesLimit = 10; // Below this number resources will respawn (if use coordinates NEVER put more than it)
            // Gather Settings //
            item = "peach"; // Item Variable you receive
            requiredItem = ""; // Item Variable you need
            requiredLicense = ""; // License Variable you need
            requiredConditions = "playerSide isEqualTo civilian"; // More Conditions
            gatherAmount = 5; // Amount you receive
            gatherRandomAmount = 2; // Extra Amount you can receive random
            sound = "harvest"; // Sound to do when gather (defined in CfgSounds)
            distanceSound = 35; // Distance that sound can be heard
            animation = "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon"; // Animation to do when gather
            animationTimes = 2; // How many times do the animation
            animationSleep = 1.5; // Wait time until each animation
            animationSwitchMove = 0; // If you get stucked in animation set to 1
            // Display //
            displayName = "Peach Tree"; // Display Name
            displayColor = "#FF4000"; // Display Color
            displayIcon = "icons\ico_peach.paa"; // Display Icon
            displayConditions = "playerSide isEqualTo civilian"; // Display Conditions
            displayOffsetX = 0; // Display Offset X
            displayOffsetY = -1; // Display Offset Y
            displayOffsetZ = 1; // Display Offset Z
        };

        class peaches_2 {
            // General Settings //
            useP3D = true;
            objectName = "a3\plants_f\tree\t_ficusb1s_f.p3d"; // If useP3D p3d else className
            // Spawn Settings //
            randomSpawn = true; // If true use marker else use coordinates
            marker = "peaches_2"; // Random Spawn Marker
            coordinates[] = { // Spawn Coordinates
                {0,0,0},
                {0,0,0}
            };
            initSpawnResources = 10; // Number of resources to spawn initially (if use coordinates NEVER put more than it)
            initSpawnResourcesInside = 30; // Number of resources inside initially
            // Random Spawn Settings //
            zoneSize = 30;
            posZ = 0; // Object Height
            minDistanceObjects = 5; // Min distance for near objects
            // Respawn Settings //
            useRegenSystem = true; // If true Regen System* else Respawn System**
            respawnSeconds = 30; 
            // Regen System //
			regenAll = true; // Regen (addAmount) in all resources in the area else regen only one selected random
            addAmount = 1;
            addRandomAmount = 0;
            regenResourcesLimit = 30; // Below this number resources will regen
            // Respawn System //
            respawnResourcesLimit = 10; // Below this number resources will respawn (if use coordinates NEVER put more than it)
            // Gather Settings //
            item = "peach"; // Item Variable you receive
            requiredItem = ""; // Item Variable you need
            requiredLicense = ""; // License Variable you need
            requiredConditions = "playerSide isEqualTo civilian"; // More Conditions
            gatherAmount = 5; // Amount you receive
            gatherRandomAmount = 0; // Extra Amount you can receive random
            sound = "harvest"; // Sound to do when gather (defined in CfgSounds)
            distanceSound = 35; // Distance that sound can be heard
            animation = "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon"; // Animation to do when gather
            animationTimes = 2; // How many times do the animation
            animationSleep = 1.5; // Wait time until each animation
            animationSwitchMove = 0; // If you get stucked in animation set to 1
            // Display //
            displayName = "Peach Tree"; // Display Name
            displayColor = "#FF4000"; // Display Color
            displayIcon = "icons\ico_peach.paa"; // Display Icon
            displayConditions = "playerSide isEqualTo civilian"; // Display Conditions
            displayOffsetX = 0; // Display Offset X
            displayOffsetY = -1; // Display Offset Y
            displayOffsetZ = 1; // Display Offset Z
        };

        class peaches_3 {
            // General Settings //
            useP3D = true;
            objectName = "a3\plants_f\tree\t_ficusb1s_f.p3d"; // If useP3D p3d else className
            // Spawn Settings //
            randomSpawn = true; // If true use marker else use coordinates
            marker = "peaches_3"; // Random Spawn Marker
            coordinates[] = { // Spawn Coordinates
                {0,0,0},
                {0,0,0}
            };
            initSpawnResources = 10; // Number of resources to spawn initially (if use coordinates NEVER put more than it)
            initSpawnResourcesInside = 30; // Number of resources inside initially
            // Random Spawn Settings //
            zoneSize = 30;
            posZ = 0; // Object Height
            minDistanceObjects = 5; // Min distance for near objects
            // Respawn Settings //
            useRegenSystem = true; // If true Regen System* else Respawn System**
            respawnSeconds = 30; 
            // Regen System //
			regenAll = true; // Regen (addAmount) in all resources in the area else regen only one selected random
            addAmount = 1;
            addRandomAmount = 0;
            regenResourcesLimit = 30; // Below this number resources will regen
            // Respawn System //
            respawnResourcesLimit = 10; // Below this number resources will respawn (if use coordinates NEVER put more than it)
            // Gather Settings //
            item = "peach"; // Item Variable you receive
            requiredItem = ""; // Item Variable you need
            requiredLicense = ""; // License Variable you need
            requiredConditions = "playerSide isEqualTo civilian"; // More Conditions
            gatherAmount = 5; // Amount you receive
            gatherRandomAmount = 0; // Extra Amount you can receive random
            sound = "harvest"; // Sound to do when gather (defined in CfgSounds)
            distanceSound = 35; // Distance that sound can be heard
            animation = "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon"; // Animation to do when gather
            animationTimes = 2; // How many times do the animation
            animationSleep = 1.5; // Wait time until each animation
            animationSwitchMove = 0; // If you get stucked in animation set to 1
            // Display //
            displayName = "Peach Tree"; // Display Name
            displayColor = "#FF4000"; // Display Color
            displayIcon = "icons\ico_peach.paa"; // Display Icon
            displayConditions = "playerSide isEqualTo civilian"; // Display Conditions
            displayOffsetX = 0; // Display Offset X
            displayOffsetY = -1; // Display Offset Y
            displayOffsetZ = 1; // Display Offset Z
        };

        class heroin_unprocessed {
            // General Settings //
            useP3D = true;
            objectName = "a3\plants_f\clutter\c_thistle_medium.p3d"; // If useP3D p3d else className
            // Spawn Settings //
            randomSpawn = true; // If true use marker else use coordinates
            marker = "heroin_1"; // Random Spawn Marker
            coordinates[] = { // Spawn Coordinates
                {0,0,0},
                {0,0,0}
            };
            initSpawnResources = 10; // Number of resources to spawn initially (if use coordinates NEVER put more than it)
            initSpawnResourcesInside = 30; // Number of resources inside initially
            // Random Spawn Settings //
            zoneSize = 30;
            posZ = 0; // Object Height
            minDistanceObjects = 5; // Min distance for near objects
            // Respawn Settings //
            useRegenSystem = true; // If true Regen System* else Respawn System**
            respawnSeconds = 30; 
            // Regen System //
			regenAll = true; // Regen (addAmount) in all resources in the area else regen only one selected random
            addAmount = 1;
            addRandomAmount = 0;
            regenResourcesLimit = 30; // Below this number resources will regen
            // Respawn System //
            respawnResourcesLimit = 10; // Below this number resources will respawn (if use coordinates NEVER put more than it)
            // Gather Settings //
            item = "heroin_unprocessed"; // Item Variable you receive
            requiredItem = ""; // Item Variable you need
            requiredLicense = ""; // License Variable you need
            requiredConditions = "playerSide isEqualTo civilian"; // More Conditions
            gatherAmount = 5; // Amount you receive
            gatherRandomAmount = 0; // Extra Amount you can receive random
            sound = "harvest"; // Sound to do when gather (defined in CfgSounds)
            distanceSound = 35; // Distance that sound can be heard
            animation = "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon"; // Animation to do when gather
            animationTimes = 2; // How many times do the animation
            animationSleep = 1.5; // Wait time until each animation
            animationSwitchMove = 0; // If you get stucked in animation set to 1
            // Display //
            displayName = "Opium Plant"; // Display Name
            displayColor = "#00FF40"; // Display Color
            displayIcon = "icons\ico_heroinUnprocessed.paa"; // Display Icon
            displayConditions = "playerSide isEqualTo civilian"; // Display Conditions
            displayOffsetX = 0; // Display Offset X
            displayOffsetY = 0; // Display Offset Y
            displayOffsetZ = 0; // Display Offset Z
        };

        class cocaine_unprocessed {
            // General Settings //
            useP3D = true;
            objectName = "a3\plants_f\clutter\c_strweedgreentall.p3d"; // If useP3D p3d else className
            // Spawn Settings //
            randomSpawn = true; // If true use marker else use coordinates
            marker = "cocaine_1"; // Random Spawn Marker
            coordinates[] = { // Spawn Coordinates
                {0,0,0},
                {0,0,0}
            };
            initSpawnResources = 10; // Number of resources to spawn initially (if use coordinates NEVER put more than it)
            initSpawnResourcesInside = 30; // Number of resources inside initially
            // Random Spawn Settings //
            zoneSize = 30;
            posZ = 0; // Object Height
            minDistanceObjects = 5; // Min distance for near objects
            // Respawn Settings //
            useRegenSystem = true; // If true Regen System* else Respawn System**
            respawnSeconds = 30; 
            // Regen System //
			regenAll = true; // Regen (addAmount) in all resources in the area else regen only one selected random
            addAmount = 1;
            addRandomAmount = 0;
            regenResourcesLimit = 30; // Below this number resources will regen
            // Respawn System //
            respawnResourcesLimit = 10; // Below this number resources will respawn (if use coordinates NEVER put more than it)
            // Gather Settings //
            item = "cocaine_unprocessed"; // Item Variable you receive
            requiredItem = ""; // Item Variable you need
            requiredLicense = ""; // License Variable you need
            requiredConditions = "playerSide isEqualTo civilian"; // More Conditions
            gatherAmount = 5; // Amount you receive
            gatherRandomAmount = 0; // Extra Amount you can receive random
            sound = "harvest"; // Sound to do when gather (defined in CfgSounds)
            distanceSound = 35; // Distance that sound can be heard
            animation = "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon"; // Animation to do when gather
            animationTimes = 2; // How many times do the animation
            animationSleep = 1.5; // Wait time until each animation
            animationSwitchMove = 0; // If you get stucked in animation set to 1
            // Display //
            displayName = "Coca Plant"; // Display Name
            displayColor = "#00FF40"; // Display Color
            displayIcon = "icons\ico_cocaineUnprocessed.paa"; // Display Icon
            displayConditions = "playerSide isEqualTo civilian"; // Display Conditions
            displayOffsetX = 0; // Display Offset X
            displayOffsetY = 0; // Display Offset Y
            displayOffsetZ = 0; // Display Offset Z
        };

        class cannabis {
            // General Settings //
            useP3D = true;
            objectName = "a3\plants_f\clutter\c_strplantgreenshrub.p3d"; // If useP3D p3d else className
            // Spawn Settings //
            randomSpawn = true; // If true use marker else use coordinates
            marker = "weed_1"; // Random Spawn Marker
            coordinates[] = { // Spawn Coordinates
                {0,0,0},
                {0,0,0}
            };
            initSpawnResources = 10; // Number of resources to spawn initially (if use coordinates NEVER put more than it)
            initSpawnResourcesInside = 30; // Number of resources inside initially
            // Random Spawn Settings //
            zoneSize = 30;
            posZ = 0; // Object Height
            minDistanceObjects = 5; // Min distance for near objects
            // Respawn Settings //
            useRegenSystem = true; // If true Regen System* else Respawn System**
            respawnSeconds = 30; 
            // Regen System //
			regenAll = true; // Regen (addAmount) in all resources in the area else regen only one selected random
            addAmount = 1;
            addRandomAmount = 0;
            regenResourcesLimit = 30; // Below this number resources will regen
            // Respawn System //
            respawnResourcesLimit = 10; // Below this number resources will respawn (if use coordinates NEVER put more than it)
            // Gather Settings //
            item = "cannabis"; // Item Variable you receive
            requiredItem = ""; // Item Variable you need
            requiredLicense = ""; // License Variable you need
            requiredConditions = "playerSide isEqualTo civilian"; // More conditions
            gatherAmount = 5; // Amount you receive
            gatherRandomAmount = 0; // Extra Amount you can receive random
            sound = "harvest"; // Sound to do when gather (defined in CfgSounds)
            distanceSound = 35; // Distance that sound can heard
            animation = "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon"; // Animation to do when gather
            animationTimes = 2; // How many times do the animation
            animationSleep = 1.5; // Wait until each animation
            animationSwitchMove = 0; // If you get stucked in animation set to 1
            // Display //
            displayName = "Weed Plant"; // Display Name
            displayColor = "#00FF40"; // Display Color
            displayIcon = "icons\ico_cannabis.paa"; // Display Icon
            displayConditions = "playerSide isEqualTo civilian"; // Display Conditions
            displayOffsetX = 0; // Display Offset X
            displayOffsetY = 0; // Display Offset Y
            displayOffsetZ = 0; // Display Offset Z
        };

        class copper_unrefined {
            // General Settings //
            useP3D = false;
            objectName = "Land_SharpStone_03"; // If useP3D p3d else className
            // Spawn Settings //
            randomSpawn = true; // If true use marker else use coordinates
            marker = "copper_mine"; // Random Spawn Marker
            coordinates[] = { // Spawn Coordinates
                {0,0,0},
                {0,0,0}
            };
            initSpawnResources = 10; // Number of resources to spawn initially (if use coordinates NEVER put more than it)
            initSpawnResourcesInside = 30; // Number of resources inside initially
            // Random Spawn Settings //
            zoneSize = 30;
            posZ = 0; // Object Height
            minDistanceObjects = 5; // Min distance for near objects
            // Respawn Settings //
            useRegenSystem = false; // If true Regen System* else Respawn System**
            respawnSeconds = 30; 
            // Regen System //
			regenAll = true; // Regen (addAmount) in all resources in the area else regen only one selected random
            addAmount = 1;
            addRandomAmount = 0;
            regenResourcesLimit = 30; // Below this number resources will regen
            // Respawn System //
            respawnResourcesLimit = 10; // Below this number resources will respawn (if use coordinates NEVER put more than it)
            // Gather Settings //
            item = "copper_unrefined"; // Item Variable you receive
            requiredItem = "pickaxe"; // Item Variable you need
            requiredLicense = ""; // License Variable you need
            requiredConditions = "playerSide isEqualTo civilian"; // More conditions
            gatherAmount = 5; // Amount you receive
            gatherRandomAmount = 0; // Extra Amount you can receive random
            sound = "mining"; // Sound to do when gather (defined in CfgSounds)
            distanceSound = 35; // Distance that sound can heard
            animation = "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon"; // Animation to do when gather
            animationTimes = 3; // How many times do the animation
            animationSleep = 1.5; // Wait until each animation
            animationSwitchMove = 0; // If you get stucked in animation set to 1
            // Display //
            displayName = "Copper Rock"; // Display Name
            displayColor = "#FF8000"; // Display Color
            displayIcon = "icons\ico_copperore.paa"; // Display Icon
            displayConditions = "playerSide isEqualTo civilian"; // Display Conditions
            displayOffsetX = 0; // Display Offset X
            displayOffsetY = 0; // Display Offset Y
            displayOffsetZ = 0; // Display Offset Z
        };

        class iron_unrefined {
            // General Settings //
            useP3D = false;
            objectName = "Land_SharpStone_03"; // If useP3D p3d else className
            // Spawn Settings //
            randomSpawn = true; // If true use marker else use coordinates
            marker = "iron_mine"; // Random Spawn Marker
            coordinates[] = { // Spawn Coordinates
                {0,0,0},
                {0,0,0}
            };
            initSpawnResources = 10; // Number of resources to spawn initially (if use coordinates NEVER put more than it)
            initSpawnResourcesInside = 30; // Number of resources inside initially
            // Random Spawn Settings //
            zoneSize = 30;
            posZ = 0; // Object Height
            minDistanceObjects = 5; // Min distance for near objects
            // Respawn Settings //
            useRegenSystem = false; // If true Regen System* else Respawn System**
            respawnSeconds = 30; 
            // Regen System //
			regenAll = true; // Regen (addAmount) in all resources in the area else regen only one selected random
            addAmount = 1;
            addRandomAmount = 0;
            regenResourcesLimit = 30; // Below this number resources will regen
            // Respawn System //
            respawnResourcesLimit = 10; // Below this number resources will respawn (if use coordinates NEVER put more than it)
            // Gather Settings //
            item = "iron_unrefined"; // Item Variable you receive
            requiredItem = "pickaxe"; // Item Variable you need
            requiredLicense = ""; // License Variable you need
            requiredConditions = "playerSide isEqualTo civilian"; // More conditions
            gatherAmount = 5; // Amount you receive
            gatherRandomAmount = 0; // Extra Amount you can receive random
            sound = "mining"; // Sound to do when gather (defined in CfgSounds)
            distanceSound = 35; // Distance that sound can heard
            animation = "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon"; // Animation to do when gather
            animationTimes = 3; // How many times do the animation
            animationSleep = 1.5; // Wait until each animation
            animationSwitchMove = 0; // If you get stucked in animation set to 1
            // Display //
            displayName = "Iron Rock"; // Display Name
            displayColor = "#BDBDBD"; // Display Color
            displayIcon = "icons\ico_ironore.paa"; // Display Icon
            displayConditions = "playerSide isEqualTo civilian"; // Display Conditions
            displayOffsetX = 0; // Display Offset X
            displayOffsetY = 0; // Display Offset Y
            displayOffsetZ = 0; // Display Offset Z
        };

        class salt_unrefined {
            // General Settings //
            useP3D = false;
            objectName = "Land_SharpStone_03"; // If useP3D p3d else className
            // Spawn Settings //
            randomSpawn = true; // If true use marker else use coordinates
            marker = "salt_mine"; // Random Spawn Marker
            coordinates[] = { // Spawn Coordinates
                {0,0,0},
                {0,0,0}
            };
            initSpawnResources = 10; // Number of resources to spawn initially (if use coordinates NEVER put more than it)
            initSpawnResourcesInside = 30; // Number of resources inside initially
            // Random Spawn Settings //
            zoneSize = 30;
            posZ = 0; // Object Height
            minDistanceObjects = 5; // Min distance for near objects
            // Respawn Settings //
            useRegenSystem = false; // If true Regen System* else Respawn System**
            respawnSeconds = 30; 
            // Regen System //
			regenAll = true; // Regen (addAmount) in all resources in the area else regen only one selected random
            addAmount = 1;
            addRandomAmount = 0;
            regenResourcesLimit = 30; // Below this number resources will regen
            // Respawn System //
            respawnResourcesLimit = 10; // Below this number resources will respawn (if use coordinates NEVER put more than it)
            // Gather Settings //
            item = "salt_unrefined"; // Item Variable you receive
            requiredItem = "pickaxe"; // Item Variable you need
            requiredLicense = ""; // License Variable you need
            requiredConditions = "playerSide isEqualTo civilian"; // More conditions
            gatherAmount = 5; // Amount you receive
            gatherRandomAmount = 0; // Extra Amount you can receive random
            sound = "mining"; // Sound to do when gather (defined in CfgSounds)
            distanceSound = 35; // Distance that sound can heard
            animation = "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon"; // Animation to do when gather
            animationTimes = 3; // How many times do the animation
            animationSleep = 1.5; // Wait until each animation
            animationSwitchMove = 0; // If you get stucked in animation set to 1
            // Display //
            displayName = "Salt Rock"; // Display Name
            displayColor = "#FAFAFA"; // Display Color
            displayIcon = "icons\ico_saltUnprocessed.paa"; // Display Icon
            displayConditions = "playerSide isEqualTo civilian"; // Display Conditions
            displayOffsetX = 0; // Display Offset X
            displayOffsetY = 0; // Display Offset Y
            displayOffsetZ = 0; // Display Offset Z
        };

        class sand {
            // General Settings //
            useP3D = false;
            objectName = "Land_SharpStone_03"; // If useP3D p3d else className
            // Spawn Settings //
            randomSpawn = true; // If true use marker else use coordinates
            marker = "sand_mine"; // Random Spawn Marker
            coordinates[] = { // Spawn Coordinates
                {0,0,0},
                {0,0,0}
            };
            initSpawnResources = 10; // Number of resources to spawn initially (if use coordinates NEVER put more than it)
            initSpawnResourcesInside = 30; // Number of resources inside initially
            // Random Spawn Settings //
            zoneSize = 30;
            posZ = 0; // Object Height
            minDistanceObjects = 5; // Min distance for near objects
            // Respawn Settings //
            useRegenSystem = false; // If true Regen System* else Respawn System**
            respawnSeconds = 30; 
            // Regen System //
			regenAll = true; // Regen (addAmount) in all resources in the area else regen only one selected random
            addAmount = 1;
            addRandomAmount = 0;
            regenResourcesLimit = 30; // Below this number resources will regen
            // Respawn System //
            respawnResourcesLimit = 10; // Below this number resources will respawn (if use coordinates NEVER put more than it)
            // Gather Settings //
            item = "sand"; // Item Variable you receive
            requiredItem = "pickaxe"; // Item Variable you need
            requiredLicense = ""; // License Variable you need
            requiredConditions = "playerSide isEqualTo civilian"; // More conditions
            gatherAmount = 5; // Amount you receive
            gatherRandomAmount = 0; // Extra Amount you can receive random
            sound = "mining"; // Sound to do when gather (defined in CfgSounds)
            distanceSound = 35; // Distance that sound can heard
            animation = "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon"; // Animation to do when gather
            animationTimes = 3; // How many times do the animation
            animationSleep = 1.5; // Wait until each animation
            animationSwitchMove = 0; // If you get stucked in animation set to 1
            // Display //
            displayName = "Sand Rock"; // Display Name
            displayColor = "#F7FE2E"; // Display Color
            displayIcon = "icons\ico_sand.paa"; // Display Icon
            displayConditions = "playerSide isEqualTo civilian"; // Display Conditions
            displayOffsetX = 0; // Display Offset X
            displayOffsetY = 0; // Display Offset Y
            displayOffsetZ = 0; // Display Offset Z
        };

        class diamond_uncut {
            // General Settings //
            useP3D = false;
            objectName = "Land_SharpStone_03"; // If useP3D p3d else className
            // Spawn Settings //
            randomSpawn = true; // If true use marker else use coordinates
            marker = "diamond_mine"; // Random Spawn Marker
            coordinates[] = { // Spawn Coordinates
                {0,0,0},
                {0,0,0}
            };
            initSpawnResources = 10; // Number of resources to spawn initially (if use coordinates NEVER put more than it)
            initSpawnResourcesInside = 30; // Number of resources inside initially
            // Random Spawn Settings //
            zoneSize = 30;
            posZ = 0; // Object Height
            minDistanceObjects = 5; // Min distance for near objects
            // Respawn Settings //
            useRegenSystem = false; // If true Regen System* else Respawn System**
            respawnSeconds = 30; 
            // Regen System //
			regenAll = true; // Regen (addAmount) in all resources in the area else regen only one selected random
            addAmount = 1;
            addRandomAmount = 0;
            regenResourcesLimit = 30; // Below this number resources will regen
            // Respawn System //
            respawnResourcesLimit = 10; // Below this number resources will respawn (if use coordinates NEVER put more than it)
            // Gather Settings //
            item = "diamond_uncut"; // Item Variable you receive
            requiredItem = "pickaxe"; // Item Variable you need
            requiredLicense = ""; // License Variable you need
            requiredConditions = "playerSide isEqualTo civilian"; // More conditions
            gatherAmount = 5; // Amount you receive
            gatherRandomAmount = 0; // Extra Amount you can receive random
            sound = "mining"; // Sound to do when gather (defined in CfgSounds)
            distanceSound = 35; // Distance that sound can heard
            animation = "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon"; // Animation to do when gather
            animationTimes = 3; // How many times do the animation
            animationSleep = 1.5; // Wait until each animation
            animationSwitchMove = 0; // If you get stucked in animation set to 1
            // Display //
            displayName = "Diamond Rock"; // Display Name
            displayColor = "#2EFEF7"; // Display Color
            displayIcon = "icons\ico_diamondUncut.paa"; // Display Icon
            displayConditions = "playerSide isEqualTo civilian"; // Display Conditions
            displayOffsetX = 0; // Display Offset X
            displayOffsetY = 0; // Display Offset Y
            displayOffsetZ = 0; // Display Offset Z
        };

        class rock {
            // General Settings //
            useP3D = false;
            objectName = "Land_SharpStone_03"; // If useP3D p3d else className
            // Spawn Settings //
            randomSpawn = true; // If true use marker else use coordinates
            marker = "rock_quarry"; // Random Spawn Marker
            coordinates[] = { // Spawn Coordinates
                {0,0,0},
                {0,0,0}
            };
            initSpawnResources = 10; // Number of resources to spawn initially (if use coordinates NEVER put more than it)
            initSpawnResourcesInside = 30; // Number of resources inside initially
            // Random Spawn Settings //
            zoneSize = 30;
            posZ = 0; // Object Height
            minDistanceObjects = 5; // Min distance for near objects
            // Respawn Settings //
            useRegenSystem = false; // If true Regen System* else Respawn System**
            respawnSeconds = 30; 
            // Regen System //
			regenAll = true; // Regen (addAmount) in all resources in the area else regen only one selected random
            addAmount = 1;
            addRandomAmount = 0;
            regenResourcesLimit = 30; // Below this number resources will regen
            // Respawn System //
            respawnResourcesLimit = 10; // Below this number resources will respawn (if use coordinates NEVER put more than it)
            // Gather Settings //
            item = "rock"; // Item Variable you receive
            requiredItem = "pickaxe"; // Item Variable you need
            requiredLicense = ""; // License Variable you need
            requiredConditions = "playerSide isEqualTo civilian"; // More conditions
            gatherAmount = 5; // Amount you receive
            gatherRandomAmount = 0; // Extra Amount you can receive random
            sound = "mining"; // Sound to do when gather (defined in CfgSounds)
            distanceSound = 35; // Distance that sound can heard
            animation = "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon"; // Animation to do when gather
            animationTimes = 3; // How many times do the animation
            animationSleep = 1.5; // Wait until each animation
            animationSwitchMove = 0; // If you get stucked in animation set to 1
            // Display //
            displayName = "Rock"; // Display Name
            displayColor = "#A4A4A4"; // Display Color
            displayIcon = "icons\ico_rock.paa"; // Display Icon
            displayConditions = "playerSide isEqualTo civilian"; // Display Conditions
            displayOffsetX = 0; // Display Offset X
            displayOffsetY = 0; // Display Offset Y
            displayOffsetZ = 0; // Display Offset Z
        };

        class oil_unprocessed_1 {
            // General Settings //
            useP3D = true;
            objectName = "a3\structures_f_heli\ind\machines\waterpump_01_f.p3d"; // If useP3D p3d else className
            // Spawn Settings //
            randomSpawn = true; // If true use marker else use coordinates
            marker = "oil_field_1"; // Random Spawn Marker
            coordinates[] = { // Spawn Coordinates
                {0,0,0},
                {0,0,0}
            };
            initSpawnResources = 10; // Number of resources to spawn initially (if use coordinates NEVER put more than it)
            initSpawnResourcesInside = 30; // Number of resources inside initially
            // Random Spawn Settings //
            zoneSize = 30;
            posZ = 0; // Object Height
            minDistanceObjects = 5; // Min distance for near objects
            // Respawn Settings //
            useRegenSystem = true; // If true Regen System* else Respawn System**
            respawnSeconds = 30; 
            // Regen System //
			regenAll = true; // Regen (addAmount) in all resources in the area else regen only one selected random
            addAmount = 1;
            addRandomAmount = 0;
            regenResourcesLimit = 30; // Below this number resources will regen
            // Respawn System //
            respawnResourcesLimit = 10; // Below this number resources will respawn (if use coordinates NEVER put more than it)
            // Gather Settings //
            item = "oil_unprocessed"; // Item Variable you receive
            requiredItem = ""; // Item Variable you need
            requiredLicense = ""; // License Variable you need
            requiredConditions = "playerSide isEqualTo civilian"; // More conditions
            gatherAmount = 5; // Amount you receive
            gatherRandomAmount = 0; // Extra Amount you can receive random
            sound = "harvest"; // Sound to do when gather (defined in CfgSounds)
            distanceSound = 35; // Distance that sound can heard
            animation = "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon"; // Animation to do when gather
            animationTimes = 2; // How many times do the animation
            animationSleep = 1.5; // Wait until each animation
            animationSwitchMove = 0; // If you get stucked in animation set to 1
            // Display //
            displayName = "Oil Pump"; // Display Name
            displayColor = "#151515"; // Display Color
            displayIcon = "icons\ico_oilUnprocessed.paa"; // Display Icon
            displayConditions = "playerSide isEqualTo civilian"; // Display Conditions
            displayOffsetX = 0; // Display Offset X
            displayOffsetY = 0; // Display Offset Y
            displayOffsetZ = 1; // Display Offset Z
        };

        class oil_unprocessed_2 {
            // General Settings //
            useP3D = true;
            objectName = "a3\structures_f_heli\ind\machines\waterpump_01_f.p3d"; // If useP3D p3d else className
            // Spawn Settings //
            randomSpawn = true; // If true use marker else use coordinates
            marker = "oil_field_2"; // Random Spawn Marker
            coordinates[] = { // Spawn Coordinates
                {0,0,0},
                {0,0,0}
            };
            initSpawnResources = 10; // Number of resources to spawn initially (if use coordinates NEVER put more than it)
            initSpawnResourcesInside = 30; // Number of resources inside initially
            // Random Spawn Settings //
            zoneSize = 30;
            posZ = 0; // Object Height
            minDistanceObjects = 5; // Min distance for near objects
            // Respawn Settings //
            useRegenSystem = true; // If true Regen System* else Respawn System**
            respawnSeconds = 30; 
            // Regen System //
			regenAll = true; // Regen (addAmount) in all resources in the area else regen only one selected random
            addAmount = 1;
            addRandomAmount = 0;
            regenResourcesLimit = 30; // Below this number resources will regen
            // Respawn System //
            respawnResourcesLimit = 10; // Below this number resources will respawn (if use coordinates NEVER put more than it)
            // Gather Settings //
            item = "oil_unprocessed"; // Item Variable you receive
            requiredItem = ""; // Item Variable you need
            requiredLicense = ""; // License Variable you need
            requiredConditions = "playerSide isEqualTo civilian"; // More conditions
            gatherAmount = 5; // Amount you receive
            gatherRandomAmount = 0; // Extra Amount you can receive random
            sound = "harvest"; // Sound to do when gather (defined in CfgSounds)
            distanceSound = 35; // Distance that sound can heard
            animation = "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon"; // Animation to do when gather
            animationTimes = 2; // How many times do the animation
            animationSleep = 1.5; // Wait until each animation
            animationSwitchMove = 0; // If you get stucked in animation set to 1
            // Display //
            displayName = "Oil Pump"; // Display Name
            displayColor = "#151515"; // Display Color
            displayIcon = "icons\ico_oilUnprocessed.paa"; // Display Icon
            displayConditions = "playerSide isEqualTo civilian"; // Display Conditions
            displayOffsetX = 0; // Display Offset X
            displayOffsetY = 0; // Display Offset Y
            displayOffsetZ = 1; // Display Offset Z
        };
    };
};