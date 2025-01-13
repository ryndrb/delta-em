# 1 "data/maps/SouthernIsland_Interior/scripts.pory"

# 2 "data/maps/SouthernIsland_Interior/scripts.pory"
.set LOCALID_LATI, 2
# 3 "data/maps/SouthernIsland_Interior/scripts.pory"
.set LOCALID_LATIOS, 3
# 4 "data/maps/SouthernIsland_Interior/scripts.pory"

# 5 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_MapScripts::
# 6 "data/maps/SouthernIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SouthernIsland_Interior_OnResume
# 7 "data/maps/SouthernIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SouthernIsland_Interior_OnTransition
# 8 "data/maps/SouthernIsland_Interior/scripts.pory"
	.byte 0
# 9 "data/maps/SouthernIsland_Interior/scripts.pory"

# 10 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_OnResume:
# 11 "data/maps/SouthernIsland_Interior/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, SouthernIsland_Interior_EventScript_TryRemoveLati
# 12 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 13 "data/maps/SouthernIsland_Interior/scripts.pory"

# 14 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_TryRemoveLati::
# 15 "data/maps/SouthernIsland_Interior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 16 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 17 "data/maps/SouthernIsland_Interior/scripts.pory"
	removeobject LOCALID_LATI
# 18 "data/maps/SouthernIsland_Interior/scripts.pory"
	return
# 19 "data/maps/SouthernIsland_Interior/scripts.pory"

# 20 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_OnTransition:
# 21 "data/maps/SouthernIsland_Interior/scripts.pory"
	call_if_eq VAR_ROAMER_POKEMON, 0, SouthernIsland_Interior_EventScript_SetUpLatios
# 22 "data/maps/SouthernIsland_Interior/scripts.pory"
	call_if_ne VAR_ROAMER_POKEMON, 0, SouthernIsland_Interior_EventScript_SetUpLatias
# 23 "data/maps/SouthernIsland_Interior/scripts.pory"
	call SouthernIsland_Interior_EventScript_SetUpPlayerGfx
# 24 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 25 "data/maps/SouthernIsland_Interior/scripts.pory"

# 26 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetUpLatios::
# 27 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_LATIOS
# 28 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_TEMP_4, SPECIES_LATIOS
# 29 "data/maps/SouthernIsland_Interior/scripts.pory"
	return
# 30 "data/maps/SouthernIsland_Interior/scripts.pory"

# 31 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetUpLatias::
# 32 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_LATIAS
# 33 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_TEMP_4, SPECIES_LATIAS
# 34 "data/maps/SouthernIsland_Interior/scripts.pory"
	return
# 35 "data/maps/SouthernIsland_Interior/scripts.pory"

# 36 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetUpPlayerGfx::
# 37 "data/maps/SouthernIsland_Interior/scripts.pory"
	checkplayergender
# 38 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SouthernIsland_Interior_EventScript_SetBrendanGfx
# 39 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, SouthernIsland_Interior_EventScript_SetMayGfx
# 40 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 41 "data/maps/SouthernIsland_Interior/scripts.pory"

# 42 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetBrendanGfx::
# 43 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 44 "data/maps/SouthernIsland_Interior/scripts.pory"
	return
# 45 "data/maps/SouthernIsland_Interior/scripts.pory"

# 46 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetMayGfx::
# 47 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 48 "data/maps/SouthernIsland_Interior/scripts.pory"
	return
# 49 "data/maps/SouthernIsland_Interior/scripts.pory"

# 50 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_TryLatiEncounter::
# 51 "data/maps/SouthernIsland_Interior/scripts.pory"
	lockall
# 52 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_0x8008, 12  @ Player's Y coordinate. Not read
# 53 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto SouthernIsland_Interior_EventScript_Lati
# 54 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 55 "data/maps/SouthernIsland_Interior/scripts.pory"

# 56 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Lati::
# 57 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_set FLAG_TEMP_2, SouthernIsland_Interior_EventScript_Sign
# 58 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_set FLAG_DEFEATED_LATIAS_OR_LATIOS, SouthernIsland_Interior_EventScript_Sign
# 59 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_set FLAG_CAUGHT_LATIAS_OR_LATIOS, SouthernIsland_Interior_EventScript_Sign
# 60 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_SOUTHERN_ISLAND, SouthernIsland_Interior_EventScript_Sign
# 61 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_ENCOUNTERED_LATIAS_OR_LATIOS
# 62 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_TEMP_2
# 63 "data/maps/SouthernIsland_Interior/scripts.pory"
	special SpawnCameraObject
