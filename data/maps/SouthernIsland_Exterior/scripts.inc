.set LOCALID_SAILOR, 1
.set LOCALID_SS_TIDAL, 2
.set LOCALID_STEVEN, 3

SouthernIsland_Exterior_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SouthernIsland_Exterior_OnTransition
    map_script MAP_SCRIPT_ON_FRAME_TABLE, SouthernIsland_Exterior_OnFrameTable
	.byte 0

SouthernIsland_Exterior_OnTransition:
	setflag FLAG_LANDMARK_SOUTHERN_ISLAND
    call_if_eq VAR_SOUTHERN_ISLAND_STATE, 3, SouthernIsland_Exterior_EventScript_StevenPos
	end

SouthernIsland_Exterior_EventScript_StevenPos::
    setobjectxyperm LOCALID_STEVEN, 15, 20
    return

SouthernIsland_Exterior_OnFrameTable:
    map_script_2 VAR_SOUTHERN_ISLAND_STATE, 0, SouthernIsland_Exterior_EventScript_Arrived
    map_script_2 VAR_SOUTHERN_ISLAND_STATE, 3, SouthernIsland_Exterior_EventScript_LeaveIsland
    .2byte 0

SouthernIsland_Exterior_EventScript_Sailor::
	lock
	faceplayer
	msgbox EventTicket_Text_SouthernIslandSailBack, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SouthernIsland_Exterior_EventScript_AsYouLike
	msgbox EventTicket_Text_SailHome, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 30
	hideobjectat LOCALID_SAILOR, MAP_SOUTHERN_ISLAND_EXTERIOR
	setvar VAR_0x8004, LOCALID_SS_TIDAL
	call Common_EventScript_FerryDepartIsland
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
	waitstate
	release
	end

SouthernIsland_Exterior_EventScript_AsYouLike::
	msgbox EventTicket_Text_AsYouLike, MSGBOX_DEFAULT
	release
	end

Ferry_EventScript_DepartIslandSouth::
	applymovement OBJ_EVENT_ID_PLAYER, Ferry_Movement_DepartIslandBoardSouth
	waitmovement 0
	return

Ferry_EventScript_DepartIslandWest::
	applymovement OBJ_EVENT_ID_PLAYER, Ferry_Movement_DepartIslandBoardWest
	waitmovement 0
	return

Ferry_Movement_DepartIslandBoardSouth:
	walk_down
	step_end

Ferry_Movement_DepartIslandBoardWest:
	walk_left
	walk_in_place_faster_down
	step_end

SouthernIsland_Exterior_EventScript_Sign::
	msgbox SouthernIsland_Exterior_Text_Sign, MSGBOX_SIGN
	end

SouthernIsland_Exterior_EventScript_Arrived::
	lock
	delay 16
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceLeft
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox SouthernIsland_Exterior_EventScript_Arrived_Text_0
	closemessage
	delay 8
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox SouthernIsland_Exterior_EventScript_Arrived_Text_1
	closemessage
	delay 16
	applymovement LOCALID_STEVEN, SouthernIsland_Exterior_Movement_StevenLookAround
	delay 16
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement LOCALID_STEVEN
	msgbox SouthernIsland_Exterior_EventScript_Arrived_Text_2
	closemessage
	applymovement LOCALID_STEVEN, Common_Movement_WalkDown
	waitmovement LOCALID_STEVEN
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceLeft
	waitmovement LOCALID_STEVEN
	msgbox SouthernIsland_Exterior_EventScript_Arrived_Text_3
	closemessage
	setvar VAR_SOUTHERN_ISLAND_STATE, 1
	release
	end


SouthernIsland_Exterior_Movement_StevenLookAround:
	walk_up
	delay_16
	walk_in_place_right
	delay_16
	walk_in_place_left
	delay_16
	delay_16
	walk_in_place_up
	delay_16
	walk_in_place_right
	delay_16
	delay_16
	walk_in_place_up
	delay_16
	delay_16
	delay_16
	step_end

SouthernIsland_Exterior_EventScript_Steven::
	lock
	faceplayer
	msgbox SouthernIsland_Exterior_EventScript_Steven_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq SouthernIsland_Exterior_EventScript_Steven_2
