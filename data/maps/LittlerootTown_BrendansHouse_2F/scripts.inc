.set LOCALID_RIVAL, 1

LittlerootTown_BrendansHouse_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_2F_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_BrendansHouse_2F_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_2F_OnFrame
	.byte 0

LittlerootTown_BrendansHouse_2F_OnTransition:
	call_if_lt VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan
	call_if_ge VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 4, PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet
	call SecretBase_EventScript_SetDecorationFlags
	setvar VAR_SECRET_BASE_INITIALIZED, 0
	end

LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos::
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
	goto_if_ge VAR_BIRCH_LAB_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_Ret
	goto LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos

LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_Ret
	@ Odd that the MaysHouse equivalent was used below instead
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
	setobjectxyperm LOCALID_RIVAL, 0, 2
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_UP
	return

LittlerootTown_BrendansHouse_2F_EventScript_Ret::
	return

LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan::
	checkplayergender
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan
	return

LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan::
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
	return

LittlerootTown_BrendansHouse_2F_OnWarp:
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor
	.2byte 0

LittlerootTown_BrendansHouse_2F_OnFrame:
	map_script_2 VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan
	.2byte 0

LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, SecretBase_EventScript_InitDecorations
	end

LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall::
	lockall
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
	releaseall
	end

LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan::
	addobject LOCALID_RIVAL
	delay 10
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, LittlerootTown_BrendansHouse_2F_Movement_CameraPansToBrendan
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	msgbox RivalsHouse_2F_Text_BrendanGettingReady, MSGBOX_DEFAULT
	closemessage
	delay 8
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceRight
	waitmovement 0
	delay 16
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	delay 16
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_BrendanWalkToPlayer
	applymovement OBJ_EVENT_ID_CAMERA, LittlerootTown_BrendansHouse_2F_Movement_CameraPansToBoth
	waitmovement OBJ_EVENT_ID_CAMERA
	special RemoveCameraObject
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYouIntro, MSGBOX_DEFAULT
	closemessage
	delay 16
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
	closemessage
	delay 16
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerMoveAside
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendaLeaveRoom
	waitmovement LOCALID_RIVAL
	removeobject LOCALID_RIVAL
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, LittlerootTown_BrendansHouse_2F_Movement_CameraPansToPlayer
	waitmovement 0
	special RemoveCameraObject
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	end

LittlerootTown_BrendansHouse_2F_Movement_CameraPansToBrendan:
	walk_left
	walk_left
	walk_left
	step_end

LittlerootTown_BrendansHouse_2F_Movement_CameraPansToBoth:
	delay_16
	delay_16
	delay_16
	walk_right
	walk_right
	step_end

LittlerootTown_BrendansHouse_2F_Movement_CameraPansToPlayer:
	walk_right
	step_end

LittlerootTown_BrendansHouse_2F_Movement_PlayerMoveAside:
	walk_down
	walk_in_place_up
	step_end

LittlerootTown_MaysHouse_2F_Movement_BrendanWalkToPlayer:
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

LittlerootTown_BrendansHouse_2F_Movement_BrendaLeaveRoom:
	walk_right
	walk_right
	walk_in_place_up
	walk_up
	set_invisible
	step_end

LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters:
	walk_down
	walk_down
	walk_in_place_left
	step_end

LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth:
	walk_left
	walk_left
	walk_down
	walk_down
	walk_left
	step_end

LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth:
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_up
	step_end

LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth:
	delay_16
	walk_in_place_up
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_left
	step_end

LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth:
	walk_left
	walk_left
	walk_left
	step_end

LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_up
	step_end

LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth:
	delay_16
	walk_in_place_up
	delay_16
	delay_16
	walk_in_place_left
	step_end

LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest:
	walk_left
	walk_left
	walk_down
	walk_in_place_left
	step_end

LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest:
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_up
	step_end

LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest:
	delay_8
	delay_16
	walk_in_place_up
	delay_16
	delay_16
	walk_in_place_left
	step_end

LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_down
	step_end

LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast:
	walk_up
	walk_left
	walk_left
	walk_in_place_up
	step_end

@ Unused, the player is already facing this direction so its unneeded
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanEast:
	delay_16
	delay_16
	walk_in_place_left
	step_end

LittlerootTown_BrendansHouse_2F_EventScript_PC::
	lockall
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC
	end

LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC::
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
	special DoPCTurnOnEffect
	playse SE_PC_ON
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
	special BedroomPC
	waitstate
	releaseall
	end

LittlerootTown_BrendansHouse_2F_EventScript_TurnOffPlayerPC::
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
	playse SE_PC_OFF
	special DoPCTurnOffEffect
	releaseall
	end

LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC::
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
	releaseall
	end

BrendansHouse_2F_EventScript_Notebook::
	msgbox BrendansHouse_2F_Text_Notebook, MSGBOX_SIGN
	end

PlayersHouse_2F_EventScript_GameCube::
	msgbox PlayersHouse_2F_Text_ItsAGameCube, MSGBOX_SIGN
	end

PlayersHouse_2F_Text_ClockIsStopped:
	.string "The clock on the wall isn't moving…\pYou've got to set the time!$"

PlayersHouse_2F_Text_HowDoYouLikeYourRoom:
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: How do you like your new room,\n{PLAYER}?\pGood!\nEverything's put away neatly!\pThey finished moving everything\ndownstairs, too.\pIt really is so nice having Pokémon\naround to help us!\pOh, but you should make sure that\neverything's all there on your desk.$"

BrendansHouse_2F_Text_Notebook:
	.string "The notebook is full of adventure\nrules jotted down!\pADVENTURE RULE NO. 1\nOpen the menu with the X Button.\pADVENTURE RULE NO. 2\nRecord your progress with Save.$"

Common_Text_LookCloserAtMap:
	.string "{PLAYER} peered closely at\nthe Hoenn region's Town Map!$"

PlayersHouse_2F_Text_ItsAGameCube:
	.string "It's a Nintendo GameCube.\p"
	.string "A Game Boy Advance is connected to\n"
	.string "serve as the Controller.$"
