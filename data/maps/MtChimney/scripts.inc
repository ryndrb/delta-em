.set LOCALID_ARCHIE, 1
.set LOCALID_MAXIE, 2
.set LOCALID_TABITHA, 3
.set LOCALID_MAGMA_GRUNT_2, 22
.set LOCALID_MAGMA_GRUNT_1, 29


MtChimney_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, MtChimney_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_OnTransition
	.byte 0

MtChimney_OnTransition:
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
    call_if_gt VAR_MT_CHIMNEY_STATE, 1, MtChimney_EventScript_TabithaPos
	end

MtChimney_OnResume:
	setstepcallback STEP_CB_ASH
	end

MtChimney_EventScript_Archie::
	lock
    applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	call_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieLetMeThrough
	call_if_set FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieLetMeThrough
	closemessage
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
	release
	end

MtChimney_EventScript_ArchieLetMeThrough::
	msgbox MtChimney_Text_ArchieLetMeThrough, MSGBOX_DEFAULT
	return

MtChimney_EventScript_LavaCookieLady::
	lock
	faceplayer
	showmoneybox 0, 0
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
	checkmoney 200
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
	checkitemspace ITEM_LAVA_COOKIE
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
	giveitem ITEM_LAVA_COOKIE
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
	hidemoneybox
	release
	end

MtChimney_EventScript_BagIsFull::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

MtChimney_EventScript_RemoveMoney::
	removemoney 200
	updatemoneybox
	return

MtChimney_EventScript_DeclineLavaCookie::
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

MtChimney_EventScript_NotEnoughMoney::
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

MtChimney_Movement_Unused1:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

MtChimney_Movement_Unused2:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

MtChimney_Movement_Unused3:
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_Unused4:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

MtChimney_Movement_Unused5:
	delay_16
	delay_16
	delay_16
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

MtChimney_Movement_Unused6:
	delay_16
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_Unused7:
	delay_16
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

MtChimney_Movement_Unused8:
	delay_16
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_down
	step_end

MtChimney_Movement_Unused9:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_Unused10:
	walk_down
	step_end

MtChimney_Movement_Unused11:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_Unused12:
	delay_16
	delay_16
	walk_in_place_left
	delay_16
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_Unused13:
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_left
	delay_16
	walk_down
	walk_down
	step_end

MtChimney_Movement_Unused14:
	lock_facing_direction
	walk_fast_left
	unlock_facing_direction
	face_right
	step_end

MtChimney_Movement_Unused15:
	walk_left
	walk_in_place_right
	delay_16
	step_end

MtChimney_EventScript_BusyAquaGrunt1::
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
	end

MtChimney_EventScript_BusyAquaGrunt2::
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
	end

MtChimney_EventScript_BusyAquaGrunt3::
	msgbox MtChimney_Text_MagmasInsane, MSGBOX_SIGN
	end

MtChimney_EventScript_Grunt2::
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_BusyMagmaGrunt1::
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
	end

MtChimney_EventScript_BusyMagmaGrunt2::
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
	end

MtChimney_EventScript_BusyMagmaGrunt3::
	msgbox MtChimney_Text_StompEveryone, MSGBOX_SIGN
	end

MtChimney_EventScript_BusyMagmaGrunt4::
	msgbox MtChimney_Text_GetItAll, MSGBOX_SIGN
	end

MtChimney_EventScript_BusyMagmaGrunt5::
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
	end

MtChimney_EventScript_BusyMagmaGrunt6::
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
	end

MtChimney_EventScript_MagmaPoochyena::
    waitse
    playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
    waitmoncry
	end

MtChimney_EventScript_AquaPoochyena::
    waitse
    playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
    waitmoncry
	end

MtChimney_EventScript_MeteoriteMachine::
	lockall
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
	releaseall
	end

MtChimney_EventScript_RouteSign::
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
	end

MtChimney_EventScript_Shelby::
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RematchShelby
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
	release
	end

MtChimney_EventScript_DefeatedShelby::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_SHELBY_1
	release
	end

MtChimney_EventScript_RematchShelby::
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_Melissa::
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_Sheila::
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_Shirley::
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_Grunt1::
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_Sawyer::
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
	release
	end

