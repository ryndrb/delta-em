.set LOCALID_EXPERT, 1
.set LOCALID_WOMAN_2, 2
.set LOCALID_KIRI, 3
.set LOCALID_NINJA_BOY, 4
.set LOCALID_BOY_1, 5
.set LOCALID_STEVEN, 7
.set LOCALID_WOMAN_1, 8
.set LOCALID_GROUDON, 9
.set LOCALID_KYOGRE, 10
.set LOCALID_RAYQUAZA, 11
.set LOCALID_MANIAC, 12
.set LOCALID_GIRL, 13
.set LOCALID_BLACK_BELT, 14
.set LOCALID_BOY_2, 15
.set LOCALID_MAXIE, 16
.set LOCALID_ARCHIE, 17
.set LOCALID_WALLACE, 18
.set LOCALID_RIVAL, 19
.set LOCALID_TABITHA, 20
.set LOCALID_SHELLY, 21

SootopolisCity_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SootopolisCity_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SootopolisCity_OnResume
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SootopolisCity_OnWarp
	.byte 0

SootopolisCity_OnLoad:
	call_if_unset FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_LockGymDoor
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_EventScript_LegendariesNotArrived
	call_if_unset FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_LockHouseDoors
	end

SootopolisCity_EventScript_LegendariesNotArrived::
	end

SootopolisCity_EventScript_LockHouseDoors::
	setmetatile 9, 6, METATILE_Sootopolis_Door_Closed, TRUE
	setmetatile 9, 17, METATILE_Sootopolis_Door_Closed, TRUE
	setmetatile 9, 26, METATILE_Sootopolis_Door_Closed, TRUE
	setmetatile 44, 17, METATILE_Sootopolis_Door_Closed, TRUE
	setmetatile 8, 35, METATILE_Sootopolis_Door_Closed, TRUE
	setmetatile 53, 28, METATILE_Sootopolis_Door_Closed, TRUE
	setmetatile 45, 6, METATILE_Sootopolis_Door_Closed, TRUE
	setmetatile 48, 25, METATILE_Sootopolis_Door_Closed, TRUE
	setmetatile 51, 36, METATILE_Sootopolis_Door_Closed, TRUE
	return

SootopolisCity_EventScript_LockGymDoor::
	setmetatile 31, 32, METATILE_Sootopolis_GymDoor_Closed, TRUE
	return

SootopolisCity_OnTransition:
    call Common_EventScript_SetupRivalGfxId
	setflag FLAG_VISITED_SOOTOPOLIS_CITY
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_HideMapNamePopup
	call_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_HideMapNamePopup
	call SootopolisCity_EventScript_SetWeather
	call SootopolisCity_EventScript_SetLayout
    call_if_set FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN, SootopolisCity_EventScript_RivalPos
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetBattleSpectators
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_SetBattleSpectators
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_SetBattleSpectators
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetBattleSpectators
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_SetBattleSpectators
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetAquaWallaceReturnPos
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetExitCaveOfOriginObjPos
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_SetOutsideGymObjPos
	call_if_eq VAR_SOOTOPOLIS_CITY_STATE, 7, SootopolisCity_EventScript_SetExpertBlockCaveEntrance
	end

SootopolisCity_EventScript_HideMapNamePopup::
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return

SootopolisCity_EventScript_RivalPos::
    setobjectxyperm LOCALID_RIVAL, 32, 22
    setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_DOWN
    return

SootopolisCity_EventScript_SetBattleSpectators::
	setobjectxyperm LOCALID_KIRI, 13, 48
	setobjectxyperm LOCALID_BOY_1, 46, 32
	setobjectxyperm LOCALID_NINJA_BOY, 48, 41
	setobjectxyperm LOCALID_WOMAN_1, 45, 43
	setobjectmovementtype LOCALID_KIRI, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype LOCALID_BOY_1, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype LOCALID_NINJA_BOY, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype LOCALID_WOMAN_1, MOVEMENT_TYPE_FACE_LEFT
	return

SootopolisCity_EventScript_SetAquaWallaceReturnPos::
	setobjectxyperm LOCALID_ARCHIE, 32, 35
	setobjectxyperm LOCALID_SHELLY, 33, 35
	return

SootopolisCity_EventScript_SetLayout::
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 0, SootopolisCity_EventScript_SetNormalLayout
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 7, SootopolisCity_EventScript_SetNormalLayout
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetLegendariesLayout
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_SetLegendariesLayout
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_SetLegendariesLayout
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_SetLegendariesLayout
	goto_if_le VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_SetLegendariesLayout
	return

SootopolisCity_EventScript_SetNormalLayout::
	return

SootopolisCity_EventScript_SetLegendariesLayout::
	setmaplayoutindex LAYOUT_SOOTOPOLIS_CITY_LEGENDS_BATTLE
	return

SootopolisCity_EventScript_SetWeather::
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 0, SootopolisCity_EventScript_SetNormalWeather
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 7, SootopolisCity_EventScript_SetNormalWeather
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_SetDownpour
	goto_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_SetDownpour
	goto_if_le VAR_SKY_PILLAR_STATE, 1, Common_EventScript_SetAbnormalWeather
	return

SootopolisCity_EventScript_SetNormalWeather::
	return

SootopolisCity_EventScript_SetDownpour::
	setweather WEATHER_DOWNPOUR
	return

SootopolisCity_EventScript_CheckSetEnterCaveOfOriginObjPos::
	goto_if_set FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN, SootopolisCity_EventScript_SetEnterCaveOfOriginObjPos
	return

SootopolisCity_EventScript_SetEnterCaveOfOriginObjPos::
	setobjectxyperm LOCALID_EXPERT, 30, 18
	setobjectxyperm LOCALID_STEVEN, 32, 18
	return

SootopolisCity_EventScript_SetExitCaveOfOriginObjPos::
	setobjectxyperm LOCALID_EXPERT, 30, 18
	setobjectxyperm LOCALID_STEVEN, 32, 18
	end

SootopolisCity_EventScript_SetOutsideGymObjPos::
	setobjectxyperm LOCALID_EXPERT, 31, 18
	setobjectxyperm LOCALID_WALLACE, 31, 33
	setobjectxyperm LOCALID_STEVEN, 29, 35
	setobjectxyperm LOCALID_RIVAL, 32, 36
	setobjectxyperm LOCALID_MAXIE, 27, 35
	setobjectxyperm LOCALID_TABITHA, 28, 36
	setobjectxyperm LOCALID_ARCHIE, 27, 33
	setobjectxyperm LOCALID_SHELLY, 28, 33
	setobjectmovementtype LOCALID_WALLACE, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype LOCALID_MAXIE, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype LOCALID_TABITHA, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype LOCALID_ARCHIE, MOVEMENT_TYPE_FACE_LEFT
	setobjectmovementtype LOCALID_SHELLY, MOVEMENT_TYPE_FACE_LEFT
	return

SootopolisCity_EventScript_SetExpertBlockCaveEntrance::
	setobjectxyperm LOCALID_EXPERT, 31, 18
	return

SootopolisCity_OnWarp:
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_PlayerFaceLegendaries
	.2byte 0

SootopolisCity_EventScript_PlayerFaceLegendaries::
	call_if_eq VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_PlayerFaceLegendaries1
	call_if_eq VAR_SKY_PILLAR_STATE, 2, SootopolisCity_EventScript_PlayerFaceLegendaries2
	end

SootopolisCity_EventScript_PlayerFaceLegendaries1::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	return

SootopolisCity_EventScript_PlayerFaceLegendaries2::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	setvar VAR_SKY_PILLAR_STATE, 3
	return

