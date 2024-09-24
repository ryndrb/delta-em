.set LOCALID_NURSE, 1

PacifidlogTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

PacifidlogTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_PACIFIDLOG_TOWN
	end

PacifidlogTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

PacifidlogTown_PokemonCenter_1F_EventScript_Girl::
	msgbox PacifidlogTown_PokemonCenter_1F_Text_WhatColorTrainerCard, MSGBOX_NPC
	end

PacifidlogTown_PokemonCenter_1F_EventScript_Woman::
	msgbox PacifidlogTown_PokemonCenter_1F_Text_OnColonyOfCorsola, MSGBOX_NPC
	end

PacifidlogTown_PokemonCenter_1F_EventScript_OldMan::
	msgbox PacifidlogTown_PokemonCenter_1F_Text_AncestorsLivedOnBoats, MSGBOX_NPC
	end

PacifidlogTown_PokemonCenter_1F_Text_WhatColorTrainerCard:
	.string "What color is your Trainer Card?\n"
	.string "Mine's copper!$"

PacifidlogTown_PokemonCenter_1F_Text_OnColonyOfCorsola:
	.string "Pacifidlog Town floats on top of\n"
	.string "a colony of Corsola.\p"
	.string "If I told you that, would you believe\n"
	.string "me?$"

PacifidlogTown_PokemonCenter_1F_Text_AncestorsLivedOnBoats:
	.string "The ancestors of the people in\n"
	.string "Pacifidlog were said to have been\l"
	.string "born on boats and then lived and died \l"
	.string "aboard them.\p"
	.string "I understand that they lived that way\n"
	.string "because they were searching for\l"
	.string "something.$"

PacifidlogTown_PokemonCenter_1F_EventScript_TMExplosion::
	lock
	faceplayer
	checkitem ITEM_TM_EXPLOSION, 1
	compare VAR_RESULT, 0
	goto_if_eq PacifidlogTown_PokemonCenter_1F_EventScript_TMExplosion_2
PacifidlogTown_PokemonCenter_1F_EventScript_TMExplosion_1:
	msgbox PacifidlogTown_PokemonCenter_1F_EventScript_TMExplosion_Text_1
	closemessage
	release
	end

PacifidlogTown_PokemonCenter_1F_EventScript_TMExplosion_2:
	msgbox PacifidlogTown_PokemonCenter_1F_EventScript_TMExplosion_Text_0
	delay 8
	giveitem ITEM_TM_EXPLOSION
	goto PacifidlogTown_PokemonCenter_1F_EventScript_TMExplosion_1


PacifidlogTown_PokemonCenter_1F_EventScript_TMExplosion_Text_0:
	.string "I don't intend to be going nowhere fast\nin the sticks like this forever.\pYou watch me, I'll get out to the city\nand become a huge hit.\pSeriously, I'm going to cause a huge\nexplosion of popularity!\p… … … … … …\n… … … … … …\l… … … … … …\pIf you overheard that, I'll happily give\nyou this TM.$"

PacifidlogTown_PokemonCenter_1F_EventScript_TMExplosion_Text_1:
	.string "For a long time, I've taught Pokémon\nhow to use Explosion, but I have yet\lto ignite my own explosion…\pMaybe it's because deep down, I would\nrather stay here…$"