MtChimney_EventScript_SawyerDefeated::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_SAWYER_1
	release
	end

MtChimney_EventScript_SawyerRematch::
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
	end

MtChimney_Text_MaxieDefeat:
	.string "Ugh!\nYou are…quite capable…\lI fell behind, but only an inch…$"

MtChimney_Text_TabithaDefeat:
	.string "Yet again?\nHyuhn!$"

MtChimney_Text_Grunt2Intro:
	.string "We of Team Magma are working hard for\neveryone's sake.\pLike, if there's more land, there'd be\nmore places to live.\lEveryone would be happy!$"

MtChimney_Text_Grunt2Defeat:
	.string "Hunh?\n"
	.string "What do you mean I lost?$"

MtChimney_Text_Grunt2PostBattle:
	.string "Our Boss says, “It will make everyone\n"
	.string "happy.”\p"
	.string "But why does everyone keep getting\n"
	.string "in our way?$"

MtChimney_Text_Grunt1Intro:
	.string "If there were more land, I'd be able\n"
	.string "to get a big house of my own!\p"
	.string "I'm going to build it on hardened lava!$"

MtChimney_Text_Grunt1Defeat:
	.string "My dream of a big house…$"

MtChimney_Text_Grunt1PostBattle:
	.string "A kid like you, you ought to be\n"
	.string "splashing about in the waves!$"

MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
	.string "That annoying Team Aqua…\n"
	.string "They always mess with our plans!$"

MtChimney_Text_MeteoritesPackAmazingPower:
	.string "Meteorites pack amazing power!$"

MtChimney_Text_StompEveryone:
	.string "Go!\nStomp Team Aqua!\lAnd expand the land!$"

MtChimney_Text_GetItAll:
	.string "The energy contained within\nMt. Chimney!\pAnd the power of the Meteorite!\pWe in Team Magma are gonna get it all\nfor ourselves! Wa ha ha ha!$"

MtChimney_Text_DouseThemInFire:
	.string "Yeah!\n"
	.string "Douse them in fire!$"

MtChimney_Text_KeepMakingMoreLand:
	.string "Stay out of our way, OK?\pWe're trying to enlarge the landmass\nfor the good of everybody!$"

MtChimney_Text_Bufoh:
	.string "Pwump!$"

MtChimney_Text_ArchieLetMeThrough:
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: Confound the lot of you!\nLet me through, you bilge rats!$"

MtChimney_Text_MagmaOutnumbersUs:
	.string "Oh no… Team Magma outnumbers us!\nWe can't keep up with them!$"

MtChimney_Text_LessHabitatForWaterPokemon:
	.string "If they expand the land, there'll be\nfewer habitats for Water Pokémon!$"

MtChimney_Text_MagmasInsane:
	.string "Team Magma wants to expand the\nlandmass? How's that for insane?$"

MtChimney_Text_Bushaa:
	.string "Pfloosh!$"

MtChimney_Text_LavaCookiesJust200:
	.string "Lava Cookies are Mt. Chimney's local\n"
	.string "specialty.\p"
	.string "Try one. It's just ¥200.$"

MtChimney_Text_ThankYouDear:
	.string "Thank you, dear!$"

MtChimney_Text_YouveNotGotTheMoney:
	.string "Oh, dear. You can't buy a thing if\n"
	.string "you've not got the money.$"

MtChimney_Text_OhFineThen:
	.string "Oh, fine then.$"

MtChimney_Text_MachineMakesNoResponse:
	.string "This mysterious machine…\n"
	.string "It makes no response whatsoever.$"

MtChimney_Text_RouteSign:
	.string "{DOWN_ARROW} Jagged Path\n"
	.string "Lavaridge Town ahead$"

MtChimney_Text_ShelbyIntro:
	.string "I've been to the hot springs and\n"
	.string "refreshed my tired bones.\l"
	.string "Right now I'm feeling strong!$"

MtChimney_Text_ShelbyDefeat:
	.string "Oh, my goodness.\n"
	.string "Now, aren't you something!$"

MtChimney_Text_ShelbyPostBattle:
	.string "Well, well, I've lost. I can't call\n"
	.string "myself an Expert now, can I?$"

