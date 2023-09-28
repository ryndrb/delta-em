.set LOCALID_GRUNT_1, 1
.set LOCALID_GRUNT_2, 6

Route112_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route112_OnTransition
	.byte 0

Route112_OnTransition:
    call Common_EventScript_SetupRivalGfxId
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 0
	end

Route112_EventScript_MtChimneyCableCarSign::
	msgbox Route112_Text_MtChimneyCableCarSign, MSGBOX_SIGN
	end

Route112_EventScript_MtChimneySign::
	msgbox Route112_Text_MtChimneySign, MSGBOX_SIGN
	end

Route112_EventScript_RouteSignLavaridge::
	msgbox Route112_Text_RouteSignLavaridge, MSGBOX_SIGN
	end

Route112_EventScript_Hiker::
	msgbox Route112_Text_NotEasyToGetBackToLavaridge, MSGBOX_NPC
	end

Route112_EventScript_Brice::
	trainerbattle_single TRAINER_BRICE, Route112_Text_BriceIntro, Route112_Text_BriceDefeat
	msgbox Route112_Text_BricePostBattle, MSGBOX_AUTOCLOSE
	end

Route112_EventScript_Trent::
	trainerbattle_single TRAINER_TRENT_1, Route112_Text_TrentIntro, Route112_Text_TrentDefeat, Route112_EventScript_RegisterTrent
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route112_EventScript_RematchTrent
	msgbox Route112_Text_TrentPostBattle, MSGBOX_DEFAULT
	release
	end

Route112_EventScript_RegisterTrent::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route112_Text_TrentRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_TRENT_1
	release
	end

Route112_EventScript_RematchTrent::
	trainerbattle_rematch TRAINER_TRENT_1, Route112_Text_TrentRematchIntro, Route112_Text_TrentRematchDefeat
	msgbox Route112_Text_TrentRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route112_EventScript_Larry::
	trainerbattle_single TRAINER_LARRY, Route112_Text_LarryIntro, Route112_Text_LarryDefeat
	msgbox Route112_Text_LarryPostBattle, MSGBOX_AUTOCLOSE
	end

Route112_EventScript_Carol::
	trainerbattle_single TRAINER_CAROL, Route112_Text_CarolIntro, Route112_Text_CarolDefeat
	msgbox Route112_Text_CarolPostBattle, MSGBOX_AUTOCLOSE
	end

Route112_EventScript_Bryant::
	trainerbattle_single TRAINER_BRYANT, Route112_Text_BryantIntro, Route112_Text_BryantDefeat
	msgbox Route112_Text_BryantPostBattle, MSGBOX_AUTOCLOSE
	end

Route112_EventScript_Shayla::
	trainerbattle_single TRAINER_SHAYLA, Route112_Text_ShaylaIntro, Route112_Text_ShaylaDefeat
	msgbox Route112_Text_ShaylaPostBattle, MSGBOX_AUTOCLOSE
	end

Route112_Text_NotEasyToGetBackToLavaridge:
	.string "Eh, I'd like to get to Mauville, but if\nI went down these ledges, it'd be no\leasy matter to get back to Lavaridge.$"

Route112_Text_MtChimneyCableCarSign:
	.string "Mt. Chimney Cable Car\n"
	.string "“A short walk {UP_ARROW} way!”$"

Route112_Text_MtChimneySign:
	.string "Mt. Chimney\p"
	.string "“For Lavaridge Town or the summit,\n"
	.string "please take the Cable Car.”$"

Route112_Text_RouteSignLavaridge:
	.string "Route 112\n"
	.string "{LEFT_ARROW} Lavaridge Town$"

Route112_EventScript_RivalTrigger1::
	setvar VAR_TEMP_0, 1
	goto Route112_EventScript_Rival
	return


Route112_EventScript_RivalTrigger2::
	setvar VAR_TEMP_0, 2
	goto Route112_EventScript_Rival
	return


Route112_EventScript_RivalTrigger3::
	setvar VAR_TEMP_0, 3
	goto Route112_EventScript_Rival
	return


Route112_EventScript_Rival::
	lock
	delay 16
	playse SE_PIN
	applymovement 15, Common_Movement_ExclamationMark
	waitmovement 15
	waitse
	delay 8
	applymovement 15, Common_Movement_WalkInPlaceRight
	waitmovement 15
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Route112_EventScript_Rival_2
	playbgm MUS_ENCOUNTER_MAY, FALSE
	msgbox Route112_EventScript_Rival_Text_1
