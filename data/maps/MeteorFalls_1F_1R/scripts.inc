.set LOCALID_TABITHA, 5
.set LOCALID_MAGMA_GRUNT_2, 6
.set LOCALID_ARCHIE, 7
.set LOCALID_AQUA_GRUNT_1, 8
.set LOCALID_AQUA_GRUNT_2, 9

MeteorFalls_1F_1R_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, MeteorFalls_1F_1R_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, MeteorFalls_1F_1R_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, MeteorFalls_1F_1R_OnResume
	.byte 0

MeteorFalls_1F_1R_OnLoad::
	call_if_set FLAG_SYS_GAME_CLEAR, MeteorFalls_1F_1R_EventScript_OpenStevensCave
	end

MeteorFalls_1F_1R_EventScript_OpenStevensCave::
	setmetatile 4, 1, METATILE_MeteorFalls_CaveEntrance_Top, TRUE
	setmetatile 3, 2, METATILE_MeteorFalls_CaveEntrance_Left, TRUE
	setmetatile 4, 2, METATILE_MeteorFalls_CaveEntrance_Bottom, FALSE
	setmetatile 5, 2, METATILE_MeteorFalls_CaveEntrance_Right, TRUE
	return

MeteorFalls_1F_1R_EventScript_ProfCozmo::
	lock
	faceplayer
	goto_if_set FLAG_MET_PROF_COZMO, MeteorFalls_1F_1R_EventScript_MetCozmo
	setflag FLAG_MET_PROF_COZMO
	msgbox MeteorFalls_1F_1R_Text_MeetProfCozmo, MSGBOX_DEFAULT
	release
	end

MeteorFalls_1F_1R_EventScript_MetCozmo::
	msgbox MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney, MSGBOX_DEFAULT
	release
	end

MeteorFalls_1F_1R_Text_MeetProfCozmo:
	.string "I… I'm Cozmo…\n"
	.string "I'm a Professor…\p"
	.string "Team Magma asked me to guide them\n"
	.string "to Meteor Falls…\p"
	.string "But they tricked me.\n"
	.string "They even took my Meteorite away…\p"
	.string "And then another similar bunch,\n"
	.string "Team Aqua showed up.\p"
	.string "After that…\n"
	.string "I don't understand any of it.\p"
	.string "But that Team Magma…\p"
	.string "What are they going to do with that\n"
	.string "Meteorite at Mt. Chimney?$"

MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney:
	.string "Prof. Cozmo: But that Team Magma…\p"
	.string "What are they going to do with that\n"
	.string "Meteorite at Mt. Chimney?$"

MeteorFalls_1F_1R_OnTransition::
	call Common_EventScript_SetupRivalGfxId
	compare VAR_METEOR_FALLS_STATE, 1
	goto_if_eq MeteorFalls_1F_1R_OnTransition_2
MeteorFalls_1F_1R_OnTransition_1:
	end

MeteorFalls_1F_1R_OnTransition_2:
	call MeteorFalls_1F_1R_EventScript_MagmaFacingRight
	goto MeteorFalls_1F_1R_OnTransition_1


MeteorFalls_1F_1R_OnResume::
	compare VAR_METEOR_FALLS_STATE, 1
	goto_if_eq MeteorFalls_1F_1R_OnResume_2
MeteorFalls_1F_1R_OnResume_1:
	end

MeteorFalls_1F_1R_OnResume_2:
	call MeteorFalls_1F_1R_EventScript_MagmaFacingRight
	goto MeteorFalls_1F_1R_OnResume_1


MeteorFalls_1F_1R_EventScript_MagmaFacingRight::
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
	setobjectmovementtype LOCALID_MAGMA_GRUNT_2, MOVEMENT_TYPE_FACE_RIGHT
	return


MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteSceneTrigger1::
	setvar VAR_TEMP_0, 1
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene
	return


MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteSceneTrigger2::
	setvar VAR_TEMP_0, 2
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene
	return


MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene::
	lock
	delay 8
	compare VAR_METEOR_FALLS_STATE, 1
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_2
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_10
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_1
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_9:
	closemessage
	applymovement 5, Common_Movement_WalkInPlaceRight
	delay 8
	applymovement LOCALID_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceRight
	waitmovement LOCALID_MAGMA_GRUNT_2
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_2
	closemessage
	delay 8
	playse SE_PIN
	applymovement 11, Common_Movement_ExclamationMark
	delay 8
	switch VAR_TEMP_0
	case 1, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_19
	case 2, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_20
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_17:
	waitmovement 11
	setvar VAR_METEOR_FALLS_STATE, 1
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_26
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_6, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_37
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_8
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_25:
	closemessage
	setvar VAR_TEMP_1, 1
	call MeteorFalls_1F_1R_EventScript_DoubleBattle
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_1:
	delay 16
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_9
	closemessage
	applymovement 11, Common_Movement_WalkInPlaceDown
	waitmovement 11
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_6
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_11
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_5:
	closemessage
	applymovement 11, Common_Movement_WalkInPlaceLeft
	waitmovement 11
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_12
	closemessage
	delay 16
	fadenewbgm MUS_DUMMY
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_13
	closemessage
	delay 8
	applymovement 11, MeteorFalls_1F_1R_Movement_RivalLookAround
	waitmovement 11
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_14
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_15
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_13:
	closemessage
	delay 8
	playse SE_PIN
	applymovement 5, Common_Movement_ExclamationMark
	applymovement LOCALID_MAGMA_GRUNT_2, Common_Movement_QuestionMark
	applymovement 10, Common_Movement_QuestionMark
	applymovement 11, Common_Movement_QuestionMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement OBJ_EVENT_ID_PLAYER
	waitse
	applymovement 5, Common_Movement_WalkInPlaceLeft
	applymovement LOCALID_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceLeft
	delay 8
	applymovement 10, Common_Movement_WalkInPlaceLeft
	waitmovement 10
	playbgm MUS_ENCOUNTER_AQUA, FALSE
	special SpawnCameraObject
	addobject LOCALID_ARCHIE
	addobject LOCALID_AQUA_GRUNT_1
	addobject LOCALID_AQUA_GRUNT_2
	applymovement LOCALID_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1GotoScene
	applymovement LOCALID_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieGotoScene
	applymovement LOCALID_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2GotoScene
	applymovement OBJ_EVENT_ID_CAMERA, MeteorFalls_1F_1R_Movement_CameraInMiddleOfScene
	waitmovement LOCALID_AQUA_GRUNT_2
	delay 16
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_16
	closemessage
	applymovement 5, Common_Movement_WalkInPlaceDown
	waitmovement 5
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_17
	closemessage
	applymovement LOCALID_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceRight
	waitmovement LOCALID_MAGMA_GRUNT_2
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_18
	closemessage
	applymovement LOCALID_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceUp
	delay 8
	applymovement 10, Common_Movement_WalkInPlaceDown
	waitmovement 10
	delay 16
	playse SE_PIN
	applymovement 10, Common_Movement_ExclamationMark
	waitmovement 10
	applymovement 10, MeteorFalls_1F_1R_Movement_CozmoPushedBack
	waitmovement 10
	waitse
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_19
	closemessage
	applymovement LOCALID_MAGMA_GRUNT_2, Common_Movement_WalkUp
	waitmovement LOCALID_MAGMA_GRUNT_2
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_20
	closemessage
	applymovement 10, MeteorFalls_1F_1R_Movement_CozmoThowMeteorite
	waitmovement 10
	playse SE_LEDGE
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_21
	closemessage
	delay 8
	playse SE_PIN
	applymovement 11, Common_Movement_ExclamationMark
	waitmovement 11
	waitse
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_22
	closemessage
	playse SE_LEDGE
	applymovement 11, MeteorFalls_1F_1R_Movement_RivalGotoCozmo
	applymovement 10, MeteorFalls_1F_1R_Movement_CozmoSpin
	applymovement LOCALID_MAGMA_GRUNT_2, MeteorFalls_1F_1R_Movement_StealMeteorite
	waitmovement LOCALID_MAGMA_GRUNT_2
	delay 16
	applymovement 5, Common_Movement_WalkInPlaceLeft
	delay 8
	applymovement 11, Common_Movement_WalkInPlaceDown
	waitmovement 11
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_23
	closemessage
	applymovement 5, MeteorFalls_1F_1R_Movement_TabithaExit
	applymovement LOCALID_MAGMA_GRUNT_2, MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit
	applymovement OBJ_EVENT_ID_PLAYER, MeteorFalls_1F_1R_Movement_PlayerWatchTeamExit
	waitmovement LOCALID_MAGMA_GRUNT_2
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_24
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_25
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_26
	closemessage
	delay 8
	applymovement LOCALID_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieApproachPlayer
	applymovement LOCALID_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachPlayer
	applymovement LOCALID_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachPlayer
	applymovement OBJ_EVENT_ID_PLAYER, MeteorFalls_1F_1R_Movement_PlayerTurnToAqua
	applymovement OBJ_EVENT_ID_CAMERA, MeteorFalls_1F_1R_Movement_CameraBackToPlayer
	waitmovement LOCALID_AQUA_GRUNT_2
	special RemoveCameraObject
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_27
	closemessage
	delay 8
	applymovement LOCALID_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieExit
	applymovement LOCALID_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1Exit
	applymovement LOCALID_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2Exit
	applymovement OBJ_EVENT_ID_PLAYER, MeteorFalls_1F_1R_Movement_PlayerWatchTeamExit
	waitmovement LOCALID_AQUA_GRUNT_2
	removeobject LOCALID_ARCHIE
	removeobject LOCALID_AQUA_GRUNT_1
	removeobject LOCALID_AQUA_GRUNT_2
	fadedefaultbgm
	delay 16
	applymovement 11, MeteorFalls_1F_1R_Movement_RivalGotoPlayer
	waitmovement 11
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_22
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_29
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_21:
	closemessage
	applymovement 11, Common_Movement_WalkInPlaceLeft
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	waitmovement OBJ_EVENT_ID_PLAYER
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_30
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_31
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_29:
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_32
	closemessage
	applymovement 11, MeteorFalls_1F_1R_Movement_RivalGoCheckCozmo
	applymovement OBJ_EVENT_ID_PLAYER, MeteorFalls_1F_1R_Movement_PlayerGoCheckCozmo
	waitmovement OBJ_EVENT_ID_PLAYER
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_40
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_34
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_39:
	closemessage
	applymovement 11, Common_Movement_WalkInPlaceLeft
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_35
	closemessage
	applymovement 11, Common_Movement_WalkInPlaceUp
	waitmovement 11
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_36
	closemessage
	delay 8
	setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
	setflag FLAG_MET_ARCHIE_METEOR_FALLS
	setflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
	clearflag FLAG_HIDE_COZMOS_HOUSE_RIVAL
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
	setvar VAR_METEOR_FALLS_STATE, 2
	setvar VAR_FALLARBOR_TOWN_STATE, 3
	fadescreen FADE_TO_BLACK
	setflag FLAG_REMOVE_WARP_FADE
	fadenewbgm MUS_DUMMY
	delay 128
	warp MAP_FALLARBOR_TOWN_COZMOS_HOUSE, 4, 8
	waitstate
	release
	end

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_2:
	setvar VAR_TEMP_1, 2
	call MeteorFalls_1F_1R_EventScript_DoubleBattle
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_1

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_6:
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_10
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_5

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_10:
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_0
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_9

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_14:
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_14
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_13

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_19:
	applymovement 11, Common_Movement_WalkInPlaceRight
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_17

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_20:
	applymovement 11, Common_Movement_WalkInPlaceDown
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_17

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_22:
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_28
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_21

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_26:
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_34
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_5
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_25

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_30:
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_30
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_29

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_34:
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_4
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	delay 8
	applymovement 11, Common_Movement_WalkInPlaceLeft
	waitmovement 11
	release
	end

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_37:
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_7
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	delay 8
	applymovement 11, Common_Movement_WalkInPlaceLeft
	waitmovement 11
	release
	end

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_40:
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_33
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_39


