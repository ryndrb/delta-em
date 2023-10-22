.set LOCALID_STEVEN, 19
.set LOCALID_LATIAS, 22

Route118_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route118_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, Route118_OnLoad
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route118_OnFrame
	.byte 0

Route118_OnTransition:
	call GabbyAndTy_EventScript_UpdateLocation
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_EAST, AbnormalWeather_StartGroudonWeather
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_WEST, AbnormalWeather_StartGroudonWeather
    call_if_ge VAR_ROUTE118_STATE, 2, Route118_EventScript_StevenLatiasPos
	end

Route118_OnLoad:
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_EAST, AbnormalWeather_EventScript_PlaceTilesRoute118East
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_WEST, AbnormalWeather_EventScript_PlaceTilesRoute118West
	end

Route118_OnFrame:
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
    map_script_2 VAR_ROUTE118_STATE, 2, Route118_EventScript_PlayerAskToGoBackFromSouthernIsland
    map_script_2 VAR_ROUTE118_STATE, 4, Route118_EventScript_ReturnFromSouthernIsland
	.2byte 0

Route118_EventScript_StevenLatiasPos::
    setobjectxyperm LOCALID_STEVEN, 45, 15
    setobjectxyperm LOCALID_LATIAS, 44, 17
    setobjectmovementtype LOCALID_STEVEN, MOVEMENT_TYPE_FACE_DOWN
    return

Route118_EventScript_GoodRodFisherman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_GOOD_ROD, Route118_EventScript_ReceivedGoodRod
	msgbox Route118_Text_YouAgreeGoodRodIsGood, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route118_EventScript_ReceiveGoodRod
	goto_if_eq VAR_RESULT, NO, Route118_EventScript_DeclineGoodRod
	end

Route118_EventScript_ReceiveGoodRod::
	msgbox Route118_Text_IdenticalMindsTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_GOOD_ROD
	setflag FLAG_RECEIVED_GOOD_ROD
	msgbox Route118_Text_TryYourLuckFishing, MSGBOX_DEFAULT
	release
	end

Route118_EventScript_DeclineGoodRod::
	msgbox Route118_Text_DontYouLikeToFish, MSGBOX_DEFAULT
	release
	end

Route118_EventScript_ReceivedGoodRod::
	msgbox Route118_Text_TryCatchingMonWithGoodRod, MSGBOX_DEFAULT
	release
	end

Route118_EventScript_Girl::
	msgbox Route118_Text_CanCrossRiversWithSurf, MSGBOX_NPC
	end

Route118_EventScript_RouteSignMauville::
	msgbox Route118_Text_RouteSignMauville, MSGBOX_SIGN
	end

Route118_EventScript_RouteSign119::
	msgbox Route118_Text_RouteSign119, MSGBOX_SIGN
	end

Route118_EventScript_Rose::
	trainerbattle_single TRAINER_ROSE_1, Route118_Text_RoseIntro, Route118_Text_RoseDefeat, Route118_EventScript_RegisterRose
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route118_EventScript_RematchRose
	msgbox Route118_Text_RosePostBattle, MSGBOX_DEFAULT
	release
	end

Route118_EventScript_RegisterRose::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route118_Text_RoseRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_ROSE_1
	release
	end

Route118_EventScript_RematchRose::
	trainerbattle_rematch TRAINER_ROSE_1, Route118_Text_RoseRematchIntro, Route118_Text_RoseRematchDefeat
	msgbox Route118_Text_RosePostRematch, MSGBOX_AUTOCLOSE
	end

Route118_EventScript_Barny::
	trainerbattle_single TRAINER_BARNY, Route118_Text_BarnyIntro, Route118_Text_BarnyDefeat
	msgbox Route118_Text_BarnyPostBattle, MSGBOX_AUTOCLOSE
	end

Route118_EventScript_Wade::
	trainerbattle_single TRAINER_WADE, Route118_Text_WadeIntro, Route118_Text_WadeDefeat
	msgbox Route118_Text_WadePostBattle, MSGBOX_AUTOCLOSE
	end

Route118_EventScript_Dalton::
	trainerbattle_single TRAINER_DALTON_1, Route118_Text_DaltonIntro, Route118_Text_DaltonDefeat, Route118_EventScript_RegisterDalton
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route118_EventScript_RematchDalton
	msgbox Route118_Text_DaltonPostBattle, MSGBOX_DEFAULT
	release
	end

Route118_EventScript_RegisterDalton::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route118_Text_DaltonRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_DALTON_1
	release
	end

