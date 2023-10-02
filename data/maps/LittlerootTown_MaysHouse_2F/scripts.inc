.set LOCALID_RIVAL, 1

LittlerootTown_MaysHouse_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MaysHouse_2F_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_MaysHouse_2F_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MaysHouse_2F_OnFrame
	.byte 0

LittlerootTown_MaysHouse_2F_OnTransition:
	call_if_lt VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay
	call_if_ge VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 4, PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet
	call SecretBase_EventScript_SetDecorationFlags
	setvar VAR_SECRET_BASE_INITIALIZED, 0
	end

LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos::
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos
	goto_if_ge VAR_BIRCH_LAB_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
	goto LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos

LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos::
	checkplayergender
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_2F_EventScript_Ret
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
	setobjectxyperm LOCALID_RIVAL, 8, 2
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_UP
	return

LittlerootTown_MaysHouse_2F_EventScript_Ret::
	return

LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_MaysHouse_2F_EventScript_SetReadyToMeetMay
	return

LittlerootTown_MaysHouse_2F_EventScript_SetReadyToMeetMay::
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
	return

LittlerootTown_MaysHouse_2F_OnWarp:
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor
	.2byte 0

LittlerootTown_MaysHouse_2F_OnFrame:
	map_script_2 VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_MeetMay
	.2byte 0

LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor::
	checkplayergender
	goto_if_eq VAR_RESULT, FEMALE, SecretBase_EventScript_InitDecorations
	end

LittlerootTown_MaysHouse_2F_EventScript_RivalsPokeBall::
	lockall
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_MeetMay
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
	releaseall
	end

LittlerootTown_MaysHouse_2F_EventScript_MeetMay::
	addobject LOCALID_RIVAL
	delay 10
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, LittlerootTown_MaysHouse_2F_Movement_CameraPansToMay
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement 0
	msgbox RivalsHouse_2F_Text_MayGettingReady, MSGBOX_DEFAULT
	closemessage
	delay 8
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	delay 16
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	delay 16
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPlayer
	applymovement OBJ_EVENT_ID_CAMERA, LittlerootTown_MaysHouse_2F_Movement_CameraPansToBoth
	waitmovement OBJ_EVENT_ID_CAMERA
	special RemoveCameraObject
	playbgm MUS_ENCOUNTER_MAY, TRUE
	msgbox RivalsHouse_2F_Text_MayWhoAreYouIntro, MSGBOX_DEFAULT
	closemessage
	delay 16
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
	closemessage
	delay 16
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerMoveAside
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayLeaveRoom
	waitmovement LOCALID_RIVAL
	removeobject LOCALID_RIVAL
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, LittlerootTown_MaysHouse_2F_Movement_CameraPansToPlayer
	waitmovement 0
	special RemoveCameraObject
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	end

LittlerootTown_MaysHouse_2F_Movement_CameraPansToMay:
	walk_right
	walk_right
	walk_right
	step_end

LittlerootTown_MaysHouse_2F_Movement_CameraPansToBoth:
	delay_16
	delay_16
	walk_left
	walk_left
	walk_left
	step_end

LittlerootTown_MaysHouse_2F_Movement_CameraPansToPlayer:
	walk_left
	step_end

LittlerootTown_MaysHouse_2F_Movement_PlayerMoveAside:
	walk_down
	walk_in_place_up
	step_end

LittlerootTown_MaysHouse_2F_Movement_MayWalkToPlayer:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

LittlerootTown_MaysHouse_2F_Movement_MayLeaveRoom:
	walk_left
	walk_left
	walk_in_place_up
	walk_up
	set_invisible
	step_end

LittlerootTown_MaysHouse_2F_Movement_MayEnters:
	walk_down
	walk_down
	walk_in_place_right
	step_end

LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerNorth:
	walk_right
	walk_right
	walk_down
	walk_down
	walk_right
	step_end

LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCNorth:
	walk_up
	walk_up
	walk_up
	walk_in_place_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_up
	step_end

LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayNorth:
	delay_16
	walk_in_place_up
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_right
	step_end

LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerSouth:
	walk_right
	walk_right
	walk_right
	step_end

LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCSouth:
	walk_up
	walk_in_place_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_up
	step_end

LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMaySouth:
	delay_16
	walk_in_place_up
	delay_16
	delay_16
	walk_in_place_right
	step_end

LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerWest:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_down
	step_end

LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCWest:
	walk_up
	walk_right
	walk_right
	walk_in_place_up
	step_end

@ Unused, the player is already facing this direction so its unneeded
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayWest:
	delay_16
	delay_16
	walk_in_place_right
	step_end

LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerEast:
	walk_right
	walk_right
	walk_down
	walk_in_place_right
	step_end

LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCEast:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_up
	step_end

LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayEast:
	delay_16
	walk_in_place_up
	delay_16
	delay_16
	walk_in_place_right
	step_end

RivalsHouse_2F_EventScript_Rival::
	lockall
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, RivalsHouse_2F_EventScript_RivalPostLilycove
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, RivalsHouse_2F_EventScript_May
	goto_if_eq VAR_RESULT, FEMALE, RivalsHouse_2F_EventScript_Brendan
	end

RivalsHouse_2F_EventScript_May::
	msgbox RivalsHouse_2F_Text_MayGettingReady, MSGBOX_DEFAULT
	releaseall
	end

RivalsHouse_2F_EventScript_Brendan::
	msgbox RivalsHouse_2F_Text_BrendanGettingReady, MSGBOX_DEFAULT
	releaseall
	end

RivalsHouse_2F_EventScript_RivalPostLilycove::
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	checkplayergender
	call_if_eq VAR_RESULT, MALE, RivalsHouse_2F_EventScript_MayPostLilycove
	call_if_eq VAR_RESULT, FEMALE, RivalsHouse_2F_EventScript_BrendanPostLilycove
	setflag FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE
	releaseall
	end

