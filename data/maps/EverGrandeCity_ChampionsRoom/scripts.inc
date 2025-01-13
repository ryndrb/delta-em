# 1 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
.set LOCALID_STEVEN, 1
# 3 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
.set LOCALID_RIVAL, 2
# 4 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
.set LOCALID_BIRCH, 3
# 5 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 6 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_MapScripts::
# 7 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_ChampionsRoom_OnTransition
# 8 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_ChampionsRoom_OnWarp
# 9 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_ChampionsRoom_OnFrame
# 10 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.byte 0
# 11 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 12 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnTransition:
# 13 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 14 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 15 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 16 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnWarp:
# 17 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth
# 18 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.2byte 0
# 19 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 20 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth::
# 21 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 22 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 23 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 24 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnFrame:
# 25 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_EnterRoom
# 26 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.2byte 0
# 27 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 28 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_EnterRoom::
# 29 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	lockall
# 30 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 24
# 31 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp4
# 32 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 33 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 96
# 34 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
# 35 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement LOCALID_STEVEN
# 36 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 32
# 37 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerApproachSteven
# 38 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 39 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 40 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Steven
# 41 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
# 42 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 43 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 44 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerApproachSteven:
# 45 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 46 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 47 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end

EverGrandeCity_ChampionsRoom_EventScript_Steven::
# 53 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 54 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_0
# 55 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 56 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 32
# 57 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_1
# 58 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 24
# 59 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_2
# 60 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 61 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 24
# 62 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_3
# 63 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 64 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 32
# 65 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_4
# 66 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 67 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_STEVEN, EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_5
# 68 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_6
# 69 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_7
# 70 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 71 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 24
# 72 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_8
# 73 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 74 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 75 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 16
# 76 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 77 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_Steven_2
# 80 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
EverGrandeCity_ChampionsRoom_EventScript_Steven_1:
# 82 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_RIVAL
# 83 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer
# 84 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement LOCALID_RIVAL
# 85 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 86 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 87 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 88 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_Steven_6
# 91 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_10
EverGrandeCity_ChampionsRoom_EventScript_Steven_5:
# 93 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 94 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 8
# 95 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 96 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 97 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement LOCALID_RIVAL
# 98 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 16
# 99 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth
# 100 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement LOCALID_RIVAL
# 101 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 102 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_Steven_10
# 105 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_12
EverGrandeCity_ChampionsRoom_EventScript_Steven_9:
# 107 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 108 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 109 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_BIRCH
# 110 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_BIRCH, EverGrandeCity_ChampionsRoom_Movement_BirchArrives
# 111 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement LOCALID_BIRCH
# 112 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 113 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 114 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_13
# 115 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 116 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 24
# 117 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_14
# 118 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 119 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 120 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 121 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_15
# 122 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 123 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceUp
# 124 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement LOCALID_STEVEN
# 125 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 16
# 126 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 127 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 1, METATILE_EliteFour_OpenDoorChampion_Frame, FALSE
# 128 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 2, METATILE_EliteFour_OpenDoorChampion_Opening, FALSE
# 129 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	special DrawWholeMapView
# 130 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 32
# 131 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_STEVEN, EverGrandeCity_ChampionsRoom_Movement_StevenExitStart
# 132 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart
# 133 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceUp
# 134 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalFollows
# 135 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 136 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 24
# 137 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 138 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 139 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_16
# 140 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 16
# 141 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 142 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_Steven_14
# 148 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_19
# 149 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 150 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 32
# 151 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_20
EverGrandeCity_ChampionsRoom_EventScript_Steven_13:
# 153 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 154 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 16
# 155 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_STEVEN, EverGrandeCity_ChampionsRoom_Movement_WallaceExit
# 156 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExit
# 157 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 158 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
# 159 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	warp MAP_EVER_GRANDE_CITY_HALL_OF_FAME, 7, 16
# 160 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitstate
# 161 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
	end

EverGrandeCity_ChampionsRoom_EventScript_Steven_2:
# 78 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
	goto EverGrandeCity_ChampionsRoom_EventScript_Steven_1

EverGrandeCity_ChampionsRoom_EventScript_Steven_6:
# 89 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_9
	goto EverGrandeCity_ChampionsRoom_EventScript_Steven_5

