# 1 "data/maps/FallarborTown/scripts.pory"

# 2 "data/maps/FallarborTown/scripts.pory"
FallarborTown_MapScripts::
# 3 "data/maps/FallarborTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_OnTransition
# 4 "data/maps/FallarborTown/scripts.pory"
	.byte 0
# 5 "data/maps/FallarborTown/scripts.pory"

# 6 "data/maps/FallarborTown/scripts.pory"
FallarborTown_OnTransition:
# 7 "data/maps/FallarborTown/scripts.pory"
    call Common_EventScript_SetupRivalGfxId
# 8 "data/maps/FallarborTown/scripts.pory"
	setflag FLAG_VISITED_FALLARBOR_TOWN
# 9 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 10 "data/maps/FallarborTown/scripts.pory"
	clearflag FLAG_CONTEST_SKETCH_CREATED
# 11 "data/maps/FallarborTown/scripts.pory"
	end
# 12 "data/maps/FallarborTown/scripts.pory"

# 13 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ExpertM::
# 14 "data/maps/FallarborTown/scripts.pory"
	lock
# 15 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 16 "data/maps/FallarborTown/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_EventScript_ExpertMNormal
# 17 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_ShadyCharactersCozmosHome, MSGBOX_DEFAULT
# 18 "data/maps/FallarborTown/scripts.pory"
	release
# 19 "data/maps/FallarborTown/scripts.pory"
	end
# 20 "data/maps/FallarborTown/scripts.pory"

# 21 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ExpertMNormal::
# 22 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_RegionKnownForMeteors, MSGBOX_DEFAULT
# 23 "data/maps/FallarborTown/scripts.pory"
	release
# 24 "data/maps/FallarborTown/scripts.pory"
	end
# 25 "data/maps/FallarborTown/scripts.pory"

# 26 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Girl::
# 27 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_MyPreciousAzurill, MSGBOX_NPC
# 28 "data/maps/FallarborTown/scripts.pory"
	end
# 29 "data/maps/FallarborTown/scripts.pory"

# 30 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Gentleman::
# 31 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_HaveYouChallengedFlannery, MSGBOX_NPC
# 32 "data/maps/FallarborTown/scripts.pory"
	end
# 33 "data/maps/FallarborTown/scripts.pory"

# 34 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Azurill::
# 35 "data/maps/FallarborTown/scripts.pory"
	lock
# 36 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 37 "data/maps/FallarborTown/scripts.pory"
	waitse
# 38 "data/maps/FallarborTown/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 39 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_Azurill, MSGBOX_DEFAULT
# 40 "data/maps/FallarborTown/scripts.pory"
	waitmoncry
# 41 "data/maps/FallarborTown/scripts.pory"
	release
# 42 "data/maps/FallarborTown/scripts.pory"
	end
# 43 "data/maps/FallarborTown/scripts.pory"

# 44 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_BattleTentSign::
# 45 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_BattleTentSign, MSGBOX_SIGN
# 46 "data/maps/FallarborTown/scripts.pory"
	end
# 47 "data/maps/FallarborTown/scripts.pory"

# 48 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_TownSign::
# 49 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_TownSign, MSGBOX_SIGN
# 50 "data/maps/FallarborTown/scripts.pory"
	end
# 51 "data/maps/FallarborTown/scripts.pory"

# 52 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_MoveTutorSign::
# 53 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_MoveTutorSign, MSGBOX_SIGN
# 54 "data/maps/FallarborTown/scripts.pory"
	end
# 55 "data/maps/FallarborTown/scripts.pory"

# 56 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_ShadyCharactersCozmosHome:
# 57 "data/maps/FallarborTown/scripts.pory"
	.string "What's up, what's up?\pI saw some shady fellows scuttling in\nand out of Professor Cozmo's lab.$"
# 58 "data/maps/FallarborTown/scripts.pory"

# 59 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_RegionKnownForMeteors:
# 60 "data/maps/FallarborTown/scripts.pory"
	.string "This region's been known for meteors\n"
# 61 "data/maps/FallarborTown/scripts.pory"
	.string "since the olden days.\p"
# 62 "data/maps/FallarborTown/scripts.pory"
	.string "They say Meteor Falls was gouged out\n"
# 63 "data/maps/FallarborTown/scripts.pory"
	.string "by a falling meteoroid long ago.$"
# 64 "data/maps/FallarborTown/scripts.pory"

# 65 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_MyPreciousAzurill:
# 66 "data/maps/FallarborTown/scripts.pory"
	.string "See!\nTake a look!\lThis is my precious Azurill!\pIt's slick and smooth plushy!\pIf you, too, have a Azurill with you,\nyou can pet its slick and smooth and\lplushy fur as much as you want!$"
# 67 "data/maps/FallarborTown/scripts.pory"

