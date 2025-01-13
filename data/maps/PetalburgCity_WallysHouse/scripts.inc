# 1 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 2 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
.set LOCALID_WALLYS_DAD, 1
# 3 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 4 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_MapScripts::
# 5 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_WallysHouse_OnWarp
# 6 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.byte 0
# 7 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 8 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_OnWarp:
# 9 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_WallysHouse_EventScript_PlayerWallysDadFaceEachOther
# 10 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.2byte 0
# 11 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 12 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_PlayerWallysDadFaceEachOther::
# 13 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 14 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	turnobject LOCALID_WALLYS_DAD, DIR_WEST
# 15 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 16 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 17 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysDad::
# 18 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lock
# 19 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	faceplayer
# 20 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, PetalburgCity_WallysHouse_EventScript_DefeatedWallyInVictoryRoad
# 21 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_SURF, PetalburgCity_WallysHouse_EventScript_ReceievedHMSurf
# 22 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_THANKED_FOR_PLAYING_WITH_WALLY, PetalburgCity_WallysHouse_EventScript_PlayedWithWally
# 23 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_ThanksForPlayingWithWally, MSGBOX_DEFAULT
# 24 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setflag FLAG_THANKED_FOR_PLAYING_WITH_WALLY
# 25 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 26 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 27 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 28 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_ReceievedHMSurf::
# 29 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon, MSGBOX_DEFAULT
# 30 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 31 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 32 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 33 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_DefeatedWallyInVictoryRoad::
# 34 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity, MSGBOX_DEFAULT
# 35 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 36 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 37 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 38 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_PlayedWithWally::
# 39 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing, MSGBOX_DEFAULT
# 40 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 41 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 42 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 43 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysMom::
# 44 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lock
# 45 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	faceplayer
# 46 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_SURF, PetalburgCity_WallysHouse_EventScript_ReceivedHMSurf
# 47 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyWasReallyHappy, MSGBOX_DEFAULT
# 48 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 49 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 50 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 51 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_ReceivedHMSurf::
# 52 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling, MSGBOX_DEFAULT
# 53 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 54 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 55 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 56 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_ThanksForPlayingWithWally:
# 57 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "You…\nAh. You're {PLAYER}, aren't you?\pThank you for helping Wally out back\nthere.\pThat boy has been sickly since the\ntime he was born, I'm afraid.\pThat's why we decided to stay with\nmy brother's family in Verdanturf\lTown for a while.\pThe air is far cleaner there than it\nis around these parts.\pOh, you're looking for Wally?\pI'm sorry, {PLAYER}, but I'm afraid\nhe's already left.\pI wonder where he is right this\nmoment…$"
# 58 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 59 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing:
# 60 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I wonder how our Wally is doing?$"
# 61 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 62 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon:
# 63 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Wally's coming home soon.\n"
# 64 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I'm looking forward to that.$"
# 65 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 66 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity:
# 67 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Oh? You met Wally in\n"
# 68 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Ever Grande City?\p"
# 69 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Oh, {PLAYER}{KUN}, don't be silly.\p"
# 70 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "He may have gotten healthy, but he\n"
# 71 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "can't go somewhere far away like\l"
# 72 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "that all by himself.$"
# 73 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 74 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyWasReallyHappy:
# 75 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Wally was so happy when he told us\nthat he'd caught a Pokémon…\pIt's been ages since I've seen him\nsmile like that…$"
# 76 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 77 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling:
# 78 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I want you to keep this a secret\n"
# 79 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "from my husband…\p"
# 80 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "But our Wally left Verdanturf Town\n"
# 81 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "without telling anyone.\p"
# 82 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "You know, Wally is frail, but\n"
# 83 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "he's surprisingly strong-willed.\p"
# 84 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I'm sure that he'll come back safe\n"
# 85 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "and sound one day!$"