MtChimney_Text_ShelbyRegister:
	.string "Thank you, child. It was fun, as if\n"
	.string "I were battling my own grandchild.\p"
	.string "Please, come see me again for\n"
	.string "a rematch.$"

MtChimney_Text_ShelbyRematchIntro:
	.string "If you can mesh your heart with those\n"
	.string "of your Pokémon, why, you should be\l"
	.string "able to achieve great things.$"

MtChimney_Text_ShelbyRematchDefeat:
	.string "Oh, my goodness.\n"
	.string "Now, aren't you something!$"

MtChimney_Text_ShelbyPostRematch:
	.string "Perhaps your heart has become one\n"
	.string "with the hearts of your Pokémon.$"

MtChimney_Text_MelissaIntro:
	.string "I've got the fire in me, baby.\n"
	.string "I can't stand it! I have to battle!$"

MtChimney_Text_MelissaDefeat:
	.string "Ooh, that was a scorching-hot match!$"

MtChimney_Text_MelissaPostBattle:
	.string "The heat of Mt. Chimney warms\n"
	.string "me up, baby!$"

MtChimney_Text_SheilaIntro:
	.string "I've finally made it to Mt. Chimney.\n"
	.string "I want to make my Pokémon battle!$"

MtChimney_Text_SheilaDefeat:
	.string "The way you battle…\n"
	.string "It's like a Mt. Chimney eruption!$"

MtChimney_Text_SheilaPostBattle:
	.string "Like I said, I've finally made it to\n"
	.string "Mt. Chimney. It would be a shame if\l"
	.string "I only do a little sightseeing…\p"
	.string "I want to get in some battles and buy\n"
	.string "Cookies as souvenirs.$"

MtChimney_Text_ShirleyIntro:
	.string "Since I bathed in the hot springs,\n"
	.string "I've been feeling great!\l"
	.string "I'm sure I'm going to win!$"

MtChimney_Text_ShirleyDefeat:
	.string "Yowch!\n"
	.string "I'm getting a chill out of the water.$"

MtChimney_Text_ShirleyPostBattle:
	.string "I'll have to take another dip in the\n"
	.string "hot springs. Want to join me?\p"
	.string "Just joking!$"

MtChimney_Text_SawyerIntro:
	.string "This is one fine mountain! Plenty of\n"
	.string "hot people around for company!$"

MtChimney_Text_SawyerDefeat:
	.string "Oh, you're a real firebrand, too!$"

MtChimney_Text_SawyerPostBattle:
	.string "I think I need a dip in Lavaridge\n"
	.string "Hot Spring with the locals!$"

MtChimney_Text_SawyerRegister:
	.string "I like little fireballs like you.\n"
	.string "Let me register you in my Pokénav.$"

MtChimney_Text_SawyerRematchIntro:
	.string "I'm happily surrounded by hot people\n"
	.string "around these parts. I won't lose!$"

MtChimney_Text_SawyerRematchDefeat:
	.string "Gosh, you're still the same\n"
	.string "firebrand as before!$"

MtChimney_Text_SawyerPostRematch:
	.string "Actually, it really is hot here.\n"
	.string "I'm overdressed for these parts.$"

MtChimney_EventScript_TabithaPos::
	setobjectxyperm LOCALID_TABITHA, 14, 5
	setobjectmovementtype LOCALID_TABITHA, MOVEMENT_TYPE_FACE_DOWN
	return


MtChimney_EventScript_ArchieGangOnTrigger1::
	setvar VAR_TEMP_0, 1
	goto MtChimney_EventScript_ArchieGangOn
	return


MtChimney_EventScript_ArchieGangOnTrigger2::
	setvar VAR_TEMP_0, 2
	goto MtChimney_EventScript_ArchieGangOn
	return


MtChimney_EventScript_ArchieGangOnTrigger3::
	setvar VAR_TEMP_0, 3
	goto MtChimney_EventScript_ArchieGangOn
	return


MtChimney_EventScript_ArchieGangOnTrigger4::
	setvar VAR_TEMP_0, 4
	goto MtChimney_EventScript_ArchieGangOn
	return


