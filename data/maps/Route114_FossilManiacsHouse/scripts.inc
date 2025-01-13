# 1 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 2 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_MapScripts::
# 3 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_FossilManiacsHouse_OnTransition
# 4 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.byte 0
# 5 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 6 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_OnTransition:
# 7 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	setflag FLAG_LANDMARK_FOSSIL_MANIACS_HOUSE
# 8 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	end
# 9 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 10 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother::
# 11 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	lock
# 12 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	faceplayer
# 13 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_DIG, Route114_FossilManiacsHouse_EventScript_ReceivedDig
# 14 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	msgbox Route114_FossilManiacsHouse_Text_HaveThisToDigLikeMyBrother, MSGBOX_DEFAULT
# 15 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	giveitem ITEM_TM_DIG
# 16 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 17 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	setflag FLAG_RECEIVED_TM_DIG
# 18 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	release
# 19 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	end
# 20 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 21 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_EventScript_ReceivedDig::
# 22 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	msgbox Route114_FossilManiacsHouse_Text_DigReturnsYouToEntrance, MSGBOX_DEFAULT
# 23 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	release
# 24 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	end
# 25 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 26 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_EventScript_RockDisplay::
# 27 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	msgbox Route114_FossilManiacsHouse_Text_RocksFillDisplayCase, MSGBOX_SIGN
# 28 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	end
# 29 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 30 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_EventScript_Bookshelf::
# 31 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	msgbox Route114_FossilManiacsHouse_Text_CrammedWithBooks, MSGBOX_SIGN
# 32 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	end
# 33 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 34 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_Text_HaveThisToDigLikeMyBrother:
# 35 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "My big brother's the Fossil Maniac…\n"
# 36 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "He's a nice guy who loves Fossils…\p"
# 37 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "He loves digging holes, too.\n"
# 38 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "He dug this hole by himself.\p"
# 39 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "You can have this, so you can Dig\n"
# 40 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "holes just like my big brother…$"
# 41 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 42 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_Text_DigReturnsYouToEntrance:
# 43 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "When you're in a cave, if you have a\nPokémon use Dig, you'll be back at the\lentrance in no time!$"
# 44 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 45 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_Text_RocksFillDisplayCase:
# 46 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "Rocks in peculiar shapes fill\n"
# 47 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "the display case…$"
# 48 "data/maps/Route114_FossilManiacsHouse/scripts.pory"

# 49 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
Route114_FossilManiacsHouse_Text_CrammedWithBooks:
# 50 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "The Composition of Strata…\n"
# 51 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "How Rain Shapes the Land…\l"
# 52 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "Stones, Soil, and Rock…\p"
# 53 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "It's crammed with books.$"