RivalsHouse_2F_EventScript_MayPostLilycove::
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_MayWhereShouldIGoNext
	msgbox RivalsHouse_2F_Text_MayJustCheckingMyPokedex, MSGBOX_DEFAULT
	return

RivalsHouse_2F_EventScript_BrendanPostLilycove::
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_BrendanWhereShouldIGoNext
	msgbox RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex, MSGBOX_DEFAULT
	return

RivalsHouse_2F_EventScript_MayWhereShouldIGoNext::
	msgbox RivalsHouse_2F_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
	return

RivalsHouse_2F_EventScript_BrendanWhereShouldIGoNext::
	msgbox RivalsHouse_2F_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
	return

LittlerootTown_MaysHouse_2F_EventScript_PC::
	lockall
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_MaysHouse_2F_EventScript_CheckRivalsPC
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_2F_EventScript_CheckPlayersPC
	end

LittlerootTown_MaysHouse_2F_EventScript_CheckRivalsPC::
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
	releaseall
	end

LittlerootTown_MaysHouse_2F_EventScript_CheckPlayersPC::
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
	special DoPCTurnOnEffect
	playse SE_PC_ON
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
	special BedroomPC
	waitstate
	releaseall
	end

LittlerootTown_MaysHouse_2F_EventScript_TurnOffPlayerPC::
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
	playse SE_PC_OFF
	special DoPCTurnOffEffect
	releaseall
	end

MaysHouse_2F_EventScript_Notebook::
	msgbox MaysHouse_2F_Text_Notebook, MSGBOX_SIGN
	end

MaysHouse_2F_Text_Notebook:
	.string "There are some notes on the page,\nwritten in spare, angular script.\p“This'll be on the test! Don't\nforget!\pEach Pokémon can learn up to four\nmoves!\pWhich moves you teach a Pokémon will\nshow how good of Trainer you are!”$"

RivalsHouse_2F_Text_MayWhoAreYouIntro:
	.string "Huh!?\pWho… are you?$"

RivalsHouse_2F_Text_MayWhoAreYou:
	.string "Oh!\nYou must be {PLAYER}!\lYour move was today, huh?\pWell, I'm {COLOR RED}May{COLOR DARK_GRAY}!\nGlad to meet you!\pI…I actually have this dream of\nbecoming friend with Pokémon all over\lthe world.\pAnd when Dad--oh, I mean, Professor\nBirch--told me about your move here,\l{PLAYER}…\pWell, I was hoping you would be nice\nand we could be friends.\p…B-but that's just silly, isn't it?\pI've just met you.\nRight, {PLAYER}?\pSo what am I talking about…\pHee hee…\pOh no!\nI forgot!\pI was supposed to be going out to\nhelp Dad catch some wild Pokémon!\p{PLAYER}, I'll see you later!$"

RivalsHouse_2F_Text_MayGettingReady:
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Pokémon fully restored, items\nall ready and…$"

RivalsHouse_2F_Text_BrendanWhoAreYouIntro:
	.string "Y-you…\pWho are you?$"

RivalsHouse_2F_Text_BrendanWhoAreYou:
	.string "{PLAYER}?\pOh, you're the new kid who just moved\nin next door!?\pHuh…\nI didn't know that you'd be a girl.\pDad-I mean, Professor Birch-told me\nyou were the kid of a Gym Leader,\lso I sort of hoped you'd be a guy.\pMy name's {COLOR RED}Brendan{COLOR DARK_GRAY}.\pWell, I guess we are still neighbors,\nso…\pNice to meet you!\nLet's be friends, OK?\pHuh?\nHey, {PLAYER}…\lDon't you have any Pokémon?\pIf you want, I can go catch you one.\pAw, wait I forgot…\pI'm supposed to be going out to help\nmy dad catch some wild Pokémon.\pSome other time, OK?$"

RivalsHouse_2F_Text_BrendanGettingReady:
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Pokémon fully restored… Items\nall ready and…$"

RivalsHouse_2F_Text_ItsRivalsPokeBall:
	.string "It's {RIVAL}'s Poké Ball!\p"
	.string "Better leave it right where it is.$"

RivalsHouse_2F_Text_MayJustCheckingMyPokedex:
	.string "May: {PLAYER}{KUN}!\p"
	.string "I was just checking my Pokédex.\p"
	.string "There's still a lot of Pokémon that\n"
	.string "I've seen but haven't caught.\p"
	.string "And there are many others that\n"
	.string "I think will evolve.\p"
	.string "I wonder where I should go catch\n"
	.string "some Pokémon next?$"

RivalsHouse_2F_Text_MayWhereShouldIGoNext:
	.string "May: I wonder where I should go catch\n"
	.string "some Pokémon next?\p"
	.string "Wouldn't it be funny if we ran into each\n"
	.string "other, {PLAYER}{KUN}?$"

RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex:
	.string "Brendan: Hey, it's {PLAYER}.\p"
	.string "I was just checking out my Pokédex.\p"
	.string "There are still many Pokémon that\n"
	.string "I need to catch, I know, but this\l"
	.string "is looking pretty good.\p"
	.string "Checking this Pokédex out gives me\n"
	.string "the urge to hit the road again.$"

RivalsHouse_2F_Text_BrendanWhereShouldIGoNext:
	.string "Brendan: I'm having a hard time deciding\n"
	.string "where I should catch Pokémon next.\p"
	.string "Hey, {PLAYER}, if I see you while I'm out\n"
	.string "catching Pokémon, I can pitch you a\l"
	.string "battle if you'd like.$"
