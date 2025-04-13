# 1 "data/maps/SootopolisCity/scripts.pory"

# 2 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_EXPERT, 1
# 3 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_WOMAN_2, 2
# 4 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_KIRI, 3
# 5 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_NINJA_BOY, 4
# 6 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_BOY_1, 5
# 7 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_STEVEN, 7
# 8 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_WOMAN_1, 8
# 9 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_GROUDON, 9
# 10 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_KYOGRE, 10
# 11 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_RAYQUAZA, 11
# 12 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_MANIAC, 12
# 13 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_GIRL, 13
# 14 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_BLACK_BELT, 14
# 15 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_BOY_2, 15
# 16 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_MAXIE, 16
# 17 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_ARCHIE, 17
# 18 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_WALLACE, 18
# 19 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_RIVAL, 19
# 20 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_TABITHA, 20
# 21 "data/maps/SootopolisCity/scripts.pory"
.set LOCALID_SHELLY, 21
# 22 "data/maps/SootopolisCity/scripts.pory"

# 23 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_MapScripts::
# 24 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SootopolisCity_OnLoad
# 25 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_OnTransition
# 26 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SootopolisCity_OnResume
# 27 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_OnFrame
# 28 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SootopolisCity_OnWarp
# 29 "data/maps/SootopolisCity/scripts.pory"
	.byte 0
# 30 "data/maps/SootopolisCity/scripts.pory"

# 31 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnLoad:
# 32 "data/maps/SootopolisCity/scripts.pory"
	call_if_unset FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_LockGymDoor
# 33 "data/maps/SootopolisCity/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_EventScript_LegendariesNotArrived
# 34 "data/maps/SootopolisCity/scripts.pory"
	call_if_unset FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_LockHouseDoors
# 35 "data/maps/SootopolisCity/scripts.pory"
	end
# 36 "data/maps/SootopolisCity/scripts.pory"

# 37 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesNotArrived::
# 38 "data/maps/SootopolisCity/scripts.pory"
	end
# 39 "data/maps/SootopolisCity/scripts.pory"

# 40 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LockHouseDoors::
# 41 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 6, METATILE_Sootopolis_Door_Closed, TRUE
# 42 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 17, METATILE_Sootopolis_Door_Closed, TRUE
# 43 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 26, METATILE_Sootopolis_Door_Closed, TRUE
# 44 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 44, 17, METATILE_Sootopolis_Door_Closed, TRUE
# 45 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 8, 35, METATILE_Sootopolis_Door_Closed, TRUE
# 46 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 53, 28, METATILE_Sootopolis_Door_Closed, TRUE
# 47 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 45, 6, METATILE_Sootopolis_Door_Closed, TRUE
# 48 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 48, 25, METATILE_Sootopolis_Door_Closed, TRUE
# 49 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 51, 36, METATILE_Sootopolis_Door_Closed, TRUE
# 50 "data/maps/SootopolisCity/scripts.pory"
	return
# 51 "data/maps/SootopolisCity/scripts.pory"

# 52 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LockGymDoor::
# 53 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 31, 32, METATILE_Sootopolis_GymDoor_Closed, TRUE
# 54 "data/maps/SootopolisCity/scripts.pory"
	return
# 55 "data/maps/SootopolisCity/scripts.pory"

# 56 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnTransition:
# 57 "data/maps/SootopolisCity/scripts.pory"
    call Common_EventScript_SetupRivalGfxId
# 58 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_VISITED_SOOTOPOLIS_CITY
# 59 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_HideMapNamePopup
# 60 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_HideMapNamePopup
# 61 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetWeather
# 62 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetLayout
# 63 "data/maps/SootopolisCity/scripts.pory"
    call_if_set FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN, SootopolisCity_EventScript_RivalPos
# 64 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetBattleSpectators
# 65 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_SetBattleSpectators
# 66 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_SetBattleSpectators
# 67 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetBattleSpectators
# 68 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_SetBattleSpectators
# 69 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetAquaWallaceReturnPos
# 70 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos
# 71 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos
# 72 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetExitCaveOfOriginObjPos
# 73 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_SetOutsideGymObjPos
# 74 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 7, SootopolisCity_EventScript_SetExpertBlockCaveEntrance
# 75 "data/maps/SootopolisCity/scripts.pory"
	end
# 76 "data/maps/SootopolisCity/scripts.pory"

# 77 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_HideMapNamePopup::
# 78 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 79 "data/maps/SootopolisCity/scripts.pory"
	return
# 80 "data/maps/SootopolisCity/scripts.pory"

# 81 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_RivalPos::
# 82 "data/maps/SootopolisCity/scripts.pory"
    setobjectxyperm LOCALID_RIVAL, 32, 22
# 83 "data/maps/SootopolisCity/scripts.pory"
    setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_DOWN
# 84 "data/maps/SootopolisCity/scripts.pory"
    return
# 85 "data/maps/SootopolisCity/scripts.pory"

# 86 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetBattleSpectators::
# 87 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_KIRI, 13, 48
# 88 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_BOY_1, 46, 32
# 89 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_NINJA_BOY, 48, 41
# 90 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_WOMAN_1, 45, 43
# 91 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_KIRI, MOVEMENT_TYPE_FACE_UP
# 92 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_BOY_1, MOVEMENT_TYPE_FACE_LEFT
# 93 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_NINJA_BOY, MOVEMENT_TYPE_FACE_LEFT
# 94 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_WOMAN_1, MOVEMENT_TYPE_FACE_LEFT
# 95 "data/maps/SootopolisCity/scripts.pory"
	return
# 96 "data/maps/SootopolisCity/scripts.pory"

# 97 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetAquaWallaceReturnPos::
# 98 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 32, 35
# 99 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SHELLY, 33, 35
# 100 "data/maps/SootopolisCity/scripts.pory"
	return
# 101 "data/maps/SootopolisCity/scripts.pory"

# 102 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLayout::
# 103 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 0, SootopolisCity_EventScript_SetNormalLayout
# 104 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 7, SootopolisCity_EventScript_SetNormalLayout
# 105 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetLegendariesLayout
# 106 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_SetLegendariesLayout
# 107 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_SetLegendariesLayout
# 108 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetLegendariesLayout
# 109 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_SetLegendariesLayout
# 110 "data/maps/SootopolisCity/scripts.pory"
	return
# 111 "data/maps/SootopolisCity/scripts.pory"

# 112 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetNormalLayout::
# 113 "data/maps/SootopolisCity/scripts.pory"
	return
# 114 "data/maps/SootopolisCity/scripts.pory"

# 115 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetLegendariesLayout::
# 116 "data/maps/SootopolisCity/scripts.pory"
	setmaplayoutindex LAYOUT_SOOTOPOLIS_CITY_LEGENDS_BATTLE
# 117 "data/maps/SootopolisCity/scripts.pory"
	return
# 118 "data/maps/SootopolisCity/scripts.pory"

# 119 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetWeather::
# 120 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 0, SootopolisCity_EventScript_SetNormalWeather
# 121 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 7, SootopolisCity_EventScript_SetNormalWeather
# 122 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetDownpour
# 123 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_SetDownpour
# 124 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SKY_PILLAR_STATE, 1, Common_EventScript_SetAbnormalWeather
# 125 "data/maps/SootopolisCity/scripts.pory"
	return
# 126 "data/maps/SootopolisCity/scripts.pory"

# 127 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetNormalWeather::
# 128 "data/maps/SootopolisCity/scripts.pory"
	return
# 129 "data/maps/SootopolisCity/scripts.pory"

# 130 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetDownpour::
# 131 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_DOWNPOUR
# 132 "data/maps/SootopolisCity/scripts.pory"
	return
# 133 "data/maps/SootopolisCity/scripts.pory"

# 134 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos::
# 135 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN, SootopolisCity_EventScript_SetEnterCaveOfOriginObjPos
# 136 "data/maps/SootopolisCity/scripts.pory"
	return
# 137 "data/maps/SootopolisCity/scripts.pory"

# 138 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetEnterCaveOfOriginObjPos::
# 139 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_EXPERT, 30, 18
# 140 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_STEVEN, 32, 18
# 141 "data/maps/SootopolisCity/scripts.pory"
	return
# 142 "data/maps/SootopolisCity/scripts.pory"

# 143 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetExitCaveOfOriginObjPos::
# 144 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_EXPERT, 30, 18
# 145 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_STEVEN, 32, 18
# 146 "data/maps/SootopolisCity/scripts.pory"
	end
# 147 "data/maps/SootopolisCity/scripts.pory"

# 148 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetOutsideGymObjPos::
# 149 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_EXPERT, 31, 18
# 150 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_WALLACE, 31, 33
# 151 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_STEVEN, 29, 35
# 152 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 32, 36
# 153 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_MAXIE, 27, 35
# 154 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_TABITHA, 28, 36
# 155 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 27, 33
# 156 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SHELLY, 28, 33
# 157 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_WALLACE, MOVEMENT_TYPE_FACE_DOWN
# 158 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_DOWN
# 159 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_MAXIE, MOVEMENT_TYPE_FACE_DOWN
# 160 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_TABITHA, MOVEMENT_TYPE_FACE_LEFT
# 161 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_ARCHIE, MOVEMENT_TYPE_FACE_LEFT
# 162 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SHELLY, MOVEMENT_TYPE_FACE_LEFT
# 163 "data/maps/SootopolisCity/scripts.pory"
	return
# 164 "data/maps/SootopolisCity/scripts.pory"

# 165 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetExpertBlockCaveEntrance::
# 166 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_EXPERT, 31, 18
# 167 "data/maps/SootopolisCity/scripts.pory"
	return
# 168 "data/maps/SootopolisCity/scripts.pory"

# 169 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnWarp:
# 170 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_PlayerFaceLegendaries
# 171 "data/maps/SootopolisCity/scripts.pory"
	.2byte 0
# 172 "data/maps/SootopolisCity/scripts.pory"

# 173 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries::
# 174 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_PlayerFaceLegendaries1
# 175 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_SKY_PILLAR_STATE, 2, SootopolisCity_EventScript_PlayerFaceLegendaries2
# 176 "data/maps/SootopolisCity/scripts.pory"
	end
# 177 "data/maps/SootopolisCity/scripts.pory"

# 178 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries1::
# 179 "data/maps/SootopolisCity/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 180 "data/maps/SootopolisCity/scripts.pory"
	return
# 181 "data/maps/SootopolisCity/scripts.pory"

# 182 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_PlayerFaceLegendaries2::
# 183 "data/maps/SootopolisCity/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 184 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 3
# 185 "data/maps/SootopolisCity/scripts.pory"
	return
# 186 "data/maps/SootopolisCity/scripts.pory"

# 187 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnResume:
# 188 "data/maps/SootopolisCity/scripts.pory"
	setdivewarp MAP_UNDERWATER_SOOTOPOLIS_CITY, 9, 6
# 189 "data/maps/SootopolisCity/scripts.pory"
	end
# 190 "data/maps/SootopolisCity/scripts.pory"

# 191 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_OnFrame:
# 192 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_StartLegendariesScene
# 193 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_AfterRayquazaScene
# 194 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_StartRayquazaScene
# 195 "data/maps/SootopolisCity/scripts.pory"
	.2byte 0
# 196 "data/maps/SootopolisCity/scripts.pory"

# 197 "data/maps/SootopolisCity/scripts.pory"
@ If not at PokeCenter, assumed to have arrived via Dive
# 198 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartLegendariesScene::
# 199 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 200 "data/maps/SootopolisCity/scripts.pory"
	special StorePlayerCoordsInVars
# 201 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8004, 43, SootopolisCity_EventScript_LegendariesSceneFromDive
# 202 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8005, 32, SootopolisCity_EventScript_LegendariesSceneFromDive
# 203 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_LegendariesSceneFromPokeCenter
# 204 "data/maps/SootopolisCity/scripts.pory"
	end
# 205 "data/maps/SootopolisCity/scripts.pory"