MeteorFalls_1F_1R_Movement_RivalLookAround:
	walk_in_place_up
	delay_16
	walk_in_place_down
	delay_16
	walk_in_place_left
	delay_16
	step_end

MeteorFalls_1F_1R_Movement_AquaGrunt1GotoScene:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_right
	step_end

MeteorFalls_1F_1R_Movement_ArchieGotoScene:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_in_place_right
	step_end

MeteorFalls_1F_1R_Movement_AquaGrunt2GotoScene:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_in_place_right
	step_end

MeteorFalls_1F_1R_Movement_CozmoPushedBack:
	lock_facing_direction
	walk_up
	unlock_facing_direction
	step_end

MeteorFalls_1F_1R_Movement_CozmoThowMeteorite:
	jump_in_place_up
	step_end

MeteorFalls_1F_1R_Movement_RivalGotoCozmo:
	walk_up
	walk_left
	walk_left
	step_end

MeteorFalls_1F_1R_Movement_CozmoSpin:
	delay_16
	walk_in_place_faster_right
	walk_in_place_faster_up
	walk_in_place_faster_left
	walk_in_place_faster_down
	step_end

MeteorFalls_1F_1R_Movement_StealMeteorite:
	walk_in_place_up
	delay_16
	delay_16
	walk_down
	walk_right
	walk_in_place_left
	step_end