# 64 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SouthernIsland_Interior_Movement_CameraPanUp
# 65 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement 0
# 66 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 50
# 67 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitse
# 68 "data/maps/SouthernIsland_Interior/scripts.pory"
	playmoncry VAR_TEMP_4, CRY_MODE_NORMAL
# 69 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 30
# 70 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmoncry
# 71 "data/maps/SouthernIsland_Interior/scripts.pory"
	addobject LOCALID_LATI
# 72 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 30
# 73 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SouthernIsland_Interior_Movement_CameraPanDown
# 74 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement LOCALID_LATI, SouthernIsland_Interior_Movement_LatiApproach
# 75 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement 0
# 76 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 50
# 77 "data/maps/SouthernIsland_Interior/scripts.pory"
	special RemoveCameraObject
# 78 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_LATI
# 79 "data/maps/SouthernIsland_Interior/scripts.pory"
	call_if_eq VAR_ROAMER_POKEMON, 0, SouthernIsland_Interior_EventScript_SetLatiosBattleVars
# 80 "data/maps/SouthernIsland_Interior/scripts.pory"
	call_if_ne VAR_ROAMER_POKEMON, 0, SouthernIsland_Interior_EventScript_SetLatiasBattleVars
# 81 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 82 "data/maps/SouthernIsland_Interior/scripts.pory"
	special BattleSetup_StartLatiBattle
# 83 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitstate
# 84 "data/maps/SouthernIsland_Interior/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 85 "data/maps/SouthernIsland_Interior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 86 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SouthernIsland_Interior_EventScript_LatiDefeated
# 87 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SouthernIsland_Interior_EventScript_RanFromLati
# 88 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SouthernIsland_Interior_EventScript_RanFromLati
# 89 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_CAUGHT_LATIAS_OR_LATIOS
# 90 "data/maps/SouthernIsland_Interior/scripts.pory"
	releaseall
# 91 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 92 "data/maps/SouthernIsland_Interior/scripts.pory"

# 93 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_LatiDefeated::
# 94 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_DEFEATED_LATIAS_OR_LATIOS
# 95 "data/maps/SouthernIsland_Interior/scripts.pory"
	copyvar VAR_0x8004, VAR_TEMP_4
# 96 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 97 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 98 "data/maps/SouthernIsland_Interior/scripts.pory"

# 99 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_RanFromLati::
# 100 "data/maps/SouthernIsland_Interior/scripts.pory"
	copyvar VAR_0x8004, VAR_TEMP_4
# 101 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 102 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 103 "data/maps/SouthernIsland_Interior/scripts.pory"

# 104 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Sign::
# 105 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_Text_Sign, MSGBOX_DEFAULT
# 106 "data/maps/SouthernIsland_Interior/scripts.pory"
	releaseall
# 107 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 108 "data/maps/SouthernIsland_Interior/scripts.pory"

# 109 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetLatiosBattleVars::
# 110 "data/maps/SouthernIsland_Interior/scripts.pory"
	seteventmon SPECIES_LATIOS, 50, ITEM_SOUL_DEW
# 111 "data/maps/SouthernIsland_Interior/scripts.pory"
	return
# 112 "data/maps/SouthernIsland_Interior/scripts.pory"

# 113 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetLatiasBattleVars::
# 114 "data/maps/SouthernIsland_Interior/scripts.pory"
	seteventmon SPECIES_LATIAS, 50, ITEM_SOUL_DEW
# 115 "data/maps/SouthernIsland_Interior/scripts.pory"
	return
# 116 "data/maps/SouthernIsland_Interior/scripts.pory"

# 117 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_Movement_CameraPanUp:
# 118 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 119 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 120 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 121 "data/maps/SouthernIsland_Interior/scripts.pory"
	step_end
# 122 "data/maps/SouthernIsland_Interior/scripts.pory"

