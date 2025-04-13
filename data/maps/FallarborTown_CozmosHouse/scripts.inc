# 1 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 2 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
.set LOCALID_WIFE, 2
# 3 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
.set LOCALID_COZMO, 1
# 4 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 5 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_MapScripts::
# 6 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_CozmosHouse_OnTransition
# 7 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, FallarborTown_CozmosHouse_OnFrameTable
# 8 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.byte 0
# 9 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 10 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_OnTransition:
# 11 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
    call Common_EventScript_SetupRivalGfxId
# 12 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_eq VAR_FALLARBOR_TOWN_STATE, 3, FallarborTown_CozmosHouse_MoveCosmoWifeInFrontOfDoor2
# 13 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_CozmosHouse_MoveEveyoneAtBack
# 14 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
    goto_if_eq VAR_FALLARBOR_TOWN_STATE, 1, FallarborTown_CozmosHouse_MoveCosmoWifeInFrontOfDoor1
# 15 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
    end
# 16 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 17 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_MoveEveyoneAtBack:
# 18 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setobjectxyperm LOCALID_WIFE, 4, 5
# 19 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setobjectxyperm LOCALID_COZMO, 4, 4
# 20 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 7, 4
# 21 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
    setobjectmovementtype LOCALID_WIFE, MOVEMENT_TYPE_FACE_UP
# 22 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setobjectmovementtype LOCALID_COZMO, MOVEMENT_TYPE_FACE_DOWN
# 23 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_LOOK_AROUND
# 24 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
    return
# 25 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 26 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_MoveCosmoWifeInFrontOfDoor2:
# 27 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setobjectxyperm LOCALID_WIFE, 3, 6
# 28 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setobjectxyperm LOCALID_COZMO, 4, 7
# 29 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
    setobjectmovementtype LOCALID_WIFE, MOVEMENT_TYPE_FACE_UP
# 30 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setobjectmovementtype LOCALID_COZMO, MOVEMENT_TYPE_FACE_UP
# 31 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
    return
# 32 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 33 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_MoveCosmoWifeInFrontOfDoor1:
# 34 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
    setobjectxyperm LOCALID_WIFE, 4, 6
# 35 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
    setobjectmovementtype LOCALID_WIFE, MOVEMENT_TYPE_FACE_DOWN
# 36 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
    return
# 37 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 38 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_OnFrameTable:
# 39 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	map_script_2 VAR_FALLARBOR_TOWN_STATE, 1, FallarborTown_CozmosHouse_EventScript_CozmosAbducted
# 40 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	map_script_2 VAR_FALLARBOR_TOWN_STATE, 3, FallarborTown_CozmosHouse_EventScript_CozmosReturn
# 41 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.2byte 0
# 42 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 43 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmosWife::
# 44 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 45 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	faceplayer
# 46 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_RETURN, FallarborTown_CozmosHouse_EventScript_CozmoIsHappy
# 47 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_CozmosHouse_EventScript_CozmoIsSad
# 48 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_PleaseSaveCozmo, MSGBOX_DEFAULT
# 49 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 50 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 51 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 52 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmoIsSad::
# 53 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_FeelSorryForCozmo, MSGBOX_DEFAULT
# 54 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 55 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 56 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 57 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmoIsHappy::
# 58 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_CozmoIsSoHappy, MSGBOX_DEFAULT
# 59 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 60 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 61 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 62 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_MakeYourselfAtHome:
# 63 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}Cozmo{COLOR DARK_GRAY}: Oh, welcome, welcome!\nMake yourself at home.$"
# 64 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 65 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_PleaseSaveCozmo:
# 66 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Professor Cozmo was taken to Meteor\nFalls, beyond Route 114.\pPlease save the professor from that\nTeam Magma!$"
# 67 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 68 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_FeelSorryForCozmo:
# 69 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Poor Prof. Cozmo…\n"
# 70 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "He's so depressed… I feel sorry for him.$"
# 71 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 72 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_CozmoIsSoHappy:
# 73 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "As long a the professor is safe and\nsound, I don't need anything else…$"

FallarborTown_CozmosHouse_EventScript_CozmosAbducted::
# 81 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 82 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 83 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FallarborTown_CozmosHouse_Movement_PlayerGoUp
# 84 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement 3, FallarborTown_CozmosHouse_Movement_RivalGoUp
# 85 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement 3
# 86 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	checkplayergender
# 87 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmosAbducted_2
# 90 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_1
FallarborTown_CozmosHouse_EventScript_CozmosAbducted_1:
# 92 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 93 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_WIFE, Common_Movement_WalkInPlaceDown
# 94 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 95 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceRight
# 96 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement 3
# 97 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_2
# 98 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 99 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 100 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement 3
# 101 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	checkplayergender
# 102 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmosAbducted_6
# 105 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_4
FallarborTown_CozmosHouse_EventScript_CozmosAbducted_5:
# 107 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 108 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement 3, FallarborTown_CozmosHouse_Movement_RivalExit
# 109 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FallarborTown_CozmosHouse_Movement_PlayerWatchRivalExit
# 110 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement 3
# 111 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	playse SE_EXIT
# 112 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitse
# 113 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	removeobject 3
# 114 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setvar VAR_FALLARBOR_TOWN_STATE, 2
# 115 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmosAbducted_2:
# 88 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_0
	goto FallarborTown_CozmosHouse_EventScript_CozmosAbducted_1