# 206 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesSceneFromPokeCenter::
# 207 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 208 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 209 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromPokeCenter
# 210 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 211 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 212 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 213 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 214 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_ABNORMAL
# 215 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 216 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, FALSE @ Just do Groudon/Kyogre fight scene
# 217 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 218 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 219 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, Common_Movement_WalkInPlaceFasterLeft
# 220 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, Common_Movement_WalkInPlaceFasterRight
# 221 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 222 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 223 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 224 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 225 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 226 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
# 227 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 228 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 229 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 230 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 231 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 232 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 233 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 234 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 235 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 236 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 237 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 238 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 239 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreDefend
# 240 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonAttack
# 241 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 242 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 243 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 244 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 245 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 246 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 247 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 248 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 249 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 250 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 251 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 252 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 253 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 254 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
# 255 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 256 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 257 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 258 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 259 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 260 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 261 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 262 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 263 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 264 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 265 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 266 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreIdle
# 267 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonIdle
# 268 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanBackToPokeCenter
# 269 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 270 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 271 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 2
# 272 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 273 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 274 "data/maps/SootopolisCity/scripts.pory"
	end
# 275 "data/maps/SootopolisCity/scripts.pory"

# 276 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanToActionFromPokeCenter:
# 277 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 278 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 279 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 280 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 281 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 282 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 283 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 284 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 285 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 286 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 287 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 288 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 289 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 290 "data/maps/SootopolisCity/scripts.pory"

# 291 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanBackToPokeCenter:
# 292 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 293 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 294 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 295 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 296 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 297 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 298 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 299 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 300 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 301 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 302 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 303 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 304 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 305 "data/maps/SootopolisCity/scripts.pory"

# 306 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendariesSceneFromDive::
# 307 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 308 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 309 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromDive
# 310 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 311 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 312 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 313 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 314 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_ABNORMAL
# 315 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 316 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, FALSE @ Just do Groudon/Kyogre fight scene
# 317 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 318 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 319 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, Common_Movement_WalkInPlaceFasterLeft
# 320 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, Common_Movement_WalkInPlaceFasterRight
# 321 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 322 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 323 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 324 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 325 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 326 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
# 327 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 328 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 329 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 330 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 331 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 332 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 333 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 334 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 335 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 336 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 337 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 338 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 339 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreDefend
# 340 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonAttack
# 341 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 342 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 343 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 344 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 345 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 346 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 347 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 348 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 349 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 350 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 351 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 352 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 353 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 354 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
# 355 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 356 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 357 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 358 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 359 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 360 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 361 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 362 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
# 363 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
# 364 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 365 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 366 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreIdle
# 367 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonIdle
# 368 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanBackToDive
# 369 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 370 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 371 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 2
# 372 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 373 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 374 "data/maps/SootopolisCity/scripts.pory"
	end
# 375 "data/maps/SootopolisCity/scripts.pory"

# 376 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanToActionFromDive:
# 377 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 378 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 379 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 380 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 381 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 382 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 383 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 384 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 385 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 386 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 387 "data/maps/SootopolisCity/scripts.pory"

# 388 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanBackToDive:
# 389 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 390 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 391 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 392 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 393 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 394 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 395 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 396 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 397 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 398 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 399 "data/maps/SootopolisCity/scripts.pory"

# 400 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreAttack:
# 401 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 402 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 403 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 404 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 405 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 406 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 407 "data/maps/SootopolisCity/scripts.pory"
	init_affine_anim
# 408 "data/maps/SootopolisCity/scripts.pory"
	walk_left_affine
# 409 "data/maps/SootopolisCity/scripts.pory"
	clear_affine_anim
# 410 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 411 "data/maps/SootopolisCity/scripts.pory"

# 412 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreDefend:
# 413 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 414 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 415 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 416 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 417 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 418 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 419 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 420 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 421 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 422 "data/maps/SootopolisCity/scripts.pory"
	init_affine_anim
# 423 "data/maps/SootopolisCity/scripts.pory"
	walk_left_affine
# 424 "data/maps/SootopolisCity/scripts.pory"
	clear_affine_anim
# 425 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 426 "data/maps/SootopolisCity/scripts.pory"

# 427 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreMoveBack:
# 428 "data/maps/SootopolisCity/scripts.pory"
	lock_facing_direction
# 429 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 430 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 431 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 432 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 433 "data/maps/SootopolisCity/scripts.pory"
	unlock_facing_direction
# 434 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 435 "data/maps/SootopolisCity/scripts.pory"

# 436 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreIdle:
# 437 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 438 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 439 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 440 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 441 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 442 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_left
# 443 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 444 "data/maps/SootopolisCity/scripts.pory"

# 445 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonAttack:
# 446 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 447 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 448 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 449 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 450 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 451 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 452 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_right
# 453 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 454 "data/maps/SootopolisCity/scripts.pory"

# 455 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonDefend:
# 456 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 457 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 458 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 459 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 460 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 461 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 462 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 463 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 464 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 465 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_right
# 466 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 467 "data/maps/SootopolisCity/scripts.pory"

# 468 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonMoveBack:
# 469 "data/maps/SootopolisCity/scripts.pory"
	lock_facing_direction
# 470 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 471 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 472 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 473 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 474 "data/maps/SootopolisCity/scripts.pory"
	unlock_facing_direction
# 475 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 476 "data/maps/SootopolisCity/scripts.pory"

# 477 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_GroudonIdle:
# 478 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 479 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 480 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 481 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 482 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 483 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_slow_right
# 484 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 485 "data/maps/SootopolisCity/scripts.pory"

# 486 "data/maps/SootopolisCity/scripts.pory"
@ If not at PokeCenter, assumed to have arrived via Dive
# 487 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartRayquazaScene::
# 488 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 489 "data/maps/SootopolisCity/scripts.pory"
	special StorePlayerCoordsInVars
# 490 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_131_LADY
# 491 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8004, 43, SootopolisCity_EventScript_RayquazaSceneFromDive
# 492 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ne VAR_0x8005, 32, SootopolisCity_EventScript_RayquazaSceneFromDive
# 493 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_RayquazaSceneFromPokeCenter
# 494 "data/maps/SootopolisCity/scripts.pory"
	end
# 495 "data/maps/SootopolisCity/scripts.pory"

# 496 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_RayquazaSceneFromPokeCenter::
# 497 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 498 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 499 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromPokeCenter
# 500 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 501 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 502 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 503 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 504 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetRoughWater
# 505 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_GROUDON
# 506 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_KYOGRE
# 507 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_RAYQUAZA
# 508 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, TRUE
# 509 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 510 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 511 "data/maps/SootopolisCity/scripts.pory"
	playse SE_THUNDER
# 512 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 513 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanUp
# 514 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 515 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 516 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 517 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 518 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 519 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 520 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 521 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 522 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 523 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 524 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 525 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 526 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 527 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 528 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 529 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 530 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 531 "data/maps/SootopolisCity/scripts.pory"
	waitmoncry
# 532 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_NONE
# 533 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 534 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_RAYQUAZA, SootopolisCity_Movement_RayquazaFlyOff
# 535 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 536 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_RAYQUAZA
# 537 "data/maps/SootopolisCity/scripts.pory"
	special WaitWeather
# 538 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 539 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_SYS_WEATHER_CTRL
# 540 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 3
# 541 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 542 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_ITEM_LITTLEROOT_TOWN_MEWTWONITE_X
# 543 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_ITEM_ROUTE_119_VENUSAURITE
# 544 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_ITEM_GRANITE_CAVE_STEVEN_ROOM_METAGROSSITE
# 545 "data/maps/SootopolisCity/scripts.pory"
	fadenewbgm MUS_SOOTOPOLIS
# 546 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 547 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 548 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 6
# 549 "data/maps/SootopolisCity/scripts.pory"
	warpwhitefade MAP_SOOTOPOLIS_CITY, 31, 35
# 550 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 551 "data/maps/SootopolisCity/scripts.pory"
	end
# 552 "data/maps/SootopolisCity/scripts.pory"

# 553 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_RayquazaSceneFromDive::
# 554 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 555 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 556 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromDive
# 557 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 558 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 559 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 560 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 561 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetRoughWater
# 562 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_GROUDON
# 563 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_KYOGRE
# 564 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_RAYQUAZA
# 565 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, TRUE
# 566 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 567 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 568 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 569 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanUp
# 570 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerApproachLegendaries
# 571 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 572 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 573 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 574 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 575 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 576 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 577 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 578 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 579 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 580 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 581 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 582 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 583 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 584 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 585 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 586 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 587 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 588 "data/maps/SootopolisCity/scripts.pory"
	waitmoncry
# 589 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_NONE
# 590 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 591 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_RAYQUAZA, SootopolisCity_Movement_RayquazaFlyOff
# 592 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 593 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_RAYQUAZA
# 594 "data/maps/SootopolisCity/scripts.pory"
	special WaitWeather
# 595 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 596 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_SYS_WEATHER_CTRL
# 597 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 2
# 598 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 599 "data/maps/SootopolisCity/scripts.pory"
	fadenewbgm MUS_SURF
# 600 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 601 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 602 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 6
# 603 "data/maps/SootopolisCity/scripts.pory"
	warpwhitefade MAP_SOOTOPOLIS_CITY, 31, 35
# 604 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 605 "data/maps/SootopolisCity/scripts.pory"
	end
# 606 "data/maps/SootopolisCity/scripts.pory"

# 607 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_SetRoughWater::
# 608 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 43, METATILE_Sootopolis_RoughWater, FALSE
# 609 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 43, METATILE_Sootopolis_RoughWater, FALSE
# 610 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 43, METATILE_Sootopolis_RoughWater, FALSE
# 611 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 43, METATILE_Sootopolis_RoughWater, FALSE
# 612 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 44, METATILE_Sootopolis_RoughWater, FALSE
# 613 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 44, METATILE_Sootopolis_RoughWater, FALSE
# 614 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 44, METATILE_Sootopolis_RoughWater, FALSE
# 615 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 44, METATILE_Sootopolis_RoughWater, FALSE
# 616 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 45, METATILE_Sootopolis_RoughWater, FALSE
# 617 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 45, METATILE_Sootopolis_RoughWater, FALSE
# 618 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 45, METATILE_Sootopolis_RoughWater, FALSE
# 619 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 45, METATILE_Sootopolis_RoughWater, FALSE
# 620 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 43, METATILE_Sootopolis_RoughWater, FALSE
# 621 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 43, METATILE_Sootopolis_RoughWater, FALSE
# 622 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 43, METATILE_Sootopolis_RoughWater, FALSE
# 623 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 43, METATILE_Sootopolis_RoughWater, FALSE
# 624 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 44, METATILE_Sootopolis_RoughWater, FALSE
# 625 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 44, METATILE_Sootopolis_RoughWater, FALSE
# 626 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 44, METATILE_Sootopolis_RoughWater, FALSE
# 627 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 44, METATILE_Sootopolis_RoughWater, FALSE
# 628 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 45, METATILE_Sootopolis_RoughWater, FALSE
# 629 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 45, METATILE_Sootopolis_RoughWater, FALSE
# 630 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 45, METATILE_Sootopolis_RoughWater, FALSE
# 631 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 45, METATILE_Sootopolis_RoughWater, FALSE
# 632 "data/maps/SootopolisCity/scripts.pory"
	return
# 633 "data/maps/SootopolisCity/scripts.pory"

# 634 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_RayquazaFlyOff:
# 635 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_up
# 636 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 637 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 638 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 639 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 640 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 641 "data/maps/SootopolisCity/scripts.pory"
	walk_faster_up
# 642 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 643 "data/maps/SootopolisCity/scripts.pory"

# 644 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PanUp:
# 645 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 646 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 647 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 648 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 649 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 650 "data/maps/SootopolisCity/scripts.pory"

# 651 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerApproachLegendaries:
# 652 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 653 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 654 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 655 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 656 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 657 "data/maps/SootopolisCity/scripts.pory"

# 658 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 659 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerApproachLegendariesDown:
# 660 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 661 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 662 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 663 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 664 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 665 "data/maps/SootopolisCity/scripts.pory"

# 666 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 667 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_UnusedPanUp:
# 668 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 669 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 670 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 671 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 672 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 673 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 674 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 675 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_northeast
# 676 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 677 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 678 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 679 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 680 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 681 "data/maps/SootopolisCity/scripts.pory"

