# 1 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 3 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_MapScripts::
# 4 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_ChampionsRoom_OnTransition
# 5 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_ChampionsRoom_OnWarp
# 6 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_ChampionsRoom_OnFrame
# 7 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.byte 0
# 8 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 9 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnTransition:
# 10 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 11 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 12 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 13 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnWarp:
# 14 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth
# 15 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.2byte 0
# 16 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 17 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth::
# 18 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 19 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 20 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 21 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnFrame:
# 22 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_EnterRoom
# 23 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.2byte 0
# 24 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 25 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_EnterRoom::
# 26 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	lockall
# 27 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 24
# 28 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp4
# 29 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 30 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 96
# 31 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_STEVEN, Common_Movement_WalkInPlaceDown
# 32 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement LOCALID_CHAMPIONS_ROOM_STEVEN
# 33 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 32
# 34 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerApproachSteven
# 35 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 36 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 37 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Steven
# 38 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
# 39 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 40 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 41 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerApproachSteven:
# 42 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 43 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 44 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end

EverGrandeCity_ChampionsRoom_EventScript_Steven::
# 50 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 51 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_0
# 52 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 53 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 32
# 54 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_1
# 55 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 24
# 56 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_2
# 57 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 58 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 24
# 59 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_3
# 60 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 61 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 32
# 62 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_4
# 63 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 64 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_STEVEN, EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_5
# 65 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_6
# 66 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_7
# 67 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 68 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 24
# 69 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_8
# 70 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 71 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 72 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 16
# 73 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 74 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_Steven_2
# 77 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
EverGrandeCity_ChampionsRoom_EventScript_Steven_1:
# 79 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_CHAMPIONS_ROOM_RIVAL
# 80 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer
# 81 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement LOCALID_CHAMPIONS_ROOM_RIVAL
# 82 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 83 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 84 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 85 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_Steven_6
# 88 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_10
EverGrandeCity_ChampionsRoom_EventScript_Steven_5:
# 90 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 91 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 8
# 92 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 93 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_ExclamationMark
# 94 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement LOCALID_CHAMPIONS_ROOM_RIVAL
# 95 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 16
# 96 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth
# 97 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement LOCALID_CHAMPIONS_ROOM_RIVAL
# 98 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 99 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_Steven_10
# 102 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_12
EverGrandeCity_ChampionsRoom_EventScript_Steven_9:
# 104 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 105 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 106 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_CHAMPIONS_ROOM_BIRCH
# 107 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_BIRCH, EverGrandeCity_ChampionsRoom_Movement_BirchArrives
# 108 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement LOCALID_CHAMPIONS_ROOM_BIRCH
# 109 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 110 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 111 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_13
# 112 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 113 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 24
# 114 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_14
# 115 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 116 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 117 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 118 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_15
# 119 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 120 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_STEVEN, Common_Movement_WalkInPlaceUp
# 121 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement LOCALID_CHAMPIONS_ROOM_STEVEN
# 122 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 16
# 123 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 124 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 1, METATILE_EliteFour_OpenDoorChampion_Frame, FALSE
# 125 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 2, METATILE_EliteFour_OpenDoorChampion_Opening, FALSE
# 126 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	special DrawWholeMapView
# 127 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 32
# 128 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_STEVEN, EverGrandeCity_ChampionsRoom_Movement_StevenExitStart
# 129 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart
# 130 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_BIRCH, Common_Movement_WalkInPlaceUp
# 131 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalFollows
# 132 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 133 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 24
# 134 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 135 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 136 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_16
# 137 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 16
# 138 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 139 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_Steven_14
# 145 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_19
# 146 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 147 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 32
# 148 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_20
EverGrandeCity_ChampionsRoom_EventScript_Steven_13:
# 150 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 151 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 16
# 152 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_STEVEN, EverGrandeCity_ChampionsRoom_Movement_WallaceExit
# 153 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExit
# 154 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 155 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
# 156 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	warp MAP_EVER_GRANDE_CITY_HALL_OF_FAME, 7, 16
# 157 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitstate
# 158 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
	end

EverGrandeCity_ChampionsRoom_EventScript_Steven_2:
# 75 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
	goto EverGrandeCity_ChampionsRoom_EventScript_Steven_1

EverGrandeCity_ChampionsRoom_EventScript_Steven_6:
# 86 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_9
	goto EverGrandeCity_ChampionsRoom_EventScript_Steven_5