Route118_EventScript_RematchDalton::
	trainerbattle_rematch TRAINER_DALTON_1, Route118_Text_DaltonRematchIntro, Route118_Text_DaltonRematchDefeat
	msgbox Route118_Text_DaltonPostRematch, MSGBOX_AUTOCLOSE
	end

Route118_EventScript_Perry::
	trainerbattle_single TRAINER_PERRY, Route118_Text_PerryIntro, Route118_Text_PerryDefeat
	msgbox Route118_Text_PerryPostBattle, MSGBOX_AUTOCLOSE
	end

Route118_EventScript_Chester::
	trainerbattle_single TRAINER_CHESTER, Route118_Text_ChesterIntro, Route118_Text_ChesterDefeat
	msgbox Route118_Text_ChesterPostBattle, MSGBOX_AUTOCLOSE
	end

Route118_EventScript_Deandre::
	trainerbattle_single TRAINER_DEANDRE, Route118_Text_DeandreIntro, Route118_Text_DeandreDefeat
	msgbox Route118_Text_DeandrePostBattle, MSGBOX_AUTOCLOSE
	end

Route118_Text_YouAgreeGoodRodIsGood:
	.string "Hmm!\n"
	.string "A Good Rod is really good!\p"
	.string "Wouldn't you agree?$"

Route118_Text_IdenticalMindsTakeThis:
	.string "Hmm!\n"
	.string "We're of identical minds!\p"
	.string "Hmm!\n"
	.string "Take this Good Rod!$"

Route118_Text_TryYourLuckFishing:
	.string "Wherever there's water, try your luck\n"
	.string "at fishing.$"

Route118_Text_DontYouLikeToFish:
	.string "Don't you like to fish?$"

Route118_Text_TryCatchingMonWithGoodRod:
	.string "Try catching all sorts of Pokémon\n"
	.string "with your Good Rod.$"

Route118_Text_CanCrossRiversWithSurf:
	.string "Even if there isn't a boat, you can\n"
	.string "cross rivers and the sea if you have\l"
	.string "a Pokémon that knows Surf.\p"
	.string "Pokémon can be counted on to do so\n"
	.string "much!$"

Route118_Text_RouteSignMauville:
	.string "Route 118\n"
	.string "{LEFT_ARROW} Mauville City$"

Route118_Text_RouteSign119:
	.string "Route 118\n"
	.string "{UP_ARROW} Route 119$"

Route118_EventScript_StevenTrigger1::
	setvar VAR_TEMP_0, 1
	goto Route118_EventScript_Steven
	return


Route118_EventScript_StevenTrigger2::
	setvar VAR_TEMP_0, 2
	goto Route118_EventScript_Steven
	return


Route118_EventScript_StevenTrigger3::
	setvar VAR_TEMP_0, 3
	goto Route118_EventScript_Steven
	return


Route118_EventScript_Steven::
	lock
	delay 8
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_STEVEN
	delay 8
	playse SE_PIN
	applymovement LOCALID_STEVEN, Common_Movement_ExclamationMark
	waitmovement LOCALID_STEVEN
	waitse
	delay 16
	applymovement LOCALID_STEVEN, Route118_Movement_StevenJumpLedgeToPlayer
	switch VAR_TEMP_0
	case 1, Route118_EventScript_Steven_3
	case 2, Route118_EventScript_Steven_4
	case 3, Route118_EventScript_Steven_5
