# 1 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 2 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
.set LOCALID_RIVAL, 1
# 3 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 4 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_MapScripts::
# 5 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_2F_OnTransition
# 6 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_BrendansHouse_2F_OnWarp
# 7 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_2F_OnFrame
# 8 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.byte 0
# 9 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 10 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnTransition:
# 11 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan
# 12 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_ge VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos
# 13 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 4, PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet
# 14 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 15 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
# 16 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 17 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 18 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos::
# 19 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 20 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 21 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 22 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 23 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos::
# 24 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 25 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 26 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	@ Odd that the MaysHouse equivalent was used below instead
# 27 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 28 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 0, 2
# 29 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_UP
# 30 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 31 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 32 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_Ret::
# 33 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 34 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 35 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan::
# 36 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 37 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan
# 38 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 39 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 40 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan::
# 41 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
# 42 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 43 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 44 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnWarp:
# 45 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor
# 46 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.2byte 0
# 47 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 48 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnFrame:
# 49 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan
# 50 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.2byte 0
# 51 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 52 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor::
# 53 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 54 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SecretBase_EventScript_InitDecorations
# 55 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 56 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 57 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall::
# 58 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 59 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan
# 60 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 61 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 62 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 63 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 64 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan::
# 65 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	addobject LOCALID_RIVAL
# 66 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 67 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special SpawnCameraObject
# 68 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LittlerootTown_BrendansHouse_2F_Movement_CameraPansToBrendan
# 69 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 70 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 71 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 72 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanGettingReady, MSGBOX_DEFAULT
# 73 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 74 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 8
# 75 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceRight
# 76 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 77 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 16
# 78 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PIN
# 79 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 80 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 81 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 16
# 82 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_BrendanWalkToPlayer
# 83 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LittlerootTown_BrendansHouse_2F_Movement_CameraPansToBoth
# 84 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 85 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special RemoveCameraObject
# 86 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 87 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYouIntro, MSGBOX_DEFAULT
# 88 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 89 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 16
# 90 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PIN
# 91 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 92 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 93 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 94 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 95 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 16
# 96 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerMoveAside
# 97 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendaLeaveRoom
# 98 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 99 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject LOCALID_RIVAL
# 100 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special SpawnCameraObject
# 101 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LittlerootTown_BrendansHouse_2F_Movement_CameraPansToPlayer
# 102 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 103 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special RemoveCameraObject
# 104 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 105 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 106 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 107 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 108 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 109 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadedefaultbgm
# 110 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 111 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 112 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 113 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_CameraPansToBrendan:
# 114 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 115 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 116 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 117 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 118 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 119 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_CameraPansToBoth:
# 120 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 121 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 122 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 123 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 124 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 125 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 126 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 127 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_CameraPansToPlayer:
# 128 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 129 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 130 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 131 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerMoveAside:
# 132 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 133 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_up
# 134 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 135 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 136 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_BrendanWalkToPlayer:
# 137 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 138 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 139 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 140 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 141 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 142 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 143 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendaLeaveRoom:
# 144 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 145 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_right
# 146 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_up
# 147 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 148 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	set_invisible
# 149 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 150 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 151 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters:
# 152 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 153 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 154 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_left
# 155 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 156 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 157 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth:
# 158 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 159 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 160 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 161 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 162 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 163 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 164 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 165 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth:
# 166 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 167 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 168 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 169 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 170 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 171 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 172 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 173 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_up
# 174 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 175 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 176 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth:
# 177 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 178 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_up
# 179 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 180 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 181 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 182 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 183 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_left
# 184 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 185 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 186 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth:
# 187 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 188 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 189 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 190 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 191 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 192 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth:
# 193 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 194 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 195 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 196 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 197 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 198 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_up
# 199 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 200 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 201 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth:
# 202 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 203 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_up
# 204 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 205 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 206 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_left
# 207 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 208 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 209 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest:
# 210 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 211 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 212 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 213 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_left
# 214 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 215 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 216 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest:
# 217 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 218 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 219 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 220 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 221 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 222 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 223 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 224 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_up
# 225 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 226 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 227 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest:
# 228 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_8
# 229 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 230 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_up
# 231 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 232 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 233 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_left
# 234 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 235 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 236 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast:
# 237 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 238 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 239 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 240 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 241 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 242 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_down
# 243 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 244 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 245 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast:
# 246 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 247 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 248 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 249 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_up
# 250 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 251 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 252 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
@ Unused, the player is already facing this direction so its unneeded
# 253 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanEast:
# 254 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 255 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 256 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_left
# 257 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 258 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 259 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_PC::
# 260 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 261 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 262 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC
# 263 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC
# 264 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 265 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 266 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC::
# 267 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 268 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 269 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_ON
# 270 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 271 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special BedroomPC
# 272 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitstate
# 273 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 274 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 275 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 276 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TurnOffPlayerPC::
# 277 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 278 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 279 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 280 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 281 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 282 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 283 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC::
# 284 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 285 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 286 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 287 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 288 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
BrendansHouse_2F_EventScript_Notebook::
# 289 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendansHouse_2F_Text_Notebook, MSGBOX_SIGN
# 290 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 291 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 292 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_GameCube::
# 293 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_ItsAGameCube, MSGBOX_SIGN
# 294 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 295 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 296 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ClockIsStopped:
# 297 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The clock on the wall isn't moving…\pYou've got to set the time!$"
# 298 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 299 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_HowDoYouLikeYourRoom:
# 300 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: How do you like your new room,\n{PLAYER}?\pGood!\nEverything's put away neatly!\pThey finished moving everything\ndownstairs, too.\pIt really is so nice having Pokémon\naround to help us!\pOh, but you should make sure that\neverything's all there on your desk.$"
# 301 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 302 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
BrendansHouse_2F_Text_Notebook:
# 303 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The notebook is full of adventure\nrules jotted down!\pADVENTURE RULE NO. 1\nOpen the menu with the X Button.\pADVENTURE RULE NO. 2\nRecord your progress with Save.$"
# 304 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 305 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
Common_Text_LookCloserAtMap:
# 306 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} peered closely at\nthe Hoenn region's Town Map!$"
# 307 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 308 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ItsAGameCube:
# 309 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's a Nintendo GameCube.\p"
# 310 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A Game Boy Advance is connected to\n"
# 311 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "serve as the Controller.$"
