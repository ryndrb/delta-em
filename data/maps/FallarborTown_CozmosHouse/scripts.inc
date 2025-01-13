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
FallarborTown_CozmosHouse_EventScript_ProfCozmo::
# 44 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 45 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	faceplayer
# 46 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_CozmosHouse_EventScript_CrooksAtMtChimney
# 47 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_MakeYourselfAtHome, MSGBOX_DEFAULT
# 48 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 49 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 50 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 51 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 52 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmosWife::
# 53 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 54 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	faceplayer
# 55 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_RETURN, FallarborTown_CozmosHouse_EventScript_CozmoIsHappy
# 56 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_CozmosHouse_EventScript_CozmoIsSad
# 57 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_PleaseSaveCozmo, MSGBOX_DEFAULT
# 58 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 59 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 60 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 61 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmoIsSad::
# 62 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_FeelSorryForCozmo, MSGBOX_DEFAULT
# 63 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 64 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 65 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 66 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmoIsHappy::
# 67 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_CozmoIsSoHappy, MSGBOX_DEFAULT
# 68 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 69 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 70 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 71 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_MakeYourselfAtHome:
# 72 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}Cozmo{COLOR DARK_GRAY}: Oh, welcome, welcome!\nMake yourself at home.$"
# 73 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 74 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_PleaseSaveCozmo:
# 75 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Professor Cozmo was taken to Meteor\nFalls, beyond Route 114.\pPlease save the professor from that\nTeam Magma!$"
# 76 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 77 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_FeelSorryForCozmo:
# 78 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Poor Prof. Cozmo…\n"
# 79 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "He's so depressed… I feel sorry for him.$"
# 80 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 81 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_CozmoIsSoHappy:
# 82 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "As long a the professor is safe and\nsound, I don't need anything else…$"

FallarborTown_CozmosHouse_EventScript_CozmosAbducted::
# 90 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 91 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 92 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FallarborTown_CozmosHouse_Movement_PlayerGoUp
# 93 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement 3, FallarborTown_CozmosHouse_Movement_RivalGoUp
# 94 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement 3
# 95 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	checkplayergender
# 96 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmosAbducted_2
# 99 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_1
FallarborTown_CozmosHouse_EventScript_CozmosAbducted_1:
# 101 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 102 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_WIFE, Common_Movement_WalkInPlaceDown
# 103 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 104 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceRight
# 105 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement 3
# 106 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_2
# 107 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 108 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 109 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement 3
# 110 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	checkplayergender
# 111 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmosAbducted_6
# 114 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_4
FallarborTown_CozmosHouse_EventScript_CozmosAbducted_5:
# 116 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 117 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement 3, FallarborTown_CozmosHouse_Movement_RivalExit
# 118 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FallarborTown_CozmosHouse_Movement_PlayerWatchRivalExit
# 119 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement 3
# 120 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	playse SE_EXIT
# 121 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitse
# 122 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	removeobject 3
# 123 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setvar VAR_FALLARBOR_TOWN_STATE, 2
# 124 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmosAbducted_2:
# 97 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_0
	goto FallarborTown_CozmosHouse_EventScript_CozmosAbducted_1

FallarborTown_CozmosHouse_EventScript_CozmosAbducted_6:
# 112 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_3
	goto FallarborTown_CozmosHouse_EventScript_CozmosAbducted_5


# 128 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Movement_RivalGoUp:
# 129 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_up
# 129 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_up
# 130 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_in_place_down
	step_end

# 133 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Movement_PlayerGoUp:
# 134 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_up
	step_end

# 137 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Movement_RivalExit:
# 138 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_down
# 138 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_down
# 139 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_in_place_down
# 140 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	set_invisible
	step_end

# 143 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Movement_PlayerWatchRivalExit:
# 144 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_in_place_left
# 145 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_in_place_down
	step_end

