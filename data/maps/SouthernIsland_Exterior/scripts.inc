# 1 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 2 "data/maps/SouthernIsland_Exterior/scripts.pory"
.set LOCALID_SAILOR, 1
# 3 "data/maps/SouthernIsland_Exterior/scripts.pory"
.set LOCALID_SS_TIDAL, 2
# 4 "data/maps/SouthernIsland_Exterior/scripts.pory"
.set LOCALID_STEVEN, 3
# 5 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 6 "data/maps/SouthernIsland_Exterior/scripts.pory"
SouthernIsland_Exterior_MapScripts::
# 7 "data/maps/SouthernIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SouthernIsland_Exterior_OnTransition
# 8 "data/maps/SouthernIsland_Exterior/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, SouthernIsland_Exterior_OnFrameTable
# 9 "data/maps/SouthernIsland_Exterior/scripts.pory"
	.byte 0
# 10 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 11 "data/maps/SouthernIsland_Exterior/scripts.pory"
SouthernIsland_Exterior_OnTransition:
# 12 "data/maps/SouthernIsland_Exterior/scripts.pory"
    call_if_eq VAR_SOUTHERN_ISLAND_STATE, 3, SouthernIsland_Exterior_EventScript_StevenPos
# 13 "data/maps/SouthernIsland_Exterior/scripts.pory"
	end
# 14 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 15 "data/maps/SouthernIsland_Exterior/scripts.pory"
SouthernIsland_Exterior_EventScript_StevenPos::
# 16 "data/maps/SouthernIsland_Exterior/scripts.pory"
    setobjectxyperm LOCALID_STEVEN, 15, 20
# 17 "data/maps/SouthernIsland_Exterior/scripts.pory"
    return
# 18 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 19 "data/maps/SouthernIsland_Exterior/scripts.pory"
SouthernIsland_Exterior_OnFrameTable:
# 20 "data/maps/SouthernIsland_Exterior/scripts.pory"
    map_script_2 VAR_SOUTHERN_ISLAND_STATE, 0, SouthernIsland_Exterior_EventScript_Arrived
# 21 "data/maps/SouthernIsland_Exterior/scripts.pory"
    map_script_2 VAR_SOUTHERN_ISLAND_STATE, 3, SouthernIsland_Exterior_EventScript_LeaveIsland
# 22 "data/maps/SouthernIsland_Exterior/scripts.pory"
    .2byte 0
# 23 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 24 "data/maps/SouthernIsland_Exterior/scripts.pory"
SouthernIsland_Exterior_EventScript_Sailor::
# 25 "data/maps/SouthernIsland_Exterior/scripts.pory"
	lock
# 26 "data/maps/SouthernIsland_Exterior/scripts.pory"
	faceplayer
# 27 "data/maps/SouthernIsland_Exterior/scripts.pory"
	msgbox EventTicket_Text_SouthernIslandSailBack, MSGBOX_YESNO
# 28 "data/maps/SouthernIsland_Exterior/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SouthernIsland_Exterior_EventScript_AsYouLike
# 29 "data/maps/SouthernIsland_Exterior/scripts.pory"
	msgbox EventTicket_Text_SailHome, MSGBOX_DEFAULT
# 30 "data/maps/SouthernIsland_Exterior/scripts.pory"
	closemessage
# 31 "data/maps/SouthernIsland_Exterior/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 32 "data/maps/SouthernIsland_Exterior/scripts.pory"
	waitmovement 0
# 33 "data/maps/SouthernIsland_Exterior/scripts.pory"
	delay 30
# 34 "data/maps/SouthernIsland_Exterior/scripts.pory"
	hideobjectat LOCALID_SAILOR, MAP_SOUTHERN_ISLAND_EXTERIOR
# 35 "data/maps/SouthernIsland_Exterior/scripts.pory"
	setvar VAR_0x8004, LOCALID_SS_TIDAL
# 36 "data/maps/SouthernIsland_Exterior/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 37 "data/maps/SouthernIsland_Exterior/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
# 38 "data/maps/SouthernIsland_Exterior/scripts.pory"
	waitstate
