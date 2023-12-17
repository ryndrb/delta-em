.set LOCALID_WALLY, 2
.set LOCALID_BOY, 3
.set LOCALID_WALLYS_DAD, 5
.set LOCALID_GYM_BOY, 8
.set LOCALID_SCOTT, 9

PetalburgCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
	.byte 0

PetalburgCity_OnTransition:
	setflag FLAG_VISITED_PETALBURG_CITY
	call Common_EventScript_SetupRivalGfxId
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
	call_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_EventScript_SetGymDoorsUnlocked
	call_if_ge VAR_LAVARIDGE_TOWN_STATE, 2, PetalburgCity_EventScript_HideLavaridgeRival
	end

PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
	return

PetalburgCity_EventScript_DisableMapNameAndMusic::
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return

PetalburgCity_EventScript_SetGymDoorsUnlocked::
	setvar VAR_PETALBURG_GYM_STATE, 7
	return

PetalburgCity_EventScript_HideLavaridgeRival::
	setflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL
	return

PetalburgCity_OnFrame:
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WallysDadGivesPlayerSurf
	map_script_2 VAR_PETALBURG_CITY_STATE_2, 2, PetalburgCity_EventScript_RivalTeleportDone
	.2byte 0

PetalburgCity_EventScript_WallyTutorial::
	lockall
	special SavePlayerParty
	special LoadWallyZigzagoon
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyTutorialWally
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
	waitmovement 0
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceRight, MAP_PETALBURG_CITY
	waitmovement LOCALID_WALLY, MAP_PETALBURG_CITY
	delay 8
	playse SE_PIN
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark, MAP_PETALBURG_CITY
	waitmovement LOCALID_WALLY, MAP_PETALBURG_CITY
	delay 8
	msgbox Route102_Text_Whoa, MSGBOX_DEFAULT
	closemessage
	delay 8
	special StartWallyTutorialBattle
	waitstate
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceLeft, MAP_PETALBURG_CITY
	waitmovement LOCALID_WALLY, MAP_PETALBURG_CITY
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
	closemessage
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	setvar VAR_PETALBURG_CITY_STATE, 3
	fadedefaultbgm
	clearflag FLAG_DONT_TRANSITION_MUSIC
	special LoadPlayerParty
	setvar VAR_PETALBURG_GYM_STATE, 1
	delay 8
	warp MAP_PETALBURG_CITY_GYM, 4, 108
	waitstate
	releaseall
	end

PetalburgCity_EventScript_Boy::
	lock
	faceplayer
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BOY, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

PetalburgCity_EventScript_WallysMom::
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
	end

PetalburgCity_Movement_WallyTutorialPlayer:
	delay_8
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
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
	walk_up
	walk_up
	walk_in_place_right
	step_end

PetalburgCity_Movement_WallyTutorialWally:
	delay_8
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
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
	walk_up
	walk_up
	walk_right
	delay_16
	walk_in_place_up
	delay_16
	delay_16
	walk_in_place_right
	step_end

PetalburgCity_EventScript_GymSign::
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
	end

PetalburgCity_EventScript_CitySign::
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
	end

PetalburgCity_EventScript_Gentleman::
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
	end

PetalburgCity_EventScript_WallyHouseSign::
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
	end

PetalburgCity_EventScript_ShowGymToPlayer0::
	lockall
	setvar VAR_0x8008, 0
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end

PetalburgCity_EventScript_ShowGymToPlayer1::
	lockall
	setvar VAR_0x8008, 1
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end

PetalburgCity_EventScript_ShowGymToPlayer2::
	lockall
	setvar VAR_0x8008, 2
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end

PetalburgCity_EventScript_ShowGymToPlayer3::
	lockall
	setvar VAR_0x8008, 3
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end

PetalburgCity_EventScript_ShowGymToPlayer::
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceRight
	waitmovement 0
	playbgm MUS_FOLLOW_ME, FALSE
	playse SE_PIN
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
	waitmovement 0
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement 0
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerSeeBoyAway
	waitmovement LOCALID_GYM_BOY
	fadedefaultbgm
	releaseall
	end

PetalburgCity_EventScript_BoyApproachPlayer0::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement 0
	return

PetalburgCity_EventScript_BoyApproachPlayer1::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
	waitmovement 0
	return

PetalburgCity_EventScript_BoyApproachPlayer2::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	return

