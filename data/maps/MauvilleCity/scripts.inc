.set LOCALID_WALLY, 6
.set LOCALID_WALLYS_UNCLE, 7
.set LOCALID_SCOTT, 11

MauvilleCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_OnTransition
	.byte 0

MauvilleCity_OnTransition:
	setflag FLAG_VISITED_MAUVILLE_CITY
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
	clearflag FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
	setflag FLAG_SYS_TV_START
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
	setvar VAR_MAUVILLE_GYM_STATE, 0
	call_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_MoveWattsonBackToGym
    call_if_eq VAR_MAUVILLE_CITY_STATE, 0, MauvilleCity_EventScript_MoveWallyUncleToBeginning
	end

MauvilleCity_EventScript_MoveWattsonBackToGym::
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
	return

MauvilleCity_EventScript_MoveWallyUncleToBeginning::
    setobjectmovementtype LOCALID_WALLY, MOVEMENT_TYPE_FACE_LEFT
    setobjectmovementtype LOCALID_WALLYS_UNCLE, MOVEMENT_TYPE_FACE_RIGHT
    setobjectxyperm LOCALID_WALLY, 28, 11
    setobjectxyperm LOCALID_WALLYS_UNCLE, 27, 11
    return

MauvilleCity_EventScript_Boy::
	msgbox MauvilleCity_Text_NurseHurtMonBackToHealth, MSGBOX_NPC
	end

MauvilleCity_EventScript_Maniac::
	msgbox MauvilleCity_Text_AllSortsOfPeopleComeThrough, MSGBOX_NPC
	end

MauvilleCity_EventScript_Woman::
	msgbox MauvilleCity_Text_RydelVeryGenerous, MSGBOX_NPC
	end

MauvilleCity_EventScript_RichBoy::
	msgbox MauvilleCity_Text_PokemonCanJumpYouOnBike, MSGBOX_NPC
	end

MauvilleCity_EventScript_CitySign::
	msgbox MauvilleCity_Text_CitySign, MSGBOX_SIGN
	end

MauvilleCity_EventScript_GymSign::
	msgbox MauvilleCity_Text_GymSign, MSGBOX_SIGN
	end

MauvilleCity_EventScript_BikeShopSign::
	msgbox MauvilleCity_Text_BikeShopSign, MSGBOX_SIGN
	end

MauvilleCity_EventScript_GameCornerSign::
	msgbox MauvilleCity_Text_GameCornerSign, MSGBOX_SIGN
	end

MauvilleCity_EventScript_SchoolKidM::
	lock
	faceplayer
	goto_if_set FLAG_TV_EXPLAINED, MauvilleCity_EventScript_TVExplained
	msgbox MauvilleCity_Text_ExplainTV, MSGBOX_DEFAULT
	setflag FLAG_TV_EXPLAINED
	release
	end

MauvilleCity_EventScript_TVExplained::
	msgbox MauvilleCity_Text_BeenCheckingOutTV, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_WallysUncle::
	lock
	faceplayer
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_UncleAskPlayerToBattleWally
	msgbox MauvilleCity_Text_UncleHesTooPeppy, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_WalkInPlaceDown
	waitmovement 0
	release
	end

MauvilleCity_EventScript_UncleAskPlayerToBattleWally::
	msgbox MauvilleCity_Text_UncleCanYouBattleWally, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_WalkInPlaceDown
	waitmovement 0
	release
	end

MauvilleCity_EventScript_Wally::
	lockall
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_WallyRequestBattleAgain
	msgbox MauvilleCity_Text_WallyWantToChallengeGym, MSGBOX_DEFAULT
	msgbox MauvilleCity_Text_UncleYourePushingIt, MSGBOX_DEFAULT
	msgbox MauvilleCity_Text_WallyWeCanBeatAnyone, MSGBOX_DEFAULT
    closemessage
    delay 24
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceDown
	waitmovement 0
    delay 16
	playse SE_PIN
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark
	waitmovement 0
    applymovement LOCALID_WALLYS_UNCLE, Common_Movement_WalkInPlaceDown
	waitmovement 0
	applymovement LOCALID_WALLY, Common_Movement_Delay48
	waitmovement 0
	msgbox MauvilleCity_Text_WallyWillYouBattleMe, MSGBOX_YESNO
	goto MauvilleCity_EventScript_BattleWallyPrompt
	end