# 39 "data/maps/SouthernIsland_Exterior/scripts.pory"
	release
# 40 "data/maps/SouthernIsland_Exterior/scripts.pory"
	end
# 41 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 42 "data/maps/SouthernIsland_Exterior/scripts.pory"
SouthernIsland_Exterior_EventScript_AsYouLike::
# 43 "data/maps/SouthernIsland_Exterior/scripts.pory"
	msgbox EventTicket_Text_AsYouLike, MSGBOX_DEFAULT
# 44 "data/maps/SouthernIsland_Exterior/scripts.pory"
	release
# 45 "data/maps/SouthernIsland_Exterior/scripts.pory"
	end
# 46 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 47 "data/maps/SouthernIsland_Exterior/scripts.pory"
Ferry_EventScript_DepartIslandSouth::
# 48 "data/maps/SouthernIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ferry_Movement_DepartIslandBoardSouth
# 49 "data/maps/SouthernIsland_Exterior/scripts.pory"
	waitmovement 0
# 50 "data/maps/SouthernIsland_Exterior/scripts.pory"
	return
# 51 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 52 "data/maps/SouthernIsland_Exterior/scripts.pory"
Ferry_EventScript_DepartIslandWest::
# 53 "data/maps/SouthernIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ferry_Movement_DepartIslandBoardWest
# 54 "data/maps/SouthernIsland_Exterior/scripts.pory"
	waitmovement 0
# 55 "data/maps/SouthernIsland_Exterior/scripts.pory"
	return
# 56 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 57 "data/maps/SouthernIsland_Exterior/scripts.pory"
Ferry_Movement_DepartIslandBoardSouth:
# 58 "data/maps/SouthernIsland_Exterior/scripts.pory"
	walk_down
# 59 "data/maps/SouthernIsland_Exterior/scripts.pory"
	step_end
# 60 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 61 "data/maps/SouthernIsland_Exterior/scripts.pory"
Ferry_Movement_DepartIslandBoardWest:
# 62 "data/maps/SouthernIsland_Exterior/scripts.pory"
	walk_left
# 63 "data/maps/SouthernIsland_Exterior/scripts.pory"
	walk_in_place_faster_down
# 64 "data/maps/SouthernIsland_Exterior/scripts.pory"
	step_end
# 65 "data/maps/SouthernIsland_Exterior/scripts.pory"

# 66 "data/maps/SouthernIsland_Exterior/scripts.pory"
SouthernIsland_Exterior_EventScript_Sign::
# 67 "data/maps/SouthernIsland_Exterior/scripts.pory"
	msgbox SouthernIsland_Exterior_Text_Sign, MSGBOX_SIGN
# 68 "data/maps/SouthernIsland_Exterior/scripts.pory"
	end

SouthernIsland_Exterior_EventScript_Arrived::
# 74 "data/maps/SouthernIsland_Exterior/scripts.pory"
	lock
# 75 "data/maps/SouthernIsland_Exterior/scripts.pory"
	delay 16
# 76 "data/maps/SouthernIsland_Exterior/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceLeft
# 77 "data/maps/SouthernIsland_Exterior/scripts.pory"
	delay 8
# 78 "data/maps/SouthernIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 79 "data/maps/SouthernIsland_Exterior/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 80 "data/maps/SouthernIsland_Exterior/scripts.pory"
	msgbox SouthernIsland_Exterior_EventScript_Arrived_Text_0
# 81 "data/maps/SouthernIsland_Exterior/scripts.pory"
	closemessage
# 82 "data/maps/SouthernIsland_Exterior/scripts.pory"
	delay 8
# 83 "data/maps/SouthernIsland_Exterior/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
# 84 "data/maps/SouthernIsland_Exterior/scripts.pory"
	delay 8
# 85 "data/maps/SouthernIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 86 "data/maps/SouthernIsland_Exterior/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 87 "data/maps/SouthernIsland_Exterior/scripts.pory"
	msgbox SouthernIsland_Exterior_EventScript_Arrived_Text_1