SootopolisCity_OnResume:
	setdivewarp MAP_UNDERWATER_SOOTOPOLIS_CITY, 9, 6
	end

SootopolisCity_OnFrame:
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_StartLegendariesScene
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_EventScript_AfterRayquazaScene
	map_script_2 VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_StartRayquazaScene
	.2byte 0

@ If not at PokeCenter, assumed to have arrived via Dive
SootopolisCity_EventScript_StartLegendariesScene::
	lockall
	special StorePlayerCoordsInVars
	goto_if_ne VAR_0x8004, 43, SootopolisCity_EventScript_LegendariesSceneFromDive
	goto_if_ne VAR_0x8005, 32, SootopolisCity_EventScript_LegendariesSceneFromDive
	goto SootopolisCity_EventScript_LegendariesSceneFromPokeCenter
	end

SootopolisCity_EventScript_LegendariesSceneFromPokeCenter::
	delay 60
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromPokeCenter
	waitmovement 0
	special RemoveCameraObject
	delay 60
	fadescreenspeed FADE_TO_BLACK, 8
	setweather WEATHER_ABNORMAL
	doweather
	setvar VAR_0x8004, FALSE @ Just do Groudon/Kyogre fight scene
	special Script_DoRayquazaScene
	waitstate
	applymovement LOCALID_KYOGRE, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_GROUDON, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	delay 60
	waitse
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
	waitmovement 0
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
	waitmovement 0
	waitse
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreDefend
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonAttack
	waitmovement 0
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
	waitmovement 0
	waitse
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
	waitmovement 0
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
	waitmovement 0
	special SpawnCameraObject
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreIdle
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonIdle
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanBackToPokeCenter
	waitmovement 0
	special RemoveCameraObject
	setvar VAR_SOOTOPOLIS_CITY_STATE, 2
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	releaseall
	end

SootopolisCity_Movement_PanToActionFromPokeCenter:
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	step_end

SootopolisCity_Movement_PanBackToPokeCenter:
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	step_end

SootopolisCity_EventScript_LegendariesSceneFromDive::
	delay 60
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromDive
	waitmovement 0
	special RemoveCameraObject
	delay 60
	fadescreenspeed FADE_TO_BLACK, 8
	setweather WEATHER_ABNORMAL
	doweather
	setvar VAR_0x8004, FALSE @ Just do Groudon/Kyogre fight scene
	special Script_DoRayquazaScene
	waitstate
	applymovement LOCALID_KYOGRE, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_GROUDON, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	delay 60
	waitse
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
	waitmovement 0
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
	waitmovement 0
	waitse
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreDefend
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonAttack
	waitmovement 0
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
	waitmovement 0
	waitse
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreAttack
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonDefend
	waitmovement 0
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreMoveBack
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonMoveBack
	waitmovement 0
	special SpawnCameraObject
	applymovement LOCALID_KYOGRE, SootopolisCity_Movement_KyogreIdle
	applymovement LOCALID_GROUDON, SootopolisCity_Movement_GroudonIdle
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanBackToDive
	waitmovement 0
	special RemoveCameraObject
	setvar VAR_SOOTOPOLIS_CITY_STATE, 2
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	releaseall
	end

SootopolisCity_Movement_PanToActionFromDive:
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

SootopolisCity_Movement_PanBackToDive:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	step_end

SootopolisCity_Movement_KyogreAttack:
	walk_in_place_slow_left
	walk_in_place_slow_left
	walk_in_place_slow_left
	delay_16
	delay_16
	delay_16
	init_affine_anim
	walk_left_affine
	clear_affine_anim
	step_end

SootopolisCity_Movement_KyogreDefend:
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	init_affine_anim
	walk_left_affine
	clear_affine_anim
	step_end

SootopolisCity_Movement_KyogreMoveBack:
	lock_facing_direction
	walk_right
	delay_16
	delay_16
	delay_16
	unlock_facing_direction
	step_end

SootopolisCity_Movement_KyogreIdle:
	walk_in_place_slow_left
	walk_in_place_slow_left
	walk_in_place_slow_left
	walk_in_place_slow_left
	walk_in_place_slow_left
	walk_in_place_slow_left
	step_end

SootopolisCity_Movement_GroudonAttack:
	walk_in_place_slow_right
	walk_in_place_slow_right
	walk_in_place_slow_right
	delay_16
	delay_16
	delay_16
	walk_fast_right
	step_end

SootopolisCity_Movement_GroudonDefend:
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_fast_right
	step_end

SootopolisCity_Movement_GroudonMoveBack:
	lock_facing_direction
	walk_left
	delay_16
	delay_16
	delay_16
	unlock_facing_direction
	step_end

SootopolisCity_Movement_GroudonIdle:
	walk_in_place_slow_right
	walk_in_place_slow_right
	walk_in_place_slow_right
	walk_in_place_slow_right
	walk_in_place_slow_right
	walk_in_place_slow_right
	step_end

@ If not at PokeCenter, assumed to have arrived via Dive
SootopolisCity_EventScript_StartRayquazaScene::
	lockall
	special StorePlayerCoordsInVars
	clearflag FLAG_HIDE_ROUTE_131_LADY
	goto_if_ne VAR_0x8004, 43, SootopolisCity_EventScript_RayquazaSceneFromDive
	goto_if_ne VAR_0x8005, 32, SootopolisCity_EventScript_RayquazaSceneFromDive
	goto SootopolisCity_EventScript_RayquazaSceneFromPokeCenter
	end

SootopolisCity_EventScript_RayquazaSceneFromPokeCenter::
	delay 60
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromPokeCenter
	waitmovement 0
	special RemoveCameraObject
	delay 60
	fadescreenspeed FADE_TO_BLACK, 8
	call SootopolisCity_EventScript_SetRoughWater
	removeobject LOCALID_GROUDON
	removeobject LOCALID_KYOGRE
	addobject LOCALID_RAYQUAZA
	setvar VAR_0x8004, TRUE
	special Script_DoRayquazaScene
	waitstate
	playse SE_THUNDER
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanUp
	waitmovement 0
	waitse
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 3  @ shake delay
	special ShakeCamera
	waitstate
	waitse
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 2  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	waitmoncry
	setweather WEATHER_NONE
	doweather
	applymovement LOCALID_RAYQUAZA, SootopolisCity_Movement_RayquazaFlyOff
	waitmovement 0
	removeobject LOCALID_RAYQUAZA
	special WaitWeather
	waitstate
	clearflag FLAG_SYS_WEATHER_CTRL
	setvar VAR_SKY_PILLAR_STATE, 3
	clearflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
	fadenewbgm MUS_SOOTOPOLIS
	delay 120
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	setvar VAR_SOOTOPOLIS_CITY_STATE, 6
	warpwhitefade MAP_SOOTOPOLIS_CITY, 31, 35
	waitstate
	end

SootopolisCity_EventScript_RayquazaSceneFromDive::
	delay 60
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanToActionFromDive
	waitmovement 0
	special RemoveCameraObject
	delay 60
	fadescreenspeed FADE_TO_BLACK, 8
	call SootopolisCity_EventScript_SetRoughWater
	removeobject LOCALID_GROUDON
	removeobject LOCALID_KYOGRE
	addobject LOCALID_RAYQUAZA
	setvar VAR_0x8004, TRUE
	special Script_DoRayquazaScene
	waitstate
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_PanUp
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerApproachLegendaries
	waitmovement 0
	waitse
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 3  @ shake delay
	special ShakeCamera
	waitstate
	waitse
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 2  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	waitmoncry
	setweather WEATHER_NONE
	doweather
	applymovement LOCALID_RAYQUAZA, SootopolisCity_Movement_RayquazaFlyOff
	waitmovement 0
	removeobject LOCALID_RAYQUAZA
	special WaitWeather
	waitstate
	clearflag FLAG_SYS_WEATHER_CTRL
	setvar VAR_SKY_PILLAR_STATE, 2
	clearflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
	fadenewbgm MUS_SURF
	delay 120
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	setvar VAR_SOOTOPOLIS_CITY_STATE, 6
	warpwhitefade MAP_SOOTOPOLIS_CITY, 31, 35
	waitstate
	end

