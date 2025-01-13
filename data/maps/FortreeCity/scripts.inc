# 1 "data/maps/FortreeCity/scripts.pory"

# 2 "data/maps/FortreeCity/scripts.pory"
FortreeCity_MapScripts::
# 3 "data/maps/FortreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_OnTransition
# 4 "data/maps/FortreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FortreeCity_OnResume
# 5 "data/maps/FortreeCity/scripts.pory"
	.byte 0
# 6 "data/maps/FortreeCity/scripts.pory"

# 7 "data/maps/FortreeCity/scripts.pory"
FortreeCity_OnTransition:
# 8 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_VISITED_FORTREE_CITY
# 9 "data/maps/FortreeCity/scripts.pory"
	end
# 10 "data/maps/FortreeCity/scripts.pory"

# 11 "data/maps/FortreeCity/scripts.pory"
FortreeCity_OnResume:
# 12 "data/maps/FortreeCity/scripts.pory"
	setstepcallback STEP_CB_FORTREE_BRIDGE
# 13 "data/maps/FortreeCity/scripts.pory"
	end
# 14 "data/maps/FortreeCity/scripts.pory"

# 15 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Man::
# 16 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SawGiganticPokemonInSky, MSGBOX_NPC
# 17 "data/maps/FortreeCity/scripts.pory"
	end
# 18 "data/maps/FortreeCity/scripts.pory"

# 19 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Woman::
# 20 "data/maps/FortreeCity/scripts.pory"
	lock
# 21 "data/maps/FortreeCity/scripts.pory"
	faceplayer
# 22 "data/maps/FortreeCity/scripts.pory"
	goto_if_set FLAG_KECLEON_FLED_FORTREE, FortreeCity_EventScript_WomanGymAccessible
# 23 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SomethingBlockingGym, MSGBOX_DEFAULT
# 24 "data/maps/FortreeCity/scripts.pory"
	release
# 25 "data/maps/FortreeCity/scripts.pory"
	end
# 26 "data/maps/FortreeCity/scripts.pory"

# 27 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_WomanGymAccessible::
# 28 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_ThisTimeIllBeatWinona, MSGBOX_DEFAULT
# 29 "data/maps/FortreeCity/scripts.pory"
	release
# 30 "data/maps/FortreeCity/scripts.pory"
	end
# 31 "data/maps/FortreeCity/scripts.pory"

# 32 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Girl::
# 33 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_TreesGrowByDrinkingRainwater, MSGBOX_NPC
# 34 "data/maps/FortreeCity/scripts.pory"
	end
# 35 "data/maps/FortreeCity/scripts.pory"

# 36 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_OldMan::
# 37 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_EveryoneHealthyAndLively, MSGBOX_NPC
# 38 "data/maps/FortreeCity/scripts.pory"
	end
# 39 "data/maps/FortreeCity/scripts.pory"

# 40 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Boy::
# 41 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_BugPokemonComeThroughWindow, MSGBOX_NPC
# 42 "data/maps/FortreeCity/scripts.pory"
	end
# 43 "data/maps/FortreeCity/scripts.pory"

# 44 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_GameboyKid::
# 45 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_PokemonThatEvolveWhenTraded, MSGBOX_NPC
# 46 "data/maps/FortreeCity/scripts.pory"
	end
# 47 "data/maps/FortreeCity/scripts.pory"

# 48 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_CitySign::
# 49 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_CitySign, MSGBOX_SIGN
# 50 "data/maps/FortreeCity/scripts.pory"
	end
# 51 "data/maps/FortreeCity/scripts.pory"

# 52 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_GymSign::
# 53 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_GymSign, MSGBOX_SIGN
# 54 "data/maps/FortreeCity/scripts.pory"
	end
# 55 "data/maps/FortreeCity/scripts.pory"

# 56 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Kecleon::
# 57 "data/maps/FortreeCity/scripts.pory"
	lock
# 58 "data/maps/FortreeCity/scripts.pory"
	faceplayer
# 59 "data/maps/FortreeCity/scripts.pory"
	delay 8
# 60 "data/maps/FortreeCity/scripts.pory"
    playse SE_PIN
# 61 "data/maps/FortreeCity/scripts.pory"
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 62 "data/maps/FortreeCity/scripts.pory"
    waitmovement OBJ_EVENT_ID_PLAYER
# 63 "data/maps/FortreeCity/scripts.pory"
	waitse