EverGrandeCity_ChampionsRoom_EventScript_Steven_10:
# 103 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_11
	goto EverGrandeCity_ChampionsRoom_EventScript_Steven_9

EverGrandeCity_ChampionsRoom_EventScript_Steven_14:
# 143 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_17
# 144 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 145 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 32
# 146 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_18
	goto EverGrandeCity_ChampionsRoom_EventScript_Steven_13


# 165 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer:
# 166 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 166 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 166 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 166 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 166 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 167 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_left
# 168 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 169 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_right
	step_end

# 172 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth:
# 173 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_up
# 174 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 175 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_right
# 176 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 177 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_up
# 178 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 179 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_right
# 180 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
	step_end

# 183 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_BirchArrives:
# 184 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 184 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 184 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 184 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 184 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 185 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 186 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 187 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_left
	step_end

# 190 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_StevenExitStart:
# 191 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 191 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 192 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_down
	step_end

# 195 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart:
# 196 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 196 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
	step_end

# 199 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalFollows:
# 200 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 201 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
	step_end

# 204 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_WallaceExit:
# 205 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 206 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 207 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
	step_end

# 210 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExit:
# 211 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 212 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 213 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 214 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 215 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
	step_end

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_0:
# 54 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: Welcome, {PLAYER}.$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_1:
# 57 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I was hoping I would get to see you\nmake it here one day.$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_2:
# 59 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Tell me…\pWhat have you seen on your journey\nwith your Pokémon?\pWhat have you felt, meeting so many\nother Trainers out there?$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_3:
# 62 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Traveling this rich land of Hoenn…\nHas it awoken something inside you?\pI want you to come at me with all that\nyou've learned.\pMy Pokémon and I will respond in turn\nwith all that we know!$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_4:
# 65 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Let it begin!$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_5:
# 67 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "So I, the Champion, fall in defeat…$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_6:
# 68 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Just as I have come to expect.\p{PLAYER}, you are truly an excellent\nPokémon Trainer.\pCongratulations to you!\pAnd thank you…\pI had wanted to learn how you feel\nabout this world, what kind of ideals\lyou have developed with your Pokémon…\pI feel I was able to find the answer in\nour battle.$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_7:
# 69 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "The feelings you have for your\nPokémon…\pAnd the way that your Pokémon\ngave their all in battle in response\lto those feelings…\pThose two together created a great\npower.\pThat is how you seized victory today.$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_8:
# 72 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I felt a thrill of excitement in my\nchest when we first met, and now I\lknow for sure that feeling was not\lmisplaced!\pYou are rightfully the Hoenn region's\nnew…$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_9:
# 89 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: {PLAYER}, wait!\pI've got some advice you've got to hear\nbefore you challenge the Champion…$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_10:
# 91 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: {PLAYER}!\pBefore you go challenge the Champion,\nI've got one last thing you've got to$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_11:
# 103 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Huh?\nWait--what? What?\p{PLAYER}…\nCould it be that…\lIt's already over?$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_12:
# 105 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}…\nYou didn't…\lNo, you couldn't have…\pDid you already beat the Champion?!$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_13:
# 114 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{COLOR RED}Prof. Birch{COLOR DARK_GRAY}: See?\nWhat did I say, {RIVAL}?\pDidn't I tell you that {PLAYER}\nwould be just fine.$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_14:
# 117 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}, you've finally done it.\pWhen I heard that you defeated your\nown father at the Petalburg Gym, I\lthought perhaps you had a chance…\pBut to think you've actually become\nthe Champion!\pBut congratulations on today's\nvictory!\pNow go in there with your head held\nhigh!$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_15:
# 121 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: {PLAYER}…\pNo, I should call you the Hoenn's\nregion's new Pokémon League Champion…\pCome with me, Champion.$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_16:
# 139 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: I'm very sorry…\pBut only a Trainer who has successfully\nbecome the Champion may go beyond\lthis point.\pYou'll need to wait outside with the\nprofessor.$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_17:
# 143 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: No waaay!$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_18:
# 146 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Just joking!\nIt's OK! It's fine!\pRules are rules, right?\p{PLAYER}!\nHonestly, congratulations!$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_19:
# 148 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: What--…$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_20:
# 151 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Can't be helped, I guess.\pThem's the rules, right?\pThat's awesome, {PLAYER}.\pCongratulations…really!$"