SootopolisCity_EventScript_SetRoughWater::
	setmetatile 27, 43, METATILE_Sootopolis_RoughWater, FALSE
	setmetatile 28, 43, METATILE_Sootopolis_RoughWater, FALSE
	setmetatile 29, 43, METATILE_Sootopolis_RoughWater, FALSE
	setmetatile 30, 43, METATILE_Sootopolis_RoughWater, FALSE
	setmetatile 27, 44, METATILE_Sootopolis_RoughWater, FALSE
	setmetatile 28, 44, METATILE_Sootopolis_RoughWater, FALSE
	setmetatile 29, 44, METATILE_Sootopolis_RoughWater, FALSE
	setmetatile 30, 44, METATILE_Sootopolis_RoughWater, FALSE
	setmetatile 27, 45, METATILE_Sootopolis_RoughWater, FALSE
	setmetatile 28, 45, METATILE_Sootopolis_RoughWater, FALSE
	setmetatile 29, 45, METATILE_Sootopolis_RoughWater, FALSE
	setmetatile 30, 45, METATILE_Sootopolis_RoughWater, FALSE
	setmetatile 32, 43, METATILE_Sootopolis_RoughWater, FALSE
	setmetatile 33, 43, METATILE_Sootopolis_RoughWater, FALSE
	setmetatile 34, 43, METATILE_Sootopolis_RoughWater, FALSE
	setmetatile 35, 43, METATILE_Sootopolis_RoughWater, FALSE
	setmetatile 32, 44, METATILE_Sootopolis_RoughWater, FALSE
	setmetatile 33, 44, METATILE_Sootopolis_RoughWater, FALSE
	setmetatile 34, 44, METATILE_Sootopolis_RoughWater, FALSE
	setmetatile 35, 44, METATILE_Sootopolis_RoughWater, FALSE
	setmetatile 32, 45, METATILE_Sootopolis_RoughWater, FALSE
	setmetatile 33, 45, METATILE_Sootopolis_RoughWater, FALSE
	setmetatile 34, 45, METATILE_Sootopolis_RoughWater, FALSE
	setmetatile 35, 45, METATILE_Sootopolis_RoughWater, FALSE
	return

SootopolisCity_Movement_RayquazaFlyOff:
	walk_fast_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	step_end

SootopolisCity_Movement_PanUp:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

SootopolisCity_Movement_PlayerApproachLegendaries:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

@ Unused
SootopolisCity_Movement_PlayerApproachLegendariesDown:
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

@ Unused
SootopolisCity_Movement_UnusedPanUp:
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_slow_diag_northeast
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

@ Unused
SootopolisCity_Movement_UnusedPanBack:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_slow_diag_southwest
	walk_slow_diag_southwest
	step_end

SootopolisCity_EventScript_CaveOfOriginExpert::
	lock
	faceplayer
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 7, SootopolisCity_EventScript_ExpertPostLegendaries
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ExpertLegendaries
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_ExpertLeadToCave
	msgbox SootopolisCity_Text_CaveOfOriginPleaseLeave, MSGBOX_DEFAULT
	release
	end

SootopolisCity_EventScript_ExpertLeadToCave::
	msgbox SootopolisCity_Text_LeadSuperiorTrainerToCave, MSGBOX_DEFAULT
	release
	end

SootopolisCity_EventScript_ExpertPostLegendaries::
	msgbox SootopolisCity_Text_CaveOfOriginSleepsToo, MSGBOX_DEFAULT
	release
	end

SootopolisCity_EventScript_ExpertLegendaries::
	msgbox SootopolisCity_Text_AwakenedPokemonClash, MSGBOX_DEFAULT
	release
	end

SootopolisCity_EventScript_Kiri::
	lock
	faceplayer
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_KiriGiveBerry
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 7, SootopolisCity_EventScript_KiriGiveBerry
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_KiriRayquaza
	msgbox SootopolisCity_Text_BigPokemonFighting, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_KIRI, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SootopolisCity_EventScript_KiriRayquaza::
	msgbox SootopolisCity_Text_PrettyMonCameFromSky, MSGBOX_DEFAULT
	closemessage
	release
	end

@ Gives 2 berries daily. First ranges from FIRST_KIRI_BERRY to LAST_KIRI_BERRY, second is always Figy or Iapapa
SootopolisCity_EventScript_KiriGiveBerry::
	dotimebasedevents
	special GetPlayerBigGuyGirlString
	goto_if_set FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY, SootopolisCity_EventScript_KiriReceivedBerry
	msgbox SootopolisCity_Text_NameIsKiriHaveOneOfThese, MSGBOX_DEFAULT
	random NUM_KIRI_BERRIES
	addvar VAR_RESULT, NUM_KIRI_BERRIES_SKIPPED
	addvar VAR_RESULT, FIRST_BERRY_INDEX
	giveitem VAR_RESULT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY
	msgbox SootopolisCity_Text_GiveYouThisBerryToo, MSGBOX_DEFAULT
	random 2
	goto_if_eq VAR_RESULT, 0, SootopolisCity_EventScript_GiveFigyBerry
	goto_if_eq VAR_RESULT, 1, SootopolisCity_EventScript_GiveIapapaBerry
	end

SootopolisCity_EventScript_GiveFigyBerry::
	giveitem ITEM_FIGY_BERRY
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
	release
	end

SootopolisCity_EventScript_GiveIapapaBerry::
	giveitem ITEM_IAPAPA_BERRY
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
	release
	end

SootopolisCity_EventScript_KiriReceivedBerry::
	msgbox SootopolisCity_Text_LikeSeasonBornIn, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SootopolisCity_EventScript_KiriLikeSeasonBornIn
	msgbox SootopolisCity_Text_OhDoesntMatter, MSGBOX_DEFAULT
	release
	end

SootopolisCity_EventScript_KiriLikeSeasonBornIn::
	msgbox SootopolisCity_Text_ThenILoveAutumn, MSGBOX_DEFAULT
	release
	end

SootopolisCity_EventScript_Woman2::
	lockall
	applymovement LOCALID_WOMAN_2, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Woman2Rayquaza
	msgbox SootopolisCity_Text_WeatherWentWild, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_WOMAN_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

SootopolisCity_EventScript_Woman2Rayquaza::
	msgbox SootopolisCity_Text_YouBroughtFlyingMon, MSGBOX_DEFAULT
	releaseall
	end

SootopolisCity_EventScript_Man::
	lock
	faceplayer
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 7, SootopolisCity_EventScript_ManPostLegendaries
	msgbox SootopolisCity_Text_NoOrdinaryTourist, MSGBOX_DEFAULT
	release
	end

SootopolisCity_EventScript_ManPostLegendaries::
	msgbox SootopolisCity_Text_CityRegainedCalm, MSGBOX_DEFAULT
	release
	end

