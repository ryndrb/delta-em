# 1 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_MapScripts::
# 5 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_PokemonCenter_1F_OnTransition
# 6 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_OnTransition:
# 10 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SLATEPORT_CITY
# 11 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 12 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 16 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	release
# 20 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_Sailor::
# 23 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon, MSGBOX_NPC
# 24 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 25 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 26 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_Woman::
# 27 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend, MSGBOX_NPC
# 28 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 29 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 30 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon:
# 31 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "Want to know the trick to battling?\pIf you ask me, it's raising different\nkinds of Pokémon in a balanced way.\pIt's no good to make just one of\nyour Pokémon strong.\pIf you end up facing a type\nthat it's weak to, it might not\lstand a chance.$"
# 32 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 33 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend:
# 34 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "You trade Pokémon with your friends,\nright?\pIf the Pokémon you trade is holding\nan item when you send it out, it'll\lmake them twice as happy!$"
