# 1 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 2 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
.set LOCALID_VIVI, 1
# 3 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
.set LOCALID_VICTOR, 2
# 4 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
.set LOCALID_VICTORIA, 3
# 5 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
.set LOCALID_VICKY, 4
# 6 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 7 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_MapScripts::
# 8 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.byte 0
# 9 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 10 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Victor::
# 11 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 12 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 13 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VICTOR
# 14 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou, MSGBOX_DEFAULT
# 15 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	closemessage
# 16 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceRight
# 17 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	waitmovement 0
# 18 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 19 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 20 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Victoria::
# 21 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 22 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 23 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VICTORIA
# 24 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_MACHO_BRACE, Route111_WinstrateFamilysHouse_EventScript_ReceivedMachoBrace
# 25 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMachoBrace, MSGBOX_DEFAULT
# 26 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	giveitem ITEM_MACHO_BRACE
# 27 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 28 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_RECEIVED_MACHO_BRACE
# 29 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	closemessage
# 30 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceLeft
# 31 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	waitmovement 0
# 32 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 33 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 34 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_ReceivedMachoBrace::
# 35 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles, MSGBOX_DEFAULT
# 36 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	closemessage
# 37 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceLeft
# 38 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	waitmovement 0
# 39 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 40 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 41 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Vivi::
# 42 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 43 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 44 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VIVI
# 45 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers, MSGBOX_DEFAULT
# 46 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	closemessage
# 47 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceLeft
# 48 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	waitmovement 0
# 49 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 50 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 51 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_Vicky::
# 52 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock
# 53 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	faceplayer
# 54 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_VICKY
# 55 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_set FLAG_TEMP_4, Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo
# 56 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrong, MSGBOX_DEFAULT
# 57 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_TEMP_4
# 58 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	closemessage
# 59 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceUp
# 60 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 62 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 63 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo::
# 64 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort, MSGBOX_DEFAULT
# 65 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	closemessage
# 66 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_WalkInPlaceUp
# 67 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	end
# 69 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 70 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou:
# 71 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "You're the first Trainer I've seen\ndeploy Pokémon with such mastery.\pBut I should warn you--my son is\nstronger than you.\pHe even challenged the Pokémon League,\nI'll have you know!$"
# 72 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 73 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMachoBrace:
# 74 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Our family uses this Macho Brace\nto strengthen our Pokémon more\leffectively during their training.\pYou may not need it, considering that\nyou beat the whole lot of us, but I\lhope you'll accept it anyway!$"
# 75 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 76 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles:
# 77 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "When it comes to Pokémon battles, we're\npretty passionate!$"
# 78 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 79 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers:
# 80 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Mom is stronger than Dad.\pI'm stronger than Mom.\pAnd Grandma's stronger than me!\pBut my big brother is even stronger\nthan Grandma is!$"
# 81 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 82 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_GrandsonStrong:
# 83 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "There's no question that you're\nstrong.\pBut if you ever battle my grandson,\nyou'll end up crying in frustration.\pHe's stronger that any other Trainer we\nknow!\pMy grandson must be challenging the\nPokémon League Champion by now.\pKnowing my grandson, he could be the\nChampion already!\lEe-hee-hee-hee-hee!$"
# 84 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"

# 85 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort:
# 86 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "My grandson must be challenging the\nPokémon League Champion by now.\pKnowing my grandson, he could be the\nChampion already!\lEe-hee-hee-hee-hee!$"