SouthernIsland_Exterior_EventScript_Steven_1:
	msgbox SouthernIsland_Exterior_EventScript_Steven_Text_3
	closemessage
	release
	end

SouthernIsland_Exterior_EventScript_Steven_2:
	msgbox SouthernIsland_Exterior_EventScript_Steven_Text_1
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_STEVEN
	msgbox SouthernIsland_Exterior_EventScript_Steven_Text_2
	closemessage
	delay 8
	fadescreen FADE_TO_BLACK
	setflag FLAG_REMOVE_WARP_FADE
	clearflag FLAG_HIDE_ROUTE_118_STEVEN
	clearflag FLAG_HIDE_ROUTE_118_LATIAS
	setvar VAR_ROUTE118_STATE, 2
	warpsilent MAP_ROUTE118, 44, 15
	waitstate
	goto SouthernIsland_Exterior_EventScript_Steven_1


SouthernIsland_Exterior_EventScript_Latias::
	waitse
	playmoncry SPECIES_LATIAS, CRY_MODE_NORMAL
	msgbox SouthernIsland_Exterior_EventScript_Latias_Text_0
	waitmoncry
	closemessage
	end


SouthernIsland_Exterior_EventScript_GetInsideTrigger::
	lock
	msgbox SouthernIsland_Exterior_EventScript_GetInsideTrigger_Text_0
	closemessage
	delay 8
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement OBJ_EVENT_ID_PLAYER
	waitse
	msgbox SouthernIsland_Exterior_EventScript_GetInsideTrigger_Text_1
	setvar VAR_SOUTHERN_ISLAND_STATE, 2
	release
	end


SouthernIsland_Exterior_EventScript_LeaveIsland::
	lock
	delay 24
	fadescreen FADE_TO_BLACK
	setflag FLAG_REMOVE_WARP_FADE
	clearflag FLAG_HIDE_ROUTE_118_STEVEN
	clearflag FLAG_HIDE_ROUTE_118_LATIAS
	setflag FLAG_HIDE_SOUTHERN_ISLAND_EXTERIOR_LATIAS
	setflag FLAG_HIDE_SOUTHERN_ISLAND_EXTERIOR_STEVEN
	setvar VAR_SOUTHERN_ISLAND_STATE, 4
	warpsilent MAP_ROUTE118, 44, 15
	waitstate
	release
	end


SouthernIsland_Exterior_EventScript_Arrived_Text_0:
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: We've arrived.$"

SouthernIsland_Exterior_EventScript_Arrived_Text_1:
	.string "Thank you, Latias.$"

SouthernIsland_Exterior_EventScript_Arrived_Text_2:
	.string "…\pI don't know what it is…\pNot quite unease, not quite fear…\pBut there is something…unsettling…\pIt's an odd feeling, as though I am\nwalking in a dream--or an illusion.$"

SouthernIsland_Exterior_EventScript_Arrived_Text_3:
	.string "I once heard an odd fable.\pIt was said that the two Pokémon that\nlive on this island guard some secret\labout that great form of evolution:\lMega Evolution.\pCould it be that some dangerous\nelement is here because of that?\p…\pCome, we should be going.$"

SouthernIsland_Exterior_EventScript_Steven_Text_0:
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: What is it you want to do?\pWould you like to return to Route 118\nfor a time?$"

SouthernIsland_Exterior_EventScript_Steven_Text_1:
	.string "I understand.$"

SouthernIsland_Exterior_EventScript_Steven_Text_2:
	.string "Latias, if you would oblige…$"

SouthernIsland_Exterior_EventScript_Steven_Text_3:
	.string "In that case…\pShall we go see once and for all whether\nthere is anything to be found on this\lisland?$"

SouthernIsland_Exterior_EventScript_Latias_Text_0:
	.string "Hyahhn!$"

SouthernIsland_Exterior_EventScript_GetInsideTrigger_Text_0:
	.string "(Th-- wh-- mem-- de se-- to carv--\nth--rts…)$"

SouthernIsland_Exterior_EventScript_GetInsideTrigger_Text_1:
	.string "(Those whose memories fade seek to\ncarve them in their hearts…)$"
