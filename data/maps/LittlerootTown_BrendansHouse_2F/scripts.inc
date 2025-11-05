# 1 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 2 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 3 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_MapScripts::
# 4 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_2F_OnTransition
# 5 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_BrendansHouse_2F_OnWarp
# 6 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_2F_OnFrame
# 7 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.byte 0
# 8 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 9 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnTransition:
# 10 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan
# 11 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_ge VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos
# 12 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 4, PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet
# 13 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 14 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
# 15 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 16 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 17 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos::
# 18 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 19 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 20 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 21 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 22 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos::
# 23 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 24 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 25 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	@ Odd that the MaysHouse equivalent was used below instead
# 26 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 27 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_2F_RIVAL, 0, 2
# 28 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_2F_RIVAL, MOVEMENT_TYPE_FACE_UP
# 29 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 30 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 31 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_Ret::
# 32 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 33 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 34 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan::
# 35 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 36 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan
# 37 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 38 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 39 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan::
# 40 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
# 41 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 42 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 43 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnWarp:
# 44 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor
# 45 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.2byte 0
# 46 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 47 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnFrame:
# 48 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan
# 49 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.2byte 0
# 50 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 51 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor::
# 52 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 53 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SecretBase_EventScript_InitDecorations
# 54 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 55 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 56 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall::
# 57 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 58 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan
# 59 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 60 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 61 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 62 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 63 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan::
# 64 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	addobject LOCALID_PLAYERS_HOUSE_2F_RIVAL
# 65 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 66 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special SpawnCameraObject
# 67 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LittlerootTown_BrendansHouse_2F_Movement_CameraPansToBrendan
# 68 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 69 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 70 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 71 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanGettingReady, MSGBOX_DEFAULT
# 72 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 73 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 8
# 74 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_RIVAL, Common_Movement_WalkInPlaceRight
# 75 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 76 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 16
# 77 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PIN
# 78 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_RIVAL, Common_Movement_ExclamationMark
# 79 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 80 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 16
# 81 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_BrendanWalkToPlayer
# 82 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LittlerootTown_BrendansHouse_2F_Movement_CameraPansToBoth
# 83 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 84 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special RemoveCameraObject
# 85 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 86 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYouIntro, MSGBOX_DEFAULT
# 87 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 88 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 16
# 89 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PIN
# 90 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_RIVAL, Common_Movement_ExclamationMark
# 91 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 92 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 93 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 94 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 16
# 95 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerMoveAside
# 96 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendaLeaveRoom
# 97 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement LOCALID_PLAYERS_HOUSE_2F_RIVAL
# 98 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject LOCALID_PLAYERS_HOUSE_2F_RIVAL
# 99 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special SpawnCameraObject
# 100 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LittlerootTown_BrendansHouse_2F_Movement_CameraPansToPlayer
# 101 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 102 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special RemoveCameraObject
# 103 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 104 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 105 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 106 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 107 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 108 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadedefaultbgm
# 109 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 110 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 111 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 112 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_CameraPansToBrendan:
# 113 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 114 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 115 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 116 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 117 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 118 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_CameraPansToBoth:
# 119 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 120 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 121 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 122 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 123 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 124 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 125 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 126 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_CameraPansToPlayer:
# 127 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 128 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 129 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 130 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerMoveAside:
# 131 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 132 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_up
# 133 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 134 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 135 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_BrendanWalkToPlayer:
# 136 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 137 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 138 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 139 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 140 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 141 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 142 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendaLeaveRoom:
# 143 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 144 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 145 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_up
# 146 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 147 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	set_invisible
# 148 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 149 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 150 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters:
# 151 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 152 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 153 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_left
# 154 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 155 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 156 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth:
# 157 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 158 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 159 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 160 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 161 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 162 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 163 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 164 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth:
# 165 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 166 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 167 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 168 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 169 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 170 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 171 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 172 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_up
# 173 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 174 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 175 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth:
# 176 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 177 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_up
# 178 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 179 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 180 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 181 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 182 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_left
# 183 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 184 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 185 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth:
# 186 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 187 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 188 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 189 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 190 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 191 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth:
# 192 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 193 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 194 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 195 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 196 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 197 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_up
# 198 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 199 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 200 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth:
# 201 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 202 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_up
# 203 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 204 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 205 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_left
# 206 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 207 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 208 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest:
# 209 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 210 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 211 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 212 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_left
# 213 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 214 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 215 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest:
# 216 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 217 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 218 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 219 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 220 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 221 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 222 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 223 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_up
# 224 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 225 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 226 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest:
# 227 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_8
# 228 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 229 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_up
# 230 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 231 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 232 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_left
# 233 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 234 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 235 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast:
# 236 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 237 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 238 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 239 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 240 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 241 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_down
# 242 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 243 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 244 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast:
# 245 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 246 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 247 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 248 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_up
# 249 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 250 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 251 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
@ Unused, the player is already facing this direction so its unneeded
# 252 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanEast:
# 253 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 254 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 255 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_left
# 256 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 257 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 258 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_PC::
# 259 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 260 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 261 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC
# 262 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC
# 263 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 264 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 265 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC::
# 266 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 267 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 268 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_ON
# 269 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 270 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special BedroomPC
# 271 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitstate
# 272 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 273 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 274 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 275 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TurnOffPlayerPC::
# 276 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 277 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 278 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 279 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 280 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 281 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 282 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC::
# 283 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 284 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 285 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 286 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 287 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
BrendansHouse_2F_EventScript_Notebook::
# 288 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendansHouse_2F_Text_Notebook, MSGBOX_SIGN
# 289 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 290 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 291 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_GameCube::
# 292 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_ItsAGameCube, MSGBOX_SIGN
# 293 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 294 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 295 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ClockIsStopped:
# 296 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The clock on the wall isn't moving…\pYou've got to set the time!$"
# 297 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 298 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_HowDoYouLikeYourRoom:
# 299 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: How do you like your new room,\n{PLAYER}?\pGood!\nEverything's put away neatly!\pThey finished moving everything\ndownstairs, too.\pIt really is so nice having Pokémon\naround to help us!\pOh, but you should make sure that\neverything's all there on your desk.$"
# 300 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 301 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
BrendansHouse_2F_Text_Notebook:
# 302 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The notebook is full of adventure\nrules jotted down!\pADVENTURE RULE NO. 1\nOpen the menu with the X Button.\pADVENTURE RULE NO. 2\nRecord your progress with Save.$"
# 303 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 304 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
Common_Text_LookCloserAtMap:
# 305 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} peered closely at\nthe Hoenn region's Town Map!$"
# 306 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 307 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ItsAGameCube:
# 308 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's a Nintendo GameCube.\p"
# 309 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A Game Boy Advance is connected to\n"
# 310 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "serve as the Controller.$"
