# 1 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 2 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 3 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_MapScripts::
# 4 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_CozmosHouse_OnTransition
# 5 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, FallarborTown_CozmosHouse_OnFrameTable
# 6 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.byte 0
# 7 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 8 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_OnTransition:
# 9 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
    call Common_EventScript_SetupRivalGfxId
# 10 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
    goto_if_eq VAR_FALLARBOR_TOWN_STATE, 1, FallarborTown_CozmosHouse_MoveCosmoWifeInFrontOfDoor1
# 11 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_eq VAR_FALLARBOR_TOWN_STATE, 3, FallarborTown_CozmosHouse_MoveCosmoWifeInFrontOfDoor2
# 12 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_CozmosHouse_MoveEveyoneAtBack
# 13 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
    end
# 14 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 15 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_MoveEveyoneAtBack:
# 16 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setobjectxyperm LOCALID_COZMOS_HOUSE_WIFE, 4, 5
# 17 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setobjectxyperm LOCALID_COZMOS_HOUSE_COZMO, 4, 4
# 18 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setobjectxyperm LOCALID_COZMOS_HOUSE_RIVAL, 8, 5
# 19 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
    setobjectmovementtype LOCALID_COZMOS_HOUSE_WIFE, MOVEMENT_TYPE_FACE_UP
# 20 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setobjectmovementtype LOCALID_COZMOS_HOUSE_COZMO, MOVEMENT_TYPE_FACE_DOWN
# 21 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setobjectmovementtype LOCALID_COZMOS_HOUSE_RIVAL, MOVEMENT_TYPE_LOOK_AROUND
# 22 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
    return
# 23 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 24 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_MoveCosmoWifeInFrontOfDoor2:
# 25 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setobjectxyperm LOCALID_COZMOS_HOUSE_WIFE, 3, 6
# 26 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setobjectxyperm LOCALID_COZMOS_HOUSE_COZMO, 4, 7
# 27 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
    setobjectmovementtype LOCALID_COZMOS_HOUSE_WIFE, MOVEMENT_TYPE_FACE_UP
# 28 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setobjectmovementtype LOCALID_COZMOS_HOUSE_COZMO, MOVEMENT_TYPE_FACE_UP
# 29 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
    return
# 30 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 31 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_MoveCosmoWifeInFrontOfDoor1:
# 32 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
    setobjectxyperm LOCALID_COZMOS_HOUSE_WIFE, 4, 6
# 33 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
    setobjectmovementtype LOCALID_COZMOS_HOUSE_WIFE, MOVEMENT_TYPE_FACE_DOWN
# 34 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
    return
# 35 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 36 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_OnFrameTable:
# 37 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	map_script_2 VAR_FALLARBOR_TOWN_STATE, 1, FallarborTown_CozmosHouse_EventScript_CozmosAbducted
# 38 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	map_script_2 VAR_FALLARBOR_TOWN_STATE, 3, FallarborTown_CozmosHouse_EventScript_CozmosReturn
# 39 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.2byte 0
# 40 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 41 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmosWife::
# 42 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 43 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	faceplayer
# 44 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	checkitem ITEM_TM_ROCK_SLIDE
# 45 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FallarborTown_CozmosHouse_EventScript_CozmoIsHappy
# 46 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_CozmosHouse_EventScript_CozmoIsSad
# 47 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_PleaseSaveCozmo, MSGBOX_DEFAULT
# 48 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 49 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 50 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 51 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmoIsSad::
# 52 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_FeelSorryForCozmo, MSGBOX_DEFAULT
# 53 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 54 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 55 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 56 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmoIsHappy::
# 57 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_CozmoIsSoHappy, MSGBOX_DEFAULT
# 58 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 59 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 60 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 61 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_MakeYourselfAtHome:
# 62 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}Cozmo{COLOR DARK_GRAY}: Oh, welcome, welcome!\nMake yourself at home.$"
# 63 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 64 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_PleaseSaveCozmo:
# 65 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Professor Cozmo was taken to Meteor\nFalls, beyond Route 114.\pPlease save the professor from that\nTeam Magma!$"
# 66 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 67 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_FeelSorryForCozmo:
# 68 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Poor Prof. Cozmo…\n"
# 69 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "He's so depressed… I feel sorry for him.$"
# 70 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 71 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_CozmoIsSoHappy:
# 72 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "As long a the professor is safe and\nsound, I don't need anything else…$"