# 123 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_Movement_CameraPanDown:
# 124 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 125 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 126 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 127 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 128 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 129 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 130 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 131 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 132 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 133 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 134 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_in_place_faster_up
# 135 "data/maps/SouthernIsland_Interior/scripts.pory"
	step_end
# 136 "data/maps/SouthernIsland_Interior/scripts.pory"

# 137 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_Movement_LatiApproach:
# 138 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 139 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 140 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 141 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 142 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 143 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 144 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 145 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 146 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 147 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 148 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 149 "data/maps/SouthernIsland_Interior/scripts.pory"
	step_end

SouthernIsland_Interior_EventScript_LatiosTrigger1::
# 158 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_TEMP_0, 1
# 159 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto SouthernIsland_Interior_EventScript_Latios
	return


SouthernIsland_Interior_EventScript_LatiosTrigger2::
# 163 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_TEMP_0, 2
# 164 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto SouthernIsland_Interior_EventScript_Latios
	return


SouthernIsland_Interior_EventScript_LatiosTrigger3::
# 168 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_TEMP_0, 3
# 169 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto SouthernIsland_Interior_EventScript_Latios
	return


SouthernIsland_Interior_EventScript_Latios::
# 173 "data/maps/SouthernIsland_Interior/scripts.pory"
	lock
# 174 "data/maps/SouthernIsland_Interior/scripts.pory"
	playse SE_EXIT
# 175 "data/maps/SouthernIsland_Interior/scripts.pory"
	addobject 4
# 176 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitse
# 177 "data/maps/SouthernIsland_Interior/scripts.pory"
	switch VAR_TEMP_0
# 178 "data/maps/SouthernIsland_Interior/scripts.pory"
	case 1, SouthernIsland_Interior_EventScript_Latios_3
# 179 "data/maps/SouthernIsland_Interior/scripts.pory"
	case 2, SouthernIsland_Interior_EventScript_Latios_4
# 180 "data/maps/SouthernIsland_Interior/scripts.pory"
	case 3, SouthernIsland_Interior_EventScript_Latios_5
SouthernIsland_Interior_EventScript_Latios_1:
# 182 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement 4, SouthernIsland_Interior_Movement_StevenApproachLatios
# 183 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 184 "data/maps/SouthernIsland_Interior/scripts.pory"
	special SpawnCameraObject
# 185 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft
# 186 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 187 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_0
# 188 "data/maps/SouthernIsland_Interior/scripts.pory"
	closemessage
# 189 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 8
# 190 "data/maps/SouthernIsland_Interior/scripts.pory"
	playmoncry SPECIES_LATIAS, CRY_MODE_NORMAL
# 191 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmoncry
# 192 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 16
# 193 "data/maps/SouthernIsland_Interior/scripts.pory"
	addobject 6
# 194 "data/maps/SouthernIsland_Interior/scripts.pory"
	addobject 5
# 195 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement 6, SouthernIsland_Interior_Movement_MagmaApproach
# 196 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement 5, SouthernIsland_Interior_Movement_MagmaApproach
# 197 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 16
# 198 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 199 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 200 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SouthernIsland_Interior_Movement_CameraMiddle
# 201 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 202 "data/maps/SouthernIsland_Interior/scripts.pory"
	special RemoveCameraObject
# 203 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_1
# 204 "data/maps/SouthernIsland_Interior/scripts.pory"
	closemessage
# 205 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 16
# 206 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_2
# 207 "data/maps/SouthernIsland_Interior/scripts.pory"
	closemessage
# 208 "data/maps/SouthernIsland_Interior/scripts.pory"
	playse SE_PIN
# 209 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 210 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement 5
# 211 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitse
# 212 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceLeft
# 213 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement 5
# 214 "data/maps/SouthernIsland_Interior/scripts.pory"
	checkplayergender
# 215 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SouthernIsland_Interior_EventScript_Latios_7
# 218 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_4
SouthernIsland_Interior_EventScript_Latios_6:
# 220 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_5, MSGBOX_YESNO
# 221 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SouthernIsland_Interior_EventScript_Latios_11
# 226 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceRight
# 227 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement 4
# 228 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_7
SouthernIsland_Interior_EventScript_Latios_10:
# 230 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 231 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement 4
# 232 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_8
# 233 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_9
# 234 "data/maps/SouthernIsland_Interior/scripts.pory"
	closemessage
