# 1 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 2 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_MapScripts::
# 3 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_OldLadysRestStop_OnTransition
# 4 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.byte 0
# 5 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 6 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_OnTransition:
# 7 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	setflag FLAG_LANDMARK_OLD_LADY_REST_SHOP
# 8 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	end
# 9 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 10 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_EventScript_OldLady::
# 11 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	lock
# 12 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	faceplayer
# 13 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	msgbox Route111_OldLadysRestStop_Text_RestUpHere, MSGBOX_YESNO
# 14 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route111_OldLadysRestStop_EventScript_Rest
# 15 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route111_OldLadysRestStop_EventScript_DeclineRest
# 16 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	end
# 17 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 18 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_EventScript_Rest::
# 19 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	msgbox Route111_OldLadysRestStop_Text_TakeYourTimeRestUp, MSGBOX_DEFAULT
# 20 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	closemessage
# 21 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 22 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	msgbox Route111_OldLadysRestStop_Text_StillTiredTakeAnotherRest, MSGBOX_YESNO
# 23 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route111_OldLadysRestStop_EventScript_Rest
# 24 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route111_OldLadysRestStop_EventScript_DeclineRest
# 25 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	end
# 26 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 27 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_EventScript_DeclineRest::
# 28 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	msgbox Route111_OldLadysRestStop_Text_DontNeedToBeShy, MSGBOX_DEFAULT
# 29 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	release
# 30 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	end
# 31 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 32 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_Text_RestUpHere:
# 33 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "Oh, dear me.\pAren't you and your Pokémon\nexhausted!\pYou ought to stop and rest a bit\nhere.\pYes, indeedy.\nThat's exactly what you should do.$"
# 34 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 35 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_Text_TakeYourTimeRestUp:
# 36 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "That's right.\nTake your time and rest up!$"
# 37 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 38 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_Text_StillTiredTakeAnotherRest:
# 39 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "Oh, dear me.\nAre you and your Pokémon still tired?\pYou should take another little rest\nhere.\pYes, indeedy.\nThat's what you should do.$"
# 40 "data/maps/Route111_OldLadysRestStop/scripts.pory"

# 41 "data/maps/Route111_OldLadysRestStop/scripts.pory"
Route111_OldLadysRestStop_Text_DontNeedToBeShy:
# 42 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "Really?\pAre you sure that's wise?\nNo need to be shy about it!$"
