# 1 "data/maps/MauvilleCity_Mart/scripts.pory"

# 2 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_MapScripts::
# 3 "data/maps/MauvilleCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_Mart/scripts.pory"

# 5 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_EventScript_Clerk::
# 6 "data/maps/MauvilleCity_Mart/scripts.pory"
	lock
# 7 "data/maps/MauvilleCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/MauvilleCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/MauvilleCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/MauvilleCity_Mart/scripts.pory"
	pokemart MauvilleCity_Mart_Pokemart
# 11 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/MauvilleCity_Mart/scripts.pory"
	release
# 13 "data/maps/MauvilleCity_Mart/scripts.pory"
	end
# 14 "data/maps/MauvilleCity_Mart/scripts.pory"

# 15 "data/maps/MauvilleCity_Mart/scripts.pory"
	.align 2
# 16 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_Pokemart:
# 17 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 19 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 20 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 21 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 22 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 23 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 24 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 25 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 26 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 27 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 28 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 29 "data/maps/MauvilleCity_Mart/scripts.pory"
	pokemartlistend
# 30 "data/maps/MauvilleCity_Mart/scripts.pory"

# 31 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_EventScript_ExpertM::
# 32 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox MauvilleCity_Mart_Text_ItemsToTemporarilyElevateStats, MSGBOX_NPC
# 33 "data/maps/MauvilleCity_Mart/scripts.pory"
	end
# 34 "data/maps/MauvilleCity_Mart/scripts.pory"

# 35 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_EventScript_Man::
# 36 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox MauvilleCity_Mart_Text_DecisionsDetermineBattle, MSGBOX_NPC
# 37 "data/maps/MauvilleCity_Mart/scripts.pory"
	end
# 38 "data/maps/MauvilleCity_Mart/scripts.pory"

# 39 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_Text_ItemsToTemporarilyElevateStats:
# 40 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "There are items that temporarily\n"
# 41 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "elevate the stats of Pokémon.\p"
# 42 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "The ones I know you use in battle\n"
# 43 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "are X Attack and X Defend…\p"
# 44 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "I do believe that there are others\n"
# 45 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "like them.$"
# 46 "data/maps/MauvilleCity_Mart/scripts.pory"

# 47 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_Text_DecisionsDetermineBattle:
# 48 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "Use a certain move, or use an item\n"
# 49 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "instead…\p"
# 50 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "The Trainer's decisions determine how\n"
# 51 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "battles turn out, I think.$"

MauvilleCity_Mart_EventScript_OtherClerk::
# 57 "data/maps/MauvilleCity_Mart/scripts.pory"
	lock
# 58 "data/maps/MauvilleCity_Mart/scripts.pory"
	faceplayer
# 59 "data/maps/MauvilleCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 60 "data/maps/MauvilleCity_Mart/scripts.pory"
	waitmessage
# 61 "data/maps/MauvilleCity_Mart/scripts.pory"
	pokemart MauvilleCity_Mart_OtherClerk_Pokemart
# 62 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 63 "data/maps/MauvilleCity_Mart/scripts.pory"
	release
	end


	.align 2
# 67 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_OtherClerk_Pokemart:
# 68 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_VENOSHOCK
# 69 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_AERIAL_ACE
# 70 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_LOW_KICK
# 71 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_CHARGE_BEAM
# 72 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_BULLDOZE
# 73 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_DRAGON_TAIL
# 74 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_TM_POWER_UP_PUNCH
	.2byte ITEM_NONE