SootopolisCity_EventScript_Woman1::
	lock
	faceplayer
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 7, SootopolisCity_EventScript_Woman1PostLegendaries
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Woman1Rayquaza
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_Woman1Legendaries
	msgbox SootopolisCity_Text_SootopolisSkyBeautiful, MSGBOX_DEFAULT
	release
	end

SootopolisCity_EventScript_Woman1Legendaries::
	msgbox SootopolisCity_Text_GiganticPokemonFight, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_WOMAN_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SootopolisCity_EventScript_Woman1PostLegendaries::
	msgbox SootopolisCity_Text_NightSkyFavoriteScenery, MSGBOX_DEFAULT
	release
	end

SootopolisCity_EventScript_Woman1Rayquaza::
	msgbox SootopolisCity_Text_FearedWorstWhenPokemonFlewDown, MSGBOX_DEFAULT
	release
	end

SootopolisCity_EventScript_NinjaBoy::
	lockall
	applymovement LOCALID_NINJA_BOY, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_NinjaBoyRayquaza
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 7, SootopolisCity_EventScript_NinjaBoyNormal
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_NinjaBoyNormal
	msgbox SootopolisCity_Text_ThisIsWicked, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_NINJA_BOY, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SootopolisCity_EventScript_NinjaBoyNormal::
	msgbox SootopolisCity_Text_WonderWhatWorldIsLike, MSGBOX_DEFAULT
	release
	end

SootopolisCity_EventScript_NinjaBoyRayquaza::
	msgbox SootopolisCity_Text_ThatWasWicked, MSGBOX_DEFAULT
	release
	end

SootopolisCity_EventScript_Boy1::
	lockall
	applymovement LOCALID_BOY_1, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Boy1Rayquaza
	goto_if_set FLAG_SYS_GAME_CLEAR, SootopolisCity_EventScript_Boy1GameClear
	goto_if_ge VAR_SOOTOPOLIS_CITY_STATE, 7, SootopolisCity_EventScript_Boy1Normal
	goto_if_le VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_Boy1Normal
	msgbox SootopolisCity_Text_GiantPokemonSuddenlyAppeared, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BOY_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SootopolisCity_EventScript_Boy1Rayquaza::
	msgbox SootopolisCity_Text_WhatIsThatGreenPokemon, MSGBOX_DEFAULT
	release
	end

SootopolisCity_EventScript_Boy1GameClear::
	msgbox SootopolisCity_Text_WhereDidLegendariesGo, MSGBOX_DEFAULT
	release
	end

SootopolisCity_EventScript_Boy1Normal::
	msgbox SootopolisCity_Text_PhysicallyFitLivingHere, MSGBOX_DEFAULT
	release
	end

SootopolisCity_EventScript_GymSign::
	msgbox SootopolisCity_Text_GymSign, MSGBOX_SIGN
	end

SootopolisCity_EventScript_CitySign::
	msgbox SootopolisCity_Text_CitySign, MSGBOX_SIGN
	end

EventScript_ClosedSootopolisDoor::
	msgbox SootopolisCity_Text_DoorIsClosed, MSGBOX_SIGN
	end

SootopolisCity_EventScript_Steven::
	lockall
	applymovement LOCALID_STEVEN, Common_Movement_FacePlayer
	waitmovement 0
	call_if_unset FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN, SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_StevenHelpWallace
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 3, SootopolisCity_EventScript_StevenHelpedWallace
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 4, SootopolisCity_EventScript_StevenHelpedWallace
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_StevenMaxieArchieLeft
	msgbox SootopolisCity_Text_SoThatsRayquaza, MSGBOX_DEFAULT
	releaseall
	end

SootopolisCity_EventScript_StevenHelpWallace::
	msgbox SootopolisCity_Text_KnowWhatsNeededToHelpHim, MSGBOX_DEFAULT
	releaseall
	end

SootopolisCity_EventScript_StevenMaxieArchieLeft::
	msgbox SootopolisCity_Text_MaxieArchieLeft, MSGBOX_DEFAULT
	releaseall
	end

SootopolisCity_EventScript_StevenHelpedWallace::
	msgbox SootopolisCity_Text_NeverBeenToSkyPillar, MSGBOX_DEFAULT
	releaseall
	end

SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin::
	msgbox SootopolisCity_Text_InvolvedWithCrisis, MSGBOX_DEFAULT
	closemessage
    playse SE_PIN
    applymovement LOCALID_STEVEN, Common_Movement_ExclamationMark
    waitmovement LOCALID_STEVEN
    waitse
    msgbox SootopolisCity_Text_ComeWithMe, MSGBOX_DEFAULT
    closemessage
	call_if_eq VAR_FACING, DIR_WEST, SootopolisCity_EventScript_StartWalkToCaveOfOriginWest
	call_if_eq VAR_FACING, DIR_NORTH, SootopolisCity_EventScript_StartWalkToCaveOfOriginNorth
	delay 16
	msgbox SootopolisCity_Text_DoesThisMakeYourFearPokemon, MSGBOX_DEFAULT
	closemessage
	delay 16
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_StevenWalkToCaveOfOrigin
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerWalkToCaveOfOrigin
	waitmovement 0
	delay 128
	applymovement LOCALID_EXPERT, SootopolisCity_Movement_ExpertMoveAside
	waitmovement 0
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_StevenArriveCaveEntrance
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerArriveCaveEntrance
	waitmovement 0
    call SootopolisCity_EventScript_RivalAppear
	setflag FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN
    delay 24
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerEnterCaveOfOrigin
	waitmovement 0
	warp MAP_CAVE_OF_ORIGIN_ENTRANCE, 9, 20
	waitstate
	end

SootopolisCity_EventScript_StartWalkToCaveOfOriginWest::
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginWest
	waitmovement 0
	return

SootopolisCity_EventScript_StartWalkToCaveOfOriginNorth::
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginNorth
	waitmovement 0
	return

SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin:
	walk_up
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	delay_16
	walk_in_place_down
	step_end

SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginWest:
	walk_left
	walk_up
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginNorth:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

SootopolisCity_Movement_StevenWalkToCaveOfOrigin:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	delay_4
	walk_in_place_left
	delay_16
	delay_16
	walk_right
	walk_up
	walk_up
	step_end

SootopolisCity_Movement_PlayerWalkToCaveOfOrigin:
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

SootopolisCity_Movement_ExpertMoveAside:
	walk_slow_left
	walk_in_place_right
	step_end

SootopolisCity_Movement_StevenArriveCaveEntrance:
	walk_down
	walk_down
	walk_left
	delay_8
	walk_right
	walk_up
	walk_up
	walk_up
	walk_right
	walk_in_place_left
	step_end

SootopolisCity_Movement_PlayerArriveCaveEntrance:
	delay_16
	delay_16
	delay_16
	delay_8
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_in_place_right
	step_end

SootopolisCity_Movement_PlayerEnterCaveOfOrigin:
	walk_up
	walk_up
	step_end

SootopolisCity_EventScript_Boy2::
	lockall
	applymovement LOCALID_BOY_2, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_Boy2Rayquaza
	msgbox SootopolisCity_Text_TwoPokemonArentAngry, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BOY_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

SootopolisCity_EventScript_Boy2Rayquaza::
	msgbox SootopolisCity_Text_FlyingMonStoppedRampage, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

SootopolisCity_EventScript_BlackBelt::
	lockall
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_BlackBeltRayquaza
	msgbox SootopolisCity_Text_GoRedAndBlueMon, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BLACK_BELT, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SootopolisCity_Text_DoYouKnowMonNames, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BLACK_BELT, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

SootopolisCity_EventScript_BlackBeltRayquaza::
	applymovement LOCALID_BLACK_BELT, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SootopolisCity_Text_GreenOneSettlesThings, MSGBOX_DEFAULT
	releaseall
	end