MauvilleCity_EventScript_BattleWallyPrompt::
	call_if_eq VAR_RESULT, YES, MauvilleCity_EventScript_BattleWally
	goto_if_eq VAR_RESULT, NO, MauvilleCity_EventScript_DeclineWallyBattle
	closemessage
    goto MauvilleCity_EventScript_WallyAndUncleExit
	end

MauvilleCity_EventScript_DefeatedWally::
	removeobject LOCALID_WALLY
	removeobject LOCALID_WALLYS_UNCLE
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
    addobject LOCALID_SCOTT
    applymovement LOCALID_SCOTT, MauvilleCity_EventScript_ScottApproachPlayer
    waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox MauvilleCity_Text_ScottYouDidntHoldBack, MSGBOX_DEFAULT
	closemessage
	addvar VAR_SCOTT_STATE, 1
    applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExit
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExit
    waitmovement LOCALID_SCOTT
	removeobject LOCALID_SCOTT
	releaseall
	end

MauvilleCity_EventScript_BattleWally::
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
	closemessage
	call_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_MovePlayerDown
	delay 16
	trainerbattle_no_intro TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat
    delay 48
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
    closemessage
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
    delay 16
    msgbox MauvilleCity_Text_WallyStillSad, MSGBOX_DEFAULT
    delay 16
    msgbox MauvilleCity_Text_UncleNoNeedToBeDownCont, MSGBOX_DEFAULT
    closemessage
    applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceRight
    waitmovement LOCALID_WALLY
    msgbox MauvilleCity_Text_WallyYesUncle, MSGBOX_DEFAULT
    closemessage
    applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceDown
    waitmovement LOCALID_WALLY
    msgbox MauvilleCity_Text_WallyGetStronger, MSGBOX_DEFAULT
    closemessage
    delay 16
    applymovement LOCALID_WALLY, Common_Movement_WalkDown
    waitmovement LOCALID_WALLY
    msgbox MauvilleCity_Text_WallyCallYouRival, MSGBOX_DEFAULT
    closemessage
    delay 16
    msgbox MauvilleCity_Text_WallyCallYouRival2, MSGBOX_DEFAULT
    closemessage
    applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceDown
    waitmovement LOCALID_WALLY
    delay 16
    msgbox MauvilleCity_Text_WallyCallYouRival3, MSGBOX_DEFAULT
    closemessage
	return

MauvilleCity_EventScript_DeclineWallyBattle::
	setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_WallyRequestBattleAgain::
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MauvilleCity_Text_WallyPleaseBattleMe, MSGBOX_YESNO
	goto MauvilleCity_EventScript_BattleWallyPrompt
	end

MauvilleCity_EventScript_ScottApproachPlayer:
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_left
    walk_left
    walk_left
    walk_left
    walk_in_place_up
    step_end

MauvilleCity_Movement_PlayerWatchScottExit:
    delay_16
    delay_16
    walk_in_place_left
    step_end

MauvilleCity_Movement_ScottExit:
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    step_end

MauvilleCity_EventScript_Wattson::
	lock
	faceplayer
	goto_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_ReceivedThunderbolt
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_EventScript_CompletedNewMauville
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_BegunNewMauville
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
	giveitem ITEM_BASEMENT_KEY
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_BegunNewMauville::
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_CompletedNewMauville::
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
	giveitem ITEM_TM_THUNDERBOLT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_ReceivedThunderbolt::
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_RegisterWallyCall::
	lockall
	pokenavcall MauvilleCity_Text_WallyPokenavCall
	waitmessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
	releaseall
	end

MauvilleCity_Text_UncleHesTooPeppy:
	.string "Uncle: It's because of Pokémon that\n"
	.string "this boy's got more pep, I suppose…\l"
	.string "But he's become a bit too peppy…$"

MauvilleCity_Text_WallyWantToChallengeGym:
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: Uncle, I'm begging you!\pI want to challenge this Gym to see\nhow much stronger I've become!\pPlease!\nYou'll let me, won't you?$"

