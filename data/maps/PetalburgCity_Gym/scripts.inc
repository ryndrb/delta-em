.set LOCALID_NORMAN, 1
.set LOCALID_WALLY, 10
.set LOCALID_WALLYS_DAD, 11
.set LOCALID_BOY, 12

PetalburgCity_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, PetalburgCity_Gym_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_Gym_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_Gym_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_Gym_OnFrame
	.byte 0

PetalburgCity_Gym_OnLoad:
	goto_if_eq VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_OpenUnlockedDoors
	call_if_ge VAR_PETALBURG_GYM_STATE, 7, PetalburgCity_Gym_EventScript_UnlockAllDoors
	end

@ NOTE: Strength and OHKO rooms are misleading. Both are more accurately Critical-Hit
PetalburgCity_Gym_EventScript_OpenUnlockedDoors::
	setvar VAR_0x8005, 1
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
	call_if_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
	call_if_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
	call_if_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
	call_if_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
	call_if_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
	call_if_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
	call_if_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
	end

PetalburgCity_Gym_EventScript_UnlockAllDoors::
	setvar VAR_0x8005, 1
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
	return

PetalburgCity_Gym_OnTransition:
	call_if_eq VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_MoveWallyToEntrance
	call_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_MoveNormanToEntrance
	call_if_eq VAR_PETALBURG_CITY_STATE_2, 3, PetalburgCity_Gym_EventScript_NormanFacingUp
	call_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_CheckNormanForRematch
	end

PetalburgCity_Gym_EventScript_MoveWallyToEntrance::
	setobjectxyperm LOCALID_WALLY, 5, 108
	return

PetalburgCity_Gym_EventScript_MoveNormanToEntrance::
	setobjectxyperm LOCALID_NORMAN, 4, 107
	return

PetalburgCity_Gym_EventScript_NormanFacingUp::
	setobjectmovementtype LOCALID_NORMAN, MOVEMENT_TYPE_FACE_UP
	return

PetalburgCity_Gym_EventScript_CheckNormanForRematch::
	setorcopyvar VAR_TRAINER_BATTLE_OPPONENT_A, TRAINER_NORMAN_1
	specialvar VAR_RESULT, IsTrainerReadyForRematch
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
	goto_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
	setobjectxyperm LOCALID_NORMAN, 4, 107
	return

PetalburgCity_Gym_EventScript_DontMoveNormanToFront::
	setvar VAR_PETALBURG_GYM_STATE, 8
	end

PetalburgCity_Gym_OnWarp:
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_TurnPlayerNorth
	.2byte 0

PetalburgCity_Gym_EventScript_TurnPlayerNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

PetalburgCity_Gym_OnFrame:
    map_script_2 VAR_PETALBURG_CITY_STATE_2, 0, PetalburgCity_Gym_EventScript_NormanChallenger
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial
	.2byte 0

PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial::
	lockall
	msgbox PetalburgCity_Gym_Text_DadSoDidItWorkOut, MSGBOX_DEFAULT
	msgbox PetalburgCity_Gym_Text_WallyReturnMon, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceLeft
	waitmovement LOCALID_WALLY
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox PetalburgCity_Gym_Text_WallyThankPlayerBye, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitGym
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_WALLY
	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	msgbox PetalburgCity_Gym_Text_DadGoCollectBadges, MSGBOX_DEFAULT
	setvar VAR_PETALBURG_GYM_STATE, 2
	releaseall
	end

PetalburgCity_Gym_Movement_WallyExitGym:
	walk_down
	walk_down
	walk_down
	delay_16
	step_end

PetalburgCity_Gym_EventScript_Norman::
	lock
	faceplayer
	switch VAR_PETALBURG_GYM_STATE
	case 2, PetalburgCity_Gym_EventScript_NormanNoBadges
	case 3, PetalburgCity_Gym_EventScript_NormanOneBadge
	case 4, PetalburgCity_Gym_EventScript_NormanTwoBadges
	case 5, PetalburgCity_Gym_EventScript_NormanThreeBadges
	case 6, PetalburgCity_Gym_EventScript_NormanBattle
	case 7, PetalburgCity_Gym_EventScript_NormanPostBattle
	case 8, PetalburgCity_Gym_EventScript_NormanRematch
	end

PetalburgCity_Gym_EventScript_BeginWallyTutorial::
	addobject LOCALID_WALLY
	playse SE_DOOR
	delay 24
	playbgm MUS_WALLY_THEME, TRUE
    msgbox PetalburgCity_Gym_Text_WallyIdLikeAPokemon, MSGBOX_DEFAULT
	closemessage
	call PetalburgCity_Gym_EventScript_WallyArrive
	msgbox PetalburgCity_Gym_Text_DadOhYoureWallyRight, MSGBOX_DEFAULT
	msgbox PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon, MSGBOX_DEFAULT
	msgbox PetalburgCity_Gym_Text_DadHmISee, MSGBOX_DEFAULT
	closemessage
	call PetalburgCity_Gym_EventScript_NormanAddressPlayer
	msgbox PetalburgCity_Gym_Text_DadPlayerGoWithWally, MSGBOX_DEFAULT
	closemessage
	call PetalburgCity_Gym_EventScript_NormanAddressWally
	msgbox PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon, MSGBOX_DEFAULT
	msgbox PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall, MSGBOX_DEFAULT
	msgbox PetalburgCity_Gym_Text_WallyOhWowThankYou, MSGBOX_DEFAULT
	closemessage
	call PetalburgCity_Gym_EventScript_NormanFaceDoor
	call PetalburgCity_Gym_EventScript_WallyFaceDown
	msgbox PetalburgCity_Gym_Text_WouldYouReallyComeWithMe, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_DONT_TRANSITION_MUSIC
	call PetalburgCity_Gym_EventScript_ExitGymWithWally
	removeobject LOCALID_WALLY
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
	setvar VAR_PETALBURG_CITY_STATE, 2
    setvar VAR_PETALBURG_GYM_STATE, 1
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
	special InitBirchState
	fadenewbgm MUS_DUMMY
	warp MAP_PETALBURG_CITY, 15, 8
	waitstate
	release
	end