MtChimney_EventScript_ArchieGangOnTrigger5::
	setvar VAR_TEMP_0, 5
	goto MtChimney_EventScript_ArchieGangOn
	return


MtChimney_EventScript_ArchieGangOnTrigger6::
	setvar VAR_TEMP_0, 6
	goto MtChimney_EventScript_ArchieGangOn
	return


MtChimney_EventScript_ArchieGangOn::
	lock
	delay 8
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement OBJ_EVENT_ID_PLAYER
	fadescreen FADE_TO_BLACK
	special SpawnCameraObject
	switch VAR_TEMP_0
	case 1, MtChimney_EventScript_ArchieGangOn_3
	case 2, MtChimney_EventScript_ArchieGangOn_4
	case 3, MtChimney_EventScript_ArchieGangOn_5
	case 4, MtChimney_EventScript_ArchieGangOn_6
	case 5, MtChimney_EventScript_ArchieGangOn_7
	case 6, MtChimney_EventScript_ArchieGangOn_8
MtChimney_EventScript_ArchieGangOn_1:
	waitmovement OBJ_EVENT_ID_CAMERA
	fadescreen FADE_FROM_BLACK
	delay 16
	applymovement 12, Common_Movement_WalkInPlaceDown
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
	delay 4
	applymovement 15, Common_Movement_WalkInPlaceRight
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
	delay 4
	applymovement 14, Common_Movement_WalkInPlaceUp
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
	waitmovement 14
	waitmoncry
	delay 8
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceLeft
	waitmovement LOCALID_ARCHIE
	msgbox MtChimney_EventScript_ArchieGangOn_Text_0
	closemessage
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
	applymovement 11, Common_Movement_WalkInPlaceLeft
	waitmovement 11
	waitmoncry
	delay 16
	fadescreen FADE_TO_BLACK
	switch VAR_TEMP_0
	case 1, MtChimney_EventScript_ArchieGangOn_11
	case 2, MtChimney_EventScript_ArchieGangOn_12
	case 3, MtChimney_EventScript_ArchieGangOn_13
	case 4, MtChimney_EventScript_ArchieGangOn_14
	case 5, MtChimney_EventScript_ArchieGangOn_15
	case 6, MtChimney_EventScript_ArchieGangOn_16
MtChimney_EventScript_ArchieGangOn_9:
	waitmovement OBJ_EVENT_ID_CAMERA
	special RemoveCameraObject
	fadescreen FADE_FROM_BLACK
	setvar VAR_MT_CHIMNEY_STATE, 1
	release
	end

MtChimney_EventScript_ArchieGangOn_3:
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraPanTo3v1_1
	goto MtChimney_EventScript_ArchieGangOn_1

MtChimney_EventScript_ArchieGangOn_4:
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraPanTo3v1_2
	goto MtChimney_EventScript_ArchieGangOn_1

MtChimney_EventScript_ArchieGangOn_5:
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraPanTo3v1_3
	goto MtChimney_EventScript_ArchieGangOn_1

MtChimney_EventScript_ArchieGangOn_6:
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraPanTo3v1_4
	goto MtChimney_EventScript_ArchieGangOn_1

MtChimney_EventScript_ArchieGangOn_7:
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraPanTo3v1_5
	goto MtChimney_EventScript_ArchieGangOn_1

MtChimney_EventScript_ArchieGangOn_8:
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraPanTo3v1_6
	goto MtChimney_EventScript_ArchieGangOn_1

MtChimney_EventScript_ArchieGangOn_11:
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraBackToPlayer_1
	goto MtChimney_EventScript_ArchieGangOn_9

MtChimney_EventScript_ArchieGangOn_12:
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraBackToPlayer_2
	goto MtChimney_EventScript_ArchieGangOn_9

MtChimney_EventScript_ArchieGangOn_13:
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraBackToPlayer_3
	goto MtChimney_EventScript_ArchieGangOn_9

MtChimney_EventScript_ArchieGangOn_14:
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraBackToPlayer_4
	goto MtChimney_EventScript_ArchieGangOn_9

MtChimney_EventScript_ArchieGangOn_15:
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraBackToPlayer_5
	goto MtChimney_EventScript_ArchieGangOn_9