MauvilleCity_Text_UncleYourePushingIt:
	.string "{COLOR RED}Uncle{COLOR DARK_GRAY}: Now hold on, Wally…\pIt's certainly true that you've grown\nquite a lot stronger alongside your\lPokémon.\pBut don't you think that jumping\nright into challenging a Gym might be\lpushing it?$"

MauvilleCity_Text_WallyWeCanBeatAnyone:
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: I'm not pushing it!\pIf it's me and my Ralts, we can beat\nanyone!$"

MauvilleCity_Text_WallyWillYouBattleMe:
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: Ah!\n{PLAYER}!\pRalts and I have gotten stronger since\nwe first met.\lGrowing together!\pI want to prove that to you and my\nuncle both, {PLAYER}.\pPlease…help me once more…\pAnd have a battle with me!$"

MauvilleCity_Text_WallyMyUncleWontKnowImStrong:
	.string "But if you won't battle against me,\n{PLAYER}…\pI don't think my uncle will believe that\nI've really gotten stronger.$"

MauvilleCity_Text_UncleCanYouBattleWally:
	.string "{COLOR RED}Uncle{COLOR DARK_GRAY}: On Wally's behalf, can I ask you\nto battle with him just this once?\pI don't think he's going to listen to\nany reason the way he is now.$"

MauvilleCity_Text_WallyPleaseBattleMe:
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: {PLAYER}, please!\nBattle with me!$"

MauvilleCity_Text_WallyHereICome:
	.string "Thank you, {PLAYER}.\nOK, here we go!\pWe're going to win this Ralts!\nWe have to!$"

MauvilleCity_Text_WallyDefeat:
	.string "Wow…\nYou really are strong, {PLAYER}!$"

MauvilleCity_Text_WallyIllGoBackToVerdanturf:
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: Uncle…\n"
	.string "I'll go back to Verdanturf…$"

MauvilleCity_Text_ThankYouNotEnoughToBattle:
	.string "{PLAYER}, thank you…\nBeing a Trainer is tough, isn't it?\pIt's not enough just to battle with\nyour Pokémon.\pI can't become a true Trainer like\nthat… Not really…$"

MauvilleCity_Text_UncleNoNeedToBeDown:
	.string "{COLOR RED}Uncle{COLOR DARK_GRAY}: Wally, there's no need to be so\ndown on yourself.\pWhy, what's keeping you from becoming\nstronger?\pNothing is!\nAll you need to do is keep growing.$"

MauvilleCity_Text_WallyStillSad:
    .string "{COLOR RED}Wally{COLOR DARK_GRAY}: …$"

MauvilleCity_Text_UncleNoNeedToBeDownCont:
    .string "{COLOR RED}Uncle{COLOR DARK_GRAY}: Come on, let's go home.\nEveryone's waiting for you.$"

MauvilleCity_Text_WallyYesUncle:
    .string "{COLOR RED}Wally{COLOR DARK_GRAY}: …Yes, Uncle.$"

MauvilleCity_Text_WallyGetStronger:
    .string "{PLAYER}…{PAUSE 48}\pI…\nI'm definitely…\pI'm going to get stronger.\nMuch, much stronger!\pI feel like I've learned a lot from just\none Pokémon battle with you.\lAbout my own limits…and Ralts's…$"

MauvilleCity_Text_WallyCallYouRival:
    .string "So…um… That's why…\p{PLAYER}…\nIf it's all right… Could I…$"

MauvilleCity_Text_WallyCallYouRival2:
    .string "Could I call you…my r-riv-$"

MauvilleCity_Text_WallyCallYouRival3:
    .string "Ah, never mind!\nS-sorry!\pIt was nothing!\nPlease forget about it!$"

MauvilleCity_Text_WallyGoodbye:
    .string "Guh…good-bye!$"

MauvilleCity_Text_UncleVisitUsSometime:
	.string "We should head back now, but…\pIf you ever have the time, I'd love it if\nyou'd stop by our home in Verdanturf.\lI'm sure Wally would enjoy it, too.\pWe'll look forward to seeing you!$"

MauvilleCity_Text_WallyPokenavCall:
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "Wally: Oh, hello, {PLAYER}!\p"
	.string "I just wanted to tell you that\n"
	.string "my uncle bought me a Pokénav!\p"
	.string "Now I can get in touch with you\n"
	.string "anytime, {PLAYER}!\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"

