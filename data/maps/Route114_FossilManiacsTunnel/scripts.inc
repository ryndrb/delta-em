# 1 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 2 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
.set LOCALID_FOSSIL_MANIAC, 1
# 3 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 4 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_MapScripts::
# 5 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_FossilManiacsTunnel_OnTransition
# 6 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route114_FossilManiacsTunnel_OnLoad
# 7 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.byte 0
# 8 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 9 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_OnTransition:
# 10 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route114_FossilManiacsTunnel_EventScript_MoveFossilManiac
# 11 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 12 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 13 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_MoveFossilManiac::
# 14 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setobjectxyperm LOCALID_FOSSIL_MANIAC, 6, 5
# 15 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setobjectmovementtype LOCALID_FOSSIL_MANIAC, MOVEMENT_TYPE_FACE_DOWN
# 16 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	return
# 17 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 18 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_OnLoad:
# 19 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	call_if_unset FLAG_SYS_GAME_CLEAR, Route114_FossilManiacsTunnel_EventScript_CloseDesertUnderpass
# 20 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 21 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 22 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_CloseDesertUnderpass::
# 23 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setmetatile 6, 1, METATILE_Fallarbor_RedRockWall, TRUE
# 24 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setmetatile 6, 2, METATILE_Fallarbor_RedRockWall, TRUE
# 25 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	return
# 26 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 27 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_ManiacMentionCaveIn::
# 28 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	lockall
# 29 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	applymovement LOCALID_FOSSIL_MANIAC, Common_Movement_WalkInPlaceFasterUp
# 30 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 31 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	waitmovement 0
# 32 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_NotSafeThatWay, MSGBOX_DEFAULT
# 33 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setvar VAR_FOSSIL_MANIAC_STATE, 2
# 34 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	releaseall
# 35 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 36 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 37 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil::
# 38 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_DevonCorpRevivingFossils, MSGBOX_DEFAULT
# 39 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
# 40 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 41 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 42 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_PlayerRevivedFossil::
# 43 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_FossilsAreWonderful, MSGBOX_DEFAULT
# 44 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
# 45 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 46 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 47 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_LookInDesertForFossils:
# 48 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I'm the Fossil Maniac…\nI'm a nice guy who loves Fossils…\pDo you want a Fossil?\pBut the Fossils around these parts\nall belong to me… None for you…\pIf you can't go without a Fossil, try\nthe desert on Route 111…\pFrom what I've heard, the Fossils\nburied in the sand sometimes rise to\lthe surface due to sandstorms…$"
# 49 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 50 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_DevonCorpRevivingFossils:
# 51 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "You found a Fossil, didn't you?\n"
# 52 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "That's so nice… It's so dreamy…\p"
# 53 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "What are you going to do with that\n"
# 54 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Fossil?\p"
# 55 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "From what I've heard, Devon is doing\n"
# 56 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "research on reviving Pokémon from\l"
# 57 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Fossils…\p"
# 58 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I love my Fossils, so I would never\n"
# 59 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "do anything like that…$"
# 60 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 61 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_FossilsAreWonderful:
# 62 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Fossils are so… Wonderful…\n"
# 63 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "It's so dreamy…$"
# 64 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 65 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_NotSafeThatWay:
# 66 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Oh…\n"
# 67 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "It's not safe that way…\p"
# 68 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I was digging away, you see…\n"
# 69 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "When the whole wall collapsed…\p"
# 70 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I think there's a giant cavern\n"
# 71 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "underneath now…\p"
# 72 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "But I've left it alone because I don't\n"
# 73 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "think there are any Fossils there…$"

Route114_FossilManiacsTunnel_EventScript_FossilManiac::
# 79 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	lock
# 80 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	faceplayer
# 81 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_set FLAG_TEMP_1, Route114_FossilManiacsTunnel_EventScript_FossilManiac_2
# 87 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	checkspecies SPECIES_BELDUM, NO_PARTY_SCREEN
# 88 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_set FLAG_RECEIVED_BELDUM, Route114_FossilManiacsTunnel_EventScript_FossilManiac_7
Route114_FossilManiacsTunnel_EventScript_FossilManiac_4:
# 94 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_set FLAG_RECEIVED_REVIVED_FOSSIL_MON, Route114_FossilManiacsTunnel_EventScript_FossilManiac_12
Route114_FossilManiacsTunnel_EventScript_FossilManiac_11:
# 97 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL
# 98 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_FossilManiacsTunnel_EventScript_FossilManiac_15
Route114_FossilManiacsTunnel_EventScript_FossilManiac_14:
# 101 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL
# 102 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_FossilManiacsTunnel_EventScript_FossilManiac_18
Route114_FossilManiacsTunnel_EventScript_FossilManiac_17:
# 105 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_LookInDesertForFossils, MSGBOX_DEFAULT
# 106 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	closemessage
# 107 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setflag FLAG_TEMP_1
# 108 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
	end

Route114_FossilManiacsTunnel_EventScript_FossilManiac_2:
# 82 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_EventScript_FossilManiac_Text_0
# 83 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	closemessage
# 84 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
	end

Route114_FossilManiacsTunnel_EventScript_FossilManiac_5:
# 89 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_EventScript_FossilManiac_Text_1
# 90 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	closemessage
# 91 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
	end

Route114_FossilManiacsTunnel_EventScript_FossilManiac_6:
# 88 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_FossilManiacsTunnel_EventScript_FossilManiac_5
	goto Route114_FossilManiacsTunnel_EventScript_FossilManiac_4

Route114_FossilManiacsTunnel_EventScript_FossilManiac_7:
# 88 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_set FLAG_RECEIVED_BELDUM, Route114_FossilManiacsTunnel_EventScript_FossilManiac_6
	goto Route114_FossilManiacsTunnel_EventScript_FossilManiac_4

Route114_FossilManiacsTunnel_EventScript_FossilManiac_12:
# 95 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto Route114_FossilManiacsTunnel_EventScript_PlayerRevivedFossil
	goto Route114_FossilManiacsTunnel_EventScript_FossilManiac_11

Route114_FossilManiacsTunnel_EventScript_FossilManiac_15:
# 99 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil
	goto Route114_FossilManiacsTunnel_EventScript_FossilManiac_14

Route114_FossilManiacsTunnel_EventScript_FossilManiac_18:
# 103 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil
	goto Route114_FossilManiacsTunnel_EventScript_FossilManiac_17


Route114_FossilManiacsTunnel_EventScript_FossilManiac_Text_0:
# 82 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "But the Fossils around these parts\nall belong to me… None for you…\pIf you can't go without a Fossil, try\nthe desert on Route 111…\pFrom what I've heard, the Fossils\nburied in the sand sometimes rise to\lthe surface due to sandstorms…$"

Route114_FossilManiacsTunnel_EventScript_FossilManiac_Text_1:
# 89 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Looking at your white Pokémon reminds\nme of the Devon president's son…\pI heard he traveled all the way\nto Kalos, crossing three oceans to\lfind the white Pokémon and some kind\lof stone…\pThat's what you'd expect from\nsomeone who calls himself a wandering\lstone collector…$"