SootopolisCity_EventScript_Girl::
	lockall
	applymovement LOCALID_GIRL, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_GirlRayquaza
	msgbox SootopolisCity_Text_SootopolisWillBeWrecked, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GIRL, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

SootopolisCity_EventScript_GirlRayquaza::
	msgbox SootopolisCity_Text_SootopolisDidntGetWrecked, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

SootopolisCity_EventScript_Maniac::
	lockall
	applymovement LOCALID_MANIAC, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_eq VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_EventScript_ManiacRayquaza
	msgbox SootopolisCity_Text_SeeingLegendWithOwnEyes, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MANIAC, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

SootopolisCity_EventScript_ManiacRayquaza::
	msgbox SootopolisCity_Text_SawLegendWithOwnEyes, MSGBOX_DEFAULT
	releaseall
	end

SootopolisCity_EventScript_Wallace::
	lock
	faceplayer
	msgbox SootopolisCity_Text_HaventYouScaledSkyPillar, MSGBOX_DEFAULT
	closemessage
	release
	end

SootopolisCity_EventScript_Maxie::
	lockall
    faceplayer
	msgbox SootopolisCity_Text_MaxieApologize, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

SootopolisCity_EventScript_Archie::
	lockall
    faceplayer
	msgbox SootopolisCity_Text_ArchieSorry, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

@ Unused
SootopolisCity_Movement_Levitate::
	levitate
	step_end

@ Unused
SootopolisCity_Movement_DestroyTask::
	destroy_extra_task
	step_end

SootopolisCity_Text_GymSign:
	.string "Sootopolis City Pokémon Gym\n"
	.string "Leader: Wallace\p"
	.string "“Artist and lover of Water.”$"

SootopolisCity_Text_CitySign:
	.string "Sootopolis City\p"
	.string "“The mystical city where history\n"
	.string "slumbers.”$"

SootopolisCity_Text_DoorIsClosed:
	.string "The door is closed.$"

SootopolisCity_Text_PhysicallyFitLivingHere:
	.string "Diving in the sea. Climbing up and\n"
	.string "down stairs all the time…\p"
	.string "If you live in this town, you end up\n"
	.string "getting physically fit.$"

SootopolisCity_Text_GiantPokemonSuddenlyAppeared:
	.string "These giant Pokémon suddenly appeared\n"
	.string "in the middle of the city!\p"
	.string "And, I've never seen them before!\p"
	.string "Why are they smashing into each\n"
	.string "other like that?\p"
	.string "Why can't they be friends, those\n"
	.string "Pokémon?$"

SootopolisCity_Text_WhatIsThatGreenPokemon:
	.string "What? What? What?\n"
	.string "What is that green Pokémon?!$"

SootopolisCity_Text_WhereDidLegendariesGo:
	.string "Groudon and Kyogre…\n"
	.string "Where did they go?\p"
	.string "Will they cause droughts or downpours\n"
	.string "somewhere else?$"

SootopolisCity_Text_TwoPokemonArentAngry:
	.string "I just get this sense somehow that\n"
	.string "the two Pokémon aren't angry.\p"
	.string "I think… They probably can't control\n"
	.string "their own power…$"

SootopolisCity_Text_FlyingMonStoppedRampage:
	.string "That flying Pokémon came down from\n"
	.string "the sky and stopped the rampaging\l"
	.string "Pokémon…$"

SootopolisCity_Text_WonderWhatWorldIsLike:
	.string "I… I've never been out of this city.\p"
	.string "I wonder what the world is like on\n"
	.string "the other side of this round sky?$"

SootopolisCity_Text_ThisIsWicked:
	.string "Wow!\n"
	.string "This is wicked!$"

SootopolisCity_Text_ThatWasWicked:
	.string "Wow!\n"
	.string "That was wicked!$"

SootopolisCity_Text_GoRedAndBlueMon:
	.string "Go for it, red Pokémon!\n"
	.string "Don't back off, blue Pokémon!$"

SootopolisCity_Text_DoYouKnowMonNames:
	.string "… … … … … …\p"
	.string "Hi, do you know the names of those\n"
	.string "Pokémon fighting over there?$"

SootopolisCity_Text_GreenOneSettlesThings:
	.string "I was wondering which one would win,\n"
	.string "the red one or the blue one, but, oh no,\l"
	.string "it's the green one that settles things!\p"
	.string "Talk about a huge turn of events!$"

SootopolisCity_Text_SeeingLegendWithOwnEyes:
	.string "There's an ancient legend that claims\n"
	.string "the land and sea were shaped by\l"
	.string "a colossal battle between Pokémon.\p"
	.string "Well, I'm seeing that happen with\n"
	.string "my very own eyes!\p"
	.string "Whoa! I never expected to be\n"
	.string "witness to something this huge!$"

SootopolisCity_Text_SawLegendWithOwnEyes:
	.string "There's an ancient legend that claims\n"
	.string "the land and sea were shaped by\l"
	.string "a colossal battle between Pokémon.\p"
	.string "Well, I saw that happen with\n"
	.string "my very own eyes!\p"
	.string "Whoa! I never expected to be\n"
	.string "witness to something this huge!$"

SootopolisCity_Text_BigPokemonFighting:
	.string "A big Pokémon is fighting with\n"
	.string "another big Pokémon!\p"
	.string "Please, someone make them stop!$"

SootopolisCity_Text_PrettyMonCameFromSky:
	.string "A pretty Pokémon came down from\n"
	.string "the sky…$"

SootopolisCity_Text_SootopolisWillBeWrecked:
	.string "Oh, no!\n"
	.string "Sootopolis City will get wrecked!$"

SootopolisCity_Text_SootopolisDidntGetWrecked:
	.string "Sootopolis City didn't get wrecked!$"

SootopolisCity_Text_NoOrdinaryTourist:
	.string "Hm!\n"
	.string "You've come all the way to Sootopolis?\l"
	.string "You're no ordinary tourist.\p"
	.string "But I suppose that doesn't make you\n"
	.string "an extraordinary tourist, either.$"

SootopolisCity_Text_CityRegainedCalm:
	.string "The city has regained its calm…$"

SootopolisCity_Text_CaveOfOriginPleaseLeave:
	.string "Who might you be?\pThis is the Cave of Origin.\pThe spirits of Pokémon, becalmed at\nMt. Pyre, are said to be revived here.\pPlease leave.$"

SootopolisCity_Text_LeadSuperiorTrainerToCave:
	.string "A person with a strong will and\nsuperior talent…\pA Trainer who has knowledge and\nexperience of many kinds of Pokémon…\pIf such a person were to appear,\nI was instructed by Wallace to lead\lthat Trainer to this Cave.$"

SootopolisCity_Text_AwakenedPokemonClash:
	.string "Oh, my…\pThe clash between the two awakened\nPokémon was quelled by the awakening\lof a third Pokémon…$"

SootopolisCity_Text_CaveOfOriginSleepsToo:
	.string "This is the Cave of Origin…\pWith the passing of the crisis,\nthe cave, too, shall sleep…$"

SootopolisCity_Text_SootopolisSkyBeautiful:
	.string "Sootopolis sprang up as a town in\n"
	.string "the crater of a volcano.\p"
	.string "If you look up at the sky, the lip of\n"
	.string "the crater is also visible.\l"
	.string "So, all you see is the sky in a circle.\p"
	.string "But that's what makes the sky above\n"
	.string "Sootopolis the most beautiful.$"