# 68 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_Azurill:
# 69 "data/maps/FallarborTown/scripts.pory"
	.string "Ri-i-i-i-i-ill.$"
# 70 "data/maps/FallarborTown/scripts.pory"

# 71 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_HaveYouChallengedFlannery:
# 72 "data/maps/FallarborTown/scripts.pory"
	.string "Have you already challenged Flannery,\n"
# 73 "data/maps/FallarborTown/scripts.pory"
	.string "the Leader of Lavaridge Gym?\p"
# 74 "data/maps/FallarborTown/scripts.pory"
	.string "The girl's grandfather was famous.\n"
# 75 "data/maps/FallarborTown/scripts.pory"
	.string "He was one of the Elite Four in the\l"
# 76 "data/maps/FallarborTown/scripts.pory"
	.string "Pokémon League at one point.\p"
# 77 "data/maps/FallarborTown/scripts.pory"
	.string "It wouldn't surprise me to see Flannery\n"
# 78 "data/maps/FallarborTown/scripts.pory"
	.string "become a great Trainer in her own\l"
# 79 "data/maps/FallarborTown/scripts.pory"
	.string "right.$"
# 80 "data/maps/FallarborTown/scripts.pory"

# 81 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_BattleTentSign:
# 82 "data/maps/FallarborTown/scripts.pory"
	.string "Battle Tent Fallarbor Site\n"
# 83 "data/maps/FallarborTown/scripts.pory"
	.string "“May the Greatest Teams Gather!”$"
# 84 "data/maps/FallarborTown/scripts.pory"

# 85 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_TownSign:
# 86 "data/maps/FallarborTown/scripts.pory"
	.string "Fallarbor Town\n"
# 87 "data/maps/FallarborTown/scripts.pory"
	.string "“A farm community with small gardens.”$"
# 88 "data/maps/FallarborTown/scripts.pory"

# 89 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_MoveTutorSign:
# 90 "data/maps/FallarborTown/scripts.pory"
	.string "Move Tutor's House\n"
# 91 "data/maps/FallarborTown/scripts.pory"
	.string "“New moves taught to Pokémon.”$"

FallarborTown_EventScript_RivalTrigger1::
# 99 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_TEMP_0, 1
# 100 "data/maps/FallarborTown/scripts.pory"
	goto FallarborTown_EventScript_Rival
	return


FallarborTown_EventScript_RivalTrigger2::
# 104 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_TEMP_0, 2
# 105 "data/maps/FallarborTown/scripts.pory"
	goto FallarborTown_EventScript_Rival
	return


FallarborTown_EventScript_RivalTrigger3::
# 109 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_TEMP_0, 3
# 110 "data/maps/FallarborTown/scripts.pory"
	goto FallarborTown_EventScript_Rival
	return


FallarborTown_EventScript_RivalTrigger4::
# 114 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_TEMP_0, 4
# 115 "data/maps/FallarborTown/scripts.pory"
	goto FallarborTown_EventScript_Rival
	return


FallarborTown_EventScript_RivalTrigger5::
# 119 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_TEMP_0, 5
# 120 "data/maps/FallarborTown/scripts.pory"
	goto FallarborTown_EventScript_Rival
	return


FallarborTown_EventScript_Rival::
# 124 "data/maps/FallarborTown/scripts.pory"
	lock
# 125 "data/maps/FallarborTown/scripts.pory"
	delay 8
# 126 "data/maps/FallarborTown/scripts.pory"
	playse SE_PIN
# 127 "data/maps/FallarborTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 128 "data/maps/FallarborTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 129 "data/maps/FallarborTown/scripts.pory"
	waitse
# 130 "data/maps/FallarborTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 131 "data/maps/FallarborTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 132 "data/maps/FallarborTown/scripts.pory"
	switch VAR_TEMP_0
# 133 "data/maps/FallarborTown/scripts.pory"
	case 1, FallarborTown_EventScript_Rival_3
# 136 "data/maps/FallarborTown/scripts.pory"
	case 2, FallarborTown_EventScript_Rival_4
# 139 "data/maps/FallarborTown/scripts.pory"
	case 3, FallarborTown_EventScript_Rival_5
# 142 "data/maps/FallarborTown/scripts.pory"
	case 4, FallarborTown_EventScript_Rival_6
# 145 "data/maps/FallarborTown/scripts.pory"
	case 5, FallarborTown_EventScript_Rival_7
FallarborTown_EventScript_Rival_1:
# 149 "data/maps/FallarborTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 150 "data/maps/FallarborTown/scripts.pory"
	checkplayergender
# 151 "data/maps/FallarborTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq FallarborTown_EventScript_Rival_9
# 154 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_EventScript_Rival_Text_1
FallarborTown_EventScript_Rival_8:
# 156 "data/maps/FallarborTown/scripts.pory"
	closemessage
