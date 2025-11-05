# 1 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 3 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_MapScripts::
# 4 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_BrendansHouse_1F_OnLoad
# 5 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_1F_OnTransition
# 6 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_OnFrame
# 7 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.byte 0
# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 9 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnLoad:
# 10 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes
# 11 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual
# 12 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 13 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 14 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes::
# 15 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 16 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 17 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 18 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 19 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual::
# 20 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	checkplayergender
# 21 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual
# 22 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 23 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 24 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual::
# 25 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 26 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 27 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 28 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition:
# 29 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor
# 30 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs
# 31 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV
# 32 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_MOM, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoorFrontFacingUp
# 33 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 34 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 35 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs::
# 36 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 8, 4
# 37 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 38 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 39 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 40 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV::
# 41 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 4, 5
# 42 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 43 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 44 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 45 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor::
# 46 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 9, 8
# 47 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 48 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 49 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 50 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoorFrontFacingUp::
# 51 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_RIVALS_HOUSE_1F_MOM, 8, 6
# 52 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_RIVALS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 53 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 54 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 55 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 56 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
# 57 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnFrame:
# 58 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn
# 59 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock
# 60 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport
# 61 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 1, LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor
# 62 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 63 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.2byte 0
# 64 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 65 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock::
# 66 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 68 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 69 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 70 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 7, 1
# 73 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitstate
# 74 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 76 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 77 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs:
# 78 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 79 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 80 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 81 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn::
# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 86 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 87 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 88 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport::
# 89 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 90 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, MALE
# 91 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_PLAYERS_HOUSE_1F_MOM
# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportMale
# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 95 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
# 96 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 97 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 40
# 98 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_WalkInPlaceDown
# 99 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 100 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 8
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_ExclamationMark
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 105 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 106 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomMoveAside
# 107 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 108 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 109 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 110 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
# 111 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_TEMP_0, 1
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 113 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 114 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 115 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_RivalMomMoveAside:
# 116 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 117 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 118 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_left
# 119 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 120 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 121 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
# 122 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 123 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 124 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 125 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceLeft
# 126 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 127 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 128 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 129 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 130 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsntItNiceInHere:
# 131 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: See, {PLAYER}?\nIsn't it nice in here, too?$"
# 132 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 133 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MoversPokemonGoSetClock:
# 134 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The moving company's Pokémon even help\nwith the unpacking and cleanup.\lThey really make moving a cinch!\p…\pYou should go and see your new room\nupstairs, {PLAYER}!\pDad even bought a new clock for it to\nhelp celebrate the big move.\pYou'll need to set the time, though!$"
# 135 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ArentYouInterestedInRoom:
# 137 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: Well, {PLAYER}?\pDon't you want to see your new room?$"
# 138 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 139 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoSetTheClock:
# 140 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: {PLAYER}, go set the clock in your\nroom, honey.\pI hung it on the wall, right between the\nTV and the stairs.$"
# 141 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 142 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_OhComeQuickly:
# 143 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: Oh! {PLAYER}! {PLAYER}!!!\nQuick! Come quickly!$"
# 144 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 145 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MaybeDadWillBeOn:
# 146 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's the Petalburg Gym!\nMaybe Dad will be on TV!$"
# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 148 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ItsOverWeMissedHim:
# 149 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh…\nIt's already ended.\pLooks like your dad was on, but we\nmissed his part.\pWhat a shame.$"
# 150 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 151 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor:
# 152 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "But that reminds me…\pOne of Dad's friends lives in this\ntown.\p{COLOR BLUE}Professor Birch{COLOR DARK_GRAY} is his name.\pHe lives {COLOR BLUE}right next door{COLOR DARK_GRAY}, so you should\ngo over and introduce yourself.$"
# 153 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 154 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_SeeYouHoney:
# 155 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: Now take care out there, honey!$"
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 157 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DidYouMeetProfBirch:
# 158 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: Did you get to meet Professor\nBirch?$"
# 159 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_YouShouldRestABit:
# 161 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: You feeling OK, {PLAYER}?\pYou look a little tired.\nI think you should rest a bit.$"
# 162 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 163 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TakeCareHoney:
# 164 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: Now take care out there, honey!$"
# 165 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 166 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom:
# 167 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: Oh?\nDid Dad give you that badge!?\pThen here's something from your Mom!$"
# 168 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 169 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DontPushYourselfTooHard:
# 170 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's a wonderful thing to try hard at\nyour passion, but don't push yourself\ltoo hard, dear.\pYou can always come home if you need\nto.\pGood luck, honey!$"
# 171 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatAPokenav:
# 173 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: What is that, honey? A Pokénav?\n"
# 174 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Someone from Devon gave it to you?\p"
# 175 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Well, honey, how about registering\n"
# 176 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "your mom?\p"
# 177 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "… … …$"
# 178 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 179 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RegisteredMom:
# 180 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Registered Mom\n"
# 181 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "in the Pokénav.$"
# 182 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 183 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth1:
# 184 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Fugiiiiih!$"
# 185 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 186 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth2:
# 187 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Huggoh, uggo uggo…$"
# 188 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 189 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ReportFromPetalburgGym:
# 190 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{COLOR RED}Interviewer{COLOR DARK_GRAY}: …\pWe brought you this report live from\nin front of Petalburg Gym.\pNext up, a special look at a long-\n-awaited meteor shower in the next\lstar show…$"
# 191 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 192 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TheresAMovieOnTV:
# 193 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There is a movie on TV.\p"
# 194 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Two men are dancing on a big piano\n"
# 195 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "keyboard.\p"
# 196 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Better get going!$"
# 197 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 198 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RunningShoesManual:
# 199 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's the instruction booklet for the\n"
# 200 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Running Shoes.\p"
# 201 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Press the B Button to run while\n"
# 202 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "wearing your Running Shoes.\p"
# 203 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Lace up your Running Shoes and hit\n"
# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "the road running!”$"
# 205 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 206 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TicketFromBrineyCameForYou:
# 207 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Dad: Hm?\p"
# 208 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 209 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's been a while since I saw you,\n"
# 210 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "but you look…stronger, somehow.\p"
# 211 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "That's the impression I get.\n"
# 212 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "But your old man hasn't given up yet!\p"
# 213 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes, I have something for you.\n"
# 214 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This came to you from someone named\l"
# 215 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mr. Briney.$"
# 216 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 217 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_PortsInSlateportLilycove:
# 218 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Dad: Hm, a Ticket for a ferry?\p"
# 219 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "If I recall, there are ferry ports in\n"
# 220 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Slateport and Lilycove.$"
# 221 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 222 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_BetterGetBackToGym:
# 223 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I'd better get back to Petalburg Gym.\p"
# 224 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom, thanks for looking after the house\n"
# 225 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while I'm away.$"
# 226 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 227 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DadShouldStayLonger:
# 228 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: That Dad of yours…\p"
# 229 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He comes home for the first time in a\n"
# 230 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while, but all he talks about is Pokémon.\p"
# 231 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He should relax and stay a little longer.$"
# 232 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 233 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatABreakingStory:
# 234 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: Is that a breaking news story?$"
# 235 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 236 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_LatiEmergencyNewsFlash:
# 237 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We bring you this emergency\n"
# 238 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "news flash!\p"
# 239 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "In various Hoenn locales, there have\n"
# 240 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "been reports of a BZZT…colored\l"
# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Pokémon in flight.\p"
# 242 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The identity of this Pokémon is\n"
# 243 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "currently unknown.\p"
# 244 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We now return you to the regular\n"
# 245 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "movie program.$"
# 246 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 247 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_WhatColorDidTheySay:
# 248 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: {PLAYER}, did you catch that?\p"
# 249 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "What color did the announcer say\n"
# 250 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "that Pokémon was?$"
# 251 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 252 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_StillUnknownPokemon:
# 253 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: Well, isn't that something!\n"
# 254 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There are still unknown Pokémon.$"
# 255 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 256 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_OhYoureTheNewNeighbor:
# 257 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, hello.\nAnd you are?\p…\pOh, you're {PLAYER}, our new next-door\nneighbor! Welcome.\pWe have a son who is about the same\nage as you.\pHe has been so excited about making a\nnew friend.\pHe should be in {COLOR BLUE}his room upstairs{COLOR DARK_GRAY}.\pI hope you'll go and introduce yourself.$"

