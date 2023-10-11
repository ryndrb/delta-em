.set LOCALID_WIFE, 2
.set LOCALID_COZMO, 1

FallarborTown_CozmosHouse_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_CozmosHouse_OnTransition
    map_script MAP_SCRIPT_ON_FRAME_TABLE, FallarborTown_CozmosHouse_OnFrameTable
	.byte 0

FallarborTown_CozmosHouse_OnTransition:
    call Common_EventScript_SetupRivalGfxId
	goto_if_eq VAR_FALLARBOR_TOWN_STATE, 3, FallarborTown_CozmosHouse_MoveCosmoWifeInFrontOfDoor2
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_CozmosHouse_MoveEveyoneAtBack
    goto_if_eq VAR_FALLARBOR_TOWN_STATE, 1, FallarborTown_CozmosHouse_MoveCosmoWifeInFrontOfDoor1
    end

FallarborTown_CozmosHouse_MoveEveyoneAtBack:
	setobjectxyperm LOCALID_WIFE, 4, 5
	setobjectxyperm LOCALID_COZMO, 4, 4
	setobjectxyperm LOCALID_RIVAL, 7, 4
    setobjectmovementtype LOCALID_WIFE, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype LOCALID_COZMO, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_LOOK_AROUND
    return

FallarborTown_CozmosHouse_MoveCosmoWifeInFrontOfDoor2:
	setobjectxyperm LOCALID_WIFE, 3, 6
	setobjectxyperm LOCALID_COZMO, 4, 7
    setobjectmovementtype LOCALID_WIFE, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype LOCALID_COZMO, MOVEMENT_TYPE_FACE_UP
    return

FallarborTown_CozmosHouse_MoveCosmoWifeInFrontOfDoor1:
    setobjectxyperm LOCALID_WIFE, 4, 6
    setobjectmovementtype LOCALID_WIFE, MOVEMENT_TYPE_FACE_DOWN
    return

FallarborTown_CozmosHouse_OnFrameTable:
	map_script_2 VAR_FALLARBOR_TOWN_STATE, 1, FallarborTown_CozmosHouse_EventScript_CozmosAbducted
	map_script_2 VAR_FALLARBOR_TOWN_STATE, 3, FallarborTown_CozmosHouse_EventScript_CozmosReturn
	.2byte 0

FallarborTown_CozmosHouse_EventScript_ProfCozmo::
	lock
	faceplayer
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_CozmosHouse_EventScript_CrooksAtMtChimney
	msgbox FallarborTown_CozmosHouse_Text_MakeYourselfAtHome, MSGBOX_DEFAULT
	closemessage
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmosWife::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM_RETURN, FallarborTown_CozmosHouse_EventScript_CozmoIsHappy
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_CozmosHouse_EventScript_CozmoIsSad
	msgbox FallarborTown_CozmosHouse_Text_PleaseSaveCozmo, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmoIsSad::
	msgbox FallarborTown_CozmosHouse_Text_FeelSorryForCozmo, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmoIsHappy::
	msgbox FallarborTown_CozmosHouse_Text_CozmoIsSoHappy, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_Text_MakeYourselfAtHome:
	.string "{COLOR RED}Cozmo{COLOR DARK_GRAY}: Oh, welcome, welcome!\nMake yourself at home.$"

FallarborTown_CozmosHouse_Text_PleaseSaveCozmo:
	.string "Professor Cozmo was taken to Meteor\nFalls, beyond Route 114.\pPlease save the professor from that\nTeam Magma!$"

FallarborTown_CozmosHouse_Text_FeelSorryForCozmo:
	.string "Poor Prof. Cozmo…\n"
	.string "He's so depressed… I feel sorry for him.$"

FallarborTown_CozmosHouse_Text_CozmoIsSoHappy:
	.string "As long a the professor is safe and\nsound, I don't need anything else…$"

