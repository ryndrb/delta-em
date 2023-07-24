.set LOCALID_BIRCH, 2
.set LOCALID_ZIGZAGOON, 4

Route101_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_OnFrame
	.byte 0

Route101_OnTransition:
	call ProfBirch_EventScript_UpdateLocation
	end

Route101_OnFrame:
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
	.2byte 0

Route101_EventScript_HideMapNamePopup::
	setflag FLAG_HIDE_MAP_NAME_POPUP
	setvar VAR_ROUTE101_STATE, 1
	end

Route101_EventScript_StartBirchRescue::
	lockall
	playbgm MUS_HELP, TRUE
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
	closemessage
	setobjectxy LOCALID_BIRCH, 0, 15
	setobjectxy LOCALID_ZIGZAGOON, 0, 16
	delay 16
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunAway1
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
	waitmovement 0
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunInCircles
	waitmovement 0
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
	applymovement LOCALID_BIRCH, Route101_Movement_BirchFaceZigzagoon
	waitmovement 0
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
	closemessage
	setvar VAR_ROUTE101_STATE, 2
	releaseall
	end

Route101_EventScript_PreventExitSouth::
	lockall
	delay 8
	playse SE_PIN
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
	waitmovement 0
	releaseall
	end

Route101_EventScript_PreventExitWest::
	lockall
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
	waitmovement 0
	releaseall
	end

Route101_EventScript_PreventExitNorth::
	lockall
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
	waitmovement 0
	releaseall
	end

Route101_Movement_PreventExitSouth:
	walk_up
	step_end

Route101_Movement_PreventExitWest:
	walk_right
	step_end

Route101_Movement_PreventExitNorth:
	walk_down
	step_end

Route101_Movement_ZigzagoonChaseInCircles:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	step_end

Route101_Movement_ZigzagoonChase1:
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	step_end

@ Leftover data? This command is unused.
	step_end

Route101_Movement_ZigzagoonFaceBirch:
	walk_in_place_fast_left
	walk_in_place_fast_left
	walk_in_place_fast_left
	walk_in_place_fast_left
	step_end

Route101_Movement_EnterScene:
	emote_exclamation_mark
	delay_16
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_in_place_faster_left
	step_end

Route101_Movement_BirchRunInCircles:
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Route101_Movement_BirchRunAway1:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	step_end

@ Leftover data? This command is unused.
	step_end

Route101_Movement_BirchFaceZigzagoon:
	walk_in_place_fast_right
	walk_in_place_fast_right
	walk_in_place_fast_right
	walk_in_place_fast_right
	step_end

Route101_Movement_Unused1:
	walk_up
	walk_up
	step_end

Route101_Movement_Unused2:
	walk_up
	walk_left
	walk_up
	step_end

Route101_EventScript_Youngster::
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
	end

Route101_EventScript_Boy::
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
	end

Route101_EventScript_RouteSign::
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
	end

Route101_EventScript_BirchsBag::
	lock
	faceplayer
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_RESCUED_BIRCH
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_ZIGZAGOON
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 13
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	special ChooseStarter
	waitstate
	applymovement LOCALID_BIRCH, Route101_Movement_BirchApproachPlayer
	waitmovement 0
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
	closemessage
	delay 16
	playse SE_PIN
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
	waitmovement 0
	checkplayergender
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_NoticePlayer_M
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_NoticePlayer_F
	special HealPlayerParty
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
	setvar VAR_BIRCH_LAB_STATE, 2
	setvar VAR_ROUTE101_STATE, 3
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	checkplayergender
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
	waitstate
	release
	end

Route101_EventScript_NoticePlayer_M::
	msgbox Route101_Text_NoticeItsPlayer_M, MSGBOX_DEFAULT
	closemessage
	return

Route101_EventScript_NoticePlayer_F::
	msgbox Route101_Text_NoticeItsPlayer_F, MSGBOX_DEFAULT
	closemessage
	return

Route101_EventScript_HideMayInBedroom::
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
	return

Route101_EventScript_HideBrendanInBedroom::
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
	return

Route101_Movement_BirchApproachPlayer:
	walk_right
	step_end

Route101_Text_HelpMe:
	.string "{COLOR RED}???{COLOR DARK_GRAY}: H-help me!$"

Route101_Text_PleaseHelp:
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Halloo! You over there!\nPlease! Help me out!\pIn my Bag!\nThere are some Poké Balls!$"

Route101_Text_DontLeaveMe:
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Wh-where are you going?!\nDon't leave me like this!$"

Route101_Text_YouSavedMe:
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Whew…\pI went into the tall grass to survey\nwild Pokémon when I was suddenly\ljumped!\pYou saved my hide. Thanks a lot!$"

Route101_Text_NoticeItsPlayer_M:
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Oh?\pBut you're Norman's boy, {PLAYER}!\pI didn't even realize who you were\nat first.\pYou've grown into quite the young\nboy.\pThis isn't the place to chat, though.\nCome along to my lab.$"

Route101_Text_NoticeItsPlayer_F:
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Oh?\pBut you're Norman's girl, {PLAYER}!\pI didn't even realize who you were\nat first.\pYou've grown into quite the young\nlady.\pThis isn't the place to chat, though.\nCome along to my lab.$"