FallarborTown_CozmosHouse_EventScript_CozmosReturn::
# 149 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 150 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 151 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_WIFE, Common_Movement_WalkInPlaceDown
# 152 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement LOCALID_WIFE
# 153 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 154 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	playse SE_PIN
# 155 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_WIFE, Common_Movement_ExclamationMark
# 156 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement LOCALID_WIFE
# 157 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitse
# 158 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_0
# 159 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 160 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_COZMO, Common_Movement_WalkUp
# 161 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement LOCALID_COZMO
# 162 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_COZMO, Common_Movement_WalkInPlaceLeft
# 163 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkUp
# 164 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 165 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 166 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 167 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_WIFE, Common_Movement_WalkInPlaceRight
# 168 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement LOCALID_WIFE
# 169 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_1
# 170 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 171 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 172 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceRight
# 173 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 174 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 175 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_COZMO, Common_Movement_WalkInPlaceDown
# 176 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 177 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_WIFE, Common_Movement_WalkInPlaceDown
# 178 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement LOCALID_WIFE
# 179 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	checkplayergender
# 180 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmosReturn_2
# 183 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_3
FallarborTown_CozmosHouse_EventScript_CozmosReturn_1:
# 185 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 186 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 187 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 188 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceUp
# 189 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement 3
# 190 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_4
# 191 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 192 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	giveitem ITEM_TM_ROCK_SLIDE, 1
# 193 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 16
# 194 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	checkplayergender
# 195 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmosReturn_6
# 198 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_6
FallarborTown_CozmosHouse_EventScript_CozmosReturn_5:
# 200 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 201 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceRight
# 202 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 8
# 203 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 204 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 205 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	checkplayergender
# 206 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmosReturn_10
# 216 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_9, MSGBOX_YESNO
# 217 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmosReturn_19
FallarborTown_CozmosHouse_EventScript_CozmosReturn_9:
# 225 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	checkplayergender
# 226 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmosReturn_14
# 229 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_12
FallarborTown_CozmosHouse_EventScript_CozmosReturn_13:
# 231 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 232 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 233 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 234 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_HIDE_COZMOS_HOUSE_RIVAL
# 235 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setvar VAR_FALLARBOR_TOWN_STATE, 4
# 236 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setvar VAR_MAUVILLE_CITY_STATE, 5
# 237 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_RIVAL
# 238 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 128
# 239 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	warpsilent MAP_MAUVILLE_CITY, 16, 8
# 240 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitstate
# 241 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmosReturn_2:
# 181 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_2
	goto FallarborTown_CozmosHouse_EventScript_CozmosReturn_1

FallarborTown_CozmosHouse_EventScript_CozmosReturn_6:
# 196 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_5
	goto FallarborTown_CozmosHouse_EventScript_CozmosReturn_5

FallarborTown_CozmosHouse_EventScript_CozmosReturn_10:
# 207 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_7, MSGBOX_YESNO
# 208 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq FallarborTown_CozmosHouse_EventScript_CozmosReturn_17
	goto FallarborTown_CozmosHouse_EventScript_CozmosReturn_9

FallarborTown_CozmosHouse_EventScript_CozmosReturn_14:
# 227 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_11
	goto FallarborTown_CozmosHouse_EventScript_CozmosReturn_13

FallarborTown_CozmosHouse_EventScript_CozmosReturn_17:
# 209 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_8
# 210 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 211 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	call FallarborTown_CozmosHouse_EventScript_MoveEveryone
# 212 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmosReturn_19:
# 218 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_10
# 219 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 220 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	call FallarborTown_CozmosHouse_EventScript_MoveEveryone
# 221 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
	end


FallarborTown_CozmosHouse_EventScript_CrooksAtMtChimney::
# 246 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CrooksAtMtChimney_Text_0, MSGBOX_NPC
# 247 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_COZMO, Common_Movement_WalkInPlaceDown
# 248 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement LOCALID_COZMO
	end


FallarborTown_CozmosHouse_EventScript_MoveEveryone::
# 253 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 254 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 255 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_COZMO, FallarborTown_CozmosHouse_Movement_MoveEveryone_Cozmo
# 256 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement LOCALID_WIFE, FallarborTown_CozmosHouse_Movement_MoveEveryone_CozmosWife
# 257 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	applymovement 3, FallarborTown_CozmosHouse_Movement_MoveEveryone_Rival
# 258 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitmovement 3
# 259 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 260 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setvar VAR_FALLARBOR_TOWN_STATE, 4
	return


# 264 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Movement_MoveEveryone_Cozmo:
# 265 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_up
# 265 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_up
# 266 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_in_place_down
	step_end

# 269 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Movement_MoveEveryone_CozmosWife:
# 270 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_right
# 271 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_up
	step_end

# 274 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Movement_MoveEveryone_Rival:
# 275 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_right
# 275 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_right
# 275 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_right
# 275 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_right
# 276 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_up
# 276 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_up
# 276 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_faster_up
# 277 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	walk_in_place_down
	step_end

FallarborTown_CozmosHouse_EventScript_Rival::
# 281 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 282 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	faceplayer
# 283 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	checkplayergender
# 284 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_Rival_2
# 301 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_Rival_Text_1, MSGBOX_YESNO
# 302 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FallarborTown_CozmosHouse_EventScript_Rival_8
# 314 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_10
FallarborTown_CozmosHouse_EventScript_Rival_1:
# 317 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 318 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
	end

FallarborTown_CozmosHouse_EventScript_Rival_2:
# 285 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_Rival_Text_0, MSGBOX_YESNO
# 286 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FallarborTown_CozmosHouse_EventScript_Rival_5
# 298 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_8
	goto FallarborTown_CozmosHouse_EventScript_Rival_1

FallarborTown_CozmosHouse_EventScript_Rival_5:
# 287 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_11
# 288 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 289 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 290 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 291 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_HIDE_COZMOS_HOUSE_RIVAL
# 292 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setvar VAR_MAUVILLE_CITY_STATE, 5
# 293 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_RIVAL
# 294 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 128
# 295 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	warpsilent MAP_MAUVILLE_CITY, 16, 8
# 296 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitstate
	goto FallarborTown_CozmosHouse_EventScript_Rival_1