# 235 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 236 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement 5
# 237 "data/maps/SouthernIsland_Interior/scripts.pory"
	special HealPlayerParty
SouthernIsland_Interior_EventScript_Latios_16:
# 239 "data/maps/SouthernIsland_Interior/scripts.pory"
	choose_mons
# 240 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne SouthernIsland_Interior_EventScript_Latios_22
# 243 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceRight
# 244 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement 4
# 245 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_7
# 246 "data/maps/SouthernIsland_Interior/scripts.pory"
	closemessage
# 247 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 248 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement 4
# 249 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SouthernIsland_Interior_EventScript_Latios_16
SouthernIsland_Interior_EventScript_Latios_14:
# 250 "data/maps/SouthernIsland_Interior/scripts.pory"
	multi_2_vs_2 TRAINER_GRUNT_MAGMA_SOUTHERN_ISLAND, SouthernIsland_Interior_EventScript_Latios_Text_10, TRAINER_COURTNEY_SOUTHERN_ISLAND, SouthernIsland_Interior_EventScript_Latios_Text_11, PARTNER_STEVEN_SOUTHERN_ISLAND
# 251 "data/maps/SouthernIsland_Interior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 252 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq SouthernIsland_Interior_EventScript_Latios_19
# 265 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_12
# 266 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_13
# 267 "data/maps/SouthernIsland_Interior/scripts.pory"
	closemessage
# 268 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 269 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement 6
# 270 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_14
# 271 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement 6, SouthernIsland_Interior_Movement_MagmaExit
# 272 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 16
# 273 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceDown
# 274 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_15
# 275 "data/maps/SouthernIsland_Interior/scripts.pory"
	closemessage
# 276 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement 6
# 277 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement 5, SouthernIsland_Interior_Movement_MagmaExit
# 278 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement 5
# 279 "data/maps/SouthernIsland_Interior/scripts.pory"
	removeobject 6
# 280 "data/maps/SouthernIsland_Interior/scripts.pory"
	removeobject 5
# 281 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 16
# 282 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_16
# 283 "data/maps/SouthernIsland_Interior/scripts.pory"
	closemessage
# 284 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceRight
# 285 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 8
# 286 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 287 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 288 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_17
# 289 "data/maps/SouthernIsland_Interior/scripts.pory"
	closemessage
# 290 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 8
# 291 "data/maps/SouthernIsland_Interior/scripts.pory"
	playse SE_USE_ITEM
# 292 "data/maps/SouthernIsland_Interior/scripts.pory"
	special HealPlayerParty
# 293 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitse
# 294 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_18
# 295 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 8
# 296 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_19
# 297 "data/maps/SouthernIsland_Interior/scripts.pory"
	closemessage
# 298 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 8
# 299 "data/maps/SouthernIsland_Interior/scripts.pory"
	playmoncry SPECIES_LATIOS, CRY_MODE_NORMAL
# 300 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmoncry
# 301 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 302 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 303 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 304 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_20
# 305 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceRight
# 306 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement 4
# 307 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_21
# 308 "data/maps/SouthernIsland_Interior/scripts.pory"
	closemessage
# 309 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 16
# 310 "data/maps/SouthernIsland_Interior/scripts.pory"
	givemon SPECIES_LATIOS, 30, ITEM_LATIOSITE
# 311 "data/maps/SouthernIsland_Interior/scripts.pory"
	playfanfare MUS_HG_RECEIVE_POKEMON
# 312 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_22
# 313 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitfanfare
# 314 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 16
# 315 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_23
# 316 "data/maps/SouthernIsland_Interior/scripts.pory"
	closemessage
# 317 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 8
# 318 "data/maps/SouthernIsland_Interior/scripts.pory"
	playmoncry SPECIES_LATIOS, CRY_MODE_NORMAL
# 319 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmoncry
# 320 "data/maps/SouthernIsland_Interior/scripts.pory"
	fadescreen FADE_TO_WHITE
# 321 "data/maps/SouthernIsland_Interior/scripts.pory"
	removeobject LOCALID_LATIOS
