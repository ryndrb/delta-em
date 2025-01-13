# 1 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 2 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
.set LOCALID_RIVAL, 1
# 3 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 4 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_MapScripts::
# 5 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MaysHouse_2F_OnTransition
# 6 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_MaysHouse_2F_OnWarp
# 7 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MaysHouse_2F_OnFrame
# 8 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.byte 0
# 9 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 10 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_OnTransition:
# 11 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay
# 12 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_ge VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos
# 13 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 4, PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet
# 14 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 15 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
# 16 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 17 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 18 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos::
# 19 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos
# 20 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 21 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos
# 22 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 23 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos::
# 24 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 25 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 26 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 27 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 8, 2
# 28 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_UP
# 29 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 30 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 31 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_Ret::
# 32 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 33 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 34 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay::
# 35 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 36 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_MaysHouse_2F_EventScript_SetReadyToMeetMay
# 37 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 38 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 39 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_SetReadyToMeetMay::
# 40 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
# 41 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 42 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 43 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_OnWarp:
# 44 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor
# 45 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.2byte 0
# 46 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 47 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_OnFrame:
# 48 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_MeetMay
# 49 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.2byte 0
# 50 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 51 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor::
# 52 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 53 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, SecretBase_EventScript_InitDecorations
# 54 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 55 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 56 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_RivalsPokeBall::
# 57 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 58 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_MeetMay
# 59 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 60 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 61 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 62 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 63 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMay::
# 64 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	addobject LOCALID_RIVAL
# 65 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 10
# 66 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special SpawnCameraObject
# 67 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LittlerootTown_MaysHouse_2F_Movement_CameraPansToMay
# 68 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 69 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 70 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 71 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayGettingReady, MSGBOX_DEFAULT
# 72 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 73 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 8
# 74 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceLeft
# 75 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 76 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 16
# 77 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PIN
# 78 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 79 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 80 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 16
# 81 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPlayer
# 82 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LittlerootTown_MaysHouse_2F_Movement_CameraPansToBoth
# 83 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 84 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special RemoveCameraObject
# 85 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 86 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYouIntro, MSGBOX_DEFAULT
# 87 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 88 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 16
# 89 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PIN
# 90 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 91 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 92 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 93 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 94 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 16
# 95 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerMoveAside
# 96 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayLeaveRoom
# 97 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 98 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	removeobject LOCALID_RIVAL
# 99 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special SpawnCameraObject
# 100 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LittlerootTown_MaysHouse_2F_Movement_CameraPansToPlayer
# 101 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 102 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special RemoveCameraObject
# 103 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 104 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 105 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 106 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 107 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 108 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	fadedefaultbgm
# 109 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 110 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 111 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 112 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_CameraPansToMay:
# 113 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 114 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 115 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 116 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 117 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 118 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_CameraPansToBoth:
# 119 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 120 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 121 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_left
# 122 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_left
# 123 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_left
# 124 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 125 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 126 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_CameraPansToPlayer:
# 127 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_left
# 128 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 129 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 130 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerMoveAside:
# 131 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 132 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_up
# 133 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 134 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 135 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPlayer:
# 136 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_left
# 137 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_left
# 138 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_left
# 139 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_left
# 140 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 141 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 142 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayLeaveRoom:
# 143 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_left
# 144 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_left
# 145 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_up
# 146 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 147 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	set_invisible
# 148 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 149 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 150 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayEnters:
# 151 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 152 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 153 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_right
# 154 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 155 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 156 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerNorth:
# 157 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 158 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 159 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 160 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 161 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 162 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 163 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 164 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCNorth:
# 165 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 166 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 167 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 168 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_right
# 169 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 170 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 171 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 172 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 173 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_up
# 174 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 175 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 176 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayNorth:
# 177 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 178 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_up
# 179 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 180 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 181 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 182 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 183 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_right
# 184 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 185 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 186 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerSouth:
# 187 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 188 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 189 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 190 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 191 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 192 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCSouth:
# 193 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 194 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_right
# 195 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 196 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 197 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 198 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 199 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_up
# 200 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 201 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 202 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMaySouth:
# 203 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 204 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_up
# 205 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 206 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 207 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_right
# 208 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 209 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 210 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerWest:
# 211 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 212 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 213 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 214 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 215 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 216 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_down
# 217 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 218 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 219 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCWest:
# 220 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 221 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 222 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 223 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_up
# 224 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 225 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 226 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
@ Unused, the player is already facing this direction so its unneeded
# 227 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayWest:
# 228 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 229 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 230 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_right
# 231 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 232 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 233 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerEast:
# 234 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 235 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 236 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 237 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_right
# 238 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 239 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 240 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCEast:
# 241 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 242 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 243 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 244 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 245 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 246 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 247 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 248 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_up
# 249 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 250 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 251 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayEast:
# 252 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 253 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_up
# 254 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 255 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 256 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_right
# 257 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 258 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 259 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_Rival::
# 260 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 261 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, RivalsHouse_2F_EventScript_RivalPostLilycove
# 262 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 263 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RivalsHouse_2F_EventScript_May
# 264 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RivalsHouse_2F_EventScript_Brendan
# 265 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 266 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 267 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_May::
# 268 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayGettingReady, MSGBOX_DEFAULT
# 269 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 270 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 271 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 272 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_Brendan::
# 273 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanGettingReady, MSGBOX_DEFAULT
# 274 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 275 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 276 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 277 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_RivalPostLilycove::
# 278 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 279 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 280 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 281 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, RivalsHouse_2F_EventScript_MayPostLilycove
# 282 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, RivalsHouse_2F_EventScript_BrendanPostLilycove
# 283 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setflag FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE
# 284 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 285 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 286 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 287 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_MayPostLilycove::
# 288 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_MayWhereShouldIGoNext
# 289 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayJustCheckingMyPokedex, MSGBOX_DEFAULT
# 290 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 291 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 292 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_BrendanPostLilycove::
# 293 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_BrendanWhereShouldIGoNext
# 294 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex, MSGBOX_DEFAULT
# 295 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 296 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 297 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_MayWhereShouldIGoNext::
# 298 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
# 299 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 300 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 301 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_BrendanWhereShouldIGoNext::
# 302 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
# 303 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 304 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 305 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_PC::
# 306 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 307 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 308 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_MaysHouse_2F_EventScript_CheckRivalsPC
# 309 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_2F_EventScript_CheckPlayersPC
# 310 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 311 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 312 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckRivalsPC::
# 313 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 314 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 315 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 316 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 317 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckPlayersPC::
# 318 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 319 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 320 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PC_ON
# 321 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 322 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special BedroomPC
# 323 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitstate
# 324 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 325 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 326 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 327 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_TurnOffPlayerPC::
# 328 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 329 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 330 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 331 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 332 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 333 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 334 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
MaysHouse_2F_EventScript_Notebook::
# 335 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox MaysHouse_2F_Text_Notebook, MSGBOX_SIGN
# 336 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 337 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 338 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
MaysHouse_2F_Text_Notebook:
# 339 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "There are some notes on the page,\nwritten in spare, angular script.\p“This'll be on the test! Don't\nforget!\pEach Pokémon can learn up to four\nmoves!\pWhich moves you teach a Pokémon will\nshow how good of Trainer you are!”$"
# 340 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 341 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayWhoAreYouIntro:
# 342 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Huh!?\pWho… are you?$"
# 343 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 344 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayWhoAreYou:
# 345 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Oh!\nYou must be {PLAYER}!\lYour move was today, huh?\pWell, I'm {COLOR RED}May{COLOR DARK_GRAY}!\nGlad to meet you!\pI…I actually have this dream of\nbecoming friend with Pokémon all over\lthe world.\pAnd when Dad--oh, I mean, Professor\nBirch--told me about your move here,\l{PLAYER}…\pWell, I was hoping you would be nice\nand we could be friends.\p…B-but that's just silly, isn't it?\pI've just met you.\nRight, {PLAYER}?\pSo what am I talking about…\pHee hee…\pOh no!\nI forgot!\pI was supposed to be going out to\nhelp Dad catch some wild Pokémon!\p{PLAYER}, I'll see you later!$"
# 346 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 347 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayGettingReady:
# 348 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Pokémon fully restored, items\nall ready and…$"
# 349 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 350 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanWhoAreYouIntro:
# 351 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Y-you…\pWho are you?$"
# 352 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 353 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanWhoAreYou:
# 354 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "{PLAYER}?\pOh, you're the new kid who just moved\nin next door!?\pHuh…\nI didn't know that you'd be a girl.\pDad-I mean, Professor Birch-told me\nyou were the kid of a Gym Leader,\lso I sort of hoped you'd be a guy.\pMy name's {COLOR RED}Brendan{COLOR DARK_GRAY}.\pWell, I guess we are still neighbors,\nso…\pNice to meet you!\nLet's be friends, OK?\pHuh?\nHey, {PLAYER}…\lDon't you have any Pokémon?\pIf you want, I can go catch you one.\pAw, wait I forgot…\pI'm supposed to be going out to help\nmy dad catch some wild Pokémon.\pSome other time, OK?$"
# 355 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 356 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanGettingReady:
# 357 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Pokémon fully restored… Items\nall ready and…$"
# 358 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 359 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_ItsRivalsPokeBall:
# 360 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "It's {RIVAL}'s Poké Ball!\p"
# 361 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Better leave it right where it is.$"
# 362 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 363 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayJustCheckingMyPokedex:
# 364 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "May: {PLAYER}{KUN}!\p"
# 365 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I was just checking my Pokédex.\p"
# 366 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "There's still a lot of Pokémon that\n"
# 367 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I've seen but haven't caught.\p"
# 368 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "And there are many others that\n"
# 369 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I think will evolve.\p"
# 370 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I wonder where I should go catch\n"
# 371 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "some Pokémon next?$"
# 372 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 373 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayWhereShouldIGoNext:
# 374 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "May: I wonder where I should go catch\n"
# 375 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "some Pokémon next?\p"
# 376 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Wouldn't it be funny if we ran into each\n"
# 377 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "other, {PLAYER}{KUN}?$"
# 378 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 379 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex:
# 380 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Brendan: Hey, it's {PLAYER}.\p"
# 381 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I was just checking out my Pokédex.\p"
# 382 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "There are still many Pokémon that\n"
# 383 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I need to catch, I know, but this\l"
# 384 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "is looking pretty good.\p"
# 385 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Checking this Pokédex out gives me\n"
# 386 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "the urge to hit the road again.$"
# 387 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 388 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanWhereShouldIGoNext:
# 389 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Brendan: I'm having a hard time deciding\n"
# 390 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "where I should catch Pokémon next.\p"
# 391 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Hey, {PLAYER}, if I see you while I'm out\n"
# 392 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "catching Pokémon, I can pitch you a\l"
# 393 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "battle if you'd like.$"