# 682 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 683 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_UnusedPanBack:
# 684 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 685 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 686 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 687 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 688 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 689 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 690 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 691 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 692 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 693 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 694 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 695 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 696 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_diag_southwest
# 697 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 698 "data/maps/SootopolisCity/scripts.pory"

# 699 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CaveOfOriginExpert::
# 700 "data/maps/SootopolisCity/scripts.pory"
	lock
# 701 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 702 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 7, SootopolisCity_EventScript_ExpertPostLegendaries
# 703 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ExpertLegendaries
# 704 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_ExpertLeadToCave
# 705 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginPleaseLeave, MSGBOX_DEFAULT
# 706 "data/maps/SootopolisCity/scripts.pory"
	release
# 707 "data/maps/SootopolisCity/scripts.pory"
	end
# 708 "data/maps/SootopolisCity/scripts.pory"

# 709 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertLeadToCave::
# 710 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_LeadSuperiorTrainerToCave, MSGBOX_DEFAULT
# 711 "data/maps/SootopolisCity/scripts.pory"
	release
# 712 "data/maps/SootopolisCity/scripts.pory"
	end
# 713 "data/maps/SootopolisCity/scripts.pory"

# 714 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertPostLegendaries::
# 715 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginSleepsToo, MSGBOX_DEFAULT
# 716 "data/maps/SootopolisCity/scripts.pory"
	release
# 717 "data/maps/SootopolisCity/scripts.pory"
	end
# 718 "data/maps/SootopolisCity/scripts.pory"

# 719 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ExpertLegendaries::
# 720 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AwakenedPokemonClash, MSGBOX_DEFAULT
# 721 "data/maps/SootopolisCity/scripts.pory"
	release
# 722 "data/maps/SootopolisCity/scripts.pory"
	end
# 723 "data/maps/SootopolisCity/scripts.pory"

# 724 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Kiri::
# 725 "data/maps/SootopolisCity/scripts.pory"
	lock
# 726 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 727 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_KiriGiveBerry
# 728 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 7, SootopolisCity_EventScript_KiriGiveBerry
# 729 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_KiriRayquaza
# 730 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_BigPokemonFighting, MSGBOX_DEFAULT
# 731 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 732 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KIRI, Common_Movement_FaceOriginalDirection
# 733 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 734 "data/maps/SootopolisCity/scripts.pory"
	release
# 735 "data/maps/SootopolisCity/scripts.pory"
	end
# 736 "data/maps/SootopolisCity/scripts.pory"

# 737 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriRayquaza::
# 738 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PrettyMonCameFromSky, MSGBOX_DEFAULT
# 739 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 740 "data/maps/SootopolisCity/scripts.pory"
	release
# 741 "data/maps/SootopolisCity/scripts.pory"
	end
# 742 "data/maps/SootopolisCity/scripts.pory"

# 743 "data/maps/SootopolisCity/scripts.pory"
@ Gives 2 berries daily. First ranges from FIRST_KIRI_BERRY to LAST_KIRI_BERRY, second is always Figy or Iapapa
# 744 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriGiveBerry::
# 745 "data/maps/SootopolisCity/scripts.pory"
	dotimebasedevents
# 746 "data/maps/SootopolisCity/scripts.pory"
	special GetPlayerBigGuyGirlString
# 747 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY, SootopolisCity_EventScript_KiriReceivedBerry
# 748 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NameIsKiriHaveOneOfThese, MSGBOX_DEFAULT
# 749 "data/maps/SootopolisCity/scripts.pory"
	random NUM_KIRI_BERRIES
# 750 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_RESULT, NUM_KIRI_BERRIES_SKIPPED
# 751 "data/maps/SootopolisCity/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 752 "data/maps/SootopolisCity/scripts.pory"
	giveitem VAR_RESULT
# 753 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 754 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY
# 755 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiveYouThisBerryToo, MSGBOX_DEFAULT
# 756 "data/maps/SootopolisCity/scripts.pory"
	random 2
# 757 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SootopolisCity_EventScript_GiveFigyBerry
# 758 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SootopolisCity_EventScript_GiveIapapaBerry
# 759 "data/maps/SootopolisCity/scripts.pory"
	end
# 760 "data/maps/SootopolisCity/scripts.pory"

# 761 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveFigyBerry::
# 762 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_FIGY_BERRY
# 763 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 764 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
# 765 "data/maps/SootopolisCity/scripts.pory"
	release
# 766 "data/maps/SootopolisCity/scripts.pory"
	end
# 767 "data/maps/SootopolisCity/scripts.pory"

# 768 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveIapapaBerry::
# 769 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_IAPAPA_BERRY
# 770 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 771 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
# 772 "data/maps/SootopolisCity/scripts.pory"
	release
# 773 "data/maps/SootopolisCity/scripts.pory"
	end
# 774 "data/maps/SootopolisCity/scripts.pory"

# 775 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriReceivedBerry::
# 776 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_LikeSeasonBornIn, MSGBOX_YESNO
# 777 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SootopolisCity_EventScript_KiriLikeSeasonBornIn
# 778 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_OhDoesntMatter, MSGBOX_DEFAULT
# 779 "data/maps/SootopolisCity/scripts.pory"
	release
# 780 "data/maps/SootopolisCity/scripts.pory"
	end
# 781 "data/maps/SootopolisCity/scripts.pory"

# 782 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KiriLikeSeasonBornIn::
# 783 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThenILoveAutumn, MSGBOX_DEFAULT
# 784 "data/maps/SootopolisCity/scripts.pory"
	release
# 785 "data/maps/SootopolisCity/scripts.pory"
	end
# 786 "data/maps/SootopolisCity/scripts.pory"

# 787 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman2::
# 788 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 789 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WOMAN_2, Common_Movement_FacePlayer
# 790 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 791 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Woman2Rayquaza
# 792 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WeatherWentWild, MSGBOX_DEFAULT
# 793 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 794 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WOMAN_2, Common_Movement_FaceOriginalDirection
# 795 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 796 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 797 "data/maps/SootopolisCity/scripts.pory"
	end
# 798 "data/maps/SootopolisCity/scripts.pory"

# 799 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman2Rayquaza::
# 800 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_YouBroughtFlyingMon, MSGBOX_DEFAULT
# 801 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 802 "data/maps/SootopolisCity/scripts.pory"
	end
# 803 "data/maps/SootopolisCity/scripts.pory"

# 804 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Man::
# 805 "data/maps/SootopolisCity/scripts.pory"
	lock
# 806 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 807 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 7, SootopolisCity_EventScript_ManPostLegendaries
# 808 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NoOrdinaryTourist, MSGBOX_DEFAULT
# 809 "data/maps/SootopolisCity/scripts.pory"
	release
# 810 "data/maps/SootopolisCity/scripts.pory"
	end
# 811 "data/maps/SootopolisCity/scripts.pory"

# 812 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ManPostLegendaries::
# 813 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CityRegainedCalm, MSGBOX_DEFAULT
# 814 "data/maps/SootopolisCity/scripts.pory"
	release
# 815 "data/maps/SootopolisCity/scripts.pory"
	end
# 816 "data/maps/SootopolisCity/scripts.pory"

# 817 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1::
# 818 "data/maps/SootopolisCity/scripts.pory"
	lock
# 819 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 820 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 7, SootopolisCity_EventScript_Woman1PostLegendaries
# 821 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Woman1Rayquaza
# 822 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_Woman1Legendaries
# 823 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisSkyBeautiful, MSGBOX_DEFAULT
# 824 "data/maps/SootopolisCity/scripts.pory"
	release
# 825 "data/maps/SootopolisCity/scripts.pory"
	end
# 826 "data/maps/SootopolisCity/scripts.pory"

# 827 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1Legendaries::
# 828 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiganticPokemonFight, MSGBOX_DEFAULT
# 829 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 830 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_WOMAN_1, Common_Movement_FaceOriginalDirection
# 831 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 832 "data/maps/SootopolisCity/scripts.pory"
	release
# 833 "data/maps/SootopolisCity/scripts.pory"
	end
# 834 "data/maps/SootopolisCity/scripts.pory"

# 835 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1PostLegendaries::
# 836 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NightSkyFavoriteScenery, MSGBOX_DEFAULT
# 837 "data/maps/SootopolisCity/scripts.pory"
	release
# 838 "data/maps/SootopolisCity/scripts.pory"
	end
# 839 "data/maps/SootopolisCity/scripts.pory"

# 840 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Woman1Rayquaza::
# 841 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_FearedWorstWhenPokemonFlewDown, MSGBOX_DEFAULT
# 842 "data/maps/SootopolisCity/scripts.pory"
	release
# 843 "data/maps/SootopolisCity/scripts.pory"
	end
# 844 "data/maps/SootopolisCity/scripts.pory"

# 845 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoy::
# 846 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 847 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_NINJA_BOY, Common_Movement_FacePlayer
# 848 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 849 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_NinjaBoyRayquaza
# 850 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 7, SootopolisCity_EventScript_NinjaBoyNormal
# 851 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_NinjaBoyNormal
# 852 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThisIsWicked, MSGBOX_DEFAULT
# 853 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 854 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_NINJA_BOY, Common_Movement_FaceOriginalDirection
# 855 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 856 "data/maps/SootopolisCity/scripts.pory"
	release
# 857 "data/maps/SootopolisCity/scripts.pory"
	end
# 858 "data/maps/SootopolisCity/scripts.pory"

# 859 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoyNormal::
# 860 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WonderWhatWorldIsLike, MSGBOX_DEFAULT
# 861 "data/maps/SootopolisCity/scripts.pory"
	release
# 862 "data/maps/SootopolisCity/scripts.pory"
	end
# 863 "data/maps/SootopolisCity/scripts.pory"

# 864 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_NinjaBoyRayquaza::
# 865 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThatWasWicked, MSGBOX_DEFAULT
# 866 "data/maps/SootopolisCity/scripts.pory"
	release
# 867 "data/maps/SootopolisCity/scripts.pory"
	end
# 868 "data/maps/SootopolisCity/scripts.pory"

# 869 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1::
# 870 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 871 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BOY_1, Common_Movement_FacePlayer
# 872 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 873 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Boy1Rayquaza
# 874 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SootopolisCity_EventScript_Boy1GameClear
# 875 "data/maps/SootopolisCity/scripts.pory"
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 7, SootopolisCity_EventScript_Boy1Normal
# 876 "data/maps/SootopolisCity/scripts.pory"
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_Boy1Normal
# 877 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiantPokemonSuddenlyAppeared, MSGBOX_DEFAULT
# 878 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 879 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BOY_1, Common_Movement_FaceOriginalDirection
# 880 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 881 "data/maps/SootopolisCity/scripts.pory"
	release
# 882 "data/maps/SootopolisCity/scripts.pory"
	end
# 883 "data/maps/SootopolisCity/scripts.pory"

# 884 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1Rayquaza::
# 885 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatIsThatGreenPokemon, MSGBOX_DEFAULT
# 886 "data/maps/SootopolisCity/scripts.pory"
	release
# 887 "data/maps/SootopolisCity/scripts.pory"
	end
# 888 "data/maps/SootopolisCity/scripts.pory"

# 889 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1GameClear::
# 890 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhereDidLegendariesGo, MSGBOX_DEFAULT
# 891 "data/maps/SootopolisCity/scripts.pory"
	release
# 892 "data/maps/SootopolisCity/scripts.pory"
	end
# 893 "data/maps/SootopolisCity/scripts.pory"

# 894 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy1Normal::
# 895 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PhysicallyFitLivingHere, MSGBOX_DEFAULT
# 896 "data/maps/SootopolisCity/scripts.pory"
	release
# 897 "data/maps/SootopolisCity/scripts.pory"
	end
# 898 "data/maps/SootopolisCity/scripts.pory"

# 899 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GymSign::
# 900 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GymSign, MSGBOX_SIGN
# 901 "data/maps/SootopolisCity/scripts.pory"
	end
# 902 "data/maps/SootopolisCity/scripts.pory"

# 903 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_CitySign::
# 904 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CitySign, MSGBOX_SIGN
# 905 "data/maps/SootopolisCity/scripts.pory"
	end
# 906 "data/maps/SootopolisCity/scripts.pory"

