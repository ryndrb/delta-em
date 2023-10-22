.set LOCALID_LATI, 2
.set LOCALID_LATIOS, 3

SouthernIsland_Interior_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, SouthernIsland_Interior_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, SouthernIsland_Interior_OnTransition
	.byte 0

SouthernIsland_Interior_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, SouthernIsland_Interior_EventScript_TryRemoveLati
	end

SouthernIsland_Interior_EventScript_TryRemoveLati::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject LOCALID_LATI
	return

SouthernIsland_Interior_OnTransition:
	call_if_eq VAR_ROAMER_POKEMON, 0, SouthernIsland_Interior_EventScript_SetUpLatios
	call_if_ne VAR_ROAMER_POKEMON, 0, SouthernIsland_Interior_EventScript_SetUpLatias
	call SouthernIsland_Interior_EventScript_SetUpPlayerGfx
	end

SouthernIsland_Interior_EventScript_SetUpLatios::
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_LATIOS
	setvar VAR_TEMP_4, SPECIES_LATIOS
	return

SouthernIsland_Interior_EventScript_SetUpLatias::
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_LATIAS
	setvar VAR_TEMP_4, SPECIES_LATIAS
	return

SouthernIsland_Interior_EventScript_SetUpPlayerGfx::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, SouthernIsland_Interior_EventScript_SetBrendanGfx
	goto_if_eq VAR_RESULT, FEMALE, SouthernIsland_Interior_EventScript_SetMayGfx
	end

SouthernIsland_Interior_EventScript_SetBrendanGfx::
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	return

SouthernIsland_Interior_EventScript_SetMayGfx::
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
	return

SouthernIsland_Interior_EventScript_TryLatiEncounter::
	lockall
	setvar VAR_0x8008, 12  @ Player's Y coordinate. Not read
	goto SouthernIsland_Interior_EventScript_Lati
	end

SouthernIsland_Interior_EventScript_Lati::
	goto_if_set FLAG_TEMP_2, SouthernIsland_Interior_EventScript_Sign
	goto_if_set FLAG_DEFEATED_LATIAS_OR_LATIOS, SouthernIsland_Interior_EventScript_Sign
	goto_if_set FLAG_CAUGHT_LATIAS_OR_LATIOS, SouthernIsland_Interior_EventScript_Sign
	goto_if_unset FLAG_ENABLE_SHIP_SOUTHERN_ISLAND, SouthernIsland_Interior_EventScript_Sign
	setflag FLAG_ENCOUNTERED_LATIAS_OR_LATIOS
	setflag FLAG_TEMP_2
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, SouthernIsland_Interior_Movement_CameraPanUp
	waitmovement 0
	delay 50
	waitse
	playmoncry VAR_TEMP_4, CRY_MODE_NORMAL
	delay 30
	waitmoncry
	addobject LOCALID_LATI
	delay 30
	applymovement OBJ_EVENT_ID_CAMERA, SouthernIsland_Interior_Movement_CameraPanDown
	applymovement LOCALID_LATI, SouthernIsland_Interior_Movement_LatiApproach
	waitmovement 0
	delay 50
	special RemoveCameraObject
	setvar VAR_LAST_TALKED, LOCALID_LATI
	call_if_eq VAR_ROAMER_POKEMON, 0, SouthernIsland_Interior_EventScript_SetLatiosBattleVars
	call_if_ne VAR_ROAMER_POKEMON, 0, SouthernIsland_Interior_EventScript_SetLatiasBattleVars
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLatiBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SouthernIsland_Interior_EventScript_LatiDefeated
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SouthernIsland_Interior_EventScript_RanFromLati
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SouthernIsland_Interior_EventScript_RanFromLati
	setflag FLAG_CAUGHT_LATIAS_OR_LATIOS
	releaseall
	end

SouthernIsland_Interior_EventScript_LatiDefeated::
	setflag FLAG_DEFEATED_LATIAS_OR_LATIOS
	copyvar VAR_0x8004, VAR_TEMP_4
	goto Common_EventScript_LegendaryFlewAway
	end

