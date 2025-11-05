# 1 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 3 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_MapScripts::
# 4 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_MaysHouse_1F_OnLoad
# 5 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MaysHouse_1F_OnTransition
# 6 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MaysHouse_1F_OnFrame
# 7 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.byte 0
# 8 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 9 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnLoad:
# 10 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes
# 11 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual
# 12 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 13 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 14 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes::
# 15 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 16 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 17 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 18 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 19 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual::
# 20 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	checkplayergender
# 21 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual
# 22 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 23 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 24 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual::
# 25 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 6, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 26 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 27 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 28 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnTransition:
# 29 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor
# 30 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs
# 31 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV
# 32 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_MOM, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoorFrontFacingUp
# 33 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 34 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 35 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs::
# 36 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 2, 4
# 37 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 38 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 39 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 40 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV::
# 41 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 6, 5
# 42 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 43 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 44 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 45 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor::
# 46 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 1, 8
# 47 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 48 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 49 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 50 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoorFrontFacingUp::
# 51 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_RIVALS_HOUSE_1F_MOM, 2, 6
# 52 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_RIVALS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 53 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 54 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 55 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 56 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnFrame:
# 57 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn
# 58 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock
# 59 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport
# 60 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1, LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor
# 61 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 62 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.2byte 0
# 63 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 64 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock::
# 65 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 66 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 67 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 68 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 69 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 70 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 71 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_MAYS_HOUSE_2F, 1, 1
# 72 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitstate
# 73 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 74 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 75 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 76 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs:
# 77 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 78 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 79 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 80 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn::
# 81 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 82 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 83 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 84 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 85 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 86 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 87 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport::
# 88 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 89 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, FEMALE
# 90 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_PLAYERS_HOUSE_1F_MOM
# 91 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportFemale
# 92 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 93 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 94 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor::
# 95 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 96 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 40
# 97 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_WalkInPlaceDown
# 98 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 99 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 8
# 100 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 101 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_ExclamationMark
# 102 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 103 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 104 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 105 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, LittlerootTown_MaysHouse_1F_Movement_RivalMomMoveAside
# 106 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 107 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 108 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 109 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
# 110 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_TEMP_0, 1
# 111 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 112 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 113 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 114 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_RivalMomMoveAside:
# 115 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 116 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 117 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_right
# 118 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 119 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 120 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalMom::
# 121 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 122 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 123 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq VAR_TEMP_0, 1, RivalsHouse_1F_EventScript_GoUpstairs
# 124 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE103, RivalsHouse_1F_EventScript_GoHomeEverySoOften
# 125 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, RivalsHouse_1F_EventScript_RivalIsOnRoute103
# 126 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 127 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_LikeChildLikeFather, MSGBOX_DEFAULT
# 128 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 129 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 130 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 131 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_GoUpstairs::
# 132 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	checkplayergender
# 133 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RivalsHouse_1F_EventScript_GoUpstairs_M
# 134 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_GoUpstairs, MSGBOX_DEFAULT
# 135 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 136 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end	
# 137 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 138 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_GoUpstairs_M::
# 139 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_GoUpstairs_M, MSGBOX_DEFAULT
# 140 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 141 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end	
# 142 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 143 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalIsOnRoute103::
# 144 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_WentOutToRoute103, MSGBOX_DEFAULT
# 145 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 146 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 147 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 148 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_GoHomeEverySoOften::
# 149 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_ShouldGoHomeEverySoOften, MSGBOX_DEFAULT
# 150 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 151 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 152 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 153 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalSibling::
# 154 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 156 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetPlayerBigGuyGirlString
# 157 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_DoYouHavePokemon, MSGBOX_DEFAULT
# 158 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 159 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 160 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 161 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoSeeRoom::
# 162 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 163 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 164 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 165 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceRight
# 166 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 167 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 168 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 169 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 170 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_OhYoureTheNewNeighbor:
# 171 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, hello.\nAnd you are?\p…\pOh, you're {PLAYER}, our new next-door\nneighbor! Welcome.\pWe have a daughter about the same\nage as you.\pShe has been so excited about making\na new friend.\pShe should be in {COLOR BLUE}her room upstairs{COLOR DARK_GRAY}.\pI hope you'll go and introduce yourself.$"
# 172 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 173 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_LikeChildLikeFather:
# 174 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Where is that husband of mine?\pIt was so good of you to visit,\n{PLAYER}, and yet he's nowhere to be\lfound!$"
# 175 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 176 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_GoUpstairs:
# 177 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I do hope you'll be friends with my\nson.\pHe should be upstairs.\nGo on up and say hi.$"
# 178 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 179 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_GoUpstairs_M:
# 180 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I do hope you'll be friends with my\ndaughter.\pShe should be upstairs.\nGo on up and say hi.$"
# 181 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 182 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_WentOutToRoute103:
# 183 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, {RIVAL} went out to Route 103\n"
# 184 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "just a little while ago.\p"
# 185 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Like father, like child.\n"
# 186 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{RIVAL} can't stay quietly at home.$"
# 187 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 188 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_ShouldGoHomeEverySoOften:
# 189 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I think it's wonderful for people to\n"
# 190 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "travel with Pokémon.\p"
# 191 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "But you should go home every so often\n"
# 192 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "to let your mother know you're okay.\p"
# 193 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "She might not say it, but I'm sure she\n"
# 194 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "worries about you, {PLAYER}{KUN}.$"
# 195 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 196 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_DoYouHavePokemon:
# 197 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hi, neighbor!\p"
# 198 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Do you already have your\n"
# 199 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "own Pokémon?$"