FallarborTown_CozmosHouse_EventScript_CozmosAbducted::
	lock
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, FallarborTown_CozmosHouse_Movement_PlayerGoUp
	applymovement 3, FallarborTown_CozmosHouse_Movement_RivalGoUp
	waitmovement 3
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmosAbducted_2
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_1
FallarborTown_CozmosHouse_EventScript_CozmosAbducted_1:
	closemessage
	applymovement LOCALID_WIFE, Common_Movement_WalkInPlaceDown
	delay 8
	applymovement 3, Common_Movement_WalkInPlaceRight
	waitmovement 3
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_2
	closemessage
	applymovement 3, Common_Movement_WalkInPlaceDown
	waitmovement 3
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmosAbducted_6
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_4
FallarborTown_CozmosHouse_EventScript_CozmosAbducted_5:
	closemessage
	applymovement 3, FallarborTown_CozmosHouse_Movement_RivalExit
	applymovement OBJ_EVENT_ID_PLAYER, FallarborTown_CozmosHouse_Movement_PlayerWatchRivalExit
	waitmovement 3
	playse SE_EXIT
	waitse
	removeobject 3
	setvar VAR_FALLARBOR_TOWN_STATE, 2
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmosAbducted_2:
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_0
	goto FallarborTown_CozmosHouse_EventScript_CozmosAbducted_1

FallarborTown_CozmosHouse_EventScript_CozmosAbducted_6:
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_3
	goto FallarborTown_CozmosHouse_EventScript_CozmosAbducted_5


FallarborTown_CozmosHouse_Movement_RivalGoUp:
	walk_up
	walk_up
	walk_in_place_down
	step_end

FallarborTown_CozmosHouse_Movement_PlayerGoUp:
	walk_up
	step_end

FallarborTown_CozmosHouse_Movement_RivalExit:
	walk_down
	walk_down
	walk_in_place_down
	set_invisible
	step_end

FallarborTown_CozmosHouse_Movement_PlayerWatchRivalExit:
	walk_in_place_left
	walk_in_place_down
	step_end

FallarborTown_CozmosHouse_EventScript_CozmosReturn::
	lock
	delay 8
	applymovement LOCALID_WIFE, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_WIFE
	delay 8
	playse SE_PIN
	applymovement LOCALID_WIFE, Common_Movement_ExclamationMark
	waitmovement LOCALID_WIFE
	waitse
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_0
	closemessage
	applymovement LOCALID_COZMO, Common_Movement_WalkUp
	waitmovement LOCALID_COZMO
	applymovement LOCALID_COZMO, Common_Movement_WalkInPlaceLeft
	applymovement 3, Common_Movement_WalkUp
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement LOCALID_WIFE, Common_Movement_WalkInPlaceRight
	waitmovement LOCALID_WIFE
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_1
	closemessage
	delay 8
	applymovement 3, Common_Movement_WalkInPlaceRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	delay 8
	applymovement LOCALID_COZMO, Common_Movement_WalkInPlaceDown
	delay 8
	applymovement LOCALID_WIFE, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_WIFE
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmosReturn_2
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_3
FallarborTown_CozmosHouse_EventScript_CozmosReturn_1:
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	delay 8
	applymovement 3, Common_Movement_WalkInPlaceUp
	waitmovement 3
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_4
	delay 8
	setflag FLAG_RECEIVED_TM_RETURN
	delay 16
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmosReturn_6
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_6
FallarborTown_CozmosHouse_EventScript_CozmosReturn_5:
	closemessage
	applymovement 3, Common_Movement_WalkInPlaceRight
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	waitmovement OBJ_EVENT_ID_PLAYER
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmosReturn_10
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_9, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmosReturn_19
FallarborTown_CozmosHouse_EventScript_CozmosReturn_9:
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmosReturn_14
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_12
FallarborTown_CozmosHouse_EventScript_CozmosReturn_13:
	closemessage
	fadescreen FADE_TO_BLACK
	setflag FLAG_REMOVE_WARP_FADE
	setflag FLAG_HIDE_COZMOS_HOUSE_RIVAL
	setvar VAR_FALLARBOR_TOWN_STATE, 4
	setvar VAR_MAUVILLE_CITY_STATE, 5
	clearflag FLAG_HIDE_MAUVILLE_CITY_RIVAL
	delay 128
	warpsilent MAP_MAUVILLE_CITY, 16, 8
	waitstate
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmosReturn_2:
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_2
	goto FallarborTown_CozmosHouse_EventScript_CozmosReturn_1