SootopolisCity_Text_GiganticPokemonFight:
	.string "When two Pokémon that gigantic\n"
	.string "are fighting that savagely, there's\l"
	.string "not much that we can do.$"

SootopolisCity_Text_FearedWorstWhenPokemonFlewDown:
	.string "When that third Pokémon flew down,\n"
	.string "I feared the worst.$"

SootopolisCity_Text_NightSkyFavoriteScenery:
	.string "A circle of a night sky framed by\n"
	.string "the crater of a volcano…\p"
	.string "And in that ring, stars flicker and\n"
	.string "blink as if they were alive…\l"
	.string "It's my favorite scenery.$"

SootopolisCity_Text_WeatherWentWild:
	.string "The weather was clear this morning,\n"
	.string "but…\p"
	.string "All of a sudden, dark clouds brewed up,\n"
	.string "rain started falling in sheets, and\l"
	.string "there was thunder and lightning, too.\p"
	.string "The weather just went completely\n"
	.string "wild!\p"
	.string "Is all of this because of those\n"
	.string "Pokémon?$"

SootopolisCity_Text_YouBroughtFlyingMon:
	.string "Oh?\p"
	.string "It was you who brought that flying\n"
	.string "Pokémon here?\p"
	.string "Well, aren't you amazing!$"

SootopolisCity_Text_MaxieApologize:
	.string "{COLOR RED}Maxie{COLOR DARK_GRAY}: Child, you… No.\pI have no right to call you “child.”\pFellow Trainer.\pI have caused great harm, and for that\nI apologize most sincerely.\pBut now we find ourselves at an\nimpasse, and you and your Pokémon\lare all that humanity has to count\lon in its stand against these super-\lancient Pokémon…$"

SootopolisCity_Text_AfterAllOurScheming:
	.string "Maxie: So the super-ancient Pokémon\n"
	.string "weren't only Groudon and Kyogre…\p"
	.string "After all our fruitless scheming and\n"
	.string "frantic efforts, that one Pokémon's\l"
	.string "simple action puts everything right\l"
	.string "again as if nothing had happened…\p"
	.string "Fu…\n"
	.string "Fuhahaha…$"

SootopolisCity_Text_ArchieSorry:
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: …\p…\pSorry.$"

SootopolisCity_Text_TryingMeaninglessToPokemon:
	.string "Archie: Kyogre and Groudon both\n"
	.string "flew off to who knows where.\p"
	.string "The weather in Hoenn has returned\n"
	.string "to its normal state…\p"
	.string "Haha…\n"
	.string "Hahaha…\p"
	.string "Maybe what we were trying to do was\n"
	.string "something small, even meaningless,\l"
	.string "to Pokémon…$"

SootopolisCity_Text_InvolvedWithCrisis:
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: {PLAYER}!\pSo you did come…\nI have been waiting for you.\p…\nWhat terrible weather.\pThose Pokémon fighting…\nGroudon… and Kyogre…$"

SootopolisCity_Text_ComeWithMe:
    .string "Ah, yes.\pYou need to hear what my friend has\nto say.\pCome with me, please.$"

SootopolisCity_Text_DoesThisMakeYourFearPokemon:
	.string "This weather…\pPeople and Pokémon need sunlight and\nwater to live.\pSo why does this fill us with so much\ndread?\p{PLAYER}.\pDoes seeing Groudon and Kyogre make\nyou think Pokémon are to be feared?\pBut that is not true.\nPokémon are really more…\p…Why am I asking you this?\nPerhaps you already know.$"

SootopolisCity_Text_KnowWhatsNeededToHelpHim:
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: You'll be OK.\pYou and your Pokémon can handle it,\nwhatever happens.\lI believe that.$"

SootopolisCity_Text_NeverBeenToSkyPillar:
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: The Sky Pillar…?\pI've never been there.\nI wonder where it could be?$"

SootopolisCity_Text_SoThatsRayquaza:
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: Rayquaza…\pIt is incredible how the two\nsuper-ancient Pokémon would flee\lfrom it in fear…$"

SootopolisCity_Text_MaxieArchieLeft:
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: It looks like both Maxie and\nArchie have gone away somewhere.\pPerhaps they've gone to Mt. Pyre to\nreturn those Orbs…$"

SootopolisCity_Text_HaventYouScaledSkyPillar:
	.string "{COLOR RED}Wallace{COLOR DARK_GRAY}: Oh?\pHaven't you scaled the Sky Pillar\nyet?\pI'm sure that you can make it to the\ntop of the Sky Pillar…$"

SootopolisCity_EventScript_RivalAppear::
	msgbox SootopolisCity_EventScript_RivalAppear_Text_0
	closemessage
	addobject LOCALID_RIVAL
	applymovement LOCALID_RIVAL, SootopolisCity_Movement_RivalApproachPlayer
	waitmovement LOCALID_RIVAL
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	delay 8
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_STEVEN
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq SootopolisCity_EventScript_RivalAppear_2
	msgbox SootopolisCity_EventScript_RivalAppear_Text_3
	msgbox SootopolisCity_EventScript_RivalAppear_Text_4
SootopolisCity_EventScript_RivalAppear_1:
	closemessage
	delay 24
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceLeft
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox SootopolisCity_EventScript_RivalAppear_Text_5
	closemessage
	return

SootopolisCity_EventScript_RivalAppear_2:
	msgbox SootopolisCity_EventScript_RivalAppear_Text_1
	msgbox SootopolisCity_EventScript_RivalAppear_Text_2
	goto SootopolisCity_EventScript_RivalAppear_1


SootopolisCity_Movement_RivalApproachPlayer:
	walk_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	step_end

SootopolisCity_EventScript_Rival::
	lock
	faceplayer
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq SootopolisCity_EventScript_Rival_2
	msgbox SootopolisCity_EventScript_Rival_Text_1
SootopolisCity_EventScript_Rival_1:
	closemessage
	release
	end

SootopolisCity_EventScript_Rival_2:
	msgbox SootopolisCity_EventScript_Rival_Text_0
	goto SootopolisCity_EventScript_Rival_1


SootopolisCity_EventScript_Tabitha::
	msgbox SootopolisCity_EventScript_Tabitha_Text_0, MSGBOX_NPC
	end


SootopolisCity_EventScript_Shelly::
	msgbox SootopolisCity_EventScript_Shelly_Text_0, MSGBOX_NPC
	end


