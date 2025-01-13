# 1 "data/maps/Dewford_Meadow/scripts.pory"

# 2 "data/maps/Dewford_Meadow/scripts.pory"
Dewford_Meadow_MapScripts::
# 3 "data/maps/Dewford_Meadow/scripts.pory"
	.byte 0

DewfordMeadow_EventScript_TrainingPokemon::
# 8 "data/maps/Dewford_Meadow/scripts.pory"
	lock
# 9 "data/maps/Dewford_Meadow/scripts.pory"
	faceplayer
# 10 "data/maps/Dewford_Meadow/scripts.pory"
	msgbox DewfordMeadow_EventScript_TrainingPokemon_Text_0
# 11 "data/maps/Dewford_Meadow/scripts.pory"
	release
	end


DewfordMeadow_EventScript_AbandonedManorSign::
# 16 "data/maps/Dewford_Meadow/scripts.pory"
	msgbox DewfordMeadow_EventScript_AbandonedManorSign_Text_0, MSGBOX_SIGN
	end


DewfordMeadow_EventScript_TrainingPokemon_Text_0:
# 10 "data/maps/Dewford_Meadow/scripts.pory"
	.string "'Sup! Have you been training your\nPokémon?\pIf you want to make your\nPokémon strong, I highly recommend\lSuper Training!\pBe like me, and enjoy some\nrefreshing training!$"

DewfordMeadow_EventScript_AbandonedManorSign_Text_0:
# 16 "data/maps/Dewford_Meadow/scripts.pory"
	.string "Abandoned Manor$"
