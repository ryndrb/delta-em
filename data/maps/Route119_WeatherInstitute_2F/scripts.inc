# 1 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 2 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_GRUNT_1, 1
# 3 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_GRUNT_2, 2
# 4 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_SHELLY, 3
# 5 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_GENTLEMAN, 4
# 6 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_SCIENTIST, 5
# 7 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_MAN, 6
# 8 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_GRUNT_3, 7
# 9 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_GRUNT_4, 8
# 10 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 11 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_MapScripts::
# 12 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_2F_OnTransition
# 13 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route119_WeatherInstitute_2F_OnFrameTable
# 14 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.byte 0
# 15 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 16 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_OnTransition:
# 17 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 0, Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaHere
# 18 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 0, Route119_WeatherInstitute_2F_EventScript_SetInstituteMusic
# 19 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_ge VAR_WEATHER_INSTITUTE_STATE, 2, Route119_WeatherInstitute_2F_EventScript_SetManPosAquaGone
# 20 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_SetScientistPosGameClear
# 21 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 22 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 23 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaHere::
# 24 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 1, 5
# 25 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
# 26 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 27 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 28 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SetInstituteMusic::
# 29 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 30 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 31 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 32 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SetManPosAquaGone::
# 33 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_MAN, 12, 4
# 34 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_MAN, MOVEMENT_TYPE_FACE_RIGHT
# 35 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 36 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 37 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SetScientistPosGameClear::
# 38 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 2, 2
# 39 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_FACE_UP
# 40 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 41 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 42 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_OnFrameTable:
# 43 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	map_script_2 VAR_WEATHER_INSTITUTE_STATE, 0, Route119_WeatherInstitute_2F_EventScript_InitEvent
# 44 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.2byte 0
# 45 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 46 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Grunt5::
# 47 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_5, Route119_WeatherInstitute_2F_Text_Grunt5Intro, Route119_WeatherInstitute_2F_Text_Grunt5Defeat
# 48 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 50 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 51 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Grunt2::
# 52 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_2, Route119_WeatherInstitute_2F_Text_Grunt2Intro, Route119_WeatherInstitute_2F_Text_Grunt2Defeat
# 53 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 55 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 56 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Grunt3::
# 57 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_3, Route119_WeatherInstitute_2F_Text_Grunt3Intro, Route119_WeatherInstitute_2F_Text_Grunt3Defeat
# 58 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 60 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 61 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_GruntApproachShelly:
# 62 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 63 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 64 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 65 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 66 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 67 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 68 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 69 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 70 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 71 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 72 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 73 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 74 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 75 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_ShovePlayerOutOfWay:
# 76 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 77 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 78 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 79 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 80 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 81 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	ride_water_current_up
# 82 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_in_place_faster_down
# 83 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 84 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 85 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_PlayerReturnToPosition:
# 86 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	slide_down
# 87 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_in_place_faster_left
# 88 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 89 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 90 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_ScientistApproachPlayer:
# 91 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 92 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 93 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 94 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 95 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 96 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt2Intro:
# 97 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I came here because I heard that\nthe Institute is investigating the\lrelationship between super-ancient\lPokémon and the weather!$"
# 98 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 99 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt2Defeat:
# 100 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Our plan's being spoiled by a kid?$"
# 101 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 102 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt2PostBattle:
# 103 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "The overwhelming power of a super-\nancient Pokémon to even control the\lweather freely…!\lWe, Team Aqua, definitely need it!$"
# 104 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 105 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt3Intro:
# 106 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We're Team Aqua!\nWe appear wherever anything rare is\lfound!$"
# 107 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 108 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt3Defeat:
# 109 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You got me!$"
# 110 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 111 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt3PostBattle:
# 112 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You don't have any idea what we of Team\nMagma are working toward!\lYou stay out of our way!$"
# 113 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 114 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt5Intro:
# 115 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Huh?\nWhat's a kid doing here?$"
# 116 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 117 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt5Defeat:
# 118 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Huh?\nI lost?!$"
# 119 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 120 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt5PostBattle:
# 121 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Oh, no… I'll catch an earful for losing\nto a kid…\pMaybe I should just take a nap in bed\nand try to forget it all.$"

