GraniteCave_StevensRoom_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GraniteCave_StevensRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

GraniteCave_StevensRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_GRANITE_CAVE_STEVEN_ROOM_STATE, 0, GraniteCave_StevensRoom_EventScript_Steven
	.2byte 0


GraniteCave_StevensRoom_EventScript_Steven::
	lock
	delay 16
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, GraniteCave_StevensRoom_Movement_CameraPanToSteven
	waitmovement OBJ_EVENT_ID_CAMERA
	delay 16
	applymovement 1, GraniteCave_StevensRoom_Movement_StevenLeftRight
	waitmovement 1
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerGoToSteven
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_0
	closemessage
	delay 8
	applymovement 1, Common_Movement_WalkInPlaceDown
	waitmovement 1
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_1
	closemessage
	delay 24
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_2
	closemessage
	delay 8
	playfanfare MUS_OBTAIN_TMHM
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_2
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_4
GraniteCave_StevensRoom_EventScript_Steven_1:
	waitfanfare
	closemessage
	removeitem ITEM_LETTER
	setflag FLAG_DELIVERED_STEVEN_LETTER
	delay 16
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_5
	giveitem ITEM_TM_STEEL_WING
	delay 8
	closemessage
	delay 8
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
	applymovement 1, Common_Movement_WalkInPlaceUp
	waitmovement 1
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_6
	closemessage
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	applymovement 1, Common_Movement_WalkInPlaceDown
	waitmovement 1
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_7
	closemessage
	delay 24
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_8
	waitfanfare
	closemessage
	delay 24
	setflag FLAG_REGISTERED_STEVEN_POKENAV
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_9
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerWatchStevenLeave
	applymovement 1, GraniteCave_StevensRoom_Movement_StevenLeavesRoom
	waitmovement 1
	special RemoveCameraObject
	playse SE_EXIT
	removeobject 1
	setvar VAR_GRANITE_CAVE_STEVEN_ROOM_STATE, 1
	release
	end

GraniteCave_StevensRoom_EventScript_Steven_2:
	msgbox GraniteCave_StevensRoom_EventScript_Steven_Text_3
	goto GraniteCave_StevensRoom_EventScript_Steven_1


GraniteCave_StevensRoom_Movement_CameraPanToSteven:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

GraniteCave_StevensRoom_Movement_StevenLeftRight:
	walk_right
	walk_right
	walk_in_place_up
	delay_16
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_up
	delay_16
	delay_8
	walk_right
	walk_right
	walk_in_place_up
	step_end

GraniteCave_StevensRoom_Movement_PlayerGoToSteven:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

GraniteCave_StevensRoom_Movement_StevenLeavesRoom:
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

GraniteCave_StevensRoom_Movement_PlayerWatchStevenLeave:
	delay_16
	delay_16
	walk_in_place_down
	step_end

GraniteCave_StevensRoom_EventScript_CavePainting::
	msgbox GraniteCave_StevensRoom_EventScript_CavePainting_Text_0, MSGBOX_SIGN
	end


GraniteCave_StevensRoom_EventScript_Steven_Text_0:
	.string "{COLOR RED}???{COLOR DARK_GRAY}: …Mm-hmm.\pSo in the ancient world, their primal\nforms once held this much power…?\pThese super-ancient Pokémon…\nWhat terrible strength…\lBut this appearance here…\pIt seems somehow different from\nMega Evolution…\pHmmm.\nIt seems my questions will not be\lanswered today.\pHm?$"

GraniteCave_StevensRoom_EventScript_Steven_Text_1:
	.string "You are…?\p…$"

GraniteCave_StevensRoom_EventScript_Steven_Text_2:
	.string "Ah, I see.\nIt's a pleasure, {PLAYER}.\pMy apologies.\nMy name is {COLOR RED}Steven{COLOR DARK_GRAY}.\pI'm interested in rare stones, so I\ntravel here and there.\pToday, my journey brought me here,\nbut what about you?\pOh?\nA letter for me?$"

GraniteCave_StevensRoom_EventScript_Steven_Text_3:
	.string "{PLAYER} gave Steven the letter he\nhad been entrusted with!$"

GraniteCave_StevensRoom_EventScript_Steven_Text_4:
	.string "{PLAYER} gave Steven the letter she\nhad been entrusted with!$"

GraniteCave_StevensRoom_EventScript_Steven_Text_5:
	.string "Why, thank you…\pIt must have been some trouble to\ntrack me down.\pI suppose I must repay you in some\nway.\pLet me see…\pI will give you this TM.\nPlease accept it.\pIt contains my favorite move, Steel\nWing.$"

GraniteCave_StevensRoom_EventScript_Steven_Text_6:
	.string "If you don't mind me asking…\pDo you feel anything in particular\nwhen you look up at this wall?\pA primal world, lost thousands of\nyears in the past…\pLegendary Pokémon of tremendous\npower became humanity's greatest\lthreat…\pThe terror aroused by that power is\nclear to see in this ancient artwork.$"

GraniteCave_StevensRoom_EventScript_Steven_Text_7:
	.string "…Yes.\pBut not all power is terrible.\pYour Pokémon are clearly quite capable\nas well. Looking at you all together…\pI think you have it takes to become\na Pokémon League Champion.\pAs long as you keep training, that is.\p…\pI know, since we've gotten to know each\nother, let's register one another in\lour Pokénavs.$"

GraniteCave_StevensRoom_EventScript_Steven_Text_8:
	.string "Registered Steven in the Pokénav.$"

GraniteCave_StevensRoom_EventScript_Steven_Text_9:
	.string "Good luck to you.\nI must be going now.$"

GraniteCave_StevensRoom_EventScript_CavePainting_Text_0:
	.string "It is a cave painting the depicts giant\nPokémon creatures wreaking havoc.\pThere are symbols resembling the\ncharacters Omega and Alpha on each\lof the beast's arms.$"