FallarborTown_CozmosHouse_EventScript_CozmosAbducted::
# 78 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 79 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 80 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FallarborTown_CozmosHouse_Movement_PlayerGoUp
# 81 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_COZMOS_HOUSE_RIVAL, FallarborTown_CozmosHouse_Movement_RivalGoUp
# 82 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement LOCALID_COZMOS_HOUSE_RIVAL
# 83 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	checkplayergender
# 84 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmosAbducted_2
# 87 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_1
FallarborTown_CozmosHouse_EventScript_CozmosAbducted_1:
# 89 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 90 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_COZMOS_HOUSE_WIFE, Common_Movement_WalkInPlaceDown
# 91 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 92 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_COZMOS_HOUSE_RIVAL, Common_Movement_WalkInPlaceRight
# 93 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement LOCALID_COZMOS_HOUSE_RIVAL
# 94 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_2
# 95 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 96 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_COZMOS_HOUSE_RIVAL, Common_Movement_WalkInPlaceDown
# 97 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement LOCALID_COZMOS_HOUSE_RIVAL
# 98 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	checkplayergender
# 99 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmosAbducted_6
# 102 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_4
FallarborTown_CozmosHouse_EventScript_CozmosAbducted_5:
# 104 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 105 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_COZMOS_HOUSE_RIVAL, FallarborTown_CozmosHouse_Movement_RivalExit
# 106 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FallarborTown_CozmosHouse_Movement_PlayerWatchRivalExit
# 107 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement LOCALID_COZMOS_HOUSE_RIVAL
# 108 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	playse SE_EXIT
# 109 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitse
# 110 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	removeobject LOCALID_COZMOS_HOUSE_RIVAL
# 111 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setvar VAR_FALLARBOR_TOWN_STATE, 2
# 112 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmosAbducted_2:
# 85 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_0
	goto FallarborTown_CozmosHouse_EventScript_CozmosAbducted_1

FallarborTown_CozmosHouse_EventScript_CozmosAbducted_6:
# 100 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_3
	goto FallarborTown_CozmosHouse_EventScript_CozmosAbducted_5


# 116 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Movement_RivalGoUp:
# 117 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_up
# 117 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_up
# 118 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_in_place_down
	step_end

# 121 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Movement_PlayerGoUp:
# 122 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_up
	step_end

# 125 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Movement_RivalExit:
# 126 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_down
# 126 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_down
# 127 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_in_place_down
# 128 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	set_invisible
	step_end

# 131 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Movement_PlayerWatchRivalExit:
# 132 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_in_place_left
# 133 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_in_place_down
	step_end

