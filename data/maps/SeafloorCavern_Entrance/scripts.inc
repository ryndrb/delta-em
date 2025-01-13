# 1 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 2 "data/maps/SeafloorCavern_Entrance/scripts.pory"
.set LOCALID_GRUNT, 1
# 3 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 4 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_MapScripts::
# 5 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SeafloorCavern_Entrance_OnResume
# 6 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.byte 0
# 7 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 8 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_OnResume:
# 9 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	setdivewarp MAP_UNDERWATER_SEAFLOOR_CAVERN, 6, 5
# 10 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	setescapewarp MAP_UNDERWATER_SEAFLOOR_CAVERN, 6, 5
# 11 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	end
# 12 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 13 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_Grunt::
# 14 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	lockall
# 15 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	goto_if_eq VAR_HAS_TALKED_TO_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, 1, SeafloorCavern_Entrance_EventScript_GruntSpeechShort
# 16 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitse
# 17 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	playse SE_PIN
# 18 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_ExclamationMark
# 19 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 20 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_Delay48
# 21 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 22 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	delay 20
# 23 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SeafloorCavern_Entrance_EventScript_GruntFacePlayerWest
# 24 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SeafloorCavern_Entrance_EventScript_GruntFacePlayerEast
# 25 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SeafloorCavern_Entrance_EventScript_GruntFacePlayerNorth
# 26 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	delay 30
# 27 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	setvar VAR_HAS_TALKED_TO_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, 1
# 28 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	copyobjectxytoperm LOCALID_GRUNT
# 29 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	msgbox SeafloorCavern_Entrance_Text_HearMagmaNearMossdeep, MSGBOX_DEFAULT
# 30 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	closemessage
# 31 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_WalkInPlaceUp
# 32 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 33 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	releaseall
# 34 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	end
# 35 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 36 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntSpeechShort::
# 37 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SeafloorCavern_Entrance_EventScript_GruntFacePlayerWest
# 38 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SeafloorCavern_Entrance_EventScript_GruntFacePlayerEast
# 39 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SeafloorCavern_Entrance_EventScript_GruntFacePlayerNorth
# 40 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	msgbox SeafloorCavern_Entrance_Text_HearMagmaNearMossdeepShort, MSGBOX_DEFAULT
# 41 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	closemessage
# 42 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_WalkInPlaceUp
# 43 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 44 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	releaseall
# 45 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	end
# 46 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 47 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntFacePlayerEast::
# 48 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_WalkInPlaceLeft
# 49 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 50 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	return
# 51 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 52 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntFacePlayerWest::
# 53 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_WalkInPlaceRight
# 54 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 55 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	return
# 56 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 57 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_EventScript_GruntFacePlayerNorth::
# 58 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_WalkInPlaceDown
# 59 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 60 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	return
# 61 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 62 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_Text_HearMagmaNearMossdeep:
# 63 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: Hey!\nI remember your face!\pIf you're here, it must mean that you're\nabout to mess with us again!\pA punk like you, do you really think\nyou can take on Team Aqua?\pI'd say you're too early by about a\ntrillion years!\pYou're a perfect fit for the likes of\nTeam Magma!\pSpeaking of Team Magma, I hear they\nwere spotted near Mossdeep.\pThat bunch of goons, they sure don't\nlook good near the sea!$"
# 64 "data/maps/SeafloorCavern_Entrance/scripts.pory"

# 65 "data/maps/SeafloorCavern_Entrance/scripts.pory"
SeafloorCavern_Entrance_Text_HearMagmaNearMossdeepShort:
# 66 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: A punk like you, do you really\nthink you can take on Team Aqua?\pI'd say you're too early by about a\ntrillion years!\pYou're a perfect fit for the likes of\nTeam Magma!\pSpeaking of Team Magma, I hear they\nwere spotted near Mossdeep.\pThat bunch of goons, they sure don't\nlook good near the sea!$"
