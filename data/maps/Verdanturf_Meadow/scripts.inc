Verdanturf_Meadow_MapScripts::
	.byte 0


Verdanturf_Meadow_EventScript_GiveAudino::
# 5 "data/maps/Verdanturf_Meadow/scripts.pory"
	lock
# 6 "data/maps/Verdanturf_Meadow/scripts.pory"
	faceplayer
# 7 "data/maps/Verdanturf_Meadow/scripts.pory"
	goto_if_unset FLAG_RECEIVED_AUDINO, Verdanturf_Meadow_EventScript_GiveAudino_2
Verdanturf_Meadow_EventScript_GiveAudino_1:
# 42 "data/maps/Verdanturf_Meadow/scripts.pory"
	goto Verdanturf_Meadow_EventScript_TakeCareOfAudino
# 43 "data/maps/Verdanturf_Meadow/scripts.pory"
	release
	end

Verdanturf_Meadow_EventScript_GiveAudino_2:
# 8 "data/maps/Verdanturf_Meadow/scripts.pory"
	msgbox Verdanturf_Meadow_EventScript_GiveAudino_Text_0, MSGBOX_YESNO
# 9 "data/maps/Verdanturf_Meadow/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Verdanturf_Meadow_EventScript_GiveAudino_4
# 15 "data/maps/Verdanturf_Meadow/scripts.pory"
	msgbox Verdanturf_Meadow_EventScript_GiveAudino_Text_2
# 16 "data/maps/Verdanturf_Meadow/scripts.pory"
	delay 8
# 17 "data/maps/Verdanturf_Meadow/scripts.pory"
	givemon SPECIES_AUDINO, 25, ITEM_LUCKY_EGG, ITEM_POKE_BALL, NATURE_CAREFUL, 1, FEMALE, 0, 0, 0, 0, 0, 0, 31, 15, 31, 15, 15, 31
# 18 "data/maps/Verdanturf_Meadow/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Verdanturf_Meadow_EventScript_GiveAudino_7
# 28 "data/maps/Verdanturf_Meadow/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Verdanturf_Meadow_EventScript_GiveAudino_8
# 38 "data/maps/Verdanturf_Meadow/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto Verdanturf_Meadow_EventScript_GiveAudino_1

Verdanturf_Meadow_EventScript_GiveAudino_4:
# 10 "data/maps/Verdanturf_Meadow/scripts.pory"
	msgbox Verdanturf_Meadow_EventScript_GiveAudino_Text_1
# 11 "data/maps/Verdanturf_Meadow/scripts.pory"
	closemessage
# 12 "data/maps/Verdanturf_Meadow/scripts.pory"
	release
	end

Verdanturf_Meadow_EventScript_GiveAudino_7:
# 19 "data/maps/Verdanturf_Meadow/scripts.pory"
	call Verdanturf_Meadow_EventScript_ReceivedAudinoFanfare
# 20 "data/maps/Verdanturf_Meadow/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 21 "data/maps/Verdanturf_Meadow/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Verdanturf_Meadow_EventScript_GiveAudino_12
# 24 "data/maps/Verdanturf_Meadow/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 25 "data/maps/Verdanturf_Meadow/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 26 "data/maps/Verdanturf_Meadow/scripts.pory"
	goto Verdanturf_Meadow_EventScript_TakeCareOfAudino
	goto Verdanturf_Meadow_EventScript_GiveAudino_1

Verdanturf_Meadow_EventScript_GiveAudino_8:
# 29 "data/maps/Verdanturf_Meadow/scripts.pory"
	call Verdanturf_Meadow_EventScript_ReceivedAudinoFanfare
# 30 "data/maps/Verdanturf_Meadow/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 31 "data/maps/Verdanturf_Meadow/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Verdanturf_Meadow_EventScript_GiveAudino_15
# 34 "data/maps/Verdanturf_Meadow/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 35 "data/maps/Verdanturf_Meadow/scripts.pory"
	goto Verdanturf_Meadow_EventScript_SendAudinoToPC
	goto Verdanturf_Meadow_EventScript_GiveAudino_1

