# 1 "data/maps/Route119_House/scripts.pory"

# 2 "data/maps/Route119_House/scripts.pory"
.set LOCALID_WOMAN, 1
# 3 "data/maps/Route119_House/scripts.pory"

# 4 "data/maps/Route119_House/scripts.pory"
Route119_House_MapScripts::
# 5 "data/maps/Route119_House/scripts.pory"
	.byte 0
# 6 "data/maps/Route119_House/scripts.pory"

# 7 "data/maps/Route119_House/scripts.pory"
Route119_House_EventScript_Woman::
# 8 "data/maps/Route119_House/scripts.pory"
	msgbox Route119_House_Text_RumorAboutCaveOfOrigin, MSGBOX_NPC
# 9 "data/maps/Route119_House/scripts.pory"
    closemessage
# 10 "data/maps/Route119_House/scripts.pory"
    applymovement LOCALID_WOMAN, Common_Movement_WalkInPlaceUp
# 11 "data/maps/Route119_House/scripts.pory"
    waitmovement LOCALID_WOMAN
# 12 "data/maps/Route119_House/scripts.pory"
	end
# 13 "data/maps/Route119_House/scripts.pory"

# 14 "data/maps/Route119_House/scripts.pory"
Route119_House_EventScript_Wingull::
# 15 "data/maps/Route119_House/scripts.pory"
	lock
# 16 "data/maps/Route119_House/scripts.pory"
	faceplayer
# 17 "data/maps/Route119_House/scripts.pory"
	waitse
# 18 "data/maps/Route119_House/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 19 "data/maps/Route119_House/scripts.pory"
	msgbox Route119_House_Text_Wingull, MSGBOX_DEFAULT
# 20 "data/maps/Route119_House/scripts.pory"
	waitmoncry
# 21 "data/maps/Route119_House/scripts.pory"
	release
# 22 "data/maps/Route119_House/scripts.pory"
	end
# 23 "data/maps/Route119_House/scripts.pory"

# 24 "data/maps/Route119_House/scripts.pory"
Route119_House_Text_RumorAboutCaveOfOrigin:
# 25 "data/maps/Route119_House/scripts.pory"
	.string "I heard that somewhere there's a cave\ncalled the Cave of Origin.\pThey say that the spirits of Pokémon\nare revived there.\pCould something like that really\nhappen?$"
# 26 "data/maps/Route119_House/scripts.pory"

# 27 "data/maps/Route119_House/scripts.pory"
Route119_House_Text_Wingull:
# 28 "data/maps/Route119_House/scripts.pory"
	.string "Peee-hyoh?$"

Route119_House_EventScript_OldWoman::
# 34 "data/maps/Route119_House/scripts.pory"
	lock
# 35 "data/maps/Route119_House/scripts.pory"
	faceplayer
# 36 "data/maps/Route119_House/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq Route119_House_EventScript_OldWoman_2
# 40 "data/maps/Route119_House/scripts.pory"
	msgbox Route119_House_EventScript_OldWoman_Text_1
# 41 "data/maps/Route119_House/scripts.pory"
	closemessage
# 42 "data/maps/Route119_House/scripts.pory"
	delay 8
# 43 "data/maps/Route119_House/scripts.pory"
	fadescreen FADE_TO_BLACK
# 44 "data/maps/Route119_House/scripts.pory"
	special HealPlayerParty
# 45 "data/maps/Route119_House/scripts.pory"
	playfanfare MUS_HEAL
# 46 "data/maps/Route119_House/scripts.pory"
	waitfanfare
# 47 "data/maps/Route119_House/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 48 "data/maps/Route119_House/scripts.pory"
	delay 8
# 49 "data/maps/Route119_House/scripts.pory"
	msgbox Route119_House_EventScript_OldWoman_Text_2
# 50 "data/maps/Route119_House/scripts.pory"
	closemessage
# 51 "data/maps/Route119_House/scripts.pory"
	setvar VAR_TEMP_0, 1
Route119_House_EventScript_OldWoman_1:
# 53 "data/maps/Route119_House/scripts.pory"
	release
	end

Route119_House_EventScript_OldWoman_2:
# 37 "data/maps/Route119_House/scripts.pory"
	msgbox Route119_House_EventScript_OldWoman_Text_0
# 38 "data/maps/Route119_House/scripts.pory"
	closemessage
	goto Route119_House_EventScript_OldWoman_1


Route119_House_EventScript_OldWoman_Text_0:
# 37 "data/maps/Route119_House/scripts.pory"
	.string "Look at you!\pYou and your Pokémon so full of energy\nand all!$"

Route119_House_EventScript_OldWoman_Text_1:
# 40 "data/maps/Route119_House/scripts.pory"
	.string "Look at you!\nYou must be tired.\pWhy don't you and your Pokémon take a\nrest here?$"

Route119_House_EventScript_OldWoman_Text_2:
# 49 "data/maps/Route119_House/scripts.pory"
	.string "Look at you!\nI can tell you've recovered full!\pWhat are you waiting for?\nGo on with your Pokémon!$"
