# 1 "data/maps/SlateportCity_Mart/scripts.pory"

# 2 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_MapScripts::
# 3 "data/maps/SlateportCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/SlateportCity_Mart/scripts.pory"

# 5 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_EventScript_Clerk::
# 6 "data/maps/SlateportCity_Mart/scripts.pory"
	lock
# 7 "data/maps/SlateportCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/SlateportCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/SlateportCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/SlateportCity_Mart/scripts.pory"
	pokemart SlateportCity_Mart_Pokemart
# 11 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/SlateportCity_Mart/scripts.pory"
	release
# 13 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 14 "data/maps/SlateportCity_Mart/scripts.pory"

# 15 "data/maps/SlateportCity_Mart/scripts.pory"
	.align 2
# 16 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_Pokemart:
# 17 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 19 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 20 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 21 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 22 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 23 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 24 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 25 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HARBOR_MAIL
# 26 "data/maps/SlateportCity_Mart/scripts.pory"
	pokemartlistend
# 27 "data/maps/SlateportCity_Mart/scripts.pory"

# 28 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_EventScript_BlackBelt::
# 29 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_Text_SomeItemsOnlyAtMart, MSGBOX_NPC
# 30 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 31 "data/maps/SlateportCity_Mart/scripts.pory"

# 32 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_EventScript_Man::
# 33 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_Text_GreatBallIsBetter, MSGBOX_NPC
# 34 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 35 "data/maps/SlateportCity_Mart/scripts.pory"

# 36 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_Text_SomeItemsOnlyAtMart:
# 37 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "The Market does have some\ninteresting merchandise.\pBut there are some items you can\nonly get at a Poké Mart, you know?$"
# 38 "data/maps/SlateportCity_Mart/scripts.pory"

# 39 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_Text_GreatBallIsBetter:
# 40 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "It's easier to catch a Pokémon\nwith a Great Ball that is is with a\lregular old Poké Ball.\pWith this, I should finally be\nable to catch that hard-to-get\lPokémon…$"

SlateportCity_Mart_EventScript_OtherClerk::
# 45 "data/maps/SlateportCity_Mart/scripts.pory"
	lock
# 46 "data/maps/SlateportCity_Mart/scripts.pory"
	faceplayer
# 47 "data/maps/SlateportCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 48 "data/maps/SlateportCity_Mart/scripts.pory"
	waitmessage
# 49 "data/maps/SlateportCity_Mart/scripts.pory"
	pokemart SlateportCity_Mart_OtherClerk_Pokemart
# 50 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 51 "data/maps/SlateportCity_Mart/scripts.pory"
	release
	end


	.align 2
# 55 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_OtherClerk_Pokemart:
# 56 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 57 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_WATER_STONE
# 58 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 59 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 60 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MOON_STONE
# 61 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 62 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ICE_STONE
# 63 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 64 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HARBOR_MAIL
	.2byte ITEM_NONE