PetalburgCity_Gym_EventScript_WallyArrive::
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
	waitmovement 0
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_ExitGymWithWally::
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExit
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWally
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_NormanAddressPlayer::
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceDown
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_NormanAddressWally::
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceRight
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_WallyFacePlayer::
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_WallyFaceDown::
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceDown
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_NormanNoBadges::
	msgbox PetalburgCity_Gym_Text_NormanGoToRustboro, MSGBOX_DEFAULT
	release
	end

PetalburgCity_Gym_EventScript_NormanOneBadge::
	msgbox PetalburgCity_Gym_Text_NormanGoToDewford, MSGBOX_DEFAULT
	release
	end

PetalburgCity_Gym_EventScript_NormanTwoBadges::
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
	release
	end

PetalburgCity_Gym_EventScript_NormanThreeBadges::
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
	release
	end

@ For all other NormanFaceDoorX, Norman is already facing the door from NormanAddressWallyX
PetalburgCity_Gym_EventScript_NormanFaceDoor::
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceDown
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_NormanPostBattle::
	call PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_GiveEnigmaBerry
	goto_if_unset FLAG_RECEIVED_TM_FACADE, PetalburgCity_Gym_EventScript_GiveFacade2
	goto_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough
	msgbox PetalburgCity_Gym_Text_DadGoingToKeepTraining, MSGBOX_DEFAULT
	release
	end

PetalburgCity_Gym_EventScript_GiveFacade2::
	call PetalburgCity_Gym_EventScript_GiveFacade
	release
	end

PetalburgCity_Gym_EventScript_NormanRematch::
	trainerbattle_rematch_double TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanPreRematch, PetalburgCity_Gym_Text_NormanRematchDefeat, PetalburgCity_Gym_Text_NormanRematchNeedTwoMons
	msgbox PetalburgCity_Gym_Text_NormanPostRematch, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry::
	specialvar VAR_RESULT, IsEnigmaBerryValid
	goto_if_eq VAR_RESULT, FALSE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
	checkitem ITEM_ENIGMA_BERRY_E_READER
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
	checkpcitem ITEM_ENIGMA_BERRY_E_READER
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
	goto_if_eq VAR_ENIGMA_BERRY_AVAILABLE, 0, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
	msgbox PetalburgCity_Gym_Text_GiveEnigmaBerry, MSGBOX_DEFAULT
	setvar VAR_RESULT, TRUE
	return

PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry::
	setvar VAR_RESULT, FALSE
	return

PetalburgCity_Gym_EventScript_GiveEnigmaBerry::
	giveitem ITEM_ENIGMA_BERRY_E_READER
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setvar VAR_ENIGMA_BERRY_AVAILABLE, 0
	release
	end

PetalburgCity_Gym_EventScript_NormanBattle::
	checkplayergender
	call_if_eq VAR_RESULT, MALE, PetalburgCity_Gym_EventScript_NormanIntroTextM
	call_if_eq VAR_RESULT, FEMALE, PetalburgCity_Gym_EventScript_NormanIntroTextF
	trainerbattle_no_intro TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanDefeat
	msgbox PetalburgCity_Gym_Text_CantBelieveIt, MSGBOX_DEFAULT
	message PetalburgCity_Gym_Text_ReceivedBalanceBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_PETALBURG_GYM
	setvar VAR_PETALBURG_GYM_STATE, 7
	setflag FLAG_BADGE05_GET
	special ResetHealLocationFromDewford
	call EventScript_HideMrBriney
	setvar VAR_0x8008, 5
	call Common_EventScript_SetGymTrainers
	clearflag FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN
	call PetalburgCity_Gym_EventScript_UnlockAllDoors
	special DrawWholeMapView
	call PetalburgCity_Gym_EventScript_GiveFacade
	delay 32
	msgbox PetalburgCity_Gym_Text_Sigh, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceLeft
	waitmovement LOCALID_NORMAN
	delay 16
	msgbox PetalburgCity_Gym_Text_DadHappyAndSad1, MSGBOX_DEFAULT
	closemessage
	delay 32
	msgbox PetalburgCity_Gym_Text_DadHappyAndSad2, MSGBOX_DEFAULT
	closemessage
	delay 24
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_NORMAN
	msgbox PetalburgCity_Gym_Text_DadHappyAndSad3, MSGBOX_DEFAULT
	closemessage
	delay 40
	setvar VAR_PETALBURG_CITY_STATE, 4
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
	warpsilent MAP_PETALBURG_CITY, 15, 9
	waitstate
	end

PetalburgCity_Gym_EventScript_NormanIntroTextM::
	msgbox PetalburgCity_Gym_Text_NormanIntroM, MSGBOX_DEFAULT
	return

PetalburgCity_Gym_EventScript_NormanIntroTextF::
	msgbox PetalburgCity_Gym_Text_NormanIntroF, MSGBOX_DEFAULT
	return

PetalburgCity_Gym_EventScript_GiveFacade::
	giveitem ITEM_TM42 @ will be replaced by TM Retaliate
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	setflag ITEM_TM_FACADE @ will be replaced by Flag Retaliate
	msgbox PetalburgCity_Gym_Text_ExplainRetaliate, MSGBOX_DEFAULT
	closemessage
	return