FallarborTown_CozmosHouse_EventScript_CozmosAbducted_6:
# 103 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_3
	goto FallarborTown_CozmosHouse_EventScript_CozmosAbducted_5


# 119 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Movement_RivalGoUp:
# 120 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_up
# 120 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_up
# 121 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_in_place_down
	step_end

# 124 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Movement_PlayerGoUp:
# 125 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_up
	step_end

# 128 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Movement_RivalExit:
# 129 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_down
# 129 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_down
# 130 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_in_place_down
# 131 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	set_invisible
	step_end

# 134 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Movement_PlayerWatchRivalExit:
# 135 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_in_place_left
# 136 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_in_place_down
	step_end

FallarborTown_CozmosHouse_EventScript_CozmosReturn::
# 140 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 141 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 142 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_WIFE, Common_Movement_WalkInPlaceDown
# 143 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement LOCALID_WIFE
# 144 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 145 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	playse SE_PIN
# 146 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_WIFE, Common_Movement_ExclamationMark
# 147 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement LOCALID_WIFE
# 148 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitse
# 149 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_0
# 150 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 151 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_COZMO, Common_Movement_WalkUp
# 152 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement LOCALID_COZMO
# 153 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_COZMO, Common_Movement_WalkInPlaceLeft
# 154 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkUp
# 155 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 156 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 157 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 158 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_WIFE, Common_Movement_WalkInPlaceRight
# 159 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement LOCALID_WIFE
# 160 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_1
# 161 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 162 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 163 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceRight
# 164 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 165 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 166 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_COZMO, Common_Movement_WalkInPlaceDown
# 167 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 168 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_WIFE, Common_Movement_WalkInPlaceDown
# 169 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement LOCALID_WIFE
# 170 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	checkplayergender
# 171 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmosReturn_2
# 174 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_3
FallarborTown_CozmosHouse_EventScript_CozmosReturn_1:
# 176 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 177 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 178 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 179 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceUp
# 180 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement 3
# 181 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_4
# 182 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 183 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	giveitem ITEM_TM_ROCK_SLIDE, 1
# 184 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 16
# 185 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	checkplayergender
# 186 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmosReturn_6
# 189 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_6
FallarborTown_CozmosHouse_EventScript_CozmosReturn_5:
# 191 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 192 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceRight
# 193 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 194 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 195 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 196 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	checkplayergender
# 197 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmosReturn_10
# 207 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_9, MSGBOX_YESNO
# 208 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmosReturn_19
FallarborTown_CozmosHouse_EventScript_CozmosReturn_9:
# 216 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	checkplayergender
# 217 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmosReturn_14
# 220 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_12
FallarborTown_CozmosHouse_EventScript_CozmosReturn_13:
# 222 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 223 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 224 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 225 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_HIDE_COZMOS_HOUSE_RIVAL
# 226 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setvar VAR_FALLARBOR_TOWN_STATE, 4
# 227 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setvar VAR_MAUVILLE_CITY_STATE, 5
# 228 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_RIVAL
# 229 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 128
# 230 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	warpsilent MAP_MAUVILLE_CITY, 16, 8
# 231 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitstate
# 232 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmosReturn_2:
# 172 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_2
	goto FallarborTown_CozmosHouse_EventScript_CozmosReturn_1

FallarborTown_CozmosHouse_EventScript_CozmosReturn_6:
# 187 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_5
	goto FallarborTown_CozmosHouse_EventScript_CozmosReturn_5

FallarborTown_CozmosHouse_EventScript_CozmosReturn_10:
# 198 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_7, MSGBOX_YESNO
# 199 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmosReturn_17
	goto FallarborTown_CozmosHouse_EventScript_CozmosReturn_9

FallarborTown_CozmosHouse_EventScript_CozmosReturn_14:
# 218 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_11
	goto FallarborTown_CozmosHouse_EventScript_CozmosReturn_13

FallarborTown_CozmosHouse_EventScript_CozmosReturn_17:
# 200 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_8
# 201 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 202 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	call FallarborTown_CozmosHouse_EventScript_MoveEveryone
# 203 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmosReturn_19:
# 209 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_10
# 210 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 211 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	call FallarborTown_CozmosHouse_EventScript_MoveEveryone
# 212 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
	end


