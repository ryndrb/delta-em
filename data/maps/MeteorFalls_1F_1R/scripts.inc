# 1 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 2 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_TABITHA, 5
# 3 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_MAGMA_GRUNT_2, 6
# 4 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_ARCHIE, 7
# 5 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_AQUA_GRUNT_1, 8
# 6 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_AQUA_GRUNT_2, 9
# 7 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 8 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_MapScripts::
# 9 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MeteorFalls_1F_1R_OnLoad
# 10 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MeteorFalls_1F_1R_OnTransition
# 11 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MeteorFalls_1F_1R_OnResume
# 12 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.byte 0
# 13 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 14 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_OnLoad::
# 15 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, MeteorFalls_1F_1R_EventScript_OpenStevensCave
# 16 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 17 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 18 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_OpenStevensCave::
# 19 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 1, METATILE_MeteorFalls_CaveEntrance_Top, TRUE
# 20 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 3, 2, METATILE_MeteorFalls_CaveEntrance_Left, TRUE
# 21 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 2, METATILE_MeteorFalls_CaveEntrance_Bottom, FALSE
# 22 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 5, 2, METATILE_MeteorFalls_CaveEntrance_Right, TRUE
# 23 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	return
# 24 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 25 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_ProfCozmo::
# 26 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 27 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	faceplayer
# 28 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_set FLAG_MET_PROF_COZMO, MeteorFalls_1F_1R_EventScript_MetCozmo
# 29 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_PROF_COZMO
# 30 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_MeetProfCozmo, MSGBOX_DEFAULT
# 31 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
# 32 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 33 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 34 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MetCozmo::
# 35 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney, MSGBOX_DEFAULT
# 36 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
# 37 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 38 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 39 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_MeetProfCozmo:
# 40 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I… I'm Cozmo…\n"
# 41 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I'm a Professor…\p"
# 42 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Team Magma asked me to guide them\n"
# 43 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "to Meteor Falls…\p"
# 44 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But they tricked me.\n"
# 45 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They even took my Meteorite away…\p"
# 46 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "And then another similar bunch,\n"
# 47 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Team Aqua showed up.\p"
# 48 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "After that…\n"
# 49 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I don't understand any of it.\p"
# 50 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But that Team Magma…\p"
# 51 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "What are they going to do with that\n"
# 52 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Meteorite at Mt. Chimney?$"
# 53 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 54 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney:
# 55 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Prof. Cozmo: But that Team Magma…\p"
# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "What are they going to do with that\n"
# 57 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Meteorite at Mt. Chimney?$"

MeteorFalls_1F_1R_OnTransition::
# 66 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 67 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_METEOR_FALLS_STATE, 1
	goto_if_eq MeteorFalls_1F_1R_OnTransition_2
MeteorFalls_1F_1R_OnTransition_1:
	end

MeteorFalls_1F_1R_OnTransition_2:
# 68 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call MeteorFalls_1F_1R_EventScript_MagmaFacingRight
	goto MeteorFalls_1F_1R_OnTransition_1


MeteorFalls_1F_1R_OnResume::
# 74 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_METEOR_FALLS_STATE, 1
	goto_if_eq MeteorFalls_1F_1R_OnResume_2
MeteorFalls_1F_1R_OnResume_1:
	end

MeteorFalls_1F_1R_OnResume_2:
# 75 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call MeteorFalls_1F_1R_EventScript_MagmaFacingRight
	goto MeteorFalls_1F_1R_OnResume_1


MeteorFalls_1F_1R_EventScript_MagmaFacingRight::
# 81 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
# 82 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setobjectmovementtype LOCALID_MAGMA_GRUNT_2, MOVEMENT_TYPE_FACE_RIGHT
	return


MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteSceneTrigger1::
# 87 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_TEMP_0, 1
# 88 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene
	return


MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteSceneTrigger2::
# 92 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_TEMP_0, 2
# 93 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene
	return


MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene::
# 97 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 98 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 8
# 99 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_METEOR_FALLS_STATE, 1
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_2
# 103 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	checkplayergender
# 104 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_10
# 107 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_1
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_9:
# 109 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 110 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceRight
# 111 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 8
# 112 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceRight
# 113 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement LOCALID_MAGMA_GRUNT_2
# 114 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_2
# 115 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 116 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 8
# 117 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_PIN
# 118 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 119 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 8
# 120 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	switch VAR_TEMP_0
# 121 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	case 1, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_19
# 122 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	case 2, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_20
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_17:
# 124 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 11
# 125 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 1
# 126 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	checkplayergender
# 127 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_26
# 141 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_6, MSGBOX_YESNO
# 142 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_37
# 152 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_8
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_25:
# 154 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 155 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_TEMP_1, 1
# 156 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call MeteorFalls_1F_1R_EventScript_DoubleBattle
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_1:
# 158 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 16
# 159 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_9
# 160 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 161 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 162 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 11
# 163 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	checkplayergender
# 164 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_6
# 167 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_11
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_5:
# 169 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 170 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 171 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 11
# 172 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_12
# 173 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 174 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 16
# 175 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	fadenewbgm MUS_DUMMY
# 176 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_13
# 177 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 178 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 8
# 179 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, MeteorFalls_1F_1R_Movement_RivalLookAround
# 180 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 11
# 181 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	checkplayergender
# 182 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_14
# 185 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_15
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_13:
# 187 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 188 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 8
# 189 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_PIN
# 190 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 191 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_2, Common_Movement_QuestionMark
# 192 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 10, Common_Movement_QuestionMark
# 193 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_QuestionMark
# 194 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 195 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 196 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitse
# 197 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 198 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceLeft
# 199 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 8
# 200 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 10, Common_Movement_WalkInPlaceLeft
# 201 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 10
# 202 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 203 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special SpawnCameraObject
# 204 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_ARCHIE
# 205 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_AQUA_GRUNT_1
# 206 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_AQUA_GRUNT_2
# 207 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1GotoScene
# 208 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieGotoScene
# 209 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2GotoScene
# 210 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MeteorFalls_1F_1R_Movement_CameraInMiddleOfScene
# 211 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement LOCALID_AQUA_GRUNT_2
# 212 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 16
# 213 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_16
# 214 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 215 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 216 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 5
# 217 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_17
# 218 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 219 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceRight
# 220 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement LOCALID_MAGMA_GRUNT_2
# 221 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_18
# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 223 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceUp
# 224 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 8
# 225 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 10, Common_Movement_WalkInPlaceDown
# 226 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 10
# 227 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 16
# 228 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_PIN
# 229 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 230 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 10
# 231 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 10, MeteorFalls_1F_1R_Movement_CozmoPushedBack
# 232 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 10
# 233 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitse
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_19
# 235 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 236 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_2, Common_Movement_WalkUp
# 237 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement LOCALID_MAGMA_GRUNT_2
# 238 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_20
# 239 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 240 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 10, MeteorFalls_1F_1R_Movement_CozmoThowMeteorite
# 241 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 10
# 242 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_LEDGE
# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_21
# 244 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 245 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 8
# 246 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_PIN
# 247 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 248 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 11
# 249 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitse
# 250 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_22
# 251 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 252 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_LEDGE
# 253 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, MeteorFalls_1F_1R_Movement_RivalGotoCozmo
# 254 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 10, MeteorFalls_1F_1R_Movement_CozmoSpin
# 255 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_2, MeteorFalls_1F_1R_Movement_StealMeteorite
# 256 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement LOCALID_MAGMA_GRUNT_2
# 257 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 16
# 258 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 259 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 8
# 260 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 261 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 11
# 262 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_23
# 263 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 264 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, MeteorFalls_1F_1R_Movement_TabithaExit
# 265 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_2, MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit
# 266 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeteorFalls_1F_1R_Movement_PlayerWatchTeamExit
# 267 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement LOCALID_MAGMA_GRUNT_2
# 268 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject 5
# 269 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_2
# 270 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_24
# 271 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_25
# 272 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_26
# 273 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 274 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 8
# 275 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieApproachPlayer
# 276 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachPlayer
# 277 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachPlayer
# 278 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeteorFalls_1F_1R_Movement_PlayerTurnToAqua
# 279 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MeteorFalls_1F_1R_Movement_CameraBackToPlayer
# 280 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement LOCALID_AQUA_GRUNT_2
# 281 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special RemoveCameraObject
# 282 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_27
# 283 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 284 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 8
# 285 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieExit
# 286 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1Exit
# 287 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2Exit
# 288 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeteorFalls_1F_1R_Movement_PlayerWatchTeamExit
# 289 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement LOCALID_AQUA_GRUNT_2
# 290 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_ARCHIE
# 291 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_AQUA_GRUNT_1
# 292 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_AQUA_GRUNT_2
# 293 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	fadedefaultbgm
# 294 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 16
# 295 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, MeteorFalls_1F_1R_Movement_RivalGotoPlayer
# 296 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 11
# 297 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	checkplayergender
# 298 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_22
# 301 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_29
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_21:
# 303 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 304 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 305 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 8
# 306 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 307 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 308 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	checkplayergender
# 309 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_30
# 312 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_31
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_29:
# 314 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_32
# 315 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 316 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, MeteorFalls_1F_1R_Movement_RivalGoCheckCozmo
# 317 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeteorFalls_1F_1R_Movement_PlayerGoCheckCozmo
# 318 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 319 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	checkplayergender
# 320 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_40
# 323 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_34
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_39:
# 325 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 326 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 327 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 8
# 328 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 329 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 330 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_35
# 331 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 332 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceUp
# 333 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 11
# 334 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_36
# 335 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 336 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 8
# 337 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
# 338 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_ARCHIE_METEOR_FALLS
# 339 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
# 340 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 341 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	clearflag FLAG_HIDE_COZMOS_HOUSE_RIVAL
# 342 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 343 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 2
# 344 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_FALLARBOR_TOWN_STATE, 3
# 345 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_LEVEL_CAP_VARIABLE, 46
# 346 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	fadescreen FADE_TO_BLACK
# 347 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 348 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	fadenewbgm MUS_DUMMY
# 349 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 128
# 350 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	warp MAP_FALLARBOR_TOWN_COZMOS_HOUSE, 4, 8
# 351 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitstate
# 352 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
	end

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_2:
# 100 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_TEMP_1, 2
# 101 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call MeteorFalls_1F_1R_EventScript_DoubleBattle
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_1

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_6:
# 165 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_10
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_5

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_10:
# 105 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_0
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_9

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_14:
# 183 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_14
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_13

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_19:
# 121 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceRight
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_17

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_20:
# 122 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_17

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_22:
# 299 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_28
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_21

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_26:
# 128 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_3, MSGBOX_YESNO
# 129 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_34
# 139 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_5
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_25

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_30:
# 310 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_30
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_29

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_34:
# 130 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_4
# 131 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 132 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 133 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 8
# 134 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 135 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 11
# 136 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
	end

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_37:
# 143 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_7
# 144 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 145 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 146 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 8
# 147 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 148 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 11
# 149 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
	end

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_40:
# 321 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_33
	goto MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_39