PetalburgCity_EventScript_BoyApproachPlayer3::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement 0
	return

PetalburgCity_EventScript_LeadPlayerToGym0::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
	waitmovement 0
	return

PetalburgCity_EventScript_LeadPlayerToGym1::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
	waitmovement 0
	return

PetalburgCity_EventScript_LeadPlayerToGym2::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
	waitmovement 0
	return

PetalburgCity_EventScript_LeadPlayerToGym3::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
	waitmovement 0
	return

@ Unused
PetalburgCity_Movement_Delay48::
	delay_16
	delay_16
	delay_16
	step_end

PetalburgCity_Movement_BoyApproachPlayer0:
	walk_right
	walk_right
	walk_right
	walk_in_place_up
	step_end

PetalburgCity_Movement_BoyApproachPlayer1:
	walk_right
	walk_right
	step_end

PetalburgCity_Movement_BoyApproachPlayer2:
	walk_right
	walk_right
	walk_right
	walk_in_place_down
	step_end

PetalburgCity_Movement_BoyApproachPlayer3:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_in_place_down
	step_end

PetalburgCity_Movement_BoyWalkToGym0:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_in_place_up
	step_end

PetalburgCity_Movement_BoyWalkToGym1:
	walk_down
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
	walk_right
	walk_in_place_up
	step_end

PetalburgCity_Movement_BoyWalkToGym2:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_in_place_up
	step_end

PetalburgCity_Movement_BoyWalkToGym3:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_in_place_up
	step_end

PetalburgCity_Movement_BoyWalkAway:
	walk_down
	walk_left
	walk_left
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

PetalburgCity_Movement_PlayerSeeBoyAway:
	delay_16
	walk_in_place_down
	delay_16
	walk_in_place_left
	step_end

PetalburgCity_Movement_PlayerWalkToGym0:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

PetalburgCity_Movement_PlayerWalkToGym1:
	delay_16
	delay_16
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	step_end

PetalburgCity_Movement_PlayerWalkToGym2:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

PetalburgCity_Movement_PlayerWalkToGym3:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	step_end

PetalburgCity_EventScript_Scott0::
	lockall
	addobject LOCALID_SCOTT
	setvar VAR_0x8008, 0
	setobjectxy LOCALID_SCOTT, 13, 10
	goto PetalburgCity_EventScript_Scott
	end

PetalburgCity_EventScript_Scott1::
	lockall
	addobject LOCALID_SCOTT
	setvar VAR_0x8008, 1
	setobjectxy LOCALID_SCOTT, 13, 11
	goto PetalburgCity_EventScript_Scott
	end

PetalburgCity_EventScript_Scott2::
	lockall
	addobject LOCALID_SCOTT
	setvar VAR_0x8008, 2
	setobjectxy LOCALID_SCOTT, 13, 12
	goto PetalburgCity_EventScript_Scott
	end

PetalburgCity_EventScript_Scott3::
	lockall
	addobject LOCALID_SCOTT
	setvar VAR_0x8008, 3
	setobjectxy LOCALID_SCOTT, 13, 13
	goto PetalburgCity_EventScript_Scott
	end

PetalburgCity_EventScript_Scott::
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	setvar VAR_SCOTT_STATE, 1
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	delay 30
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	delay 30
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
	removeobject LOCALID_SCOTT
	releaseall
	end

PetalburgCity_EventScript_ScottExit0::
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
	waitmovement 0
	return

PetalburgCity_EventScript_ScottExit1::
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
	waitmovement 0
	return

PetalburgCity_EventScript_ScottExit2::
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
	waitmovement 0
	return

PetalburgCity_EventScript_ScottExit3::
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
	waitmovement 0
	return

PetalburgCity_Movement_ScottStartWalkLeft:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_ScottApproachPlayer:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_ScottExit0:
	walk_down
	walk_down
	walk_left
	walk_left
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

PetalburgCity_Movement_PlayerWatchScottExit0:
	delay_16
	walk_in_place_down
	delay_16
	delay_16
	delay_8
	walk_in_place_left
	step_end

PetalburgCity_Movement_ScottExit1:
	walk_down
	walk_left
	walk_left
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

PetalburgCity_Movement_PlayerWatchScottExit1:
	delay_16
	walk_in_place_down
	delay_16
	delay_8
	walk_in_place_left
	step_end

PetalburgCity_Movement_ScottExit2:
	walk_down
	walk_left
	walk_left
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

