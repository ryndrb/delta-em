# 1 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 2 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
.set LOCALID_STEVEN, 1
# 3 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 4 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_MapScripts::
# 5 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_HallOfFame_OnFrame
# 6 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_HallOfFame_OnWarp
# 7 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.byte 0
# 8 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 9 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_OnWarp:
# 10 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_HallOfFame_EventScript_TurnPlayerNorth
# 11 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.2byte 0
# 12 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 13 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_TurnPlayerNorth::
# 14 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 15 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	end
# 16 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 17 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_OnFrame:
# 18 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame
# 19 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.2byte 0
# 20 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 21 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame::
# 22 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	lockall
# 23 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_STEVEN, EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame1
# 24 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame1
# 25 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 26 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceRight
# 27 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	delay 8
# 28 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 29 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 30 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	msgbox EverGrandeCity_HallOfFame_Text_HereWeHonorLeagueChampions, MSGBOX_DEFAULT
# 31 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	closemessage
# 32 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_STEVEN, EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame2
# 33 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame2
# 34 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 35 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	delay 24
# 36 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceRight
# 37 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	delay 8
# 38 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 39 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 40 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	msgbox EverGrandeCity_HallOfFame_Text_LetsRecordYouAndYourPartnersNames, MSGBOX_DEFAULT
# 41 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	closemessage
# 42 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceUp
# 43 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	delay 8
# 44 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 45 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 46 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	delay 24
# 47 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	dofieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 48 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitfieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 49 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	delay 48
# 50 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	setvar VAR_TEMP_1, 1
# 51 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	call EverGrandeCity_HallOfFame_EventScript_SetGameClearFlags
# 52 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
    setvar VAR_EVER_GRANDE_CITY_STATE, 1
# 53 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
    clearflag FLAG_HIDE_EVER_GRANDE_CITY_RIVAL
# 54 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
    fadescreen FADE_TO_BLACK
# 55 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
    setflag FLAG_REMOVE_WARP_FADE
# 56 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
    delay 48
# 57 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
    warpsilent MAP_EVER_GRANDE_CITY, 18, 6
# 58 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
    waitstate
# 59 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	end
# 60 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 61 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame1:
# 62 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 63 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 64 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 65 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 66 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 67 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 68 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	step_end
# 69 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 70 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame2:
# 71 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 72 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 73 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 74 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 75 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 76 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	step_end
# 77 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 78 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Text_HereWeHonorLeagueChampions:
# 79 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: This room…\pThis is where we maintain the records\nof Pokémon that prevailed through\lthe harshest of battles.\pIt is here that League Champions are\nhonored.$"
# 80 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 81 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Text_LetsRecordYouAndYourPartnersNames:
# 82 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "Come.\nWe will use this machine to record\lyour name and the names of the\lpartners who battled along with you\lto triumph over the Pokémon League!$"