MtChimney_EventScript_ArchieGangOn_16:
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraBackToPlayer_6
	goto MtChimney_EventScript_ArchieGangOn_9


MtChimney_Movement_CameraPanTo3v1_1:
	walk_left
	walk_left
	walk_diag_southwest
	walk_diag_southwest
	step_end

MtChimney_Movement_CameraPanTo3v1_2:
	walk_left
	walk_left
	walk_left
	walk_diag_southwest
	step_end

MtChimney_Movement_CameraPanTo3v1_3:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MtChimney_Movement_CameraPanTo3v1_4:
	walk_left
	walk_left
	walk_left
	walk_diag_northwest
	step_end

MtChimney_Movement_CameraPanTo3v1_5:
	walk_left
	walk_left
	walk_diag_northwest
	walk_diag_northwest
	step_end

MtChimney_Movement_CameraPanTo3v1_6:
	walk_left
	walk_diag_northwest
	walk_diag_northwest
	walk_diag_northwest
	step_end

MtChimney_Movement_CameraBackToPlayer_1:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	step_end

MtChimney_Movement_CameraBackToPlayer_2:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	step_end

MtChimney_Movement_CameraBackToPlayer_3:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

MtChimney_Movement_CameraBackToPlayer_4:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	step_end

MtChimney_Movement_CameraBackToPlayer_5:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	step_end

MtChimney_Movement_CameraBackToPlayer_6:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

MtChimney_EventScript_MagmaAdminTabithaTrigger1::
	setvar VAR_TEMP_0, 1
	goto MtChimney_EventScript_MagmaAdminTabitha
	return


MtChimney_EventScript_MagmaAdminTabithaTrigger2::
	setvar VAR_TEMP_0, 2
	goto MtChimney_EventScript_MagmaAdminTabitha
	return


MtChimney_EventScript_MagmaAdminTabitha::
	lock
	compare VAR_MT_CHIMNEY_STATE, 2
	goto_if_ge MtChimney_EventScript_MagmaAdminTabitha_2
	delay 16
	playse SE_PIN
	applymovement LOCALID_TABITHA, Common_Movement_ExclamationMark
	waitmovement LOCALID_TABITHA
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceLeft
	switch VAR_TEMP_0
	case 1, MtChimney_EventScript_MagmaAdminTabitha_7
	case 2, MtChimney_EventScript_MagmaAdminTabitha_8
MtChimney_EventScript_MagmaAdminTabitha_5:
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox MtChimney_EventScript_MagmaAdminTabitha_Text_1
	delay 8
	applymovement LOCALID_TABITHA, MtChimney_Movement_TabithaStomping
	msgbox MtChimney_EventScript_MagmaAdminTabitha_Text_2
	waitmovement LOCALID_TABITHA
	delay 8
	applymovement LOCALID_TABITHA, MtChimney_Movement_TabithaStomping
	msgbox MtChimney_EventScript_MagmaAdminTabitha_Text_3
	waitmovement LOCALID_TABITHA
	delay 8
	applymovement LOCALID_TABITHA, MtChimney_Movement_TabithaStomping
	msgbox MtChimney_EventScript_MagmaAdminTabitha_Text_4
	waitmovement LOCALID_TABITHA
	closemessage
	delay 8
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_TABITHA
	msgbox MtChimney_EventScript_MagmaAdminTabitha_Text_5
	closemessage
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceLeft
	waitmovement LOCALID_TABITHA
	msgbox MtChimney_EventScript_MagmaAdminTabitha_Text_6
	closemessage
	trainerbattle_no_intro TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaDefeat
	msgbox MtChimney_EventScript_MagmaAdminTabitha_Text_7
	closemessage
	applymovement LOCALID_TABITHA, MtChimney_Movement_TabithaGoUp
	waitmovement LOCALID_TABITHA
	setvar VAR_MT_CHIMNEY_STATE, 2
MtChimney_EventScript_MagmaAdminTabitha_1:
	release
	end

MtChimney_EventScript_MagmaAdminTabitha_2:
	msgbox MtChimney_EventScript_MagmaAdminTabitha_Text_0, MSGBOX_NPC
	goto MtChimney_EventScript_MagmaAdminTabitha_1