Verdanturf_Meadow_EventScript_GiveAudino_12:
# 22 "data/maps/Verdanturf_Meadow/scripts.pory"
	goto Verdanturf_Meadow_EventScript_TakeCareOfAudino
	goto Verdanturf_Meadow_EventScript_GiveAudino_1

Verdanturf_Meadow_EventScript_GiveAudino_15:
# 32 "data/maps/Verdanturf_Meadow/scripts.pory"
	goto Verdanturf_Meadow_EventScript_SendAudinoToPC
	goto Verdanturf_Meadow_EventScript_GiveAudino_1


Verdanturf_Meadow_EventScript_ReceivedAudinoFanfare::
# 48 "data/maps/Verdanturf_Meadow/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 49 "data/maps/Verdanturf_Meadow/scripts.pory"
	message Verdanturf_Meadow_EventScript_ReceivedAudinoFanfare_Text_0
# 50 "data/maps/Verdanturf_Meadow/scripts.pory"
	waitmessage
# 51 "data/maps/Verdanturf_Meadow/scripts.pory"
	waitfanfare
# 52 "data/maps/Verdanturf_Meadow/scripts.pory"
	bufferspeciesname 0, SPECIES_AUDINO
	return


Verdanturf_Meadow_EventScript_SendAudinoToPC::
# 57 "data/maps/Verdanturf_Meadow/scripts.pory"
	call Common_EventScript_TransferredToPC
# 58 "data/maps/Verdanturf_Meadow/scripts.pory"
	goto Verdanturf_Meadow_EventScript_TakeCareOfAudino
	return


Verdanturf_Meadow_EventScript_TakeCareOfAudino::
# 62 "data/maps/Verdanturf_Meadow/scripts.pory"
	msgbox Verdanturf_Meadow_EventScript_TakeCareOfAudino_Text_0
# 63 "data/maps/Verdanturf_Meadow/scripts.pory"
	closemessage
# 64 "data/maps/Verdanturf_Meadow/scripts.pory"
	setflag FLAG_RECEIVED_AUDINO
# 65 "data/maps/Verdanturf_Meadow/scripts.pory"
	delay 8
# 66 "data/maps/Verdanturf_Meadow/scripts.pory"
	release
	end


Verdanturf_Meadow_EventScript_GiveAudino_Text_0:
# 8 "data/maps/Verdanturf_Meadow/scripts.pory"
	.string "Do you know the Pokémon Audino?\pI'm giving them away to promote Audino\nwelfare!\pSOME Trainers--MONSTERS, really--use\nAudino as punching bags!\p…just to make their teams grow\nfaster.\pTHIS is NOT OKAY!\pTell me, Trainer… are YOU one of those\nSAVAGES?$"

Verdanturf_Meadow_EventScript_GiveAudino_Text_1:
# 10 "data/maps/Verdanturf_Meadow/scripts.pory"
	.string "That's HORRIBLE!\pYou're HORRIBLE!\pHow could you treat an Audino--or ANY\nPokémon--like that?\pYou're what's wrong with this world!\pYou don't deserve to raise Pokémon if\nthat's how you see them!$"

Verdanturf_Meadow_EventScript_GiveAudino_Text_2:
# 15 "data/maps/Verdanturf_Meadow/scripts.pory"
	.string "Ah, that's a relief… Not all Trainers are\ncruel, heartless monsters!\pAudino may not be the strongest in\nbattle, but it deserve KINDNESS\land RESPECT like any other Pokémon.\pHere, take good CARE of this one!$"

Verdanturf_Meadow_EventScript_ReceivedAudinoFanfare_Text_0:
# 49 "data/maps/Verdanturf_Meadow/scripts.pory"
	.string "{PLAYER} received an Audino!$"

Verdanturf_Meadow_EventScript_TakeCareOfAudino_Text_0:
# 62 "data/maps/Verdanturf_Meadow/scripts.pory"
	.string "Take good care of Audino!$"