FallarborTown_CozmosHouse_EventScript_CozmosReturn::
# 137 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 138 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 139 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_COZMOS_HOUSE_WIFE, Common_Movement_WalkInPlaceDown
# 140 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement LOCALID_COZMOS_HOUSE_WIFE
# 141 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 142 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	playse SE_PIN
# 143 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_COZMOS_HOUSE_WIFE, Common_Movement_ExclamationMark
# 144 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement LOCALID_COZMOS_HOUSE_WIFE
# 145 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitse
# 146 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_0
# 147 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 148 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_COZMOS_HOUSE_COZMO, Common_Movement_WalkUp
# 149 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement LOCALID_COZMOS_HOUSE_COZMO
# 150 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_COZMOS_HOUSE_COZMO, Common_Movement_WalkInPlaceLeft
# 151 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_COZMOS_HOUSE_RIVAL, Common_Movement_WalkUp
# 152 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 153 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 154 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 155 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_COZMOS_HOUSE_WIFE, Common_Movement_WalkInPlaceRight
# 156 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement LOCALID_COZMOS_HOUSE_WIFE
# 157 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_1
# 158 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 159 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 160 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_COZMOS_HOUSE_RIVAL, Common_Movement_WalkInPlaceRight
# 161 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 162 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 163 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_COZMOS_HOUSE_COZMO, Common_Movement_WalkInPlaceDown
# 164 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 165 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_COZMOS_HOUSE_WIFE, Common_Movement_WalkInPlaceDown
# 166 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement LOCALID_COZMOS_HOUSE_WIFE
# 167 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	checkplayergender
# 168 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmosReturn_2
# 171 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_3
FallarborTown_CozmosHouse_EventScript_CozmosReturn_1:
# 173 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 174 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 175 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 176 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_COZMOS_HOUSE_RIVAL, Common_Movement_WalkInPlaceUp
# 177 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement LOCALID_COZMOS_HOUSE_RIVAL
# 178 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_4
# 179 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 180 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	giveitem ITEM_TM_ROCK_SLIDE, 1
# 181 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 16
# 182 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	checkplayergender
# 183 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmosReturn_6
# 186 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_6
FallarborTown_CozmosHouse_EventScript_CozmosReturn_5:
# 188 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 189 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_COZMOS_HOUSE_RIVAL, Common_Movement_WalkInPlaceRight
# 190 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 191 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 192 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 193 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	checkplayergender
# 194 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmosReturn_10
# 204 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_9, MSGBOX_YESNO
# 205 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmosReturn_19
FallarborTown_CozmosHouse_EventScript_CozmosReturn_9:
# 213 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	checkplayergender
# 214 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmosReturn_14
# 217 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_12
FallarborTown_CozmosHouse_EventScript_CozmosReturn_13:
# 219 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 220 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 221 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 222 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_HIDE_COZMOS_HOUSE_RIVAL
# 223 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setvar VAR_FALLARBOR_TOWN_STATE, 4
# 224 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setvar VAR_MAUVILLE_CITY_STATE, 5
# 225 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_RIVAL
# 226 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 128
# 227 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	warpsilent MAP_MAUVILLE_CITY, 16, 8
# 228 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitstate
# 229 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmosReturn_2:
# 169 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_2
	goto FallarborTown_CozmosHouse_EventScript_CozmosReturn_1

FallarborTown_CozmosHouse_EventScript_CozmosReturn_6:
# 184 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_5
	goto FallarborTown_CozmosHouse_EventScript_CozmosReturn_5

FallarborTown_CozmosHouse_EventScript_CozmosReturn_10:
# 195 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_7, MSGBOX_YESNO
# 196 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmosReturn_17
	goto FallarborTown_CozmosHouse_EventScript_CozmosReturn_9

FallarborTown_CozmosHouse_EventScript_CozmosReturn_14:
# 215 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_11
	goto FallarborTown_CozmosHouse_EventScript_CozmosReturn_13

FallarborTown_CozmosHouse_EventScript_CozmosReturn_17:
# 197 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_8
# 198 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 199 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	call FallarborTown_CozmosHouse_EventScript_MoveEveryone
# 200 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmosReturn_19:
# 206 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_10
# 207 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 208 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	call FallarborTown_CozmosHouse_EventScript_MoveEveryone
# 209 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
	end


FallarborTown_CozmosHouse_EventScript_CrooksAtMtChimney::
# 234 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CrooksAtMtChimney_Text_0, MSGBOX_NPC
# 235 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_COZMOS_HOUSE_COZMO, Common_Movement_WalkInPlaceDown
# 236 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement LOCALID_COZMOS_HOUSE_COZMO
	end


FallarborTown_CozmosHouse_EventScript_MoveEveryone::
# 241 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 242 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 243 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_COZMOS_HOUSE_COZMO, FallarborTown_CozmosHouse_Movement_MoveEveryone_Cozmo
# 244 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_COZMOS_HOUSE_WIFE, FallarborTown_CozmosHouse_Movement_MoveEveryone_CozmosWife
# 245 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_COZMOS_HOUSE_RIVAL, FallarborTown_CozmosHouse_Movement_MoveEveryone_Rival
# 246 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement LOCALID_COZMOS_HOUSE_RIVAL
# 247 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 248 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setvar VAR_FALLARBOR_TOWN_STATE, 4
	return


# 252 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Movement_MoveEveryone_Cozmo:
# 253 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_up
# 253 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_up
# 254 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_in_place_down
	step_end

# 257 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Movement_MoveEveryone_CozmosWife:
# 258 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_right
# 259 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_up
	step_end