PetalburgCity_Gym_Movement_Unused:
	walk_in_place_faster_up
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_8
	walk_in_place_faster_down
	step_end

PetalburgCity_Gym_Movement_WallyArrive:
	delay_16
	walk_up
	delay_16
	delay_8
	walk_up
	walk_right
	walk_up
	walk_up
	walk_in_place_left
	step_end

PetalburgCity_Gym_Movement_WallyExit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_in_place_up
	delay_16
	walk_in_place_down
	step_end

PetalburgCity_Gym_Movement_PlayerExitWithWally:
	delay_16
	delay_16
	delay_16
	walk_down
	walk_down
	walk_down
	delay_8
	step_end

PetalburgCity_Gym_Movement_PlayerExitWithWallySouth:
	delay_16
	delay_16
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	delay_8
	step_end

PetalburgCity_Gym_Movement_PlayerExitWithWallyWest:
	delay_16
	delay_16
	walk_down
	walk_down
	walk_down
	walk_down
	delay_8
	step_end

PetalburgCity_Gym_Movement_PlayerExitWithWallyEast:
	walk_in_place_faster_down
	delay_16
	delay_16
	walk_down
	walk_down
	walk_down
	walk_right
	walk_down
	delay_8
	step_end

PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough::
	msgbox PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough, MSGBOX_DEFAULT
	release
	end

PetalburgCity_Gym_EventScript_SpeedRoomDoor::
	lockall
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
	setvar VAR_0x8008, 7
	setvar VAR_0x8009, 85
	msgbox PetalburgCity_Gym_Text_EnterSpeedRoom, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
	end

PetalburgCity_Gym_EventScript_EnterRoom::
	closemessage
	delay 30
	warpdoor MAP_PETALBURG_CITY_GYM, VAR_0x8008, VAR_0x8009
	waitstate
	releaseall
	end

PetalburgCity_Gym_EventScript_DontEnterRoom::
	releaseall
	end

PetalburgCity_Gym_EventScript_DoorLocked::
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked, MSGBOX_DEFAULT
	releaseall
	end

@ VAR_0x8008 and VAR_0x8009 below are the x and y coordinates of the warp
PetalburgCity_Gym_EventScript_AccuracyRoomDoor::
	lockall
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, 98
	msgbox PetalburgCity_Gym_Text_EnterAccuracyRoom, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
	end

PetalburgCity_Gym_EventScript_ConfusionRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
	setvar VAR_0x8008, 7
	setvar VAR_0x8009, 46
	msgbox PetalburgCity_Gym_Text_EnterConfusionRoom, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
	end

PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, 59
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
	end

PetalburgCity_Gym_EventScript_RightDefenseRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
	setvar VAR_0x8008, 7
	setvar VAR_0x8009, 59
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
	end

PetalburgCity_Gym_EventScript_RecoveryRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, 72
	msgbox PetalburgCity_Gym_Text_EnterRecoveryRoom, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
	end

PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_DoorLocked
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, 20
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
	end

PetalburgCity_Gym_EventScript_RightStrengthRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
	setvar VAR_0x8008, 7
	setvar VAR_0x8009, 20
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
	end

PetalburgCity_Gym_EventScript_LeftOHKORoomDoor::
	lockall
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, 33
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
	end

PetalburgCity_Gym_EventScript_RightOHKORoomDoor::
	lockall
	goto_if_not_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_DoorLocked
	setvar VAR_0x8008, 7
	setvar VAR_0x8009, 33
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
	end

PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_DoorLocked
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, 7
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
	end

PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_DoorLocked
	setvar VAR_0x8008, 7
	setvar VAR_0x8009, 7
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
	end

PetalburgCity_Gym_EventScript_Randall::
	trainerbattle_single TRAINER_RANDALL, PetalburgCity_Gym_Text_RandallIntro, PetalburgCity_Gym_Text_RandallDefeat, PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_RandallPostBadge
	msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors::
	setvar VAR_0x8005, 0
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
	special DrawWholeMapView
	release
	end

PetalburgCity_Gym_EventScript_RandallPostBadge::
	msgbox PetalburgCity_Gym_Text_RandallPostBadge, MSGBOX_NPC
	end

PetalburgCity_Gym_EventScript_Parker::
	trainerbattle_single TRAINER_PARKER, PetalburgCity_Gym_Text_ParkerIntro, PetalburgCity_Gym_Text_ParkerDefeat, PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_ParkerPostBadge
	msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors::
	setvar VAR_0x8005, 0
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
	special DrawWholeMapView
	release
	end

PetalburgCity_Gym_EventScript_ParkerPostBadge::
	msgbox PetalburgCity_Gym_Text_ParkerPostBadge, MSGBOX_NPC
	end

PetalburgCity_Gym_EventScript_George::
	trainerbattle_single TRAINER_GEORGE, PetalburgCity_Gym_Text_GeorgeIntro, PetalburgCity_Gym_Text_GeorgeDefeat, PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GeorgePostBadge
	msgbox PetalburgCity_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors::
	setvar VAR_0x8005, 0
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
	special DrawWholeMapView
	release
	end

PetalburgCity_Gym_EventScript_GeorgePostBadge::
	msgbox PetalburgCity_Gym_Text_GeorgePostBadge, MSGBOX_NPC
	end

PetalburgCity_Gym_EventScript_Berke::
	trainerbattle_single TRAINER_BERKE, PetalburgCity_Gym_Text_BerkeIntro, PetalburgCity_Gym_Text_BerkeDefeat, PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_BerkePostBadge
	msgbox PetalburgCity_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors::
	setvar VAR_0x8005, 0
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
	special DrawWholeMapView
	release
	end