PetalburgCity_Movement_PlayerWatchScottExit2:
	delay_16
	walk_in_place_down
	delay_16
	delay_8
	walk_in_place_left
	step_end

PetalburgCity_Movement_ScottExit3:
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
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWatchScottExit3:
	delay_16
	walk_in_place_up
	delay_16
	delay_8
	walk_in_place_left
	step_end

PetalburgCity_EventScript_GymBoy::
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
	end

@@@@@@@@@@@@@@@@@@@@@@
@ Old Rod Gift
@@@@@@@@@@@@@@@@@@@@@@
PetalburgCity_EventScript_OldRodFisherman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_OLD_ROD, PetalburgCity_EventScript_HowsFishing
	msgbox PetalburgCity_Text_GettingItchToFish, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PetalburgCity_EventScript_GiveOldRod
	goto_if_eq VAR_RESULT, NO, PetalburgCity_EventScript_NotGettingItchToFish
	end

PetalburgCity_EventScript_GiveOldRod::
	msgbox PetalburgCity_Text_GiveYouOneOfMyRods, MSGBOX_DEFAULT
	giveitem ITEM_OLD_ROD
	setflag FLAG_RECEIVED_OLD_ROD
	msgbox PetalburgCity_Text_ThrowInFishingAdvice, MSGBOX_DEFAULT
	release
	end

PetalburgCity_EventScript_NotGettingItchToFish::
	msgbox PetalburgCity_Text_ThatsTooBadThen, MSGBOX_DEFAULT
	closemessage
	applymovement 12, Common_Movement_WalkInPlaceUp
	waitmovement 12
	release
	end

PetalburgCity_EventScript_HowsFishing::
	message PetalburgCity_Text_HowsYourFishing
	waitmessage
	multichoice 20, 8, MULTI_HOWS_FISHING, TRUE
	goto_if_eq VAR_RESULT, 0, PetalburgCity_EventScript_FishingExcellent
	goto_if_eq VAR_RESULT, 1, PetalburgCity_EventScript_FishingNotSoGood
	end

PetalburgCity_EventScript_FishingExcellent::
	msgbox PetalburgCity_Text_GreatHaulInSomeBigOnes, MSGBOX_DEFAULT
	release
	end

PetalburgCity_EventScript_FishingNotSoGood::
	msgbox PetalburgCity_Text_FishingAdvice, MSGBOX_DEFAULT
	release
	end

PetalburgCity_Text_GettingItchToFish:
	.string "This is a renowned fishing spot.\n"
	.string "Are you getting the itch to fish?$"

PetalburgCity_Text_GiveYouOneOfMyRods:
	.string "I hear you, and I like what\n"
	.string "you're saying!\p"
	.string "I'll give you one of my fishing rods.$"

PetalburgCity_Text_ThrowInFishingAdvice:
	.string "And, as an added bonus, I'll even throw\n"
	.string "in a little fishing advice!\p"
	.string "First, you want to face the water,\n"
	.string "then use the rod.\p"
	.string "Focus your mind…\n"
	.string "If you get a bite, pull on the rod.\p"
	.string "Sometimes you can snag something\n"
	.string "immediately, but with bigger catches,\l"
	.string "you need to time the pulls on your rod\l"
	.string "to haul them in.$"

PetalburgCity_Text_ThatsTooBadThen:
	.string "Oh, is that so?\n"
	.string "That's too bad, then.$"

PetalburgCity_Text_HowsYourFishing:
	.string "Yo!\n"
	.string "How's your fishing?$"

PetalburgCity_Text_GreatHaulInSomeBigOnes:
	.string "Is that right! That's great!\n"
	.string "Haul in some big ones!$"

PetalburgCity_Text_FishingAdvice:
	.string "Oh, hey, don't get down on yourself!\n"
	.string "I'll give you a little fishing advice.\p"
	.string "First, you want to face the water,\n"
	.string "then use the Rod.\p"
	.string "Focus your mind…\n"
	.string "If you get a bite, pull the Rod.\p"
	.string "Sometimes you can snag something\n"
	.string "immediately, but with bigger catches,\l"
	.string "you need to time the pulls on your Rod\l"
	.string "to haul them in.$"

PetalburgCity_Text_WhereIsWally:
	.string "Where has Wally gone?\pHe should be leaving for\nVerdanturf Town soon$"