# 88 "data/maps/SouthernIsland_Exterior/scripts.pory"
	closemessage
# 89 "data/maps/SouthernIsland_Exterior/scripts.pory"
	delay 16
# 90 "data/maps/SouthernIsland_Exterior/scripts.pory"
	applymovement LOCALID_STEVEN, SouthernIsland_Exterior_Movement_StevenLookAround
# 91 "data/maps/SouthernIsland_Exterior/scripts.pory"
	delay 16
# 92 "data/maps/SouthernIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 93 "data/maps/SouthernIsland_Exterior/scripts.pory"
	waitmovement LOCALID_STEVEN
# 94 "data/maps/SouthernIsland_Exterior/scripts.pory"
	msgbox SouthernIsland_Exterior_EventScript_Arrived_Text_2
# 95 "data/maps/SouthernIsland_Exterior/scripts.pory"
	closemessage
# 96 "data/maps/SouthernIsland_Exterior/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkDown
# 97 "data/maps/SouthernIsland_Exterior/scripts.pory"
	waitmovement LOCALID_STEVEN
# 98 "data/maps/SouthernIsland_Exterior/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceLeft
# 99 "data/maps/SouthernIsland_Exterior/scripts.pory"
	waitmovement LOCALID_STEVEN
# 100 "data/maps/SouthernIsland_Exterior/scripts.pory"
	msgbox SouthernIsland_Exterior_EventScript_Arrived_Text_3
# 101 "data/maps/SouthernIsland_Exterior/scripts.pory"
	closemessage
# 102 "data/maps/SouthernIsland_Exterior/scripts.pory"
	setvar VAR_SOUTHERN_ISLAND_STATE, 1
# 103 "data/maps/SouthernIsland_Exterior/scripts.pory"
	release
	end


# 107 "data/maps/SouthernIsland_Exterior/scripts.pory"
SouthernIsland_Exterior_Movement_StevenLookAround:
# 108 "data/maps/SouthernIsland_Exterior/scripts.pory"
	walk_up
# 109 "data/maps/SouthernIsland_Exterior/scripts.pory"
	delay_16
# 110 "data/maps/SouthernIsland_Exterior/scripts.pory"
	walk_in_place_right
# 111 "data/maps/SouthernIsland_Exterior/scripts.pory"
	delay_16
# 112 "data/maps/SouthernIsland_Exterior/scripts.pory"
	walk_in_place_left
# 113 "data/maps/SouthernIsland_Exterior/scripts.pory"
	delay_16
# 113 "data/maps/SouthernIsland_Exterior/scripts.pory"
	delay_16
# 114 "data/maps/SouthernIsland_Exterior/scripts.pory"
	walk_in_place_up
# 115 "data/maps/SouthernIsland_Exterior/scripts.pory"
	delay_16
# 116 "data/maps/SouthernIsland_Exterior/scripts.pory"
	walk_in_place_right
# 117 "data/maps/SouthernIsland_Exterior/scripts.pory"
	delay_16
# 117 "data/maps/SouthernIsland_Exterior/scripts.pory"
	delay_16
# 118 "data/maps/SouthernIsland_Exterior/scripts.pory"
	walk_in_place_up
# 119 "data/maps/SouthernIsland_Exterior/scripts.pory"
	delay_16
# 119 "data/maps/SouthernIsland_Exterior/scripts.pory"
	delay_16
# 119 "data/maps/SouthernIsland_Exterior/scripts.pory"
	delay_16
	step_end

SouthernIsland_Exterior_EventScript_Steven::
# 123 "data/maps/SouthernIsland_Exterior/scripts.pory"
	lock
# 124 "data/maps/SouthernIsland_Exterior/scripts.pory"
	faceplayer
# 125 "data/maps/SouthernIsland_Exterior/scripts.pory"
	msgbox SouthernIsland_Exterior_EventScript_Steven_Text_0, MSGBOX_YESNO
