# 1 "data/maps/EverGrandeCity/scripts.pory"

# 2 "data/maps/EverGrandeCity/scripts.pory"
.set LOCALID_RIVAL, 1
# 3 "data/maps/EverGrandeCity/scripts.pory"

# 4 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_MapScripts::
# 5 "data/maps/EverGrandeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_OnTransition
# 6 "data/maps/EverGrandeCity/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_OnFrame
# 7 "data/maps/EverGrandeCity/scripts.pory"
	.byte 0
# 8 "data/maps/EverGrandeCity/scripts.pory"

# 9 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_OnTransition:
# 10 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 11 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 12 "data/maps/EverGrandeCity/scripts.pory"
	end
# 13 "data/maps/EverGrandeCity/scripts.pory"

# 14 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_OnFrame:
# 15 "data/maps/EverGrandeCity/scripts.pory"
	map_script_2 VAR_EVER_GRANDE_CITY_STATE, 1, EverGrandeCity_EventScript_AfterHallOfFameRival
# 16 "data/maps/EverGrandeCity/scripts.pory"
	.2byte 0
# 17 "data/maps/EverGrandeCity/scripts.pory"

# 18 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_VictoryRoadSign::
# 19 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
# 20 "data/maps/EverGrandeCity/scripts.pory"
	end
# 21 "data/maps/EverGrandeCity/scripts.pory"

# 22 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_CitySign::
# 23 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
# 24 "data/maps/EverGrandeCity/scripts.pory"
	end
# 25 "data/maps/EverGrandeCity/scripts.pory"

# 26 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_PokemonLeagueSign::
# 27 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
# 28 "data/maps/EverGrandeCity/scripts.pory"
	end
# 29 "data/maps/EverGrandeCity/scripts.pory"

# 30 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_SetVisitedEverGrande::
# 31 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 32 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 33 "data/maps/EverGrandeCity/scripts.pory"
	end
# 34 "data/maps/EverGrandeCity/scripts.pory"

# 35 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringVictoryRoad:
# 36 "data/maps/EverGrandeCity/scripts.pory"
	.string "Entering Victory Road$"
# 37 "data/maps/EverGrandeCity/scripts.pory"

# 38 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringPokemonLeague:
# 39 "data/maps/EverGrandeCity/scripts.pory"
	.string "Entering Pokémon League\n"
# 40 "data/maps/EverGrandeCity/scripts.pory"
	.string "Center Gate$"
# 41 "data/maps/EverGrandeCity/scripts.pory"

# 42 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_CitySign:
# 43 "data/maps/EverGrandeCity/scripts.pory"
	.string "Ever Grande City\p"
# 44 "data/maps/EverGrandeCity/scripts.pory"
	.string "“The paradise of flowers, the sea,\n"
# 45 "data/maps/EverGrandeCity/scripts.pory"
	.string "and Pokémon.”$"

EverGrandeCity_EventScript_AfterHallOfFameRival::
# 51 "data/maps/EverGrandeCity/scripts.pory"
	lock
# 52 "data/maps/EverGrandeCity/scripts.pory"
	delay 64
# 53 "data/maps/EverGrandeCity/scripts.pory"
	special SpawnCameraObject
# 54 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 55 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 56 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 57 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 58 "data/maps/EverGrandeCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceUp
# 59 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement LOCALID_RIVAL
# 60 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_AfterHallOfFameRival_Text_0
# 61 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 62 "data/maps/EverGrandeCity/scripts.pory"
	delay 32
# 63 "data/maps/EverGrandeCity/scripts.pory"
	checkplayergender
# 64 "data/maps/EverGrandeCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_EventScript_AfterHallOfFameRival_2
# 75 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_AfterHallOfFameRival_Text_5
# 76 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 77 "data/maps/EverGrandeCity/scripts.pory"
	delay 32
# 78 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_AfterHallOfFameRival_Text_2
# 79 "data/maps/EverGrandeCity/scripts.pory"
	delay 24
# 80 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_AfterHallOfFameRival_Text_6
# 81 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 82 "data/maps/EverGrandeCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkUp
# 83 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement LOCALID_RIVAL
# 84 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_AfterHallOfFameRival_Text_7
EverGrandeCity_EventScript_AfterHallOfFameRival_1:
# 86 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 87 "data/maps/EverGrandeCity/scripts.pory"
	delay 16
# 88 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_HIDE_EVER_GRANDE_CITY_RIVAL
# 89 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_EVER_GRANDE_CITY_STATE, 2
# 90 "data/maps/EverGrandeCity/scripts.pory"
	checkplayergender