# 64 "data/maps/FortreeCity/scripts.pory"
	checkitem ITEM_DEVON_SCOPE
# 65 "data/maps/FortreeCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FortreeCity_EventScript_AskUseDevonScope
# 66 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SomethingUnseeable, MSGBOX_DEFAULT
# 67 "data/maps/FortreeCity/scripts.pory"
	release
# 68 "data/maps/FortreeCity/scripts.pory"
	end
# 69 "data/maps/FortreeCity/scripts.pory"

# 70 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_AskUseDevonScope::
# 71 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_UnseeableUseDevonScope, MSGBOX_YESNO
# 72 "data/maps/FortreeCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FortreeCity_EventScript_UseDevonScope
# 73 "data/maps/FortreeCity/scripts.pory"
	release
# 74 "data/maps/FortreeCity/scripts.pory"
	end
# 75 "data/maps/FortreeCity/scripts.pory"

# 76 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_UseDevonScope::
# 77 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_UsedDevonScopePokemonFled, MSGBOX_DEFAULT
# 78 "data/maps/FortreeCity/scripts.pory"
	closemessage
# 79 "data/maps/FortreeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_KecleonAppears
# 80 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 81 "data/maps/FortreeCity/scripts.pory"
	waitse
# 82 "data/maps/FortreeCity/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 83 "data/maps/FortreeCity/scripts.pory"
	delay 40
# 84 "data/maps/FortreeCity/scripts.pory"
	waitmoncry
# 85 "data/maps/FortreeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, FortreeCity_Movement_KecleonFlee
# 86 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 87 "data/maps/FortreeCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 88 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_KECLEON_FLED_FORTREE
# 89 "data/maps/FortreeCity/scripts.pory"
	release
# 90 "data/maps/FortreeCity/scripts.pory"
	end
# 91 "data/maps/FortreeCity/scripts.pory"

# 92 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_KecleonFlee:
# 93 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 94 "data/maps/FortreeCity/scripts.pory"
	step_end
# 95 "data/maps/FortreeCity/scripts.pory"

# 96 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SawGiganticPokemonInSky:
# 97 "data/maps/FortreeCity/scripts.pory"
	.string "Sniff…\nUm… You, uh…smell singed.\pWere you at a volcano or something?$"
# 98 "data/maps/FortreeCity/scripts.pory"

# 99 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SomethingBlockingGym:
# 100 "data/maps/FortreeCity/scripts.pory"
	.string "I want to go to the Pokémon Gym,\nbut something's blocking the way.\pAfter all the bother I went through\ntraining on Route 120…$"
# 101 "data/maps/FortreeCity/scripts.pory"

# 102 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_ThisTimeIllBeatWinona:
# 103 "data/maps/FortreeCity/scripts.pory"
	.string "I've got my pride-and-joy Pokémon\n"
# 104 "data/maps/FortreeCity/scripts.pory"
	.string "with me. This time, I'll beat Winona.$"
# 105 "data/maps/FortreeCity/scripts.pory"

# 106 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_TreesGrowByDrinkingRainwater:
# 107 "data/maps/FortreeCity/scripts.pory"
	.string "The ground absorbs rainwater, and\ntrees grow by drinking that water…\pOur Fortree City exists thanks to our\nhaving both earth and water.$"
# 108 "data/maps/FortreeCity/scripts.pory"

# 109 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_EveryoneHealthyAndLively:
# 110 "data/maps/FortreeCity/scripts.pory"
	.string "This city's homes are built on trees.\pPerhaps because of that lifestyle,\neveryone seems healthy and lively.\pWhy, even I do!\nI feel as if I've grown 30 years\lyounger since I moved here.$"
# 111 "data/maps/FortreeCity/scripts.pory"

# 112 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_BugPokemonComeThroughWindow:
# 113 "data/maps/FortreeCity/scripts.pory"
	.string "Living on top of trees is fine.\pBut sometimes Bug Pokémon come in\nthrough the windows.\lIt can cause quite the fright!$"
# 114 "data/maps/FortreeCity/scripts.pory"

# 115 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_PokemonThatEvolveWhenTraded:
# 116 "data/maps/FortreeCity/scripts.pory"
	.string "Some Pokémon evolve when you Link\nTrade them with friends.$"
# 117 "data/maps/FortreeCity/scripts.pory"

