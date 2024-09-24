Verdanturf_Meadow_MapScripts::
	.byte 0


Verdanturf_Meadow_EventScript_GiveAudino::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_AUDINO, Verdanturf_Meadow_EventScript_GiveAudino_2
Verdanturf_Meadow_EventScript_GiveAudino_1:
	goto Verdanturf_Meadow_EventScript_TakeCareOfAudino
	release
	end

Verdanturf_Meadow_EventScript_GiveAudino_2:
	msgbox Verdanturf_Meadow_EventScript_GiveAudino_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Verdanturf_Meadow_EventScript_GiveAudino_4
	msgbox Verdanturf_Meadow_EventScript_GiveAudino_Text_2
	delay 8
	givemon SPECIES_AUDINO, 25, ITEM_LUCKY_EGG, ITEM_POKE_BALL, NATURE_CAREFUL, 1, FEMALE, 0, 0, 0, 0, 0, 0, 31, 15, 31, 15, 15, 31
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Verdanturf_Meadow_EventScript_GiveAudino_7
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Verdanturf_Meadow_EventScript_GiveAudino_8
	goto Common_EventScript_NoMoreRoomForPokemon
	goto Verdanturf_Meadow_EventScript_GiveAudino_1

Verdanturf_Meadow_EventScript_GiveAudino_4:
	msgbox Verdanturf_Meadow_EventScript_GiveAudino_Text_1
	closemessage
	release
	end

Verdanturf_Meadow_EventScript_GiveAudino_7:
	call Verdanturf_Meadow_EventScript_ReceivedAudinoFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Verdanturf_Meadow_EventScript_GiveAudino_12
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto Verdanturf_Meadow_EventScript_TakeCareOfAudino
	goto Verdanturf_Meadow_EventScript_GiveAudino_1

Verdanturf_Meadow_EventScript_GiveAudino_8:
	call Verdanturf_Meadow_EventScript_ReceivedAudinoFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Verdanturf_Meadow_EventScript_GiveAudino_15
	call Common_EventScript_NameReceivedBoxMon
	goto Verdanturf_Meadow_EventScript_SendAudinoToPC
	goto Verdanturf_Meadow_EventScript_GiveAudino_1

Verdanturf_Meadow_EventScript_GiveAudino_12:
	goto Verdanturf_Meadow_EventScript_TakeCareOfAudino
	goto Verdanturf_Meadow_EventScript_GiveAudino_1

Verdanturf_Meadow_EventScript_GiveAudino_15:
	goto Verdanturf_Meadow_EventScript_SendAudinoToPC
	goto Verdanturf_Meadow_EventScript_GiveAudino_1


Verdanturf_Meadow_EventScript_ReceivedAudinoFanfare::
	playfanfare MUS_OBTAIN_ITEM
	message Verdanturf_Meadow_EventScript_ReceivedAudinoFanfare_Text_0
	waitmessage
	waitfanfare
	bufferspeciesname 0, SPECIES_AUDINO
	return


Verdanturf_Meadow_EventScript_SendAudinoToPC::
	call Common_EventScript_TransferredToPC
	goto Verdanturf_Meadow_EventScript_TakeCareOfAudino
	return


Verdanturf_Meadow_EventScript_TakeCareOfAudino::
	msgbox Verdanturf_Meadow_EventScript_TakeCareOfAudino_Text_0
	closemessage
	setflag FLAG_RECEIVED_AUDINO
	delay 8
	release
	end


Verdanturf_Meadow_EventScript_GiveAudino_Text_0:
	.string "Do you know the Pokémon Audino?\pI'm giving them away to promote Audino\nwelfare!\pSOME Trainers--MONSTERS, really--use\nAudino as punching bags!\p…just to make their teams grow\nfaster.\pTHIS is NOT OKAY!\pTell me, Trainer… are YOU one of those\nSAVAGES?$"

Verdanturf_Meadow_EventScript_GiveAudino_Text_1:
	.string "That's HORRIBLE!\pYou're HORRIBLE!\pHow could you treat an Audino--or ANY\nPokémon--like that?\pYou're what's wrong with this world!\pYou don't deserve to raise Pokémon if\nthat's how you see them!$"

Verdanturf_Meadow_EventScript_GiveAudino_Text_2:
	.string "Ah, that's a relief… Not all Trainers are\ncruel, heartless monsters!\pAudino may not be the strongest in\nbattle, but it deserve KINDNESS\land RESPECT like any other Pokémon.\pHere, take good CARE of this one!$"

Verdanturf_Meadow_EventScript_ReceivedAudinoFanfare_Text_0:
	.string "{PLAYER} received an Audino!$"

Verdanturf_Meadow_EventScript_TakeCareOfAudino_Text_0:
	.string "Take good care of Audino!$"