# 322 "data/maps/SouthernIsland_Interior/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 323 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 24
# 324 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 325 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 326 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_24
# 327 "data/maps/SouthernIsland_Interior/scripts.pory"
	closemessage
# 328 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 16
# 329 "data/maps/SouthernIsland_Interior/scripts.pory"
	giveitem ITEM_MEGA_RING
# 330 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_25
# 331 "data/maps/SouthernIsland_Interior/scripts.pory"
	closemessage
# 332 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 48
# 333 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_26
# 334 "data/maps/SouthernIsland_Interior/scripts.pory"
	closemessage
# 335 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 336 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement 4
# 337 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_27
# 338 "data/maps/SouthernIsland_Interior/scripts.pory"
	closemessage
# 339 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement 4, SouthernIsland_Interior_Movement_PlayerStevenExit
# 340 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthernIsland_Interior_Movement_PlayerStevenExit
# 341 "data/maps/SouthernIsland_Interior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 342 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 343 "data/maps/SouthernIsland_Interior/scripts.pory"
	removeobject 4
# 344 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 345 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_ROUTE118_STATE, 4
# 346 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_SOUTHERN_ISLAND_STATE, 3
# 347 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_LEVEL_CAP_VARIABLE, 54
# 348 "data/maps/SouthernIsland_Interior/scripts.pory"
	warpsilent MAP_SOUTHERN_ISLAND_EXTERIOR, 14, 20
# 349 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitstate
# 350 "data/maps/SouthernIsland_Interior/scripts.pory"
	releaseall
	end

SouthernIsland_Interior_EventScript_Latios_3:
# 178 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthernIsland_Interior_Movement_PlayerApproachLatios1
	goto SouthernIsland_Interior_EventScript_Latios_1

SouthernIsland_Interior_EventScript_Latios_4:
# 179 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthernIsland_Interior_Movement_PlayerApproachLatios2
	goto SouthernIsland_Interior_EventScript_Latios_1

SouthernIsland_Interior_EventScript_Latios_5:
# 180 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SouthernIsland_Interior_Movement_PlayerApproachLatios3
	goto SouthernIsland_Interior_EventScript_Latios_1

SouthernIsland_Interior_EventScript_Latios_7:
# 216 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_3
	goto SouthernIsland_Interior_EventScript_Latios_6

SouthernIsland_Interior_EventScript_Latios_11:
# 222 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceRight
# 223 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement 4
# 224 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_EventScript_Latios_Text_6
	goto SouthernIsland_Interior_EventScript_Latios_10

SouthernIsland_Interior_EventScript_Latios_19:
# 253 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_HIDE_SOUTHERN_ISLAND_INTERIOR_MAGMA
# 254 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_HIDE_SOUTHERN_ISLAND_INTERIOR_STEVEN
# 255 "data/maps/SouthernIsland_Interior/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_118_STEVEN
# 256 "data/maps/SouthernIsland_Interior/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_118_LATIAS
# 257 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_ROUTE118_STATE, 3
# 258 "data/maps/SouthernIsland_Interior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 259 "data/maps/SouthernIsland_Interior/scripts.pory"
	special Script_FadeOutMapMusic
# 260 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitstate
# 261 "data/maps/SouthernIsland_Interior/scripts.pory"
	special SetCB2WhiteOut
# 262 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitstate
	end

SouthernIsland_Interior_EventScript_Latios_22:
	goto SouthernIsland_Interior_EventScript_Latios_14


# 354 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_Movement_PlayerApproachLatios1:
# 355 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 356 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_in_place_right
# 357 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 357 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 358 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 358 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 358 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 358 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 358 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 358 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 359 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_right
# 359 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_right
# 360 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 360 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
	step_end

# 363 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_Movement_PlayerApproachLatios2:
# 364 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 365 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_left
# 366 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_in_place_right
# 367 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 368 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 368 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 368 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 368 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 368 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 368 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 369 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_right
# 369 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_right
# 370 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 370 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
	step_end

# 373 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_Movement_PlayerApproachLatios3:
# 374 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 375 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_in_place_left
# 376 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 376 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 377 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 377 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 377 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 377 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 377 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 377 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 377 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 377 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
	step_end

