GraniteCave_StevensRoom_MapScripts::
# 4 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GraniteCave_StevensRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

GraniteCave_StevensRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	map_script_2 VAR_GRANITE_CAVE_STEVEN_ROOM_STATE, 0, GraniteCave_StevensRoom_EventScript_Steven
	.2byte 0


GraniteCave_StevensRoom_EventScript_Steven::
# 10 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	lock
# 11 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 16
# 12 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special SpawnCameraObject
# 13 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, GraniteCave_StevensRoom_Movement_CameraPanToSteven
# 14 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 15 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 16
# 16 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, GraniteCave_StevensRoom_Movement_StevenLeftRight
# 17 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 1
# 18 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerGoToSteven
# 19 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 20 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_0
# 21 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 22 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 8
# 23 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 24 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 1
# 25 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_1
# 26 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 27 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 24
# 28 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_2
# 29 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 30 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 8
# 31 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 32 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	checkplayergender
# 33 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_2
# 36 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_4
GraniteCave_StevensRoom_EventScript_Steven_1:
# 38 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitfanfare
# 39 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 40 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	removeitem ITEM_LETTER
# 41 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_DELIVERED_STEVEN_LETTER
# 42 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 16
# 43 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_5
# 44 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_TM_STEEL_WING
# 45 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 8
# 46 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 47 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 8
# 48 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 49 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceUp
# 50 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 1
# 51 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_6
# 52 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 53 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 54 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 55 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 1
# 56 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_7
# 57 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 58 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 24
# 59 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 60 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_8
# 61 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitfanfare
# 62 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 63 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 24
# 64 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_REGISTERED_STEVEN_POKENAV
# 65 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_9
# 66 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 67 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerWatchStevenLeave
# 68 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement 1, GraniteCave_StevensRoom_Movement_StevenLeavesRoom
# 69 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 1
# 70 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	special RemoveCameraObject
# 71 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 72 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	removeobject 1
# 73 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_GRANITE_CAVE_STEVEN_ROOM_STATE, 1
# 74 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
	end

GraniteCave_StevensRoom_EventScript_Steven_2:
# 34 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_3
	goto GraniteCave_StevensRoom_EventScript_Steven_1


# 78 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_CameraPanToSteven:
# 79 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 79 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 79 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 79 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 79 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 79 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
	step_end

# 82 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenLeftRight:
# 83 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_right
# 83 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_right
# 84 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_in_place_up
# 85 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 86 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 86 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 86 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 86 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 87 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_in_place_up
# 88 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 89 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
# 90 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_right
# 90 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_right
# 91 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_in_place_up
	step_end

# 94 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_PlayerGoToSteven:
# 95 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 95 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 95 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 95 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 95 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 95 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
	step_end

# 98 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenLeavesRoom:
# 99 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_right
# 100 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_down
# 100 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_down
# 100 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_down
# 100 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_down
# 100 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_down
# 100 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_down
# 100 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_down
	step_end

# 103 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_PlayerWatchStevenLeave:
# 104 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 104 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 105 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_in_place_down
	step_end

GraniteCave_StevensRoom_EventScript_CavePainting::
# 109 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_EventScript_CavePainting_Text_0, MSGBOX_SIGN
	end


GraniteCave_StevensRoom_EventScript_Steven_Text_0:
# 20 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: …Mm-hmm.\pSo in the ancient world, their primal\nforms once held this much power…?\pThese super-ancient Pokémon…\nWhat terrible strength…\lBut this appearance here…\pIt seems somehow different from\nMega Evolution…\pHmmm.\nIt seems my questions will not be\lanswered today.\pHm?$"

GraniteCave_StevensRoom_EventScript_Steven_Text_1:
# 25 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "You are…?\p…$"

GraniteCave_StevensRoom_EventScript_Steven_Text_2:
# 28 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Ah, I see.\nIt's a pleasure, {PLAYER}.\pMy apologies.\nMy name is {COLOR RED}Steven{COLOR DARK_GRAY}.\pI'm interested in rare stones, so I\ntravel here and there.\pToday, my journey brought me here,\nbut what about you?\pOh?\nA letter for me?$"

GraniteCave_StevensRoom_EventScript_Steven_Text_3:
# 34 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "{PLAYER} gave Steven the letter he\nhad been entrusted with!$"

GraniteCave_StevensRoom_EventScript_Steven_Text_4:
# 36 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "{PLAYER} gave Steven the letter she\nhad been entrusted with!$"

GraniteCave_StevensRoom_EventScript_Steven_Text_5:
# 43 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Why, thank you…\pIt must have been some trouble to\ntrack me down.\pI suppose I must repay you in some\nway.\pLet me see…\pI will give you this TM.\nPlease accept it.\pIt contains my favorite move, Steel\nWing.$"

GraniteCave_StevensRoom_EventScript_Steven_Text_6:
# 51 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "If you don't mind me asking…\pDo you feel anything in particular\nwhen you look up at this wall?\pA primal world, lost thousands of\nyears in the past…\pLegendary Pokémon of tremendous\npower became humanity's greatest\lthreat…\pThe terror aroused by that power is\nclear to see in this ancient artwork.$"

GraniteCave_StevensRoom_EventScript_Steven_Text_7:
# 56 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "…Yes.\pBut not all power is terrible.\pYour Pokémon are clearly quite capable\nas well. Looking at you all together…\pI think you have it takes to become\na Pokémon League Champion.\pAs long as you keep training, that is.\p…\pI know, since we've gotten to know each\nother, let's register one another in\lour Pokénavs.$"

GraniteCave_StevensRoom_EventScript_Steven_Text_8:
# 60 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Registered Steven in the Pokénav.$"

GraniteCave_StevensRoom_EventScript_Steven_Text_9:
# 65 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Good luck to you.\nI must be going now.$"

GraniteCave_StevensRoom_EventScript_CavePainting_Text_0:
# 109 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "It is a cave painting the depicts giant\nPokémon creatures wreaking havoc.\pThere are symbols resembling the\ncharacters Omega and Alpha on each\lof the beast's arms.$"
