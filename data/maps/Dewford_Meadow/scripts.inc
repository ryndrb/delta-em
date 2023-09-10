Dewford_Meadow_MapScripts::
	.byte 0

DewfordMeadow_EventScript_TrainingPokemon::
	lock
	faceplayer
	msgbox DewfordMeadow_EventScript_TrainingPokemon_Text_0
	release
	end


DewfordMeadow_EventScript_AbandonedManorSign::
	msgbox DewfordMeadow_EventScript_AbandonedManorSign_Text_0, MSGBOX_SIGN
	end


DewfordMeadow_EventScript_TrainingPokemon_Text_0:
	.string "'Sup! Have you been training your\nPokémon?\pIf you want to make your\nPokémon strong, I highly recommend\lSuper Training!\pBe like me, and enjoy some\nrefreshing training!$"

DewfordMeadow_EventScript_AbandonedManorSign_Text_0:
	.string "Abandoned Manor$"
