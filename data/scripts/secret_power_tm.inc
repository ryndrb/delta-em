Route111_Text_ExplainSecretPower:
	.string "{COLOR BLUE}Secret Power{COLOR DARK_GRAY} can help you find the\nentrances to hidden places.\pThese entrances…\pThey're full of adventure, all right!\pThat's why I like to throw some spice in\nthere and call 'em {COLOR BLUE}Secret Spots{COLOR DARK_GRAY}!$"

Route111_Text_DontWantThis:
	.string "Oh, you don't want this?\nIf you change your mind, tell me, okay?$"

Route111_Text_DontHaveAnyRoom:
	.string "Oh, you don't have any room for this.\p"
	.string "I'll hold on to it, so come back for it\n"
	.string "another time, okay?$"

Route111_Text_ScentOfAdventure:
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Mmm-mm.\nI can smell it.\lI can smell it right here…\lThe scent of adventure!\pThis is definitely one.\nIt's gotta be a {COLOR BLUE}Secret Spot{COLOR DARK_GRAY}.\pThere'll be enough space here to build\na crazy super place, or my name's not\lAarune!$"

Route111_Text_WhatCanIDoForYou:
	.string "Yo, my young Pokémon Trainer!\nWhat can I do for you, hmm?\pHuh?\pWhat d'you mean, you didn't ask for\nanything?\lBet your heart did!\pNow, now, no need to be shy!\nAfter all, we managed to meet!\pThe name's Aarune.\nPut'er there.\pUnova-born, and twenty-five years old.\nSpent the last 11 years trying to\lfind myself.\lJust a vagabond in search of dreams.\pI'm wondering 'round Hoenn, trying to\nfind a place where I really belong.\lThat's right!\lA {COLOR BLUE}Super-Secret Base{COLOR DARK_GRAY}!$"

Route111_Text_YouDontKnowSecretBasesBro:
	.string "You don't know about Secret Bases?\pWhat kinda life is that?\nToo sad, little bro.\pTime for a little lecture from Uncle\nAarune!\pLet's start with what a Secret Base is…\nWhich is adventure!\lRomance!\lAwesome!\pFor real, it's the best place ever to\nchill-- you, your pals that you let\lhang out…\pSince you've got this chance, you\noughta learn how to make one.\lTake this.$"

Route111_Text_YouDontKnowSecretBasesSis:
	.string "You don't know about Secret Bases?\pWhat kinda life is that?\nToo sad, little sis.\pTime for a little lecture from Uncle\nAarune!\pLet's start with what a Secret Base is…\nWhich is adventure!\lRomance!\lAwesome!\pFor real, it's the best place ever to\nchill-- you, your pals that you let\lhang out…\pSince you've got this chance, you\noughta learn how to make one.\lTake this.$"

Route111_Text_ThisIsASecretSpot:
	.string "Like this!\nSee?\lThis right here is a Secret Spot.\pDoesn't it look like you could just\nclimb up in this tree?\pThis is exactly the kinda place to\nbust out with Secret Power!$"

Route111_Text_NeverTired:
	.string "Awww yeah!\nI never get tired of that!\pAnd that's all there is to finding\nSecret Spots and creating the\lentrance to a Secret base.\pThis move is crucial to having a\nSecret Base.\lDon't forget now!$"

Route111_Text_GoodBye:
	.string "Wait a sec…\nBut who in the world are you?\p…\p…Ahhh!\nRight!\l{PLAYER}!\pSorry about that.\nI just got on such a roll…\pBut looks like it's about time for me to\nhit the road in search of my perfect\lbase!\pGood-bye for now, but hopefully I'll see\nyou again, {PLAYER}.\pIf you need me for anything, try\ndropping in at the {COLOR BLUE}Secret Base Guild{COLOR DARK_GRAY}\lin {COLOR BLUE}Fortree{COLOR DARK_GRAY}.$"

Route111_EventScript_SecretPowerMan::
	lock
	msgbox Route111_Text_ScentOfAdventure, MSGBOX_DEFAULT
	closemessage
	delay 8
	playse SE_PIN
	applymovement 33, Common_Movement_ExclamationMark
	waitmovement 33
	waitse
	faceplayer
	msgbox Route111_Text_WhatCanIDoForYou, MSGBOX_DEFAULT
	closemessage
	delay 8
	playse SE_PIN
	applymovement 33, Common_Movement_ExclamationMark
	waitmovement 33
	waitse
	checkplayergender
	call_if_eq VAR_RESULT, MALE, Route111_EventScript_UseBro
	delay 8
	giveitem ITEM_TM_SECRET_POWER
	goto_if_eq VAR_RESULT, FALSE, Route111_EventScript_NoRoomForSecretPower
	msgbox Route111_Text_ExplainSecretPower, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_RECEIVED_SECRET_POWER
	clearflag FLAG_HIDE_SLATEPORT_CITY_TM_SALESMAN
	applymovement 33, Common_Movement_WalkInPlaceUp
	waitmovement 33
	msgbox Route111_Text_ThisIsASecretSpot, MSGBOX_DEFAULT
	closemessage
	delay 8
	faceplayer
	msgbox Route111_Text_NeverTired, MSGBOX_DEFAULT
	closemessage
	delay 8
	playse SE_PIN
	applymovement 33, Common_Movement_ExclamationMark
	waitmovement 33
	waitse
	msgbox Route111_Text_GoodBye, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_FACING, DIR_WEST, Route111_EventScript_SecretPowerManExit
	call_if_eq VAR_FACING, DIR_EAST, Route111_EventScript_SecretPowerManExit
	call_if_eq VAR_FACING, DIR_NORTH, Route111_EventScript_SecretPowerManExitNorth
	removeobject VAR_LAST_TALKED
	end

Route111_EventScript_UseBro::
	msgbox Route111_Text_YouDontKnowSecretBasesBro, MSGBOX_DEFAULT
	return

Route111_EventScript_UseSis::
	msgbox Route111_Text_YouDontKnowSecretBasesSis, MSGBOX_DEFAULT
	return

Route111_EventScript_SecretPowerManExit::
	applymovement VAR_LAST_TALKED, Route111_Movement_SecretPowerManExit
	waitmovement 0
	return

Route111_EventScript_SecretPowerManExitNorth::
	applymovement VAR_LAST_TALKED, Route111_Movement_SecretPowerManExitNorth
	waitmovement 0
	return

Route111_EventScript_NoRoomForSecretPower::
	msgbox Route111_Text_DontHaveAnyRoom, MSGBOX_DEFAULT
	release
	end

Route111_Movement_SecretPowerManExit:
	walk_down
	walk_left
	walk_down
	walk_left
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	step_end

Route111_Movement_SecretPowerManExitNorth:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	step_end