# 126 "data/maps/SouthernIsland_Exterior/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SouthernIsland_Exterior_EventScript_Steven_2
SouthernIsland_Exterior_EventScript_Steven_1:
# 143 "data/maps/SouthernIsland_Exterior/scripts.pory"
	msgbox SouthernIsland_Exterior_EventScript_Steven_Text_3
# 144 "data/maps/SouthernIsland_Exterior/scripts.pory"
	closemessage
# 145 "data/maps/SouthernIsland_Exterior/scripts.pory"
	release
	end

SouthernIsland_Exterior_EventScript_Steven_2:
# 127 "data/maps/SouthernIsland_Exterior/scripts.pory"
	msgbox SouthernIsland_Exterior_EventScript_Steven_Text_1
# 128 "data/maps/SouthernIsland_Exterior/scripts.pory"
	closemessage
# 129 "data/maps/SouthernIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 130 "data/maps/SouthernIsland_Exterior/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
# 131 "data/maps/SouthernIsland_Exterior/scripts.pory"
	waitmovement LOCALID_STEVEN
# 132 "data/maps/SouthernIsland_Exterior/scripts.pory"
	msgbox SouthernIsland_Exterior_EventScript_Steven_Text_2
# 133 "data/maps/SouthernIsland_Exterior/scripts.pory"
	closemessage
# 134 "data/maps/SouthernIsland_Exterior/scripts.pory"
	delay 8
# 135 "data/maps/SouthernIsland_Exterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 136 "data/maps/SouthernIsland_Exterior/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 137 "data/maps/SouthernIsland_Exterior/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_118_STEVEN
# 138 "data/maps/SouthernIsland_Exterior/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_118_LATIAS
# 139 "data/maps/SouthernIsland_Exterior/scripts.pory"
	setvar VAR_ROUTE118_STATE, 2
# 140 "data/maps/SouthernIsland_Exterior/scripts.pory"
	warpsilent MAP_ROUTE118, 44, 15
# 141 "data/maps/SouthernIsland_Exterior/scripts.pory"
	waitstate
	goto SouthernIsland_Exterior_EventScript_Steven_1


SouthernIsland_Exterior_EventScript_Latias::
# 150 "data/maps/SouthernIsland_Exterior/scripts.pory"
	waitse
# 151 "data/maps/SouthernIsland_Exterior/scripts.pory"
	playmoncry SPECIES_LATIAS, CRY_MODE_NORMAL
# 152 "data/maps/SouthernIsland_Exterior/scripts.pory"
	msgbox SouthernIsland_Exterior_EventScript_Latias_Text_0
# 153 "data/maps/SouthernIsland_Exterior/scripts.pory"
	waitmoncry
# 154 "data/maps/SouthernIsland_Exterior/scripts.pory"
	closemessage
	end


SouthernIsland_Exterior_EventScript_GetInsideTrigger::
# 159 "data/maps/SouthernIsland_Exterior/scripts.pory"
	lock
# 160 "data/maps/SouthernIsland_Exterior/scripts.pory"
	msgbox SouthernIsland_Exterior_EventScript_GetInsideTrigger_Text_0
# 161 "data/maps/SouthernIsland_Exterior/scripts.pory"
	closemessage
# 162 "data/maps/SouthernIsland_Exterior/scripts.pory"
	delay 8
# 163 "data/maps/SouthernIsland_Exterior/scripts.pory"
	playse SE_PIN
# 164 "data/maps/SouthernIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 165 "data/maps/SouthernIsland_Exterior/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 166 "data/maps/SouthernIsland_Exterior/scripts.pory"
	waitse
# 167 "data/maps/SouthernIsland_Exterior/scripts.pory"
	msgbox SouthernIsland_Exterior_EventScript_GetInsideTrigger_Text_1
# 168 "data/maps/SouthernIsland_Exterior/scripts.pory"
	setvar VAR_SOUTHERN_ISLAND_STATE, 2
# 169 "data/maps/SouthernIsland_Exterior/scripts.pory"
	release
	end


SouthernIsland_Exterior_EventScript_LeaveIsland::
# 174 "data/maps/SouthernIsland_Exterior/scripts.pory"
	lock
