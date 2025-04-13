# 1 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 2 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_MapScripts::
# 3 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.byte 0
# 4 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 5 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_ExpertM::
# 6 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike, MSGBOX_NPC
# 7 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 8 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 9 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_OldMan::
# 10 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	lock
# 11 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	faceplayer
# 12 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHARCOAL, LavaridgeTown_HerbShop_EventScript_ExplainCharcoal
# 13 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine, MSGBOX_DEFAULT
# 14 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	giveitem ITEM_CHARCOAL
# 15 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 16 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	setflag FLAG_RECEIVED_CHARCOAL
# 17 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 18 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 19 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 20 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_ExplainCharcoal::
# 21 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_ExplainCharcoal, MSGBOX_DEFAULT
# 22 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 23 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 24 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 25 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_WelcomeToHerbShop:
# 26 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Welcome to the Herb Shop, home of\n"
# 27 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "effective and inexpensive medicine!$"
# 28 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 29 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine:
# 30 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "You've come all the way to look at\nherbal medicine in Lavaridge?\pThat's rather commendable!\pI like you!\nTake this!$"
# 31 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 32 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_ExplainCharcoal:
# 33 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "That Charcoal I gave you is used for\nmaking herbal medicine.\pIt can also do wonders when held by a\nPokémon.\pIt powers up Fire-type moves!$"
# 34 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 35 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike:
# 36 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Herbal medicine works impressively well.\n"
# 37 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "But your Pokémon will dislike you for it.\l"
# 38 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "It must be horribly bitter!$"

LavaridgeTown_HerbShop_EventScript_Clerk::
# 44 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	lock
# 45 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	faceplayer
# 46 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	message LavaridgeTown_HerbShop_Text_WelcomeToHerbShop
# 47 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	waitmessage
# 48 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, LavaridgeTown_HerbShop_EventScript_Clerk_2
# 50 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, LavaridgeTown_HerbShop_EventScript_Clerk_3
# 53 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	pokemart LavaridgeTown_HerbShop_Pokemart
LavaridgeTown_HerbShop_EventScript_Clerk_1:
# 55 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 56 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
	end

LavaridgeTown_HerbShop_EventScript_Clerk_2:
# 49 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	pokemart LavaridgeTown_HerbShop_Pokemart_6thBadge
	goto LavaridgeTown_HerbShop_EventScript_Clerk_1

LavaridgeTown_HerbShop_EventScript_Clerk_3:
# 51 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	pokemart LavaridgeTown_HerbShop_Pokemart_5thBadge
	goto LavaridgeTown_HerbShop_EventScript_Clerk_1


	.align 2
# 60 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Pokemart:
# 61 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 62 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 63 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 64 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 65 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 66 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_WHITE_HERB
	.2byte ITEM_NONE

	.align 2
# 69 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Pokemart_5thBadge:
# 70 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 71 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 72 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 73 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 74 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_MIRROR_HERB
# 75 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 76 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_WHITE_HERB
	.2byte ITEM_NONE

	.align 2
# 79 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Pokemart_6thBadge:
# 80 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 81 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 82 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 83 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 84 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_MIRROR_HERB
# 85 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_POWER_HERB
# 86 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 87 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_WHITE_HERB
	.2byte ITEM_NONE
