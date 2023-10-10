.set LOCALID_LITTLE_BOY, 7
.set LOCALID_LITTLE_GIRL, 8
.set LOCALID_DEVON_EMPLOYEE, 9
.set LOCALID_GRUNT, 10
.set LOCALID_RIVAL, 14
.set LOCALID_SCIENTIST, 15

RustboroCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_OnFrame
	.byte 0

RustboroCity_OnTransition:
	setflag FLAG_VISITED_RUSTBORO_CITY
	call Common_EventScript_SetupRivalGfxId
	call_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_HideMapNamePopup
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	goto_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_PositionScientistForExit
	end

RustboroCity_EventScript_PositionScientistForExit::
	goto_if_eq VAR_TEMP_0, 11, RustboroCity_EventScript_PositionScientistLeftExit
	setobjectxyperm LOCALID_SCIENTIST, 12, 25
	end

RustboroCity_EventScript_PositionScientistLeftExit::
	setobjectxyperm LOCALID_SCIENTIST, 11, 25
	end

RustboroCity_EventScript_HideMapNamePopup::
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return

RustboroCity_OnFrame:
	map_script_2 VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_ScientistAddMatchCall
	.2byte 0

RustboroCity_EventScript_ScientistAddMatchCall::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_PlayerWalkDown
	waitmovement 0
	delay 10
	playse SE_EXIT
	addobject LOCALID_SCIENTIST
	delay 10
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistApproachPlayer
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_SCIENTIST, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_SCIENTIST, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistWalkInPlaceDown
	waitmovement 0
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_HAS_MATCH_CALL
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	playse SE_CLICK
	delay 10
	playse SE_CLICK
	delay 10
	playse SE_CLICK
	delay 10
	playse SE_CLICK
	delay 20
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone, MSGBOX_DEFAULT
	closemessage
	delay 20
	goto RustboroCity_EventScript_MatchCallTutorial

RustboroCity_EventScript_PleaseSelectPokenav::
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
	closemessage
	delay 10
	goto RustboroCity_EventScript_MatchCallTutorial

RustboroCity_EventScript_MatchCallTutorial::
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
	special ScriptMenu_CreateStartMenuForPokenavTutorial
	waitstate
	switch VAR_RESULT
	case 0, RustboroCity_EventScript_PleaseSelectPokenav
	case 1, RustboroCity_EventScript_PleaseSelectPokenav
	case 2, RustboroCity_EventScript_PleaseSelectPokenav
	case 4, RustboroCity_EventScript_PleaseSelectPokenav
	case 5, RustboroCity_EventScript_PleaseSelectPokenav
	case 6, RustboroCity_EventScript_PleaseSelectPokenav
	case 7, RustboroCity_EventScript_PleaseSelectPokenav
	case MULTI_B_PRESSED, RustboroCity_EventScript_PleaseSelectPokenav
	special OpenPokenavForTutorial
	waitstate
	delay 20
	msgbox RustboroCity_Text_IdBetterGetBackToWork, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistLeave
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_SCIENTIST
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
	setvar VAR_RUSTBORO_CITY_STATE, 7
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	releaseall
	end

RustboroCity_Movement_ScientistWalkInPlaceDown:
	walk_in_place_down
	step_end

RustboroCity_Movement_PlayerWalkDown:
	walk_down
	step_end

RustboroCity_Movement_ScientistApproachPlayer:
	walk_down
	delay_16
	step_end

@ Unused
RustboroCity_Movement_ScientistWalkAroundPlayer:
	delay_16
	walk_left
	walk_down
	walk_down
	walk_right
	walk_in_place_faster_up
	delay_16
	step_end

RustboroCity_Movement_ScientistLeave:
	walk_up
	step_end

RustboroCity_EventScript_FatMan::
	lock
	faceplayer
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
	release
	end

RustboroCity_EventScript_FatManSawGrunt::
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
	release
	end

RustboroCity_EventScript_DevonEmployee2::
	lock
	faceplayer
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
	release
	end

RustboroCity_EventScript_Woman::
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
	end

RustboroCity_EventScript_Man1::
	lock
	faceplayer
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
	release
	end

RustboroCity_EventScript_Man1HaveBadge::
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
	release
	end

RustboroCity_EventScript_Boy2::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
	release
	end

RustboroCity_EventScript_Boy2BrineyLeftTunnel::
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
	release
	end

RustboroCity_EventScript_Twin::
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
	end

RustboroCity_EventScript_NinjaBoy::
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
	end

RustboroCity_EventScript_TunnelSign::
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
	end

RustboroCity_EventScript_DevonCorpSign::
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
	end

RustboroCity_EventScript_GymSign::
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
	end

@ Unused
RustboroCity_EventScript_DevonCorpBranchOfficeSign::
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
	end

RustboroCity_EventScript_CitySign::
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
	end