# 907 "data/maps/SootopolisCity/scripts.pory"
EventScript_ClosedSootopolisDoor::
# 908 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoorIsClosed, MSGBOX_SIGN
# 909 "data/maps/SootopolisCity/scripts.pory"
	end
# 910 "data/maps/SootopolisCity/scripts.pory"

# 911 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Steven::
# 912 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 913 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_FacePlayer
# 914 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 915 "data/maps/SootopolisCity/scripts.pory"
	call_if_unset FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN, SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin
# 916 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_StevenHelpWallace
# 917 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_StevenHelpedWallace
# 918 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_StevenHelpedWallace
# 919 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_StevenMaxieArchieLeft
# 920 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SoThatsRayquaza, MSGBOX_DEFAULT
# 921 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 922 "data/maps/SootopolisCity/scripts.pory"
	end
# 923 "data/maps/SootopolisCity/scripts.pory"

# 924 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenHelpWallace::
# 925 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_KnowWhatsNeededToHelpHim, MSGBOX_DEFAULT
# 926 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 927 "data/maps/SootopolisCity/scripts.pory"
	end
# 928 "data/maps/SootopolisCity/scripts.pory"

# 929 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenMaxieArchieLeft::
# 930 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_MaxieArchieLeft, MSGBOX_DEFAULT
# 931 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 932 "data/maps/SootopolisCity/scripts.pory"
	end
# 933 "data/maps/SootopolisCity/scripts.pory"

# 934 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenHelpedWallace::
# 935 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NeverBeenToSkyPillar, MSGBOX_DEFAULT
# 936 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 937 "data/maps/SootopolisCity/scripts.pory"
	end
# 938 "data/maps/SootopolisCity/scripts.pory"

# 939 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin::
# 940 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_InvolvedWithCrisis, MSGBOX_DEFAULT
# 941 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 942 "data/maps/SootopolisCity/scripts.pory"
    playse SE_PIN
# 943 "data/maps/SootopolisCity/scripts.pory"
    applymovement LOCALID_STEVEN, Common_Movement_ExclamationMark
# 944 "data/maps/SootopolisCity/scripts.pory"
    waitmovement LOCALID_STEVEN
# 945 "data/maps/SootopolisCity/scripts.pory"
    waitse
# 946 "data/maps/SootopolisCity/scripts.pory"
    msgbox SootopolisCity_Text_ComeWithMe, MSGBOX_DEFAULT
# 947 "data/maps/SootopolisCity/scripts.pory"
    closemessage
# 948 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SootopolisCity_EventScript_StartWalkToCaveOfOriginWest
# 949 "data/maps/SootopolisCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SootopolisCity_EventScript_StartWalkToCaveOfOriginNorth
# 950 "data/maps/SootopolisCity/scripts.pory"
	delay 16
# 951 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoesThisMakeYourFearPokemon, MSGBOX_DEFAULT
# 952 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 953 "data/maps/SootopolisCity/scripts.pory"
	delay 16
# 954 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_StevenWalkToCaveOfOrigin
# 955 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerWalkToCaveOfOrigin
# 956 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 957 "data/maps/SootopolisCity/scripts.pory"
	delay 128
# 958 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_EXPERT, SootopolisCity_Movement_ExpertMoveAside
# 959 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 960 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_StevenArriveCaveEntrance
# 961 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerArriveCaveEntrance
# 962 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 963 "data/maps/SootopolisCity/scripts.pory"
    call SootopolisCity_EventScript_RivalAppear
# 964 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN
# 965 "data/maps/SootopolisCity/scripts.pory"
    delay 24
# 966 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerEnterCaveOfOrigin
# 967 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 968 "data/maps/SootopolisCity/scripts.pory"
	warp MAP_CAVE_OF_ORIGIN_ENTRANCE, 9, 20
# 969 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 970 "data/maps/SootopolisCity/scripts.pory"
	end
# 971 "data/maps/SootopolisCity/scripts.pory"

# 972 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartWalkToCaveOfOriginWest::
# 973 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin
# 974 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginWest
# 975 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 976 "data/maps/SootopolisCity/scripts.pory"
	return
# 977 "data/maps/SootopolisCity/scripts.pory"

# 978 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StartWalkToCaveOfOriginNorth::
# 979 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin
# 980 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginNorth
# 981 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 982 "data/maps/SootopolisCity/scripts.pory"
	return
# 983 "data/maps/SootopolisCity/scripts.pory"

# 984 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin:
# 985 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 986 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 987 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 988 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 989 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 990 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 991 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 992 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 993 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 994 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 995 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 996 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 997 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 998 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 999 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1000 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1001 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1002 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1003 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1004 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1005 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1006 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1007 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1008 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1009 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1010 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1011 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1012 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1013 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1014 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1015 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1016 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1017 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1018 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1019 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1020 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1021 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_down
# 1022 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1023 "data/maps/SootopolisCity/scripts.pory"

# 1024 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginWest:
# 1025 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1026 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1027 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1028 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1029 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1030 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1031 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1032 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1033 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1034 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1035 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1036 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1037 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1038 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1039 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1040 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1041 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1042 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1043 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1044 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1045 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1046 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1047 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1048 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1049 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1050 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1051 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1052 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1053 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1054 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1055 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1056 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1057 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1058 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1059 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1060 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1061 "data/maps/SootopolisCity/scripts.pory"

# 1062 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginNorth:
# 1063 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1064 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1065 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1066 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1067 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1068 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1069 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1070 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1071 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1072 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1073 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1074 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1075 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1076 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1077 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1078 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1079 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1080 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1081 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1082 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1083 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1084 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1085 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1086 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1087 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1088 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1089 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1090 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1091 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1092 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1093 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1094 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1095 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1096 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1097 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1098 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1099 "data/maps/SootopolisCity/scripts.pory"

# 1100 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenWalkToCaveOfOrigin:
# 1101 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1102 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1103 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1104 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1105 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1106 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1107 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1108 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1109 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1110 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1111 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1112 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1113 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1114 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1115 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1116 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1117 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1118 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1119 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1120 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1121 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1122 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1123 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1124 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1125 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1126 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1127 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1128 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1129 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1130 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1131 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1132 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1133 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1134 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1135 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1136 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1137 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1138 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1139 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1140 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1141 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1142 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1143 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1144 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1145 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1146 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1147 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1148 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1149 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1150 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1151 "data/maps/SootopolisCity/scripts.pory"
	delay_4
# 1152 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_left
# 1153 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1154 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1155 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1156 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1157 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1158 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1159 "data/maps/SootopolisCity/scripts.pory"

# 1160 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerWalkToCaveOfOrigin:
# 1161 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1162 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1163 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1164 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1165 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1166 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1167 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1168 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1169 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1170 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1171 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1172 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1173 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1174 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1175 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1176 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1177 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1178 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1179 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1180 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1181 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1182 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1183 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1184 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1185 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1186 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1187 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1188 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1189 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1190 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1191 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1192 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1193 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1194 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1195 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1196 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1197 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1198 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1199 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1200 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1201 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1202 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1203 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1204 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1205 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1206 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1207 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1208 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1209 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1210 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1211 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1212 "data/maps/SootopolisCity/scripts.pory"

# 1213 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_ExpertMoveAside:
# 1214 "data/maps/SootopolisCity/scripts.pory"
	walk_slow_left
# 1215 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_right
# 1216 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1217 "data/maps/SootopolisCity/scripts.pory"

# 1218 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenArriveCaveEntrance:
# 1219 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1220 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1221 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1222 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 1223 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1224 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1225 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1226 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1227 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1228 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_left
# 1229 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1230 "data/maps/SootopolisCity/scripts.pory"

# 1231 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerArriveCaveEntrance:
# 1232 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1233 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1234 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1235 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 1236 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1237 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1238 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1239 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1240 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1241 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_right
# 1242 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1243 "data/maps/SootopolisCity/scripts.pory"

# 1244 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerEnterCaveOfOrigin:
# 1245 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1246 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1247 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1248 "data/maps/SootopolisCity/scripts.pory"

# 1249 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy2::
# 1250 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1251 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BOY_2, Common_Movement_FacePlayer
# 1252 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1253 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Boy2Rayquaza
# 1254 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_TwoPokemonArentAngry, MSGBOX_DEFAULT
# 1255 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1256 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BOY_2, Common_Movement_FaceOriginalDirection
# 1257 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1258 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1259 "data/maps/SootopolisCity/scripts.pory"
	end
# 1260 "data/maps/SootopolisCity/scripts.pory"

# 1261 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Boy2Rayquaza::
# 1262 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_FlyingMonStoppedRampage, MSGBOX_DEFAULT
# 1263 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1264 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1265 "data/maps/SootopolisCity/scripts.pory"
	end
# 1266 "data/maps/SootopolisCity/scripts.pory"

# 1267 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_BlackBelt::
# 1268 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1269 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_BlackBeltRayquaza
# 1270 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GoRedAndBlueMon, MSGBOX_DEFAULT
# 1271 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1272 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BLACK_BELT, Common_Movement_FacePlayer
# 1273 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1274 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoYouKnowMonNames, MSGBOX_DEFAULT
# 1275 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1276 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BLACK_BELT, Common_Movement_FaceOriginalDirection
# 1277 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1278 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1279 "data/maps/SootopolisCity/scripts.pory"
	end
# 1280 "data/maps/SootopolisCity/scripts.pory"

# 1281 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_BlackBeltRayquaza::
# 1282 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_BLACK_BELT, Common_Movement_FacePlayer
# 1283 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1284 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GreenOneSettlesThings, MSGBOX_DEFAULT
# 1285 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1286 "data/maps/SootopolisCity/scripts.pory"
	end
# 1287 "data/maps/SootopolisCity/scripts.pory"

# 1288 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Girl::
# 1289 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1290 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GIRL, Common_Movement_FacePlayer
# 1291 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1292 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_GirlRayquaza
# 1293 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisWillBeWrecked, MSGBOX_DEFAULT
# 1294 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1295 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_GIRL, Common_Movement_FaceOriginalDirection
# 1296 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1297 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1298 "data/maps/SootopolisCity/scripts.pory"
	end
# 1299 "data/maps/SootopolisCity/scripts.pory"

# 1300 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GirlRayquaza::
# 1301 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisDidntGetWrecked, MSGBOX_DEFAULT
# 1302 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1303 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1304 "data/maps/SootopolisCity/scripts.pory"
	end
# 1305 "data/maps/SootopolisCity/scripts.pory"

# 1306 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Maniac::
# 1307 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1308 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_MANIAC, Common_Movement_FacePlayer
# 1309 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1310 "data/maps/SootopolisCity/scripts.pory"
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ManiacRayquaza
# 1311 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SeeingLegendWithOwnEyes, MSGBOX_DEFAULT
# 1312 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1313 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_MANIAC, Common_Movement_FaceOriginalDirection
# 1314 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 1315 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1316 "data/maps/SootopolisCity/scripts.pory"
	end
# 1317 "data/maps/SootopolisCity/scripts.pory"

# 1318 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_ManiacRayquaza::
# 1319 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SawLegendWithOwnEyes, MSGBOX_DEFAULT
# 1320 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1321 "data/maps/SootopolisCity/scripts.pory"
	end
# 1322 "data/maps/SootopolisCity/scripts.pory"

# 1323 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Wallace::
# 1324 "data/maps/SootopolisCity/scripts.pory"
	lock
# 1325 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 1326 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_HaventYouScaledSkyPillar, MSGBOX_DEFAULT
# 1327 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1328 "data/maps/SootopolisCity/scripts.pory"
	release
# 1329 "data/maps/SootopolisCity/scripts.pory"
	end
# 1330 "data/maps/SootopolisCity/scripts.pory"

# 1331 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Maxie::
# 1332 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1333 "data/maps/SootopolisCity/scripts.pory"
    faceplayer
# 1334 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_MaxieApologize, MSGBOX_DEFAULT
# 1335 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1336 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1337 "data/maps/SootopolisCity/scripts.pory"
	end
# 1338 "data/maps/SootopolisCity/scripts.pory"

# 1339 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_Archie::
# 1340 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 1341 "data/maps/SootopolisCity/scripts.pory"
    faceplayer
