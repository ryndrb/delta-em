# 1 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_MapScripts::
# 5 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_PokemonCenter_1F_OnTransition
# 6 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_OnTransition:
# 10 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PACIFIDLOG_TOWN
# 11 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	end
# 12 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 13 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_EventScript_Nurse::
# 14 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 15 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 16 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 17 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 18 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	release
# 19 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	end
# 20 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 21 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_EventScript_Girl::
# 22 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_Text_WhatColorTrainerCard, MSGBOX_NPC
# 23 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	end
# 24 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 25 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_EventScript_Woman::
# 26 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_Text_OnColonyOfCorsola, MSGBOX_NPC
# 27 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	end
# 28 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 29 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_EventScript_OldMan::
# 30 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_Text_AncestorsLivedOnBoats, MSGBOX_NPC
# 31 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	end
# 32 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 33 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_Text_WhatColorTrainerCard:
# 34 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "What color is your Trainer Card?\n"
# 35 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "Mine's copper!$"
# 36 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 37 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_Text_OnColonyOfCorsola:
# 38 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "Pacifidlog Town floats on top of\n"
# 39 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "a colony of Corsola.\p"
# 40 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "If I told you that, would you believe\n"
# 41 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "me?$"
# 42 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"

# 43 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
PacifidlogTown_PokemonCenter_1F_Text_AncestorsLivedOnBoats:
# 44 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "The ancestors of the people in\n"
# 45 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "Pacifidlog were said to have been\l"
# 46 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "born on boats and then lived and died \l"
# 47 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "aboard them.\p"
# 48 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "I understand that they lived that way\n"
# 49 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "because they were searching for\l"
# 50 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "something.$"

PacifidlogTown_PokemonCenter_1F_EventScript_TMExplosion::
# 56 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	lock
# 57 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 58 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	checkitem ITEM_TM_EXPLOSION, 1
# 59 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PacifidlogTown_PokemonCenter_1F_EventScript_TMExplosion_2
PacifidlogTown_PokemonCenter_1F_EventScript_TMExplosion_1:
# 64 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_EventScript_TMExplosion_Text_1
# 65 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 66 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	release
	end

PacifidlogTown_PokemonCenter_1F_EventScript_TMExplosion_2:
# 60 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	msgbox PacifidlogTown_PokemonCenter_1F_EventScript_TMExplosion_Text_0
# 61 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	delay 8
# 62 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_TM_EXPLOSION
	goto PacifidlogTown_PokemonCenter_1F_EventScript_TMExplosion_1


PacifidlogTown_PokemonCenter_1F_EventScript_TMExplosion_Text_0:
# 60 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "I don't intend to be going nowhere fast\nin the sticks like this forever.\pYou watch me, I'll get out to the city\nand become a huge hit.\pSeriously, I'm going to cause a huge\nexplosion of popularity!\p… … … … … …\n… … … … … …\l… … … … … …\pIf you overheard that, I'll happily give\nyou this TM.$"

PacifidlogTown_PokemonCenter_1F_EventScript_TMExplosion_Text_1:
# 64 "data/maps/PacifidlogTown_PokemonCenter_1F/scripts.pory"
	.string "For a long time, I've taught Pokémon\nhow to use Explosion, but I have yet\lto ignite my own explosion…\pMaybe it's because deep down, I would\nrather stay here…$"