PetalburgCity_Text_AreYouRookieTrainer:
	.string "Hiya! Are you maybe…\n"
	.string "A rookie Trainer?\p"
	.string "Do you know what Pokémon Trainers\n"
	.string "do when they reach a new town?\p"
	.string "They first check what kind of Gym\n"
	.string "is in the town.$"

PetalburgCity_Text_ThisIsPetalburgGym:
	.string "See? This is Petalburg City's Gym.$"

PetalburgCity_Text_ThisIsGymSign:
	.string "This is the Gym's sign. Look for it\n"
	.string "whenever you're looking for a Gym.$"

PetalburgCity_Text_WaterReflection:
	.string "My face is reflected in the water.\pIt's shining grin full of hope…\pOr maybe it's a look of somber silence\nstruggling with fear…\pWhat do you see in your face?$"

PetalburgCity_Text_FullPartyExplanation:
	.string "Let's say you have six Pokémon in your\nteam and then you catch another one…\pDo you know what happens?\pIt's automatically sent to a storage\nBox over the PC network!$"

PetalburgCity_Text_GymSign:
	.string "Petalburg City Pokémon Gym\n"
	.string "Leader: Norman\l"
	.string "“A man in pursuit of power!”$"

PetalburgCity_Text_CitySign:
	.string "Petalburg City\n"
	.string "“Where people mingle with nature.”$"

PetalburgCity_Text_WallyHouseSign:
	.string "Wally's House$"

PetalburgCity_Text_AreYouATrainer:
	.string "Excuse me!\p"
	.string "Let me guess, from the way you're\n"
	.string "dressed, are you a Pokémon Trainer?$"

PetalburgCity_Text_WellMaybeNot:
	.string "… … … … … …\p"
	.string "Well, maybe not.\n"
	.string "Your clothes aren't all that dirty.\p"
	.string "You're either a rookie Trainer,\n"
	.string "or maybe you're just an ordinary kid.$"

PetalburgCity_Text_ImLookingForTalentedTrainers:
	.string "I'm roaming the land in search of\n"
	.string "talented Trainers.\p"
	.string "I'm sorry to have taken your time.$"

PetalburgCity_EventScript_WilburHouseSign::
	msgbox PetalburgCity_EventScript_WilburHouseSign_Text_0, MSGBOX_SIGN
	end


PetalburgCity_EventScript_OliviaHouseSign::
	msgbox PetalburgCity_EventScript_OliviaHouseSign_Text_0, MSGBOX_SIGN
	end


PetalburgCity_EventScript_RivalTeleportDone::
	lock
	applymovement 10, Common_Movement_WalkInPlaceRight
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	waitmovement OBJ_EVENT_ID_PLAYER
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgCity_EventScript_RivalTeleportDone_2
	msgbox PetalburgCity_EventScript_RivalTeleportDone_Text_1
PetalburgCity_EventScript_RivalTeleportDone_1:
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchRivalExit
	applymovement 10, PetalburgCity_Movement_RivalExit
	waitmovement 10
	removeobject 10
	setvar VAR_PETALBURG_CITY_STATE_2, 3
	release
	end

PetalburgCity_EventScript_RivalTeleportDone_2:
	msgbox PetalburgCity_EventScript_RivalTeleportDone_Text_0
	goto PetalburgCity_EventScript_RivalTeleportDone_1


PetalburgCity_Movement_PlayerWatchRivalExit:
	delay_16
	walk_in_place_down
	step_end

PetalburgCity_Movement_RivalExit:
	walk_down
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

