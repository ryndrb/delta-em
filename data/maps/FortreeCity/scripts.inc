FortreeCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, FortreeCity_OnResume
	.byte 0

FortreeCity_OnTransition:
	setflag FLAG_VISITED_FORTREE_CITY
	end

FortreeCity_OnResume:
	setstepcallback STEP_CB_FORTREE_BRIDGE
	end

FortreeCity_EventScript_Man::
	msgbox FortreeCity_Text_SawGiganticPokemonInSky, MSGBOX_NPC
	end

FortreeCity_EventScript_Woman::
	lock
	faceplayer
	goto_if_set FLAG_KECLEON_FLED_FORTREE, FortreeCity_EventScript_WomanGymAccessible
	msgbox FortreeCity_Text_SomethingBlockingGym, MSGBOX_DEFAULT
	release
	end

FortreeCity_EventScript_WomanGymAccessible::
	msgbox FortreeCity_Text_ThisTimeIllBeatWinona, MSGBOX_DEFAULT
	release
	end

FortreeCity_EventScript_Girl::
	msgbox FortreeCity_Text_TreesGrowByDrinkingRainwater, MSGBOX_NPC
	end

FortreeCity_EventScript_OldMan::
	msgbox FortreeCity_Text_EveryoneHealthyAndLively, MSGBOX_NPC
	end

FortreeCity_EventScript_Boy::
	msgbox FortreeCity_Text_BugPokemonComeThroughWindow, MSGBOX_NPC
	end

FortreeCity_EventScript_GameboyKid::
	msgbox FortreeCity_Text_PokemonThatEvolveWhenTraded, MSGBOX_NPC
	end

FortreeCity_EventScript_CitySign::
	msgbox FortreeCity_Text_CitySign, MSGBOX_SIGN
	end

FortreeCity_EventScript_GymSign::
	msgbox FortreeCity_Text_GymSign, MSGBOX_SIGN
	end

FortreeCity_EventScript_Kecleon::
	lock
	faceplayer
	delay 8
    playse SE_PIN
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
    waitmovement OBJ_EVENT_ID_PLAYER
	waitse
	checkitem ITEM_DEVON_SCOPE
	goto_if_eq VAR_RESULT, TRUE, FortreeCity_EventScript_AskUseDevonScope
	msgbox FortreeCity_Text_SomethingUnseeable, MSGBOX_DEFAULT
	release
	end

FortreeCity_EventScript_AskUseDevonScope::
	msgbox FortreeCity_Text_UnseeableUseDevonScope, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, FortreeCity_EventScript_UseDevonScope
	release
	end

FortreeCity_EventScript_UseDevonScope::
	msgbox FortreeCity_Text_UsedDevonScopePokemonFled, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Movement_KecleonAppears
	waitmovement 0
	waitse
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	applymovement VAR_LAST_TALKED, FortreeCity_Movement_KecleonFlee
	waitmovement 0
	removeobject VAR_LAST_TALKED
	setflag FLAG_KECLEON_FLED_FORTREE
	release
	end

FortreeCity_Movement_KecleonFlee:
	walk_right
	step_end

FortreeCity_Text_SawGiganticPokemonInSky:
	.string "Sniff…\nUm… You, uh…smell singed.\pWere you at a volcano or something?$"

FortreeCity_Text_SomethingBlockingGym:
	.string "I want to go to the Pokémon Gym,\nbut something's blocking the way.\pAfter all the bother I went through\ntraining on Route 120…$"

FortreeCity_Text_ThisTimeIllBeatWinona:
	.string "I've got my pride-and-joy Pokémon\n"
	.string "with me. This time, I'll beat Winona.$"

FortreeCity_Text_TreesGrowByDrinkingRainwater:
	.string "The ground absorbs rainwater, and\ntrees grow by drinking that water…\pOur Fortree City exists thanks to our\nhaving both earth and water.$"

FortreeCity_Text_EveryoneHealthyAndLively:
	.string "This city's homes are built on trees.\pPerhaps because of that lifestyle,\neveryone seems healthy and lively.\pWhy, even I do!\nI feel as if I've grown 30 years\lyounger since I moved here.$"

FortreeCity_Text_BugPokemonComeThroughWindow:
	.string "Living on top of trees is fine.\pBut sometimes Bug Pokémon come in\nthrough the windows.\lIt can cause quite the fright!$"

FortreeCity_Text_PokemonThatEvolveWhenTraded:
	.string "Some Pokémon evolve when you Link\nTrade them with friends.$"

FortreeCity_Text_SomethingUnseeable:
	.string "There's an invisible obstacle in your\nway.$"