MauvilleCity_Text_RegisteredWally:
	.string "Registered Wally\n"
	.string "in the Pokénav.$"

MauvilleCity_Text_ScottYouDidntHoldBack:
	.string "{COLOR RED}Scott{COLOR DARK_GRAY}: Hehe…\nI was watching that match!\pYou're friends with that boy Wally,\naren't you?\pBut you didn't hold anything back and\nbeat him impressively.\pYeah!\nThat's that's what a real Pokémon\lbattle is all about!\pI idolize Trainers like that!\nI'll be cheering for you!$"

MauvilleCity_Text_WattsonNeedFavorTakeKey:
	.string "Wattson: Oh, {PLAYER}{KUN}!\n"
	.string "You look like you have a lot of zip!\l"
	.string "That's a good thing, wahahahaha!\p"
	.string "Fine! I've decided!\n"
	.string "I need a favor, {PLAYER}{KUN}!\p"
	.string "Mauville City has an underground\n"
	.string "sector called New Mauville.\p"
	.string "{PLAYER}{KUN}, I'd like you to go there and\n"
	.string "switch off the Generator.\p"
	.string "The Generator has been running a bit\n"
	.string "haywire. It's getting unsafe.\p"
	.string "Here, this is the Key to get into\n"
	.string "New Mauville.$"

MauvilleCity_Text_WattsonWontBeChallenge:
	.string "Wattson: Don't you worry about it.\n"
	.string "It won't be a challenge to you.\p"
	.string "The entrance to New Mauville is just\n"
	.string "a short Surf away from Route 110.\p"
	.string "That's it, then, you have my trust!\n"
	.string "Wahahahaha!$"

MauvilleCity_Text_WattsonThanksTakeTM:
	.string "Wattson: Wahahahaha!\p"
	.string "I knew it, {PLAYER}{KUN}! I knew I'd made\n"
	.string "the right choice asking you!\p"
	.string "This is my thanks--a TM containing\n"
	.string "Thunderbolt!\p"
	.string "Go on, you've earned it!$"

MauvilleCity_Text_WattsonYoungTakeCharge:
	.string "Wattson: Wahahahaha!\p"
	.string "It pleases me to no end to see\n"
	.string "the young step up and take charge!$"

MauvilleCity_Text_NurseHurtMonBackToHealth:
	.string "You know, it's cool to have Pokémon\n"
	.string "battles and stuff…\p"
	.string "But if your Pokémon gets hurt,\n"
	.string "you have to nurse it back to health.$"

MauvilleCity_Text_AllSortsOfPeopleComeThrough:
	.string "The roads of this town stretch north\n"
	.string "and south, and east and west.\p"
	.string "Because of that, we get all sorts of\n"
	.string "people coming through.$"

MauvilleCity_Text_RydelVeryGenerous:
	.string "Have you been to Rydel's Cycles yet?\p"
	.string "Rydel, the owner, is a very generous\n"
	.string "man.$"

MauvilleCity_Text_PokemonCanJumpYouOnBike:
	.string "Even if you're riding a Bike,\n"
	.string "wild Pokémon could jump you.$"

MauvilleCity_Text_CitySign:
	.string "Mauville City\n"
	.string "“The bright and shiny city of fun!”$"

MauvilleCity_Text_GymSign:
	.string "Mauville City Pokémon Gym\n"
	.string "Leader: Wattson\l"
	.string "“The cheerfully electrifying man!”$"

MauvilleCity_Text_BikeShopSign:
	.string "“Ride in gravel and shake up your\n"
	.string "soul!”\l"
	.string "Rydel's Cycles$"

MauvilleCity_Text_GameCornerSign:
	.string "“The play spot for all!”\n"
	.string "Mauville Game Corner$"

MauvilleCity_Text_ExplainTV:
	.string "Hi, do you check out TV at all?\p"
	.string "They've added a bunch of cool new\n"
	.string "shows recently.\p"
	.string "TV is so cool. I've seen my friends on\n"
	.string "TV just out of the blue.\p"
	.string "And, sometimes, they even put you on TV\n"
	.string "without telling you.\p"
	.string "I wish I would be on TV sometime.\p"
	.string "That's why I think you should check\n"
	.string "out TVs whenever you can.$"

