.set LOCALID_WOMAN, 1

Route119_House_MapScripts::
	.byte 0

Route119_House_EventScript_Woman::
	msgbox Route119_House_Text_RumorAboutCaveOfOrigin, MSGBOX_NPC
    closemessage
    applymovement LOCALID_WOMAN, Common_Movement_WalkInPlaceUp
    waitmovement LOCALID_WOMAN
	end

Route119_House_EventScript_Wingull::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
	msgbox Route119_House_Text_Wingull, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route119_House_Text_RumorAboutCaveOfOrigin:
	.string "I heard that somewhere there's a cave\ncalled the Cave of Origin.\pThey say that the spirits of Pokémon\nare revived there.\pCould something like that really\nhappen?$"

Route119_House_Text_Wingull:
	.string "Peee-hyoh?$"

Route119_House_EventScript_OldWoman::
	lock
	faceplayer
	compare VAR_TEMP_0, 1
	goto_if_eq Route119_House_EventScript_OldWoman_2
	msgbox Route119_House_EventScript_OldWoman_Text_1
	closemessage
	delay 8
	fadescreen FADE_TO_BLACK
	special HealPlayerParty
	playfanfare MUS_HEAL
	waitfanfare
	fadescreen FADE_FROM_BLACK
	delay 8
	msgbox Route119_House_EventScript_OldWoman_Text_2
	closemessage
	setvar VAR_TEMP_0, 1
Route119_House_EventScript_OldWoman_1:
	release
	end

Route119_House_EventScript_OldWoman_2:
	msgbox Route119_House_EventScript_OldWoman_Text_0
	closemessage
	goto Route119_House_EventScript_OldWoman_1


Route119_House_EventScript_OldWoman_Text_0:
	.string "Look at you!\pYou and your Pokémon so full of energy\nand all!$"

Route119_House_EventScript_OldWoman_Text_1:
	.string "Look at you!\nYou must be tired.\pWhy don't you and your Pokémon take a\nrest here?$"

Route119_House_EventScript_OldWoman_Text_2:
	.string "Look at you!\nI can tell you've recovered full!\pWhat are you waiting for?\nGo on with your Pokémon!$"