SouthernIsland_Interior_EventScript_RanFromLati::
	copyvar VAR_0x8004, VAR_TEMP_4
	goto Common_EventScript_LegendaryFlewAway
	end

SouthernIsland_Interior_EventScript_Sign::
	msgbox SouthernIsland_Interior_Text_Sign, MSGBOX_DEFAULT
	releaseall
	end

SouthernIsland_Interior_EventScript_SetLatiosBattleVars::
	seteventmon SPECIES_LATIOS, 50, ITEM_SOUL_DEW
	return

SouthernIsland_Interior_EventScript_SetLatiasBattleVars::
	seteventmon SPECIES_LATIAS, 50, ITEM_SOUL_DEW
	return

SouthernIsland_Interior_Movement_CameraPanUp:
	walk_up
	walk_up
	walk_up
	step_end

SouthernIsland_Interior_Movement_CameraPanDown:
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_down
	walk_down
	walk_down
	walk_in_place_faster_up
	step_end

SouthernIsland_Interior_Movement_LatiApproach:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	delay_16
	delay_16
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

SouthernIsland_Interior_EventScript_LatiosTrigger1::
	setvar VAR_TEMP_0, 1
	goto SouthernIsland_Interior_EventScript_Latios
	return


SouthernIsland_Interior_EventScript_LatiosTrigger2::
	setvar VAR_TEMP_0, 2
	goto SouthernIsland_Interior_EventScript_Latios
	return


SouthernIsland_Interior_EventScript_LatiosTrigger3::
	setvar VAR_TEMP_0, 3
	goto SouthernIsland_Interior_EventScript_Latios
	return


SouthernIsland_Interior_EventScript_Latios::
	lock
	playse SE_EXIT
	addobject 4
	waitse
	switch VAR_TEMP_0
	case 1, SouthernIsland_Interior_EventScript_Latios_3
	case 2, SouthernIsland_Interior_EventScript_Latios_4
	case 3, SouthernIsland_Interior_EventScript_Latios_5
SouthernIsland_Interior_EventScript_Latios_1:
	applymovement 4, SouthernIsland_Interior_Movement_StevenApproachLatios
	waitmovement OBJ_EVENT_ID_PLAYER
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft
	waitmovement OBJ_EVENT_ID_CAMERA
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_0
	closemessage
	delay 8
	playmoncry SPECIES_LATIAS, CRY_MODE_NORMAL
	waitmoncry
	delay 16
	addobject 6
	addobject 5
	applymovement 6, SouthernIsland_Interior_Movement_MagmaApproach
	applymovement 5, SouthernIsland_Interior_Movement_MagmaApproach
	delay 16
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	applymovement 4, Common_Movement_WalkInPlaceDown
	applymovement OBJ_EVENT_ID_CAMERA, SouthernIsland_Interior_Movement_CameraMiddle
	waitmovement OBJ_EVENT_ID_CAMERA
	special RemoveCameraObject
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_1
	closemessage
	delay 16
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_2
	closemessage
	playse SE_PIN
	applymovement 5, Common_Movement_ExclamationMark
	waitmovement 5
	waitse
	applymovement 5, Common_Movement_WalkInPlaceLeft
	waitmovement 5
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq SouthernIsland_Interior_EventScript_Latios_7
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_4
SouthernIsland_Interior_EventScript_Latios_6:
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_5, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq SouthernIsland_Interior_EventScript_Latios_11
	applymovement 4, Common_Movement_WalkInPlaceRight
	waitmovement 4
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_7
SouthernIsland_Interior_EventScript_Latios_10:
	applymovement 4, Common_Movement_WalkInPlaceDown
	waitmovement 4
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_8
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_9
	closemessage
	applymovement 5, Common_Movement_WalkInPlaceUp
	waitmovement 5
	special HealPlayerParty