Route119_WeatherInstitute_2F_EventScript_InitEvent::
# 127 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	lock
# 128 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 16
# 129 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_PIN
# 130 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 131 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 132 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitse
# 133 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 16
# 134 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	special SpawnCameraObject
# 135 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route119_WeatherInstitute_2F_Movement_PanToInitEvent
# 136 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 137 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	special RemoveCameraObject
# 138 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_InitEvent_Text_0
# 139 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_InitEvent_Text_1
# 140 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 141 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_SCIENTIST, Route119_WeatherInstitute_2F_Movement_TryTakePapers
# 142 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement LOCALID_SCIENTIST
# 143 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_InitEvent_Text_2
# 144 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 145 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_EFFECTIVE
# 146 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceLeft
# 147 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_SCIENTIST, Route119_WeatherInstitute_2F_Movement_SlappedBack
# 148 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement LOCALID_SCIENTIST
# 149 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_InitEvent_Text_3
# 150 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 151 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 8
# 152 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_GENTLEMAN, Common_Movement_WalkInPlaceUp
# 153 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_MAN, Common_Movement_WalkInPlaceUp
# 154 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterDown
# 155 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement LOCALID_SCIENTIST
# 156 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_InitEvent_Text_4
# 157 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 158 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 8
# 159 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_GENTLEMAN, Common_Movement_WalkInPlaceRight
# 160 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 8
# 161 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_MAN, Common_Movement_WalkInPlaceRight
# 162 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement LOCALID_MAN
# 163 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_InitEvent_Text_5
# 164 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 165 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	special SpawnCameraObject
# 166 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route119_WeatherInstitute_2F_Movement_PanBackToPlayer
# 167 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 168 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	special RemoveCameraObject
# 169 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_WEATHER_INSTITUTE_STATE, 1
# 170 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
	end


# 174 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_PanToInitEvent:
# 175 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_diag_southwest
# 175 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_diag_southwest
# 175 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_diag_southwest
# 175 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_diag_southwest
# 176 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 176 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 176 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 176 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 176 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 176 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 176 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 176 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 176 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 176 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 176 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
	step_end

# 179 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_TryTakePapers:
# 180 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_down
# 181 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_right
	step_end

# 184 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_SlappedBack:
# 185 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 186 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_up
	step_end

# 189 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_PanBackToPlayer:
# 190 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_right
# 190 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_right
# 190 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_right
# 190 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_right
# 190 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_right
# 190 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_right
# 190 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_right
# 190 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_right
# 190 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_right
# 190 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_right
# 190 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_right
# 191 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_diag_northeast
# 191 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_diag_northeast
# 191 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_diag_northeast
# 191 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_diag_northeast
	step_end

