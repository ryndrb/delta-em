# 1 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 2 "data/maps/Route104_MrBrineysHouse/scripts.pory"
.set LOCALID_BRINEY, 1
# 3 "data/maps/Route104_MrBrineysHouse/scripts.pory"
.set LOCALID_PEEKO, 2
# 4 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 5 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_MapScripts::
# 6 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_MrBrineysHouse_OnTransition
# 7 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.byte 0
# 8 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 9 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_OnTransition:
# 10 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_LANDMARK_MR_BRINEY_HOUSE
# 11 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	call_if_eq VAR_BRINEY_HOUSE_STATE, 1, Route104_MrBrineysHouse_EventScript_SetBrineyPeekoPos
# 12 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	call_if_set FLAG_RECEIVED_POKENAV, Route104_MrBrineysHouse_EventScript_HideRustboroRival
# 13 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 14 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 15 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_HideRustboroRival::
# 16 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 17 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	return
# 18 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 19 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SetBrineyPeekoPos::
# 20 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectxyperm LOCALID_BRINEY, 9, 3
# 21 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectmovementtype LOCALID_BRINEY, MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_LEFT_UP_RIGHT
# 22 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectxyperm LOCALID_PEEKO, 9, 6
# 23 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectmovementtype LOCALID_PEEKO, MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_UP_RIGHT_DOWN
# 24 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	return
# 25 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 26 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_Briney::
# 27 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	lock
# 28 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	faceplayer
# 29 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	call_if_unset FLAG_MR_BRINEY_SAILING_INTRO, Route104_MrBrineysHouse_EventScript_SailingIntro
# 30 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_MrBrineysHouse_EventScript_SailBothDeliveries
# 31 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, Route104_MrBrineysHouse_EventScript_SailDeliverPackage
# 32 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_WhereAreWeBound
# 33 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 34 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 35 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SailingIntro::
# 36 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_MR_BRINEY_SAILING_INTRO
# 37 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_WaitUpPeeko, MSGBOX_DEFAULT
# 38 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	closemessage
# 39 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	delay 8
# 40 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	playse SE_PIN
# 41 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	applymovement LOCALID_BRINEY, Common_Movement_QuestionMark
# 42 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitmovement LOCALID_BRINEY
# 43 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_ItsYouLetsSailToDewford, MSGBOX_YESNO
# 44 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route104_MrBrineysHouse_EventScript_DeclineDeliverySailing
# 45 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailToDewford
# 46 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 47 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 48 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_WhereAreWeBound::
# 49 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	message Route104_MrBrineysHouse_Text_WhereAreWeBound
# 50 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitmessage
# 51 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	multichoicedefault 20, 8, MULTI_BRINEY_OFF_DEWFORD, 1, FALSE
# 52 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	switch VAR_RESULT
# 53 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	case 0, Route104_MrBrineysHouse_EventScript_SailToDewford
# 54 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	case 1, Route104_MrBrineysHouse_EventScript_DeclineSailing
# 55 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	case MULTI_B_PRESSED, Route104_MrBrineysHouse_EventScript_DeclineSailing
# 56 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 57 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 58 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SailBothDeliveries::
# 59 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_NeedToMakeDeliveriesSailToDewford, MSGBOX_YESNO
# 60 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route104_MrBrineysHouse_EventScript_DeclineDeliverySailing
# 61 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailToDewford
# 62 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 63 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 64 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SailDeliverPackage::
# 65 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_NeedToDeliverPackageSailToDewford, MSGBOX_YESNO
# 66 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route104_MrBrineysHouse_EventScript_DeclineDeliverySailing
# 67 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailToDewford
# 68 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 69 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 70 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_DeclineDeliverySailing::
# 71 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_DeclineDeliverySail, MSGBOX_DEFAULT
# 72 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	release
# 73 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 74 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 75 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_DeclineSailing::
# 76 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_TellMeWheneverYouWantToSail, MSGBOX_DEFAULT
# 77 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	release
# 78 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 79 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 80 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SailToDewford::
# 81 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_SetSailForDewford, MSGBOX_DEFAULT
# 82 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 83 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 1
# 84 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY
# 85 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 86 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 87 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 88 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 89 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	warp MAP_ROUTE104, 13, 51
# 90 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitstate
# 91 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	releaseall
# 92 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 93 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 94 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_Peeko::
# 95 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	lock
# 96 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	faceplayer
# 97 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitse
# 98 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 99 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_Peeko, MSGBOX_DEFAULT
# 100 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitmoncry
# 101 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	release
# 102 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 103 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 104 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_WaitUpPeeko:
# 105 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "{COLOR RED}Mr. Briney{COLOR DARK_GRAY}: Hold on, lass!\nBelay that, Peeko!$"
# 106 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 107 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_ItsYouLetsSailToDewford:
# 108 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Oh, if it ain't {PLAYER}!\nYou're the one who saved my Peeko!\lAye, but we owe you for that day!\pWhat's that?\nYou want to sail with me?\pWhat's this all about then?\pA letter bound for Dewford?\nCertainly, that'd be no problem at\lall.\pYou've come to the right man!\nShall we hoist sail for Dewford at\lonce?$"
# 109 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 110 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_SetSailForDewford:
# 111 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Dewford, we're a-coming!\nAnchors aweigh!\pPeeko, we're setting sail, my darling!$"
# 112 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 113 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_DeclineDeliverySail:
# 114 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Your delivery can wait?\nYou're one to gaff off!\pYou just go on and tell me whenever\nyou want to set sail.$"
# 115 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 116 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_NeedToMakeDeliveriesSailToDewford:
# 117 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "{COLOR RED}Mr. Briney{COLOR DARK_GRAY}: Ahoy! I know exactly\nwhat you want to say!\pYou're to deliver that letter to\nDewford, or ain't that so?\pYou've come to the right man if\nthat's the case!\pShall we hoist anchor for Dewford\nfirst?$"
# 118 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 119 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_NeedToDeliverPackageSailToDewford:
# 120 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "{COLOR RED}Mr. Briney{COLOR DARK_GRAY}: Ahoy! I know exactly\nwhat you want to say!\pYou've still got to deliver that\ncase to Stern in Slateport.\lAin't that so?\pYou just leave it up to this old\nseadog!\pWeigh anchors!\nWe're for Slateport!\pThough first, we'll set sail for\nDewford.$"
# 121 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 122 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_WhereAreWeBound:
# 123 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "{COLOR RED}Mr. Briney{COLOR DARK_GRAY}: Ahoy!\nWe'll lift anchor anytime for you!\pSo tell me, my friend, where are\nwe bound?$"
# 124 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 125 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_TellMeWheneverYouWantToSail:
# 126 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "You sure about that?\nWell, Peeko owes her life to you.\pYou just go on and tell me anytime\nyou want to set sail.\pI'll brave any tide for you!$"
# 127 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 128 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_Peeko:
# 129 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "{COLOR RED}Peeko{COLOR DARK_GRAY}: Pii kweee!$"
