OldaleTown_House2_MapScripts::
	.byte 0

OldaleTown_House2_EventScript_Woman::
	msgbox OldaleTown_House2_Text_PokemonLevelUp, MSGBOX_NPC
	end

OldaleTown_House2_EventScript_Man::
	msgbox OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon, MSGBOX_NPC
	end

OldaleTown_House2_Text_PokemonLevelUp:
	.string "Pokémon grow stronger by battling\nand leveling up.$"

OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon:
	.string "The stronger your Pokémon become,\nthe farther you'll be able to travel!$"

