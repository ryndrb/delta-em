Verdanturf_Meadow_MapScripts::
# 2 "data/maps/Verdanturf_Meadow/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Verdanturf_Meadow_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Verdanturf_Meadow_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 4 "data/maps/Verdanturf_Meadow/scripts.pory"
	random 3
# 5 "data/maps/Verdanturf_Meadow/scripts.pory"
	switch VAR_RESULT
# 6 "data/maps/Verdanturf_Meadow/scripts.pory"
	case 2, Verdanturf_Meadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	return

Verdanturf_Meadow_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/Verdanturf_Meadow/scripts.pory"
	clearflag FLAG_HIDDEN_ITEM_RED_NECTAR
# 8 "data/maps/Verdanturf_Meadow/scripts.pory"
	clearflag FLAG_HIDDEN_ITEM_PINK_NECTAR
# 9 "data/maps/Verdanturf_Meadow/scripts.pory"
	clearflag FLAG_HIDDEN_ITEM_PURPLE_NECTAR
# 10 "data/maps/Verdanturf_Meadow/scripts.pory"
	clearflag FLAG_HIDDEN_ITEM_YELLOW_NECTAR
	return


Verdanturf_Meadow_EventScript_GiveAudino::
# 17 "data/maps/Verdanturf_Meadow/scripts.pory"
	lock
# 18 "data/maps/Verdanturf_Meadow/scripts.pory"
	faceplayer
# 19 "data/maps/Verdanturf_Meadow/scripts.pory"
	goto_if_unset FLAG_RECEIVED_AUDINO, Verdanturf_Meadow_EventScript_GiveAudino_2
Verdanturf_Meadow_EventScript_GiveAudino_1:
# 54 "data/maps/Verdanturf_Meadow/scripts.pory"
	goto Verdanturf_Meadow_EventScript_TakeCareOfAudino
# 55 "data/maps/Verdanturf_Meadow/scripts.pory"
	release
	end

Verdanturf_Meadow_EventScript_GiveAudino_2:
# 20 "data/maps/Verdanturf_Meadow/scripts.pory"
	msgbox Verdanturf_Meadow_EventScript_GiveAudino_Text_0, MSGBOX_YESNO
# 21 "data/maps/Verdanturf_Meadow/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Verdanturf_Meadow_EventScript_GiveAudino_4
# 27 "data/maps/Verdanturf_Meadow/scripts.pory"
	msgbox Verdanturf_Meadow_EventScript_GiveAudino_Text_2
# 28 "data/maps/Verdanturf_Meadow/scripts.pory"
	delay 8
# 29 "data/maps/Verdanturf_Meadow/scripts.pory"
	givemon SPECIES_AUDINO, 25, ITEM_LUCKY_EGG, ITEM_POKE_BALL, NATURE_CAREFUL, 1, FEMALE, 0, 0, 0, 0, 0, 0, 31, 15, 31, 15, 15, 31
# 30 "data/maps/Verdanturf_Meadow/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Verdanturf_Meadow_EventScript_GiveAudino_7
# 40 "data/maps/Verdanturf_Meadow/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Verdanturf_Meadow_EventScript_GiveAudino_8
# 50 "data/maps/Verdanturf_Meadow/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto Verdanturf_Meadow_EventScript_GiveAudino_1

Verdanturf_Meadow_EventScript_GiveAudino_4:
# 22 "data/maps/Verdanturf_Meadow/scripts.pory"
	msgbox Verdanturf_Meadow_EventScript_GiveAudino_Text_1
# 23 "data/maps/Verdanturf_Meadow/scripts.pory"
	closemessage
# 24 "data/maps/Verdanturf_Meadow/scripts.pory"
	release
	end

Verdanturf_Meadow_EventScript_GiveAudino_7:
# 31 "data/maps/Verdanturf_Meadow/scripts.pory"
	call Verdanturf_Meadow_EventScript_ReceivedAudinoFanfare
# 32 "data/maps/Verdanturf_Meadow/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 33 "data/maps/Verdanturf_Meadow/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Verdanturf_Meadow_EventScript_GiveAudino_12
# 36 "data/maps/Verdanturf_Meadow/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 37 "data/maps/Verdanturf_Meadow/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 38 "data/maps/Verdanturf_Meadow/scripts.pory"
	goto Verdanturf_Meadow_EventScript_TakeCareOfAudino
	goto Verdanturf_Meadow_EventScript_GiveAudino_1