RustboroCity_EventScript_TrainersSchoolSign::
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
	end

RustboroCity_EventScript_CuttersHouseSign::
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
	end

RustboroCity_EventScript_LittleBoy::
	lock
	faceplayer
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
	applymovement LOCALID_LITTLE_BOY, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

RustboroCity_EventScript_LittleGirl::
	lock
	faceplayer
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
	applymovement LOCALID_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

RustboroCity_EventScript_Man2::
	lock
	faceplayer
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
	release
	end

RustboroCity_EventScript_StolenGoodsTrigger0::
	lockall
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 32
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
	setvar VAR_0x8004, 0
	goto RustboroCity_EventScript_StolenGoodsScene
	end

RustboroCity_EventScript_StolenGoodsTrigger1::
	lockall
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 32
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
	setvar VAR_0x8004, 1
	goto RustboroCity_EventScript_StolenGoodsScene
	end

RustboroCity_EventScript_StolenGoodsTrigger2::
	lockall
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 32
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
	setvar VAR_0x8004, 2
	goto RustboroCity_EventScript_StolenGoodsScene
	end

RustboroCity_EventScript_StolenGoodsTrigger3::
	lockall
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 32
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
	setvar VAR_0x8004, 3
	goto RustboroCity_EventScript_StolenGoodsScene
	end

RustboroCity_EventScript_StolenGoodsTrigger4::
	lockall
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 32
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
	setvar VAR_0x8004, 4
	goto RustboroCity_EventScript_StolenGoodsScene
	end

RustboroCity_EventScript_StolenGoodsScene::
	delay 16
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_AQUA, FALSE
	addobject LOCALID_GRUNT
	addobject LOCALID_DEVON_EMPLOYEE
	applymovement LOCALID_GRUNT, RustboroCity_Movement_GruntEscape
	waitmovement 0
	removeobject LOCALID_GRUNT
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
	waitmovement 0
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
	waitmovement 0
	fadedefaultbgm
	removeobject LOCALID_DEVON_EMPLOYEE
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 30, 21
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
	setflag FLAG_DEVON_GOODS_STOLEN
	setvar VAR_RUSTBORO_CITY_STATE, 2
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
	setvar VAR_ROUTE116_STATE, 1
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_2
	setflag FLAG_HIDE_ROUTE_104_PEEKO_2
	releaseall
	end

@ Unused
RustboroCity_EventScript_ShadyCharacterTookOff::
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
	return

@ Unused
RustboroCity_EventScript_YouGotItThankYou::
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
	return

@ Unknown, unused employee movements. Based on the differences in movement theyre for approaching an object (probably the player) in different positions
RustboroCity_EventScript_EmployeeApproachUp::
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachUp
	waitmovement 0
	return

@ Unused, see above
RustboroCity_EventScript_EmployeeApproachLeft::
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachLeft
	waitmovement 0
	return

@ Unused, see above
RustboroCity_EventScript_EmployeeApproachRight::
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachRight
	waitmovement 0
	return

@ Unused, see above
RustboroCity_EventScript_EmployeeApproachDown::
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachDown
	waitmovement 0
	return

@ Unused, similar movement to the above scripts
RustboroCity_EventScript_EmployeeApproachPlayerFar::
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerFar
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	return

@ Unused
RustboroCity_Movement_GruntEscapeExtended:
	walk_faster_right
	walk_faster_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

RustboroCity_Movement_GruntEscape:
	walk_faster_right
	walk_faster_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

RustboroCity_Movement_EmployeeChaseGrunt1:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_up
	step_end

RustboroCity_Movement_EmployeeChaseGrunt2:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

@ Functionally unused
RustboroCity_Movement_EmployeeApproachUp:
	walk_down
	walk_right
	walk_right
	step_end

@ Functionally unused
RustboroCity_Movement_EmployeeApproachLeft:
	walk_down
	walk_down
	walk_right
	walk_right
	step_end

@ Functionally unused
RustboroCity_Movement_EmployeeApproachRight:
	walk_down
	walk_down
	walk_right
	walk_right
	step_end

@ Functionally unused
RustboroCity_Movement_EmployeeApproachDown:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	step_end

@ Functionally unused
RustboroCity_Movement_EmployeeApproachPlayerFar:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_down
	step_end

RustboroCity_EventScript_DevonEmployee1::
	lock
	faceplayer
	delay(16)
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceRight
	waitmovement LOCALID_DEVON_EMPLOYEE
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
	release
	end

RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
	waitse
	setvar VAR_TEMP_1, 4
	goto RustboroCity_EventScript_ReturnGoods
	end

RustboroCity_EventScript_HelpGetGoodsTrigger0::
	lockall
	setvar VAR_TEMP_1, 0
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
	end