# 356 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_RivalLookAround:
# 357 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_up
# 358 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 359 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_down
# 360 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 361 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_left
# 362 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
	step_end

# 365 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1GotoScene:
# 366 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 366 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 366 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 366 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 366 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 366 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 367 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 367 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 367 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 367 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 368 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_right
	step_end

# 371 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieGotoScene:
# 372 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 372 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 372 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 372 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 372 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 372 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 372 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 373 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 373 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 373 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 374 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_right
	step_end

# 377 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2GotoScene:
# 378 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 378 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 378 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 378 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 378 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 378 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 378 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 378 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 379 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 379 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 380 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_right
	step_end

# 383 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_CozmoPushedBack:
# 384 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock_facing_direction
# 385 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 386 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	unlock_facing_direction
	step_end

# 389 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_CozmoThowMeteorite:
# 390 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	jump_in_place_up
	step_end

# 393 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_RivalGotoCozmo:
# 394 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 395 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 395 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
	step_end

# 398 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_CozmoSpin:
# 399 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 400 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_right
# 401 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 402 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_left
# 403 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
	step_end

# 406 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_StealMeteorite:
# 407 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_up
# 408 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 409 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 410 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
# 411 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 412 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_left
	step_end

# 415 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_TabithaExit:
# 416 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 416 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 416 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 416 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 416 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 416 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 416 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 416 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 416 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 416 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 419 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit:
# 420 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 421 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 422 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 422 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 422 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 422 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 422 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 422 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 422 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 422 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 422 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 425 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PlayerWatchTeamExit:
# 426 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 426 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 427 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_up
# 428 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 429 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_right
	step_end