MauvilleCity_Text_BeenCheckingOutTV:
	.string "Hi, have you been checking out TVs?$"

MauvilleCity_EventScript_MovePlayerDown::
	switch VAR_FACING
	case DIR_NORTH, MauvilleCity_EventScript_MovePlayerDown_3
	case DIR_EAST, MauvilleCity_EventScript_MovePlayerDown_4
MauvilleCity_EventScript_MovePlayerDown_1:
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceDown
	waitmovement OBJ_EVENT_ID_PLAYER
	return

MauvilleCity_EventScript_MovePlayerDown_3:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	goto MauvilleCity_EventScript_MovePlayerDown_1

MauvilleCity_EventScript_MovePlayerDown_4:
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_GetPlayerInPositionEast
	goto MauvilleCity_EventScript_MovePlayerDown_1


MauvilleCity_Movement_GetPlayerInPositionEast:
	walk_down
	walk_down
	walk_right
	step_end

MauvilleCity_EventScript_WallyAndUncleIntro1::
	setvar VAR_TEMP_0, 1
	goto MauvilleCity_EventScript_WallyAndUncleIntro
	end


MauvilleCity_EventScript_WallyAndUncleIntro2::
	setvar VAR_TEMP_0, 2
	goto MauvilleCity_EventScript_WallyAndUncleIntro
	end


MauvilleCity_EventScript_WallyAndUncleIntro::
	lock
	delay 16
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, MauvilleCity_Movement_MoveCameraToWallyUncle
	waitmovement OBJ_EVENT_ID_CAMERA
	delay 16
	msgbox MauvilleCity_EventScript_WallyAndUncleIntro_Text_0
	msgbox MauvilleCity_EventScript_WallyAndUncleIntro_Text_1
	msgbox MauvilleCity_EventScript_WallyAndUncleIntro_Text_2
	delay 16
	msgbox MauvilleCity_EventScript_WallyAndUncleIntro_Text_3
	msgbox MauvilleCity_EventScript_WallyAndUncleIntro_Text_4
	closemessage
	delay 32
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyIntroLookAround
	waitmovement LOCALID_WALLY
	msgbox MauvilleCity_EventScript_WallyAndUncleIntro_Text_5
	closemessage
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyIntroExit
	delay 32
	playse SE_PIN
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_ExclamationMark
	waitse
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_WalkInPlaceLeft
	msgbox MauvilleCity_EventScript_WallyAndUncleIntro_Text_6
	closemessage
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallyUncleIntroExit
	delay 32
	applymovement OBJ_EVENT_ID_CAMERA, MauvilleCity_Movement_MoveCameraBackToPlayer
	waitmovement LOCALID_WALLYS_UNCLE
	special RemoveCameraObject
	setobjectxy LOCALID_WALLY, 8, 6
	setobjectxy LOCALID_WALLYS_UNCLE, 9, 6
	turnobject LOCALID_WALLY, DIR_EAST
	turnobject LOCALID_WALLYS_UNCLE, DIR_WEST
	setvar VAR_MAUVILLE_CITY_STATE, 1
	release
	end


MauvilleCity_Movement_MoveCameraToWallyUncle:
	walk_up
	walk_up
	walk_up
	step_end

MauvilleCity_Movement_MoveCameraBackToPlayer:
	walk_down
	walk_down
	walk_down
	step_end

MauvilleCity_Movement_WallyIntroLookAround:
	walk_in_place_right
	delay_16
	walk_in_place_up
	delay_16
	walk_in_place_left
	delay_16
	step_end

MauvilleCity_Movement_WallyIntroExit:
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MauvilleCity_Movement_WallyUncleIntroExit:
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MauvilleCity_EventScript_WallyFrontOfGym1::
	setvar VAR_TEMP_0, 1
	goto MauvilleCity_EventScript_WallyFrontOfGym
	return


MauvilleCity_EventScript_WallyFrontOfGym2::
	setvar VAR_TEMP_0, 2
	goto MauvilleCity_EventScript_WallyFrontOfGym
	return


MauvilleCity_EventScript_WallyFrontOfGym3::
	setvar VAR_TEMP_0, 3
	goto MauvilleCity_EventScript_WallyFrontOfGym
	return