RustboroCity_EventScript_HelpGetGoodsTrigger1::
	lockall
	setvar VAR_TEMP_1, 1
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
	end

RustboroCity_EventScript_HelpGetGoodsTrigger2::
	lockall
	setvar VAR_TEMP_1, 2
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
	end

RustboroCity_EventScript_HelpGetGoodsTrigger3::
	lockall
	setvar VAR_TEMP_1, 3
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
	end

RustboroCity_EventScript_EmployeeAskToGetGoods::
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
	setvar VAR_RUSTBORO_CITY_STATE, 3
	copyobjectxytoperm LOCALID_DEVON_EMPLOYEE
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
	releaseall
	end

@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
RustboroCity_EventScript_EmployeeFacePlayerUp1::
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceUp
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement 0
	return

RustboroCity_EventScript_EmployeeFacePlayerLeft1::
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	return

RustboroCity_EventScript_EmployeeFacePlayerDown1::
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceDown
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	return

RustboroCity_EventScript_EmployeeApproachPlayerDown1::
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceDown
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	return

RustboroCity_Movement_EmployeeApproachPlayerDown:
	walk_down
	step_end

RustboroCity_EventScript_ReturnGoodsTrigger0::
	lockall
	setvar VAR_TEMP_1, 0
	goto RustboroCity_EventScript_ReturnGoods
	end

RustboroCity_EventScript_ReturnGoodsTrigger1::
	lockall
	setvar VAR_TEMP_1, 1
	goto RustboroCity_EventScript_ReturnGoods
	end

RustboroCity_EventScript_ReturnGoodsTrigger2::
	lockall
	setvar VAR_TEMP_1, 2
	goto RustboroCity_EventScript_ReturnGoods
	end

RustboroCity_EventScript_ReturnGoodsTrigger3::
	lockall
	setvar VAR_TEMP_1, 3
	goto RustboroCity_EventScript_ReturnGoods
	end

RustboroCity_EventScript_ReturnGoods::
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
	giveitem ITEM_GREAT_BALL
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_RETURNED_DEVON_GOODS
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
	setvar VAR_RUSTBORO_CITY_STATE, 5
	delay 30
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
	waitstate
	releaseall
	end

RustboroCity_EventScript_BagFull::
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
	return

RustboroCity_EventScript_EmployeeFacePlayerUp2::
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceUp
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement 0
	return

RustboroCity_EventScript_EmployeeFacePlayerLeft2::
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceRight
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	return

RustboroCity_EventScript_EmployeeFacePlayerDown2::
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceDown
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	return

RustboroCity_EventScript_EmployeeApproachPlayerDown2::
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceDown
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	return

RustboroCity_EventScript_EmployeeFacePlayerRight::
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
	waitmovement 0
	return

RustboroCity_EventScript_Rival::
	lockall
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
	waitmovement 0
	goto RustboroCity_EventScript_RivalEncounter

RustboroCity_EventScript_PlayRivalMusic::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
	return

RustboroCity_EventScript_PlayMayMusic::
	playbgm MUS_ENCOUNTER_MAY, TRUE
	return

RustboroCity_EventScript_PlayBrendanMusic::
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	return

RustboroCity_EventScript_RivalTrigger0::
	lockall
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceDown
	waitmovement 0
	delay 8
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	waitse
	call RustboroCity_EventScript_PlayRivalMusic
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	goto RustboroCity_EventScript_RivalEncounter

RustboroCity_EventScript_RivalTrigger1::
	lockall
	call RustboroCity_EventScript_PlayRivalMusic
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceDown
	waitmovement 0
	delay 8
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	waitse
	call RustboroCity_EventScript_PlayRivalMusic
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
	waitmovement 0
	goto RustboroCity_EventScript_RivalEncounter

RustboroCity_EventScript_RivalTrigger2::
	lockall
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceDown
	waitmovement 0
	delay 8
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	waitse
	call RustboroCity_EventScript_PlayRivalMusic
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
	waitmovement 0
	goto RustboroCity_EventScript_RivalEncounter

RustboroCity_EventScript_RivalTrigger3::
	lockall
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceDown
	waitmovement 0
	delay 8
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	waitse
	call RustboroCity_EventScript_PlayRivalMusic
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
	waitmovement 0
	goto RustboroCity_EventScript_RivalEncounter

RustboroCity_EventScript_RivalTrigger4::
	lockall
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceDown
	waitmovement 0
	delay 8
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	waitse
	call RustboroCity_EventScript_PlayRivalMusic
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
	waitmovement 0
	goto RustboroCity_EventScript_RivalEncounter

RustboroCity_EventScript_RivalTrigger5::
	lockall
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceDown
	waitmovement 0
	delay 8
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	waitse
	call RustboroCity_EventScript_PlayRivalMusic
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
	waitmovement 0
	goto RustboroCity_EventScript_RivalEncounter

