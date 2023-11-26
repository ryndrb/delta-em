.set LOCALID_RIVAL, 1

EverGrandeCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_OnTransition
    map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_OnFrame
	.byte 0

EverGrandeCity_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
	end

EverGrandeCity_OnFrame:
	map_script_2 VAR_EVER_GRANDE_CITY_STATE, 1, EverGrandeCity_EventScript_AfterHallOfFameRival
	.2byte 0

EverGrandeCity_EventScript_VictoryRoadSign::
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
	end

EverGrandeCity_EventScript_CitySign::
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
	end

EverGrandeCity_EventScript_PokemonLeagueSign::
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
	end

EverGrandeCity_EventScript_SetVisitedEverGrande::
	setflag FLAG_VISITED_EVER_GRANDE_CITY
	setvar VAR_TEMP_1, 1
	end

EverGrandeCity_Text_EnteringVictoryRoad:
	.string "Entering Victory Road$"

EverGrandeCity_Text_EnteringPokemonLeague:
	.string "Entering Pokémon League\n"
	.string "Center Gate$"

EverGrandeCity_Text_CitySign:
	.string "Ever Grande City\p"
	.string "“The paradise of flowers, the sea,\n"
	.string "and Pokémon.”$"

EverGrandeCity_EventScript_AfterHallOfFameRival::
	lock
	delay 64
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	waitmovement OBJ_EVENT_ID_CAMERA
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	waitmovement OBJ_EVENT_ID_CAMERA
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceUp
	waitmovement LOCALID_RIVAL
	msgbox EverGrandeCity_EventScript_AfterHallOfFameRival_Text_0
	closemessage
	delay 32
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_EventScript_AfterHallOfFameRival_2
	msgbox EverGrandeCity_EventScript_AfterHallOfFameRival_Text_5
	closemessage
	delay 32
	msgbox EverGrandeCity_EventScript_AfterHallOfFameRival_Text_2
	delay 24
	msgbox EverGrandeCity_EventScript_AfterHallOfFameRival_Text_6
	closemessage
	applymovement LOCALID_RIVAL, Common_Movement_WalkUp
	waitmovement LOCALID_RIVAL
	msgbox EverGrandeCity_EventScript_AfterHallOfFameRival_Text_7
EverGrandeCity_EventScript_AfterHallOfFameRival_1:
	closemessage
	delay 16
	setflag FLAG_HIDE_EVER_GRANDE_CITY_RIVAL
	setvar VAR_EVER_GRANDE_CITY_STATE, 2
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_EventScript_AfterHallOfFameRival_6
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
EverGrandeCity_EventScript_AfterHallOfFameRival_5:
	applymovement LOCALID_RIVAL, EverGrandeCity_EventScript_RivalExit
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_EventScript_PlayerExit
	fadescreenspeed FADE_TO_BLACK, 24
	waitmovement OBJ_EVENT_ID_PLAYER
	special RemoveCameraObject
	special GameClear
	waitstate
	release
	end

EverGrandeCity_EventScript_AfterHallOfFameRival_2:
	msgbox EverGrandeCity_EventScript_AfterHallOfFameRival_Text_1
	delay 24
	msgbox EverGrandeCity_EventScript_AfterHallOfFameRival_Text_2
	delay 16
	msgbox EverGrandeCity_EventScript_AfterHallOfFameRival_Text_3
	closemessage
	applymovement LOCALID_RIVAL, Common_Movement_WalkUp
	waitmovement LOCALID_RIVAL
	msgbox EverGrandeCity_EventScript_AfterHallOfFameRival_Text_4
	goto EverGrandeCity_EventScript_AfterHallOfFameRival_1

EverGrandeCity_EventScript_AfterHallOfFameRival_6:
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
	goto EverGrandeCity_EventScript_AfterHallOfFameRival_5


EverGrandeCity_EventScript_RivalExit:
	delay_16
	delay_16
	delay_16
	walk_in_place_right
	delay_16
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

EverGrandeCity_EventScript_PlayerExit:
	walk_down
	walk_right
	walk_down
	walk_in_place_left
	delay_16
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

EverGrandeCity_EventScript_AfterHallOfFameRival_Text_0:
	.string "{COLOR RED}{RIVAL}{COLOR DARK_GRAY}: Welcome back, {PLAYER}.$"

EverGrandeCity_EventScript_AfterHallOfFameRival_Text_1:
	.string "I just thought, you know, that since we\nwere both here and all…that I'd wait\lfor you.$"

EverGrandeCity_EventScript_AfterHallOfFameRival_Text_2:
	.string "We set out on this journey together,\nright?\pSo maybe we should finish it together,\ntoo.$"

EverGrandeCity_EventScript_AfterHallOfFameRival_Text_3:
	.string "Hee hee…$"

EverGrandeCity_EventScript_AfterHallOfFameRival_Text_4:
	.string "So…come on!\nLet's go home!\lBack to Littleroot Town!$"

EverGrandeCity_EventScript_AfterHallOfFameRival_Text_5:
	.string "I, just, uh, you know…$"

EverGrandeCity_EventScript_AfterHallOfFameRival_Text_6:
	.string "D-don't go trying to read anything into\nit, though!$"

EverGrandeCity_EventScript_AfterHallOfFameRival_Text_7:
	.string "Now, come on!\nWe're going home!\lBack to Littleroot Town!$"
