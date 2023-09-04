RustboroCity_Flat1_1F_MapScripts::
	.byte 0

RustboroCity_Flat1_1F_EventScript_Man::
	msgbox RustboroCity_Flat1_1F_Text_EveryPokemonHasAbility, MSGBOX_NPC
	end

RustboroCity_Flat1_1F_EventScript_Woman::
	msgbox RustboroCity_Flat1_1F_Text_PokemonStrange, MSGBOX_NPC
	end

RustboroCity_Flat1_1F_Text_EveryPokemonHasAbility:
	.string "Every Pokémon has a special gift or\nskill it can use.\pThis is called its Ability.$"

RustboroCity_Flat1_1F_Text_PokemonStrange:
	.string "Pokémon are such mysterious\ncreatures.\pI've been with them for years, but I\nstill find something new every day.$"