# 1342 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ArchieSorry, MSGBOX_DEFAULT
# 1343 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1344 "data/maps/SootopolisCity/scripts.pory"
	releaseall
# 1345 "data/maps/SootopolisCity/scripts.pory"
	end
# 1346 "data/maps/SootopolisCity/scripts.pory"

# 1347 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 1348 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_Levitate::
# 1349 "data/maps/SootopolisCity/scripts.pory"
	levitate
# 1350 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1351 "data/maps/SootopolisCity/scripts.pory"

# 1352 "data/maps/SootopolisCity/scripts.pory"
@ Unused
# 1353 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_DestroyTask::
# 1354 "data/maps/SootopolisCity/scripts.pory"
	destroy_extra_task
# 1355 "data/maps/SootopolisCity/scripts.pory"
	step_end
# 1356 "data/maps/SootopolisCity/scripts.pory"

# 1357 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GymSign:
# 1358 "data/maps/SootopolisCity/scripts.pory"
	.string "Sootopolis City Pokémon Gym\n"
# 1359 "data/maps/SootopolisCity/scripts.pory"
	.string "Leader: Wallace\p"
# 1360 "data/maps/SootopolisCity/scripts.pory"
	.string "“Artist and lover of Water.”$"
# 1361 "data/maps/SootopolisCity/scripts.pory"

# 1362 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CitySign:
# 1363 "data/maps/SootopolisCity/scripts.pory"
	.string "Sootopolis City\p"
# 1364 "data/maps/SootopolisCity/scripts.pory"
	.string "“The mystical city where history\n"
# 1365 "data/maps/SootopolisCity/scripts.pory"
	.string "slumbers.”$"
# 1366 "data/maps/SootopolisCity/scripts.pory"

# 1367 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoorIsClosed:
# 1368 "data/maps/SootopolisCity/scripts.pory"
	.string "The door is closed.$"
# 1369 "data/maps/SootopolisCity/scripts.pory"

# 1370 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_PhysicallyFitLivingHere:
# 1371 "data/maps/SootopolisCity/scripts.pory"
	.string "Diving in the sea. Climbing up and\n"
# 1372 "data/maps/SootopolisCity/scripts.pory"
	.string "down stairs all the time…\p"
# 1373 "data/maps/SootopolisCity/scripts.pory"
	.string "If you live in this town, you end up\n"
# 1374 "data/maps/SootopolisCity/scripts.pory"
	.string "getting physically fit.$"
# 1375 "data/maps/SootopolisCity/scripts.pory"

# 1376 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GiantPokemonSuddenlyAppeared:
# 1377 "data/maps/SootopolisCity/scripts.pory"
	.string "These giant Pokémon suddenly appeared\n"
# 1378 "data/maps/SootopolisCity/scripts.pory"
	.string "in the middle of the city!\p"
# 1379 "data/maps/SootopolisCity/scripts.pory"
	.string "And, I've never seen them before!\p"
# 1380 "data/maps/SootopolisCity/scripts.pory"
	.string "Why are they smashing into each\n"
# 1381 "data/maps/SootopolisCity/scripts.pory"
	.string "other like that?\p"
# 1382 "data/maps/SootopolisCity/scripts.pory"
	.string "Why can't they be friends, those\n"
# 1383 "data/maps/SootopolisCity/scripts.pory"
	.string "Pokémon?$"
# 1384 "data/maps/SootopolisCity/scripts.pory"

# 1385 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WhatIsThatGreenPokemon:
# 1386 "data/maps/SootopolisCity/scripts.pory"
	.string "What? What? What?\n"
# 1387 "data/maps/SootopolisCity/scripts.pory"
	.string "What is that green Pokémon?!$"
# 1388 "data/maps/SootopolisCity/scripts.pory"

# 1389 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WhereDidLegendariesGo:
# 1390 "data/maps/SootopolisCity/scripts.pory"
	.string "Groudon and Kyogre…\n"
# 1391 "data/maps/SootopolisCity/scripts.pory"
	.string "Where did they go?\p"
# 1392 "data/maps/SootopolisCity/scripts.pory"
	.string "Will they cause droughts or downpours\n"
# 1393 "data/maps/SootopolisCity/scripts.pory"
	.string "somewhere else?$"
# 1394 "data/maps/SootopolisCity/scripts.pory"

# 1395 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_TwoPokemonArentAngry:
# 1396 "data/maps/SootopolisCity/scripts.pory"
	.string "I just get this sense somehow that\n"
# 1397 "data/maps/SootopolisCity/scripts.pory"
	.string "the two Pokémon aren't angry.\p"
# 1398 "data/maps/SootopolisCity/scripts.pory"
	.string "I think… They probably can't control\n"
# 1399 "data/maps/SootopolisCity/scripts.pory"
	.string "their own power…$"
# 1400 "data/maps/SootopolisCity/scripts.pory"

# 1401 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_FlyingMonStoppedRampage:
# 1402 "data/maps/SootopolisCity/scripts.pory"
	.string "That flying Pokémon came down from\n"
# 1403 "data/maps/SootopolisCity/scripts.pory"
	.string "the sky and stopped the rampaging\l"
# 1404 "data/maps/SootopolisCity/scripts.pory"
	.string "Pokémon…$"
# 1405 "data/maps/SootopolisCity/scripts.pory"

# 1406 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WonderWhatWorldIsLike:
# 1407 "data/maps/SootopolisCity/scripts.pory"
	.string "I… I've never been out of this city.\p"
# 1408 "data/maps/SootopolisCity/scripts.pory"
	.string "I wonder what the world is like on\n"
# 1409 "data/maps/SootopolisCity/scripts.pory"
	.string "the other side of this round sky?$"
# 1410 "data/maps/SootopolisCity/scripts.pory"

# 1411 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThisIsWicked:
# 1412 "data/maps/SootopolisCity/scripts.pory"
	.string "Wow!\n"
# 1413 "data/maps/SootopolisCity/scripts.pory"
	.string "This is wicked!$"
# 1414 "data/maps/SootopolisCity/scripts.pory"

# 1415 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ThatWasWicked:
# 1416 "data/maps/SootopolisCity/scripts.pory"
	.string "Wow!\n"
# 1417 "data/maps/SootopolisCity/scripts.pory"
	.string "That was wicked!$"
# 1418 "data/maps/SootopolisCity/scripts.pory"

# 1419 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GoRedAndBlueMon:
# 1420 "data/maps/SootopolisCity/scripts.pory"
	.string "Go for it, red Pokémon!\n"
# 1421 "data/maps/SootopolisCity/scripts.pory"
	.string "Don't back off, blue Pokémon!$"
# 1422 "data/maps/SootopolisCity/scripts.pory"

# 1423 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoYouKnowMonNames:
# 1424 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\p"
# 1425 "data/maps/SootopolisCity/scripts.pory"
	.string "Hi, do you know the names of those\n"
# 1426 "data/maps/SootopolisCity/scripts.pory"
	.string "Pokémon fighting over there?$"
# 1427 "data/maps/SootopolisCity/scripts.pory"

# 1428 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GreenOneSettlesThings:
# 1429 "data/maps/SootopolisCity/scripts.pory"
	.string "I was wondering which one would win,\n"
# 1430 "data/maps/SootopolisCity/scripts.pory"
	.string "the red one or the blue one, but, oh no,\l"
# 1431 "data/maps/SootopolisCity/scripts.pory"
	.string "it's the green one that settles things!\p"
# 1432 "data/maps/SootopolisCity/scripts.pory"
	.string "Talk about a huge turn of events!$"
# 1433 "data/maps/SootopolisCity/scripts.pory"

# 1434 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SeeingLegendWithOwnEyes:
# 1435 "data/maps/SootopolisCity/scripts.pory"
	.string "There's an ancient legend that claims\n"
# 1436 "data/maps/SootopolisCity/scripts.pory"
	.string "the land and sea were shaped by\l"
# 1437 "data/maps/SootopolisCity/scripts.pory"
	.string "a colossal battle between Pokémon.\p"
# 1438 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, I'm seeing that happen with\n"
# 1439 "data/maps/SootopolisCity/scripts.pory"
	.string "my very own eyes!\p"
# 1440 "data/maps/SootopolisCity/scripts.pory"
	.string "Whoa! I never expected to be\n"
# 1441 "data/maps/SootopolisCity/scripts.pory"
	.string "witness to something this huge!$"
# 1442 "data/maps/SootopolisCity/scripts.pory"

# 1443 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SawLegendWithOwnEyes:
# 1444 "data/maps/SootopolisCity/scripts.pory"
	.string "There's an ancient legend that claims\n"
# 1445 "data/maps/SootopolisCity/scripts.pory"
	.string "the land and sea were shaped by\l"
# 1446 "data/maps/SootopolisCity/scripts.pory"
	.string "a colossal battle between Pokémon.\p"
# 1447 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, I saw that happen with\n"
# 1448 "data/maps/SootopolisCity/scripts.pory"
	.string "my very own eyes!\p"
# 1449 "data/maps/SootopolisCity/scripts.pory"
	.string "Whoa! I never expected to be\n"
# 1450 "data/maps/SootopolisCity/scripts.pory"
	.string "witness to something this huge!$"
# 1451 "data/maps/SootopolisCity/scripts.pory"

# 1452 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_BigPokemonFighting:
# 1453 "data/maps/SootopolisCity/scripts.pory"
	.string "A big Pokémon is fighting with\n"
# 1454 "data/maps/SootopolisCity/scripts.pory"
	.string "another big Pokémon!\p"
# 1455 "data/maps/SootopolisCity/scripts.pory"
	.string "Please, someone make them stop!$"
# 1456 "data/maps/SootopolisCity/scripts.pory"

# 1457 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_PrettyMonCameFromSky:
# 1458 "data/maps/SootopolisCity/scripts.pory"
	.string "A pretty Pokémon came down from\n"
# 1459 "data/maps/SootopolisCity/scripts.pory"
	.string "the sky…$"
# 1460 "data/maps/SootopolisCity/scripts.pory"

# 1461 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisWillBeWrecked:
# 1462 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, no!\n"
# 1463 "data/maps/SootopolisCity/scripts.pory"
	.string "Sootopolis City will get wrecked!$"
# 1464 "data/maps/SootopolisCity/scripts.pory"

# 1465 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisDidntGetWrecked:
# 1466 "data/maps/SootopolisCity/scripts.pory"
	.string "Sootopolis City didn't get wrecked!$"
# 1467 "data/maps/SootopolisCity/scripts.pory"

# 1468 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NoOrdinaryTourist:
# 1469 "data/maps/SootopolisCity/scripts.pory"
	.string "Hm!\n"
# 1470 "data/maps/SootopolisCity/scripts.pory"
	.string "You've come all the way to Sootopolis?\l"
# 1471 "data/maps/SootopolisCity/scripts.pory"
	.string "You're no ordinary tourist.\p"
# 1472 "data/maps/SootopolisCity/scripts.pory"
	.string "But I suppose that doesn't make you\n"
# 1473 "data/maps/SootopolisCity/scripts.pory"
	.string "an extraordinary tourist, either.$"
# 1474 "data/maps/SootopolisCity/scripts.pory"

# 1475 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CityRegainedCalm:
# 1476 "data/maps/SootopolisCity/scripts.pory"
	.string "The city has regained its calm…$"
# 1477 "data/maps/SootopolisCity/scripts.pory"

# 1478 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CaveOfOriginPleaseLeave:
# 1479 "data/maps/SootopolisCity/scripts.pory"
	.string "Who might you be?\pThis is the Cave of Origin.\pThe spirits of Pokémon, becalmed at\nMt. Pyre, are said to be revived here.\pPlease leave.$"
# 1480 "data/maps/SootopolisCity/scripts.pory"

# 1481 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_LeadSuperiorTrainerToCave:
# 1482 "data/maps/SootopolisCity/scripts.pory"
	.string "A person with a strong will and\nsuperior talent…\pA Trainer who has knowledge and\nexperience of many kinds of Pokémon…\pIf such a person were to appear,\nI was instructed by Wallace to lead\lthat Trainer to this Cave.$"