Verdanturf_Meadow_EventScript_GiveAudino_8:
# 41 "data/maps/Verdanturf_Meadow/scripts.pory"
	call Verdanturf_Meadow_EventScript_ReceivedAudinoFanfare
# 42 "data/maps/Verdanturf_Meadow/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 43 "data/maps/Verdanturf_Meadow/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Verdanturf_Meadow_EventScript_GiveAudino_15
# 46 "data/maps/Verdanturf_Meadow/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 47 "data/maps/Verdanturf_Meadow/scripts.pory"
	goto Verdanturf_Meadow_EventScript_SendAudinoToPC
	goto Verdanturf_Meadow_EventScript_GiveAudino_1

Verdanturf_Meadow_EventScript_GiveAudino_12:
# 34 "data/maps/Verdanturf_Meadow/scripts.pory"
	goto Verdanturf_Meadow_EventScript_TakeCareOfAudino
	goto Verdanturf_Meadow_EventScript_GiveAudino_1

Verdanturf_Meadow_EventScript_GiveAudino_15:
# 44 "data/maps/Verdanturf_Meadow/scripts.pory"
	goto Verdanturf_Meadow_EventScript_SendAudinoToPC
	goto Verdanturf_Meadow_EventScript_GiveAudino_1


Verdanturf_Meadow_EventScript_ReceivedAudinoFanfare::
# 60 "data/maps/Verdanturf_Meadow/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 61 "data/maps/Verdanturf_Meadow/scripts.pory"
	message Verdanturf_Meadow_EventScript_ReceivedAudinoFanfare_Text_0
# 62 "data/maps/Verdanturf_Meadow/scripts.pory"
	waitmessage
# 63 "data/maps/Verdanturf_Meadow/scripts.pory"
	waitfanfare
# 64 "data/maps/Verdanturf_Meadow/scripts.pory"
	bufferspeciesname 0, SPECIES_AUDINO
	return


Verdanturf_Meadow_EventScript_SendAudinoToPC::
# 69 "data/maps/Verdanturf_Meadow/scripts.pory"
	call Common_EventScript_TransferredToPC
# 70 "data/maps/Verdanturf_Meadow/scripts.pory"
	goto Verdanturf_Meadow_EventScript_TakeCareOfAudino
	return


Verdanturf_Meadow_EventScript_TakeCareOfAudino::
# 74 "data/maps/Verdanturf_Meadow/scripts.pory"
	msgbox Verdanturf_Meadow_EventScript_TakeCareOfAudino_Text_0
# 75 "data/maps/Verdanturf_Meadow/scripts.pory"
	closemessage
# 76 "data/maps/Verdanturf_Meadow/scripts.pory"
	setflag FLAG_RECEIVED_AUDINO
# 77 "data/maps/Verdanturf_Meadow/scripts.pory"
	delay 8
# 78 "data/maps/Verdanturf_Meadow/scripts.pory"
	release
	end


Verdanturf_Meadow_EventScript_GiveAudino_Text_0:
# 20 "data/maps/Verdanturf_Meadow/scripts.pory"
	.string "Do you know the Pokémon Audino?\pI'm giving them away to promote Audino\nwelfare!\pSOME Trainers--MONSTERS, really--use\nAudino as punching bags!\pTHIS is NOT OKAY!\pTell me, Trainer… are YOU one of those\nSAVAGES?$"

Verdanturf_Meadow_EventScript_GiveAudino_Text_1:
# 22 "data/maps/Verdanturf_Meadow/scripts.pory"
	.string "That's HORRIBLE!\pYou're HORRIBLE!\pHow could you treat an Audino--or ANY\nPokémon--like that?\pYou're what's wrong with this world!\pYou don't deserve to raise Pokémon if\nthat's how you see them!$"

Verdanturf_Meadow_EventScript_GiveAudino_Text_2:
# 27 "data/maps/Verdanturf_Meadow/scripts.pory"
	.string "Ah, that's a relief… Not all Trainers are\ncruel, heartless monsters!\pAudino may not be the strongest in\nbattle, but it deserve KINDNESS\land RESPECT like any other Pokémon.\pHere, take good CARE of this one!$"

Verdanturf_Meadow_EventScript_ReceivedAudinoFanfare_Text_0:
# 61 "data/maps/Verdanturf_Meadow/scripts.pory"
	.string "{PLAYER} received an Audino!$"

Verdanturf_Meadow_EventScript_TakeCareOfAudino_Text_0:
# 74 "data/maps/Verdanturf_Meadow/scripts.pory"
	.string "Take good care of Audino!$"
