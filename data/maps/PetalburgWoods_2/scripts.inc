PetalburgWoods_2_MapScripts::
	.byte 0


PetalburgWoods_2_EventScript_Sign::
# 4 "data/maps/PetalburgWoods_2/scripts.pory"
	msgbox PetalburgWoods_2_EventScript_Sign_Text_0
# 5 "data/maps/PetalburgWoods_2/scripts.pory"
	release
	end


PetalburgWoods_2_EventScript_BigRootGirl::
# 10 "data/maps/PetalburgWoods_2/scripts.pory"
	lock
# 11 "data/maps/PetalburgWoods_2/scripts.pory"
	faceplayer
# 12 "data/maps/PetalburgWoods_2/scripts.pory"
	goto_if_set FLAG_RECEIVED_BIG_ROOT, PetalburgWoods_2_EventScript_BigRootGirl_2
# 15 "data/maps/PetalburgWoods_2/scripts.pory"
	msgbox PetalburgWoods_2_EventScript_BigRootGirl_Text_1
# 16 "data/maps/PetalburgWoods_2/scripts.pory"
	special IsGrassTypeInParty
# 17 "data/maps/PetalburgWoods_2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgWoods_2_EventScript_BigRootGirl_6
# 23 "data/maps/PetalburgWoods_2/scripts.pory"
	msgbox PetalburgWoods_2_EventScript_BigRootGirl_Text_3
# 24 "data/maps/PetalburgWoods_2/scripts.pory"
	giveitem ITEM_BIG_ROOT, 1
# 25 "data/maps/PetalburgWoods_2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgWoods_2_EventScript_BigRootGirl_9
PetalburgWoods_2_EventScript_BigRootGirl_8:
# 28 "data/maps/PetalburgWoods_2/scripts.pory"
	setflag FLAG_RECEIVED_BIG_ROOT
# 29 "data/maps/PetalburgWoods_2/scripts.pory"
	msgbox PetalburgWoods_2_EventScript_BigRootGirl_Text_0
PetalburgWoods_2_EventScript_BigRootGirl_1:
# 31 "data/maps/PetalburgWoods_2/scripts.pory"
	closemessage
# 32 "data/maps/PetalburgWoods_2/scripts.pory"
	release
	end

PetalburgWoods_2_EventScript_BigRootGirl_2:
# 13 "data/maps/PetalburgWoods_2/scripts.pory"
	msgbox PetalburgWoods_2_EventScript_BigRootGirl_Text_0
	goto PetalburgWoods_2_EventScript_BigRootGirl_1

PetalburgWoods_2_EventScript_BigRootGirl_6:
# 18 "data/maps/PetalburgWoods_2/scripts.pory"
	msgbox PetalburgWoods_2_EventScript_BigRootGirl_Text_2
# 19 "data/maps/PetalburgWoods_2/scripts.pory"
	closemessage
# 20 "data/maps/PetalburgWoods_2/scripts.pory"
	release
	end

PetalburgWoods_2_EventScript_BigRootGirl_9:
# 26 "data/maps/PetalburgWoods_2/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto PetalburgWoods_2_EventScript_BigRootGirl_8


PetalburgWoods_2_EventScript_Sign_Text_0:
# 4 "data/maps/PetalburgWoods_2/scripts.pory"
	.string "A chilling pocket in Petalburg Woods,\nwhere an eerie cold bites through\lthe air without explanation…$"

PetalburgWoods_2_EventScript_BigRootGirl_Text_0:
# 13 "data/maps/PetalburgWoods_2/scripts.pory"
	.string "I check on the health of the\ntrees around here with my Grass-type\lPokémon.\pI guess you could say I'm a tree\ndoctor!$"

PetalburgWoods_2_EventScript_BigRootGirl_Text_1:
# 15 "data/maps/PetalburgWoods_2/scripts.pory"
	.string "I love Grass-type Pokémon!\pHow about you?$"

PetalburgWoods_2_EventScript_BigRootGirl_Text_2:
# 18 "data/maps/PetalburgWoods_2/scripts.pory"
	.string "Oh…\pYou don't travel with any Grass-type\nPokémon…$"

PetalburgWoods_2_EventScript_BigRootGirl_Text_3:
# 23 "data/maps/PetalburgWoods_2/scripts.pory"
	.string "Oh?\pYou also love Grass-type Pokémon, eh?\pI'm so happy that I want to give you\nthis!\pIt'll be a token of our friendship!$"