PetalburgCity_Gym_EventScript_BerkePostBadge::
	msgbox PetalburgCity_Gym_Text_BerkePostBadge, MSGBOX_NPC
	end

PetalburgCity_Gym_EventScript_Mary::
	trainerbattle_single TRAINER_MARY, PetalburgCity_Gym_Text_MaryIntro, PetalburgCity_Gym_Text_MaryDefeat, PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_MaryPostBadge
	msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors::
	setvar VAR_0x8005, 0
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
	special DrawWholeMapView
	release
	end

PetalburgCity_Gym_EventScript_MaryPostBadge::
	msgbox PetalburgCity_Gym_Text_MaryPostBadge, MSGBOX_NPC
	end

PetalburgCity_Gym_EventScript_Alexia::
	trainerbattle_single TRAINER_ALEXIA, PetalburgCity_Gym_Text_AlexiaIntro, PetalburgCity_Gym_Text_AlexiaDefeat, PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_AlexiaPostBadge
	msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors::
	setvar VAR_0x8005, 0
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
	special DrawWholeMapView
	release
	end

PetalburgCity_Gym_EventScript_AlexiaPostBadge::
	msgbox PetalburgCity_Gym_Text_AlexiaPostBadge, MSGBOX_NPC
	end

PetalburgCity_Gym_EventScript_Jody::
	trainerbattle_single TRAINER_JODY, PetalburgCity_Gym_Text_JodyIntro, PetalburgCity_Gym_Text_JodyDefeat, PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_JodyPostBadge
	msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors::
	setvar VAR_0x8005, 0
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
	special DrawWholeMapView
	release
	end

PetalburgCity_Gym_EventScript_JodyPostBadge::
	msgbox PetalburgCity_Gym_Text_JodyPostBadge, MSGBOX_NPC
	end

@ VAR_0x8004 below is the room number
@ VAR_0x8005 below is 0 when the door should be slid open and 1 when it should be unlocked immediately
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors::
	setvar VAR_0x8004, 1
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
	call PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles
	return

PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors::
	setvar VAR_0x8004, 2
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
	call PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles
	return

PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors::
	setvar VAR_0x8004, 3
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
	call PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles
	return

PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors::
	setvar VAR_0x8004, 4
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
	call PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles
	return

PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors::
	setvar VAR_0x8004, 5
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
	call PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles
	return

PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors::
	setvar VAR_0x8004, 6
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
	call PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles
	return

PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors::
	setvar VAR_0x8004, 7
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
	call PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles
	return

PetalburgCity_Gym_EventScript_OpenOHKORoomDoors::
	setvar VAR_0x8004, 8
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
	call PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles
	return

PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles::
	setmetatile 6, 85, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
	setmetatile 7, 85, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	setmetatile 1, 98, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
	setmetatile 2, 98, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	return

PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles::
	setmetatile 6, 46, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
	setmetatile 7, 46, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	setmetatile 1, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
	setmetatile 2, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	return

PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles::
	setmetatile 6, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
	setmetatile 7, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	setmetatile 1, 72, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
	setmetatile 2, 72, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	return

PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles::
	setmetatile 1, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
	setmetatile 2, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	return

PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles::
	setmetatile 6, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
	setmetatile 7, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	setmetatile 1, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
	setmetatile 2, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	return

PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles::
	setmetatile 6, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
	setmetatile 7, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	return

PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles::
	setmetatile 1, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
	setmetatile 2, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	return

PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles::
	setmetatile 6, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
	setmetatile 7, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	return

PetalburgCity_Gym_EventScript_SlideOpenRoomDoors::
	special PetalburgGymSlideOpenRoomDoors
	waitstate
	return

PetalburgCity_Gym_EventScript_UnlockRoomDoors::
	special PetalburgGymUnlockRoomDoors
	return

PetalburgCity_Gym_EventScript_GymGuide::
	lock
	faceplayer
	setvar VAR_PETALBURG_CITY_STATE, 4
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
	warpsilent MAP_PETALBURG_CITY, 15, 9
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GymGuidePostVictory
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

PetalburgCity_Gym_EventScript_GymGuidePostVictory::
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

PetalburgCity_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
	goto PetalburgCity_Gym_EventScript_GymStatue
	end

PetalburgCity_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
	goto PetalburgCity_Gym_EventScript_GymStatue
	end

PetalburgCity_Gym_EventScript_GymStatueCertified::
	msgbox PetalburgCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

PetalburgCity_Gym_EventScript_GymStatue::
	msgbox PetalburgCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

PetalburgCity_Gym_Text_WallyIdLikeAPokemon:
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Um… E-excuse me…\pI…I'd like to get a Pokémon, please…$"

PetalburgCity_Gym_Text_DadOhYoureWallyRight:
	.string "{COLOR RED}Dad{COLOR DARK_GRAY}: Hm? Aren't you…\pYou're Wally, right?$"

PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon:
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: Y-yes… I'm supposed to go stay\nwith my relatives in Verdanturf Town\lfor a while.\pBut I thought I might be lonely\nby myself, so I wanted to bring a\lPokémon with me.\pBut I've never caught a Pokémon by\nmyself…\lI'm not sure if I can.$"

PetalburgCity_Gym_Text_DadHmISee:
	.string "{COLOR RED}Dad{COLOR DARK_GRAY}: Mm-hmm.\nI see.$"

PetalburgCity_Gym_Text_DadPlayerGoWithWally:
	.string "{PLAYER}!\nYou heard all that, right?\pYou go with Wally, and make sure that he\nsafely catches a Pokémon.$"

PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon:
	.string "Wally, here.\pI'll lend you one of my Pokémon.\pWally received {COLOR RED}Zigzagoon{COLOR DARK_GRAY}!$"

PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall:
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: Oh, wow…\nYour Pokémon, sir?\p{COLOR RED}Dad{COLOR DARK_GRAY}: Hm…\pI'll give you a Poké Ball, too, so go\ngive it your best!\pWally received a {COLOR RED}Poké Ball{COLOR DARK_GRAY}!$"

PetalburgCity_Gym_Text_WallyOhWowThankYou:
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: Th-thank you, Mr. Norman!$"

PetalburgCity_Gym_Text_WouldYouReallyComeWithMe:
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: Um…{PLAYER}?\pYou will…\pYou will come with me, right?$"

PetalburgCity_Gym_Text_DadSoDidItWorkOut:
	.string "{COLOR RED}Dad{COLOR DARK_GRAY}: So did it go well?$"

PetalburgCity_Gym_Text_WallyReturnMon:
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: Yes, it did! Thank you!\pLet me give you back your Pokémon,\nsir.$"

PetalburgCity_Gym_Text_WallyThankPlayerBye:
	.string "And you, {PLAYER}…\pThank you so much for coming with me.\pIt was all thanks to you two that I\nwas able to catch Ralts.\pMy very own Ralts…\pI will always, always treasure it!\p…\pI'm going to try my best together with\nRalts.\pYou do your best, too, {PLAYER}!\pOh, but my mom's waiting for me.\nI've got to get going!\pI hope we'll meet again, {PLAYER}!\nAnd you, too, Mr. Norman!$"

PetalburgCity_Gym_Text_DadGoCollectBadges:
	.string "{COLOR RED}Dad{COLOR DARK_GRAY}: Hmm.\pThat boy will be worth keeping an eye\non.\pBut for now…\p{PLAYER}!\pIf you want to become strong as a\nTrainer, listen to my advice.\pFirst head for {COLOR BLUE}Rustboro City{COLOR DARK_GRAY}, which\nlies beyond this town.\pThere you should challenge the {COLOR BLUE}Gym\nLeader{COLOR DARK_GRAY}, {COLOR BLUE}Roxanne{COLOR DARK_GRAY}.\pAfter her, go on to the other Pokémon\nGyms and defeat their Leaders as well.\pCollect badges from them,\nunderstand?\pOf course, I'm a Gym Leader, too.\nI'm sure we'll battle one day.\pBut that will only be after you've\nbecome strong, {PLAYER}.$"

PetalburgCity_Gym_Text_NormanGoToRustboro:
	.string "{COLOR RED}Dad{COLOR DARK_GRAY}: Hm?\pWeren't you going to go to the\nPokémon Gym in Rustboro?\pSorry, but I don't get pleasure from\nbattling greenhorn Trainers.\lThere's no challenge.\pI want you to grow stronger before\nI would consider taking you on in\lbattle.\pCome back when you've got at least,\nhmmm…{PAUSE 32} four badges!\pThen I'll take you on, {PLAYER}.$"

PetalburgCity_Gym_Text_NormanGoToDewford:
	.string "{COLOR RED}Dad{COLOR DARK_GRAY}: I see…\pSo, you've beaten the Gym Leader in\nRustboro City.\pBut there are many more Trainers who\nare stronger than you, {PLAYER}.\pAcross the sea in Dewford Town is a\nGym Leader named Brawly.\pYou should go challenge him.$"

PetalburgCity_Gym_Text_YouHaveGottenStronger:
	.string "{COLOR RED}Dad{COLOR DARK_GRAY}: Hm…\n{PLAYER}, you have gotten stronger.\pI can tell by the number of Badges that\nyou've earned.$"

PetalburgCity_Gym_Text_NormanIntroM:
	.string "{COLOR RED}Dad{COLOR DARK_GRAY}: {PLAYER}…\pIt makes me happier than I can really\ndescribe.\pBeing able to have a real battle with my\nown son like this.\pBut a battle is a battle.\pI will do everything within my power as\na Gym Leader to win!\pYou better give it your best shot, too,\n{PLAYER}!$"

PetalburgCity_Gym_Text_NormanIntroF:
	.string "{COLOR RED}Dad{COLOR DARK_GRAY}: {PLAYER}…\pIt makes me happier than I can really\ndescribe.\pBeing able to have a real battle with my\nown daughter like this.\pBut a battle is a battle.\pI will do everything within my power as\na Gym Leader to win!\pYou better give it your best shot, too,\n{PLAYER}!$"

PetalburgCity_Gym_Text_NormanDefeat:
	.string "…!\pImpossible!$"

PetalburgCity_Gym_Text_CantBelieveIt:
	.string "I can't believe it.\pI lost to {PLAYER}?\p…\p…\pYou've come this far…\pThat's how it is, then!\pI will give you this.$"

PetalburgCity_Gym_Text_ReceivedBalanceBadge:
	.string "{PLAYER} received the Balance Badge\n"
	.string "from Dad!$"

PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis:
	.string "Having that Badge will ensure that\nPokémon up to Lv. 60 will obey you,\leven if you received them in trades.\pPokémon that know the HM move Surf will\nalso be able to travel over water now.\pAnd this is my gift to you, {PLAYER}.\nI'm sure you'll be able to use it well.$"

PetalburgCity_Gym_Text_ExplainRetaliate:
	.string "Retaliate will allow you to take\nrevenge for a fallen team member.\pIts power will be doubled if you have a\nPokémon use it in the very next move\lright after an ally faints.\pI hope you and your Pokémon will be\ndiligent enough to use it wisely.$"

PetalburgCity_Gym_Text_Sigh:
	.string "Sigh.$"