Route101_Text_TakeTiredPokemonToPokeCenter:
	.string "If Pokémon get tired, take them to\n"
	.string "a Pokémon Center.\p"
	.string "There's a Pokémon Center in Oldale\n"
	.string "Town right close by.$"

Route101_Text_WildPokemonInTallGrass:
	.string "Wild Pokémon will jump out at you in\n"
	.string "tall grass.\p"
	.string "If you want to catch Pokémon, you have\n"
	.string "to go into the tall grass and search.$"

Route101_Text_RouteSign:
	.string "Route 101\n"
	.string "{UP_ARROW} Oldale Town$"

Route101_EventScript_RivalGiveDexNavTriggerLeft::
	lock
	setvar VAR_TEMP_1, 0
	goto Route101_EventScript_RivalGiveDexNav
	end


Route101_EventScript_RivalGiveDexNavTriggerRight::
	setvar VAR_TEMP_1, 1
	goto Route101_EventScript_RivalGiveDexNav
	end


Route101_EventScript_RivalGiveDexNav::
	lock
	delay 8
	addobject 7
	msgbox Route101_EventScript_RivalGiveDexNav_Text_0
	closemessage
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	delay 8
	compare VAR_TEMP_1, 0
	goto_if_eq Route101_EventScript_RivalGiveDexNav_2
Route101_EventScript_RivalGiveDexNav_1:
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PlayerLookAtMayRight
	applymovement 7, Route101_Movement_RivalGotoPlayerRight
	waitmovement 0
	msgbox Route101_EventScript_RivalGiveDexNav_Text_1
	delay 8
	playfanfare MUS_OBTAIN_ITEM
	msgbox Route101_EventScript_RivalGiveDexNav_Text_2
	waitfanfare
	setflag FLAG_SYS_DETECTOR_MODE
	setflag FLAG_SYS_DEXNAV_GET
	msgbox Route101_EventScript_RivalGiveDexNav_Text_3
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Route101_EventScript_RivalGiveDexNav_5
	msgbox Route101_EventScript_RivalGiveDexNav_Text_5
Route101_EventScript_RivalGiveDexNav_4:
	closemessage
	delay 8
	compare VAR_TEMP_1, 0
	goto_if_eq Route101_EventScript_RivalGiveDexNav_9
Route101_EventScript_RivalGiveDexNav_8:
	applymovement 7, Route101_Movement_RivalLeaveRight
	waitmovement 7
	removeobject 7
	setvar VAR_ROUTE101_STATE, 5
	release
	end

Route101_EventScript_RivalGiveDexNav_2:
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PlayerLookAtMayLeft
	applymovement 7, Route101_Movement_RivalGotoPlayerLeft
	goto Route101_EventScript_RivalGiveDexNav_1

Route101_EventScript_RivalGiveDexNav_5:
	msgbox Route101_EventScript_RivalGiveDexNav_Text_4
	goto Route101_EventScript_RivalGiveDexNav_4

Route101_EventScript_RivalGiveDexNav_9:
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PlayerLookAtMayLeaving
	applymovement 7, Route101_Movement_RivalLeaveLeft
	goto Route101_EventScript_RivalGiveDexNav_8


Route101_Movement_PlayerLookAtMayLeft:
	walk_in_place_down
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_right
	step_end

Route101_Movement_PlayerLookAtMayRight:
	walk_in_place_down
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_left
	step_end

Route101_Movement_PlayerLookAtMayLeaving:
	delay_16
	delay_16
	walk_in_place_up
	step_end

Route101_Movement_RivalGotoPlayerLeft:
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_left
	step_end

Route101_Movement_RivalGotoPlayerRight:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_right
	step_end

Route101_Movement_RivalLeaveLeft:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Route101_Movement_RivalLeaveRight:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Route101_EventScript_RivalGiveDexNav_Text_0:
	.string "{COLOR RED}???{COLOR DARK_GRAY}: {PLAYER}!$"

Route101_EventScript_RivalGiveDexNav_Text_1:
	.string "{COLOR RED}{RIVAL}{COLOR DARK_GRAY}: This is from my dad.\pHe said he forgot to give it to\nyou before.$"

Route101_EventScript_RivalGiveDexNav_Text_2:
	.string "{PLAYER} received the DexNav!$"

Route101_EventScript_RivalGiveDexNav_Text_3:
	.string "The item I just gave you is called a\nDexNav.\pIt can tell you lots about the\nPokémon living in each area and\lthat kind of stuff.\pIt's a handy app if you're trying to\ncatch lots of different Pokémon.$"

Route101_EventScript_RivalGiveDexNav_Text_4:
	.string "All right!\pGuess it's about time I use the\nDexNav to do some more Pokémon\lcatching myself!\p{PLAYER}, you should use those\nPoké Balls I gave you earlier to do a\lbit of catching, too!$"

Route101_EventScript_RivalGiveDexNav_Text_5:
	.string "Guess it's about time I use\nthe DexNav to do a little more\lcatching myself!\pI'm gonna head that way and see what\nI find.\p{PLAYER}, you should those Poké Balls\nI gave you earlier to do a bit of\lcatching, too!$"