# 1483 "data/maps/SootopolisCity/scripts.pory"

# 1484 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AwakenedPokemonClash:
# 1485 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, my…\pThe clash between the two awakened\nPokémon was quelled by the awakening\lof a third Pokémon…$"
# 1486 "data/maps/SootopolisCity/scripts.pory"

# 1487 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_CaveOfOriginSleepsToo:
# 1488 "data/maps/SootopolisCity/scripts.pory"
	.string "This is the Cave of Origin…\pWith the passing of the crisis,\nthe cave, too, shall sleep…$"
# 1489 "data/maps/SootopolisCity/scripts.pory"

# 1490 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SootopolisSkyBeautiful:
# 1491 "data/maps/SootopolisCity/scripts.pory"
	.string "Sootopolis sprang up as a town in\n"
# 1492 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater of a volcano.\p"
# 1493 "data/maps/SootopolisCity/scripts.pory"
	.string "If you look up at the sky, the lip of\n"
# 1494 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater is also visible.\l"
# 1495 "data/maps/SootopolisCity/scripts.pory"
	.string "So, all you see is the sky in a circle.\p"
# 1496 "data/maps/SootopolisCity/scripts.pory"
	.string "But that's what makes the sky above\n"
# 1497 "data/maps/SootopolisCity/scripts.pory"
	.string "Sootopolis the most beautiful.$"
# 1498 "data/maps/SootopolisCity/scripts.pory"

# 1499 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_GiganticPokemonFight:
# 1500 "data/maps/SootopolisCity/scripts.pory"
	.string "When two Pokémon that gigantic\n"
# 1501 "data/maps/SootopolisCity/scripts.pory"
	.string "are fighting that savagely, there's\l"
# 1502 "data/maps/SootopolisCity/scripts.pory"
	.string "not much that we can do.$"
# 1503 "data/maps/SootopolisCity/scripts.pory"

# 1504 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_FearedWorstWhenPokemonFlewDown:
# 1505 "data/maps/SootopolisCity/scripts.pory"
	.string "When that third Pokémon flew down,\n"
# 1506 "data/maps/SootopolisCity/scripts.pory"
	.string "I feared the worst.$"
# 1507 "data/maps/SootopolisCity/scripts.pory"

# 1508 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NightSkyFavoriteScenery:
# 1509 "data/maps/SootopolisCity/scripts.pory"
	.string "A circle of a night sky framed by\n"
# 1510 "data/maps/SootopolisCity/scripts.pory"
	.string "the crater of a volcano…\p"
# 1511 "data/maps/SootopolisCity/scripts.pory"
	.string "And in that ring, stars flicker and\n"
# 1512 "data/maps/SootopolisCity/scripts.pory"
	.string "blink as if they were alive…\l"
# 1513 "data/maps/SootopolisCity/scripts.pory"
	.string "It's my favorite scenery.$"
# 1514 "data/maps/SootopolisCity/scripts.pory"

# 1515 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_WeatherWentWild:
# 1516 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather was clear this morning,\n"
# 1517 "data/maps/SootopolisCity/scripts.pory"
	.string "but…\p"
# 1518 "data/maps/SootopolisCity/scripts.pory"
	.string "All of a sudden, dark clouds brewed up,\n"
# 1519 "data/maps/SootopolisCity/scripts.pory"
	.string "rain started falling in sheets, and\l"
# 1520 "data/maps/SootopolisCity/scripts.pory"
	.string "there was thunder and lightning, too.\p"
# 1521 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather just went completely\n"
# 1522 "data/maps/SootopolisCity/scripts.pory"
	.string "wild!\p"
# 1523 "data/maps/SootopolisCity/scripts.pory"
	.string "Is all of this because of those\n"
# 1524 "data/maps/SootopolisCity/scripts.pory"
	.string "Pokémon?$"
# 1525 "data/maps/SootopolisCity/scripts.pory"

# 1526 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_YouBroughtFlyingMon:
# 1527 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh?\p"
# 1528 "data/maps/SootopolisCity/scripts.pory"
	.string "It was you who brought that flying\n"
# 1529 "data/maps/SootopolisCity/scripts.pory"
	.string "Pokémon here?\p"
# 1530 "data/maps/SootopolisCity/scripts.pory"
	.string "Well, aren't you amazing!$"
# 1531 "data/maps/SootopolisCity/scripts.pory"

# 1532 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_MaxieApologize:
# 1533 "data/maps/SootopolisCity/scripts.pory"
	.string "{COLOR RED}Maxie{COLOR DARK_GRAY}: Child, you… No.\pI have no right to call you “child.”\pFellow Trainer.\pI have caused great harm, and for that\nI apologize most sincerely.\pBut now we find ourselves at an\nimpasse, and you and your Pokémon\lare all that humanity has to count\lon in its stand against these super-\lancient Pokémon…$"
# 1534 "data/maps/SootopolisCity/scripts.pory"

# 1535 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_AfterAllOurScheming:
# 1536 "data/maps/SootopolisCity/scripts.pory"
	.string "Maxie: So the super-ancient Pokémon\n"
# 1537 "data/maps/SootopolisCity/scripts.pory"
	.string "weren't only Groudon and Kyogre…\p"
# 1538 "data/maps/SootopolisCity/scripts.pory"
	.string "After all our fruitless scheming and\n"
# 1539 "data/maps/SootopolisCity/scripts.pory"
	.string "frantic efforts, that one Pokémon's\l"
# 1540 "data/maps/SootopolisCity/scripts.pory"
	.string "simple action puts everything right\l"
# 1541 "data/maps/SootopolisCity/scripts.pory"
	.string "again as if nothing had happened…\p"
# 1542 "data/maps/SootopolisCity/scripts.pory"
	.string "Fu…\n"
# 1543 "data/maps/SootopolisCity/scripts.pory"
	.string "Fuhahaha…$"
# 1544 "data/maps/SootopolisCity/scripts.pory"

# 1545 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ArchieSorry:
# 1546 "data/maps/SootopolisCity/scripts.pory"
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: …\p…\pSorry.$"
# 1547 "data/maps/SootopolisCity/scripts.pory"

# 1548 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_TryingMeaninglessToPokemon:
# 1549 "data/maps/SootopolisCity/scripts.pory"
	.string "Archie: Kyogre and Groudon both\n"
# 1550 "data/maps/SootopolisCity/scripts.pory"
	.string "flew off to who knows where.\p"
# 1551 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather in Hoenn has returned\n"
# 1552 "data/maps/SootopolisCity/scripts.pory"
	.string "to its normal state…\p"
# 1553 "data/maps/SootopolisCity/scripts.pory"
	.string "Haha…\n"
# 1554 "data/maps/SootopolisCity/scripts.pory"
	.string "Hahaha…\p"
# 1555 "data/maps/SootopolisCity/scripts.pory"
	.string "Maybe what we were trying to do was\n"
# 1556 "data/maps/SootopolisCity/scripts.pory"
	.string "something small, even meaningless,\l"
# 1557 "data/maps/SootopolisCity/scripts.pory"
	.string "to Pokémon…$"
# 1558 "data/maps/SootopolisCity/scripts.pory"

# 1559 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_InvolvedWithCrisis:
# 1560 "data/maps/SootopolisCity/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: {PLAYER}!\pSo you did come…\nI have been waiting for you.\p…\nWhat terrible weather.\pThose Pokémon fighting…\nGroudon… and Kyogre…$"
# 1561 "data/maps/SootopolisCity/scripts.pory"

# 1562 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_ComeWithMe:
# 1563 "data/maps/SootopolisCity/scripts.pory"
    .string "Ah, yes.\pYou need to hear what my friend has\nto say.\pCome with me, please.$"
# 1564 "data/maps/SootopolisCity/scripts.pory"

# 1565 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_DoesThisMakeYourFearPokemon:
# 1566 "data/maps/SootopolisCity/scripts.pory"
	.string "This weather…\pPeople and Pokémon need sunlight and\nwater to live.\pSo why does this fill us with so much\ndread?\p{PLAYER}.\pDoes seeing Groudon and Kyogre make\nyou think Pokémon are to be feared?\pBut that is not true.\nPokémon are really more…\p…Why am I asking you this?\nPerhaps you already know.$"
# 1567 "data/maps/SootopolisCity/scripts.pory"

# 1568 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_KnowWhatsNeededToHelpHim:
# 1569 "data/maps/SootopolisCity/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: You'll be OK.\pYou and your Pokémon can handle it,\nwhatever happens.\lI believe that.$"
# 1570 "data/maps/SootopolisCity/scripts.pory"

# 1571 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_NeverBeenToSkyPillar:
# 1572 "data/maps/SootopolisCity/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: The Sky Pillar…?\pI've never been there.\nI wonder where it could be?$"
# 1573 "data/maps/SootopolisCity/scripts.pory"

# 1574 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_SoThatsRayquaza:
# 1575 "data/maps/SootopolisCity/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: Rayquaza…\pIt is incredible how the two\nsuper-ancient Pokémon would flee\lfrom it in fear…$"
# 1576 "data/maps/SootopolisCity/scripts.pory"

# 1577 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_MaxieArchieLeft:
# 1578 "data/maps/SootopolisCity/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: It looks like both Maxie and\nArchie have gone away somewhere.\pPerhaps they've gone to Mt. Pyre to\nreturn those Orbs…$"
# 1579 "data/maps/SootopolisCity/scripts.pory"

# 1580 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Text_HaventYouScaledSkyPillar:
# 1581 "data/maps/SootopolisCity/scripts.pory"
	.string "{COLOR RED}Wallace{COLOR DARK_GRAY}: Oh?\pHaven't you scaled the Sky Pillar\nyet?\pI'm sure that you can make it to the\ntop of the Sky Pillar…$"

SootopolisCity_EventScript_RivalAppear::
# 1587 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_RivalAppear_Text_0
# 1588 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1589 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_RIVAL
# 1590 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_RIVAL, SootopolisCity_Movement_RivalApproachPlayer
# 1591 "data/maps/SootopolisCity/scripts.pory"
	waitmovement LOCALID_RIVAL
# 1592 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 1593 "data/maps/SootopolisCity/scripts.pory"
	delay 8
# 1594 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
# 1595 "data/maps/SootopolisCity/scripts.pory"
	waitmovement LOCALID_STEVEN
# 1596 "data/maps/SootopolisCity/scripts.pory"
	checkplayergender
# 1597 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SootopolisCity_EventScript_RivalAppear_2
# 1601 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_RivalAppear_Text_3
# 1602 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_RivalAppear_Text_4
SootopolisCity_EventScript_RivalAppear_1:
# 1604 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1605 "data/maps/SootopolisCity/scripts.pory"
	delay 24
# 1606 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceLeft
# 1607 "data/maps/SootopolisCity/scripts.pory"
	delay 8
# 1608 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 1609 "data/maps/SootopolisCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1610 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_RivalAppear_Text_5
# 1611 "data/maps/SootopolisCity/scripts.pory"
	closemessage
	return

SootopolisCity_EventScript_RivalAppear_2:
# 1598 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_RivalAppear_Text_1
# 1599 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_RivalAppear_Text_2
	goto SootopolisCity_EventScript_RivalAppear_1


# 1615 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_RivalApproachPlayer:
# 1616 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1617 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_left
# 1617 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_left
# 1617 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_left
# 1617 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_left
# 1617 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_left
# 1617 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_left
# 1617 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_left
# 1617 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_left
# 1618 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_down
# 1618 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_down
# 1618 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_down
# 1618 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_down
# 1618 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_down
# 1618 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_down
# 1618 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_down
# 1618 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_down
# 1619 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_right
# 1619 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_right
# 1619 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_right
# 1619 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_right
# 1619 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_right
# 1620 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_up
# 1620 "data/maps/SootopolisCity/scripts.pory"
	walk_fast_up
	step_end

SootopolisCity_EventScript_Rival::
# 1624 "data/maps/SootopolisCity/scripts.pory"
	lock
# 1625 "data/maps/SootopolisCity/scripts.pory"
	faceplayer
# 1626 "data/maps/SootopolisCity/scripts.pory"
	checkplayergender