Route118_EventScript_Steven_1:
	waitmovement LOCALID_STEVEN
	delay 24
	msgbox Route118_EventScript_Steven_Text_0
	closemessage
	delay 32
	msgbox Route118_EventScript_Steven_Text_1
	closemessage
	delay 48
	msgbox Route118_EventScript_Steven_Text_2
	closemessage
	delay 16
	applymovement LOCALID_STEVEN, Route118_Movement_StevenKindaLeaving
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenKindaLeaving
	waitmovement LOCALID_STEVEN
	fadenewbgm MUS_DUMMY
	delay 24
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_STEVEN
	delay 32
	playse SE_PIN
	applymovement LOCALID_STEVEN, Common_Movement_QuestionMark
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_STEVEN
	waitse
	delay 24
	playmoncry SPECIES_LATIAS, CRY_MODE_NORMAL
	msgbox Route118_EventScript_Steven_Text_3
	waitmoncry
	closemessage
	delay 16
	msgbox Route118_EventScript_Steven_Text_4
	closemessage
	delay 32
	fadescreen FADE_TO_WHITE
	addobject LOCALID_LATIAS
	fadescreen FADE_FROM_WHITE
	delay 16
	playmoncry SPECIES_LATIAS, CRY_MODE_NORMAL
	waitmoncry
	delay 64
	applymovement LOCALID_STEVEN, Route118_Movement_StevenGotoLatias
	waitmovement LOCALID_STEVEN
	msgbox Route118_EventScript_Steven_Text_5
	closemessage
	delay 8
	playmoncry SPECIES_LATIAS, CRY_MODE_NORMAL
	msgbox Route118_EventScript_Steven_Text_3
	waitmoncry
	closemessage
	delay 16
	msgbox Route118_EventScript_Steven_Text_6
	closemessage
	delay 8
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceLeft
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement LOCALID_STEVEN
	msgbox Route118_EventScript_Steven_Text_7
	closemessage
	delay 16
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_STEVEN
	msgbox Route118_EventScript_Steven_Text_8
	closemessage
	delay 16
	playmoncry SPECIES_LATIAS, CRY_MODE_NORMAL
	waitmoncry
	applymovement LOCALID_STEVEN, Route118_Movement_RideLatias
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_RideLatias
	fadescreen FADE_TO_BLACK
	waitmovement LOCALID_STEVEN
	removeobject LOCALID_LATIAS
	removeobject LOCALID_STEVEN
	setvar VAR_ROUTE118_STATE, 1
	setflag FLAG_REMOVE_WARP_FADE
	delay 160
	warpsilent MAP_SOUTHERN_ISLAND_EXTERIOR, 14, 18
	waitstate
	release
	end

Route118_EventScript_Steven_3:
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerFaceSteven1
	goto Route118_EventScript_Steven_1

Route118_EventScript_Steven_4:
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerFaceSteven2
	goto Route118_EventScript_Steven_1

Route118_EventScript_Steven_5:
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerFaceSteven3
	goto Route118_EventScript_Steven_1


Route118_Movement_PlayerFaceSteven1:
	walk_right
	walk_in_place_up
	step_end

Route118_Movement_PlayerFaceSteven2:
	step_end

Route118_Movement_PlayerFaceSteven3:
	walk_left
	walk_in_place_up
	step_end

Route118_Movement_StevenJumpLedgeToPlayer:
	jump_2_down
	step_end

Route118_Movement_StevenKindaLeaving:
	walk_right
	walk_right
	walk_down
	walk_right
	step_end

Route118_Movement_PlayerWatchStevenKindaLeaving:
	delay_16
	delay_16
	walk_in_place_right
	step_end

Route118_Movement_StevenGotoLatias:
	walk_left
	walk_left
	walk_down
	step_end

Route118_Movement_RideLatias:
	walk_down
	jump_2_down
	step_end

Route118_EventScript_PlayerAskToGoBackFromSouthernIsland::
	lock
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceLeft
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox Route118_EventScript_PlayerAskToGoBackFromSouthernIsland_Text_0
	closemessage
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_STEVEN
	setvar VAR_ROUTE118_STATE, 3
	release
	end


Route118_EventScript_StevenStopPlayerTrigger::
	lock
	delay 16
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceUp
	waitmovement LOCALID_STEVEN
	playse SE_PIN
	applymovement LOCALID_STEVEN, Common_Movement_ExclamationMark
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox Route118_EventScript_StevenStopPlayerTrigger_Text_0
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement OBJ_EVENT_ID_PLAYER
	release
	end


Route118_EventScript_StevenGoToSouthernIsland::
	lock
	faceplayer
	msgbox Route118_EventScript_StevenGoToSouthernIsland_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Route118_EventScript_StevenGoToSouthernIsland_2
Route118_EventScript_StevenGoToSouthernIsland_1:
	msgbox Route118_EventScript_StevenGoToSouthernIsland_Text_2
	closemessage
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_STEVEN
	release
	end

Route118_EventScript_StevenGoToSouthernIsland_2:
	msgbox Route118_EventScript_StevenGoToSouthernIsland_Text_1
	closemessage
	fadescreen FADE_TO_BLACK
	waitmovement LOCALID_STEVEN
	removeobject LOCALID_LATIAS
	removeobject LOCALID_STEVEN
	setflag FLAG_REMOVE_WARP_FADE
	delay 160
	warpsilent MAP_SOUTHERN_ISLAND_EXTERIOR, 14, 18
	waitstate
	goto Route118_EventScript_StevenGoToSouthernIsland_1