PetalburgCity_Gym_Text_DadHappyAndSad1:
	.string "As the Gym Leader, I can't express how\nfrustrated I am.$"

PetalburgCity_Gym_Text_DadHappyAndSad2:
	.string "But, as a father, it makes me both\nhappy and a little sad. It's odd.$"

PetalburgCity_Gym_Text_DadHappyAndSad3:
	.string "Come on, {PLAYER}.\pI'll see you on your way.\nLet's get out of here.$"

PetalburgCity_Gym_Text_PleaseComeWithMe:
	.string "Ah, there you are, {PLAYER}{KUN}!\p"
	.string "Please come with me.\n"
	.string "I have something I want you to have.$"

PetalburgCity_Gym_Text_LetMeBorrowPlayer:
	.string "Norman, you don't mind, do you?\p"
	.string "Let me borrow your {PLAYER}{KUN} for\n"
	.string "a minute or two.$"

PetalburgCity_Gym_Text_DadGoingToKeepTraining:
	.string "Dad: {PLAYER}, you should go visit\n"
	.string "your mother every so often.\p"
	.string "I'm going to stay here and redouble\n"
	.string "my training.\p"
	.string "It would bother me as a Trainer to\n"
	.string "not avenge my loss to you, {PLAYER}!$"

PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough:
	.string "Dad: {PLAYER}, how are things going?\p"
	.string "The world of Pokémon is deep.\p"
	.string "I honestly think that no amount of\n"
	.string "training would ever be enough.$"

PetalburgCity_Gym_Text_GymGuideAdvice:
	.string "{COLOR RED}Guide{COLOR DARK_GRAY}: Yo, how's it going,\nChamp-to-be {PLAYER}?\pThe doors in this Gym open when you\nbeat the awaiting Trainers.\pWhoops! The doors in this room are\nalready open, so don't attack me!\pThe Trainers of Petalburg Gym use all\nkinds of items.\pThe door at the left leads to the Speed\nRoom.\pThe door on the right leads to the\nAccuracy Room.\pThe room's name will be on the door, so\nchoose carefully.\pOnce you've chosen the door…\nWell, hey, go for it!$"

PetalburgCity_Gym_Text_GymGuidePostVictory:
	.string "{PLAYER}! Whoa! You've overcome even\n"
	.string "your own father!\p"
	.string "Like, whoa!\n"
	.string "What a stunning turn of events!$"

PetalburgCity_Gym_Text_RandallIntro:
	.string "The ability to attack before the\n"
	.string "opponent…\p"
	.string "Just that alone puts me at a great\n"
	.string "advantage, don't you agree?$"

PetalburgCity_Gym_Text_RandallDefeat:
	.string "That was a magnificent battle!$"

PetalburgCity_Gym_Text_RandallPostBattle:
	.string "Go on to the next room where a new\n"
	.string "challenge awaits you.\p"
	.string "At the left is the Confusion Room.\p"
	.string "The right door leads to the Defense\n"
	.string "Room.$"

PetalburgCity_Gym_Text_RandallPostBadge:
	.string "Whomever you beat, and whomever you\n"
	.string "may lose to, you never shirk from\l"
	.string "training yourself and your Pokémon.\p"
	.string "That's what I think being a\n"
	.string "Gym Leader is all about.$"

PetalburgCity_Gym_Text_ParkerIntro:
	.string "This is the Confusion Room.\p"
	.string "Let me see how well bonded you are\n"
	.string "with your Pokémon!$"

PetalburgCity_Gym_Text_ParkerDefeat:
	.string "I couldn't confuse your team enough…\n"
	.string "You share a strong bond together.$"

PetalburgCity_Gym_Text_ParkerPostBattle:
	.string "The next room is the Strength Room.\n"
	.string "Can you withstand brute force?$"

PetalburgCity_Gym_Text_ParkerPostBadge:
	.string "After you beat our Leader, the\n"
	.string "training has become a lot tougher.$"

PetalburgCity_Gym_Text_GeorgeIntro:
	.string "Just when you think you're going to\n"
	.string "win, your opponent restores HP…\p"
	.string "Can you just imagine how awful that\n"
	.string "must feel?\p"
	.string "I'll show you exactly how awful it\n"
	.string "feels!$"

PetalburgCity_Gym_Text_GeorgeDefeat:
	.string "I couldn't restore HP enough…\n"
	.string "What Attack power…$"

PetalburgCity_Gym_Text_GeorgePostBattle:
	.string "I should have expected no less from\n"
	.string "our Leader's kid.\p"
	.string "No, wait! A Trainer's abilities are\n"
	.string "earned only through effort.\p"
	.string "I lost because my own efforts\n"
	.string "weren't enough.\p"
	.string "Go on! The One-hit KO Room is next.$"

PetalburgCity_Gym_Text_GeorgePostBadge:
	.string "I'm going to keep training at Gyms.\n"
	.string "One day, I'll become a Leader.$"

PetalburgCity_Gym_Text_BerkeIntro:
	.string "I'm not going to take it easy just\n"
	.string "because you're our Leader's kid.\p"
	.string "I'll show you how horrid it is for\n"
	.string "a Pokémon to take a critical hit!$"

PetalburgCity_Gym_Text_BerkeDefeat:
	.string "Your power…\n"
	.string "You're the real deal.$"

PetalburgCity_Gym_Text_BerkePostBattle:
	.string "Your father really is strong.\n"
	.string "He's a Trainer worth my respect.\p"
	.string "And, I sense the same glow coming\n"
	.string "from you as your father.\p"
	.string "I hope that you'll stage a terrific\n"
	.string "battle with your father!$"

