# 1 "data/maps/OldaleTown_Mart/scripts.pory"

# 2 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_MapScripts::
# 3 "data/maps/OldaleTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/OldaleTown_Mart/scripts.pory"

# 5 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Clerk::
# 6 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 7 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/OldaleTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_ExpandedItems
# 11 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Basic
# 12 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 13 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 14 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 15 "data/maps/OldaleTown_Mart/scripts.pory"

# 16 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 17 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Basic:
# 18 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 19 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 20 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 21 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 22 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemartlistend
# 23 "data/maps/OldaleTown_Mart/scripts.pory"

# 24 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_ExpandedItems::
# 25 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Expanded
# 26 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 27 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 28 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 29 "data/maps/OldaleTown_Mart/scripts.pory"

# 30 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 31 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Expanded:
# 32 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 33 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 34 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 35 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 36 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 37 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemartlistend
# 38 "data/maps/OldaleTown_Mart/scripts.pory"

# 39 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Woman::
# 40 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 41 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 42 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_PokeBallsInStock
# 43 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_PokeBallsAreSoldOut, MSGBOX_DEFAULT
# 44 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 45 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 46 "data/maps/OldaleTown_Mart/scripts.pory"

# 47 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_PokeBallsInStock::
# 48 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_ImGoingToBuyPokeBalls, MSGBOX_DEFAULT
# 49 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 50 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 51 "data/maps/OldaleTown_Mart/scripts.pory"

# 52 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Boy::
# 53 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_RestoreHPWithPotion, MSGBOX_NPC
# 54 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 55 "data/maps/OldaleTown_Mart/scripts.pory"

# 56 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_PokeBallsAreSoldOut:
# 57 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "The clerk says they're all sold out.\n"
# 58 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I can't buy any Poké Balls.$"
# 59 "data/maps/OldaleTown_Mart/scripts.pory"

# 60 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_ImGoingToBuyPokeBalls:
# 61 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I'm going to buy a bunch of Poké Balls\n"
# 62 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "and catch a bunch of Pokémon!$"
# 63 "data/maps/OldaleTown_Mart/scripts.pory"

# 64 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_RestoreHPWithPotion:
# 65 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "If a Pokémon gets hurt and loses its HP\n"
# 66 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "and faints, it won't be able to battle.\p"
# 67 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "To prevent your Pokémon from fainting,\n"
# 68 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "restore its HP with a Potion.$"

Mart_EventScript_PokeMart_MainClerk::
# 74 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 75 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 76 "data/maps/OldaleTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 77 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 78 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, Mart_EventScript_PokeMart_MainClerk_2
# 80 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Mart_EventScript_PokeMart_MainClerk_3
# 82 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, Mart_EventScript_PokeMart_MainClerk_4
# 84 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, Mart_EventScript_PokeMart_MainClerk_5
# 86 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Mart_EventScript_PokeMart_MainClerk_6
# 88 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Mart_EventScript_PokeMart_MainClerk_7
# 91 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart Mart_PokeMart_Main_NoBadge
Mart_EventScript_PokeMart_MainClerk_1:
# 93 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 94 "data/maps/OldaleTown_Mart/scripts.pory"
	release
	end

Mart_EventScript_PokeMart_MainClerk_2:
# 79 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart Mart_PokeMart_Main_6thBadge
	goto Mart_EventScript_PokeMart_MainClerk_1

Mart_EventScript_PokeMart_MainClerk_3:
# 81 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart Mart_PokeMart_Main_5thBadge
	goto Mart_EventScript_PokeMart_MainClerk_1

Mart_EventScript_PokeMart_MainClerk_4:
# 83 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart Mart_PokeMart_Main_4thBadge
	goto Mart_EventScript_PokeMart_MainClerk_1

Mart_EventScript_PokeMart_MainClerk_5:
# 85 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart Mart_PokeMart_Main_3rdBadge
	goto Mart_EventScript_PokeMart_MainClerk_1

Mart_EventScript_PokeMart_MainClerk_6:
# 87 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart Mart_PokeMart_Main_2ndBadge
	goto Mart_EventScript_PokeMart_MainClerk_1

Mart_EventScript_PokeMart_MainClerk_7:
# 89 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart Mart_PokeMart_Main_1stBadge
	goto Mart_EventScript_PokeMart_MainClerk_1


	.align 2
# 98 "data/maps/OldaleTown_Mart/scripts.pory"
Mart_PokeMart_Main_NoBadge:
# 99 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_RED_CARD
# 100 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
	.2byte ITEM_NONE

	.align 2
# 103 "data/maps/OldaleTown_Mart/scripts.pory"
Mart_PokeMart_Main_1stBadge:
# 104 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_RED_CARD
# 105 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 106 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 107 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 108 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 109 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
	.2byte ITEM_NONE

	.align 2
# 112 "data/maps/OldaleTown_Mart/scripts.pory"
Mart_PokeMart_Main_2ndBadge:
# 113 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_RED_CARD
# 114 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 115 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 116 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 117 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 118 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 119 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
	.2byte ITEM_NONE

	.align 2
# 122 "data/maps/OldaleTown_Mart/scripts.pory"
Mart_PokeMart_Main_3rdBadge:
# 123 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 124 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_RED_CARD
# 125 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 126 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 127 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 128 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 129 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 130 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ELECTRIC_SEED
# 131 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 132 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MISTY_SEED
# 133 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PSYCHIC_SEED
	.2byte ITEM_NONE

	.align 2
# 136 "data/maps/OldaleTown_Mart/scripts.pory"
Mart_PokeMart_Main_4thBadge:
# 137 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 138 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_RED_CARD
# 139 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 140 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 141 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 142 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 143 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 144 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 145 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 146 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ELECTRIC_SEED
# 147 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 148 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MISTY_SEED
# 149 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PSYCHIC_SEED
	.2byte ITEM_NONE

	.align 2
# 152 "data/maps/OldaleTown_Mart/scripts.pory"
Mart_PokeMart_Main_5thBadge:
# 153 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 154 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_RED_CARD
# 155 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 156 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 157 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 158 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 159 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 160 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 161 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 162 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_BLUNDER_POLICY
# 163 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 164 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ELECTRIC_SEED
# 165 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 166 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MISTY_SEED
# 167 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PSYCHIC_SEED
	.2byte ITEM_NONE

	.align 2
# 170 "data/maps/OldaleTown_Mart/scripts.pory"
Mart_PokeMart_Main_6thBadge:
# 171 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 172 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_RED_CARD
# 173 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 174 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 175 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 176 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_SNOWBALL
# 177 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 178 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 179 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 180 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_BLUNDER_POLICY
# 181 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 182 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ELECTRIC_SEED
# 183 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 184 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MISTY_SEED
# 185 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PSYCHIC_SEED
	.2byte ITEM_NONE