RustboroCity_EventScript_RivalTrigger6::
	lockall
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceDown
	waitmovement 0
	delay 8
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	waitse
	call RustboroCity_EventScript_PlayRivalMusic
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
	waitmovement 0
	goto RustboroCity_EventScript_RivalEncounter

RustboroCity_EventScript_RivalTrigger7::
	lockall
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceDown
	waitmovement 0
	delay 8
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	waitse
	call RustboroCity_EventScript_PlayRivalMusic
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
	waitmovement 0
	goto RustboroCity_EventScript_RivalEncounter

RustboroCity_EventScript_RivalEncounter::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_MayEncounter
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_BrendanEncounter
	end

RustboroCity_EventScript_MayEncounter::
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayBrineyHint
	setflag FLAG_MET_RIVAL_RUSTBORO
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
	closemessage
	delay 32
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 32
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
	setvar VAR_RUSTBORO_CITY_STATE, 8
	msgbox RustboroCity_Text_MayPassedBriney, MSGBOX_DEFAULT
	call RustboroCity_EventScript_RestoreBgm
	releaseall
	end

RustboroCity_EventScript_MayBrineyHint::
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
	call RustboroCity_EventScript_RestoreBgm
	releaseall
	end

RustboroCity_EventScript_RestoreBgm::
	savebgm MUS_DUMMY
	fadedefaultbgm
	return

RustboroCity_EventScript_BrendanEncounter::
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanBrineyHint
	setflag FLAG_MET_RIVAL_RUSTBORO
	msgbox RustboroCity_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
	closemessage
	delay 32
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 32
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
	setvar VAR_RUSTBORO_CITY_STATE, 8
	msgbox RustboroCity_Text_BrendanPassedBriney, MSGBOX_DEFAULT
	call RustboroCity_EventScript_RestoreBgm
	releaseall
	end

RustboroCity_EventScript_BrendanBrineyHint::
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
	call RustboroCity_EventScript_RestoreBgm
	releaseall
	end

RustboroCity_Movement_RivalApproachPlayer0:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

RustboroCity_Movement_RivalApproachPlayer1:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

RustboroCity_Movement_RivalApproachPlayer2:
	walk_down
	walk_left
	walk_left
	walk_down
	step_end

RustboroCity_Movement_RivalApproachPlayer3:
	walk_down
	walk_left
	walk_down
	step_end

RustboroCity_Movement_RivalApproachPlayer4:
	walk_down
	walk_down
	step_end

RustboroCity_Movement_RivalApproachPlayer5:
	walk_down
	walk_right
	walk_down
	step_end

RustboroCity_Movement_RivalApproachPlayer6:
	walk_down
	walk_right
	walk_right
	walk_down
	step_end

RustboroCity_Movement_RivalApproachPlayer7:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

RustboroCity_EventScript_Boy1::
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
	end

RustboroCity_Text_WeShortenItToDevon:
	.string "The Devon Corporation…\pThat's kind of a mouthful, so we just\nsay Devon.\pThe company makes all sorts of\nconvenient products.$"

RustboroCity_Text_SneakyLookingManWentAroundCorner:
	.string "Hm? Did I see a sneaky-looking man?\nCome to think of it, yes!\pA shady-looking fellow just went around\nthe corner there.$"

RustboroCity_Text_HaveYouChallengedGym:
	.string "Have you taken on a Pokémon Gym yet?\pOnce you get a shiny Gym Badge in your\nhand, that's when you really start to\lfeel like a Trainer.$"

RustboroCity_Text_HeyThatsRustborosGymBadge:
	.string "Hey, that's Rustboro's Gym Badge!\p"
	.string "Out of all the Pokémon Gym Badges,\n"
	.string "Rustboro's is the coolest, I'd say.$"

RustboroCity_Text_YoureNewAroundHere:
	.string "Oh?\nWho might you be?\pYou're a new face around these\nparts?\pHave you just transferred into the\nPokémon Trainers' School?$"

RustboroCity_Text_GymLeaderIsntEasyWithFire:
	.string "I challenged the Gym Leader, but…\p"
	.string "It's not going to be easy winning with\n"
	.string "my Fire-type Pokémon…\p"
	.string "Fire-type Pokémon don't match up\n"
	.string "well against Rock-type Pokémon…$"

RustboroCity_Text_MrBrineyWalksInTheTunnel:
	.string "Every now and then I see that old\nsailor who lives by the sea, Mr. Briney\ltaking a stroll through the tunnel.$"

RustboroCity_Text_MrBrineyLovesPeeko:
	.string "The old sailor Mr. Briney lives in\n"
	.string "a cottage by the sea.\p"
	.string "He said he was going shopping in\n"
	.string "Slateport for his pet, Peeko.\p"
	.string "That old sea dog, he must really love\n"
	.string "that Peeko.$"