# 118 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SomethingUnseeable:
# 119 "data/maps/FortreeCity/scripts.pory"
	.string "There's an invisible obstacle in your\nway.$"
# 120 "data/maps/FortreeCity/scripts.pory"

# 121 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_UnseeableUseDevonScope:
# 122 "data/maps/FortreeCity/scripts.pory"
	.string "There's an invisible obstacle in your\nway.\pWould you like to use the Devon Scope?$"
# 123 "data/maps/FortreeCity/scripts.pory"

# 124 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_UsedDevonScopePokemonFled:
# 125 "data/maps/FortreeCity/scripts.pory"
	.string "{PLAYER} slipped the Devon Scope on.\pA previously invisible Pokémon became\nvisible to the naked eye!\pThe startled Keckleon fled!$"
# 126 "data/maps/FortreeCity/scripts.pory"

# 127 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_CitySign:
# 128 "data/maps/FortreeCity/scripts.pory"
	.string "Fortree City\n"
# 129 "data/maps/FortreeCity/scripts.pory"
	.string "“The treetop city that frolics with\l"
# 130 "data/maps/FortreeCity/scripts.pory"
	.string "nature.”$"
# 131 "data/maps/FortreeCity/scripts.pory"

# 132 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_GymSign:
# 133 "data/maps/FortreeCity/scripts.pory"
	.string "Fortree City Pokémon Gym\n"
# 134 "data/maps/FortreeCity/scripts.pory"
	.string "Leader: Winona\p"
# 135 "data/maps/FortreeCity/scripts.pory"
	.string "“The bird user taking flight into\n"
# 136 "data/maps/FortreeCity/scripts.pory"
	.string "the world.”$"

FortreeCity_EventScript_StevenTrigger1::
# 144 "data/maps/FortreeCity/scripts.pory"
	setvar VAR_TEMP_0, 1
# 145 "data/maps/FortreeCity/scripts.pory"
	goto FortreeCity_EventScript_Steven
	return


FortreeCity_EventScript_StevenTrigger2::
# 149 "data/maps/FortreeCity/scripts.pory"
	setvar VAR_TEMP_0, 2
# 150 "data/maps/FortreeCity/scripts.pory"
	goto FortreeCity_EventScript_Steven
	return


FortreeCity_EventScript_StevenTrigger3::
# 154 "data/maps/FortreeCity/scripts.pory"
	setvar VAR_TEMP_0, 3
# 155 "data/maps/FortreeCity/scripts.pory"
	goto FortreeCity_EventScript_Steven
	return


FortreeCity_EventScript_Steven::
# 159 "data/maps/FortreeCity/scripts.pory"
	lock
# 160 "data/maps/FortreeCity/scripts.pory"
	delay 16
# 161 "data/maps/FortreeCity/scripts.pory"
	special SpawnCameraObject
# 162 "data/maps/FortreeCity/scripts.pory"
	switch VAR_TEMP_0
# 163 "data/maps/FortreeCity/scripts.pory"
	case 1, FortreeCity_EventScript_Steven_3
# 167 "data/maps/FortreeCity/scripts.pory"
	case 2, FortreeCity_EventScript_Steven_4
# 171 "data/maps/FortreeCity/scripts.pory"
	case 3, FortreeCity_EventScript_Steven_5
FortreeCity_EventScript_Steven_1:
# 174 "data/maps/FortreeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 175 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_EventScript_Steven_Text_0
# 176 "data/maps/FortreeCity/scripts.pory"
	closemessage
# 177 "data/maps/FortreeCity/scripts.pory"
	delay 16
# 178 "data/maps/FortreeCity/scripts.pory"
	applymovement 8, FortreeCity_Movement_StevenExit
# 179 "data/maps/FortreeCity/scripts.pory"
	waitmovement 8
# 180 "data/maps/FortreeCity/scripts.pory"
	removeobject 8
# 181 "data/maps/FortreeCity/scripts.pory"
	switch VAR_TEMP_0
# 182 "data/maps/FortreeCity/scripts.pory"
	case 1, FortreeCity_EventScript_Steven_8
# 184 "data/maps/FortreeCity/scripts.pory"
	case 2, FortreeCity_EventScript_Steven_9
# 186 "data/maps/FortreeCity/scripts.pory"
	case 3, FortreeCity_EventScript_Steven_10
FortreeCity_EventScript_Steven_6:
# 189 "data/maps/FortreeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 190 "data/maps/FortreeCity/scripts.pory"
	special RemoveCameraObject