MeteorFalls_1F_1R_Movement_TabithaExit:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit:
	walk_right
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MeteorFalls_1F_1R_Movement_PlayerWatchTeamExit:
	delay_16
	delay_16
	walk_in_place_up
	delay_16
	walk_in_place_right
	step_end

MeteorFalls_1F_1R_Movement_ArchieApproachPlayer:
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	step_end

MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachPlayer:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachPlayer:
	delay_16
	walk_right
	walk_right
	delay_16
	walk_right
	step_end

MeteorFalls_1F_1R_Movement_PlayerTurnToAqua:
	delay_16
	delay_16
	delay_16
	walk_in_place_left
	step_end

MeteorFalls_1F_1R_Movement_ArchieExit:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MeteorFalls_1F_1R_Movement_AquaGrunt1Exit:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MeteorFalls_1F_1R_Movement_AquaGrunt2Exit:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MeteorFalls_1F_1R_Movement_RivalGotoPlayer:
	walk_down
	walk_right
	step_end

MeteorFalls_1F_1R_Movement_RivalGoCheckCozmo:
	delay_16
	walk_left
	walk_in_place_up
	step_end

MeteorFalls_1F_1R_Movement_PlayerGoCheckCozmo:
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

MeteorFalls_1F_1R_EventScript_DoubleBattle::
	compare VAR_TEMP_1, 2
	goto_if_eq MeteorFalls_1F_1R_EventScript_DoubleBattle_2
MeteorFalls_1F_1R_EventScript_DoubleBattle_1:
	applymovement 11, Common_Movement_WalkInPlaceLeft
	switch VAR_TEMP_0
	case 1, MeteorFalls_1F_1R_EventScript_DoubleBattle_6
	case 2, MeteorFalls_1F_1R_EventScript_DoubleBattle_7
MeteorFalls_1F_1R_EventScript_DoubleBattle_4:
	waitmovement OBJ_EVENT_ID_PLAYER
	delay 8
	playse SE_PIN
	applymovement 5, Common_Movement_QuestionMark
	waitse
	waitmovement 5
	msgbox MeteorFalls_1F_1R_EventScript_DoubleBattle_Text_2
	delay 8
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_1F_1R_EventScript_DoubleBattle_13
	msgbox MeteorFalls_1F_1R_EventScript_DoubleBattle_Text_4
MeteorFalls_1F_1R_EventScript_DoubleBattle_12:
	closemessage
	delay 8
	call MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle
	return

MeteorFalls_1F_1R_EventScript_DoubleBattle_2:
	switch VAR_TEMP_0
	case 1, MeteorFalls_1F_1R_EventScript_DoubleBattle_10
	case 2, MeteorFalls_1F_1R_EventScript_DoubleBattle_11
MeteorFalls_1F_1R_EventScript_DoubleBattle_8:
	waitmovement 11
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_1F_1R_EventScript_DoubleBattle_17
	msgbox MeteorFalls_1F_1R_EventScript_DoubleBattle_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MeteorFalls_1F_1R_EventScript_DoubleBattle_24
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_8
MeteorFalls_1F_1R_EventScript_DoubleBattle_16:
	closemessage
	goto MeteorFalls_1F_1R_EventScript_DoubleBattle_1