RustboroCity_Text_WowYouHavePokemon:
	.string "Oh, you are with your Pokémon!\pWhen I'm an adult, someday I'll go to\nplaces with Pokémon, too.$"

RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
	.string "So this is the\nPokémon's Trainers' School!\pIf I enroll in this school, do you think\nI'll be able to catch rare Pokémon\leasily, too?$"

RustboroCity_Text_PokemonCanChangeLookFromExp:
	.string "If a Pokémon gains experience\nthrough battle, the way it looks\lcan sometimes change!$"

RustboroCity_Text_PokemonChangeShape:
	.string "Pokémon can change the way they\nlook?\pThat could be quite a shock!$"

RustboroCity_Text_TradePokemonGrowFast:
	.string "A Pokémon you get in a trade from\nsomeone else grows faster.\pBut if you don't have enough Gym\nBadges, it may not listen to you…$"

RustboroCity_Text_OutOfTheWay:
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Out of the way! Move it!$"

RustboroCity_Text_WaitDontTakeMyGoods:
	.string "Wait! Pleeeaaase!\pDon't take those parts!$"

RustboroCity_Text_HelpMeIWasRobbed:
	.string "{COLOR RED}Researcher{COLOR DARK_GRAY}: Oh, you there!\pYou're that fantastic Trainer who\nhelped me in Petalburg Woods!\pHelp me!\nI was robbed by Team Aqua!\pI have to get the Devon Parts back!\pIf I don't…\nI'm going to be in serious trouble…$"

RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
	.string "{COLOR RED}Researcher{COLOR DARK_GRAY}: I think that shady\ncharacter took off towards the\ltunnel over there.$"

RustboroCity_Text_YouGotItThankYou:
	.string "{COLOR RED}Researcher{COLOR DARK_GRAY}: Oh!\nHow did it go?\lDid you get my Devon Parts?\pYou did!\nYou got them back!\pYou really are a great Trainer!\pI know!\pAs my thanks, I'll give you a Great Ball!$"

RustboroCity_Text_YoureLoadedWithItems:
	.string "You're loaded with items.\n"
	.string "I can't give you this Great Ball.$"

RustboroCity_Text_PleaseComeWithMe:
	.string "Oh, yes! Young Trainer!\nPlease come with me!$"

RustboroCity_Text_MayHiLetsRegister:
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Oh! Hey, {PLAYER}!\pHave you been catching lots of\nPokémon?\pI'm doing pretty good on that front,\nat least.\pI caught so many Pokémon in Petalburg\nWoods that I ran out of Poké Balls!\p…\pOh!\pYou have a Pokénav!\nAnd with a Match Call feature, too!\pLet's register each other so we can\ncontact one another anytime!$"
	
RustboroCity_Text_RegisteredMay:
	.string "Registered May\nin the Pokénav.$"

RustboroCity_Text_MayPassedBriney:
	.string "Oh yeah… And I passed by Mr. Briney\nwhen I was in Petalburg Woods.\pHmm. I guess he must have been on his\nway home to his cottage on {COLOR BLUE}Route 104{COLOR DARK_GRAY}.\p{PLAYER}, you just moved here so\nthere's no way you could know, but\lMr. Briney was once a highly\lrespected seafarer.$"

RustboroCity_Text_MayMrBrineyHint:
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Oh yeah…\nAnd I passed by Mr. Briney when I was\lin Petalburg Woods.\pHmm. I guess he must have been on his\nway home to his cottage on {COLOR BLUE}Route 104{COLOR DARK_GRAY}.\p{PLAYER}, you just moved here so\nthere's no way you could know, but\lMr. Briney was once a highly\lrespected seafarer.$"

RustboroCity_Text_BrendanHiLetsRegister:
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: Hey, {PLAYER}.\pHow's your Pokédex?\nCompleted any entries yet?\pMine pretty much rules.\pI went on a Pokémon-catching frenzy\nin Petalburg Woods until I ran out of\lPoké Balls!\p…\pOh?\nYou have a Pokénav!\pAnd a Match Call feature, too.\nCool!\pLet's register each other so we can get\nin touch anytime.$"

RustboroCity_Text_RegisteredBrendan:
	.string "Registered Brendan\nin the Pokénav.$"

RustboroCity_Text_BrendanPassedBriney:
	.string "Oh, yeah. I passed by Mr. Briney in\nPetalburg Woods.\pI bet he was on his way home to his\ncottage on {COLOR BLUE}Route 104{COLOR DARK_GRAY}.\pI guess you wouldn't know, since you\njust moved here and all, but they say\lthat old guy used to be an amazing\lsailor!$"