# 191 "data/maps/FortreeCity/scripts.pory"
	setvar VAR_FORTREE_CITY_STATE, 1
# 192 "data/maps/FortreeCity/scripts.pory"
	release
	end

FortreeCity_EventScript_Steven_3:
# 164 "data/maps/FortreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, FortreeCity_Movement_CameraPanToSteven1
# 165 "data/maps/FortreeCity/scripts.pory"
	delay 8
# 166 "data/maps/FortreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
	goto FortreeCity_EventScript_Steven_1

FortreeCity_EventScript_Steven_4:
# 168 "data/maps/FortreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, FortreeCity_Movement_CameraPanToSteven2
# 169 "data/maps/FortreeCity/scripts.pory"
	delay 8
# 170 "data/maps/FortreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
	goto FortreeCity_EventScript_Steven_1

FortreeCity_EventScript_Steven_5:
# 172 "data/maps/FortreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, FortreeCity_Movement_CameraPanToSteven3
	goto FortreeCity_EventScript_Steven_1

FortreeCity_EventScript_Steven_8:
# 183 "data/maps/FortreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, FortreeCity_Movement_CameraBackToPlayer1
	goto FortreeCity_EventScript_Steven_6

FortreeCity_EventScript_Steven_9:
# 185 "data/maps/FortreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, FortreeCity_Movement_CameraBackToPlayer2
	goto FortreeCity_EventScript_Steven_6

FortreeCity_EventScript_Steven_10:
# 187 "data/maps/FortreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, FortreeCity_Movement_CameraBackToPlayer3
	goto FortreeCity_EventScript_Steven_6


# 196 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_CameraPanToSteven1:
# 197 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 197 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 197 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 197 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 197 "data/maps/FortreeCity/scripts.pory"
	walk_right
	step_end

# 200 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_CameraPanToSteven2:
# 201 "data/maps/FortreeCity/scripts.pory"
	walk_diag_northeast
# 201 "data/maps/FortreeCity/scripts.pory"
	walk_diag_northeast
# 202 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 202 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 202 "data/maps/FortreeCity/scripts.pory"
	walk_right
	step_end

# 205 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_CameraPanToSteven3:
# 206 "data/maps/FortreeCity/scripts.pory"
	walk_diag_northeast
# 206 "data/maps/FortreeCity/scripts.pory"
	walk_diag_northeast
# 206 "data/maps/FortreeCity/scripts.pory"
	walk_diag_northeast
# 207 "data/maps/FortreeCity/scripts.pory"
	walk_right
	step_end

# 210 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_StevenExit:
# 211 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 211 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 211 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 211 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 211 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 211 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 211 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 211 "data/maps/FortreeCity/scripts.pory"
	walk_right
	step_end

# 214 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_CameraBackToPlayer1:
# 215 "data/maps/FortreeCity/scripts.pory"
	walk_left
# 215 "data/maps/FortreeCity/scripts.pory"
	walk_left
# 215 "data/maps/FortreeCity/scripts.pory"
	walk_left
# 215 "data/maps/FortreeCity/scripts.pory"
	walk_left
# 215 "data/maps/FortreeCity/scripts.pory"
	walk_left
	step_end

# 218 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_CameraBackToPlayer2:
# 219 "data/maps/FortreeCity/scripts.pory"
	walk_left
# 219 "data/maps/FortreeCity/scripts.pory"
	walk_left
# 219 "data/maps/FortreeCity/scripts.pory"
	walk_left
# 220 "data/maps/FortreeCity/scripts.pory"
	walk_diag_southwest
# 220 "data/maps/FortreeCity/scripts.pory"
	walk_diag_southwest
	step_end

# 223 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_CameraBackToPlayer3:
# 224 "data/maps/FortreeCity/scripts.pory"
	walk_left
# 225 "data/maps/FortreeCity/scripts.pory"
	walk_diag_southwest
# 225 "data/maps/FortreeCity/scripts.pory"
	walk_diag_southwest
# 225 "data/maps/FortreeCity/scripts.pory"
	walk_diag_southwest
	step_end

FortreeCity_EventScript_Steven_Text_0:
# 175 "data/maps/FortreeCity/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: Hm…\pIt looks as though that Pokémon can be\nfound up on {COLOR BLUE}Route 120{COLOR DARK_GRAY}…$"