# 432 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieApproachPlayer:
# 433 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 433 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 433 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 434 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
# 435 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 438 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachPlayer:
# 439 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
# 440 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 440 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 440 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 440 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 443 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachPlayer:
# 444 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 445 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 445 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 446 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 447 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 450 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PlayerTurnToAqua:
# 451 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 451 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 451 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 452 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_left
	step_end

# 455 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieExit:
# 456 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 457 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 457 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 457 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 457 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 457 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 457 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 457 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 457 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 457 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 460 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Exit:
# 461 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 461 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 461 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 461 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 461 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 461 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 461 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 461 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 461 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 464 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Exit:
# 465 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 466 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 466 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 466 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 466 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 466 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 466 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 466 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 466 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 466 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 466 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 469 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_RivalGotoPlayer:
# 470 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_down
# 471 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 474 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_RivalGoCheckCozmo:
# 475 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 476 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 477 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_up
	step_end

# 480 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PlayerGoCheckCozmo:
# 481 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 481 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 481 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 482 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
	step_end

MeteorFalls_1F_1R_EventScript_DoubleBattle::
# 486 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq MeteorFalls_1F_1R_EventScript_DoubleBattle_2
MeteorFalls_1F_1R_EventScript_DoubleBattle_1:
# 520 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 521 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	switch VAR_TEMP_0
# 522 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	case 1, MeteorFalls_1F_1R_EventScript_DoubleBattle_6
# 526 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	case 2, MeteorFalls_1F_1R_EventScript_DoubleBattle_7
MeteorFalls_1F_1R_EventScript_DoubleBattle_4:
# 529 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 530 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 8
# 531 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_PIN
# 532 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Common_Movement_QuestionMark
# 533 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitse
# 534 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 5
# 535 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_DoubleBattle_Text_2
# 536 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 8
# 537 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	checkplayergender
# 538 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_1F_1R_EventScript_DoubleBattle_13
# 541 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_DoubleBattle_Text_4
MeteorFalls_1F_1R_EventScript_DoubleBattle_12:
# 543 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 544 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 8
# 545 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	call MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle
	return

MeteorFalls_1F_1R_EventScript_DoubleBattle_2:
# 487 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	switch VAR_TEMP_0
# 488 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	case 1, MeteorFalls_1F_1R_EventScript_DoubleBattle_10
# 489 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	case 2, MeteorFalls_1F_1R_EventScript_DoubleBattle_11
MeteorFalls_1F_1R_EventScript_DoubleBattle_8:
# 491 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 11
# 492 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	checkplayergender
# 493 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_1F_1R_EventScript_DoubleBattle_17
# 506 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_DoubleBattle_Text_1, MSGBOX_YESNO
# 507 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MeteorFalls_1F_1R_EventScript_DoubleBattle_24
# 516 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_8
MeteorFalls_1F_1R_EventScript_DoubleBattle_16:
# 518 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
	goto MeteorFalls_1F_1R_EventScript_DoubleBattle_1