RustboroCity_Text_BrendanMrBrineyHint:
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: Oh, yeah. I passed by Mr.\nBriney in Petalburg Woods.\pI bet he was on his way home to his\ncottage on {COLOR BLUE}Route 104{COLOR DARK_GRAY}.\pI guess you wouldn't know, since you\njust moved here and all, but they say\lthat old guy used to be an amazing\lsailor!$"

RustboroCity_Text_TunnelNearingCompletion:
	.string "“Timesaving tunnel nearing\n"
	.string "completion!”\p"
	.string "…Is what it says on the sign, but\n"
	.string "there's also a big “X” splashed\l"
	.string "across it in red paint…$"

RustboroCity_Text_DevonCorpSign:
	.string "Devon Corporation\p"
	.string "“For all your living needs, we make\n"
	.string "it all.”$"

RustboroCity_Text_GymSign:
	.string "Rustboro City Pokémon Gym\n"
	.string "Leader: Roxanne\p"
	.string "“The Rock-loving honors student!”$"

RustboroCity_Text_DevonCorpBranchOfficeSign:
	.string "Devon Corp. Branch Office\p"
	.string "“Access limited to Devon employees\n"
	.string "and authorized personnel.”$"

RustboroCity_Text_CitySign:
	.string "Rustboro City\p"
	.string "“The city probing the integration of\n"
	.string "nature and science.”$"

RustboroCity_Text_TrainersSchoolSign:
	.string "Pokémon Trainer's School\p"
	.string "“We'll teach you anything about\n"
	.string "Pokémon!”$"

RustboroCity_Text_CuttersHouse:
	.string "Cutter's House$"

RustboroCity_Text_DevelopedNewPokenavFeature:
	.string "I've been working on an exciting new\nfeature for the Pokénav…\lAnd it's turned out splendidly!\p{PLAYER}, could I take a look at\nyour Pokénav?\pThe one President Stone provided you\nwith?$"

RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
	.string "Fantastic!\nThere you go, {PLAYER}!\pI've added a new feature called the\nMatch Call to your Pokénav.\pWith the Match Call, you can easily\nconnect and chat with trainers\lyou've met on your journey, right\lfrom your Pokénav.\pYou know, President Stone should be\none of your first contacts.\pGive it a try!$"

RustboroCity_Text_PleaseSelectPokenav:
	.string "Go ahead, initiate a call with him\nand see how it works.$"

RustboroCity_Text_IdBetterGetBackToWork:
	.string "OK!\nI'd better get back to work.\nPlease take care, {PLAYER}!$"

RustboroCity_Text_YouCanHave2On2Battle:
	.string "Did you know this?\p"
	.string "You can have a 2-on-2 battle even\n"
	.string "if you're not with another Trainer.\p"
	.string "If you catch the eyes of two Trainers\n"
	.string "when you have two or more Pokémon,\l"
	.string "they'll both challenge you.\p"
	.string "Don't you think it'd be cool if you\n"
	.string "could beat two Trainers by yourself?$"

RustboroCity_EventScript_RivalTriggerFirstMeet22::
	setvar VAR_TEMP_1, 22
	goto RustboroCity_EventScript_RivalTriggerGreet
	return


RustboroCity_EventScript_RivalTriggerFirstMeet23::
	setvar VAR_TEMP_1, 23
	goto RustboroCity_EventScript_RivalTriggerGreet
	return


RustboroCity_EventScript_RivalTriggerFirstMeet24::
	setvar VAR_TEMP_1, 24
	goto RustboroCity_EventScript_RivalTriggerGreet
	return


RustboroCity_EventScript_RivalTriggerFirstMeet25::
	setvar VAR_TEMP_1, 25
	goto RustboroCity_EventScript_RivalTriggerGreet
	return


RustboroCity_EventScript_RivalTriggerFirstMeet26::
	setvar VAR_TEMP_1, 26
	goto RustboroCity_EventScript_RivalTriggerGreet
	return


RustboroCity_EventScript_RivalTriggerFirstMeet27::
	setvar VAR_TEMP_1, 27
	goto RustboroCity_EventScript_RivalTriggerGreet
	return


RustboroCity_EventScript_RivalTriggerFirstMeet28::
	setvar VAR_TEMP_1, 28
	goto RustboroCity_EventScript_RivalTriggerGreet
	return


RustboroCity_EventScript_RivalTriggerFirstMeet29::
	setvar VAR_TEMP_1, 29
	goto RustboroCity_EventScript_RivalTriggerGreet
	return


RustboroCity_EventScript_RivalTriggerGreet::
	lock
	delay 16
	special SpawnCameraObject
	switch VAR_TEMP_1
	case 22, RustboroCity_EventScript_RivalTriggerGreet_3
	case 23, RustboroCity_EventScript_RivalTriggerGreet_4
	case 24, RustboroCity_EventScript_RivalTriggerGreet_5
	case 25, RustboroCity_EventScript_RivalTriggerGreet_6
	case 26, RustboroCity_EventScript_RivalTriggerGreet_7
	case 27, RustboroCity_EventScript_RivalTriggerGreet_8
	case 28, RustboroCity_EventScript_RivalTriggerGreet_9
	case 29, RustboroCity_EventScript_RivalTriggerGreet_10
	end