PlayersHouse_1F_EventScript_Mom_StatEditor::
# 262 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, PlayersHouse_1F_EventScript_Mom_StatEditor_2
# 268 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_set FLAG_UNLOCKED_STAT_EDITOR, PlayersHouse_1F_EventScript_Mom_StatEditor_5
# 271 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, PlayersHouse_1F_EventScript_Mom_StatEditor_8
	return

PlayersHouse_1F_EventScript_Mom_StatEditor_2:
# 263 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_Mom_StatEditor_Text_0
# 264 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 265 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	release
	end

PlayersHouse_1F_EventScript_Mom_StatEditor_5:
	return

PlayersHouse_1F_EventScript_Mom_StatEditor_8:
# 272 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_Mom_StatEditor_Text_1
# 273 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 274 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 8
# 275 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Common_Movement_ExclamationMark
# 276 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement LOCALID_PLAYERS_HOUSE_1F_MOM
# 277 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 8
# 278 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_Mom_StatEditor_Text_2
# 279 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 280 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_UNLOCKED_STAT_EDITOR
# 281 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 282 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	release
	end


PlayersHouse_1F_EventScript_Mom_StatEditor_Text_0:
# 263 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: Stay safe out there, okay? And\ncome home whenever you need a break.$"

PlayersHouse_1F_EventScript_Mom_StatEditor_Text_1:
# 272 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: Oh, {PLAYER}!\nYou're back!\pYou've grown so much since we first\ngot here… I can feel it!\pYour eyes, the way you stand…\nYou've changed, just a little.\lStronger, maybe.\pAnd your Pokémon, too.\nThey seem… closer to you.\lLike you're really in sync.\pYou know, sometimes I think the heart\nunderstands more than we realize.\pWhen everything just clicks between\nyou and your Pokémon--it's special.\pIf you ever feel like something's not\nquite right, deep down, trust your\linstincts. Trust their instincts.\pIt's okay to listen to that feeling and\nmake a few changes.\pAfter all, growing stronger isn't\nalways about pushing forward.\pSometimes, it's about understanding\nwho you are--together.$"

PlayersHouse_1F_EventScript_Mom_StatEditor_Text_2:
# 278 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{COLOR RED}Mom{COLOR DARK_GRAY}: Hah, listen to me rambling!\pMaybe I've just been watching too\nmany dramas lately.\pAnyway, stay safe out there, okay? And\ncome home whenever you need a break.$"
