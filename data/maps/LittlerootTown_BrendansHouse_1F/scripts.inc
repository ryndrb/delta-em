# 1 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_MOM, 1
# 3 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_RIVAL_MOM, 4
# 4 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_RIVAL, 7
# 5 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 6 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_MapScripts::
# 7 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_BrendansHouse_1F_OnLoad
# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_1F_OnTransition
# 9 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_OnFrame
# 10 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.byte 0
# 11 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 12 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnLoad:
# 13 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes
# 14 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual
# 15 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 16 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 17 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes::
# 18 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 19 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 20 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 21 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 22 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual::
# 23 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	checkplayergender
# 24 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual
# 25 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 26 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 27 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual::
# 28 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 29 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 30 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 31 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition:
# 32 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor
# 33 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs
# 34 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV
# 35 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_MOM, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoorFrontFacingUp
# 36 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 37 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 38 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs::
# 39 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 8, 4
# 40 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 41 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 42 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 43 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV::
# 44 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 4, 5
# 45 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 46 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 47 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 48 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor::
# 49 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 9, 8
# 50 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 51 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 52 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 53 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoorFrontFacingUp::
# 54 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_MOM, 8, 6
# 55 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_MOM, MOVEMENT_TYPE_FACE_UP
# 56 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 57 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 58 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 59 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
# 60 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnFrame:
# 61 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn
# 62 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock
# 63 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport
# 64 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 1, LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor
# 65 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 66 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.2byte 0
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 68 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock::
# 69 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 70 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 73 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 74 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 7, 1
# 76 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitstate
# 77 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 78 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 79 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 80 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs:
# 81 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn::
# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 86 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 87 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 88 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 89 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 90 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 91 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport::
# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, MALE
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_MOM
# 95 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportMale
# 96 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 97 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 98 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
# 99 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 100 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 40
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_WalkInPlaceDown
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 8
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 105 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
# 106 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 107 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 108 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 109 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomMoveAside
# 110 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 111 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 113 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
# 114 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_TEMP_0, 1
# 115 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 116 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 117 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 118 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_RivalMomMoveAside:
# 119 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 120 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 121 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_left
# 122 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 123 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 124 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
# 125 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 126 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 127 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 128 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceLeft
# 129 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 130 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 131 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 132 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 133 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsntItNiceInHere:
# 134 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: See, {PLAYER}?\nIsn't it nice in here, too?$"
# 135 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MoversPokemonGoSetClock:
# 137 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The moving company's Pokémon even help\nwith the unpacking and cleanup.\lThey really make moving a cinch!\p…\pYou should go and see your new room\nupstairs, {PLAYER}!\pDad even bought a new clock for it to\nhelp celebrate the big move.\pYou'll need to set the time, though!$"
# 138 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 139 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ArentYouInterestedInRoom:
# 140 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: Well, {PLAYER}?\pDon't you want to see your new room?$"
# 141 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 142 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoSetTheClock:
# 143 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: {PLAYER}, go set the clock in your\nroom, honey.\pI hung it on the wall, right between the\nTV and the stairs.$"
# 144 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 145 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_OhComeQuickly:
# 146 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: Oh! {PLAYER}! {PLAYER}!!!\nQuick! Come quickly!$"
# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 148 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MaybeDadWillBeOn:
# 149 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's the Petalburg Gym!\nMaybe Dad will be on TV!$"
# 150 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 151 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ItsOverWeMissedHim:
# 152 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh…\nIt's already ended.\pLooks like your dad was on, but we\nmissed his part.\pWhat a shame.$"
# 153 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 154 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor:
# 155 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "But that reminds me…\pOne of Dad's friends lives in this\ntown.\p{COLOR BLUE}Professor Birch{COLOR DARK_GRAY} is his name.\pHe lives {COLOR BLUE}right next door{COLOR DARK_GRAY}, so you should\ngo over and introduce yourself.$"
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 157 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_SeeYouHoney:
# 158 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: Now take care out there, honey!$"
# 159 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DidYouMeetProfBirch:
# 161 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: Did you get to meet Professor\nBirch?$"
# 162 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 163 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_YouShouldRestABit:
# 164 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: You feeling OK, {PLAYER}?\pYou look a little tired.\nI think you should rest a bit.$"
# 165 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 166 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TakeCareHoney:
# 167 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: Now take care out there, honey!$"
# 168 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 169 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom:
# 170 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: Oh?\nDid Dad give you that badge!?\pThen here's something from your Mom!$"
# 171 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DontPushYourselfTooHard:
# 173 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's a wonderful thing to try hard at\nyour passion, but don't push yourself\ltoo hard, dear.\pYou can always come home if you need\nto.\pGood luck, honey!$"
# 174 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 175 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatAPokenav:
# 176 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: What is that, honey? A Pokénav?\n"
# 177 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Someone from Devon gave it to you?\p"
# 178 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Well, honey, how about registering\n"
# 179 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "your mom?\p"
# 180 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "… … …$"
# 181 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 182 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RegisteredMom:
# 183 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Registered Mom\n"
# 184 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "in the Pokénav.$"
# 185 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 186 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth1:
# 187 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Fugiiiiih!$"
# 188 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 189 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth2:
# 190 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Huggoh, uggo uggo…$"
# 191 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 192 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ReportFromPetalburgGym:
# 193 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{COLOR RED}Interviewer{COLOR DARK_GRAY}: …\pWe brought you this report live from\nin front of Petalburg Gym.\pNext up, a special look at a long-\n-awaited meteor shower in the next\lstar show…$"
# 194 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 195 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TheresAMovieOnTV:
# 196 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There is a movie on TV.\p"
# 197 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Two men are dancing on a big piano\n"
# 198 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "keyboard.\p"
# 199 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Better get going!$"
# 200 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 201 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RunningShoesManual:
# 202 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's the instruction booklet for the\n"
# 203 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Running Shoes.\p"
# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Press the B Button to run while\n"
# 205 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "wearing your Running Shoes.\p"
# 206 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Lace up your Running Shoes and hit\n"
# 207 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "the road running!”$"
# 208 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 209 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TicketFromBrineyCameForYou:
# 210 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Dad: Hm?\p"
# 211 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 212 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's been a while since I saw you,\n"
# 213 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "but you look…stronger, somehow.\p"
# 214 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "That's the impression I get.\n"
# 215 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "But your old man hasn't given up yet!\p"
# 216 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes, I have something for you.\n"
# 217 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This came to you from someone named\l"
# 218 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mr. Briney.$"
# 219 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 220 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_PortsInSlateportLilycove:
# 221 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Dad: Hm, a Ticket for a ferry?\p"
# 222 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "If I recall, there are ferry ports in\n"
# 223 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Slateport and Lilycove.$"
# 224 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 225 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_BetterGetBackToGym:
# 226 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I'd better get back to Petalburg Gym.\p"
# 227 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom, thanks for looking after the house\n"
# 228 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while I'm away.$"
# 229 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 230 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DadShouldStayLonger:
# 231 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: That Dad of yours…\p"
# 232 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He comes home for the first time in a\n"
# 233 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while, but all he talks about is Pokémon.\p"
# 234 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He should relax and stay a little longer.$"
# 235 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 236 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatABreakingStory:
# 237 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: Is that a breaking news story?$"
# 238 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 239 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_LatiEmergencyNewsFlash:
# 240 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We bring you this emergency\n"
# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "news flash!\p"
# 242 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "In various Hoenn locales, there have\n"
# 243 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "been reports of a BZZT…colored\l"
# 244 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Pokémon in flight.\p"
# 245 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The identity of this Pokémon is\n"
# 246 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "currently unknown.\p"
# 247 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We now return you to the regular\n"
# 248 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "movie program.$"
# 249 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 250 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_WhatColorDidTheySay:
# 251 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: {PLAYER}, did you catch that?\p"
# 252 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "What color did the announcer say\n"
# 253 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "that Pokémon was?$"
# 254 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 255 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_StillUnknownPokemon:
# 256 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: Well, isn't that something!\n"
# 257 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There are still unknown Pokémon.$"
# 258 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 259 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_OhYoureTheNewNeighbor:
# 260 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, hello.\nAnd you are?\p…\pOh, you're {PLAYER}, our new next-door\nneighbor! Welcome.\pWe have a son who is about the same\nage as you.\pHe has been so excited about making a\nnew friend.\pHe should be in {COLOR BLUE}his room upstairs{COLOR DARK_GRAY}.\pI hope you'll go and introduce yourself.$"