RustboroCity_EventScript_RivalTriggerGreet_1:
	waitmovement OBJ_EVENT_ID_CAMERA
	opendoor 15, 54
	waitdooranim
	playse SE_EXIT
	addobject 17
	applymovement 17, RustboroCity_Movement_RivalWalkDown
	waitmovement 17
	closedoor 15, 54
	waitdooranim
	delay 8
	applymovement 17, RustboroCity_Movement_RivalWalkDown
	waitmovement 17
	delay 8
	playse SE_PIN
	applymovement 17, Common_Movement_ExclamationMark
	waitmovement 17
	delay 16
	fadescreenswapbuffers FADE_TO_BLACK
	switch VAR_TEMP_1
	case 22, RustboroCity_EventScript_RivalTriggerGreet_14
	case 23, RustboroCity_EventScript_RivalTriggerGreet_15
	case 24, RustboroCity_EventScript_RivalTriggerGreet_16
	case 25, RustboroCity_EventScript_RivalTriggerGreet_17
	case 26, RustboroCity_EventScript_RivalTriggerGreet_18
	case 27, RustboroCity_EventScript_RivalTriggerGreet_19
	case 28, RustboroCity_EventScript_RivalTriggerGreet_20
	case 29, RustboroCity_EventScript_RivalTriggerGreet_21
	end

RustboroCity_EventScript_RivalTriggerGreet_3:
	applymovement OBJ_EVENT_ID_CAMERA, RustboroCity_Movement_22_PanToRival
	goto RustboroCity_EventScript_RivalTriggerGreet_1

RustboroCity_EventScript_RivalTriggerGreet_4:
	applymovement OBJ_EVENT_ID_CAMERA, RustboroCity_Movement_23_PanToRival
	goto RustboroCity_EventScript_RivalTriggerGreet_1

RustboroCity_EventScript_RivalTriggerGreet_5:
	applymovement OBJ_EVENT_ID_CAMERA, RustboroCity_Movement_24_PanToRival
	goto RustboroCity_EventScript_RivalTriggerGreet_1

RustboroCity_EventScript_RivalTriggerGreet_6:
	applymovement OBJ_EVENT_ID_CAMERA, RustboroCity_Movement_25_PanToRival
	goto RustboroCity_EventScript_RivalTriggerGreet_1

RustboroCity_EventScript_RivalTriggerGreet_7:
	applymovement OBJ_EVENT_ID_CAMERA, RustboroCity_Movement_26_PanToRival
	goto RustboroCity_EventScript_RivalTriggerGreet_1

RustboroCity_EventScript_RivalTriggerGreet_8:
	applymovement OBJ_EVENT_ID_CAMERA, RustboroCity_Movement_27_PanToRival
	goto RustboroCity_EventScript_RivalTriggerGreet_1

RustboroCity_EventScript_RivalTriggerGreet_9:
	applymovement OBJ_EVENT_ID_CAMERA, RustboroCity_Movement_28_PanToRival
	goto RustboroCity_EventScript_RivalTriggerGreet_1

RustboroCity_EventScript_RivalTriggerGreet_10:
	applymovement OBJ_EVENT_ID_CAMERA, RustboroCity_Movement_29_PanToRival
	goto RustboroCity_EventScript_RivalTriggerGreet_1

RustboroCity_EventScript_RivalTriggerGreet_12:
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 17, Common_Movement_WalkInPlaceLeft
	waitmovement 17
	fadescreenswapbuffers FADE_FROM_BLACK
	special RemoveCameraObject
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq RustboroCity_EventScript_RivalTriggerGreet_24
	msgbox RustboroCity_EventScript_RivalTriggerGreet_Text_1
RustboroCity_EventScript_RivalTriggerGreet_23:
	closemessage
	applymovement 17, RustboroCity_Movement_LookAround
	waitmovement 17
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq RustboroCity_EventScript_RivalTriggerGreet_28
	msgbox RustboroCity_EventScript_RivalTriggerGreet_Text_3
RustboroCity_EventScript_RivalTriggerGreet_27:
	closemessage
	applymovement 17, Common_Movement_WalkInPlaceLeft
	waitmovement 17
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq RustboroCity_EventScript_RivalTriggerGreet_32
	msgbox RustboroCity_EventScript_RivalTriggerGreet_Text_5
RustboroCity_EventScript_RivalTriggerGreet_31:
	closemessage
	applymovement 17, RustboroCity_Movement_RivalExit
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_SeeRivalExit
	waitmovement 17
	removeobject 17
	setvar VAR_RUSTBORO_CITY_RIVAL_ENCOUNTER_STATE, 1
	release
	end