SouthernIsland_Interior_EventScript_Latios_16:
	choose_mons
	compare VAR_RESULT, 0
	goto_if_ne SouthernIsland_Interior_EventScript_Latios_22
	applymovement 4, Common_Movement_WalkInPlaceRight
	waitmovement 4
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_7
	closemessage
	applymovement 4, Common_Movement_WalkInPlaceDown
	waitmovement 4
	compare VAR_RESULT, 0
	goto_if_eq SouthernIsland_Interior_EventScript_Latios_16
SouthernIsland_Interior_EventScript_Latios_14:
	multi_2_vs_2 TRAINER_COURTNEY_SOUTHERN_ISLAND, SouthernIsland_Interior_EventScript_Latios_Text_10, TRAINER_GRUNT_MAGMA_SOUTHERN_ISLAND, SouthernIsland_Interior_EventScript_Latios_Text_11, TRAINER_STEVEN_SOUTHERN_ISLAND, TRAINER_BACK_PIC_STEVEN
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq SouthernIsland_Interior_EventScript_Latios_19
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_12
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_13
	closemessage
	applymovement 6, Common_Movement_WalkInPlaceDown
	waitmovement 6
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_14
	applymovement 6, SouthernIsland_Interior_Movement_MagmaExit
	delay 16
	applymovement 5, Common_Movement_WalkInPlaceDown
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_15
	closemessage
	waitmovement 6
	applymovement 5, SouthernIsland_Interior_Movement_MagmaExit
	waitmovement 5
	removeobject 6
	removeobject 5
	delay 16
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_16
	closemessage
	applymovement 4, Common_Movement_WalkInPlaceRight
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_17
	closemessage
	delay 8
	playse SE_USE_ITEM
	special HealPlayerParty
	waitse
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_18
	delay 8
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_19
	closemessage
	delay 8
	playmoncry SPECIES_LATIOS, CRY_MODE_NORMAL
	waitmoncry
	applymovement 4, Common_Movement_WalkInPlaceUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_20
	applymovement 4, Common_Movement_WalkInPlaceRight
	waitmovement 4
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_21
	closemessage
	delay 16
	givemon SPECIES_LATIOS, 30, ITEM_LATIOSITE
	playfanfare MUS_HG_RECEIVE_POKEMON
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_22
	waitfanfare
	delay 16
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_23
	closemessage
	delay 8
	playmoncry SPECIES_LATIOS, CRY_MODE_NORMAL
	waitmoncry
	fadescreen FADE_TO_WHITE
	removeobject LOCALID_LATIOS
	fadescreen FADE_FROM_WHITE
	delay 24
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_24
	closemessage
	delay 16
	giveitem ITEM_MEGA_RING
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_25
	closemessage
	delay 48
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_26
	closemessage
	applymovement 4, Common_Movement_WalkInPlaceDown
	waitmovement 4
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_27
	closemessage
	applymovement 4, SouthernIsland_Interior_Movement_PlayerStevenExit
	applymovement OBJ_EVENT_ID_PLAYER, SouthernIsland_Interior_Movement_PlayerStevenExit
	fadescreen FADE_TO_BLACK
	waitmovement OBJ_EVENT_ID_PLAYER
	removeobject 4
	setflag FLAG_REMOVE_WARP_FADE
	setvar VAR_ROUTE118_STATE, 4
	setvar VAR_SOUTHERN_ISLAND_STATE, 3
	warpsilent MAP_SOUTHERN_ISLAND_EXTERIOR, 14, 20
	waitstate
	releaseall
	end

SouthernIsland_Interior_EventScript_Latios_3:
	applymovement OBJ_EVENT_ID_PLAYER, SouthernIsland_Interior_Movement_PlayerApproachLatios1
	goto SouthernIsland_Interior_EventScript_Latios_1

SouthernIsland_Interior_EventScript_Latios_4:
	applymovement OBJ_EVENT_ID_PLAYER, SouthernIsland_Interior_Movement_PlayerApproachLatios2
	goto SouthernIsland_Interior_EventScript_Latios_1

SouthernIsland_Interior_EventScript_Latios_5:
	applymovement OBJ_EVENT_ID_PLAYER, SouthernIsland_Interior_Movement_PlayerApproachLatios3
	goto SouthernIsland_Interior_EventScript_Latios_1