FortreeCity_Text_UnseeableUseDevonScope:
	.string "There's an invisible obstacle in your\nway.\pWould you like to use the Devon Scope?$"

FortreeCity_Text_UsedDevonScopePokemonFled:
	.string "{PLAYER} slipped the Devon Scope on.\pA previously invisible Pokémon became\nvisible to the naked eye!\pThe startled Keckleon fled!$"

FortreeCity_Text_CitySign:
	.string "Fortree City\n"
	.string "“The treetop city that frolics with\l"
	.string "nature.”$"

FortreeCity_Text_GymSign:
	.string "Fortree City Pokémon Gym\n"
	.string "Leader: Winona\p"
	.string "“The bird user taking flight into\n"
	.string "the world.”$"

FortreeCity_EventScript_StevenTrigger1::
	setvar VAR_TEMP_0, 1
	goto FortreeCity_EventScript_Steven
	return


FortreeCity_EventScript_StevenTrigger2::
	setvar VAR_TEMP_0, 2
	goto FortreeCity_EventScript_Steven
	return


FortreeCity_EventScript_StevenTrigger3::
	setvar VAR_TEMP_0, 3
	goto FortreeCity_EventScript_Steven
	return


FortreeCity_EventScript_Steven::
	lock
	delay 16
	special SpawnCameraObject
	switch VAR_TEMP_0
	case 1, FortreeCity_EventScript_Steven_3
	case 2, FortreeCity_EventScript_Steven_4
	case 3, FortreeCity_EventScript_Steven_5
FortreeCity_EventScript_Steven_1:
	waitmovement OBJ_EVENT_ID_CAMERA
	msgbox FortreeCity_EventScript_Steven_Text_0
	closemessage
	delay 16
	applymovement 8, FortreeCity_Movement_StevenExit
	waitmovement 8
	removeobject 8
	switch VAR_TEMP_0
	case 1, FortreeCity_EventScript_Steven_8
	case 2, FortreeCity_EventScript_Steven_9
	case 3, FortreeCity_EventScript_Steven_10
FortreeCity_EventScript_Steven_6:
	waitmovement OBJ_EVENT_ID_CAMERA
	special RemoveCameraObject
	setvar VAR_FORTREE_CITY_STATE, 1
	release
	end

FortreeCity_EventScript_Steven_3:
	applymovement OBJ_EVENT_ID_CAMERA, FortreeCity_Movement_CameraPanToSteven1
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
	goto FortreeCity_EventScript_Steven_1

FortreeCity_EventScript_Steven_4:
	applymovement OBJ_EVENT_ID_CAMERA, FortreeCity_Movement_CameraPanToSteven2
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
	goto FortreeCity_EventScript_Steven_1

FortreeCity_EventScript_Steven_5:
	applymovement OBJ_EVENT_ID_CAMERA, FortreeCity_Movement_CameraPanToSteven3
	goto FortreeCity_EventScript_Steven_1

FortreeCity_EventScript_Steven_8:
	applymovement OBJ_EVENT_ID_CAMERA, FortreeCity_Movement_CameraBackToPlayer1
	goto FortreeCity_EventScript_Steven_6

FortreeCity_EventScript_Steven_9:
	applymovement OBJ_EVENT_ID_CAMERA, FortreeCity_Movement_CameraBackToPlayer2
	goto FortreeCity_EventScript_Steven_6

FortreeCity_EventScript_Steven_10:
	applymovement OBJ_EVENT_ID_CAMERA, FortreeCity_Movement_CameraBackToPlayer3
	goto FortreeCity_EventScript_Steven_6


FortreeCity_Movement_CameraPanToSteven1:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

FortreeCity_Movement_CameraPanToSteven2:
	walk_diag_northeast
	walk_diag_northeast
	walk_right
	walk_right
	walk_right
	step_end

FortreeCity_Movement_CameraPanToSteven3:
	walk_diag_northeast
	walk_diag_northeast
	walk_diag_northeast
	walk_right
	step_end

FortreeCity_Movement_StevenExit:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

FortreeCity_Movement_CameraBackToPlayer1:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

FortreeCity_Movement_CameraBackToPlayer2:
	walk_left
	walk_left
	walk_left
	walk_diag_southwest
	walk_diag_southwest
	step_end

FortreeCity_Movement_CameraBackToPlayer3:
	walk_left
	walk_diag_southwest
	walk_diag_southwest
	walk_diag_southwest
	step_end

FortreeCity_EventScript_Steven_Text_0:
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: Hm…\pIt looks as though that Pokémon can be\nfound up on {COLOR BLUE}Route 120{COLOR DARK_GRAY}…$"