PetalburgCity_EventScript_WallysDadGivesPlayerSurf::
	lock
	opendoor 15, 8
	waitdooranim
	addobject 11
	delay 8
	applymovement 11, PetalburgCity_Movement_NormanExitDoor
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerMoveAside
	waitmovement OBJ_EVENT_ID_PLAYER
	closedoor 15, 8
	waitdooranim
	playse SE_PIN
	applymovement 11, Common_Movement_ExclamationMark
	delay 8
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement OBJ_EVENT_ID_PLAYER
	delay 16
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceUp
	waitmovement LOCALID_WALLY
	playse SE_PIN
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark
	waitmovement LOCALID_WALLY
	delay 8
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_0
	closemessage
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceUp
	waitmovement LOCALID_WALLYS_DAD
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_1
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_2
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_3
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceUp
	waitmovement LOCALID_WALLYS_DAD
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_4
	closemessage
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceRight
	waitmovement LOCALID_WALLYS_DAD
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_5
	closemessage
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceUp
	waitmovement LOCALID_WALLYS_DAD
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_6
	closemessage
	playse SE_PIN
	applymovement LOCALID_WALLYS_DAD, Common_Movement_ExclamationMark
	waitmovement LOCALID_WALLYS_DAD
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_7
	delay 8
	giveitem ITEM_HM_SURF
	setflag FLAG_RECEIVED_HM_SURF
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_8
	closemessage
	delay 8
	applymovement 11, Common_Movement_WalkInPlaceLeft
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_9
	closemessage
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceUp
	waitmovement LOCALID_WALLY
	applymovement 11, Common_Movement_WalkInPlaceDown
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_10
	closemessage
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceLeft
	delay 8
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceRight
	waitmovement LOCALID_WALLY
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_11
	closemessage
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceUp
	waitmovement LOCALID_WALLY
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_12
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_13
	closemessage
	applymovement 11, Common_Movement_WalkInPlaceLeft
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_14
	closemessage
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_WALLY
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_15
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_16
	closemessage
	delay 16
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerExit
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyExit
	applymovement 11, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_WALLY
	delay 64
	fadenewbgm MUS_DUMMY
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WallyDadGoUp
	waitmovement LOCALID_WALLYS_DAD
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_17
	delay 16
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_18
	closemessage
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceRight
	waitmovement LOCALID_WALLYS_DAD
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_19
	delay 16
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_20
	closemessage
	applymovement 11, Common_Movement_WalkInPlaceLeft
	waitmovement 11
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_21
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_22
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_23
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_24
	closemessage
	fadescreen FADE_TO_BLACK
	applymovement OBJ_EVENT_ID_CAMERA, PetalburgCity_Movement_CameraBackToPlayer
	waitmovement OBJ_EVENT_ID_CAMERA
	fadedefaultbgm
	special RemoveCameraObject
	removeobject 11
	removeobject LOCALID_WALLYS_DAD
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkTowardsRoute103
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WalkTowardsRoute103
	delay 80
	fadescreen FADE_FROM_BLACK
	waitmovement LOCALID_WALLY
	delay 32
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceLeft
	waitmovement LOCALID_WALLY
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_25
	closemessage
	delay 24
	playse SE_SUCCESS
	waitse
	delay 16
	playse SE_SUCCESS
	waitse
	delay 32
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_26
	closemessage
	delay 16
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WalkTowardsMauville
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkTowardsMauville
	delay 32
	fadescreen FADE_TO_BLACK
	waitmovement OBJ_EVENT_ID_PLAYER
	setflag FLAG_REMOVE_WARP_FADE
	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
	clearflag FLAG_HIDE_MAUVILLE_CITY_WALLY
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	clearflag FLAG_DONT_TRANSITION_MUSIC
	setvar VAR_PETALBURG_CITY_STATE, 5
	setvar VAR_MAUVILLE_CITY_STATE, 7
	warpsilent MAP_MAUVILLE_CITY, 35, 8
	waitstate
	fadescreen FADE_FROM_BLACK
	release
	end


PetalburgCity_Movement_NormanExitDoor:
	delay_16
	walk_down
	step_end

PetalburgCity_Movement_PlayerMoveAside:
	walk_left
	walk_in_place_right
	step_end

PetalburgCity_Movement_PlayerExit:
	walk_down
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	step_end

PetalburgCity_Movement_WallyExit:
	delay_16
	delay_16
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	step_end

PetalburgCity_Movement_WallyDadGoUp:
	walk_slow_up
	walk_slow_up
	walk_in_place_down
	step_end

PetalburgCity_Movement_CameraBackToPlayer:
	walk_right
	walk_right
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	walk_faster_down
	step_end

PetalburgCity_Movement_WalkTowardsRoute103:
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

PetalburgCity_Movement_WalkTowardsMauville:
	walk_right
	walk_right
	walk_right
	step_end

PetalburgCity_EventScript_WilburHouseSign_Text_0:
	.string "Wilbur's House$"

PetalburgCity_EventScript_OliviaHouseSign_Text_0:
	.string "Olivia's House$"

PetalburgCity_EventScript_RivalTeleportDone_Text_0:
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Well, we made it!\nThe Petalburg City Gym!\pGood luck taking on the Gym Leader,\n{PLAYER}.\lI'm cheering for you!\pLater!$"