PetalburgCity_Gym_Text_BerkePostBadge:
	.string "Since your dad became the Leader,\n"
	.string "the Trainers of Petalburg City have\l"
	.string "become a lot tougher.$"

PetalburgCity_Gym_Text_MaryIntro:
	.string "Hee hee hee…\nThis is the Accuracy Room.\pIt's pretty nasty when every attack\nlands without fail.$"

PetalburgCity_Gym_Text_MaryDefeat:
	.string "You were a cut above me…$"

PetalburgCity_Gym_Text_MaryPostBattle:
	.string "There are even more fearsome Trainers\nwaiting for you ahead.\pThe Defense Room is on the left.\nThe Recovery Room is to the right.\pWhichever way you go, your Pokémon's\nAttack power will be on trial.$"

PetalburgCity_Gym_Text_MaryPostBadge:
	.string "Do you know what we're trying to\nachieve as Trainers?\pWe're striving to become soul mates\nwith our Pokémon.$"

PetalburgCity_Gym_Text_AlexiaIntro:
	.string "The higher my Pokémon's Defense,\nthe more reckless I can be with my\lattacks.$"

PetalburgCity_Gym_Text_AlexiaDefeat:
	.string "Our defenses weren't enough…$"

PetalburgCity_Gym_Text_AlexiaPostBattle:
	.string "I think you've taught me a valuable\nlesson here.\pGo on! The left door goes to the\nStrength Room.\pThe right door opens to the One-hit KO\nRoom.\pBoth of them have Trainers who are\noffensively skilled.$"

PetalburgCity_Gym_Text_AlexiaPostBadge:
	.string "Hi! Have you tried using Surf?$"

PetalburgCity_Gym_Text_JodyIntro:
	.string "Our Gym Leader told us to pull out all\nthe stops to beat you.\pEven if you do happen to be the\nLeader's own son!$"

PetalburgCity_Gym_Text_JodyDefeat:
	.string "But…\nI went all out!$"

PetalburgCity_Gym_Text_JodyPostBattle:
	.string "The way you handle your Pokémon\nreminds me of your father's style.\pGo on through! The Gym Leader--no, your\nfather--is waiting!$"

PetalburgCity_Gym_Text_JodyPostBadge:
	.string "Sure, it's fine to make your Pokémon\nstronger.\pBut what decides the winner?\pWhy, it's the feelings Trainers have for\ntheir Pokémon.$"

PetalburgCity_Gym_Text_DoorAppearsLocked:
	.string "This door appears to be locked\n"
	.string "right now…$"

PetalburgCity_Gym_Text_EnterSpeedRoom:
	.string "“Speed Room,” the sign says.\p"
	.string "Do you want to go through?$"

@ Unused
PetalburgCity_Gym_Text_DoorAppearsLocked2:
	.string "This door appears to be locked\n"
	.string "right now…$"

PetalburgCity_Gym_Text_EnterAccuracyRoom:
	.string "“Accuracy Room,” the sign says.\p"
	.string "Do you want to go through?$"

PetalburgCity_Gym_Text_EnterConfusionRoom:
	.string "“Confusion Room,” the sign says.\p"
	.string "Do you want to go through?$"

PetalburgCity_Gym_Text_EnterDefenseRoom:
	.string "“Defense Room,” the sign says.\p"
	.string "Do you want to go through?$"

PetalburgCity_Gym_Text_EnterRecoveryRoom:
	.string "“Recovery Room,” the sign says.\p"
	.string "Do you want to go through?$"

PetalburgCity_Gym_Text_EnterStrengthRoom:
	.string "“Strength Room,” the sign says.\p"
	.string "Do you want to go through?$"

PetalburgCity_Gym_Text_EnterOHKORoom:
	.string "“One-hit KO Room,” the sign says.\p"
	.string "Do you want to go through?$"

PetalburgCity_Gym_Text_EnterGymLeadersRoom:
	.string "“Gym Leader's Room\p"
	.string "“See for yourself what Pokémon await\n"
	.string "you!” the sign says.\p"
	.string "Do you want to go through?$"

PetalburgCity_Gym_Text_GymStatue:
	.string "Petalburg City Pokémon Gym$"

PetalburgCity_Gym_Text_GymStatueCertified:
	.string "Petalburg City Pokémon Gym\p"
	.string "Norman's certified Trainers:\n"
	.string "{PLAYER}$"

PetalburgCity_Gym_Text_NormanPreRematch:
	.string "Dad: {PLAYER}…\n"
	.string "I had a feeling that you would come.\p"
	.string "I would never refuse to accept\n"
	.string "a challenge from you.\p"
	.string "You do understand, don't you?\p"
	.string "Inside a Gym, it doesn't matter that\n"
	.string "we are a parent and child.\p"
	.string "…No, because we are parent and child,\n"
	.string "we owe it to each other to do the best\l"
	.string "we can. Isn't that right, {PLAYER}?$"

PetalburgCity_Gym_Text_NormanRematchDefeat:
	.string "Uh… Haha…\n"
	.string "Maybe that was going too hard…$"

PetalburgCity_Gym_Text_NormanPostRematch:
	.string "Dad: {PLAYER}…\n"
	.string "What is your dream?\p"
	.string "My dream…\n"
	.string "Hahaha…\l"
	.string "It has already come true, actually.$"

PetalburgCity_Gym_Text_NormanRematchNeedTwoMons:
	.string "Dad: {PLAYER}…\n"
	.string "I had a feeling that you would come.\p"
	.string "I would never refuse to accept\n"
	.string "a challenge from you.\p"
	.string "You do understand, don't you?\p"
	.string "Inside a Gym, it doesn't matter that\n"
	.string "we are a parent and child.\p"
	.string "Hm? Wait a second, {PLAYER}.\p"
	.string "Do you only have one Pokémon that is\n"
	.string "capable of battle?\p"
	.string "Sorry, but you'll have to come back\n"
	.string "with at least two Pokémon.$"