# 157 "data/maps/FallarborTown/scripts.pory"
	applymovement 5, FallarborTown_Movement_RivalGetInsideCozmoHouse
# 158 "data/maps/FallarborTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FallarborTown_Movement_PlayerGetInsideCozmoHouse
# 159 "data/maps/FallarborTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 160 "data/maps/FallarborTown/scripts.pory"
	opendoor 6, 15
# 161 "data/maps/FallarborTown/scripts.pory"
	waitdooranim
# 162 "data/maps/FallarborTown/scripts.pory"
	applymovement 5, FallarborTown_Movement_RivalInside
# 163 "data/maps/FallarborTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FallarborTown_Movement_PlayerInside
# 164 "data/maps/FallarborTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 165 "data/maps/FallarborTown/scripts.pory"
	playse SE_DOOR
# 166 "data/maps/FallarborTown/scripts.pory"
	removeobject 5
# 167 "data/maps/FallarborTown/scripts.pory"
	closedoor 6, 15
# 168 "data/maps/FallarborTown/scripts.pory"
	waitdooranim
# 169 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_FALLARBOR_TOWN_STATE, 1
# 170 "data/maps/FallarborTown/scripts.pory"
	warpsilent MAP_FALLARBOR_TOWN_COZMOS_HOUSE, 4, 8
# 171 "data/maps/FallarborTown/scripts.pory"
	waitstate
# 172 "data/maps/FallarborTown/scripts.pory"
	release
	end

FallarborTown_EventScript_Rival_3:
# 134 "data/maps/FallarborTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FallarborTown_Movement_PlayerGotoRival1
# 135 "data/maps/FallarborTown/scripts.pory"
	applymovement 5, FallarborTown_Movement_RivalGotoPlayer1
	goto FallarborTown_EventScript_Rival_1

FallarborTown_EventScript_Rival_4:
# 137 "data/maps/FallarborTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FallarborTown_Movement_PlayerGotoRival2
# 138 "data/maps/FallarborTown/scripts.pory"
	applymovement 5, FallarborTown_Movement_RivalGotoPlayer2
	goto FallarborTown_EventScript_Rival_1

FallarborTown_EventScript_Rival_5:
# 140 "data/maps/FallarborTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FallarborTown_Movement_PlayerGotoRival3
# 141 "data/maps/FallarborTown/scripts.pory"
	applymovement 5, FallarborTown_Movement_RivalGotoPlayer3
	goto FallarborTown_EventScript_Rival_1

FallarborTown_EventScript_Rival_6:
# 143 "data/maps/FallarborTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FallarborTown_Movement_PlayerGotoRival4
# 144 "data/maps/FallarborTown/scripts.pory"
	applymovement 5, FallarborTown_Movement_RivalGotoPlayer4
	goto FallarborTown_EventScript_Rival_1

FallarborTown_EventScript_Rival_7:
# 146 "data/maps/FallarborTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FallarborTown_Movement_PlayerGotoRival5
# 147 "data/maps/FallarborTown/scripts.pory"
	applymovement 5, FallarborTown_Movement_RivalGotoPlayer5
	goto FallarborTown_EventScript_Rival_1

FallarborTown_EventScript_Rival_9:
# 152 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_EventScript_Rival_Text_0
	goto FallarborTown_EventScript_Rival_8


# 177 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Movement_PlayerGotoRival1:
# 178 "data/maps/FallarborTown/scripts.pory"
	walk_down
# 178 "data/maps/FallarborTown/scripts.pory"
	walk_down
# 178 "data/maps/FallarborTown/scripts.pory"
	walk_down
# 179 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 179 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 180 "data/maps/FallarborTown/scripts.pory"
	walk_down
# 180 "data/maps/FallarborTown/scripts.pory"
	walk_down
# 180 "data/maps/FallarborTown/scripts.pory"
	walk_down
	step_end

# 183 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Movement_PlayerGotoRival2:
# 184 "data/maps/FallarborTown/scripts.pory"
	walk_down
# 184 "data/maps/FallarborTown/scripts.pory"
	walk_down
# 185 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 185 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 186 "data/maps/FallarborTown/scripts.pory"
	walk_down
# 186 "data/maps/FallarborTown/scripts.pory"
	walk_down
# 186 "data/maps/FallarborTown/scripts.pory"
	walk_down
	step_end

# 189 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Movement_PlayerGotoRival3:
# 190 "data/maps/FallarborTown/scripts.pory"
	walk_down
# 191 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 191 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 192 "data/maps/FallarborTown/scripts.pory"
	walk_down
# 192 "data/maps/FallarborTown/scripts.pory"
	walk_down
# 192 "data/maps/FallarborTown/scripts.pory"
	walk_down
	step_end