SouthernIsland_Interior_EventScript_Latios_7:
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_3
	goto SouthernIsland_Interior_EventScript_Latios_6

SouthernIsland_Interior_EventScript_Latios_11:
	applymovement 4, Common_Movement_WalkInPlaceRight
	waitmovement 4
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_6
	goto SouthernIsland_Interior_EventScript_Latios_10

SouthernIsland_Interior_EventScript_Latios_19:
	setflag FLAG_HIDE_SOUTHERN_ISLAND_INTERIOR_MAGMA
	setflag FLAG_HIDE_SOUTHERN_ISLAND_INTERIOR_STEVEN
	clearflag FLAG_HIDE_ROUTE_118_STEVEN
	clearflag FLAG_HIDE_ROUTE_118_LATIAS
	setvar VAR_ROUTE118_STATE, 3
	fadescreen FADE_TO_BLACK
	special Script_FadeOutMapMusic
	waitstate
	special SetCB2WhiteOut
	waitstate
	end

SouthernIsland_Interior_EventScript_Latios_22:
	goto SouthernIsland_Interior_EventScript_Latios_14


SouthernIsland_Interior_Movement_PlayerApproachLatios1:
	delay_16
	walk_in_place_right
	delay_16
	delay_16
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	walk_up
	step_end

SouthernIsland_Interior_Movement_PlayerApproachLatios2:
	delay_16
	walk_left
	walk_in_place_right
	delay_16
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	walk_up
	step_end

SouthernIsland_Interior_Movement_PlayerApproachLatios3:
	delay_16
	walk_in_place_left
	delay_16
	delay_16
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

SouthernIsland_Interior_Movement_StevenApproachLatios:
	delay_16
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_up
	step_end

SouthernIsland_Interior_Movement_MagmaApproach:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

SouthernIsland_Interior_Movement_CameraMiddle:
	delay_16
	delay_16
	delay_16
	delay_16
	walk_down
	step_end

SouthernIsland_Interior_Movement_MagmaExit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

SouthernIsland_Interior_Movement_PlayerStevenExit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

SouthernIsland_Interior_EventScript_Latios_Text_0:
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: Latios…\nIt's beautiful…\pIf I were to describe such beauty\nin terms of a stone, it would be a\lWater Stone.\pNo…\nIt goes beyond that…\pIsn't its brilliance like that of a\nDawn Stone?\pIt is as fantastic as a Steel-type\nPokémon…$"

SouthernIsland_Interior_EventScript_Latios_Text_1:
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: Hm?\pTeam Magma, is it?\pSo Latios noticed their coming, and\nthat is why it called on us.$"

SouthernIsland_Interior_EventScript_Latios_Text_2:
	.string "{COLOR RED}???{COLOR DARK_GRAY}: …\pWho are you?$"

SouthernIsland_Interior_EventScript_Latios_Text_3:
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: Hah?!\pM-Mistress Courtney!\pThat pipsqueak over there is the kid\nthat I heard got in our way!\pBut that enviably unruffled-looking\nfellow there with him…\pHm. I feel like I ought to know him from\nsomewhere…\lMaybe he's a contest star?$"

SouthernIsland_Interior_EventScript_Latios_Text_4:
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: Hah?!\pM-Mistress Courtney!\pThat pipsqueak over there is the kid\nthat I heard got in our way!\pBut that enviably unruffled-looking\nfellow there with her…\pHm. I feel like I ought to know him from\nsomewhere…\lMaybe he's a contest star?$"

SouthernIsland_Interior_EventScript_Latios_Text_5:
	.string "{COLOR RED}Courtney{COLOR DARK_GRAY}: Yes.\pFor the time being…get away from me.\pThe Pokémon behind you…\pIts Mega Stone…\pNo more…no less.\pThat is what…\pThat's what we of Team Magma seek.\pHow about it?\nWill you get away from me…\lor not?$"

SouthernIsland_Interior_EventScript_Latios_Text_6:
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: That's right.\nFull points for the correct answer!$"

