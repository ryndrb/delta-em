.set LOCALID_MART_EMPLOYEE, 2
.set LOCALID_FOOTPRINTS_MAN, 3
.set LOCALID_RIVAL, 4

OldaleTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
	.byte 0

OldaleTown_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	setflag FLAG_VISITED_OLDALE_TOWN
	call_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_BlockWestEntrance
	call_if_unset FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_MoveMartEmployee
	call_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_SetOldaleState
	end

@ This script seems pointless because nothing uses VAR_OLDALE_TOWN_STATE
OldaleTown_EventScript_SetOldaleState::
	setvar VAR_OLDALE_TOWN_STATE, 1
	return

OldaleTown_EventScript_BlockWestEntrance::
	setobjectxyperm LOCALID_FOOTPRINTS_MAN, 1, 11
	setobjectmovementtype LOCALID_FOOTPRINTS_MAN, MOVEMENT_TYPE_FACE_LEFT
	return

OldaleTown_EventScript_MoveMartEmployee::
	setobjectxyperm LOCALID_MART_EMPLOYEE, 10, 12
	setobjectmovementtype LOCALID_MART_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
	return

OldaleTown_EventScript_TownSign::
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
	end

OldaleTown_EventScript_Girl::
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
	end

OldaleTown_EventScript_MartEmployee::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_ExplainPotion
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_ExplainPotion
	setflag FLAG_TEMP_1
	playbgm MUS_FOLLOW_ME, FALSE
	msgbox OldaleTown_Text_IWorkAtPokemonMart, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_0x8000, VAR_0x8001
	special SpawnCameraObject
	applymovement LOCALID_MART_EMPLOYEE, Common_Movement_WalkInPlaceUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_Movement_CameraPanOverToMart
	waitmovement OBJ_EVENT_ID_CAMERA
	goto OldaleTown_EventScript_ExplainPokemonMart
	end

OldaleTown_EventScript_ExplainPokemonMart::
	msgbox OldaleTown_Text_ThisIsAPokemonMart, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	call_if_eq VAR_0x8000, 9, OldaleTown_EventScript_PositionPlayer9
	call_if_eq VAR_0x8000, 11, OldaleTown_EventScript_PositionPlayer11
	applymovement LOCALID_MART_EMPLOYEE, Common_Movement_FacePlayer
	applymovement OBJ_EVENT_ID_CAMERA, OldaleTown_Movement_CameraPanBackToPlayer
	waitmovement OBJ_EVENT_ID_CAMERA
	special RemoveCameraObject
	fadescreen FADE_FROM_BLACK
	msgbox OldaleTown_Text_HereHaveThisPotion, MSGBOX_DEFAULT
	closemessage
	delay 8
	giveitem ITEM_POTION 5
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_EventScript_BagIsFull
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_RECEIVED_POTION_OLDALE
	fadedefaultbgm
	release
	end

OldaleTown_EventScript_PositionPlayer9::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
	return

OldaleTown_EventScript_PositionPlayer11::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	return

OldaleTown_EventScript_ExplainPotion::
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
	release
	end

OldaleTown_EventScript_BagIsFull::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	fadedefaultbgm
	release
	end

OldaleTown_Movement_CameraPanOverToMart:
	walk_diag_northeast
	walk_diag_northeast
	walk_diag_northeast
	walk_diag_northeast
	step_end

OldaleTown_Movement_CameraPanBackToPlayer:
	walk_diag_southwest
	walk_diag_southwest
	walk_diag_southwest
	walk_diag_southwest
	step_end

OldaleTown_Movement_Unknown1:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	delay_8
	walk_in_place_down
	step_end

OldaleTown_Movement_Unknown2:
	walk_left
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OldaleTown_EventScript_FootprintsMan::
	lock
	faceplayer
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_NotBlockingPath
	msgbox OldaleTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

OldaleTown_EventScript_BlockedPath::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerStepBack
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_BackUp
	waitmovement 0
	msgbox OldaleTown_Text_WaitDontComeInHere, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_ReturnToOriginalPosition
	waitmovement 0
	releaseall
	end

OldaleTown_EventScript_NotBlockingPath::
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
	release
	end

OldaleTown_EventScript_Rival::
	lockall
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
	waitmovement 0
	setvar VAR_0x8009, 0
	goto OldaleTown_EventScript_ShowRivalMessage
	end

OldaleTown_EventScript_RivalTrigger1::
	lockall
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement 0
	setvar VAR_0x8009, 1
	goto OldaleTown_EventScript_ShowRivalMessage
	end