Route112_EventScript_Rival_1:
	closemessage
	switch VAR_TEMP_0
	case 1, Route112_EventScript_Rival_7
	case 2, Route112_EventScript_Rival_8
	case 3, Route112_EventScript_Rival_9
Route112_EventScript_Rival_5:
	waitmovement 15
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Route112_EventScript_Rival_11
	msgbox Route112_EventScript_Rival_Text_3
Route112_EventScript_Rival_10:
	closemessage
	applymovement 15, Common_Movement_WalkInPlaceLeft
	waitmovement 15
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Route112_EventScript_Rival_15
	msgbox Route112_EventScript_Rival_Text_6
	closemessage
	delay 32
	msgbox Route112_EventScript_Rival_Text_7
Route112_EventScript_Rival_14:
	closemessage
	applymovement 15, Common_Movement_WalkInPlaceRight
	waitmovement 15
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Route112_EventScript_Rival_19
	msgbox Route112_EventScript_Rival_Text_9
Route112_EventScript_Rival_18:
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	playse SE_USE_ITEM
	special HealPlayerParty
	waitse
	fadescreenswapbuffers FADE_FROM_BLACK
	msgbox Route112_EventScript_Rival_Text_10
	delay 8
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Route112_EventScript_Rival_23
	msgbox Route112_EventScript_Rival_Text_12
Route112_EventScript_Rival_22:
	closemessage
	applymovement 15, Route112_EventScript_RivalWalkRight
	waitmovement 15
	delay 8
	giveitem ITEM_HM_STRENGTH
	setflag FLAG_RECEIVED_HM_STRENGTH
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Route112_EventScript_Rival_27
	msgbox Route112_EventScript_Rival_Text_14
Route112_EventScript_Rival_26:
	closemessage
	delay 16
	playse SE_PIN
	applymovement 15, Common_Movement_ExclamationMark
	waitmovement 15
	waitse
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Route112_EventScript_Rival_31
	msgbox Route112_EventScript_Rival_Text_16
Route112_EventScript_Rival_30:
	closemessage
	switch VAR_TEMP_0
	case 1, Route112_EventScript_Rival_36
	case 2, Route112_EventScript_Rival_37
	case 3, Route112_EventScript_Rival_38
Route112_EventScript_Rival_34:
	applymovement OBJ_EVENT_ID_PLAYER, Route112_EventScript_PlayerWatchRivalExit
	waitmovement 15
	removeobject 15
	setvar VAR_ROUTE112_STATE, 1
	fadedefaultbgm
	release
	end

Route112_EventScript_Rival_2:
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
	msgbox Route112_EventScript_Rival_Text_0
	goto Route112_EventScript_Rival_1

Route112_EventScript_Rival_7:
	applymovement 15, Route112_EventScript_RivalGotoPlayer1
	goto Route112_EventScript_Rival_5

Route112_EventScript_Rival_8:
	applymovement 15, Route112_EventScript_RivalGotoPlayer2
	goto Route112_EventScript_Rival_5

Route112_EventScript_Rival_9:
	applymovement 15, Route112_EventScript_RivalGotoPlayer3
	goto Route112_EventScript_Rival_5

Route112_EventScript_Rival_11:
	msgbox Route112_EventScript_Rival_Text_2
	goto Route112_EventScript_Rival_10

Route112_EventScript_Rival_15:
	msgbox Route112_EventScript_Rival_Text_4
	closemessage
	delay 32
	msgbox Route112_EventScript_Rival_Text_5
	goto Route112_EventScript_Rival_14

Route112_EventScript_Rival_19:
	msgbox Route112_EventScript_Rival_Text_8
	goto Route112_EventScript_Rival_18

Route112_EventScript_Rival_23:
	msgbox Route112_EventScript_Rival_Text_11
	goto Route112_EventScript_Rival_22

Route112_EventScript_Rival_27:
	msgbox Route112_EventScript_Rival_Text_13
	goto Route112_EventScript_Rival_26

Route112_EventScript_Rival_31:
	msgbox Route112_EventScript_Rival_Text_15
	goto Route112_EventScript_Rival_30

Route112_EventScript_Rival_36:
	applymovement 15, Route112_EventScript_RivalExit1
	goto Route112_EventScript_Rival_34

Route112_EventScript_Rival_37:
	applymovement 15, Route112_EventScript_RivalExit2
	goto Route112_EventScript_Rival_34

