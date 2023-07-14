.set LOCALID_MOM, 1
.set LOCALID_RIVAL_MOM, 4
.set LOCALID_RIVAL, 7

LittlerootTown_BrendansHouse_1F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_BrendansHouse_1F_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_1F_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_OnFrame
	.byte 0

LittlerootTown_BrendansHouse_1F_OnLoad:
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual
	end

LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes::
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
	return

LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual
	return

LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual::
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
	return

LittlerootTown_BrendansHouse_1F_OnTransition:
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV
	call_if_unset FLAG_MET_RIVAL_MOM, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoorFrontFacingUp
	end

LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs::
	setobjectxyperm LOCALID_MOM, 8, 4
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
	return

LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV::
	setobjectxyperm LOCALID_MOM, 4, 5
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
	return

LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor::
	setobjectxyperm LOCALID_MOM, 9, 8
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
	return

LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoorFrontFacingUp::
	setobjectxyperm LOCALID_RIVAL_MOM, 8, 6
	setobjectmovementtype LOCALID_RIVAL_MOM, MOVEMENT_TYPE_FACE_UP
	return

@ Many of the below scripts have no gender check because they assume youre in the correct house
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
LittlerootTown_BrendansHouse_1F_OnFrame:
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 1, LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
	.2byte 0

LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock::
	lockall
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
	applymovement LOCALID_MOM, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
	waitmovement 0
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 7, 1
	waitstate
	releaseall
	end

LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs:
	walk_up
	step_end

LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn::
	lockall
	setvar VAR_0x8004, LOCALID_MOM
	setvar VAR_0x8005, MALE
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
	end

LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport::
	lockall
	setvar VAR_0x8004, MALE
	setvar VAR_0x8005, LOCALID_MOM
	goto PlayersHouse_1F_EventScript_PetalburgGymReportMale
	end

LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
	lockall
	delay 40
	applymovement LOCALID_RIVAL_MOM, Common_Movement_WalkInPlaceDown
	waitmovement 0
	delay 8
	playse SE_PIN
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox PlayersHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomMoveAside
	waitmovement 0
	setflag FLAG_MET_RIVAL_MOM
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
	setvar VAR_TEMP_0, 1
	releaseall
	end

LittlerootTown_BrendansHouse_1F_Movement_RivalMomMoveAside:
	delay_16
	walk_right
	walk_in_place_left
	step_end

LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
	lockall
	setvar VAR_0x8004, LOCALID_MOM
	setvar VAR_0x8005, MALE
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
	end

PlayersHouse_1F_Text_IsntItNiceInHere:
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: See, {PLAYER}?\nIsn't it nice in here, too?$"

PlayersHouse_1F_Text_MoversPokemonGoSetClock:
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: The moving company's Pokémon\neven help with the unpacking and\lcleanup.\lThey really make moving a cinch!\p…\pYou should go and see your new room\nupstairs, {PLAYER}!\pDad even bought a new clock for it\nto help celebrate the big move.\pYou'll need to set the time, though!$"

PlayersHouse_1F_Text_ArentYouInterestedInRoom:
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: Well, {PLAYER}?\pDon't you want to see your new room?$"

PlayersHouse_1F_Text_GoSetTheClock:
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: {PLAYER}, go set the clock in\nyour room, honey.\pI hung it on the wall, right between\nthe TV and the stairs.$"

PlayersHouse_1F_Text_OhComeQuickly:
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: Oh! {PLAYER}! {PLAYER}!!!\nQuick! Come quickly!$"

PlayersHouse_1F_Text_MaybeDadWillBeOn:
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: It's the Petalburg Gym!\nMaybe Dad will be on TV!$"

PlayersHouse_1F_Text_ItsOverWeMissedHim:
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: Oh… It's already ended.\pLooks like your dad was on, but we\nmissed his part.\pWhat a shame.$"

PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor:
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: But that reminds me…\pOne of Dad's friends lives in this\ntown.\p{COLOR BLUE}Professor Birch{COLOR DARK_GRAY} is his name.\pHe lives {COLOR BLUE}right next door{COLOR DARK_GRAY}, so you\nshould go over and introduce\lyourself.$"

PlayersHouse_1F_Text_SeeYouHoney:
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: Now take care out there, honey!$"

PlayersHouse_1F_Text_DidYouMeetProfBirch:
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: Did you get to meet Professor\nBirch?$"

PlayersHouse_1F_Text_YouShouldRestABit:
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: You feeling OK, {PLAYER}?\pYou look a little tired.\nI think you should rest a bit.$"