PetalburgCity_EventScript_RivalTeleportDone_Text_1:
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: So we're here.\nPetalburg City.\p{PLAYER}, you do your best with the Gym.\nI'm behind you all the way.\pSee ya!$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_0:
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: Ah!\p{PLAYER}!\nMr. Norman!$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_1:
	.string "I haven't seen the two of you in some\ntime. What a coincidence!\pI just came back to my parent's house\nto grab something I'd forgotten.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_2:
	.string "{COLOR RED}Dad{COLOR DARK_GRAY}: You look like you've been\nworking hard, Wally.\lIt's clear even without a battle.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_3:
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: R-really?\nYou really think so?\pHehe… Thank you!\nThat's so nice of you to say!$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_4:
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Ah.\n{PLAYER}, isn't it?\pI'm glad to see you here.\nI'm {COLOR RED}Wally's father{COLOR DARK_GRAY}, of course.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_5:
	.string "As you can see, Wally's health has\nthoroughly improved.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_6:
	.string "It's all thanks to you and your\nfather.\pYou two helped Wally catch his first\nPokémon that day.\pIt's because of you that he has a\npartner of his own now.\pThat partner is why he's grown so\nstrong.\pThat's my firm belief.\nSo, I thank you.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_7:
	.string "Yeah, that's it.\pSometimes words aren't enough.\nIt would delight me if you'd take this.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_8:
	.string "If you're cleared to use Surf\noutside of battle, you'll be able to\lcross seas with your Pokémon.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_9:
	.string "{COLOR RED}Dad{COLOR DARK_GRAY}: {PLAYER}…\pConsidering how much you and Wally\nhave grown, you should be able to\lhandle what lies beyond the sea on\l{COLOR BLUE}Route 118{COLOR DARK_GRAY} now.\pThere are far stronger Pokémon and\nTrainers waiting for you on Hoenn's\least coast.\pContinue your journey and your\nadventures there.\lI know you'll do your best.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_10:
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: Yes, sir!\pI will do my best to become as strong as\n{PLAYER}, sir!$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_11:
	.string "I guess I had better start out, then.\nI'm off for now, Dad!\lSee you next time!$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_12:
	.string "Um. Come on, {PLAYER}!\nLet's go together!$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_13:
	.string "{COLOR RED}Dad{COLOR DARK_GRAY}: Wally…\pI look forward to seeing you and your\nPokémon grow stronger together.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_14:
	.string "{PLAYER}?\nWell, take care of yourself out there.\pDon't forget to drop by Littleroot to\nvisit your mother from time to time!$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_15:
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: OK!\nWe're off!$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_16:
	.string "{COLOR RED}Wally's Dad{COLOR DARK_GRAY}: Be safe out there!$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_17:
	.string "{COLOR RED}Wally's Dad{COLOR DARK_GRAY}: …$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_18:
	.string "{COLOR RED}Dad{COLOR DARK_GRAY}: …$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_19:
	.string "{COLOR RED}Wally's Dad{COLOR DARK_GRAY}: I don't know what it is,\nbut…$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_20:
	.string "{COLOR RED}Dad{COLOR DARK_GRAY}: …Hm?$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_21:
	.string "{COLOR RED}Wally's Dad{COLOR DARK_GRAY}: Seeing my little boy all\ngrown up and going off on his own…\pAs a father, it makes me happy and a\nlittle sad…$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_22:
	.string "{COLOR RED}Dad{COLOR DARK_GRAY}: Hahaha!\nWhat a coincidence!\pI caught myself thinking the same\nthing.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_23:
	.string "{COLOR RED}Wally's Dad{COLOR DARK_GRAY}: Hohoho!\nIs that so?\p…\nBut if only…\pIf only my boy keeps growing strong\nand healthy like that…\lI wouldn't ask for anything else.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_24:
	.string "{COLOR RED}Dad{COLOR DARK_GRAY}: Yes.\nI know exactly what you mean.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_25:
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: Mr. Norman told us to keep going\nbeyond {COLOR BLUE}Route 118{COLOR DARK_GRAY}, didn't he…\pLet me check my AreaNav…$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_26:
	.string "{COLOR BLUE}Route 118{COLOR DARK_GRAY} is the one east of Mauville\nCity, huh?\p{PLAYER}!\nSince we're both here anyway, let's go\lto Mauville together!\pI'm definitely planning on going to\ncheck out Route 118 like your dad\lsaid!$"