Route119_WeatherInstitute_2F_EventScript_Shelly::
# 195 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	lock
# 196 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 16
# 197 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_PIN
# 198 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_ExclamationMark
# 199 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement LOCALID_SHELLY
# 200 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitse
# 201 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceRight
# 202 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 8
# 203 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 204 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 205 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_0
# 206 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_1
# 207 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_SHELLY_WEATHER_INSTITUTE, Route119_WeatherInstitute_2F_EventScript_Shelly_Text_2
# 208 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 8
# 209 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_3
# 210 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 211 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 8
# 212 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_SHELLY, Route119_WeatherInstitute_2F_Movement_ShellyExit1
# 213 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_WeatherInstitute_2F_Movement_PlayerMoveAside
# 214 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement LOCALID_SHELLY
# 215 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 8
# 216 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addobject LOCALID_GRUNT_3
# 217 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_GRUNT_3, Route119_WeatherInstitute_2F_Movement_GruntInAHurry
# 218 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement LOCALID_GRUNT_3
# 219 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_4
# 220 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 221 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_PIN
# 222 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_ExclamationMark
# 223 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement LOCALID_SHELLY
# 224 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_5
# 225 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 226 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_SHELLY, Route119_WeatherInstitute_2F_Movement_TeamAquaExit
# 227 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_GRUNT_3, Route119_WeatherInstitute_2F_Movement_TeamAquaExit
# 228 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 229 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement LOCALID_GRUNT_3
# 230 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_119_TEAM_AQUA
# 231 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_AQUA_GRUNT_M
# 232 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 233 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 234 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_SHELLY
# 235 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_GRUNT_4
# 236 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 237 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
# 238 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_WEATHER_INSTITUTE_STATE, 2
# 239 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_WeatherInstitute_2F_Movement_PlayerFaceWorkers
# 240 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 241 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxy LOCALID_SCIENTIST, 2, 5
# 242 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	turnobject LOCALID_SCIENTIST, DIR_SOUTH
# 243 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxy LOCALID_MAN, 1, 5
# 244 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 245 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadedefaultbgm
# 246 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 16
# 247 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_GENTLEMAN, Common_Movement_WalkRight
# 248 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement LOCALID_GENTLEMAN
# 249 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_6
# 250 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_7
# 251 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_8
# 252 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_9
# 253 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 254 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 32
# 255 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_10
# 256 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CASTFORM
# 257 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	givemon SPECIES_CASTFORM, 25, ITEM_MYSTIC_WATER
# 258 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_11
# 259 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_12
# 260 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_13
# 261 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_14
# 262 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 16
# 263 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Shelly_Text_15
# 264 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 265 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay 8
# 266 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 267 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 268 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 269 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 270 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_SCIENTIST, Route119_WeatherInstitute_2F_Movement_ScientistManExit
# 271 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_MAN, Route119_WeatherInstitute_2F_Movement_ScientistManExit
# 272 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement LOCALID_MAN
# 273 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_SCIENTIST
# 274 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_MAN
# 275 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_1F_WORKERS
# 276 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_LEVEL_CAP_VARIABLE, 55
# 277 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
	end


# 281 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_ShellyExit1:
# 282 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 282 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 282 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
	step_end

# 285 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_PlayerMoveAside:
# 286 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 287 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_up
# 288 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_in_place_down
	step_end

# 291 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_GruntInAHurry:
# 292 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 292 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 292 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 292 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 292 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 292 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 292 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 292 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 292 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
	step_end

# 295 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_TeamAquaExit:
# 296 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 296 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 296 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
	step_end

# 299 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_PlayerFaceWorkers:
# 300 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_down
# 301 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_left
# 301 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_left
	step_end

# 304 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_ScientistManExit:
# 305 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 306 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_down
# 307 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 307 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 307 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 307 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 307 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 307 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 307 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 307 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 307 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
	step_end

Route119_WeatherInstitute_2F_EventScript_GentlemanMentionWeather::
# 311 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_GentlemanMentionWeather_Text_0, MSGBOX_NPC
	end


Route119_WeatherInstitute_2F_EventScript_InitEvent_Text_0:
# 138 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Could it be?\pIs this the world…\nArchie hoped to create…$"

Route119_WeatherInstitute_2F_EventScript_InitEvent_Text_1:
# 139 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{COLOR RED}Scientist{COLOR DARK_GRAY}: Curse you!\nThe precious results of my research!\pGIVE THEM BACK!!!$"

Route119_WeatherInstitute_2F_EventScript_InitEvent_Text_2:
# 143 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Shut your mouth!$"

Route119_WeatherInstitute_2F_EventScript_InitEvent_Text_3:
# 149 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{COLOR RED}Scientist{COLOR DARK_GRAY}: Augh?!$"

Route119_WeatherInstitute_2F_EventScript_InitEvent_Text_4:
# 156 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Steady on!\nAre you all right?!$"