# 195 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Movement_PlayerGotoRival4:
# 196 "data/maps/FallarborTown/scripts.pory"
	walk_down
# 197 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 197 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 198 "data/maps/FallarborTown/scripts.pory"
	walk_down
# 198 "data/maps/FallarborTown/scripts.pory"
	walk_down
	step_end

# 201 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Movement_PlayerGotoRival5:
# 202 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 202 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 203 "data/maps/FallarborTown/scripts.pory"
	walk_down
# 203 "data/maps/FallarborTown/scripts.pory"
	walk_down
	step_end

# 206 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Movement_RivalGotoPlayer1:
# 207 "data/maps/FallarborTown/scripts.pory"
	delay_16
# 207 "data/maps/FallarborTown/scripts.pory"
	delay_16
# 207 "data/maps/FallarborTown/scripts.pory"
	delay_16
# 207 "data/maps/FallarborTown/scripts.pory"
	delay_16
# 207 "data/maps/FallarborTown/scripts.pory"
	delay_16
# 207 "data/maps/FallarborTown/scripts.pory"
	delay_16
# 208 "data/maps/FallarborTown/scripts.pory"
	walk_up
# 208 "data/maps/FallarborTown/scripts.pory"
	walk_up
	step_end

# 211 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Movement_RivalGotoPlayer2:
# 212 "data/maps/FallarborTown/scripts.pory"
	delay_16
# 212 "data/maps/FallarborTown/scripts.pory"
	delay_16
# 212 "data/maps/FallarborTown/scripts.pory"
	delay_16
# 212 "data/maps/FallarborTown/scripts.pory"
	delay_16
# 212 "data/maps/FallarborTown/scripts.pory"
	delay_16
# 213 "data/maps/FallarborTown/scripts.pory"
	walk_up
# 213 "data/maps/FallarborTown/scripts.pory"
	walk_up
	step_end

# 216 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Movement_RivalGotoPlayer3:
# 217 "data/maps/FallarborTown/scripts.pory"
	delay_16
# 217 "data/maps/FallarborTown/scripts.pory"
	delay_16
# 217 "data/maps/FallarborTown/scripts.pory"
	delay_16
# 217 "data/maps/FallarborTown/scripts.pory"
	delay_16
# 218 "data/maps/FallarborTown/scripts.pory"
	walk_up
# 218 "data/maps/FallarborTown/scripts.pory"
	walk_up
	step_end

# 221 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Movement_RivalGotoPlayer4:
# 222 "data/maps/FallarborTown/scripts.pory"
	delay_16
# 222 "data/maps/FallarborTown/scripts.pory"
	delay_16
# 222 "data/maps/FallarborTown/scripts.pory"
	delay_16
# 223 "data/maps/FallarborTown/scripts.pory"
	walk_up
# 223 "data/maps/FallarborTown/scripts.pory"
	walk_up
	step_end

# 226 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Movement_RivalGotoPlayer5:
# 227 "data/maps/FallarborTown/scripts.pory"
	delay_16
# 227 "data/maps/FallarborTown/scripts.pory"
	delay_16
# 228 "data/maps/FallarborTown/scripts.pory"
	walk_up
# 228 "data/maps/FallarborTown/scripts.pory"
	walk_up
	step_end

# 231 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Movement_RivalGetInsideCozmoHouse:
# 232 "data/maps/FallarborTown/scripts.pory"
	walk_down
# 233 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 233 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 233 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 233 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 233 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 234 "data/maps/FallarborTown/scripts.pory"
	walk_in_place_up
	step_end

# 237 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Movement_PlayerGetInsideCozmoHouse:
# 238 "data/maps/FallarborTown/scripts.pory"
	walk_down
# 238 "data/maps/FallarborTown/scripts.pory"
	walk_down
# 239 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 239 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 239 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 239 "data/maps/FallarborTown/scripts.pory"
	walk_left
	step_end

# 242 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Movement_RivalInside:
# 243 "data/maps/FallarborTown/scripts.pory"
	walk_up
# 244 "data/maps/FallarborTown/scripts.pory"
	set_invisible
	step_end

# 247 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Movement_PlayerInside:
# 248 "data/maps/FallarborTown/scripts.pory"
	delay_16
# 249 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 250 "data/maps/FallarborTown/scripts.pory"
	walk_up
# 251 "data/maps/FallarborTown/scripts.pory"
	set_invisible
	step_end

FallarborTown_EventScript_Rival_Text_0:
# 152 "data/maps/FallarborTown/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Arghhh, what a disaster!\nOh! {PLAYER}! Help!\lYou've got to come with me!$"

FallarborTown_EventScript_Rival_Text_1:
# 154 "data/maps/FallarborTown/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: {PLAYER}! C'mere!\nEverything's a mess!$"