FallarborTown_CozmosHouse_EventScript_Rival_8:
# 303 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_12
# 304 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	closemessage
# 305 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 306 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 307 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_HIDE_COZMOS_HOUSE_RIVAL
# 308 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setvar VAR_MAUVILLE_CITY_STATE, 5
# 309 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_RIVAL
# 310 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	delay 128
# 311 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	warpsilent MAP_MAUVILLE_CITY, 16, 8
# 312 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	waitstate
	goto FallarborTown_CozmosHouse_EventScript_Rival_1


FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_0:
# 97 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Y-you see…\pProfessor Cozmo…\pHe got abducted by some weird guys\ncalling themselves Team Something or\lOther…$"

FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_1:
# 99 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: It's ridiculous…\nProfessor Cozmo…\pThey say he was just up and kidnapped\nby some nuts calling themselves Team\lSomething or Other…$"

FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_2:
# 106 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Those shady characters…\nThey called themselves Team Magma.\pIt seems as though they plan to do\nsomething with the Meteorite that\lthe Professor has been researching.\pThe professor is just too gullible.\nIf you show the least bit of interest\lin this research, he would happily go\lwith you anywhere, without question.$"

FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_3:
# 112 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: {PLAYER}, please…\nYou've got to help me save him!\pThey can't be planning to do anything\ngood with Professor Cozmo's research.\pWe have to do something!\pI…I'm going to head after them right\naway! Let's meet up at Meteor Falls!\pI'm counting on you, {PLAYER}!$"

FallarborTown_CozmosHouse_EventScript_CozmosAbducted_Text_4:
# 114 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: {PLAYER}…\nI know it's a lot ask, but we've gotta\lhelp Cozmo!\pI can't just stand by here and watch\nthem use his life's work for their own\lcorrupt reasons!\pI'm going to head to Meteor Falls right\naway.\pCome catch up to me as soon as you\ncan.\pI'm counting on you, {PLAYER}!$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_0:
# 158 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Ahh! Professor!\pThank the stars above Professor,\nyou're back!$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_1:
# 169 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}Cozmo{COLOR DARK_GRAY}: Hah…haha…\pThanks to these children, I have\nsomehow returned.$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_2:
# 181 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Those nuts back there…\pWhat do you think they're hoping to do\nwith the professor's Meteorite?\pFrom the look of them, they kind of\nseem like bad guys, but…\pWe've both got to be careful.\pThough I'm not worried a bit if it's you\nand your team, {PLAYER}!$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_3:
# 183 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: Those crazy jerks…\pWhat do you think they wanted with the\nprofessor's Meteorite anyway?\pI've gotta say, they didn't look like\nthe good guys…but…\pI guess we'd both better be careful\nfrom here on out.\pNot that I'm really worried about you,\n{PLAYER}.\pYou and your team'd be fine for sure.$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_4:
# 190 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}Cozmo{COLOR DARK_GRAY}: But I need to thank you, as well.\nYou truly saved me from disaster.\pI hope you take this TM as some small\nform of repayment.$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_5:
# 196 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Wow!\nThanks, Professor!$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_6:
# 198 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: Thank you, Professor.$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_7:
# 207 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "We-e-ell…\pWhat're are you gonna do next,\n{PLAYER}?\pI'm thinking of checking out the next\nGym on my list.\pIt's the one in Mauville City.\pWhy don't you come with me, {PLAYER}?\nTo Mauville!$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_8:
# 209 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Oh. Right.\nWell, tell me if you change your mind!\pMauville's right in the middle of Hoenn,\nso you can go to all sorts of places\lfrom there.\pEven Mt. Chimney, the place those guys\nwere talking about at Meteor Falls, in\lfact.\pIt's just a pretty short trip from\nMauville.$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_9:
# 216 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Now that that's over with…\pWhat're you planning to do next,\n{PLAYER}?\pI'm thinking of going for my next Gym\nBadge.\pThe one from Mauville City.\pWanna make a trip together, {PLAYER}?\nTo Mauville, that is.$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_10:
# 218 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Ah, right.\nWell, tell me if you change your mind.\pMauville's right in the middle of Hoenn,\nso you can go to all sorts of places\lfrom there.\pEven Mt. Chimney, the place those guys\nwere talking about at Meteor Falls, is\la pretty short trip from Mauville.$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_11:
# 227 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Right!\nLet's hit the road!$"

FallarborTown_CozmosHouse_EventScript_CozmosReturn_Text_12:
# 229 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Cool.\nLet's go then.$"

FallarborTown_CozmosHouse_EventScript_CrooksAtMtChimney_Text_0:
# 246 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}Cozmo{COLOR DARK_GRAY}: Those crooks who took my\nMeteorite…\pWhat will they next at {COLOR BLUE}Mt. Chimney{COLOR DARK_GRAY}?$"

FallarborTown_CozmosHouse_EventScript_Rival_Text_0:
# 285 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Why don't you come with me,\n{PLAYER}? To Mauville!$"

FallarborTown_CozmosHouse_EventScript_Rival_Text_1:
# 301 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: Wanna make a trip together,\n{PLAYER}? To Mauville, that is.$"