MauvilleCity_EventScript_WallyFrontOfGym4::
	setvar VAR_TEMP_0, 4
	goto MauvilleCity_EventScript_WallyFrontOfGym
	return


MauvilleCity_EventScript_WallyFrontOfGym::
	lock
	delay 16
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
	waitmovement OBJ_EVENT_ID_PLAYER
	waitse
	switch VAR_TEMP_0
	case 1, MauvilleCity_EventScript_WallyFrontOfGym_3
	case 2, MauvilleCity_EventScript_WallyFrontOfGym_4
	case 3, MauvilleCity_EventScript_WallyFrontOfGym_5
	case 4, MauvilleCity_EventScript_WallyFrontOfGym_6
MauvilleCity_EventScript_WallyFrontOfGym_1:
	waitmovement OBJ_EVENT_ID_PLAYER
	setvar VAR_MAUVILLE_CITY_STATE, 2
	goto MauvilleCity_EventScript_Wally
	release
	end

MauvilleCity_EventScript_WallyFrontOfGym_3:
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerSeeArgument1
	goto MauvilleCity_EventScript_WallyFrontOfGym_1

MauvilleCity_EventScript_WallyFrontOfGym_4:
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerSeeArgument2
	goto MauvilleCity_EventScript_WallyFrontOfGym_1

MauvilleCity_EventScript_WallyFrontOfGym_5:
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerSeeArgument3
	goto MauvilleCity_EventScript_WallyFrontOfGym_1

MauvilleCity_EventScript_WallyFrontOfGym_6:
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerSeeArgument4
	goto MauvilleCity_EventScript_WallyFrontOfGym_1


MauvilleCity_Movement_PlayerSeeArgument1:
	walk_left
	walk_down
	walk_left
	walk_left
	walk_in_place_up
	step_end

MauvilleCity_Movement_PlayerSeeArgument2:
	walk_left
	walk_left
	walk_left
	walk_in_place_up
	step_end

MauvilleCity_Movement_PlayerSeeArgument3:
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

MauvilleCity_Movement_PlayerSeeArgument4:
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	step_end

MauvilleCity_EventScript_WallyAndUncleExit::
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyStartToLeave
	waitmovement LOCALID_WALLY
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox MauvilleCity_Text_WallyGoodbye, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExit
	waitmovement LOCALID_WALLY
	delay 32
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayer
	waitmovement LOCALID_WALLYS_UNCLE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement OBJ_EVENT_ID_PLAYER
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq MauvilleCity_EventScript_WallyAndUncleExit_2
	msgbox MauvilleCity_EventScript_WallyAndUncleExit_Text_1
MauvilleCity_EventScript_WallyAndUncleExit_1:
	closemessage
	delay 16
	playse SE_PIN
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_ExclamationMark
	waitmovement LOCALID_WALLYS_UNCLE
	waitse
	msgbox MauvilleCity_EventScript_WallyAndUncleExit_Text_2
	delay 8
	giveitem ITEM_HM_ROCK_SMASH
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
	setflag FLAG_HIDE_ROUTE_111_ROCK_SMASH_TIP_GUY
	msgbox MauvilleCity_EventScript_WallyAndUncleExit_Text_3
	closemessage
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_WalkInPlaceLeft
	waitmovement LOCALID_WALLYS_UNCLE
	delay 24
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_WALLYS_UNCLE
	delay 24
	msgbox MauvilleCity_Text_UncleVisitUsSometime
	closemessage
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallyUncleExit
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchUncleLeave
	waitmovement LOCALID_WALLYS_UNCLE
	goto MauvilleCity_EventScript_DefeatedWally
	release
	end

MauvilleCity_EventScript_WallyAndUncleExit_2:
	msgbox MauvilleCity_EventScript_WallyAndUncleExit_Text_0
	goto MauvilleCity_EventScript_WallyAndUncleExit_1


MauvilleCity_Movement_WallyStartToLeave:
	walk_left
	walk_down
	walk_in_place_right
	step_end

MauvilleCity_Movement_WallyExit:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MauvilleCity_Movement_WallysUncleApproachPlayer:
	walk_left
	walk_down
	step_end