MtChimney_EventScript_MagmaAdminTabitha_7:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	goto MtChimney_EventScript_MagmaAdminTabitha_5

MtChimney_EventScript_MagmaAdminTabitha_8:
	applymovement OBJ_EVENT_ID_PLAYER, MtChimney_Movement_PlayerFrontOfAdmin
	goto MtChimney_EventScript_MagmaAdminTabitha_5


MtChimney_Movement_PlayerFrontOfAdmin:
	walk_right
	walk_up
	walk_in_place_right
	step_end

MtChimney_Movement_TabithaStomping:
	jump_in_place_left
	jump_in_place_left
	jump_in_place_left
	step_end

MtChimney_Movement_TabithaGoUp:
	walk_up
	walk_in_place_down
	step_end

MtChimney_EventScript_MaxieTrigger1::
	setvar VAR_TEMP_0, 1
	goto MtChimney_EventScript_Maxie
	return


MtChimney_EventScript_MaxieTrigger2::
	setvar VAR_TEMP_0, 2
	goto MtChimney_EventScript_Maxie
	return


MtChimney_EventScript_MaxieTrigger3::
	setvar VAR_TEMP_0, 3
	goto MtChimney_EventScript_Maxie
	return


MtChimney_EventScript_Maxie::
	lock
	delay 8
	switch VAR_TEMP_0
	case 1, MtChimney_EventScript_Maxie_3
	case 2, MtChimney_EventScript_Maxie_4
	case 3, MtChimney_EventScript_Maxie_5
MtChimney_EventScript_Maxie_1:
	waitmovement OBJ_EVENT_ID_PLAYER
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraPanToMaxie
	waitmovement OBJ_EVENT_ID_CAMERA
	special RemoveCameraObject
	delay 8
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
	msgbox MtChimney_EventScript_Maxie_Text_0
	closemessage
	playse SE_PIN
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
	waitmovement LOCALID_MAXIE
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceLeft
	waitmovement LOCALID_MAXIE
	msgbox MtChimney_EventScript_Maxie_Text_1
	delay 16
	msgbox MtChimney_EventScript_Maxie_Text_2
	msgbox MtChimney_EventScript_Maxie_Text_3
	closemessage
	delay 32
	msgbox MtChimney_EventScript_Maxie_Text_4
	closemessage
	delay 8
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
	delay 16
	msgbox MtChimney_EventScript_Maxie_Text_5
	closemessage
	playse SE_BIKE_BELL
	waitse
	playse SE_PIN
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
	waitmovement LOCALID_MAXIE
	msgbox MtChimney_EventScript_Maxie_Text_6
	closemessage
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceRight
	waitmovement LOCALID_MAXIE
	msgbox MtChimney_EventScript_Maxie_Text_7
	closemessage
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceLeft
	waitmovement LOCALID_MAXIE
	msgbox MtChimney_EventScript_Maxie_Text_8
	closemessage
	delay 8
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_MaxieCameraBackToPlayer
	applymovement LOCALID_MAXIE, Common_Movement_WalkLeft
	waitmovement OBJ_EVENT_ID_CAMERA
	special RemoveCameraObject
	giveitem ITEM_METEORITE, 1
	setflag FLAG_RECEIVED_METEORITE
	msgbox MtChimney_EventScript_Maxie_Text_9
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, MtChimney_Movement_PlayeWatchMaxieExit
	applymovement LOCALID_MAXIE, MtChimney_Movement_MaxieExit
	delay 24
	fadescreen FADE_TO_BLACK
	waitmovement LOCALID_MAXIE
	removeobject LOCALID_MAXIE
	removeobject LOCALID_MAGMA_GRUNT_1
	removeobject LOCALID_TABITHA
	removeobject LOCALID_MAGMA_GRUNT_2
	removeobject 13
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
	fadenewbgm MUS_DUMMY
	setobjectxyperm LOCALID_ARCHIE, 10, 6
	setobjectxyperm 7, 9, 6
	setobjectxyperm 8, 9, 7
	addobject LOCALID_ARCHIE
	addobject 7
	addobject 8
	delay 8
	fadescreen FADE_FROM_BLACK
	delay 16
	playbgm MUS_ENCOUNTER_AQUA, FALSE
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayer
	applymovement 8, MtChimney_Movement_AquaGrunt8ApproachPlayer
	applymovement 7, MtChimney_Movement_AquaGrunt7ApproachPlayer
	waitmovement 7
	msgbox MtChimney_EventScript_Maxie_Text_10
	delay 16
	msgbox MtChimney_EventScript_Maxie_Text_11
	closemessage
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExit
	applymovement 8, MtChimney_Movement_AquaGrunt8Exit
	applymovement 7, MtChimney_Movement_AquaGrunt7Exit
	delay 24
	fadescreen FADE_TO_BLACK
	waitmovement 7
	removeobject LOCALID_ARCHIE
	removeobject 7
	removeobject 8
	fadedefaultbgm
	fadescreen FADE_FROM_BLACK
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
	setvar VAR_MT_CHIMNEY_STATE, 3
	release
	end