FallarborTown_CozmosHouse_EventScript_CrooksAtMtChimney::
# 237 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CrooksAtMtChimney_Text_0, MSGBOX_NPC
# 238 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_COZMO, Common_Movement_WalkInPlaceDown
# 239 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement LOCALID_COZMO
	end


FallarborTown_CozmosHouse_EventScript_MoveEveryone::
# 244 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 245 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 246 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_COZMO, FallarborTown_CozmosHouse_Movement_MoveEveryone_Cozmo
# 247 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_WIFE, FallarborTown_CozmosHouse_Movement_MoveEveryone_CozmosWife
# 248 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement 3, FallarborTown_CozmosHouse_Movement_MoveEveryone_Rival
# 249 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement 3
# 250 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 251 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setvar VAR_FALLARBOR_TOWN_STATE, 4
	return


# 255 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Movement_MoveEveryone_Cozmo:
# 256 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_up
# 256 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_up
# 257 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_in_place_down
	step_end

# 260 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Movement_MoveEveryone_CozmosWife:
# 261 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_right
# 262 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_up
	step_end

# 265 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Movement_MoveEveryone_Rival:
# 266 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_right
# 266 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_right
# 266 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_right
# 266 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_right
# 267 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_up
# 267 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_up
# 267 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_up
# 268 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_in_place_down
	step_end

FallarborTown_CozmosHouse_EventScript_Rival::
# 272 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 273 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	faceplayer
# 274 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	checkplayergender
# 275 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_Rival_2
# 292 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_Rival_Text_1, MSGBOX_YESNO
# 293 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FallarborTown_CozmosHouse_EventScript_Rival_8
# 305 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_10
FallarborTown_CozmosHouse_EventScript_Rival_1:
# 308 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 309 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
	end

FallarborTown_CozmosHouse_EventScript_Rival_2:
# 276 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_Rival_Text_0, MSGBOX_YESNO
# 277 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FallarborTown_CozmosHouse_EventScript_Rival_5
# 289 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_8
	goto FallarborTown_CozmosHouse_EventScript_Rival_1

FallarborTown_CozmosHouse_EventScript_Rival_5:
# 278 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_11
# 279 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 280 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 281 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 282 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_HIDE_COZMOS_HOUSE_RIVAL
# 283 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setvar VAR_MAUVILLE_CITY_STATE, 5
# 284 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_RIVAL
# 285 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 128
# 286 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	warpsilent MAP_MAUVILLE_CITY, 16, 8
# 287 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitstate
	goto FallarborTown_CozmosHouse_EventScript_Rival_1

FallarborTown_CozmosHouse_EventScript_Rival_8:
# 294 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_12
# 295 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 296 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 297 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 298 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_HIDE_COZMOS_HOUSE_RIVAL
# 299 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setvar VAR_MAUVILLE_CITY_STATE, 5
# 300 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_RIVAL
# 301 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 128
# 302 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	warpsilent MAP_MAUVILLE_CITY, 16, 8
# 303 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitstate
	goto FallarborTown_CozmosHouse_EventScript_Rival_1


FallarborTown_CozmosHouse_EventScript_ProfCozmo::
# 314 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 315 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	faceplayer
# 316 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_CozmosHouse_EventScript_ProfCozmo_1
# 319 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_set FLAG_TEMP_2, FallarborTown_CozmosHouse_EventScript_ProfCozmo_5
# 325 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_GALLADITE, FallarborTown_CozmosHouse_EventScript_ProfCozmo_7
# 339 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_MakeYourselfAtHome
# 340 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 341 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
	end

FallarborTown_CozmosHouse_EventScript_ProfCozmo_1:
# 317 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto FallarborTown_CozmosHouse_EventScript_CrooksAtMtChimney
	return

FallarborTown_CozmosHouse_EventScript_ProfCozmo_5:
# 320 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_ProfCozmo_Text_0
# 321 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 322 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
	end

FallarborTown_CozmosHouse_EventScript_ProfCozmo_7:
# 326 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	checkitem ITEM_MEGA_RING
# 327 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_ProfCozmo_10
	return

FallarborTown_CozmosHouse_EventScript_ProfCozmo_10:
# 328 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_ProfCozmo_Text_1
# 329 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	giveitem ITEM_GALLADITE, 1
# 331 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_ProfCozmo_Text_2
# 332 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 333 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_RECEIVED_GALLADITE
# 334 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 335 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
	end


FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_0:
# 88 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Y-you see…\pProfessor Cozmo…\pHe got abducted by some weird guys\ncalling themselves Team Something or\lOther…$"

FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_1:
# 90 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: It's ridiculous…\nProfessor Cozmo…\pThey say he was just up and kidnapped\nby some nuts calling themselves Team\lSomething or Other…$"

FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_2:
# 97 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Those shady characters…\nThey called themselves Team Magma.\pIt seems as though they plan to do\nsomething with the Meteorite that\lthe Professor has been researching.\pThe professor is just too gullible.\nIf you show the least bit of interest\lin this research, he would happily go\lwith you anywhere, without question.$"

FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_3:
# 103 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: {PLAYER}, please…\nYou've got to help me save him!\pThey can't be planning to do anything\ngood with Professor Cozmo's research.\pWe have to do something!\pI…I'm going to head after them right\naway! Let's meet up at Meteor Falls!\pI'm counting on you, {PLAYER}!$"

FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_4:
# 105 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: {PLAYER}…\nI know it's a lot ask, but we've gotta\lhelp Cozmo!\pI can't just stand by here and watch\nthem use his life's work for their own\lcorrupt reasons!\pI'm going to head to Meteor Falls right\naway.\pCome catch up to me as soon as you\ncan.\pI'm counting on you, {PLAYER}!$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_0:
# 149 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Ahh! Professor!\pThank the stars above Professor,\nyou're back!$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_1:
# 160 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}Cozmo{COLOR DARK_GRAY}: Hah…haha…\pThanks to these children, I have\nsomehow returned.$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_2:
# 172 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Those nuts back there…\pWhat do you think they're hoping to do\nwith the professor's Meteorite?\pFrom the look of them, they kind of\nseem like bad guys, but…\pWe've both got to be careful.\pThough I'm not worried a bit if it's you\nand your team, {PLAYER}!$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_3:
# 174 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: Those crazy jerks…\pWhat do you think they wanted with the\nprofessor's Meteorite anyway?\pI've gotta say, they didn't look like\nthe good guys…but…\pI guess we'd both better be careful\nfrom here on out.\pNot that I'm really worried about you,\n{PLAYER}.\pYou and your team'd be fine for sure.$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_4:
# 181 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}Cozmo{COLOR DARK_GRAY}: But I need to thank you, as well.\nYou truly saved me from disaster.\pI hope you take this TM as some small\nform of repayment.$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_5:
# 187 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Wow!\nThanks, Professor!$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_6:
# 189 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: Thank you, Professor.$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_7:
# 198 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "We-e-ell…\pWhat're are you gonna do next,\n{PLAYER}?\pI'm thinking of checking out the next\nGym on my list.\pIt's the one in Mauville City.\pWhy don't you come with me, {PLAYER}?\nTo Mauville!$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_8:
# 200 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Oh. Right.\nWell, tell me if you change your mind!\pMauville's right in the middle of Hoenn,\nso you can go to all sorts of places\lfrom there.\pEven Mt. Chimney, the place those guys\nwere talking about at Meteor Falls, in\lfact.\pIt's just a pretty short trip from\nMauville.$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_9:
# 207 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Now that that's over with…\pWhat're you planning to do next,\n{PLAYER}?\pI'm thinking of going for my next Gym\nBadge.\pThe one from Mauville City.\pWanna make a trip together, {PLAYER}?\nTo Mauville, that is.$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_10:
# 209 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Ah, right.\nWell, tell me if you change your mind.\pMauville's right in the middle of Hoenn,\nso you can go to all sorts of places\lfrom there.\pEven Mt. Chimney, the place those guys\nwere talking about at Meteor Falls, is\la pretty short trip from Mauville.$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_11:
# 218 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Right!\nLet's hit the road!$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_12:
# 220 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Cool.\nLet's go then.$"

FallarborTown_CozmosHouse_EventScript_CrooksAtMtChimney_Text_0:
# 237 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}Cozmo{COLOR DARK_GRAY}: Those crooks who took my\nMeteorite…\pWhat will they next at {COLOR BLUE}Mt. Chimney{COLOR DARK_GRAY}?$"

FallarborTown_CozmosHouse_EventScript_Rival_Text_0:
# 276 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Why don't you come with me,\n{PLAYER}? To Mauville!$"

FallarborTown_CozmosHouse_EventScript_Rival_Text_1:
# 292 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: Wanna make a trip together,\n{PLAYER}? To Mauville, that is.$"

FallarborTown_CozmosHouse_EventScript_ProfCozmo_Text_0:
# 320 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}Cozmo{COLOR DARK_GRAY}: Make yourself at home!$"

FallarborTown_CozmosHouse_EventScript_ProfCozmo_Text_1:
# 328 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}Cozmo{COLOR DARK_GRAY}: Oh! Why, hello again!\pWhat good fortune…\pI'd been thinking that if I saw you\nagain, I would want to give you this…$"

FallarborTown_CozmosHouse_EventScript_ProfCozmo_Text_2:
# 331 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "I happened to pick this up some\ntime ago, while doing excavation at\lMeteor Falls.\pI hope it might help you and your team\nalong on your journey.$"