PetalburgCity_Gym_EventScript_NormanChallenger::
	delay 8
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement OBJ_EVENT_ID_PLAYER
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, PetalburgCity_Gym_Movement_NormanChallenger_CameraPanUp
	waitmovement OBJ_EVENT_ID_CAMERA
	msgbox PetalburgCity_Gym_EventScript_NormanChallenger_Text_0
	msgbox PetalburgCity_Gym_EventScript_NormanChallenger_Text_1
	msgbox PetalburgCity_Gym_EventScript_NormanChallenger_Text_2
	msgbox PetalburgCity_Gym_EventScript_NormanChallenger_Text_3
	closemessage
	applymovement LOCALID_BOY, PetalburgCity_Gym_Movement_NormanChallenger_BoyLeaveGym
	waitmovement LOCALID_BOY
	playse SE_EXIT
	removeobject LOCALID_BOY
	delay 16
	msgbox PetalburgCity_Gym_EventScript_NormanChallenger_Text_4
	closemessage
	applymovement OBJ_EVENT_ID_CAMERA, PetalburgCity_Gym_Movement_NormanChallenger_CameraPanDown
	waitmovement OBJ_EVENT_ID_CAMERA
	special RemoveCameraObject
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_NormanChallenger_PlayerGotoNorman
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox PetalburgCity_Gym_EventScript_NormanChallenger_Text_5
	closemessage
	delay 16
	setvar VAR_PETALBURG_CITY_STATE_2, 1
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
	end


PetalburgCity_Gym_Movement_NormanChallenger_CameraPanUp:
	delay_16
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

PetalburgCity_Gym_Movement_NormanChallenger_CameraPanDown:
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

PetalburgCity_Gym_Movement_NormanChallenger_BoyLeaveGym:
	walk_down
	walk_right
	walk_down
	walk_down
	walk_in_place_down
	set_invisible
	step_end

PetalburgCity_Gym_Movement_NormanChallenger_PlayerGotoNorman:
	walk_up
	walk_up
	walk_up
	step_end

PetalburgCity_Gym_EventScript_NormanTrigger1::
	setvar VAR_TEMP_0, 1
	goto PetalburgCity_Gym_EventScript_NormanInit
	return


PetalburgCity_Gym_EventScript_NormanTrigger2::
	setvar VAR_TEMP_0, 2
	goto PetalburgCity_Gym_EventScript_NormanInit
	return


PetalburgCity_Gym_EventScript_NormanTrigger3::
	setvar VAR_TEMP_0, 3
	goto PetalburgCity_Gym_EventScript_NormanInit
	return


PetalburgCity_Gym_EventScript_NormanInit::
	lock
	fadescreen FADE_TO_BLACK
	switch VAR_TEMP_0
	case 1, PetalburgCity_Gym_EventScript_NormanInit_3
	case 3, PetalburgCity_Gym_EventScript_NormanInit_4
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
PetalburgCity_Gym_EventScript_NormanInit_1:
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement OBJ_EVENT_ID_PLAYER
	delay 64
	fadescreen FADE_FROM_BLACK
	delay 32
	msgbox PetalburgCity_Gym_EventScript_NormanInit_Text_0
	closemessage
	delay 32
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_NORMAN
	delay 16
	setvar VAR_PETALBURG_CITY_STATE_2, 4
	delay 16
	goto PetalburgCity_Gym_EventScript_NormanBattle
	release
	end

PetalburgCity_Gym_EventScript_NormanInit_3:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	goto PetalburgCity_Gym_EventScript_NormanInit_1

PetalburgCity_Gym_EventScript_NormanInit_4:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	goto PetalburgCity_Gym_EventScript_NormanInit_1


PetalburgCity_Gym_EventScript_NormanChallenger_Text_0:
	.string "{COLOR RED}Norman{COLOR DARK_GRAY}: Not bad…\nIt was a good battle.$"

PetalburgCity_Gym_EventScript_NormanChallenger_Text_1:
	.string "Th-thank you, sir!$"

PetalburgCity_Gym_EventScript_NormanChallenger_Text_2:
	.string "{COLOR RED}Norman{COLOR DARK_GRAY}: Come back and challenge me\nagain anytime.\pI'll be looking forward to seeing you\nand your Pokémon again when you're\la bit stronger.$"

PetalburgCity_Gym_EventScript_NormanChallenger_Text_3:
	.string "Yes, sir!\nThank you, sir!\pI'm gonna do special training with my\nPokémon.\lThen I'll challenge this Gym again!\pThank you for the battle, Mr. Norman!$"

PetalburgCity_Gym_EventScript_NormanChallenger_Text_4:
	.string "{COLOR RED}Dad{COLOR DARK_GRAY}: Hm?$"

PetalburgCity_Gym_EventScript_NormanChallenger_Text_5:
	.string "Why if it isn't {PLAYER}!\pSo you've finished moving in?\pI see…\pWell…\pYou know, I sure was surprised that\nyou managed to get here by yourself.\pAh…\nI see.\pYou're making a good start on your\nteam!\pMm-hmm! Then I guess you're going to\nbecome a Trainer like me, {PLAYER}?\pNow that's something to look forward\nto!$"

PetalburgCity_Gym_EventScript_NormanInit_Text_0:
	.string "{COLOR RED}Dad{COLOR DARK_GRAY}: Hm…\nSo you did get four Gym Badges.\pThen, as I promised, we will have a\nPokémon battle.$"