# 262 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Movement_MoveEveryone_Rival:
# 263 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_right
# 263 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_right
# 263 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_right
# 263 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_right
# 263 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_right
# 264 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_up
# 264 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_up
# 265 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_in_place_down
	step_end

FallarborTown_CozmosHouse_EventScript_Rival::
# 269 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 270 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	faceplayer
# 271 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	checkplayergender
# 272 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_Rival_2
# 289 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_Rival_Text_1, MSGBOX_YESNO
# 290 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FallarborTown_CozmosHouse_EventScript_Rival_8
# 302 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_10
FallarborTown_CozmosHouse_EventScript_Rival_1:
# 305 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 306 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
	end

FallarborTown_CozmosHouse_EventScript_Rival_2:
# 273 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_Rival_Text_0, MSGBOX_YESNO
# 274 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FallarborTown_CozmosHouse_EventScript_Rival_5
# 286 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_8
	goto FallarborTown_CozmosHouse_EventScript_Rival_1

FallarborTown_CozmosHouse_EventScript_Rival_5:
# 275 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_11
# 276 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 277 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 278 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 279 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_HIDE_COZMOS_HOUSE_RIVAL
# 280 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setvar VAR_MAUVILLE_CITY_STATE, 5
# 281 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_RIVAL
# 282 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 128
# 283 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	warpsilent MAP_MAUVILLE_CITY, 16, 8
# 284 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitstate
	goto FallarborTown_CozmosHouse_EventScript_Rival_1

FallarborTown_CozmosHouse_EventScript_Rival_8:
# 291 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_12
# 292 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 293 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 294 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 295 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_HIDE_COZMOS_HOUSE_RIVAL
# 296 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setvar VAR_MAUVILLE_CITY_STATE, 5
# 297 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_RIVAL
# 298 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 128
# 299 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	warpsilent MAP_MAUVILLE_CITY, 16, 8
# 300 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitstate
	goto FallarborTown_CozmosHouse_EventScript_Rival_1


FallarborTown_CozmosHouse_EventScript_ProfCozmo::
# 311 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 312 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	faceplayer
# 313 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_CozmosHouse_EventScript_ProfCozmo_1
# 316 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_set FLAG_TEMP_2, FallarborTown_CozmosHouse_EventScript_ProfCozmo_5
# 322 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_GALLADITE, FallarborTown_CozmosHouse_EventScript_ProfCozmo_7
# 336 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_MakeYourselfAtHome
# 337 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 338 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
	end

FallarborTown_CozmosHouse_EventScript_ProfCozmo_1:
# 314 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto FallarborTown_CozmosHouse_EventScript_CrooksAtMtChimney
	return

FallarborTown_CozmosHouse_EventScript_ProfCozmo_5:
# 317 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_ProfCozmo_Text_0
# 318 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 319 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
	end

FallarborTown_CozmosHouse_EventScript_ProfCozmo_7:
# 323 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	checkitem ITEM_MEGA_RING
# 324 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_ProfCozmo_10
	return

FallarborTown_CozmosHouse_EventScript_ProfCozmo_10:
# 325 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_ProfCozmo_Text_1
# 326 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	giveitem ITEM_GALLADITE, 1
# 328 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_ProfCozmo_Text_2
# 329 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 330 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_RECEIVED_GALLADITE
# 331 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 332 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
	end


FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_0:
# 85 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Y-you see…\pProfessor Cozmo…\pHe got abducted by some weird guys\ncalling themselves Team Something or\lOther…$"

FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_1:
# 87 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: It's ridiculous…\nProfessor Cozmo…\pThey say he was just up and kidnapped\nby some nuts calling themselves Team\lSomething or Other…$"

FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_2:
# 94 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Those shady characters…\nThey called themselves Team Magma.\pIt seems as though they plan to do\nsomething with the Meteorite that\lthe Professor has been researching.\pThe professor is just too gullible.\nIf you show the least bit of interest\lin this research, he would happily go\lwith you anywhere, without question.$"

FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_3:
# 100 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: {PLAYER}, please…\nYou've got to help me save him!\pThey can't be planning to do anything\ngood with Professor Cozmo's research.\pWe have to do something!\pI…I'm going to head after them right\naway! Let's meet up at Meteor Falls!\pI'm counting on you, {PLAYER}!$"

FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_4:
# 102 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: {PLAYER}…\nI know it's a lot ask, but we've gotta\lhelp Cozmo!\pI can't just stand by here and watch\nthem use his life's work for their own\lcorrupt reasons!\pI'm going to head to Meteor Falls right\naway.\pCome catch up to me as soon as you\ncan.\pI'm counting on you, {PLAYER}!$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_0:
# 146 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Ahh! Professor!\pThank the stars above Professor,\nyou're back!$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_1:
# 157 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}Cozmo{COLOR DARK_GRAY}: Hah…haha…\pThanks to these children, I have\nsomehow returned.$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_2:
# 169 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Those nuts back there…\pWhat do you think they're hoping to do\nwith the professor's Meteorite?\pFrom the look of them, they kind of\nseem like bad guys, but…\pWe've both got to be careful.\pThough I'm not worried a bit if it's you\nand your team, {PLAYER}!$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_3:
# 171 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: Those crazy jerks…\pWhat do you think they wanted with the\nprofessor's Meteorite anyway?\pI've gotta say, they didn't look like\nthe good guys…but…\pI guess we'd both better be careful\nfrom here on out.\pNot that I'm really worried about you,\n{PLAYER}.\pYou and your team'd be fine for sure.$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_4:
# 178 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}Cozmo{COLOR DARK_GRAY}: But I need to thank you, as well.\nYou truly saved me from disaster.\pI hope you take this TM as some small\nform of repayment.$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_5:
# 184 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Wow!\nThanks, Professor!$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_6:
# 186 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: Thank you, Professor.$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_7:
# 195 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "We-e-ell…\pWhat're are you gonna do next,\n{PLAYER}?\pI'm thinking of checking out the next\nGym on my list.\pIt's the one in Mauville City.\pWhy don't you come with me, {PLAYER}?\nTo Mauville!$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_8:
# 197 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Oh. Right.\nWell, tell me if you change your mind!\pMauville's right in the middle of Hoenn,\nso you can go to all sorts of places\lfrom there.\pEven Mt. Chimney, the place those guys\nwere talking about at Meteor Falls, in\lfact.\pIt's just a pretty short trip from\nMauville.$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_9:
# 204 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Now that that's over with…\pWhat're you planning to do next,\n{PLAYER}?\pI'm thinking of going for my next Gym\nBadge.\pThe one from Mauville City.\pWanna make a trip together, {PLAYER}?\nTo Mauville, that is.$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_10:
# 206 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Ah, right.\nWell, tell me if you change your mind.\pMauville's right in the middle of Hoenn,\nso you can go to all sorts of places\lfrom there.\pEven Mt. Chimney, the place those guys\nwere talking about at Meteor Falls, is\la pretty short trip from Mauville.$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_11:
# 215 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Right!\nLet's hit the road!$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_12:
# 217 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Cool.\nLet's go then.$"

FallarborTown_CozmosHouse_EventScript_CrooksAtMtChimney_Text_0:
# 234 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}Cozmo{COLOR DARK_GRAY}: Those crooks who took my\nMeteorite…\pWhat will they do next at {COLOR BLUE}Mt. Chimney{COLOR DARK_GRAY}?$"

FallarborTown_CozmosHouse_EventScript_Rival_Text_0:
# 273 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Why don't you come with me,\n{PLAYER}? To Mauville!$"

FallarborTown_CozmosHouse_EventScript_Rival_Text_1:
# 289 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: Wanna make a trip together,\n{PLAYER}? To Mauville, that is.$"

FallarborTown_CozmosHouse_EventScript_ProfCozmo_Text_0:
# 317 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}Cozmo{COLOR DARK_GRAY}: Make yourself at home!$"

FallarborTown_CozmosHouse_EventScript_ProfCozmo_Text_1:
# 325 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}Cozmo{COLOR DARK_GRAY}: Oh! Why, hello again!\pWhat good fortune…\pI'd been thinking that if I saw you\nagain, I would want to give you this…$"

FallarborTown_CozmosHouse_EventScript_ProfCozmo_Text_2:
# 328 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "I happened to pick this up some\ntime ago, while doing excavation at\lMeteor Falls.\pI hope it might help you and your team\nalong on your journey.$"
