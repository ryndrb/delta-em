GraniteCave_1F_MapScripts::
	.byte 0

GraniteCave_1F_EventScript_Hiker::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM_FLASH, GraniteCave_1F_EventScript_ReceivedFlash
	msgbox GraniteCave_1F_Text_GetsDarkAheadHereYouGo, MSGBOX_DEFAULT
	giveitem ITEM_HM_FLASH
	setflag FLAG_RECEIVED_HM_FLASH
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
	release
	end

GraniteCave_1F_EventScript_ReceivedFlash::
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
	release
	end

GraniteCave_1F_Text_GetsDarkAheadHereYouGo:
	.string "Hey, you.\nIt gets awfully dark ahead.\pIt'll be tough for trying to\nexplore.\pWell, for us Hikers, helping out\nthose that we meet is our motto.\pHere you go, I'll pass this on to\nyou.$"

GraniteCave_1F_Text_ExplainFlash:
	.string "Teach that HM flash to a Pokémon\nand use it.\pIt lights up even the inky darkness\nof caves.$"

GraniteCave_1F_EventScript_Hiker2::
	msgbox GraniteCave_1F_EventScript_Hiker2_Text_0, MSGBOX_NPC
	closemessage
	applymovement 3, Common_Movement_WalkInPlaceUp
	waitmovement 3
	end


GraniteCave_1F_EventScript_Hiker3::
	msgbox GraniteCave_1F_EventScript_Hiker3_Text_0, MSGBOX_NPC
	closemessage
	applymovement 4, Common_Movement_WalkInPlaceUp
	waitmovement 4
	end


GraniteCave_1F_EventScript_Hiker4::
	msgbox GraniteCave_1F_EventScript_Hiker4_Text_0, MSGBOX_NPC
	closemessage
	applymovement 5, Common_Movement_WalkInPlaceUp
	waitmovement 5
	end


GraniteCave_1F_EventScript_Hiker2_Text_0:
	.string "Hey, hey!\nCutting in line is no bueno.$"

GraniteCave_1F_EventScript_Hiker3_Text_0:
	.string "The mural ahead…\pWe can't figure out what's\npainted there, but that makes ruin\lenthusiasts like me even more\lcurious about it.\pIt looks as if huge Pokémon is\npainted on it, but we've never seen\lsuch a Pokémon.\pIt's sooooo intriguing and fascinating!$"

GraniteCave_1F_EventScript_Hiker4_Text_0:
	.string "The mural ahead has drawn a lot of\nattention lately.\pThe other day, Team Something in red\nor blue suits came here in numbers.$"
