# 1 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 2 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 3 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_MapScripts::
# 4 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MaysHouse_2F_OnTransition
# 5 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_MaysHouse_2F_OnWarp
# 6 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MaysHouse_2F_OnFrame
# 7 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.byte 0
# 8 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 9 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_OnTransition:
# 10 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay
# 11 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_ge VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos
# 12 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 4, PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet
# 13 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 14 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
# 15 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 16 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 17 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos::
# 18 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos
# 19 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 20 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos
# 21 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 22 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos::
# 23 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 24 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 25 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 26 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_2F_RIVAL, 8, 2
# 27 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_2F_RIVAL, MOVEMENT_TYPE_FACE_UP
# 28 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 29 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 30 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_Ret::
# 31 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 32 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 33 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay::
# 34 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 35 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_MaysHouse_2F_EventScript_SetReadyToMeetMay
# 36 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 37 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 38 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_SetReadyToMeetMay::
# 39 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
# 40 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 41 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 42 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_OnWarp:
# 43 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor
# 44 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.2byte 0
# 45 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 46 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_OnFrame:
# 47 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_MeetMay
# 48 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.2byte 0
# 49 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 50 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor::
# 51 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 52 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, SecretBase_EventScript_InitDecorations
# 53 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 54 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 55 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_RivalsPokeBall::
# 56 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 57 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_MeetMay
# 58 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 59 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 60 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 61 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 62 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMay::
# 63 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	addobject LOCALID_PLAYERS_HOUSE_2F_RIVAL
# 64 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 10
# 65 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special SpawnCameraObject
# 66 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LittlerootTown_MaysHouse_2F_Movement_CameraPansToMay
# 67 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 68 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 69 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 70 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayGettingReady, MSGBOX_DEFAULT
# 71 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 72 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 8
# 73 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_RIVAL, Common_Movement_WalkInPlaceLeft
# 74 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 75 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 16
# 76 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PIN
# 77 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_RIVAL, Common_Movement_ExclamationMark
# 78 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 79 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 16
# 80 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPlayer
# 81 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LittlerootTown_MaysHouse_2F_Movement_CameraPansToBoth
# 82 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 83 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special RemoveCameraObject
# 84 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 85 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYouIntro, MSGBOX_DEFAULT
# 86 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 87 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 16
# 88 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PIN
# 89 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_RIVAL, Common_Movement_ExclamationMark
# 90 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 91 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 92 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 93 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 16
# 94 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerMoveAside
# 95 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayLeaveRoom
# 96 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement LOCALID_PLAYERS_HOUSE_2F_RIVAL
# 97 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	removeobject LOCALID_PLAYERS_HOUSE_2F_RIVAL
# 98 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special SpawnCameraObject
# 99 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LittlerootTown_MaysHouse_2F_Movement_CameraPansToPlayer
# 100 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 101 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special RemoveCameraObject
# 102 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 103 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 104 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 105 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 106 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 107 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	fadedefaultbgm
# 108 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 109 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 110 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 111 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_CameraPansToMay:
# 112 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 113 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 114 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 115 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 116 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 117 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_CameraPansToBoth:
# 118 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 119 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 120 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_left
# 121 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_left
# 122 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_left
# 123 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 124 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 125 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_CameraPansToPlayer:
# 126 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_left
# 127 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 128 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 129 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerMoveAside:
# 130 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 131 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_up
# 132 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 133 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 134 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPlayer:
# 135 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_left
# 136 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_left
# 137 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_left
# 138 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_left
# 139 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 140 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 141 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayLeaveRoom:
# 142 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_left
# 143 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_left
# 144 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_up
# 145 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 146 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	set_invisible
# 147 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 148 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 149 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayEnters:
# 150 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 151 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 152 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_right
# 153 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 154 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 155 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerNorth:
# 156 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 157 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 158 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 159 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 160 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 161 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 162 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 163 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCNorth:
# 164 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 165 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 166 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 167 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_right
# 168 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 169 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 170 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 171 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 172 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_up
# 173 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 174 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 175 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayNorth:
# 176 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 177 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_up
# 178 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 179 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 180 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 181 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 182 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_right
# 183 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 184 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 185 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerSouth:
# 186 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 187 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 188 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 189 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 190 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 191 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCSouth:
# 192 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 193 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_right
# 194 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 195 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 196 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 197 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 198 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_up
# 199 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 200 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 201 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMaySouth:
# 202 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 203 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_up
# 204 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 205 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 206 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_right
# 207 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 208 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 209 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerWest:
# 210 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 211 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 212 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 213 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 214 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 215 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_down
# 216 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 217 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 218 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCWest:
# 219 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 220 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 221 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 222 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_up
# 223 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 224 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 225 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
@ Unused, the player is already facing this direction so its unneeded
# 226 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayWest:
# 227 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 228 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 229 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_right
# 230 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 231 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 232 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerEast:
# 233 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 234 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 235 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 236 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_right
# 237 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 238 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 239 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCEast:
# 240 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 241 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 242 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 243 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 244 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 245 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 246 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 247 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_up
# 248 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 249 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 250 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayEast:
# 251 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 252 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_up
# 253 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 254 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 255 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_right
# 256 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 257 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 258 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_Rival::
# 259 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 260 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, RivalsHouse_2F_EventScript_RivalPostLilycove
# 261 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 262 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RivalsHouse_2F_EventScript_May
# 263 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RivalsHouse_2F_EventScript_Brendan
# 264 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 265 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 266 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_May::
# 267 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayGettingReady, MSGBOX_DEFAULT
# 268 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 269 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 270 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 271 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_Brendan::
# 272 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanGettingReady, MSGBOX_DEFAULT
# 273 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 274 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 275 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 276 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_RivalPostLilycove::
# 277 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 278 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 279 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 280 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, RivalsHouse_2F_EventScript_MayPostLilycove
# 281 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, RivalsHouse_2F_EventScript_BrendanPostLilycove
# 282 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setflag FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE
# 283 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 284 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 285 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 286 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_MayPostLilycove::
# 287 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_MayWhereShouldIGoNext
# 288 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayJustCheckingMyPokedex, MSGBOX_DEFAULT
# 289 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 290 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 291 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_BrendanPostLilycove::
# 292 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_BrendanWhereShouldIGoNext
# 293 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex, MSGBOX_DEFAULT
# 294 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 295 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 296 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_MayWhereShouldIGoNext::
# 297 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
# 298 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 299 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 300 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_BrendanWhereShouldIGoNext::
# 301 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
# 302 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 303 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 304 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_PC::
# 305 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 306 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 307 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_MaysHouse_2F_EventScript_CheckRivalsPC
# 308 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_2F_EventScript_CheckPlayersPC
# 309 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 310 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 311 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckRivalsPC::
# 312 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 313 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 314 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 315 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 316 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckPlayersPC::
# 317 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 318 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 319 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PC_ON
# 320 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 321 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special BedroomPC
# 322 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitstate
# 323 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 324 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 325 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 326 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_TurnOffPlayerPC::
# 327 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 328 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 329 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 330 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 331 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 332 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 333 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
MaysHouse_2F_EventScript_Notebook::
# 334 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox MaysHouse_2F_Text_Notebook, MSGBOX_SIGN
# 335 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 336 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 337 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
MaysHouse_2F_Text_Notebook:
# 338 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "There are some notes on the page,\nwritten in spare, angular script.\p“This'll be on the test! Don't\nforget!\pEach Pokémon can learn up to four\nmoves!\pWhich moves you teach a Pokémon will\nshow how good of Trainer you are!”$"
# 339 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 340 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayWhoAreYouIntro:
# 341 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Huh!?\pWho… are you?$"
# 342 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 343 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayWhoAreYou:
# 344 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Oh!\nYou must be {PLAYER}!\lYour move was today, huh?\pWell, I'm {COLOR RED}May{COLOR DARK_GRAY}!\nGlad to meet you!\pI…I actually have this dream of\nbecoming friend with Pokémon all over\lthe world.\pAnd when Dad--oh, I mean, Professor\nBirch--told me about your move here,\l{PLAYER}…\pWell, I was hoping you would be nice\nand we could be friends.\p…B-but that's just silly, isn't it?\pI've just met you.\nRight, {PLAYER}?\pSo what am I talking about…\pHee hee…\pOh no!\nI forgot!\pI was supposed to be going out to\nhelp Dad catch some wild Pokémon!\p{PLAYER}, I'll see you later!$"
# 345 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 346 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayGettingReady:
# 347 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Pokémon fully restored, items\nall ready and…$"
# 348 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 349 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanWhoAreYouIntro:
# 350 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Y-you…\pWho are you?$"
# 351 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 352 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanWhoAreYou:
# 353 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "{PLAYER}?\pOh, you're the new kid who just moved\nin next door!?\pHuh…\nI didn't know that you'd be a girl.\pDad-I mean, Professor Birch-told me\nyou were the kid of a Gym Leader,\lso I sort of hoped you'd be a guy.\pMy name's {COLOR RED}Brendan{COLOR DARK_GRAY}.\pWell, I guess we are still neighbors,\nso…\pNice to meet you!\nLet's be friends, OK?\pHuh?\nHey, {PLAYER}…\lDon't you have any Pokémon?\pIf you want, I can go catch you one.\pAw, wait I forgot…\pI'm supposed to be going out to help\nmy dad catch some wild Pokémon.\pSome other time, OK?$"
# 354 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 355 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanGettingReady:
# 356 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Pokémon fully restored… Items\nall ready and…$"
# 357 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 358 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_ItsRivalsPokeBall:
# 359 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "It's {RIVAL}'s Poké Ball!\p"
# 360 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Better leave it right where it is.$"
# 361 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 362 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayJustCheckingMyPokedex:
# 363 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "May: {PLAYER}{KUN}!\p"
# 364 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I was just checking my Pokédex.\p"
# 365 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "There's still a lot of Pokémon that\n"
# 366 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I've seen but haven't caught.\p"
# 367 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "And there are many others that\n"
# 368 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I think will evolve.\p"
# 369 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I wonder where I should go catch\n"
# 370 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "some Pokémon next?$"
# 371 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 372 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayWhereShouldIGoNext:
# 373 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "May: I wonder where I should go catch\n"
# 374 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "some Pokémon next?\p"
# 375 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Wouldn't it be funny if we ran into each\n"
# 376 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "other, {PLAYER}{KUN}?$"
# 377 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 378 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex:
# 379 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Brendan: Hey, it's {PLAYER}.\p"
# 380 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I was just checking out my Pokédex.\p"
# 381 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "There are still many Pokémon that\n"
# 382 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I need to catch, I know, but this\l"
# 383 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "is looking pretty good.\p"
# 384 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Checking this Pokédex out gives me\n"
# 385 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "the urge to hit the road again.$"
# 386 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 387 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanWhereShouldIGoNext:
# 388 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Brendan: I'm having a hard time deciding\n"
# 389 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "where I should catch Pokémon next.\p"
# 390 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Hey, {PLAYER}, if I see you while I'm out\n"
# 391 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "catching Pokémon, I can pitch you a\l"
# 392 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "battle if you'd like.$"