Route118_EventScript_ReturnFromSouthernIsland::
	lock
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceLeft
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox Route118_EventScript_ReturnFromSouthernIsland_Text_0
	closemessage
	playmoncry SPECIES_LATIAS, CRY_MODE_NORMAL
	msgbox Route118_EventScript_ReturnFromSouthernIsland_Text_1
	closemessage
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement OBJ_EVENT_ID_PLAYER
	waitmoncry
	delay 16
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceLeft
	waitmovement LOCALID_STEVEN
	msgbox Route118_EventScript_ReturnFromSouthernIsland_Text_2
	playmoncry SPECIES_LATIAS, CRY_MODE_NORMAL
	msgbox Route118_EventScript_ReturnFromSouthernIsland_Text_1
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_STEVEN
	closemessage
	delay 24
	fadescreen FADE_TO_WHITE
	removeobject LOCALID_LATIAS
	delay 24
	fadescreen FADE_FROM_WHITE
	delay 24
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceLeft
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox Route118_EventScript_ReturnFromSouthernIsland_Text_3
	closemessage
	applymovement LOCALID_STEVEN, Route118_Movement_StevenExit
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
	waitmovement LOCALID_STEVEN
	removeobject LOCALID_STEVEN
	setvar VAR_ROUTE118_STATE, 5
	release
	end


Route118_Movement_StevenExit:
	delay_16
	delay_16
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	step_end

Route118_Movement_PlayerWatchStevenExit:
	lock_facing_direction
	walk_left
	unlock_facing_direction
	delay_16
	delay_16
	walk_in_place_up
	step_end

Route118_EventScript_Steven_Text_0:
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: Why, hello.\pWe met in Granite Cave, didn't we?\pNo, I remember it.\nIt's {PLAYER}…\lRight?\pIt's good to see that your journey is\ngoing well.$"

Route118_EventScript_Steven_Text_1:
	.string "You know, {PLAYER}…\pIn this vast world, there are many\nPokémon.\lThey come in many types.\pShould you raise different types?\nOr will you only raise Pokémon of a\lcertain type you like?\pI wonder what you think as a Pokémon\nTrainer?$"

Route118_EventScript_Steven_Text_2:
	.string "Not that it's anything I should be\nconcerning myself with…\pBut somehow I find myself wanting to\nknow what you think.\pI suppose I should be going.\nI hope to see you again though.$"

Route118_EventScript_Steven_Text_3:
	.string "Hyahhn!$"

Route118_EventScript_Steven_Text_4:
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: …Hm?$"

Route118_EventScript_Steven_Text_5:
	.string "Latias!$"

Route118_EventScript_Steven_Text_6:
	.string "Do you…want us to soar somewhere with\nyou?$"

Route118_EventScript_Steven_Text_7:
	.string "{PLAYER}.\pCome with me.$"

Route118_EventScript_Steven_Text_8:
	.string "Latias…\pI believe that it sought us out for\nhelp.\pIf that's the case, let's go!$"

Route118_EventScript_PlayerAskToGoBackFromSouthernIsland_Text_0:
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: So we've come back here…\pWhen you're ready to return to\nSouthern Island, come and tell me.$"

Route118_EventScript_StevenStopPlayerTrigger_Text_0:
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: Where are you going?\pI don't think we can walk away from\nthis?$"

Route118_EventScript_StevenGoToSouthernIsland_Text_0:
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: Are your preparations\ncomplete?$"

Route118_EventScript_StevenGoToSouthernIsland_Text_1:
	.string "If that's the case, let's go!$"

Route118_EventScript_StevenGoToSouthernIsland_Text_2:
	.string "I see.\nI'll be waiting here.$"

Route118_EventScript_ReturnFromSouthernIsland_Text_0:
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: Thank you for your help,\n{PLAYER}.$"

Route118_EventScript_ReturnFromSouthernIsland_Text_1:
	.string "Hyan!$"

Route118_EventScript_ReturnFromSouthernIsland_Text_2:
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: Perhaps it's trying to tell you\nto take good care of Latios.$"

Route118_EventScript_ReturnFromSouthernIsland_Text_3:
	.string "In the end, you were far greater help\nthan I expected you might be.\pI expect that you and your team will\nbe able to best both Route 119 ahead\land even the Fortree Gym beyond that.\pI'll be curious to see how much\nstronger you might grow next time\lwe meet.\pUntil then, {PLAYER}.$"