SootopolisCity_EventScript_AfterRayquazaScene::
	lock
	delay 16
	applymovement LOCALID_RIVAL, Common_Movement_WalkLeft
	waitmovement LOCALID_RIVAL
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceUp
	waitmovement LOCALID_RIVAL
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq SootopolisCity_EventScript_AfterRayquazaScene_2
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_1
SootopolisCity_EventScript_AfterRayquazaScene_1:
	closemessage
	delay 8
	applymovement LOCALID_STEVEN, Common_Movement_WalkRight
	waitmovement LOCALID_STEVEN
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_2
	closemessage
	delay 24
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
	delay 8
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_RIVAL
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_3
	closemessage
	delay 64
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_AfterRayquazaScene_CameraPanToLeaders
	waitmovement OBJ_EVENT_ID_CAMERA
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_4
	delay 16
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_5
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_6
	closemessage
	delay 32
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_7
	closemessage
	delay 24
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_8
	closemessage
	delay 32
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_9
	delay 16
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_10
	closemessage
	delay 16
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_SHELLY
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_11
	closemessage
	delay 16
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceRight
	waitmovement LOCALID_ARCHIE
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_12
	closemessage
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceLeft
	waitmovement LOCALID_SHELLY
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_13
	closemessage
	delay 24
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_14
	delay 16
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_15
	closemessage
	delay 32
	applymovement LOCALID_MAXIE, SootopolisCity_Movement_AfterRayquazaScene_MaxieGotoPlayer
	applymovement OBJ_EVENT_ID_CAMERA, SootopolisCity_Movement_AfterRayquazaScene_CameraGoBack
	delay 16
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceRight
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_16
	waitmovement LOCALID_MAXIE
	closemessage
	special RemoveCameraObject
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_AfterRayquazaScene_StevenMoveAsideForMaxie
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	delay 4
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceLeft
	waitmovement LOCALID_STEVEN
	delay 16
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_17
	closemessage
	delay 16
	applymovement LOCALID_MAXIE, SootopolisCity_Movement_AfterRayquazaScene_MaxieMoveAsideForArchie
	applymovement LOCALID_ARCHIE, SootopolisCity_Movement_AfterRayquazaScene_ArchieGotoPlayer
	applymovement LOCALID_SHELLY, SootopolisCity_Movement_AfterRayquazaScene_ShellyGotoPlayer
	waitmovement LOCALID_ARCHIE
	delay 8
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_18
	closemessage
	delay 24
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_19
	closemessage
	delay 16
	fadescreen FADE_TO_BLACK
	setflag FLAG_MET_MAXIE_SOOTOPOLIS
	setflag FLAG_MET_ARCHIE_SOOTOPOLIS
	setflag FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE
	clearflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
	setvar VAR_MT_PYRE_STATE, 2
	setvar VAR_SOOTOPOLIS_CITY_STATE, 7
	removeobject LOCALID_ARCHIE
	removeobject LOCALID_SHELLY
	removeobject LOCALID_MAXIE
	removeobject LOCALID_TABITHA
	delay 32
	fadescreen FADE_FROM_BLACK
	delay 8
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceUp
	waitmovement LOCALID_RIVAL
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_20
	closemessage
	delay 16
	applymovement LOCALID_STEVEN, SootopolisCity_Movement_AfterRayquazaScene_StevenGoToPlayerLeft
	waitmovement LOCALID_STEVEN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	delay 8
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceLeft
	waitmovement LOCALID_RIVAL
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_21
	closemessage
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceRight
	waitmovement LOCALID_STEVEN
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_22
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_23
	closemessage
	delay 32
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_STEVEN
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_24
	closemessage
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceRight
	waitmovement LOCALID_STEVEN
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_25
	delay 16
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_26
	closemessage
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_STEVEN
	delay 48
	setfieldeffectargument 0, 1
	dofieldeffect FLDEFF_NPCFLY_OUT
	delay 16
	removeobject LOCALID_STEVEN
	waitfieldeffect FLDEFF_NPCFLY_OUT
	delay 64
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceUp
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement OBJ_EVENT_ID_PLAYER
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq SootopolisCity_EventScript_AfterRayquazaScene_6
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_28
SootopolisCity_EventScript_AfterRayquazaScene_5:
	closemessage
	delay 16
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceLeft
	waitmovement LOCALID_RIVAL
	delay 32
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceUp
	waitmovement LOCALID_RIVAL
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq SootopolisCity_EventScript_AfterRayquazaScene_10
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_31
	closemessage
	delay 24
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_32
SootopolisCity_EventScript_AfterRayquazaScene_9:
	closemessage
	delay 8
	applymovement LOCALID_RIVAL, Common_Movement_WalkLeft
	waitmovement LOCALID_RIVAL
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_RIVAL
	delay 48
	setfieldeffectargument 0, 1
	dofieldeffect FLDEFF_NPCFLY_OUT
	delay 16
	removeobject LOCALID_RIVAL
	waitfieldeffect FLDEFF_NPCFLY_OUT
	delay 32
	release
	end

SootopolisCity_EventScript_AfterRayquazaScene_2:
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_0
	goto SootopolisCity_EventScript_AfterRayquazaScene_1

SootopolisCity_EventScript_AfterRayquazaScene_6:
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_27
	goto SootopolisCity_EventScript_AfterRayquazaScene_5

SootopolisCity_EventScript_AfterRayquazaScene_10:
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_29
	closemessage
	delay 24
	msgbox SootopolisCity_EventScript_AfterRayquazaScene_Text_30
	goto SootopolisCity_EventScript_AfterRayquazaScene_9


SootopolisCity_Movement_AfterRayquazaScene_CameraPanToLeaders:
	walk_left
	walk_left
	step_end

SootopolisCity_Movement_AfterRayquazaScene_MaxieGotoPlayer:
	walk_right
	walk_right
	step_end

SootopolisCity_Movement_AfterRayquazaScene_StevenMoveAsideForMaxie:
	delay_8
	walk_in_place_left
	delay_16
	walk_up
	walk_right
	walk_in_place_left
	step_end

SootopolisCity_Movement_AfterRayquazaScene_CameraGoBack:
	walk_right
	walk_right
	step_end

SootopolisCity_Movement_AfterRayquazaScene_MaxieMoveAsideForArchie:
	walk_down
	walk_in_place_right
	step_end

SootopolisCity_Movement_AfterRayquazaScene_ArchieGotoPlayer:
	walk_right
	walk_right
	walk_down
	walk_down
	walk_in_place_right
	step_end

SootopolisCity_Movement_AfterRayquazaScene_ShellyGotoPlayer:
	walk_down
	delay_16
	walk_in_place_right
	step_end

SootopolisCity_Movement_AfterRayquazaScene_StevenGoToPlayerLeft:
	walk_left
	walk_down
	step_end

SootopolisCity_EventScript_RivalAppear_Text_0:
	.string "Here we are.\nThis is the Cave of Origin.\pYou'll find someone named Wallace\ninside. He is my friend.$"

SootopolisCity_EventScript_RivalAppear_Text_1:
	.string "{COLOR RED}May{COLOR DARK_GRAY}: {PLAYER}!\pI heard on the news that things were\ngoing haywire around Sootopolis.\pAnd then I saw you, {PLAYER}!\pI couldn't just sit there and do\nnothing when I knew you were here in\lthe thick of it, so I came flying!\pAfter seeing Team Magma and Team Aqua,\nI am, like, shocked and confused on\lso many levels right now.\pThis is probably something way bigger\nthat I can even imagine, isn't it?\lSo I'm not even going to ask right now.$"

SootopolisCity_EventScript_RivalAppear_Text_2:
	.string "I'm going to try to find what I can\ndo to help, and then I'm going to do\lmy best with that.\pAnd I'm going to keep hoping and\nbelieving that y-you'll be OK out\lthere, {PLAYER}.\pBecause…\pBecause you… You're the best friend I\nhave!$"

SootopolisCity_EventScript_RivalAppear_Text_3:
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: {PLAYER}!\pWhen I saw the news about Sootopolis,\nand there you were, {PLAYER}…\pWell, anyway, all I could think of was\ncoming to help!\pYou don't know how glad I am to see\nthat you're still in one piece.\pSeeing Team Magma and Team Aqua,\nI don't really know what to say right\lnow--I'm kind of dumbfounded.\pLook, I get that this is probably\nsomething way bigger that I've ever\limagined.\lSo, I won't bother any questions now.$"

SootopolisCity_EventScript_RivalAppear_Text_4:
	.string "I'm gonna find out what I should\ndo to help, and then I'm going to do\lwhatever I can.\pYou'd better go do the same,\n{PLAYER}.\pI'll always be right there behind you.\nYou're my best friend, after all!$"