MeteorFalls_1F_1R_EventScript_DoubleBattle_6:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	goto MeteorFalls_1F_1R_EventScript_DoubleBattle_4

MeteorFalls_1F_1R_EventScript_DoubleBattle_7:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	goto MeteorFalls_1F_1R_EventScript_DoubleBattle_4

MeteorFalls_1F_1R_EventScript_DoubleBattle_10:
	applymovement 11, Common_Movement_WalkInPlaceRight
	goto MeteorFalls_1F_1R_EventScript_DoubleBattle_8

MeteorFalls_1F_1R_EventScript_DoubleBattle_11:
	applymovement 11, Common_Movement_WalkInPlaceDown
	goto MeteorFalls_1F_1R_EventScript_DoubleBattle_8

MeteorFalls_1F_1R_EventScript_DoubleBattle_13:
	msgbox MeteorFalls_1F_1R_EventScript_DoubleBattle_Text_3
	goto MeteorFalls_1F_1R_EventScript_DoubleBattle_12

MeteorFalls_1F_1R_EventScript_DoubleBattle_17:
	msgbox MeteorFalls_1F_1R_EventScript_DoubleBattle_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MeteorFalls_1F_1R_EventScript_DoubleBattle_21
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_5
	goto MeteorFalls_1F_1R_EventScript_DoubleBattle_16

MeteorFalls_1F_1R_EventScript_DoubleBattle_21:
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_4
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	applymovement 11, Common_Movement_WalkInPlaceLeft
	waitmovement OBJ_EVENT_ID_PLAYER
	release
	end

MeteorFalls_1F_1R_EventScript_DoubleBattle_24:
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_7
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	applymovement 11, Common_Movement_WalkInPlaceLeft
	waitmovement OBJ_EVENT_ID_PLAYER
	release
	end


MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle::
	special HealPlayerParty
	choose_mons
	compare VAR_RESULT, 0
	goto_if_eq MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_2
MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_1:
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_5
	switch VAR_STARTER_MON
	case 0, MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_16
	case 1, MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_17
	case 2, MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_18
MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_4:
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_9
	special HealPlayerParty
	return

MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_2:
	goto MeteorFalls_1F_1R_EventScript_CancelledMultiBattle
	goto MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_1

MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_5:
	switch VAR_STARTER_MON
	case 0, MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_12
	case 1, MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_13
	case 2, MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_14
	goto MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_4

MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_9:
	fadescreen FADE_TO_BLACK
	special Script_FadeOutMapMusic
	waitstate
	special SetCB2WhiteOut
	waitstate
	end

MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_12:
	multi_2_vs_2 TRAINER_GRUNT_MAGMA_METEOR_FALLS, MeteorFalls_1F_1R_Text_MagmaGruntDefeat, TRAINER_TABITHA_METEOR_FALLS, MeteorFalls_1F_1R_Text_TabithaDefeat, TRAINER_MAY_METEOR_FALLS_TORCHIC, TRAINER_BACK_PIC_MAY
	goto MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_4

MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_13:
	multi_2_vs_2 TRAINER_GRUNT_MAGMA_METEOR_FALLS, MeteorFalls_1F_1R_Text_MagmaGruntDefeat, TRAINER_TABITHA_METEOR_FALLS, MeteorFalls_1F_1R_Text_TabithaDefeat, TRAINER_MAY_METEOR_FALLS_MUDKIP, TRAINER_BACK_PIC_MAY
	goto MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_4

MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_14:
	multi_2_vs_2 TRAINER_GRUNT_MAGMA_METEOR_FALLS, MeteorFalls_1F_1R_Text_MagmaGruntDefeat, TRAINER_TABITHA_METEOR_FALLS, MeteorFalls_1F_1R_Text_TabithaDefeat, TRAINER_MAY_METEOR_FALLS_TREECKO, TRAINER_BACK_PIC_MAY
	goto MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_4

MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_16:
	multi_2_vs_2 TRAINER_GRUNT_MAGMA_METEOR_FALLS, MeteorFalls_1F_1R_Text_MagmaGruntDefeat, TRAINER_TABITHA_METEOR_FALLS, MeteorFalls_1F_1R_Text_TabithaDefeat, TRAINER_BRENDAN_METEOR_FALLS_TORCHIC, TRAINER_BACK_PIC_BRENDAN
	goto MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_4

MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_17:
	multi_2_vs_2 TRAINER_GRUNT_MAGMA_METEOR_FALLS, MeteorFalls_1F_1R_Text_MagmaGruntDefeat, TRAINER_TABITHA_METEOR_FALLS, MeteorFalls_1F_1R_Text_TabithaDefeat, TRAINER_BRENDAN_METEOR_FALLS_MUDKIP, TRAINER_BACK_PIC_BRENDAN
	goto MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_4

MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_18:
	multi_2_vs_2 TRAINER_GRUNT_MAGMA_METEOR_FALLS, MeteorFalls_1F_1R_Text_MagmaGruntDefeat, TRAINER_TABITHA_METEOR_FALLS, MeteorFalls_1F_1R_Text_TabithaDefeat, TRAINER_BRENDAN_METEOR_FALLS_TREECKO, TRAINER_BACK_PIC_BRENDAN
	goto MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_4


MeteorFalls_1F_1R_EventScript_CancelledMultiBattle::
	applymovement 11, Common_Movement_WalkInPlaceDown
	waitmovement 11
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_1F_1R_EventScript_CancelledMultiBattle_2
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_7
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	applymovement 11, Common_Movement_WalkInPlaceLeft
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement OBJ_EVENT_ID_PLAYER
MeteorFalls_1F_1R_EventScript_CancelledMultiBattle_1:
	release
	end

MeteorFalls_1F_1R_EventScript_CancelledMultiBattle_2:
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_4
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	applymovement 11, Common_Movement_WalkInPlaceLeft
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	waitmovement OBJ_EVENT_ID_PLAYER
	goto MeteorFalls_1F_1R_EventScript_CancelledMultiBattle_1


MeteorFalls_1F_1R_Movement_CameraInMiddleOfScene:
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_left
	walk_left
	step_end