EverGrandeCity_ChampionsRoom_EventScript_Steven_10:
# 100 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_11
	goto EverGrandeCity_ChampionsRoom_EventScript_Steven_9

EverGrandeCity_ChampionsRoom_EventScript_Steven_14:
# 140 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_17
# 141 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 142 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 32
# 143 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_18
	goto EverGrandeCity_ChampionsRoom_EventScript_Steven_13


# 162 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer:
# 163 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 163 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 163 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 163 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 163 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 164 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_left
# 165 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 166 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_right
	step_end

# 169 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth:
# 170 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_up
# 171 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 172 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_right
# 173 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 174 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_up
# 175 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 176 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_right
# 177 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
	step_end

# 180 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_BirchArrives:
# 181 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 181 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 181 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 181 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 181 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 182 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 183 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 184 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_left
	step_end

# 187 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_StevenExitStart:
# 188 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 188 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 189 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_down
	step_end

# 192 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart:
# 193 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 193 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
	step_end

# 196 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalFollows:
# 197 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 198 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
	step_end

# 201 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_WallaceExit:
# 202 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 203 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 204 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
	step_end

# 207 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExit:
# 208 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 209 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 210 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 211 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 212 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
	step_end

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_0:
# 51 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: Welcome, {PLAYER}.$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_1:
# 54 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I was hoping I would get to see you\nmake it here one day.$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_2:
# 56 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Tell me…\pWhat have you seen on your journey\nwith your Pokémon?\pWhat have you felt, meeting so many\nother Trainers out there?$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_3:
# 59 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Traveling this rich land of Hoenn…\nHas it awoken something inside you?\pI want you to come at me with all that\nyou've learned.\pMy Pokémon and I will respond in turn\nwith all that we know!$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_4:
# 62 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Let it begin!$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_5:
# 64 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "So I, the Champion, fall in defeat…$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_6:
# 65 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Just as I have come to expect.\p{PLAYER}, you are truly an excellent\nPokémon Trainer.\pCongratulations to you!\pAnd thank you…\pI had wanted to learn how you feel\nabout this world, what kind of ideals\lyou have developed with your Pokémon…\pI feel I was able to find the answer in\nour battle.$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_7:
# 66 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "The feelings you have for your\nPokémon…\pAnd the way that your Pokémon\ngave their all in battle in response\lto those feelings…\pThose two together created a great\npower.\pThat is how you seized victory today.$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_8:
# 69 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I felt a thrill of excitement in my\nchest when we first met, and now I\lknow for sure that feeling was not\lmisplaced!\pYou are rightfully the Hoenn region's\nnew…$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_9:
# 86 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: {PLAYER}, wait!\pI've got some advice you've got to hear\nbefore you challenge the Champion…$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_10:
# 88 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: {PLAYER}!\pBefore you go challenge the Champion,\nI've got one last thing you've got to$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_11:
# 100 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Huh?\nWait--what? What?\p{PLAYER}…\nCould it be that…\lIt's already over?$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_12:
# 102 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}…\nYou didn't…\lNo, you couldn't have…\pDid you already beat the Champion?!$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_13:
# 111 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{COLOR RED}Prof. Birch{COLOR DARK_GRAY}: See?\nWhat did I say, {RIVAL}?\pDidn't I tell you that {PLAYER}\nwould be just fine.$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_14:
# 114 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}, you've finally done it.\pWhen I heard that you defeated your\nown father at the Petalburg Gym, I\lthought perhaps you had a chance…\pBut to think you've actually become\nthe Champion!\pBut congratulations on today's\nvictory!\pNow go in there with your head held\nhigh!$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_15:
# 118 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: {PLAYER}…\pNo, I should call you the Hoenn's\nregion's new Pokémon League Champion…\pCome with me, Champion.$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_16:
# 136 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: I'm very sorry…\pBut only a Trainer who has successfully\nbecome the Champion may go beyond\lthis point.\pYou'll need to wait outside with the\nprofessor.$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_17:
# 140 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: No waaay!$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_18:
# 143 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Just joking!\nIt's OK! It's fine!\pRules are rules, right?\p{PLAYER}!\nHonestly, congratulations!$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_19:
# 145 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: What--…$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_20:
# 148 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Can't be helped, I guess.\pThem's the rules, right?\pThat's awesome, {PLAYER}.\pCongratulations…really!$"