Route112_EventScript_Rival_38:
	applymovement 15, Route112_EventScript_RivalExit3
	goto Route112_EventScript_Rival_34


Route112_EventScript_RivalGotoPlayer1:
	walk_right
	walk_right
	walk_up
	walk_right
	step_end

Route112_EventScript_RivalGotoPlayer2:
	walk_right
	walk_right
	walk_right
	step_end

Route112_EventScript_RivalGotoPlayer3:
	walk_right
	walk_right
	walk_down
	walk_right
	step_end

Route112_EventScript_RivalWalkRight:
	walk_right
	step_end

Route112_EventScript_RivalExit1:
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

Route112_EventScript_RivalExit2:
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

Route112_EventScript_RivalExit3:
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

Route112_EventScript_PlayerWatchRivalExit:
	delay_16
	delay_16
	walk_in_place_right
	step_end

Route112_EventScript_MagmaGruntsLeft::
	msgbox Route112_EventScript_MagmaGruntsLeft_Text_0, MSGBOX_NPC
	end


Route112_EventScript_MagmaGruntsMiddle::
	msgbox Route112_EventScript_MagmaGruntsMiddle_Text_0, MSGBOX_NPC
	end


Route112_EventScript_MagmaGruntsRight::
	msgbox Route112_EventScript_MagmaGruntsRight_Text_0, MSGBOX_NPC
	end


Route112_EventScript_Rival_Text_0:
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Ah!$"

Route112_EventScript_Rival_Text_1:
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: Hm?$"

Route112_EventScript_Rival_Text_2:
	.string "{PLAYER}!$"

Route112_EventScript_Rival_Text_3:
	.string "So it's you, {PLAYER}.$"

Route112_EventScript_Rival_Text_4:
	.string "Look!\nRight up there!\lThat's Mt. Chimney!$"

Route112_EventScript_Rival_Text_5:
	.string "It sure is big…\pNo, more like huge…\pIt totally takes my breath away!\pI'd love to take the Cable Car all the\nway to the top someday…$"

Route112_EventScript_Rival_Text_6:
	.string "You see that mountain up there?\nThat's Mt. Chimney.$"

Route112_EventScript_Rival_Text_7:
	.string "I dunno, but…\nBut seeing it for real is, like…\lLike a punch in the gut, you know?\pHope I might get to take the Cable Car\nup to the top someday…$"

Route112_EventScript_Rival_Text_8:
	.string "Hm?\nHey, {PLAYER}, don't your Pokémon seem\la bit ragged around the edges?\pHere, let me give them a little boost!$"

Route112_EventScript_Rival_Text_9:
	.string "Hey, {PLAYER}, doesn't your team seem a\nbit worse for wear?\pHere.\nI'll help them out for you.$"

Route112_EventScript_Rival_Text_10:
	.string "Your team's health was restored!$"

Route112_EventScript_Rival_Text_11:
	.string "Here!\nTake this, too!$"

Route112_EventScript_Rival_Text_12:
	.string "And why don't you take this?$"

Route112_EventScript_Rival_Text_13:
	.string "I bet you can find all kinds of\nways to use it in the mountains that\llie ahead!\pBut it won't work outside of battle\nif you don't have a Badge from\lLavaridge Gym.$"

Route112_EventScript_Rival_Text_14:
	.string "I bet you can find all kinds of\nways to use it in the mountains that\llie ahead!\pOh…\pBut it won't work out here if you don't\nhave a Badge from Lavaridge Gym.$"

Route112_EventScript_Rival_Text_15:
	.string "Gasp!\nWhat am I doing nattering away here?\pI'm supposed to be on my way to\nFallarbor to visit Professor Cozmo!\pI'm off for now, {PLAYER}, but let's\nbattle next time!$"

Route112_EventScript_Rival_Text_16:
	.string "Bah!\pThis is not time to be giving you\ntricks!\pI'm supposed to be heading to Fallarbor\nto visit Professor Cozmo right now!\pSee you later, {PLAYER}.\nNext time let's have a battle, OK?$"

Route112_EventScript_MagmaGruntsLeft_Text_0:
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: Grumble…\pWhat happened to the others who went\nto Fallarbor?\lThey're late…$"

Route112_EventScript_MagmaGruntsMiddle_Text_0:
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: Grumble…\pYou two never cease to complain…\nGrumble…$"

Route112_EventScript_MagmaGruntsRight_Text_0:
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: Grumble…\pI'd like to ride the Cable Car to the\ntop, too…$"