# 1627 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SootopolisCity_EventScript_Rival_2
# 1630 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_Rival_Text_1
SootopolisCity_EventScript_Rival_1:
# 1632 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1633 "data/maps/SootopolisCity/scripts.pory"
	release
	end

SootopolisCity_EventScript_Rival_2:
# 1628 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_Rival_Text_0
	goto SootopolisCity_EventScript_Rival_1


SootopolisCity_EventScript_Tabitha::
# 1638 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_Tabitha_Text_0, MSGBOX_NPC
	end


SootopolisCity_EventScript_Shelly::
# 1643 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_Shelly_Text_0, MSGBOX_NPC
	end


SootopolisCity_EventScript_AfterRayquazaScene::
# 1648 "data/maps/SootopolisCity/scripts.pory"
	lock
# 1649 "data/maps/SootopolisCity/scripts.pory"
	delay 16
# 1650 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkLeft
# 1651 "data/maps/SootopolisCity/scripts.pory"
	waitmovement LOCALID_RIVAL
# 1652 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceUp
# 1653 "data/maps/SootopolisCity/scripts.pory"
	waitmovement LOCALID_RIVAL
# 1654 "data/maps/SootopolisCity/scripts.pory"
	checkplayergender
# 1655 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SootopolisCity_EventScript_AfterRayquazaScene_2
# 1658 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_1
SootopolisCity_EventScript_AfterRayquazaScene_1:
# 1660 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1661 "data/maps/SootopolisCity/scripts.pory"
	delay 8
# 1662 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkRight
# 1663 "data/maps/SootopolisCity/scripts.pory"
	waitmovement LOCALID_STEVEN
# 1664 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_2
# 1665 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1666 "data/maps/SootopolisCity/scripts.pory"
	delay 24
# 1667 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
# 1668 "data/maps/SootopolisCity/scripts.pory"
	delay 8
# 1669 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceDown
# 1670 "data/maps/SootopolisCity/scripts.pory"
	waitmovement LOCALID_RIVAL
# 1671 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_3
# 1672 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1673 "data/maps/SootopolisCity/scripts.pory"
	delay 64
# 1674 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 1675 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_AfterRayquazaScene_CameraPanToLeaders
# 1676 "data/maps/SootopolisCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1677 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_4
# 1678 "data/maps/SootopolisCity/scripts.pory"
	delay 16
# 1679 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_5
# 1680 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_6
# 1681 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1682 "data/maps/SootopolisCity/scripts.pory"
	delay 32
# 1683 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_7
# 1684 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1685 "data/maps/SootopolisCity/scripts.pory"
	delay 24
# 1686 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_8
# 1687 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1688 "data/maps/SootopolisCity/scripts.pory"
	delay 32
# 1689 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_9
# 1690 "data/maps/SootopolisCity/scripts.pory"
	delay 16
# 1691 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_10
# 1692 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1693 "data/maps/SootopolisCity/scripts.pory"
	delay 16
# 1694 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceDown
# 1695 "data/maps/SootopolisCity/scripts.pory"
	waitmovement LOCALID_SHELLY
# 1696 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_11
# 1697 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1698 "data/maps/SootopolisCity/scripts.pory"
	delay 16
# 1699 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceRight
# 1700 "data/maps/SootopolisCity/scripts.pory"
	waitmovement LOCALID_ARCHIE
# 1701 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_12
# 1702 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1703 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceLeft
# 1704 "data/maps/SootopolisCity/scripts.pory"
	waitmovement LOCALID_SHELLY
# 1705 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_13
# 1706 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1707 "data/maps/SootopolisCity/scripts.pory"
	delay 24
# 1708 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_14
# 1709 "data/maps/SootopolisCity/scripts.pory"
	delay 16
# 1710 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_15
# 1711 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1712 "data/maps/SootopolisCity/scripts.pory"
	delay 32
# 1713 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_MAXIE, SootopolisCity_Movement_AfterRayquazaScene_MaxieGotoPlayer
# 1714 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_AfterRayquazaScene_CameraGoBack
# 1715 "data/maps/SootopolisCity/scripts.pory"
	delay 16
# 1716 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceRight
# 1717 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_16
# 1718 "data/maps/SootopolisCity/scripts.pory"
	waitmovement LOCALID_MAXIE
# 1719 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1720 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 1721 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_AfterRayquazaScene_StevenMoveAsideForMaxie
# 1722 "data/maps/SootopolisCity/scripts.pory"
	delay 8
# 1723 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 1724 "data/maps/SootopolisCity/scripts.pory"
	delay 4
# 1725 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceLeft
# 1726 "data/maps/SootopolisCity/scripts.pory"
	waitmovement LOCALID_STEVEN
# 1727 "data/maps/SootopolisCity/scripts.pory"
	delay 16
# 1728 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_17
# 1729 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1730 "data/maps/SootopolisCity/scripts.pory"
	delay 16
# 1731 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_MAXIE, SootopolisCity_Movement_AfterRayquazaScene_MaxieMoveAsideForArchie
# 1732 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_ARCHIE, SootopolisCity_Movement_AfterRayquazaScene_ArchieGotoPlayer
# 1733 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SHELLY, SootopolisCity_Movement_AfterRayquazaScene_ShellyGotoPlayer
# 1734 "data/maps/SootopolisCity/scripts.pory"
	waitmovement LOCALID_ARCHIE
# 1735 "data/maps/SootopolisCity/scripts.pory"
	delay 8
# 1736 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_18
# 1737 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1738 "data/maps/SootopolisCity/scripts.pory"
	delay 24
# 1739 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_19
# 1740 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1741 "data/maps/SootopolisCity/scripts.pory"
	delay 16
# 1742 "data/maps/SootopolisCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1743 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MET_MAXIE_SOOTOPOLIS
# 1744 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MET_ARCHIE_SOOTOPOLIS
# 1745 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE
# 1746 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 1747 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE
# 1748 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
# 1749 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 2
# 1750 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 7
# 1751 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_ARCHIE
# 1752 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SHELLY
# 1753 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_MAXIE
# 1754 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_TABITHA
# 1755 "data/maps/SootopolisCity/scripts.pory"
	delay 32
# 1756 "data/maps/SootopolisCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1757 "data/maps/SootopolisCity/scripts.pory"
	delay 8
# 1758 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
# 1759 "data/maps/SootopolisCity/scripts.pory"
	delay 8
# 1760 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 1761 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceUp
# 1762 "data/maps/SootopolisCity/scripts.pory"
	waitmovement LOCALID_RIVAL
# 1763 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_20
# 1764 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1765 "data/maps/SootopolisCity/scripts.pory"
	delay 16
# 1766 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_AfterRayquazaScene_StevenGoToPlayerLeft
# 1767 "data/maps/SootopolisCity/scripts.pory"
	waitmovement LOCALID_STEVEN
# 1768 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 1769 "data/maps/SootopolisCity/scripts.pory"
	delay 8
# 1770 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceLeft
# 1771 "data/maps/SootopolisCity/scripts.pory"
	waitmovement LOCALID_RIVAL
# 1772 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_21
# 1773 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1774 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceRight
# 1775 "data/maps/SootopolisCity/scripts.pory"
	waitmovement LOCALID_STEVEN
# 1776 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_22
# 1777 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_23
# 1778 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1779 "data/maps/SootopolisCity/scripts.pory"
	delay 32
# 1780 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
# 1781 "data/maps/SootopolisCity/scripts.pory"
	waitmovement LOCALID_STEVEN
# 1782 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_24
# 1783 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1784 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceRight
# 1785 "data/maps/SootopolisCity/scripts.pory"
	waitmovement LOCALID_STEVEN
# 1786 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_25
# 1787 "data/maps/SootopolisCity/scripts.pory"
	delay 16
# 1788 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_26
# 1789 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1790 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
# 1791 "data/maps/SootopolisCity/scripts.pory"
	waitmovement LOCALID_STEVEN
# 1792 "data/maps/SootopolisCity/scripts.pory"
	delay 48
# 1793 "data/maps/SootopolisCity/scripts.pory"
	setfieldeffectargument 0, 1
# 1794 "data/maps/SootopolisCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 1795 "data/maps/SootopolisCity/scripts.pory"
	delay 16
# 1796 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_STEVEN
# 1797 "data/maps/SootopolisCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 1798 "data/maps/SootopolisCity/scripts.pory"
	delay 64
# 1799 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceUp
# 1800 "data/maps/SootopolisCity/scripts.pory"
	delay 8
# 1801 "data/maps/SootopolisCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 1802 "data/maps/SootopolisCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1803 "data/maps/SootopolisCity/scripts.pory"
	checkplayergender
# 1804 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SootopolisCity_EventScript_AfterRayquazaScene_6
# 1807 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_28
SootopolisCity_EventScript_AfterRayquazaScene_5:
# 1809 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1810 "data/maps/SootopolisCity/scripts.pory"
	delay 16
# 1811 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceLeft
# 1812 "data/maps/SootopolisCity/scripts.pory"
	waitmovement LOCALID_RIVAL
# 1813 "data/maps/SootopolisCity/scripts.pory"
	delay 32
# 1814 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceUp
# 1815 "data/maps/SootopolisCity/scripts.pory"
	waitmovement LOCALID_RIVAL
# 1816 "data/maps/SootopolisCity/scripts.pory"
	checkplayergender
# 1817 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SootopolisCity_EventScript_AfterRayquazaScene_10
# 1823 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_31
# 1824 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1825 "data/maps/SootopolisCity/scripts.pory"
	delay 24
# 1826 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_32
SootopolisCity_EventScript_AfterRayquazaScene_9:
# 1828 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1829 "data/maps/SootopolisCity/scripts.pory"
	delay 8
# 1830 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkLeft
# 1831 "data/maps/SootopolisCity/scripts.pory"
	waitmovement LOCALID_RIVAL
# 1832 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceDown
# 1833 "data/maps/SootopolisCity/scripts.pory"
	waitmovement LOCALID_RIVAL
# 1834 "data/maps/SootopolisCity/scripts.pory"
	delay 48
# 1835 "data/maps/SootopolisCity/scripts.pory"
	setfieldeffectargument 0, 1
# 1836 "data/maps/SootopolisCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 1837 "data/maps/SootopolisCity/scripts.pory"
	delay 16
# 1838 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_RIVAL
# 1839 "data/maps/SootopolisCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 1840 "data/maps/SootopolisCity/scripts.pory"
	delay 32
# 1841 "data/maps/SootopolisCity/scripts.pory"
	release
	end

SootopolisCity_EventScript_AfterRayquazaScene_2:
# 1656 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_0
	goto SootopolisCity_EventScript_AfterRayquazaScene_1

SootopolisCity_EventScript_AfterRayquazaScene_6:
# 1805 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_27
	goto SootopolisCity_EventScript_AfterRayquazaScene_5

SootopolisCity_EventScript_AfterRayquazaScene_10:
# 1818 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_29
# 1819 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 1820 "data/maps/SootopolisCity/scripts.pory"
	delay 24
# 1821 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_30
	goto SootopolisCity_EventScript_AfterRayquazaScene_9


# 1845 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_AfterRayquazaScene_CameraPanToLeaders:
# 1846 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1846 "data/maps/SootopolisCity/scripts.pory"
	walk_left
	step_end

# 1849 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_AfterRayquazaScene_MaxieGotoPlayer:
# 1850 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1850 "data/maps/SootopolisCity/scripts.pory"
	walk_right
	step_end

# 1853 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_AfterRayquazaScene_StevenMoveAsideForMaxie:
# 1854 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 1855 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_left
# 1856 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1857 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 1858 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1859 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_left
	step_end

# 1862 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_AfterRayquazaScene_CameraGoBack:
# 1863 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1863 "data/maps/SootopolisCity/scripts.pory"
	walk_right
	step_end

# 1866 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_AfterRayquazaScene_MaxieMoveAsideForArchie:
# 1867 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1868 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_right
	step_end

# 1871 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_AfterRayquazaScene_ArchieGotoPlayer:
# 1872 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1872 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 1873 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1873 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1874 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_right
	step_end

# 1877 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_AfterRayquazaScene_ShellyGotoPlayer:
# 1878 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 1879 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 1880 "data/maps/SootopolisCity/scripts.pory"
	walk_in_place_right
	step_end