PlayersHouse_1F_Text_TakeCareHoney:
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: Now take care out there, honey!$"

PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom:
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: Oh? Did Dad give you that\nbadge!?\pThen here's something from your Mom!$"

PlayersHouse_1F_Text_DontPushYourselfTooHard:
	.string "It's a wonderful thing to try\nhard at your passion, but don't\lpush yourself too hard, dear.\pYou can always come home if you\nneed to.\pGood luck, honey!$"

PlayersHouse_1F_Text_IsThatAPokenav:
	.string "Mom: What is that, honey? A Pokénav?\n"
	.string "Someone from Devon gave it to you?\p"
	.string "Well, honey, how about registering\n"
	.string "your mom?\p"
	.string "… … …$"

PlayersHouse_1F_Text_RegisteredMom:
	.string "Registered Mom\n"
	.string "in the Pokénav.$"

PlayersHouse_1F_Text_Vigoroth1:
	.string "Fugiiiiih!$"

PlayersHouse_1F_Text_Vigoroth2:
	.string "Huggoh, uggo uggo…$"

PlayersHouse_1F_Text_ReportFromPetalburgGym:
	.string "{COLOR RED}Interviewer{COLOR DARK_GRAY}: …\pWe brought you this report live from\nin front of Petalburg Gym.\pNext up, a special look at a long-\n-awaited meteor shower in the next\lstar show…$"

PlayersHouse_1F_Text_TheresAMovieOnTV:
	.string "There is a movie on TV.\p"
	.string "Two men are dancing on a big piano\n"
	.string "keyboard.\p"
	.string "Better get going!$"

PlayersHouse_1F_Text_RunningShoesManual:
	.string "It's the instruction booklet for the\n"
	.string "Running Shoes.\p"
	.string "“Press the B Button to run while\n"
	.string "wearing your Running Shoes.\p"
	.string "“Lace up your Running Shoes and hit\n"
	.string "the road running!”$"

PlayersHouse_1F_Text_TicketFromBrineyCameForYou:
	.string "Dad: Hm?\p"
	.string "Hey, it's {PLAYER}!\p"
	.string "It's been a while since I saw you,\n"
	.string "but you look…stronger, somehow.\p"
	.string "That's the impression I get.\n"
	.string "But your old man hasn't given up yet!\p"
	.string "Oh, yes, I have something for you.\n"
	.string "This came to you from someone named\l"
	.string "Mr. Briney.$"

PlayersHouse_1F_Text_PortsInSlateportLilycove:
	.string "Dad: Hm, a Ticket for a ferry?\p"
	.string "If I recall, there are ferry ports in\n"
	.string "Slateport and Lilycove.$"

PlayersHouse_1F_Text_BetterGetBackToGym:
	.string "I'd better get back to Petalburg Gym.\p"
	.string "Mom, thanks for looking after the house\n"
	.string "while I'm away.$"

PlayersHouse_1F_Text_DadShouldStayLonger:
	.string "Mom: That Dad of yours…\p"
	.string "He comes home for the first time in a\n"
	.string "while, but all he talks about is Pokémon.\p"
	.string "He should relax and stay a little longer.$"

PlayersHouse_1F_Text_IsThatABreakingStory:
	.string "Mom: Is that a breaking news story?$"

PlayersHouse_1F_Text_LatiEmergencyNewsFlash:
	.string "We bring you this emergency\n"
	.string "news flash!\p"
	.string "In various Hoenn locales, there have\n"
	.string "been reports of a BZZT…colored\l"
	.string "Pokémon in flight.\p"
	.string "The identity of this Pokémon is\n"
	.string "currently unknown.\p"
	.string "We now return you to the regular\n"
	.string "movie program.$"

PlayersHouse_1F_Text_WhatColorDidTheySay:
	.string "Mom: {PLAYER}, did you catch that?\p"
	.string "What color did the announcer say\n"
	.string "that Pokémon was?$"

PlayersHouse_1F_Text_StillUnknownPokemon:
	.string "Mom: Well, isn't that something!\n"
	.string "There are still unknown Pokémon.$"

PlayersHouse_1F_Text_OhYoureTheNewNeighbor:
	.string "Oh, hello. And you are?\p…\pOh, you're {PLAYER}, our new next-door\n neighbor! Welcome.\pWe have a son who is about the same\nage as you.\pHe has been so excited about making\na new friend.\pHe should be in {COLOR BLUE}his room upstairs{COLOR DARK_GRAY}.\pI hope you'll go and introduce\nyourself.$"