# 91 "data/maps/EverGrandeCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_EventScript_AfterHallOfFameRival_6
# 94 "data/maps/EverGrandeCity/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
EverGrandeCity_EventScript_AfterHallOfFameRival_5:
# 96 "data/maps/EverGrandeCity/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_EventScript_RivalExit
# 97 "data/maps/EverGrandeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_EventScript_PlayerExit
# 98 "data/maps/EverGrandeCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 99 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 100 "data/maps/EverGrandeCity/scripts.pory"
	special RemoveCameraObject
# 101 "data/maps/EverGrandeCity/scripts.pory"
	special GameClear
# 102 "data/maps/EverGrandeCity/scripts.pory"
	waitstate
# 103 "data/maps/EverGrandeCity/scripts.pory"
	release
	end

EverGrandeCity_EventScript_AfterHallOfFameRival_2:
# 65 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_AfterHallOfFameRival_Text_1
# 66 "data/maps/EverGrandeCity/scripts.pory"
	delay 24
# 67 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_AfterHallOfFameRival_Text_2
# 68 "data/maps/EverGrandeCity/scripts.pory"
	delay 16
# 69 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_AfterHallOfFameRival_Text_3
# 70 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 71 "data/maps/EverGrandeCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkUp
# 72 "data/maps/EverGrandeCity/scripts.pory"
	waitmovement LOCALID_RIVAL
# 73 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_AfterHallOfFameRival_Text_4
	goto EverGrandeCity_EventScript_AfterHallOfFameRival_1

EverGrandeCity_EventScript_AfterHallOfFameRival_6:
# 92 "data/maps/EverGrandeCity/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
	goto EverGrandeCity_EventScript_AfterHallOfFameRival_5


# 107 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_RivalExit:
# 108 "data/maps/EverGrandeCity/scripts.pory"
	delay_16
# 109 "data/maps/EverGrandeCity/scripts.pory"
	delay_16
# 110 "data/maps/EverGrandeCity/scripts.pory"
	delay_16
# 111 "data/maps/EverGrandeCity/scripts.pory"
	walk_in_place_right
# 112 "data/maps/EverGrandeCity/scripts.pory"
	delay_16
# 113 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 113 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 113 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 113 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 113 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 113 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 113 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 113 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
	step_end

# 116 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_PlayerExit:
# 117 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 118 "data/maps/EverGrandeCity/scripts.pory"
	walk_right
# 119 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 120 "data/maps/EverGrandeCity/scripts.pory"
	walk_in_place_left
# 121 "data/maps/EverGrandeCity/scripts.pory"
	delay_16
# 122 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 122 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 122 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 122 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 122 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 122 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 122 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
# 122 "data/maps/EverGrandeCity/scripts.pory"
	walk_down
	step_end

EverGrandeCity_EventScript_AfterHallOfFameRival_Text_0:
# 60 "data/maps/EverGrandeCity/scripts.pory"
	.string "{COLOR RED}{RIVAL}{COLOR DARK_GRAY}: Welcome back, {PLAYER}.$"

EverGrandeCity_EventScript_AfterHallOfFameRival_Text_1:
# 65 "data/maps/EverGrandeCity/scripts.pory"
	.string "I just thought, you know, that since we\nwere both here and all…that I'd wait\lfor you.$"

EverGrandeCity_EventScript_AfterHallOfFameRival_Text_2:
# 67 "data/maps/EverGrandeCity/scripts.pory"
	.string "We set out on this journey together,\nright?\pSo maybe we should finish it together,\ntoo.$"

EverGrandeCity_EventScript_AfterHallOfFameRival_Text_3:
# 69 "data/maps/EverGrandeCity/scripts.pory"
	.string "Hee hee…$"

EverGrandeCity_EventScript_AfterHallOfFameRival_Text_4:
# 73 "data/maps/EverGrandeCity/scripts.pory"
	.string "So…come on!\nLet's go home!\lBack to Littleroot Town!$"

EverGrandeCity_EventScript_AfterHallOfFameRival_Text_5:
# 75 "data/maps/EverGrandeCity/scripts.pory"
	.string "I, just, uh, you know…$"

EverGrandeCity_EventScript_AfterHallOfFameRival_Text_6:
# 80 "data/maps/EverGrandeCity/scripts.pory"
	.string "D-don't go trying to read anything into\nit, though!$"

EverGrandeCity_EventScript_AfterHallOfFameRival_Text_7:
# 84 "data/maps/EverGrandeCity/scripts.pory"
	.string "Now, come on!\nWe're going home!\lBack to Littleroot Town!$"