# 380 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_Movement_StevenApproachLatios:
# 381 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 382 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 382 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 382 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 382 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 382 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 382 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 382 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 382 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 383 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_left
# 384 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
	step_end

# 387 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_Movement_MagmaApproach:
# 388 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 388 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 388 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 388 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 388 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
	step_end

# 391 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_Movement_CameraMiddle:
# 392 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 392 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 392 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 392 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 393 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
	step_end

# 396 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_Movement_MagmaExit:
# 397 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 397 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 397 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 397 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 397 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 397 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
	step_end

# 400 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_Movement_PlayerStevenExit:
# 401 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 401 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 401 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 401 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 401 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 401 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
	step_end

SouthernIsland_Interior_EventScript_Latios_Text_0:
# 187 "data/maps/SouthernIsland_Interior/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: Latios…\nIt's beautiful…\pIf I were to describe such beauty\nin terms of a stone, it would be a\lWater Stone.\pNo…\nIt goes beyond that…\pIsn't its brilliance like that of a\nDawn Stone?\pIt is as fantastic as a Steel-type\nPokémon…$"

SouthernIsland_Interior_EventScript_Latios_Text_1:
# 203 "data/maps/SouthernIsland_Interior/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: Hm?\pTeam Magma, is it?\pSo Latios noticed their coming, and\nthat is why it called on us.$"

SouthernIsland_Interior_EventScript_Latios_Text_2:
# 206 "data/maps/SouthernIsland_Interior/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: …\pWho are you?$"

SouthernIsland_Interior_EventScript_Latios_Text_3:
# 216 "data/maps/SouthernIsland_Interior/scripts.pory"
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: Hah?!\pM-Mistress Courtney!\pThat pipsqueak over there is the kid\nthat I heard got in our way!\pBut that enviably unruffled-looking\nfellow there with him…\pHm. I feel like I ought to know him from\nsomewhere…\lMaybe he's a contest star?$"

SouthernIsland_Interior_EventScript_Latios_Text_4:
# 218 "data/maps/SouthernIsland_Interior/scripts.pory"
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: Hah?!\pM-Mistress Courtney!\pThat pipsqueak over there is the kid\nthat I heard got in our way!\pBut that enviably unruffled-looking\nfellow there with her…\pHm. I feel like I ought to know him from\nsomewhere…\lMaybe he's a contest star?$"

SouthernIsland_Interior_EventScript_Latios_Text_5:
# 220 "data/maps/SouthernIsland_Interior/scripts.pory"
	.string "{COLOR RED}Courtney{COLOR DARK_GRAY}: Yes.\pFor the time being…get away from me.\pThe Pokémon behind you…\pIts Mega Stone…\pNo more…no less.\pThat is what…\pThat's what we of Team Magma seek.\pHow about it?\nWill you get away from me…\lor not?$"

SouthernIsland_Interior_EventScript_Latios_Text_6:
# 224 "data/maps/SouthernIsland_Interior/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: That's right.\nFull points for the correct answer!$"

SouthernIsland_Interior_EventScript_Latios_Text_7:
# 228 "data/maps/SouthernIsland_Interior/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: Hmph!\pIt's good that you feel up to joking,\nbut this is no laughing matter.$"

SouthernIsland_Interior_EventScript_Latios_Text_8:
# 232 "data/maps/SouthernIsland_Interior/scripts.pory"
	.string "I'll take part in this battle as well.\pLet's protect Latios from these\nbeasts together.\pWe cannot allow Latios or even a\nMega Stone to fall into the hands of\lsuch villains!$"

SouthernIsland_Interior_EventScript_Latios_Text_9:
# 233 "data/maps/SouthernIsland_Interior/scripts.pory"
	.string "{COLOR RED}Courtney{COLOR DARK_GRAY}: …\pWell then…\pDeleting…$"

SouthernIsland_Interior_EventScript_Latios_Text_10:
# 250 "data/maps/SouthernIsland_Interior/scripts.pory"
	.string "That's just too strong, right?!$"

SouthernIsland_Interior_EventScript_Latios_Text_11:
# 250 "data/maps/SouthernIsland_Interior/scripts.pory"
	.string "…\nSlurp.$"

SouthernIsland_Interior_EventScript_Latios_Text_12:
# 265 "data/maps/SouthernIsland_Interior/scripts.pory"
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: Puyah?!$"