Route119_WeatherInstitute_2F_EventScript_InitEvent_Text_5:
# 163 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Fine, I'll give it back.\nI'll give it back, all right?\pThe awakening of the super-\nancient Pokémon will bring out\lextreme weather.\pIf this happened all over the world,\nwhat would become of Pokémon, not to\lmention people?$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_0:
# 205 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Oh my!\pI'm quite surprise to meet you here.\pYou must be the child I kept hearing\nabout.\pMy name is {COLOR RED}Shelly{COLOR DARK_GRAY}, one of Team Aqua's\nAdmin.\pI guess our paths were destined to\ncross here. Ahaha!$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_1:
# 206 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Wanna know something?\pI'm feeling healthy and downhearted\nright now.\lI can't get my head straight.\pUmm?\nHelp me take my mind off it.$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_2:
# 207 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Hah…hah…\nThat tired me out…$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_3:
# 209 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{COLOR RED}Shelly{COLOR DARK_GRAY}: …\pHmmph.\pI feel a bit more relaxed…\nThanks.\pAs a token of my gratitude, I'll tell you\none thing.\pWhen Team Aqua's…\nNo, when the illustrious Archie's\lambitions have been realized, the\lworld will truly return to its\lbeginnings, to before the birth of\lanything at all.\pThink for yourself about what to do\nwhen you're up against that reality.\pI still haven't figured out for myself\nwhat's wrong and what's right…\pSee ya.\nI'm sure I'll see you again, though.$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_4:
# 219 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: We have a situation here!\pA Team Magma mob just passed\nthe Weather Institute.\pThey appear to be headed for\nMt. Pyre!$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_5:
# 224 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{COLOR RED}Shelly{COLOR DARK_GRAY}: What?!\pWe can't waste any more time here!\nWe have to hurry to Mt. Pyre, too!\pAhaha!\nTeam Magma, just you wait!$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_6:
# 249 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{COLOR RED}Gentleman{COLOR DARK_GRAY}: Thank you, young one.\nYou helped save us from quite a pinch!$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_7:
# 250 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{COLOR RED}Man{COLOR DARK_GRAY}: You OK there, mate?$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_8:
# 251 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{COLOR RED}Scientist{COLOR DARK_GRAY}: Hah… Hah…\nThat truly was a slap in the face…$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_9:
# 252 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{COLOR RED}Gentleman{COLOR DARK_GRAY}: What could they hope to\ngain by investigating the extreme\lweather patterns of thousands of\lyears ago?$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_10:
# 255 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Oh, but I am forgetting myself!\pFirst I must thank you properly for\nyour help.\pIt might seem an odd way of rewarding\nyou, but please take this Pokémon as\lmy thanks.$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_11:
# 258 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{PLAYER} received a Castform!$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_12:
# 259 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{COLOR RED}Man{COLOR DARK_GRAY}: Castform is a Pokémon that\nchanges its form according to the\lcurrent weather conditions.\pWe have many of the living here in the\nInstitute with us.\pThey help us with out research of\nweather phenomena.$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_13:
# 260 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{COLOR RED}Gentleman{COLOR DARK_GRAY}: Indeed.\pI trust that it might help you on your\nadventure.\pBut as for the data those ruffians\nwere seeking…\pThey wanted to know about the extreme\nweather conditions that ruled\lthousands of years ago because of\lthose two super-ancient Pokémon.\pThose legendary Pokémon held the\nability to reshape the world.\pBy tapping into the boundless energies\nof the natural world, they triggered\la transformation that altered the\lvery fabric of our planet.\p{COLOR RED}Primal Groudon{COLOR DARK_GRAY} and {COLOR RED}Primal Kyogre{COLOR DARK_GRAY}…\pThis transformation caused untold\ndisturbances to the world's climate,\lleading to desolation.\pIt dried up the oceans, and arid lands\nconsumed more of the planet.\pWe refer to this transformation as\n{COLOR RED}Primal Reversion{COLOR DARK_GRAY}…$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_14:
# 261 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "The result of it is the cataclysmic\nforce that wreaked havoc upon the\lworld…\pPrimal Reversion is a mysterious form\nof Evolution, both resembling and\ldiffering from Mega Evolution…\pOr so it has been theorized.\nBut it has never been achieved by any\lPokémon other than those\lsuper-ancient Pokémon.\pAs such, it has largely faded from\nmemory as a method of Evolution.$"

Route119_WeatherInstitute_2F_EventScript_Shelly_Text_15:
# 263 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{COLOR RED}Scientist{COLOR DARK_GRAY}: If you'll excuse us then…\pWe'll be heading downstairs now , but\ntalk to us when you have a moment.\lWe want to thank you as well.$"

Route119_WeatherInstitute_2F_EventScript_GentlemanMentionWeather_Text_0:
# 311 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I've been researching rain for many\nyears, but it's ridiculous to think\lthat humans can freely change the\lweather.$"