FallarborTown_CozmosHouse_EventScript_CozmosReturn_6:
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_5
	goto FallarborTown_CozmosHouse_EventScript_CozmosReturn_5

FallarborTown_CozmosHouse_EventScript_CozmosReturn_10:
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_7, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmosReturn_17
	goto FallarborTown_CozmosHouse_EventScript_CozmosReturn_9

FallarborTown_CozmosHouse_EventScript_CozmosReturn_14:
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_11
	goto FallarborTown_CozmosHouse_EventScript_CozmosReturn_13

FallarborTown_CozmosHouse_EventScript_CozmosReturn_17:
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_8
	closemessage
	call FallarborTown_CozmosHouse_EventScript_MoveEveryone
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmosReturn_19:
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_10
	closemessage
	call FallarborTown_CozmosHouse_EventScript_MoveEveryone
	release
	end


FallarborTown_CozmosHouse_EventScript_CrooksAtMtChimney::
	msgbox FallarborTown_CozmosHouse_EventScript_CrooksAtMtChimney_Text_0, MSGBOX_NPC
	applymovement LOCALID_COZMO, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_COZMO
	end


FallarborTown_CozmosHouse_EventScript_MoveEveryone::
	fadescreen FADE_TO_BLACK
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	applymovement LOCALID_COZMO, FallarborTown_CozmosHouse_Movement_MoveEveryone_Cozmo
	applymovement LOCALID_WIFE, FallarborTown_CozmosHouse_Movement_MoveEveryone_CozmosWife
	applymovement 3, FallarborTown_CozmosHouse_Movement_MoveEveryone_Rival
	waitmovement 3
	fadescreen FADE_FROM_BLACK
	setvar VAR_FALLARBOR_TOWN_STATE, 4
	return


FallarborTown_CozmosHouse_Movement_MoveEveryone_Cozmo:
	walk_faster_up
	walk_faster_up
	walk_in_place_down
	step_end

FallarborTown_CozmosHouse_Movement_MoveEveryone_CozmosWife:
	walk_faster_right
	walk_faster_up
	step_end

FallarborTown_CozmosHouse_Movement_MoveEveryone_Rival:
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_in_place_down
	step_end

FallarborTown_CozmosHouse_EventScript_Rival::
	lock
	faceplayer
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_Rival_2
	msgbox FallarborTown_CozmosHouse_EventScript_Rival_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq FallarborTown_CozmosHouse_EventScript_Rival_8
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_10
FallarborTown_CozmosHouse_EventScript_Rival_1:
	closemessage
	release
	end

FallarborTown_CozmosHouse_EventScript_Rival_2:
	msgbox FallarborTown_CozmosHouse_EventScript_Rival_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq FallarborTown_CozmosHouse_EventScript_Rival_5
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_8
	goto FallarborTown_CozmosHouse_EventScript_Rival_1

FallarborTown_CozmosHouse_EventScript_Rival_5:
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_11
	closemessage
	fadescreen FADE_TO_BLACK
	setflag FLAG_REMOVE_WARP_FADE
	setflag FLAG_HIDE_COZMOS_HOUSE_RIVAL
	setvar VAR_MAUVILLE_CITY_STATE, 5
	clearflag FLAG_HIDE_MAUVILLE_CITY_RIVAL
	delay 128
	warpsilent MAP_MAUVILLE_CITY, 16, 8
	waitstate
	goto FallarborTown_CozmosHouse_EventScript_Rival_1

FallarborTown_CozmosHouse_EventScript_Rival_8:
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_12
	closemessage
	fadescreen FADE_TO_BLACK
	setflag FLAG_REMOVE_WARP_FADE
	setflag FLAG_HIDE_COZMOS_HOUSE_RIVAL
	setvar VAR_MAUVILLE_CITY_STATE, 5
	clearflag FLAG_HIDE_MAUVILLE_CITY_RIVAL
	delay 128
	warpsilent MAP_MAUVILLE_CITY, 16, 8
	waitstate
	goto FallarborTown_CozmosHouse_EventScript_Rival_1


FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_0:
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Y-you see…\pProfessor Cozmo…\pHe got abducted by some weird guys\ncalling themselves Team Something or\lOther…$"

FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_1:
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: It's ridiculous…\nProfessor Cozmo…\pThey say he was just up and kidnapped\nby some nuts calling themselves Team\lSomething or Other…$"

FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_2:
	.string "Those shady characters…\nThey called themselves Team Magma.\pIt seems as though they plan to do\nsomething with the Meteorite that\lthe Professor has been researching.\pThe professor is just too gullible.\nIf you show the least bit of interest\lin this research, he would happily go\lwith you anywhere, without question.$"

FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_3:
	.string "{COLOR RED}May{COLOR DARK_GRAY}: {PLAYER}, please…\nYou've got to help me save him!\pThey can't be planning to do anything\ngood with Professor Cozmo's research.\pWe have to do something!\pI…I'm going to head after them right\naway! Let's meet up at Meteor Falls!\pI'm counting on you, {PLAYER}!$"

FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_4:
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: {PLAYER}…\nI know it's a lot ask, but we've gotta\lhelp Cozmo!\pI can't just stand by here and watch\nthem use his life's work for their own\lcorrupt reasons!\pI'm going to head to Meteor Falls right\naway.\pCome catch up to me as soon as you\ncan.\pI'm counting on you, {PLAYER}!$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_0:
	.string "Ahh! Professor!\pThank the stars above Professor,\nyou're back!$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_1:
	.string "{COLOR RED}Cozmo{COLOR DARK_GRAY}: Hah…haha…\pThanks to these children, I have\nsomehow returned.$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_2:
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Those nuts back there…\pWhat do you think they're hoping to do\nwith the professor's Meteorite?\pFrom the look of them, they kind of\nseem like bad guys, but…\pWe've both got to be careful.\pThough I'm not worried a bit if it's you\nand your team, {PLAYER}!$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_3:
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: Those crazy jerks…\pWhat do you think they wanted with the\nprofessor's Meteorite anyway?\pI've gotta say, they didn't look like\nthe good guys…but…\pI guess we'd both better be careful\nfrom here on out.\pNot that I'm really worried about you,\n{PLAYER}.\pYou and your team'd be fine for sure.$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_4:
	.string "{COLOR RED}Cozmo{COLOR DARK_GRAY}: But I need to thank you, as well.\nYou truly saved me from disaster.\pI hope you take this TM as some small\nform of repayment.$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_5:
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Wow!\nThanks, Professor!$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_6:
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: Thank you, Professor.$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_7:
	.string "We-e-ell…\pWhat're are you gonna do next,\n{PLAYER}?\pI'm thinking of checking out the next\nGym on my list.\pIt's the one in Mauville City.\pWhy don't you come with me, {PLAYER}?\nTo Mauville!$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_8:
	.string "Oh. Right.\nWell, tell me if you change your mind!\pMauville's right in the middle of Hoenn,\nso you can go to all sorts of places\lfrom there.\pEven Mt. Chimney, the place those guys\nwere talking about at Meteor Falls, in\lfact.\pIt's just a pretty short trip from\nMauville.$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_9:
	.string "Now that that's over with…\pWhat're you planning to do next,\n{PLAYER}?\pI'm thinking of going for my next Gym\nBadge.\pThe one from Mauville City.\pWanna make a trip together, {PLAYER}?\nTo Mauville, that is.$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_10:
	.string "Ah, right.\nWell, tell me if you change your mind.\pMauville's right in the middle of Hoenn,\nso you can go to all sorts of places\lfrom there.\pEven Mt. Chimney, the place those guys\nwere talking about at Meteor Falls, is\la pretty short trip from Mauville.$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_11:
	.string "Right!\nLet's hit the road!$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_12:
	.string "Cool.\nLet's go then.$"

FallarborTown_CozmosHouse_EventScript_CrooksAtMtChimney_Text_0:
	.string "{COLOR RED}Cozmo{COLOR DARK_GRAY}: Those crooks who took my\nMeteorite…\pWhat will they next at {COLOR BLUE}Mt. Chimney{COLOR DARK_GRAY}?$"

FallarborTown_CozmosHouse_EventScript_Rival_Text_0:
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Why don't you come with me,\n{PLAYER}? To Mauville!$"

FallarborTown_CozmosHouse_EventScript_Rival_Text_1:
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: Wanna make a trip together,\n{PLAYER}? To Mauville, that is.$"