RustboroCity_EventScript_RivalTriggerGreet_14:
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_22_GoToRival
	goto RustboroCity_EventScript_RivalTriggerGreet_12

RustboroCity_EventScript_RivalTriggerGreet_15:
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_23_GoToRival
	goto RustboroCity_EventScript_RivalTriggerGreet_12

RustboroCity_EventScript_RivalTriggerGreet_16:
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_24_GoToRival
	goto RustboroCity_EventScript_RivalTriggerGreet_12

RustboroCity_EventScript_RivalTriggerGreet_17:
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_25_GoToRival
	goto RustboroCity_EventScript_RivalTriggerGreet_12

RustboroCity_EventScript_RivalTriggerGreet_18:
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_26_GoToRival
	goto RustboroCity_EventScript_RivalTriggerGreet_12

RustboroCity_EventScript_RivalTriggerGreet_19:
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_27_GoToRival
	goto RustboroCity_EventScript_RivalTriggerGreet_12

RustboroCity_EventScript_RivalTriggerGreet_20:
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_28_GoToRival
	goto RustboroCity_EventScript_RivalTriggerGreet_12

RustboroCity_EventScript_RivalTriggerGreet_21:
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_29_GoToRival
	goto RustboroCity_EventScript_RivalTriggerGreet_12

RustboroCity_EventScript_RivalTriggerGreet_24:
	msgbox RustboroCity_EventScript_RivalTriggerGreet_Text_0
	goto RustboroCity_EventScript_RivalTriggerGreet_23

RustboroCity_EventScript_RivalTriggerGreet_28:
	msgbox RustboroCity_EventScript_RivalTriggerGreet_Text_2
	goto RustboroCity_EventScript_RivalTriggerGreet_27

RustboroCity_EventScript_RivalTriggerGreet_32:
	msgbox RustboroCity_EventScript_RivalTriggerGreet_Text_4
	goto RustboroCity_EventScript_RivalTriggerGreet_31


RustboroCity_Movement_22_PanToRival:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	step_end

RustboroCity_Movement_23_PanToRival:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	step_end

RustboroCity_Movement_24_PanToRival:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

RustboroCity_Movement_25_PanToRival:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	step_end

RustboroCity_Movement_26_PanToRival:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	step_end

RustboroCity_Movement_27_PanToRival:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	step_end

RustboroCity_Movement_28_PanToRival:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

RustboroCity_Movement_29_PanToRival:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

RustboroCity_Movement_RivalWalkDown:
	walk_down
	step_end

RustboroCity_Movement_22_GoToRival:
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_in_place_right
	step_end

RustboroCity_Movement_23_GoToRival:
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_in_place_right
	step_end

RustboroCity_Movement_24_GoToRival:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_in_place_right
	step_end

RustboroCity_Movement_25_GoToRival:
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_in_place_right
	step_end

RustboroCity_Movement_26_GoToRival:
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_in_place_right
	step_end

RustboroCity_Movement_27_GoToRival:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_in_place_right
	step_end

RustboroCity_Movement_28_GoToRival:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_in_place_right
	step_end

RustboroCity_Movement_29_GoToRival:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_in_place_right
	step_end

RustboroCity_Movement_LookAround:
	delay_16
	walk_in_place_right
	delay_16
	walk_in_place_down
	step_end

RustboroCity_Movement_RivalExit:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

RustboroCity_Movement_SeeRivalExit:
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_up
	step_end

RustboroCity_EventScript_RivalTriggerGreet_Text_0:
	.string "{COLOR RED}{RIVAL}{COLOR DARK_GRAY}: So you made it here to\nRustboro, too, {PLAYER}!$"

RustboroCity_EventScript_RivalTriggerGreet_Text_1:
	.string "{COLOR RED}{RIVAL}{COLOR DARK_GRAY}: So you made it here to\nRustboro, too, {PLAYER}.$"

RustboroCity_EventScript_RivalTriggerGreet_Text_2:
	.string "It's really big here, isn't it?\nLittleroot can't even compare.$"

RustboroCity_EventScript_RivalTriggerGreet_Text_3:
	.string "It's a real city, huh?\nNothing like Littleroot.$"

RustboroCity_EventScript_RivalTriggerGreet_Text_4:
	.string "Oh, and {PLAYER}, have you heard?\nThere's a Pokémon Gym here, too!\pOnce I catch a couple more Pokémon, I'll\nbe sure take it on with my team!\pSee you later!$"

RustboroCity_EventScript_RivalTriggerGreet_Text_5:
	.string "Oh, did you know?\nThere's a Pokémon Gym here, too.\pSoon as I gather a few more Pokémon,\nI'll be trying my team against it!\pSee ya!$"
