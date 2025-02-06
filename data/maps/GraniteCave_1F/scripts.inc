# 1 "data/maps/GraniteCave_1F/scripts.pory"

# 2 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_MapScripts::
# 3 "data/maps/GraniteCave_1F/scripts.pory"
	.byte 0
# 4 "data/maps/GraniteCave_1F/scripts.pory"

# 5 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_EventScript_Hiker::
# 6 "data/maps/GraniteCave_1F/scripts.pory"
	lock
# 7 "data/maps/GraniteCave_1F/scripts.pory"
	faceplayer
# 8 "data/maps/GraniteCave_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_FLASH, GraniteCave_1F_EventScript_ReceivedFlash
# 9 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_GetsDarkAheadHereYouGo, MSGBOX_DEFAULT
# 10 "data/maps/GraniteCave_1F/scripts.pory"
	giveitem ITEM_HM_FLASH
# 11 "data/maps/GraniteCave_1F/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
# 12 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
# 13 "data/maps/GraniteCave_1F/scripts.pory"
	release
# 14 "data/maps/GraniteCave_1F/scripts.pory"
	end
# 15 "data/maps/GraniteCave_1F/scripts.pory"

# 16 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_EventScript_ReceivedFlash::
# 17 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
# 18 "data/maps/GraniteCave_1F/scripts.pory"
	release
# 19 "data/maps/GraniteCave_1F/scripts.pory"
	end
# 20 "data/maps/GraniteCave_1F/scripts.pory"

# 21 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Text_GetsDarkAheadHereYouGo:
# 22 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Hey, you.\nIt gets awfully dark ahead.\pIt'll be tough for trying to\nexplore.\pWell, for us Hikers, helping out\nthose that we meet is our motto.\pHere you go, I'll pass this on to\nyou.$"
# 23 "data/maps/GraniteCave_1F/scripts.pory"

# 24 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Text_ExplainFlash:
# 25 "data/maps/GraniteCave_1F/scripts.pory"
	.string "It lights up even the inky darkness\nof caves.\pBut it won't work outside of\nbattle if you don't have a badge from\nBrawly's Gym!$"

GraniteCave_1F_EventScript_Hiker2::
# 35 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Hiker2_Text_0, MSGBOX_NPC
# 36 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 37 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceUp
# 38 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 3
	end


GraniteCave_1F_EventScript_Hiker3::
# 43 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Hiker3_Text_0, MSGBOX_NPC
# 44 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 45 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 46 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 4
	end


GraniteCave_1F_EventScript_Hiker4::
# 51 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Hiker4_Text_0, MSGBOX_NPC
# 52 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 53 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 54 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 5
	end


GraniteCave_1F_EventScript_Hiker2_Text_0:
# 35 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Hey, hey!\nCutting in line is no bueno.$"

GraniteCave_1F_EventScript_Hiker3_Text_0:
# 43 "data/maps/GraniteCave_1F/scripts.pory"
	.string "The mural ahead…\pWe can't figure out what's\npainted there, but that makes ruin\lenthusiasts like me even more\lcurious about it.\pIt looks as if huge Pokémon is\npainted on it, but we've never seen\lsuch a Pokémon.\pIt's sooooo intriguing and fascinating!$"

GraniteCave_1F_EventScript_Hiker4_Text_0:
# 51 "data/maps/GraniteCave_1F/scripts.pory"
	.string "The mural ahead has drawn a lot of\nattention lately.\pThe other day, Team Something in red\nor blue suits came here in numbers.$"