# 175 "data/maps/SouthernIsland_Exterior/scripts.pory"
	delay 24
# 176 "data/maps/SouthernIsland_Exterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 177 "data/maps/SouthernIsland_Exterior/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 178 "data/maps/SouthernIsland_Exterior/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_118_STEVEN
# 179 "data/maps/SouthernIsland_Exterior/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_118_LATIAS
# 180 "data/maps/SouthernIsland_Exterior/scripts.pory"
	setflag FLAG_HIDE_SOUTHERN_ISLAND_EXTERIOR_LATIAS
# 181 "data/maps/SouthernIsland_Exterior/scripts.pory"
	setflag FLAG_HIDE_SOUTHERN_ISLAND_EXTERIOR_STEVEN
# 182 "data/maps/SouthernIsland_Exterior/scripts.pory"
	setflag FLAG_LANDMARK_SOUTHERN_ISLAND
# 183 "data/maps/SouthernIsland_Exterior/scripts.pory"
	setvar VAR_SOUTHERN_ISLAND_STATE, 4
# 184 "data/maps/SouthernIsland_Exterior/scripts.pory"
	warpsilent MAP_ROUTE118, 44, 15
# 185 "data/maps/SouthernIsland_Exterior/scripts.pory"
	waitstate
# 186 "data/maps/SouthernIsland_Exterior/scripts.pory"
	release
	end


SouthernIsland_Exterior_EventScript_Arrived_Text_0:
# 80 "data/maps/SouthernIsland_Exterior/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: We've arrived.$"

SouthernIsland_Exterior_EventScript_Arrived_Text_1:
# 87 "data/maps/SouthernIsland_Exterior/scripts.pory"
	.string "Thank you, Latias.$"

SouthernIsland_Exterior_EventScript_Arrived_Text_2:
# 94 "data/maps/SouthernIsland_Exterior/scripts.pory"
	.string "…\pI don't know what it is…\pNot quite unease, not quite fear…\pBut there is something…unsettling…\pIt's an odd feeling, as though I am\nwalking in a dream--or an illusion.$"

SouthernIsland_Exterior_EventScript_Arrived_Text_3:
# 100 "data/maps/SouthernIsland_Exterior/scripts.pory"
	.string "I once heard an odd fable.\pIt was said that the two Pokémon that\nlive on this island guard some secret\labout that great form of evolution:\lMega Evolution.\pCould it be that some dangerous\nelement is here because of that?\p…\pCome, we should be going.$"

SouthernIsland_Exterior_EventScript_Steven_Text_0:
# 125 "data/maps/SouthernIsland_Exterior/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: What is it you want to do?\pWould you like to return to Route 118\nfor a time?$"

SouthernIsland_Exterior_EventScript_Steven_Text_1:
# 127 "data/maps/SouthernIsland_Exterior/scripts.pory"
	.string "I understand.$"

SouthernIsland_Exterior_EventScript_Steven_Text_2:
# 132 "data/maps/SouthernIsland_Exterior/scripts.pory"
	.string "Latias, if you would oblige…$"

SouthernIsland_Exterior_EventScript_Steven_Text_3:
# 143 "data/maps/SouthernIsland_Exterior/scripts.pory"
	.string "In that case…\pShall we go see once and for all whether\nthere is anything to be found on this\lisland?$"

SouthernIsland_Exterior_EventScript_Latias_Text_0:
# 152 "data/maps/SouthernIsland_Exterior/scripts.pory"
	.string "Hyahhn!$"

SouthernIsland_Exterior_EventScript_GetInsideTrigger_Text_0:
# 160 "data/maps/SouthernIsland_Exterior/scripts.pory"
	.string "(Th-- wh-- mem-- de se-- to carv--\nth--rts…)$"

SouthernIsland_Exterior_EventScript_GetInsideTrigger_Text_1:
# 167 "data/maps/SouthernIsland_Exterior/scripts.pory"
	.string "(Those whose memories fade seek to\ncarve them in their hearts…)$"