MauvilleCity_Movement_WallyUncleExit:
	walk_left
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MauvilleCity_Movement_PlayerWatchUncleLeave:
	delay_16
	delay_16
	walk_in_place_left
	step_end

MauvilleCity_EventScript_TeamAquaGrunts::
	lock
	delay 16
	msgbox MauvilleCity_EventScript_TeamAquaGrunts_Text_0
	applymovement 13, Common_Movement_WalkInPlaceUp
	waitmovement 13
	msgbox MauvilleCity_EventScript_TeamAquaGrunts_Text_1
	applymovement 12, Common_Movement_WalkInPlaceDown
	waitmovement 12
	msgbox MauvilleCity_EventScript_TeamAquaGrunts_Text_2
	closemessage
	delay 16
	applymovement 12, MauvilleCity_EventScript_TeamAquaGruntsExit
	applymovement 13, MauvilleCity_EventScript_TeamAquaGruntsExit
	waitmovement 13
	removeobject 12
	removeobject 13
	setvar VAR_MAUVILLE_CITY_STATE, 4
	release
	end


MauvilleCity_EventScript_TeamAquaGruntsExit:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

MauvilleCity_EventScript_WallyAndUncleIntro_Text_0:
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: Wow!\nSo this is Mauville City!$"

MauvilleCity_EventScript_WallyAndUncleIntro_Text_1:
	.string "{COLOR RED}Uncle{COLOR DARK_GRAY}: Hahaha!\pYou sure seem to be enjoying it,\nWally!\pSo what would you like to do?\nDo you want to grab a bite to eat at\lthe Mauville Food Court?\pOr maybe we should get you a Bike of\nyou own at Rydel's Cycles.\lWould you like that?\pI bet the exercise would be good for\nyour health.$"

MauvilleCity_EventScript_WallyAndUncleIntro_Text_2:
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: No, thank you!\pI want to challenge the Gym right away!$"

MauvilleCity_EventScript_WallyAndUncleIntro_Text_3:
	.string "{COLOR RED}Uncle{COLOR DARK_GRAY}: What?$"

MauvilleCity_EventScript_WallyAndUncleIntro_Text_4:
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: Let me see…\nI'm pretty sure the Gym is…$"

MauvilleCity_EventScript_WallyAndUncleIntro_Text_5:
	.string "Yup!\nStraight ahead this way!$"

MauvilleCity_EventScript_WallyAndUncleIntro_Text_6:
	.string "{COLOR RED}Uncle{COLOR DARK_GRAY}: What?\nHey! Wait!\pWally!?$"

MauvilleCity_EventScript_WallyAndUncleExit_Text_0:
	.string "{COLOR RED}Uncle{COLOR DARK_GRAY}: It just dawned on me that\nyou must the young man who kept an\leye out for Wally when he caught his\lPokémon.\pSo it's you we have to thank for\nWally becoming so positive about the\lfuture.\pThank you.$"

MauvilleCity_EventScript_WallyAndUncleExit_Text_1:
	.string "{COLOR RED}Uncle{COLOR DARK_GRAY}: It just dawned on me that\nyou must the young lady who kept an\leye out for Wally when he caught his\lPokémon.\pSo it's you we have to thank for\nWally becoming so positive about the\lfuture.\pThank you.$"

MauvilleCity_EventScript_WallyAndUncleExit_Text_2:
	.string "…Ah, here!\nTake this.\pI want you to take this as a bit of a\nthank-you.$"

MauvilleCity_EventScript_WallyAndUncleExit_Text_3:
	.string "Even if there are obstacles in your\npath, I think you'll be able to break\lthrough them.\pEspecially if you use Rock Smash there!$"

MauvilleCity_EventScript_TeamAquaGrunts_Text_0:
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: Where are we supposed to be,\num…\pWhere are we going, again?$"

MauvilleCity_EventScript_TeamAquaGrunts_Text_1:
	.string "It's Mt. Chimney!\pStay spaced out, and you'll get scolded\nby Maxie!$"

MauvilleCity_EventScript_TeamAquaGrunts_Text_2:
	.string "Mt. Chimney…\pIt'll be a long walk going along Route\n112 to get there.\lI wish I'd brought some snacks…$"