OldaleTown_EventScript_RivalTrigger2::
	lockall
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement 0
	setvar VAR_0x8009, 1
	goto OldaleTown_EventScript_ShowRivalMessage
	end

OldaleTown_EventScript_RivalTrigger3::
	lockall
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer3
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement 0
	setvar VAR_0x8009, 1
	goto OldaleTown_EventScript_ShowRivalMessage
	end

OldaleTown_EventScript_ShowRivalMessage::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, OldaleTown_EventScript_ShowMayMessage
	goto_if_eq VAR_RESULT, FEMALE, OldaleTown_EventScript_ShowBrendanMessage
	end

OldaleTown_EventScript_ShowMayMessage::
	msgbox OldaleTown_Text_MayLetsGoBack, MSGBOX_DEFAULT
	goto OldaleTown_EventScript_RivalFinish
	end

OldaleTown_EventScript_ShowBrendanMessage::
	msgbox OldaleTown_Text_BrendanLetsGoBack, MSGBOX_DEFAULT
	goto OldaleTown_EventScript_RivalFinish
	end

OldaleTown_EventScript_RivalFinish::
	closemessage
	call_if_eq VAR_0x8009, 0, OldaleTown_EventScript_DoExitMovement1
	call_if_eq VAR_0x8009, 1, OldaleTown_EventScript_DoExitMovement2
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
	waitmovement 0
	removeobject LOCALID_RIVAL
	setvar VAR_OLDALE_RIVAL_STATE, 2
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
	releaseall
	end

OldaleTown_EventScript_DoExitMovement1::
	goto_if_ne VAR_FACING, DIR_SOUTH, OldaleTown_EventScript_DoExitMovement2
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
	waitmovement 0
	return

OldaleTown_EventScript_DoExitMovement2::
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_WatchRivalExit
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
	waitmovement 0
	return

OldaleTown_Movement_RivalApproachPlayer1:
	walk_left
	walk_left
	step_end

OldaleTown_Movement_RivalApproachPlayer2:
	walk_left
	step_end

OldaleTown_Movement_RivalApproachPlayer3:
	face_left
	step_end

OldaleTown_Movement_RivalExit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

OldaleTown_Movement_WatchRivalExit:
	delay_8
	delay_4
	walk_in_place_down
	step_end

OldaleTown_Movement_PlayerStepBack:
	delay_8
	walk_right
	step_end

OldaleTown_Movement_BackUp:
	walk_fast_up
	walk_in_place_left
	lock_facing_direction
	walk_right
	unlock_facing_direction
	step_end

OldaleTown_Movement_ReturnToOriginalPosition:
	walk_down
	walk_left
	step_end

OldaleTown_Text_SavingMyProgress:
	.string "I want to take a rest, so I'm saving my\n"
	.string "progress.$"

OldaleTown_Text_IWorkAtPokemonMart:
	.string "Hi there!\nI work at the Poké Mart.\pFrom what I can see, you're a\nnovice Trainer.\lAm I right? OK.\pBeing super kindhearted as I am, I'm\ngoing to give you useful advice.$"

OldaleTown_Text_ThisIsAPokemonMart:
	.string "First of all, that's a Poké Mart\nthere.\lJust look for our blue roof.\pWe sell a variety of goods, including\nPoké Balls for catching Pokémon!$"

OldaleTown_Text_HereHaveThisPotion:
	.string "I'd like you to have these as part\nof a special promotion!$"

OldaleTown_Text_PotionExplanation:
	.string "Potions can be used anytime, so they\ncan be very useful to have.\pThat's it.\nThat was the advice from me-\lthe supremely kindhearted clerk.\lHave a great journey!$"

OldaleTown_Text_WaitDontComeInHere:
	.string "Aaaaah! Wait!\nPlease don't wander around here!\pI've just discovered a set of\nincredibly rare Pokémon prints!\pWait until I finish sketching them,\nOK?$"

OldaleTown_Text_DiscoveredFootprints:
	.string "I've just discovered a set of\nincredibly rare Pokémon prints!\pWait until I finish sketching them,\nOK?$"

OldaleTown_Text_FinishedSketchingFootprints:
	.string "I thought I was sketching some rare\nPokémon footprints…\pIt turned out they were my own\nfootprints!$"

OldaleTown_Text_MayLetsGoBack:
	.string "{COLOR RED}May{COLOR DARK_GRAY}: {PLAYER}! Over here!\pLet's hurry back to Littleroot!$"

OldaleTown_Text_BrendanLetsGoBack:
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: I'm heading back to my dad's\nlab first!\pCome on, {PLAYER}!$"

OldaleTown_Text_TownSign:
	.string "Oldale Town\n"
	.string "“Where things start off scarce.”$"