MeteorFalls_1F_1R_Movement_CameraBackToPlayer:
	delay_16
	delay_16
	delay_16
	walk_right
	walk_right
	step_end

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_0:
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Give it up, you bozos!\nLet the professor go!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_1:
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: Hey! You jerks!\nLet Professor Cozmo go!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_2:
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Hyuh?\pWhat have we here?\nWhy has this child suddenly appeared?$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_3:
	.string "{COLOR RED}May{COLOR DARK_GRAY}: {PLAYER}!\nYou came!\pWe've got to save Professor Cozmo from\nthese people!\pThere are two of them…\nAnd two of us…\p{PLAYER}, please!\nBattle together with me!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_4:
	.string "What!?\pAh!\nI get it!\pYou've got to get ready first?\nI'll hold them here, so hurry!!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_5:
	.string "Thanks a mill!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_6:
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: {PLAYER}!\nYou finally made it, huh!\pWe've gotta protect the professor from\nthese lunatics or else!\pThere's two of them…\nAnd two of us, huh?\pSorry to ask, {PLAYER}, but…\nBattle alongside me!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_7:
	.string "So even you get nervous, huh…\pI get it.\nI'll wait till you get ready.$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_8:
	.string "Thanks, pal!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_9:
	.string "{COLOR RED}Tabitha{COLOR DARK_GRAY}: Hyuhn!?\nAn unexpected development!?$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_10:
	.string "{COLOR RED}May{COLOR DARK_GRAY}: We did it, {PLAYER}!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_11:
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: All right!\nWe beat 'em!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_12:
	.string "{COLOR RED}Tabitha{COLOR DARK_GRAY}: You children!\nI would like you stay out of my way!\pTeam Magma's scientific prowess,\nMt. Chimney's energy…\pAnd the hidden power of the meteorite!\nIf we combine them all,\la super-ancient Pokémon…$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_13:
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Bwahahahahahaha!\pYou lost to this scamp?\nWhat a pathetic bunch!\pYou lazy stooges will be the downfall\nof Team Magma!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_14:
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Wh-who's there!?$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_15:
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: Who's that!?$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_16:
	.string "{COLOR RED}Tabitha{COLOR DARK_GRAY}: Hyahya! Even Team Aqua is\nmaking an appearance!\pThe odds do not appear to be in my\nfavor…$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_17:
	.string "You there!\nI'll have the meteorite now!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_18:
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: Yes, sir!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_19:
	.string "{COLOR RED}Cozmo{COLOR DARK_GRAY}: Wha-wha-wha-what!?$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_20:
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: Come now!\nHand over the meteorite!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_21:
	.string "{COLOR RED}Cozmo{COLOR DARK_GRAY}: Augh!?$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_22:
	.string "{COLOR RED}{RIVAL}{COLOR DARK_GRAY}: Professor!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_23:
	.string "{COLOR RED}Tabitha{COLOR DARK_GRAY}: Ahyahya! The Meteorite is in\nthe palm of my hand!\pWell, well, well…\nAdios to each and every one of you!\pAt long last I'm off to {COLOR BLUE}Mt. Chimney{COLOR DARK_GRAY}!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_24:
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: Tch!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_25:
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: Archie!\nWe will go after those monsters!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_26:
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: That's right!\nWe're not letting them get away!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_27:
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: Oh? What's this?\pHaven't I seen you before?\nAt Slateport Museum?\pAh, so your name is {PLAYER}.\pLooks like you were getting into it\nwith Team Magma there, 'less my eyes\ldeceive me.\pIt's not like I'm in a position to argue\nif that's what you're up to, hey?\pBut I'll tell you this much, again…\pIf you next get in the way of Team\nAqua, you won't get off so lightly.\pSo steer clear and keep your nose\nclean, scamp!\pI imagine I'll be seeing you again!\nWaha! Bwahahahahah!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_28:
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Oh bother!\pI have no idea what's going on anymore\nwith all these people!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_29:
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: Oh man…\nWhat's with those lunatics?$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_30:
	.string "Never mind those nuts!\nProfessor, you doing OK!?$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_31:
	.string "Forget those guys!\nProfessor!\pHey! Professor Cozmo!\nHang in there, OK?$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_32:
	.string "{COLOR RED}Cozmo{COLOR DARK_GRAY}: B-but…they…\nI…only…$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_33:
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Looks like he's still pretty out of\nit…$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_34:
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: I think he's still pretty out\nof it…$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_35:
	.string "{PLAYER}…\pNever mind what's happened!\nI've got to get the professor back to\lhis lab in Fallarbor!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_36:
	.string "OK, Profesor…\nEasy now…$"

MeteorFalls_1F_1R_EventScript_DoubleBattle_Text_0:
	.string "{COLOR RED}May{COLOR DARK_GRAY}: There are two of them…\nAnd two of us…\p{PLAYER}, please!\nBattle together with me!$"

MeteorFalls_1F_1R_EventScript_DoubleBattle_Text_1:
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: There's two of them…\nAnd two of us, huh?\pSorry to ask, {PLAYER}, but…\nBattle alongside me!$"

MeteorFalls_1F_1R_EventScript_DoubleBattle_Text_2:
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Ahyahyahya!\nIsn't this amusing!?\pIs it really your intention to oppose\nme, a Team Magma Admin, just the two\lof you?\pMmm…\nVery well then!\pI'll show you how terrifying adults can\nbe! Ahyahyahya!\pI'm going to give you some very\nthorough coaching!$"

MeteorFalls_1F_1R_EventScript_DoubleBattle_Text_3:
	.string "{COLOR RED}May{COLOR DARK_GRAY}: This'll be my first time battling\nbeside you, {PLAYER}!\pI've got to do my best!$"

MeteorFalls_1F_1R_EventScript_DoubleBattle_Text_4:
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: All right!\nLet's do this!$"

MeteorFalls_1F_1R_Text_TabithaDefeat::
	.string "Hyuhn?$"

MeteorFalls_1F_1R_Text_MagmaGruntDefeat::
	.string "S-so strong.$"