# 1883 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_AfterRayquazaScene_StevenGoToPlayerLeft:
# 1884 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 1885 "data/maps/SootopolisCity/scripts.pory"
	walk_down
	step_end

SootopolisCity_EventScript_RivalAppear_Text_0:
# 1587 "data/maps/SootopolisCity/scripts.pory"
	.string "Here we are.\nThis is the Cave of Origin.\pYou'll find someone named Wallace\ninside. He is my friend.$"

SootopolisCity_EventScript_RivalAppear_Text_1:
# 1598 "data/maps/SootopolisCity/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: {PLAYER}!\pI heard on the news that things were\ngoing haywire around Sootopolis.\pAnd then I saw you, {PLAYER}!\pI couldn't just sit there and do\nnothing when I knew you were here in\lthe thick of it, so I came flying!\pAfter seeing Team Magma and Team Aqua,\nI am, like, shocked and confused on\lso many levels right now.\pThis is probably something way bigger\nthat I can even imagine, isn't it?\lSo I'm not even going to ask right now.$"

SootopolisCity_EventScript_RivalAppear_Text_2:
# 1599 "data/maps/SootopolisCity/scripts.pory"
	.string "I'm going to try to find what I can\ndo to help, and then I'm going to do\lmy best with that.\pAnd I'm going to keep hoping and\nbelieving that y-you'll be OK out\lthere, {PLAYER}.\pBecause…\pBecause you… You're the best friend I\nhave!$"

SootopolisCity_EventScript_RivalAppear_Text_3:
# 1601 "data/maps/SootopolisCity/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: {PLAYER}!\pWhen I saw the news about Sootopolis,\nand there you were, {PLAYER}…\pWell, anyway, all I could think of was\ncoming to help!\pYou don't know how glad I am to see\nthat you're still in one piece.\pSeeing Team Magma and Team Aqua,\nI don't really know what to say right\lnow--I'm kind of dumbfounded.\pLook, I get that this is probably\nsomething way bigger that I've ever\limagined.\lSo, I won't bother any questions now.$"

SootopolisCity_EventScript_RivalAppear_Text_4:
# 1602 "data/maps/SootopolisCity/scripts.pory"
	.string "I'm gonna find out what I should\ndo to help, and then I'm going to do\lwhatever I can.\pYou'd better go do the same,\n{PLAYER}.\pI'll always be right there behind you.\nYou're my best friend, after all!$"

SootopolisCity_EventScript_RivalAppear_Text_5:
# 1610 "data/maps/SootopolisCity/scripts.pory"
	.string "You'll be OK.\pYou and your Pokémon can handle it,\nwhatever happens.\lI believe that.$"

SootopolisCity_EventScript_Rival_Text_0:
# 1628 "data/maps/SootopolisCity/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: I'm going to try to find what I\ncan do to help, and then I'm going to\ldo my best with that.\pAnd I'm going to keep on hoping and\nbelieving that you'll be OK out there,\l{PLAYER}.\pPlease…give it everything you've got!$"

SootopolisCity_EventScript_Rival_Text_1:
# 1630 "data/maps/SootopolisCity/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: I'm gonna find out what I\nshould do to help, and them I'm going\lto do whatever I can.\pYou'd better go do the same,\n{PLAYER}.\pAnd I'll always be right there behind\nyou.\pA-after all…we're friends, right?$"

SootopolisCity_EventScript_Tabitha_Text_0:
# 1638 "data/maps/SootopolisCity/scripts.pory"
	.string "{COLOR RED}Tabitha{COLOR DARK_GRAY}: It is very possible\nthat Groudon's energy could be far\lgreater than our calculations show.$"

SootopolisCity_EventScript_Shelly_Text_0:
# 1643 "data/maps/SootopolisCity/scripts.pory"
	.string "{COLOR RED}Shelly{COLOR DARK_GRAY}: The energy overflowing from\nKyogre is certainly more powerful\lthat we had anticipated.\pIts influence is making the current\ngrow stronger.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_0:
# 1656 "data/maps/SootopolisCity/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: {PLAYER}!!!\pIt's really over, isn't it…$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_1:
# 1658 "data/maps/SootopolisCity/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: {PLAYER}!\pSo it's all over…$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_2:
# 1664 "data/maps/SootopolisCity/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: {PLAYER}, we owe you great\nthanks.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_3:
# 1671 "data/maps/SootopolisCity/scripts.pory"
	.string "Look above you.\pThe sky over Sootopolis has returned\nto normal.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_4:
# 1677 "data/maps/SootopolisCity/scripts.pory"
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: Somehow, it's…so warm…$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_5:
# 1679 "data/maps/SootopolisCity/scripts.pory"
	.string "{COLOR RED}Maxie{COLOR DARK_GRAY}: …$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_6:
# 1680 "data/maps/SootopolisCity/scripts.pory"
	.string "{COLOR RED}Tabitha{COLOR DARK_GRAY}: It's as if the uncertainty\nand fear from moments ago never\leven existed.\pMy heart feels like it's been softly set\nat ease…$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_7:
# 1683 "data/maps/SootopolisCity/scripts.pory"
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: …\pThe sea or the land…\pPokémon or humanity…\pAll this time we've just been trying\nto grab onto happiness for one of\lthem, even if it meant destroying\lthe other…$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_8:
# 1686 "data/maps/SootopolisCity/scripts.pory"
	.string "Look at how things have turned\nout, now the world's got its natural\lbalance back…\pWe've got to rethink this thing from\nthe very start…\pWe've got to redo everything we've\ndone from scratch--and get it right\lthis time.\pWhaddaya say?\nMaxie…$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_9:
# 1689 "data/maps/SootopolisCity/scripts.pory"
	.string "{COLOR RED}Maxie{COLOR DARK_GRAY}: …\pI suppose…you may be right…\pHowever…\pPersonally, in my case…\pSome wrongs cannot be atoned for, no\nmatter how you try to right them.\pAnd I have committed wrongs so\ngreat as to bring the whole world to\lits knees.\pIt may be that I…\pIt may be too much to assume that\nI should deserve the chance to start\lanything over.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_10:
# 1691 "data/maps/SootopolisCity/scripts.pory"
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: …\pYeah.\nYou're right.\pMaxie…\nWhat you're saying is only natural.\pThe world I believed to be ideal…\pThe kind of world that I dreamed of\nmaking, where I could live alongside\lmy beloved Pokémon…\lThat hasn't changed.\pI know I've got nothing to stand on,\nafter causing this much hurt, but…$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_11:
# 1696 "data/maps/SootopolisCity/scripts.pory"
	.string "{COLOR RED}Shelly{COLOR DARK_GRAY}: That's right.\pYou've caused a big fuss there\nwhen you almost brought about the\ldownfall of the world, you big dolt!\pNo matter how much you beg, no one can\nforgive that!$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_12:
# 1701 "data/maps/SootopolisCity/scripts.pory"
	.string "But… Do you really need\ntheir forgiveness, though?\pEven if you are a big dolt who no one in\nthe world will ever forgive…$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_13:
# 1705 "data/maps/SootopolisCity/scripts.pory"
	.string "I'll…\pI'll stay with you!\nI'll stay with you forever!\pSo please…\pStop going out on your own and acting\ncrazy.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_14:
# 1708 "data/maps/SootopolisCity/scripts.pory"
	.string "You're…our…\nTeam Aqua's leader,\land we're your friends, after all.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_15:
# 1710 "data/maps/SootopolisCity/scripts.pory"
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: Shelly…\pSorry…and thanks.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_16:
# 1717 "data/maps/SootopolisCity/scripts.pory"
	.string "{COLOR RED}Tabitha{COLOR DARK_GRAY}: Leader…$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_17:
# 1728 "data/maps/SootopolisCity/scripts.pory"
	.string "{COLOR RED}Maxie{COLOR DARK_GRAY}: Hmph…\pWe adults have a duty to pass this\nworld along to the next generation.\pA world worth passing along.\pWhat is it we truly need to do to create\nsuch a world?\pTake each other's hand in friendship?\nOr fight for the right of supremacy?\pI think it is time we consider\nthis again with our team members and\lbreak down the wall between us.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_18:
# 1736 "data/maps/SootopolisCity/scripts.pory"
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: All right, ya little scamp.\pMaxie and I have been thinkin'.\nWe're heading back to Mt. Pyre, to\lreturn these orbs we took.\pYeah, we stirred the waters, upset\nthe balance, and it ain't sittin' right\lwith us.\pTime to make amends, to give back what\nwe shouldn't have taken.\pLater, scamp!$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_19:
# 1739 "data/maps/SootopolisCity/scripts.pory"
	.string "{COLOR RED}Maxie{COLOR DARK_GRAY}: Farewell.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_20:
# 1763 "data/maps/SootopolisCity/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: Team Magma and Team Aqua\nare made up of people with completely\lopposing ideals and goals.\pBut perhaps even they can learn to\nmeet halfway…one small concession at\la time.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_21:
# 1772 "data/maps/SootopolisCity/scripts.pory"
	.string "I know it's too much to expect that\neverything will change at one, but…\pI hope this crisis might at least\nhelp them take that first vital step\lforward.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_22:
# 1776 "data/maps/SootopolisCity/scripts.pory"
	.string "I imagine that many changes are\nhappening now all across Hoenn.\pI hope you will be able to travel this\nworld and see its richness with your\lown eyes--and revel in its newness in\lyour own heart.\pBut for the present, you may first wish\nto challenge this city's Pokémon Gym.\pThere, you'll find the very same Wallace\nwho helped us so much waiting for you.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_23:
# 1777 "data/maps/SootopolisCity/scripts.pory"
	.string "He's strong.\pBut the way you are now, you\nshould be capable of battling him on\lan equal footing.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_24:
# 1782 "data/maps/SootopolisCity/scripts.pory"
	.string "People, Pokémon, nature itself…\nOur survival in this world depends on\lall of us living together in harmony.\pI feel I have just begun to understand\nthat.\pAnd I'm wondering how the world\nwill continue to change from this\lpoint on…\pIt fills me with an inexplicable\nexitement.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_25:
# 1786 "data/maps/SootopolisCity/scripts.pory"
	.string "{PLAYER}…\pAs you and your Pokémon live and\ngrow in this changed world, I wonder\lwhat effect it will have on you.\pWhat will you think about?\nWhat ideals will you believe in?$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_26:
# 1788 "data/maps/SootopolisCity/scripts.pory"
	.string "If we do get the chance to meet again,\nI hope you will be able to show me and\lmy team the answers you've found.\pUntil then.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_27:
# 1805 "data/maps/SootopolisCity/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Phew!\pFinally, it's just the two of us again.\pI've got to say…thanks for everything\nyou've done for our region, {PLAYER}.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_28:
# 1807 "data/maps/SootopolisCity/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: Phew!\pIt feels like we can finally relax,\nhuh?\pI guess that now's the time to say\nthanks for all you've done, {PLAYER}.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_29:
# 1818 "data/maps/SootopolisCity/scripts.pory"
	.string "You know, I thought we were\nsupposed to have out from Littleroot\ltogether, but…\pBut you, {PLAYER}…\pIt seems like you just keep getting\nfurther and further ahead of me…\pI even started to feel like you'd gone\nsomewhere that I can't even reach.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_30:
# 1821 "data/maps/SootopolisCity/scripts.pory"
	.string "It's pretty lonely, you know?\pNot!\pWhat would you think if I said\nsomething like that?\pHee hee!\pAnyway, you did something really\namazing today, so try to take it easy\lfor a while!\pSee you later!$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_31:
# 1823 "data/maps/SootopolisCity/scripts.pory"
	.string "You know, we set out from Littleroot at\nthe same time, but…\pIt seems like you're just dashing ahead\nby yourself and leaving me behind…\pI feel like we're not even on the same\nlevel anymore, you know?$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_32:
# 1826 "data/maps/SootopolisCity/scripts.pory"
	.string "…\pIt's kinda lonely thinking like that…\pOr it would be if I really thought\nthat!\pBut…well, you did do something pretty\namazing.\pSo take it easy for a while, OK,\nfriend?\pLater!$"