SouthernIsland_Interior_EventScript_Latios_Text_13:
# 266 "data/maps/SouthernIsland_Interior/scripts.pory"
	.string "{COLOR RED}Courtney{COLOR DARK_GRAY}: As anticipated.\pUnanticipated.\pYou.\nTarget lock…completed.\pCommencing…experiment.\pYou. Forever.\nAha…$"

SouthernIsland_Interior_EventScript_Latios_Text_14:
# 270 "data/maps/SouthernIsland_Interior/scripts.pory"
	.string "Returning home.$"

SouthernIsland_Interior_EventScript_Latios_Text_15:
# 274 "data/maps/SouthernIsland_Interior/scripts.pory"
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: W-wait for me!\nCourtne-e-ey!$"

SouthernIsland_Interior_EventScript_Latios_Text_16:
# 282 "data/maps/SouthernIsland_Interior/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: Hah…$"

SouthernIsland_Interior_EventScript_Latios_Text_17:
# 288 "data/maps/SouthernIsland_Interior/scripts.pory"
	.string "Good work, {PLAYER}.\pAh, that's right.\pWe should first heal up the Pokémon\nthat fought on our behalf, shouldn't\lwe?$"

SouthernIsland_Interior_EventScript_Latios_Text_18:
# 294 "data/maps/SouthernIsland_Interior/scripts.pory"
	.string "Your team's health was restored!$"

SouthernIsland_Interior_EventScript_Latios_Text_19:
# 296 "data/maps/SouthernIsland_Interior/scripts.pory"
	.string "You performed spectacularly.\pWe were able to protect both\nthis wonderous Pokémon and its Mega\lStone, thanks to you.$"

SouthernIsland_Interior_EventScript_Latios_Text_20:
# 304 "data/maps/SouthernIsland_Interior/scripts.pory"
	.string "And it looks as though Latios may\nhave also recognized you as a Trainer\lworthy of its trust.\pLook. It's trying to offer you its\nallegiance.\pI believe it is trying to show that it\nwants to go with you on your journey.$"

SouthernIsland_Interior_EventScript_Latios_Text_21:
# 307 "data/maps/SouthernIsland_Interior/scripts.pory"
	.string "Go on.\nHold out your hand to it.$"

SouthernIsland_Interior_EventScript_Latios_Text_22:
# 312 "data/maps/SouthernIsland_Interior/scripts.pory"
	.string "Latios joined your team!$"

SouthernIsland_Interior_EventScript_Latios_Text_23:
# 315 "data/maps/SouthernIsland_Interior/scripts.pory"
	.string "Latios is carrying a piece of Latiosite!$"

SouthernIsland_Interior_EventScript_Latios_Text_24:
# 326 "data/maps/SouthernIsland_Interior/scripts.pory"
	.string "You should take this from me…$"

SouthernIsland_Interior_EventScript_Latios_Text_25:
# 330 "data/maps/SouthernIsland_Interior/scripts.pory"
	.string "With the Mega Ring that I just gave you\nand the Mega Stones that a Pokémon\lmay hold, your Pokémon should be able\lto achieve a powerful boost, quite\lunlike any unusual form of Evolution…\lbut only if you are bound by great\laffection.\pYou will be able to achieve {COLOR BLUE}Mega\nEvolution{COLOR DARK_GRAY}.\pI suggest you try it with Latios the\nnext time that you happen to have\lthe chance in battle.$"

SouthernIsland_Interior_EventScript_Latios_Text_26:
# 333 "data/maps/SouthernIsland_Interior/scripts.pory"
	.string "Mega Evolution is a phenomenon that\nhas long been shrouded in mystery.\pWhat is a Mega Stone?\nWhat is a Key Stone?\pThe process by which bonds\nbetween Pokémon and people manifest\lin tangible power…\lHow do we explain that?\pI hope that the Mega Ring I just\ngave you might bring us one step\lcloses to finding the answer to\lthese questions.$"

SouthernIsland_Interior_EventScript_Latios_Text_27:
# 337 "data/maps/SouthernIsland_Interior/scripts.pory"
	.string "If that settles that…\nShould we be heading back?\pTogether with Latias, waiting so\npatiently for us there…$"