MeteorFalls_1F_1R_EventScript_DoubleBattle_6:
# 523 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 524 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 525 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	goto MeteorFalls_1F_1R_EventScript_DoubleBattle_4

MeteorFalls_1F_1R_EventScript_DoubleBattle_7:
# 527 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
	goto MeteorFalls_1F_1R_EventScript_DoubleBattle_4

MeteorFalls_1F_1R_EventScript_DoubleBattle_10:
# 488 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceRight
	goto MeteorFalls_1F_1R_EventScript_DoubleBattle_8

MeteorFalls_1F_1R_EventScript_DoubleBattle_11:
# 489 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
	goto MeteorFalls_1F_1R_EventScript_DoubleBattle_8

MeteorFalls_1F_1R_EventScript_DoubleBattle_13:
# 539 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_DoubleBattle_Text_3
	goto MeteorFalls_1F_1R_EventScript_DoubleBattle_12

MeteorFalls_1F_1R_EventScript_DoubleBattle_17:
# 494 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_DoubleBattle_Text_0, MSGBOX_YESNO
# 495 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MeteorFalls_1F_1R_EventScript_DoubleBattle_21
# 504 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_5
	goto MeteorFalls_1F_1R_EventScript_DoubleBattle_16

MeteorFalls_1F_1R_EventScript_DoubleBattle_21:
# 496 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_4
# 497 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 498 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 499 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 500 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 501 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
	end

MeteorFalls_1F_1R_EventScript_DoubleBattle_24:
# 508 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_7
# 509 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 510 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 511 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 512 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 513 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
	end


MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle::
# 550 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special HealPlayerParty
# 551 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	choose_mons
# 552 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_2
MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_1:
# 555 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	checkplayergender
# 556 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_5
# 563 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	switch VAR_STARTER_MON
# 564 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	case 0, MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_16
# 565 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	case 1, MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_17
# 566 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	case 2, MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_18
MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_4:
# 569 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 570 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_9
# 578 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special HealPlayerParty
	return

MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_2:
# 553 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto MeteorFalls_1F_1R_EventScript_CancelledMultiBattle
	goto MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_1

MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_5:
# 557 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	switch VAR_STARTER_MON
# 558 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	case 0, MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_12
# 559 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	case 1, MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_13
# 560 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	case 2, MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_14
	goto MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_4

MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_9:
# 571 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	fadescreen FADE_TO_BLACK
# 572 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special Script_FadeOutMapMusic
# 573 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitstate
# 574 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	special SetCB2WhiteOut
# 575 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitstate
	end

MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_12:
# 558 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	multi_2_vs_2 TRAINER_GRUNT_MAGMA_METEOR_FALLS, MeteorFalls_1F_1R_Text_MagmaGruntDefeat, TRAINER_TABITHA_METEOR_FALLS, MeteorFalls_1F_1R_Text_TabithaDefeat, PARTNER_MAY_METEOR_FALLS_TORCHIC
	goto MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_4

MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_13:
# 559 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	multi_2_vs_2 TRAINER_GRUNT_MAGMA_METEOR_FALLS, MeteorFalls_1F_1R_Text_MagmaGruntDefeat, TRAINER_TABITHA_METEOR_FALLS, MeteorFalls_1F_1R_Text_TabithaDefeat, PARTNER_MAY_METEOR_FALLS_MUDKIP
	goto MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_4

MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_14:
# 560 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	multi_2_vs_2 TRAINER_GRUNT_MAGMA_METEOR_FALLS, MeteorFalls_1F_1R_Text_MagmaGruntDefeat, TRAINER_TABITHA_METEOR_FALLS, MeteorFalls_1F_1R_Text_TabithaDefeat, PARTNER_MAY_METEOR_FALLS_TREECKO
	goto MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_4

MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_16:
# 564 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	multi_2_vs_2 TRAINER_GRUNT_MAGMA_METEOR_FALLS, MeteorFalls_1F_1R_Text_MagmaGruntDefeat, TRAINER_TABITHA_METEOR_FALLS, MeteorFalls_1F_1R_Text_TabithaDefeat, PARTNER_BRENDAN_METEOR_FALLS_TORCHIC
	goto MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_4

MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_17:
# 565 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	multi_2_vs_2 TRAINER_GRUNT_MAGMA_METEOR_FALLS, MeteorFalls_1F_1R_Text_MagmaGruntDefeat, TRAINER_TABITHA_METEOR_FALLS, MeteorFalls_1F_1R_Text_TabithaDefeat, PARTNER_BRENDAN_METEOR_FALLS_MUDKIP
	goto MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_4

MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_18:
# 566 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	multi_2_vs_2 TRAINER_GRUNT_MAGMA_METEOR_FALLS, MeteorFalls_1F_1R_Text_MagmaGruntDefeat, TRAINER_TABITHA_METEOR_FALLS, MeteorFalls_1F_1R_Text_TabithaDefeat, PARTNER_BRENDAN_METEOR_FALLS_TREECKO
	goto MeteorFalls_1F_1R_EventScript_ChoosePartyForMultiBattle_4


MeteorFalls_1F_1R_EventScript_CancelledMultiBattle::
# 583 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 584 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 11
# 585 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	checkplayergender
# 586 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MeteorFalls_1F_1R_EventScript_CancelledMultiBattle_2
# 595 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_7
# 596 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 597 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 598 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 599 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 600 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 601 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
MeteorFalls_1F_1R_EventScript_CancelledMultiBattle_1:
# 603 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
	end

MeteorFalls_1F_1R_EventScript_CancelledMultiBattle_2:
# 587 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_4
# 588 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 589 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 590 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 591 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 592 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 593 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto MeteorFalls_1F_1R_EventScript_CancelledMultiBattle_1


# 607 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_CameraInMiddleOfScene:
# 608 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 608 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 608 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 608 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 608 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 608 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 608 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 608 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 608 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 609 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 609 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
	step_end