SootopolisCity_EventScript_RivalAppear_Text_5:
	.string "You'll be OK.\pYou and your Pokémon can handle it,\nwhatever happens.\lI believe that.$"

SootopolisCity_EventScript_Rival_Text_0:
	.string "{COLOR RED}May{COLOR DARK_GRAY}: I'm going to try to find what I\ncan do to help, and then I'm going to\ldo my best with that.\pAnd I'm going to keep on hoping and\nbelieving that you'll be OK out there,\l{PLAYER}.\pPlease…give it everything you've got!$"

SootopolisCity_EventScript_Rival_Text_1:
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: I'm gonna find out what I\nshould do to help, and them I'm going\lto do whatever I can.\pYou'd better go do the same,\n{PLAYER}.\pAnd I'll always be right there behind\nyou.\pA-after all…we're friends, right?$"

SootopolisCity_EventScript_Tabitha_Text_0:
	.string "{COLOR RED}Tabitha{COLOR DARK_GRAY}: It is very possible\nthat Groudon's energy could be far\lgreater than our calculations show.$"

SootopolisCity_EventScript_Shelly_Text_0:
	.string "{COLOR RED}Shelly{COLOR DARK_GRAY}: The energy overflowing from\nKyogre is certainly more powerful\lthat we had anticipated.\pIts influence is making the current\ngrow stronger.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_0:
	.string "{COLOR RED}May{COLOR DARK_GRAY}: {PLAYER}!!!\pIt's really over, isn't it…$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_1:
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: {PLAYER}!\pSo it's all over…$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_2:
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: {PLAYER}, we owe you great\nthanks.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_3:
	.string "Look above you.\pThe sky over Sootopolis has returned\nto normal.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_4:
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: Somehow, it's…so warm…$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_5:
	.string "{COLOR RED}Maxie{COLOR DARK_GRAY}: …$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_6:
	.string "{COLOR RED}Tabitha{COLOR DARK_GRAY}: It's as if the uncertainty\nand fear from moments ago never\leven existed.\pMy heart feels like it's been softly set\nat ease…$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_7:
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: …\pThe sea or the land…\pPokémon or humanity…\pAll this time we've just been trying\nto grab onto happiness for one of\lthem, even if it meant destroying\lthe other…$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_8:
	.string "Look at how things have turned\nout, now the world's got its natural\lbalance back…\pWe've got to rethink this thing from\nthe very start…\pWe've got to redo everything we've\ndone from scratch--and get it right\lthis time.\pWhaddaya say?\nMaxie…$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_9:
	.string "{COLOR RED}Maxie{COLOR DARK_GRAY}: …\pI suppose…you may be right…\pHowever…\pPersonally, in my case…\pSome wrongs cannot be atoned for, no\nmatter how you try to right them.\pAnd I have committed wrongs so\ngreat as to bring the whole world to\lits knees.\pIt may be that I…\pIt may be too much to assume that\nI should deserve the chance to start\lanything over.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_10:
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: …\pYeah.\nYou're right.\pMaxie…\nWhat you're saying is only natural.\pThe world I believed to be ideal…\pThe kind of world that I dreamed of\nmaking, where I could live alongside\lmy beloved Pokémon…\lThat hasn't changed.\pI know I've got nothing to stand on,\nafter causing this much hurt, but…$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_11:
	.string "{COLOR RED}Shelly{COLOR DARK_GRAY}: That's right.\pYou've caused a big fuss there\nwhen you almost brought about the\ldownfall of the world, you big dolt!\pNo matter how much you beg, no one can\nforgive that!$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_12:
	.string "But… Do you really need\ntheir forgiveness, though?\pEven if you are a big dolt who no one in\nthe world will ever forgive…$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_13:
	.string "I'll…\pI'll stay with you!\nI'll stay with you forever!\pSo please…\pStop going out on your own and acting\ncrazy.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_14:
	.string "You're…our…\nTeam Aqua's leader,\land we're your friends, after all.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_15:
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: Shelly…\pSorry…and thanks.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_16:
	.string "{COLOR RED}Tabitha{COLOR DARK_GRAY}: Leader…$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_17:
	.string "{COLOR RED}Maxie{COLOR DARK_GRAY}: Hmph…\pWe adults have a duty to pass this\nworld along to the next generation.\pA world worth passing along.\pWhat is it we truly need to do to create\nsuch a world?\pTake each other's hand in friendship?\nOr fight for the right of supremacy?\pI think it is time we consider\nthis again with our team members and\lbreak down the wall between us.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_18:
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: All right, ya little scamp.\pMaxie and I have been thinkin'.\nWe're heading back to Mt. Pyre, to\lreturn these orbs we took.\pYeah, we stirred the waters, upset\nthe balance, and it ain't sittin' right\lwith us.\pTime to make amends, to give back what\nwe shouldn't have taken.\pLater, scamp!$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_19:
	.string "{COLOR RED}Maxie{COLOR DARK_GRAY}: Farewell.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_20:
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: Team Magma and Team Aqua\nare made up of people with completely\lopposing ideals and goals.\pBut perhaps even they can learn to\nmeet halfway…one small concession at\la time.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_21:
	.string "I know it's too much to expect that\neverything will change at one, but…\pI hope this crisis might at least\nhelp them take that first vital step\lforward.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_22:
	.string "I imagine that many changes are\nhappening now all across Hoenn.\pI hope you will be able to travel this\nworld and see its richness with your\lown eyes--and revel in its newness in\lyour own heart.\pBut for the present, you may first wish\nto challenge this city's Pokémon Gym.\pThere, you'll find the very same Wallace\nwho helped us so much waiting for you.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_23:
	.string "He's strong.\pBut the way you are now, you\nshould be capable of battling him on\lan equal footing.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_24:
	.string "People, Pokémon, nature itself…\nOur survival in this world depends on\lall of us living together in harmony.\pI feel I have just begun to understand\nthat.\pAnd I'm wondering how the world\nwill continue to change from this\lpoint on…\pIt fills me with an inexplicable\nexitement.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_25:
	.string "{PLAYER}…\pAs you and your Pokémon live and\ngrow in this changed world, I wonder\lwhat effect it will have on you.\pWhat will you think about?\nWhat ideals will you believe in?$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_26:
	.string "If we do get the chance to meet again,\nI hope you will be able to show me and\lmy team the answers you've found.\pUntil then.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_27:
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Phew!\pFinally, it's just the two of us again.\pI've got to say…thanks for everything\nyou've done for our region, {PLAYER}.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_28:
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: Phew!\pIt feels like we can finally relax,\nhuh?\pI guess that now's the time to say\nthanks for all you've done, {PLAYER}.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_29:
	.string "You know, I thought we were\nsupposed to have out from Littleroot\ltogether, but…\pBut you, {PLAYER}…\pIt seems like you just keep getting\nfurther and further ahead of me…\pI even started to feel like you'd gone\nsomewhere that I can't even reach.$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_30:
	.string "It's pretty lonely, you know?\pNot!\pWhat would you think if I said\nsomething like that?\pHee hee!\pAnyway, you did something really\namazing today, so try to take it easy\lfor a while!\pSee you later!$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_31:
	.string "You know, we set out from Littleroot at\nthe same time, but…\pIt seems like you're just dashing ahead\nby yourself and leaving me behind…\pI feel like we're not even on the same\nlevel anymore, you know?$"

SootopolisCity_EventScript_AfterRayquazaScene_Text_32:
	.string "…\pIt's kinda lonely thinking like that…\pOr it would be if I really thought\nthat!\pBut…well, you did do something pretty\namazing.\pSo take it easy for a while, OK,\nfriend?\pLater!$"