SouthernIsland_Interior_EventScript_Latios_Text_7:
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: Hmph!\pIt's good that you feel up to joking,\nbut this is no laughing matter.$"

SouthernIsland_Interior_EventScript_Latios_Text_8:
	.string "I'll take part in this battle as well.\pLet's protect Latios from these\nbeasts together.\pWe cannot allow Latios or even a\nMega Stone to fall into the hands of\lsuch villains!$"

SouthernIsland_Interior_EventScript_Latios_Text_9:
	.string "{COLOR RED}Courtney{COLOR DARK_GRAY}: …\pWell then…\pDeleting…$"

SouthernIsland_Interior_EventScript_Latios_Text_10:
	.string "…\nSlurp.$"

SouthernIsland_Interior_EventScript_Latios_Text_11:
	.string "That's just too strong, right?!$"

SouthernIsland_Interior_EventScript_Latios_Text_12:
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: Puyah?!$"

SouthernIsland_Interior_EventScript_Latios_Text_13:
	.string "{COLOR RED}Courtney{COLOR DARK_GRAY}: As anticipated.\pUnanticipated.\pYou.\nTarget lock…completed.\pCommencing…experiment.\pYou. Forever.\nAha…$"

SouthernIsland_Interior_EventScript_Latios_Text_14:
	.string "Returning home.$"

SouthernIsland_Interior_EventScript_Latios_Text_15:
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: W-wait for me!\nCourtne-e-ey!$"

SouthernIsland_Interior_EventScript_Latios_Text_16:
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: Hah…$"

SouthernIsland_Interior_EventScript_Latios_Text_17:
	.string "Good work, {PLAYER}.\pAh, that's right.\pWe should first heal up the Pokémon\nthat fought on our behalf, shouldn't\lwe?$"

SouthernIsland_Interior_EventScript_Latios_Text_18:
	.string "Your team's health was restored!$"

SouthernIsland_Interior_EventScript_Latios_Text_19:
	.string "You performed spectacularly.\pWe were able to protect both\nthis wonderous Pokémon and its Mega\lStone, thanks to you.$"

SouthernIsland_Interior_EventScript_Latios_Text_20:
	.string "And it looks as though Latios may\nhave also recognized you as a Trainer\lworthy of its trust.\pLook. It's trying to offer you its\nallegiance.\pI believe it is trying to show that it\nwants to go with you on your journey.$"

SouthernIsland_Interior_EventScript_Latios_Text_21:
	.string "Go on.\nHold out your hand to it.$"

SouthernIsland_Interior_EventScript_Latios_Text_22:
	.string "Latios joined your team!$"

SouthernIsland_Interior_EventScript_Latios_Text_23:
	.string "Latios is carrying a piece of Latiosite!$"

SouthernIsland_Interior_EventScript_Latios_Text_24:
	.string "You should take this from me…$"

SouthernIsland_Interior_EventScript_Latios_Text_25:
	.string "With the Mega Ring that I just gave you\nand the Mega Stones that a Pokémon\lmay hold, your Pokémon should be able\lto achieve a powerful boost, quite\lunlike any unusual form of Evolution…\lbut only if you are bound by great\laffection.\pYou will be able to achieve {COLOR BLUE}Mega\nEvolution{COLOR DARK_GRAY}.\pI suggest you try it with Latios the\nnext time that you happen to have\lthe chance in battle.$"

SouthernIsland_Interior_EventScript_Latios_Text_26:
	.string "Mega Evolution is a phenomenon that\nhas long been shrouded in mystery.\pWhat is a Mega Stone?\nWhat is a Key Stone?\pThe process by which bonds\nbetween Pokémon and people manifest\lin tangible power…\lHow do we explain that?\pI hope that the Mega Ring I just\ngave you might bring us one step\lcloses to finding the answer to\lthese questions.$"

SouthernIsland_Interior_EventScript_Latios_Text_27:
	.string "If that settles that…\nShould we be heading back?\pTogether with Latias, waiting so\npatiently for us there…$"