# 612 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_CameraBackToPlayer:
# 613 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 613 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 613 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 614 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 614 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_0:
# 105 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Give it up, you bozos!\nLet the professor go!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_1:
# 107 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: Hey! You jerks!\nLet Professor Cozmo go!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_2:
# 114 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Hyuh?\pWhat have we here?\nWhy has this child suddenly appeared?$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_3:
# 128 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: {PLAYER}!\nYou came!\pWe've got to save Professor Cozmo from\nthese people!\pThere are two of them…\nAnd two of us…\p{PLAYER}, please!\nBattle together with me!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_4:
# 130 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "What!?\pAh!\nI get it!\pYou've got to get ready first?\nI'll hold them here, so hurry!!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_5:
# 139 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Thanks a mill!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_6:
# 141 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: {PLAYER}!\nYou finally made it, huh!\pWe've gotta protect the professor from\nthese lunatics or else!\pThere's two of them…\nAnd two of us, huh?\pSorry to ask, {PLAYER}, but…\nBattle alongside me!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_7:
# 143 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "So even you get nervous, huh…\pI get it.\nI'll wait till you get ready.$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_8:
# 152 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Thanks, pal!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_9:
# 159 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}Tabitha{COLOR DARK_GRAY}: Hyuhn!?\nAn unexpected development!?$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_10:
# 165 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: We did it, {PLAYER}!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_11:
# 167 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: All right!\nWe beat 'em!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_12:
# 172 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}Tabitha{COLOR DARK_GRAY}: You children!\nI would like you stay out of my way!\pTeam Magma's scientific prowess,\nMt. Chimney's energy…\pAnd the hidden power of the meteorite!\nIf we combine them all,\la super-ancient Pokémon…$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_13:
# 176 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Bwahahahahahaha!\pYou lost to this scamp?\nWhat a pathetic bunch!\pYou lazy stooges will be the downfall\nof Team Magma!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_14:
# 183 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Wh-who's there!?$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_15:
# 185 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: Who's that!?$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_16:
# 213 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}Tabitha{COLOR DARK_GRAY}: Hyahya! Even Team Aqua is\nmaking an appearance!\pThe odds do not appear to be in my\nfavor…$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_17:
# 217 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "You there!\nI'll have the meteorite now!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_18:
# 221 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: Yes, sir!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_19:
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}Cozmo{COLOR DARK_GRAY}: Wha-wha-wha-what!?$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_20:
# 238 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: Come now!\nHand over the meteorite!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_21:
# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}Cozmo{COLOR DARK_GRAY}: Augh!?$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_22:
# 250 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}{RIVAL}{COLOR DARK_GRAY}: Professor!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_23:
# 262 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}Tabitha{COLOR DARK_GRAY}: Ahyahya! The Meteorite is in\nthe palm of my hand!\pWell, well, well…\nAdios to each and every one of you!\pAt long last I'm off to {COLOR BLUE}Mt. Chimney{COLOR DARK_GRAY}!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_24:
# 270 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: Tch!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_25:
# 271 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: Archie!\nWe will go after those monsters!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_26:
# 272 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: That's right!\nWe're not letting them get away!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_27:
# 282 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: Oh? What's this?\pHaven't I seen you before?\nAt Slateport Museum?\pAh, so your name is {PLAYER}.\pLooks like you were getting into it\nwith Team Magma there, 'less my eyes\ldeceive me.\pIt's not like I'm in a position to argue\nif that's what you're up to, hey?\pBut I'll tell you this much, again…\pIf you next get in the way of Team\nAqua, you won't get off so lightly.\pSo steer clear and keep your nose\nclean, scamp!\pI imagine I'll be seeing you again!\nWaha! Bwahahahahah!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_28:
# 299 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Oh bother!\pI have no idea what's going on anymore\nwith all these people!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_29:
# 301 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: Oh man…\nWhat's with those lunatics?$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_30:
# 310 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Never mind those nuts!\nProfessor, you doing OK!?$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_31:
# 312 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Forget those guys!\nProfessor!\pHey! Professor Cozmo!\nHang in there, OK?$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_32:
# 314 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}Cozmo{COLOR DARK_GRAY}: B-but…they…\nI…only…$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_33:
# 321 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Looks like he's still pretty out of\nit…$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_34:
# 323 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: I think he's still pretty out\nof it…$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_35:
# 330 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{PLAYER}…\pNever mind what's happened!\nI've got to get the professor back to\lhis lab in Fallarbor!$"

MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Text_36:
# 334 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "OK, Profesor…\nEasy now…$"

MeteorFalls_1F_1R_EventScript_DoubleBattle_Text_0:
# 494 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: There are two of them…\nAnd two of us…\p{PLAYER}, please!\nBattle together with me!$"

MeteorFalls_1F_1R_EventScript_DoubleBattle_Text_1:
# 506 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: There's two of them…\nAnd two of us, huh?\pSorry to ask, {PLAYER}, but…\nBattle alongside me!$"

MeteorFalls_1F_1R_EventScript_DoubleBattle_Text_2:
# 535 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Ahyahyahya!\nIsn't this amusing!?\pIs it really your intention to oppose\nme, a Team Magma Admin, just the two\lof you?\pMmm…\nVery well then!\pI'll show you how terrifying adults can\nbe! Ahyahyahya!\pI'm going to give you some very\nthorough coaching!$"

MeteorFalls_1F_1R_EventScript_DoubleBattle_Text_3:
# 539 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: This'll be my first time battling\nbeside you, {PLAYER}!\pI've got to do my best!$"

MeteorFalls_1F_1R_EventScript_DoubleBattle_Text_4:
# 541 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: All right!\nLet's do this!$"

MeteorFalls_1F_1R_Text_TabithaDefeat::
# 617 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hyuhn?$"

MeteorFalls_1F_1R_Text_MagmaGruntDefeat::
# 621 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "S-so strong.$"
