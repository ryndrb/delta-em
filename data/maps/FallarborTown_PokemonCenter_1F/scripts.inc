# 1 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
.set LOCALID_LANETTE, 4
# 4 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 5 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_MapScripts::
# 6 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_PokemonCenter_1F_OnTransition
# 7 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 8 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 9 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_OnTransition:
# 11 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_FALLARBOR_TOWN
# 12 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 13 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 14 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 15 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_Nurse::
# 16 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 17 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 18 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 19 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 20 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	release
# 21 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 22 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 23 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_Girl::
# 24 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_Text_FossilManiacEdgeOfTown, MSGBOX_NPC
# 25 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 26 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 27 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_ExpertM::
# 28 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_Text_PlantHardyTrees, MSGBOX_NPC
# 29 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 30 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 31 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_Lanette::
# 32 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	lock
# 33 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 34 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_Text_LanetteGreeting, MSGBOX_DEFAULT
# 35 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 36 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	switch VAR_FACING
# 37 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	case DIR_NORTH, FallarborTown_PokemonCenter_1F_EventScript_LanetteExitNorth
# 38 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	case DIR_WEST, FallarborTown_PokemonCenter_1F_EventScript_LanetteExitWest
# 39 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	case DIR_EAST, FallarborTown_PokemonCenter_1F_EventScript_LanetteExitWest
# 40 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 41 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 42 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_LanetteExitNorth::
# 43 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_LANETTE, FallarborTown_PokemonCenter_1F_Movement_LanetteExitNorth
# 44 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 45 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto FallarborTown_PokemonCenter_1F_EventScript_LanetteExited
# 46 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 47 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 48 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_LanetteExitWest::
# 49 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_LANETTE, FallarborTown_PokemonCenter_1F_Movement_LanetteExitWest
# 50 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 51 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	goto FallarborTown_PokemonCenter_1F_EventScript_LanetteExited
# 52 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 53 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 54 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_LanetteExited::
# 55 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	playse SE_SLIDING_DOOR
# 56 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	removeobject LOCALID_LANETTE
# 57 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_LANETTES_HOUSE_LANETTE
# 58 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	release
# 59 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	end
# 60 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 61 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Movement_LanetteExitNorth:
# 62 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 63 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 64 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 65 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 66 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 67 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 68 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 69 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	delay_8
# 70 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	step_end
# 71 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 72 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Movement_LanetteExitWest:
# 73 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 74 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 75 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 76 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 77 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 78 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 79 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 80 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	delay_8
# 81 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	step_end
# 82 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 83 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Text_LanetteGreeting:
# 84 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Oh, hello. You are?\pOkay, your name's {PLAYER}.\nI can see that you're a Trainer.\pSo that means you use the Pokémon\nStorage System I developed.\pHow I arrived at that conclusion is a\nsimple deductive process.\pYou spoke to me because you wanted to\naccess something on this PC.\pOh, I'm sorry. I'm {COLOR RED}Lanette{COLOR DARK_GRAY}.\pHonestly, I'm glad to meet you--it's\ngreat you're using the Storage System.\pIf you could, please visit me at home.\nMy house is on Route 114.$"
# 85 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 86 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Text_FossilManiacEdgeOfTown:
# 87 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "I wonder what Pokémon looked like\n"
# 88 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "long, long ago?\p"
# 89 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Maybe the Fossil Maniac at the edge\n"
# 90 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "of town will know.$"
# 91 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"

# 92 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_Text_PlantHardyTrees:
# 93 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "In the fields of Fallarbor, we plant\n"
# 94 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "seedlings of hardy trees that thrive\l"
# 95 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "even in volcanic ash.$"