MtChimney_EventScript_Maxie_3:
	applymovement OBJ_EVENT_ID_PLAYER, MtChimney_Movement_PlayerFrontOfMaxie1
	goto MtChimney_EventScript_Maxie_1

MtChimney_EventScript_Maxie_4:
	applymovement OBJ_EVENT_ID_PLAYER, MtChimney_Movement_PlayerFrontOfMaxie2
	goto MtChimney_EventScript_Maxie_1

MtChimney_EventScript_Maxie_5:
	applymovement OBJ_EVENT_ID_PLAYER, MtChimney_Movement_PlayerFrontOfMaxie3
	goto MtChimney_EventScript_Maxie_1


MtChimney_Movement_CameraPanToMaxie:
	walk_right
	walk_right
	step_end

MtChimney_Movement_PlayerFrontOfMaxie1:
	walk_right
	walk_down
	walk_in_place_right
	step_end

MtChimney_Movement_PlayerFrontOfMaxie2:
	walk_right
	step_end

MtChimney_Movement_PlayerFrontOfMaxie3:
	walk_right
	walk_up
	walk_in_place_right
	step_end

MtChimney_Movement_MaxieCameraBackToPlayer:
	walk_left
	walk_left
	step_end

MtChimney_Movement_PlayeWatchMaxieExit:
	delay_16
	walk_in_place_down
	delay_16
	walk_in_place_left
	step_end

MtChimney_Movement_MaxieExit:
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

MtChimney_Movement_ArchieApproachPlayer:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MtChimney_Movement_AquaGrunt7ApproachPlayer:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_in_place_right
	step_end

MtChimney_Movement_AquaGrunt8ApproachPlayer:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MtChimney_Movement_ArchieExit:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MtChimney_Movement_AquaGrunt7Exit:
	walk_in_place_down
	walk_in_place_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MtChimney_Movement_AquaGrunt8Exit:
	walk_in_place_up
	walk_in_place_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MtChimney_EventScript_ArchieGangOn_Text_0:
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: Get out of my blasted way, ye\nscurvy Team Magma knaves!\pOr face a keelhauling!$"

MtChimney_EventScript_MagmaAdminTabitha_Text_0:
	.string "{COLOR RED}Tabitha{COLOR DARK_GRAY}: The Boss is right this way!\pOh, I do hope that you can be shown\nTeam Magma's true power!$"

MtChimney_EventScript_MagmaAdminTabitha_Text_1:
	.string "{COLOR RED}Tabitha{COLOR DARK_GRAY}: Hyahyahya?!\pIt's you!\nYou're the one who tried to interrupt\lme, Tabitha, at Meteor Falls!\pD-d-do you intend to get in my way once\nmore?\pUnngh!\nYou're really…$"

MtChimney_EventScript_MagmaAdminTabitha_Text_2:
	.string "really, really, really, really, really,\nreally…$"

MtChimney_EventScript_MagmaAdminTabitha_Text_3:
	.string "really, really, really, really, really,\nreally, really, really, really, really…$"

