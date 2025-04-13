Dewford_Meadow_MapScripts::
# 2 "data/maps/Dewford_Meadow/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Dewford_Meadow_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Dewford_Meadow_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 4 "data/maps/Dewford_Meadow/scripts.pory"
	random 3
# 5 "data/maps/Dewford_Meadow/scripts.pory"
	switch VAR_RESULT
# 6 "data/maps/Dewford_Meadow/scripts.pory"
	case 2, Dewford_Meadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	return

Dewford_Meadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/Dewford_Meadow/scripts.pory"
	clearflag FLAG_HIDDEN_ITEM_RED_NECTAR
# 8 "data/maps/Dewford_Meadow/scripts.pory"
	clearflag FLAG_HIDDEN_ITEM_PINK_NECTAR
# 9 "data/maps/Dewford_Meadow/scripts.pory"
	clearflag FLAG_HIDDEN_ITEM_PURPLE_NECTAR
# 10 "data/maps/Dewford_Meadow/scripts.pory"
	clearflag FLAG_HIDDEN_ITEM_YELLOW_NECTAR
	return


DewfordMeadow_EventScript_TrainingPokemon::
# 16 "data/maps/Dewford_Meadow/scripts.pory"
	lock
# 17 "data/maps/Dewford_Meadow/scripts.pory"
	faceplayer
# 18 "data/maps/Dewford_Meadow/scripts.pory"
	msgbox DewfordMeadow_EventScript_TrainingPokemon_Text_0
# 19 "data/maps/Dewford_Meadow/scripts.pory"
	release
	end


DewfordMeadow_EventScript_AbandonedManorSign::
# 24 "data/maps/Dewford_Meadow/scripts.pory"
	msgbox DewfordMeadow_EventScript_AbandonedManorSign_Text_0, MSGBOX_SIGN
	end


DewfordMeadow_EventScript_TrainingPokemon_Text_0:
# 18 "data/maps/Dewford_Meadow/scripts.pory"
	.string "'Sup! Have you been training your\nPokémon?\pIf you want to make your\nPokémon strong, I highly recommend\lSuper Training!\pBe like me, and enjoy some\nrefreshing training!$"

DewfordMeadow_EventScript_AbandonedManorSign_Text_0:
# 24 "data/maps/Dewford_Meadow/scripts.pory"
	.string "Abandoned Manor$"