MtChimney_EventScript_MagmaAdminTabitha_Text_4:
	.string "reeeallllyyyyy…\pan obnoxious child, aren't you?!$"

MtChimney_EventScript_MagmaAdminTabitha_Text_5:
	.string "Ahh… Ahh…$"

MtChimney_EventScript_MagmaAdminTabitha_Text_6:
	.string "I will…crush you.\pSo that you…never get in my way…again.$"

MtChimney_EventScript_MagmaAdminTabitha_Text_7:
	.string "I knew you would be strong.\pWhat a shame though!\nThe Meteorite we got from\lProfessor Whoever is already in our\lBoss's hands!\pWhere's the Boss, you ask?\nAh, yes, yes, right this way!\pOh, I do hope that you can be shown\nTeam Magma's true power!\pAhya!\nAhyahyahyahya!$"

MtChimney_EventScript_Maxie_Text_0:
	.string "{COLOR RED}???{COLOR DARK_GRAY}: The power contained in the\nMeteorite…\pIf we merge the explosive energy\ncontained within the planet's core\lwith the Meteorite's power…$"

MtChimney_EventScript_Maxie_Text_1:
	.string "Hm?\nWho are you?\p… … … … … …\n… … … … … …\pI'd heard Archie bemoaning a child who's\nbeen meddling in Team Aqua's affairs.\lIt must be you he meant.\pAnd, your presence here tells me that\nyou have defeated Tabitha.\pHmph.\nYou show true promise.\pFine.\nI will attempt to educate you.$"

MtChimney_EventScript_Maxie_Text_2:
	.string "Thousands of years ago, there lived\na most powerful being that was to be\lcapable of creating new lands on the\lplanet.\pThe power which we in Team Magma\nseek--\pThis power, which can expand the\navailable landmass, belongs to a\llegendary and super-ancient Pokémon.\pThough now it slumbers, having lost the\nsource of its power and been trapped\lin a deep sleep.$"

MtChimney_EventScript_Maxie_Text_3:
	.string "So what is it that we must do to\nawaken this slumbering giant?\pOur research has led us here, to\nMt. Chimney.\lYes, here…to this very Meteorite.\pIf we create the right conditions, we\nshould find ourselves able to alter\lthe Meteorite's qualities.\pYes, even into a Mega Stone.\pEven into a Key Stone.\pAnd, here at Mt. Chimney--\pHmph… I should not say too much.\nThat is the end of today's lesson.$"

MtChimney_EventScript_Maxie_Text_4:
	.string "Now then.\nI believe it is time we begin.\pThe time for the purge has come.\pAny fool standing in our way would be\nmet without mercy!\pI will bury you by my own hand.\pI hope you appreciate this honor!$"

MtChimney_EventScript_Maxie_Text_5:
	.string "Oh? So you repulsed the great Maxie in\nbattle.\lHaha… This is amusing!\pAn excellent start!\pThis time, permit me to unleash my full\nstrength!\pOnce you've tasted my Pokémon's Mega\nEvolved power, you will say good-bye\lto your last shred of hope!$"

MtChimney_EventScript_Maxie_Text_6:
	.string "Hm?$"

MtChimney_EventScript_Maxie_Text_7:
	.string "Yes, it's me.\p…\nOh?\pThen you've found it.\pI understand.\nI will come at once.$"

MtChimney_EventScript_Maxie_Text_8:
	.string "I am sorry to cut our battle short, but\nI'm afraid I must excuse myself.\pSuch rudeness demands reparation.\nTake this Meteorite with my apologies.\lYou may do with it what you like.$"

MtChimney_EventScript_Maxie_Text_9:
	.string "And I will not again forget the face of\nthe Trainer who managed to thwart me\lin battle!$"

MtChimney_EventScript_Maxie_Text_10:
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: Huh?\nIf it ain't that little scamp!\pBut blast that Maxie!\nHe just escaped us!\pAnd he just left behind the Meteorite\nthat he's been crazy about finding?$"

MtChimney_EventScript_Maxie_Text_11:
	.string "Can't be--!\pCould he have found out where the real\norbs are hidden?!\pThat sneaky little scientific\nso-and-so!\pI'm always left watching his bony\nbackside run two steps ahead of me!$"
