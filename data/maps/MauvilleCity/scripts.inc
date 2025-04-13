# 1 "data/maps/MauvilleCity/scripts.pory"

# 2 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_WALLY, 6
# 3 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_WALLYS_UNCLE, 7
# 4 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_SCOTT, 11
# 5 "data/maps/MauvilleCity/scripts.pory"

# 6 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_MapScripts::
# 7 "data/maps/MauvilleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_OnTransition
# 8 "data/maps/MauvilleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MauvilleCity_OnFrameTable
# 9 "data/maps/MauvilleCity/scripts.pory"
	.byte 0
# 10 "data/maps/MauvilleCity/scripts.pory"

# 11 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_OnTransition:
# 12 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_VISITED_MAUVILLE_CITY
# 13 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 14 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
# 15 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_SYS_TV_START
# 16 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 17 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 0
# 18 "data/maps/MauvilleCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 19 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_RECEIVED_TM_THUNDERBOLT, MauvilleCity_EventScript_MoveWattsonBackToGym
# 20 "data/maps/MauvilleCity/scripts.pory"
    call_if_eq VAR_MAUVILLE_CITY_STATE, 0, MauvilleCity_EventScript_MoveWallyUncleToBeginning
# 21 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_MAUVILLE_CITY_STATE, 7, MauvilleCity_EventScript_MoveWallyCloseToRoute118
# 22 "data/maps/MauvilleCity/scripts.pory"
	end
# 23 "data/maps/MauvilleCity/scripts.pory"

# 24 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_MoveWattsonBackToGym::
# 25 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 26 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 27 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
# 28 "data/maps/MauvilleCity/scripts.pory"
	return
# 29 "data/maps/MauvilleCity/scripts.pory"

# 30 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_MoveWallyUncleToBeginning::
# 31 "data/maps/MauvilleCity/scripts.pory"
    setobjectmovementtype LOCALID_WALLY, MOVEMENT_TYPE_FACE_LEFT
# 32 "data/maps/MauvilleCity/scripts.pory"
    setobjectmovementtype LOCALID_WALLYS_UNCLE, MOVEMENT_TYPE_FACE_RIGHT
# 33 "data/maps/MauvilleCity/scripts.pory"
    setobjectxyperm LOCALID_WALLY, 28, 11
# 34 "data/maps/MauvilleCity/scripts.pory"
    setobjectxyperm LOCALID_WALLYS_UNCLE, 27, 11
# 35 "data/maps/MauvilleCity/scripts.pory"
    return
# 36 "data/maps/MauvilleCity/scripts.pory"

# 37 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_MoveWallyCloseToRoute118::
# 38 "data/maps/MauvilleCity/scripts.pory"
	setobjectmovementtype LOCALID_WALLY, MOVEMENT_TYPE_FACE_RIGHT
# 39 "data/maps/MauvilleCity/scripts.pory"
    setobjectxyperm LOCALID_WALLY, 35, 9
# 40 "data/maps/MauvilleCity/scripts.pory"
	return
# 41 "data/maps/MauvilleCity/scripts.pory"

# 42 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_OnFrameTable::
# 43 "data/maps/MauvilleCity/scripts.pory"
	map_script_2 VAR_MAUVILLE_CITY_STATE, 5, MauvilleCity_EventScript_RivalAfterCozmoEvent
# 44 "data/maps/MauvilleCity/scripts.pory"
	map_script_2 VAR_MAUVILLE_CITY_STATE, 7, MauvilleCity_EventScript_WallyAfterPetalburgEvent
# 45 "data/maps/MauvilleCity/scripts.pory"
	.2byte 0
# 46 "data/maps/MauvilleCity/scripts.pory"

# 47 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Boy::
# 48 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_NurseHurtMonBackToHealth, MSGBOX_NPC
# 49 "data/maps/MauvilleCity/scripts.pory"
	end
# 50 "data/maps/MauvilleCity/scripts.pory"

# 51 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Maniac::
# 52 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_AllSortsOfPeopleComeThrough, MSGBOX_NPC
# 53 "data/maps/MauvilleCity/scripts.pory"
	end
# 54 "data/maps/MauvilleCity/scripts.pory"

# 55 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Woman::
# 56 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RydelVeryGenerous, MSGBOX_NPC
# 57 "data/maps/MauvilleCity/scripts.pory"
	end
# 58 "data/maps/MauvilleCity/scripts.pory"

# 59 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RichBoy::
# 60 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_PokemonCanJumpYouOnBike, MSGBOX_NPC
# 61 "data/maps/MauvilleCity/scripts.pory"
	end
# 62 "data/maps/MauvilleCity/scripts.pory"

# 63 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CitySign::
# 64 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_CitySign, MSGBOX_SIGN
# 65 "data/maps/MauvilleCity/scripts.pory"
	end
# 66 "data/maps/MauvilleCity/scripts.pory"

# 67 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GymSign::
# 68 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GymSign, MSGBOX_SIGN
# 69 "data/maps/MauvilleCity/scripts.pory"
	end
# 70 "data/maps/MauvilleCity/scripts.pory"

# 71 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BikeShopSign::
# 72 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BikeShopSign, MSGBOX_SIGN
# 73 "data/maps/MauvilleCity/scripts.pory"
	end
# 74 "data/maps/MauvilleCity/scripts.pory"

# 75 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GameCornerSign::
# 76 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GameCornerSign, MSGBOX_SIGN
# 77 "data/maps/MauvilleCity/scripts.pory"
	end
# 78 "data/maps/MauvilleCity/scripts.pory"

# 79 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_SchoolKidM::
# 80 "data/maps/MauvilleCity/scripts.pory"
	lock
# 81 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 82 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_TV_EXPLAINED, MauvilleCity_EventScript_TVExplained
# 83 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ExplainTV, MSGBOX_DEFAULT
# 84 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_TV_EXPLAINED
# 85 "data/maps/MauvilleCity/scripts.pory"
	release
# 86 "data/maps/MauvilleCity/scripts.pory"
	end
# 87 "data/maps/MauvilleCity/scripts.pory"

# 88 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_TVExplained::
# 89 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BeenCheckingOutTV, MSGBOX_DEFAULT
# 90 "data/maps/MauvilleCity/scripts.pory"
	release
# 91 "data/maps/MauvilleCity/scripts.pory"
	end
# 92 "data/maps/MauvilleCity/scripts.pory"

# 93 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallysUncle::
# 94 "data/maps/MauvilleCity/scripts.pory"
	lock
# 95 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 96 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_UncleAskPlayerToBattleWally
# 97 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleHesTooPeppy, MSGBOX_DEFAULT
# 98 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 99 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_WalkInPlaceDown
# 100 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 101 "data/maps/MauvilleCity/scripts.pory"
	release
# 102 "data/maps/MauvilleCity/scripts.pory"
	end
# 103 "data/maps/MauvilleCity/scripts.pory"

# 104 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_UncleAskPlayerToBattleWally::
# 105 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleCanYouBattleWally, MSGBOX_DEFAULT
# 106 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 107 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_WalkInPlaceDown
# 108 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 109 "data/maps/MauvilleCity/scripts.pory"
	release
# 110 "data/maps/MauvilleCity/scripts.pory"
	end
# 111 "data/maps/MauvilleCity/scripts.pory"

# 112 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wally::
# 113 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 114 "data/maps/MauvilleCity/scripts.pory"
	playbgm MUS_WALLY_THEME, TRUE
# 115 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_WallyRequestBattleAgain
# 116 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWantToChallengeGym, MSGBOX_DEFAULT
# 117 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleYourePushingIt, MSGBOX_DEFAULT
# 118 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWeCanBeatAnyone, MSGBOX_DEFAULT
# 119 "data/maps/MauvilleCity/scripts.pory"
    closemessage
# 120 "data/maps/MauvilleCity/scripts.pory"
    delay 24
# 121 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceDown
# 122 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 123 "data/maps/MauvilleCity/scripts.pory"
    delay 16
# 124 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 125 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark
# 126 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 127 "data/maps/MauvilleCity/scripts.pory"
    applymovement LOCALID_WALLYS_UNCLE, Common_Movement_WalkInPlaceDown
# 128 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 129 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_Delay48
# 130 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 131 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWillYouBattleMe, MSGBOX_YESNO
# 132 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 133 "data/maps/MauvilleCity/scripts.pory"
	end
# 134 "data/maps/MauvilleCity/scripts.pory"

# 135 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt::
# 136 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, MauvilleCity_EventScript_BattleWally
# 137 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_EventScript_DeclineWallyBattle
# 138 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 139 "data/maps/MauvilleCity/scripts.pory"
    goto MauvilleCity_EventScript_WallyAndUncleExit
# 140 "data/maps/MauvilleCity/scripts.pory"
	end
# 141 "data/maps/MauvilleCity/scripts.pory"

# 142 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally::
# 143 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLY
# 144 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLYS_UNCLE
# 145 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
# 146 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
# 147 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
# 148 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 149 "data/maps/MauvilleCity/scripts.pory"
    addobject LOCALID_SCOTT
# 150 "data/maps/MauvilleCity/scripts.pory"
    applymovement LOCALID_SCOTT, MauvilleCity_EventScript_ScottApproachPlayer
# 151 "data/maps/MauvilleCity/scripts.pory"
    waitmovement 0
# 152 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 153 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 154 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottYouDidntHoldBack, MSGBOX_DEFAULT
# 155 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 156 "data/maps/MauvilleCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 157 "data/maps/MauvilleCity/scripts.pory"
    applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExit
# 158 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExit
# 159 "data/maps/MauvilleCity/scripts.pory"
    waitmovement LOCALID_SCOTT
# 160 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 161 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 162 "data/maps/MauvilleCity/scripts.pory"
	end
# 163 "data/maps/MauvilleCity/scripts.pory"

# 164 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWally::
# 165 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
# 166 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 167 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_MovePlayerDown
# 168 "data/maps/MauvilleCity/scripts.pory"
	delay 16
# 169 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat
# 170 "data/maps/MauvilleCity/scripts.pory"
    delay 48
# 171 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
# 172 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
# 173 "data/maps/MauvilleCity/scripts.pory"
    closemessage
# 174 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_WalkInPlaceLeft
# 175 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 176 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
# 177 "data/maps/MauvilleCity/scripts.pory"
    delay 16
# 178 "data/maps/MauvilleCity/scripts.pory"
    msgbox MauvilleCity_Text_WallyStillSad, MSGBOX_DEFAULT
# 179 "data/maps/MauvilleCity/scripts.pory"
    delay 16
# 180 "data/maps/MauvilleCity/scripts.pory"
    msgbox MauvilleCity_Text_UncleNoNeedToBeDownCont, MSGBOX_DEFAULT
# 181 "data/maps/MauvilleCity/scripts.pory"
    closemessage
# 182 "data/maps/MauvilleCity/scripts.pory"
    applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceRight
# 183 "data/maps/MauvilleCity/scripts.pory"
    waitmovement LOCALID_WALLY
# 184 "data/maps/MauvilleCity/scripts.pory"
    msgbox MauvilleCity_Text_WallyYesUncle, MSGBOX_DEFAULT
# 185 "data/maps/MauvilleCity/scripts.pory"
    closemessage
# 186 "data/maps/MauvilleCity/scripts.pory"
    applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceDown
# 187 "data/maps/MauvilleCity/scripts.pory"
    waitmovement LOCALID_WALLY
# 188 "data/maps/MauvilleCity/scripts.pory"
    msgbox MauvilleCity_Text_WallyGetStronger, MSGBOX_DEFAULT
# 189 "data/maps/MauvilleCity/scripts.pory"
    closemessage
# 190 "data/maps/MauvilleCity/scripts.pory"
    delay 16
# 191 "data/maps/MauvilleCity/scripts.pory"
    applymovement LOCALID_WALLY, Common_Movement_WalkDown
# 192 "data/maps/MauvilleCity/scripts.pory"
    waitmovement LOCALID_WALLY
# 193 "data/maps/MauvilleCity/scripts.pory"
    msgbox MauvilleCity_Text_WallyCallYouRival, MSGBOX_DEFAULT
# 194 "data/maps/MauvilleCity/scripts.pory"
    closemessage
# 195 "data/maps/MauvilleCity/scripts.pory"
    delay 16
# 196 "data/maps/MauvilleCity/scripts.pory"
    msgbox MauvilleCity_Text_WallyCallYouRival2, MSGBOX_DEFAULT
# 197 "data/maps/MauvilleCity/scripts.pory"
    closemessage
# 198 "data/maps/MauvilleCity/scripts.pory"
    applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceDown
# 199 "data/maps/MauvilleCity/scripts.pory"
    waitmovement LOCALID_WALLY
# 200 "data/maps/MauvilleCity/scripts.pory"
    delay 16
# 201 "data/maps/MauvilleCity/scripts.pory"
    msgbox MauvilleCity_Text_WallyCallYouRival3, MSGBOX_DEFAULT
# 202 "data/maps/MauvilleCity/scripts.pory"
    closemessage
# 203 "data/maps/MauvilleCity/scripts.pory"
	return
# 204 "data/maps/MauvilleCity/scripts.pory"

# 205 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DeclineWallyBattle::
# 206 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
# 207 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
# 208 "data/maps/MauvilleCity/scripts.pory"
	fadedefaultbgm
# 209 "data/maps/MauvilleCity/scripts.pory"
	release
# 210 "data/maps/MauvilleCity/scripts.pory"
	end
# 211 "data/maps/MauvilleCity/scripts.pory"

# 212 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyRequestBattleAgain::
# 213 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 214 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 215 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyPleaseBattleMe, MSGBOX_YESNO
# 216 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 217 "data/maps/MauvilleCity/scripts.pory"
	end
# 218 "data/maps/MauvilleCity/scripts.pory"

# 219 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayer:
# 220 "data/maps/MauvilleCity/scripts.pory"
    walk_up
# 221 "data/maps/MauvilleCity/scripts.pory"
    walk_up
# 222 "data/maps/MauvilleCity/scripts.pory"
    walk_up
# 223 "data/maps/MauvilleCity/scripts.pory"
    walk_up
# 224 "data/maps/MauvilleCity/scripts.pory"
    walk_up
# 225 "data/maps/MauvilleCity/scripts.pory"
    walk_left
# 226 "data/maps/MauvilleCity/scripts.pory"
    walk_left
# 227 "data/maps/MauvilleCity/scripts.pory"
    walk_left
# 228 "data/maps/MauvilleCity/scripts.pory"
    walk_left
# 229 "data/maps/MauvilleCity/scripts.pory"
    walk_in_place_up
# 230 "data/maps/MauvilleCity/scripts.pory"
    step_end
# 231 "data/maps/MauvilleCity/scripts.pory"

# 232 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExit:
# 233 "data/maps/MauvilleCity/scripts.pory"
    delay_16
# 234 "data/maps/MauvilleCity/scripts.pory"
    delay_16
# 235 "data/maps/MauvilleCity/scripts.pory"
    walk_in_place_left
# 236 "data/maps/MauvilleCity/scripts.pory"
    step_end
# 237 "data/maps/MauvilleCity/scripts.pory"

# 238 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExit:
# 239 "data/maps/MauvilleCity/scripts.pory"
    walk_left
# 240 "data/maps/MauvilleCity/scripts.pory"
    walk_left
# 241 "data/maps/MauvilleCity/scripts.pory"
    walk_left
# 242 "data/maps/MauvilleCity/scripts.pory"
    walk_left
# 243 "data/maps/MauvilleCity/scripts.pory"
    walk_left
# 244 "data/maps/MauvilleCity/scripts.pory"
    walk_left
# 245 "data/maps/MauvilleCity/scripts.pory"
    walk_left
# 246 "data/maps/MauvilleCity/scripts.pory"
    walk_left
# 247 "data/maps/MauvilleCity/scripts.pory"
    step_end
# 248 "data/maps/MauvilleCity/scripts.pory"

# 249 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RegisterWallyCall::
# 250 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 251 "data/maps/MauvilleCity/scripts.pory"
	pokenavcall MauvilleCity_Text_WallyPokenavCall
# 252 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 253 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 254 "data/maps/MauvilleCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 255 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
# 256 "data/maps/MauvilleCity/scripts.pory"
	waitfanfare
# 257 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 258 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 259 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
# 260 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 261 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 262 "data/maps/MauvilleCity/scripts.pory"
	end
# 263 "data/maps/MauvilleCity/scripts.pory"

# 264 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleHesTooPeppy:
# 265 "data/maps/MauvilleCity/scripts.pory"
	.string "Uncle: It's because of Pokémon that\n"
# 266 "data/maps/MauvilleCity/scripts.pory"
	.string "this boy's got more pep, I suppose…\l"
# 267 "data/maps/MauvilleCity/scripts.pory"
	.string "But he's become a bit too peppy…$"
# 268 "data/maps/MauvilleCity/scripts.pory"

# 269 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWantToChallengeGym:
# 270 "data/maps/MauvilleCity/scripts.pory"
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: Uncle, I'm begging you!\pI want to challenge this Gym to see\nhow much stronger I've become!\pPlease!\nYou'll let me, won't you?$"
# 271 "data/maps/MauvilleCity/scripts.pory"

# 272 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleYourePushingIt:
# 273 "data/maps/MauvilleCity/scripts.pory"
	.string "{COLOR RED}Uncle{COLOR DARK_GRAY}: Now hold on, Wally…\pIt's certainly true that you've grown\nquite a lot stronger alongside your\lPokémon.\pBut don't you think that jumping\nright into challenging a Gym might be\lpushing it?$"
# 274 "data/maps/MauvilleCity/scripts.pory"

# 275 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWeCanBeatAnyone:
# 276 "data/maps/MauvilleCity/scripts.pory"
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: I'm not pushing it!\pIf it's me and my Kirlia, we can beat\nanyone!$"
# 277 "data/maps/MauvilleCity/scripts.pory"

# 278 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWillYouBattleMe:
# 279 "data/maps/MauvilleCity/scripts.pory"
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: Ah!\n{PLAYER}!\pKirlia and I have gotten stronger since\nwe first met.\lGrowing together!\pI want to prove that to you and my\nuncle both, {PLAYER}.\pPlease…help me once more…\pAnd have a battle with me!$"
# 280 "data/maps/MauvilleCity/scripts.pory"

# 281 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyMyUncleWontKnowImStrong:
# 282 "data/maps/MauvilleCity/scripts.pory"
	.string "But if you won't battle against me,\n{PLAYER}…\pI don't think my uncle will believe that\nI've really gotten stronger.$"
# 283 "data/maps/MauvilleCity/scripts.pory"

# 284 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleCanYouBattleWally:
# 285 "data/maps/MauvilleCity/scripts.pory"
	.string "{COLOR RED}Uncle{COLOR DARK_GRAY}: On Wally's behalf, can I ask you\nto battle with him just this once?\pI don't think he's going to listen to\nany reason the way he is now.$"
# 286 "data/maps/MauvilleCity/scripts.pory"

# 287 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPleaseBattleMe:
# 288 "data/maps/MauvilleCity/scripts.pory"
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: {PLAYER}, please!\nBattle with me!$"
# 289 "data/maps/MauvilleCity/scripts.pory"

# 290 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyHereICome:
# 291 "data/maps/MauvilleCity/scripts.pory"
	.string "Thank you, {PLAYER}.\nOK, here we go!\pWe're going to win this Kirlia!\nWe have to!$"
# 292 "data/maps/MauvilleCity/scripts.pory"

# 293 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyDefeat:
# 294 "data/maps/MauvilleCity/scripts.pory"
	.string "Wow…\nYou really are strong, {PLAYER}!$"
# 295 "data/maps/MauvilleCity/scripts.pory"

# 296 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyIllGoBackToVerdanturf:
# 297 "data/maps/MauvilleCity/scripts.pory"
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: Uncle…\n"
# 298 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll go back to Verdanturf…$"
# 299 "data/maps/MauvilleCity/scripts.pory"

# 300 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ThankYouNotEnoughToBattle:
# 301 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, thank you…\nBeing a Trainer is tough, isn't it?\pIt's not enough just to battle with\nyour Pokémon.\pI can't become a true Trainer like\nthat… Not really…$"
# 302 "data/maps/MauvilleCity/scripts.pory"

# 303 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleNoNeedToBeDown:
# 304 "data/maps/MauvilleCity/scripts.pory"
	.string "{COLOR RED}Uncle{COLOR DARK_GRAY}: Wally, there's no need to be so\ndown on yourself.\pWhy, what's keeping you from becoming\nstronger?\pNothing is!\nAll you need to do is keep growing.$"
# 305 "data/maps/MauvilleCity/scripts.pory"

# 306 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyStillSad:
# 307 "data/maps/MauvilleCity/scripts.pory"
    .string "{COLOR RED}Wally{COLOR DARK_GRAY}: …$"
# 308 "data/maps/MauvilleCity/scripts.pory"

# 309 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleNoNeedToBeDownCont:
# 310 "data/maps/MauvilleCity/scripts.pory"
    .string "{COLOR RED}Uncle{COLOR DARK_GRAY}: Come on, let's go home.\nEveryone's waiting for you.$"
# 311 "data/maps/MauvilleCity/scripts.pory"

# 312 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyYesUncle:
# 313 "data/maps/MauvilleCity/scripts.pory"
    .string "{COLOR RED}Wally{COLOR DARK_GRAY}: …Yes, Uncle.$"
# 314 "data/maps/MauvilleCity/scripts.pory"

# 315 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyGetStronger:
# 316 "data/maps/MauvilleCity/scripts.pory"
    .string "{PLAYER}…{PAUSE 48}\pI…\nI'm definitely…\pI'm going to get stronger.\nMuch, much stronger!\pI feel like I've learned a lot from just\none Pokémon battle with you.\lAbout my own limits…and Kirlia's…$"
# 317 "data/maps/MauvilleCity/scripts.pory"

# 318 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyCallYouRival:
# 319 "data/maps/MauvilleCity/scripts.pory"
    .string "So…um… That's why…\p{PLAYER}…\nIf it's all right… Could I…$"
# 320 "data/maps/MauvilleCity/scripts.pory"

# 321 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyCallYouRival2:
# 322 "data/maps/MauvilleCity/scripts.pory"
    .string "Could I call you…my r-riv-$"
# 323 "data/maps/MauvilleCity/scripts.pory"

# 324 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyCallYouRival3:
# 325 "data/maps/MauvilleCity/scripts.pory"
    .string "Ah, never mind!\nS-sorry!\pIt was nothing!\nPlease forget about it!$"
# 326 "data/maps/MauvilleCity/scripts.pory"

# 327 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyGoodbye:
# 328 "data/maps/MauvilleCity/scripts.pory"
    .string "Guh…good-bye!$"
# 329 "data/maps/MauvilleCity/scripts.pory"

# 330 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleVisitUsSometime:
# 331 "data/maps/MauvilleCity/scripts.pory"
	.string "We should head back now, but…\pIf you ever have the time, I'd love it if\nyou'd stop by our home in Verdanturf.\lI'm sure Wally would enjoy it, too.\pWe'll look forward to seeing you!$"
# 332 "data/maps/MauvilleCity/scripts.pory"

# 333 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPokenavCall:
# 334 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 335 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Beep!\p"
# 336 "data/maps/MauvilleCity/scripts.pory"
	.string "Wally: Oh, hello, {PLAYER}!\p"
# 337 "data/maps/MauvilleCity/scripts.pory"
	.string "I just wanted to tell you that\n"
# 338 "data/maps/MauvilleCity/scripts.pory"
	.string "my uncle bought me a Pokénav!\p"
# 339 "data/maps/MauvilleCity/scripts.pory"
	.string "Now I can get in touch with you\n"
# 340 "data/maps/MauvilleCity/scripts.pory"
	.string "anytime, {PLAYER}!\p"
# 341 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 342 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Click!$"
# 343 "data/maps/MauvilleCity/scripts.pory"

# 344 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RegisteredWally:
# 345 "data/maps/MauvilleCity/scripts.pory"
	.string "Registered Wally\n"
# 346 "data/maps/MauvilleCity/scripts.pory"
	.string "in the Pokénav.$"
# 347 "data/maps/MauvilleCity/scripts.pory"

# 348 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ScottYouDidntHoldBack:
# 349 "data/maps/MauvilleCity/scripts.pory"
	.string "{COLOR RED}Scott{COLOR DARK_GRAY}: Hehe…\nI was watching that match!\pYou're friends with that boy Wally,\naren't you?\pBut you didn't hold anything back and\nbeat him impressively.\pYeah!\nThat's that's what a real Pokémon\lbattle is all about!\pI idolize Trainers like that!\nI'll be cheering for you!$"
# 350 "data/maps/MauvilleCity/scripts.pory"

# 351 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_NurseHurtMonBackToHealth:
# 352 "data/maps/MauvilleCity/scripts.pory"
	.string "You know, it's cool to have Pokémon\n"
# 353 "data/maps/MauvilleCity/scripts.pory"
	.string "battles and stuff…\p"
# 354 "data/maps/MauvilleCity/scripts.pory"
	.string "But if your Pokémon gets hurt,\n"
# 355 "data/maps/MauvilleCity/scripts.pory"
	.string "you have to nurse it back to health.$"
# 356 "data/maps/MauvilleCity/scripts.pory"

# 357 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_AllSortsOfPeopleComeThrough:
# 358 "data/maps/MauvilleCity/scripts.pory"
	.string "The roads of this town stretch north\n"
# 359 "data/maps/MauvilleCity/scripts.pory"
	.string "and south, and east and west.\p"
# 360 "data/maps/MauvilleCity/scripts.pory"
	.string "Because of that, we get all sorts of\n"
# 361 "data/maps/MauvilleCity/scripts.pory"
	.string "people coming through.$"
# 362 "data/maps/MauvilleCity/scripts.pory"

# 363 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RydelVeryGenerous:
# 364 "data/maps/MauvilleCity/scripts.pory"
	.string "Have you been to Rydel's Cycles yet?\p"
# 365 "data/maps/MauvilleCity/scripts.pory"
	.string "Rydel, the owner, is a very generous\n"
# 366 "data/maps/MauvilleCity/scripts.pory"
	.string "man.$"
# 367 "data/maps/MauvilleCity/scripts.pory"

# 368 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_PokemonCanJumpYouOnBike:
# 369 "data/maps/MauvilleCity/scripts.pory"
	.string "Even if you're riding a Bike,\n"
# 370 "data/maps/MauvilleCity/scripts.pory"
	.string "wild Pokémon could jump you.$"
# 371 "data/maps/MauvilleCity/scripts.pory"

# 372 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_CitySign:
# 373 "data/maps/MauvilleCity/scripts.pory"
	.string "Mauville City\n"
# 374 "data/maps/MauvilleCity/scripts.pory"
	.string "“The bright and shiny city of fun!”$"
# 375 "data/maps/MauvilleCity/scripts.pory"

# 376 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GymSign:
# 377 "data/maps/MauvilleCity/scripts.pory"
	.string "Mauville City Pokémon Gym\n"
# 378 "data/maps/MauvilleCity/scripts.pory"
	.string "Leader: Wattson\l"
# 379 "data/maps/MauvilleCity/scripts.pory"
	.string "“The cheerfully electrifying man!”$"
# 380 "data/maps/MauvilleCity/scripts.pory"

# 381 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BikeShopSign:
# 382 "data/maps/MauvilleCity/scripts.pory"
	.string "“Ride in gravel and shake up your\n"
# 383 "data/maps/MauvilleCity/scripts.pory"
	.string "soul!”\l"
# 384 "data/maps/MauvilleCity/scripts.pory"
	.string "Rydel's Cycles$"
# 385 "data/maps/MauvilleCity/scripts.pory"

# 386 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GameCornerSign:
# 387 "data/maps/MauvilleCity/scripts.pory"
	.string "“The play spot for all!”\n"
# 388 "data/maps/MauvilleCity/scripts.pory"
	.string "Mauville Game Corner$"
# 389 "data/maps/MauvilleCity/scripts.pory"

# 390 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ExplainTV:
# 391 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, do you check out TV at all?\p"
# 392 "data/maps/MauvilleCity/scripts.pory"
	.string "They've added a bunch of cool new\n"
# 393 "data/maps/MauvilleCity/scripts.pory"
	.string "shows recently.\p"
# 394 "data/maps/MauvilleCity/scripts.pory"
	.string "TV is so cool. I've seen my friends on\n"
# 395 "data/maps/MauvilleCity/scripts.pory"
	.string "TV just out of the blue.\p"
# 396 "data/maps/MauvilleCity/scripts.pory"
	.string "And, sometimes, they even put you on TV\n"
# 397 "data/maps/MauvilleCity/scripts.pory"
	.string "without telling you.\p"
# 398 "data/maps/MauvilleCity/scripts.pory"
	.string "I wish I would be on TV sometime.\p"
# 399 "data/maps/MauvilleCity/scripts.pory"
	.string "That's why I think you should check\n"
# 400 "data/maps/MauvilleCity/scripts.pory"
	.string "out TVs whenever you can.$"
# 401 "data/maps/MauvilleCity/scripts.pory"

# 402 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BeenCheckingOutTV:
# 403 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, have you been checking out TVs?$"

MauvilleCity_EventScript_MovePlayerDown::
# 412 "data/maps/MauvilleCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 413 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 414 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_MovePlayerDown_3
# 416 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_MovePlayerDown_4
MauvilleCity_EventScript_MovePlayerDown_1:
# 419 "data/maps/MauvilleCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 420 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 421 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceDown
# 422 "data/maps/MauvilleCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 423 "data/maps/MauvilleCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	return

MauvilleCity_EventScript_MovePlayerDown_3:
# 415 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	goto MauvilleCity_EventScript_MovePlayerDown_1

MauvilleCity_EventScript_MovePlayerDown_4:
# 417 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_GetPlayerInPositionEast
	goto MauvilleCity_EventScript_MovePlayerDown_1


# 427 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_GetPlayerInPositionEast:
# 428 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 428 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 429 "data/maps/MauvilleCity/scripts.pory"
	walk_right
	step_end

MauvilleCity_EventScript_WallyAndUncleIntro1::
# 433 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_TEMP_0, 1
# 434 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_WallyAndUncleIntro
	end


MauvilleCity_EventScript_WallyAndUncleIntro2::
# 439 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_TEMP_0, 2
# 440 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_WallyAndUncleIntro
	end


MauvilleCity_EventScript_WallyAndUncleIntro::
# 445 "data/maps/MauvilleCity/scripts.pory"
	lock
# 446 "data/maps/MauvilleCity/scripts.pory"
	delay 16
# 447 "data/maps/MauvilleCity/scripts.pory"
	special SpawnCameraObject
# 448 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MauvilleCity_Movement_MoveCameraToWallyUncle
# 449 "data/maps/MauvilleCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 450 "data/maps/MauvilleCity/scripts.pory"
	delay 16
# 451 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_WallyAndUncleIntro_Text_0
# 452 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_WallyAndUncleIntro_Text_1
# 453 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_WallyAndUncleIntro_Text_2
# 454 "data/maps/MauvilleCity/scripts.pory"
	delay 16
# 455 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_WallyAndUncleIntro_Text_3
# 456 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_WallyAndUncleIntro_Text_4
# 457 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 458 "data/maps/MauvilleCity/scripts.pory"
	delay 32
# 459 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyIntroLookAround
# 460 "data/maps/MauvilleCity/scripts.pory"
	waitmovement LOCALID_WALLY
# 461 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_WallyAndUncleIntro_Text_5
# 462 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 463 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyIntroExit
# 464 "data/maps/MauvilleCity/scripts.pory"
	delay 32
# 465 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 466 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_ExclamationMark
# 467 "data/maps/MauvilleCity/scripts.pory"
	waitse
# 468 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_WalkInPlaceLeft
# 469 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_WallyAndUncleIntro_Text_6
# 470 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 471 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallyUncleIntroExit
# 472 "data/maps/MauvilleCity/scripts.pory"
	delay 32
# 473 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MauvilleCity_Movement_MoveCameraBackToPlayer
# 474 "data/maps/MauvilleCity/scripts.pory"
	waitmovement LOCALID_WALLYS_UNCLE
# 475 "data/maps/MauvilleCity/scripts.pory"
	special RemoveCameraObject
# 476 "data/maps/MauvilleCity/scripts.pory"
	setobjectxy LOCALID_WALLY, 8, 6
# 477 "data/maps/MauvilleCity/scripts.pory"
	setobjectxy LOCALID_WALLYS_UNCLE, 9, 6
# 478 "data/maps/MauvilleCity/scripts.pory"
	turnobject LOCALID_WALLY, DIR_EAST
# 479 "data/maps/MauvilleCity/scripts.pory"
	turnobject LOCALID_WALLYS_UNCLE, DIR_WEST
# 480 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_CITY_STATE, 1
# 481 "data/maps/MauvilleCity/scripts.pory"
	release
	end


# 485 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_MoveCameraToWallyUncle:
# 486 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 486 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 486 "data/maps/MauvilleCity/scripts.pory"
	walk_up
	step_end

# 489 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_MoveCameraBackToPlayer:
# 490 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 490 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 490 "data/maps/MauvilleCity/scripts.pory"
	walk_down
	step_end

# 493 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyIntroLookAround:
# 494 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_right
# 495 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 496 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_up
# 497 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 498 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_left
# 499 "data/maps/MauvilleCity/scripts.pory"
	delay_16
	step_end

# 502 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyIntroExit:
# 503 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 503 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 504 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 504 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 504 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 504 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 504 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 504 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 504 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 504 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 504 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 507 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyUncleIntroExit:
# 508 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 508 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 509 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 509 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 509 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 509 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 509 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 509 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 509 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 509 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

MauvilleCity_EventScript_WallyFrontOfGym1::
# 513 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_TEMP_0, 1
# 514 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_WallyFrontOfGym
	return


MauvilleCity_EventScript_WallyFrontOfGym2::
# 518 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_TEMP_0, 2
# 519 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_WallyFrontOfGym
	return


MauvilleCity_EventScript_WallyFrontOfGym3::
# 523 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_TEMP_0, 3
# 524 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_WallyFrontOfGym
	return


MauvilleCity_EventScript_WallyFrontOfGym4::
# 528 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_TEMP_0, 4
# 529 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_WallyFrontOfGym
	return


MauvilleCity_EventScript_WallyFrontOfGym::
# 533 "data/maps/MauvilleCity/scripts.pory"
	lock
# 534 "data/maps/MauvilleCity/scripts.pory"
	delay 16
# 535 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 536 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 537 "data/maps/MauvilleCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 538 "data/maps/MauvilleCity/scripts.pory"
	waitse
# 539 "data/maps/MauvilleCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 540 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_TEMP_0
# 541 "data/maps/MauvilleCity/scripts.pory"
	case 1, MauvilleCity_EventScript_WallyFrontOfGym_3
# 542 "data/maps/MauvilleCity/scripts.pory"
	case 2, MauvilleCity_EventScript_WallyFrontOfGym_4
# 543 "data/maps/MauvilleCity/scripts.pory"
	case 3, MauvilleCity_EventScript_WallyFrontOfGym_5
# 544 "data/maps/MauvilleCity/scripts.pory"
	case 4, MauvilleCity_EventScript_WallyFrontOfGym_6
MauvilleCity_EventScript_WallyFrontOfGym_1:
# 546 "data/maps/MauvilleCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 547 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_CITY_STATE, 2
# 548 "data/maps/MauvilleCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 549 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_Wally
# 550 "data/maps/MauvilleCity/scripts.pory"
	release
	end

MauvilleCity_EventScript_WallyFrontOfGym_3:
# 541 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerSeeArgument1
	goto MauvilleCity_EventScript_WallyFrontOfGym_1

MauvilleCity_EventScript_WallyFrontOfGym_4:
# 542 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerSeeArgument2
	goto MauvilleCity_EventScript_WallyFrontOfGym_1

MauvilleCity_EventScript_WallyFrontOfGym_5:
# 543 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerSeeArgument3
	goto MauvilleCity_EventScript_WallyFrontOfGym_1

MauvilleCity_EventScript_WallyFrontOfGym_6:
# 544 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerSeeArgument4
	goto MauvilleCity_EventScript_WallyFrontOfGym_1


# 554 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerSeeArgument1:
# 555 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 556 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 557 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 557 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 558 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_up
	step_end

# 561 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerSeeArgument2:
# 562 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 562 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 562 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 563 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_up
	step_end

# 566 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerSeeArgument3:
# 567 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 567 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 567 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 568 "data/maps/MauvilleCity/scripts.pory"
	walk_up
	step_end

# 571 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerSeeArgument4:
# 572 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 572 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 572 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 573 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 573 "data/maps/MauvilleCity/scripts.pory"
	walk_up
	step_end

MauvilleCity_EventScript_WallyAndUncleExit::
# 577 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyStartToLeave
# 578 "data/maps/MauvilleCity/scripts.pory"
	waitmovement LOCALID_WALLY
# 579 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 580 "data/maps/MauvilleCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 581 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyGoodbye, MSGBOX_DEFAULT
# 582 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 583 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExit
# 584 "data/maps/MauvilleCity/scripts.pory"
	waitmovement LOCALID_WALLY
# 585 "data/maps/MauvilleCity/scripts.pory"
	delay 32
# 586 "data/maps/MauvilleCity/scripts.pory"
	fadedefaultbgm
# 587 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayer
# 588 "data/maps/MauvilleCity/scripts.pory"
	waitmovement LOCALID_WALLYS_UNCLE
# 589 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 590 "data/maps/MauvilleCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 591 "data/maps/MauvilleCity/scripts.pory"
	checkplayergender
# 592 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MauvilleCity_EventScript_WallyAndUncleExit_2
# 595 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_WallyAndUncleExit_Text_1
MauvilleCity_EventScript_WallyAndUncleExit_1:
# 597 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 598 "data/maps/MauvilleCity/scripts.pory"
	delay 16
# 599 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 600 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_ExclamationMark
# 601 "data/maps/MauvilleCity/scripts.pory"
	waitmovement LOCALID_WALLYS_UNCLE
# 602 "data/maps/MauvilleCity/scripts.pory"
	waitse
# 603 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_WallyAndUncleExit_Text_2
# 604 "data/maps/MauvilleCity/scripts.pory"
	delay 8
# 605 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH
# 606 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
# 607 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_ROCK_SMASH_TIP_GUY
# 608 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_WallyAndUncleExit_Text_3
# 609 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 610 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_WalkInPlaceLeft
# 611 "data/maps/MauvilleCity/scripts.pory"
	waitmovement LOCALID_WALLYS_UNCLE
# 612 "data/maps/MauvilleCity/scripts.pory"
	delay 24
# 613 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_WalkInPlaceDown
# 614 "data/maps/MauvilleCity/scripts.pory"
	waitmovement LOCALID_WALLYS_UNCLE
# 615 "data/maps/MauvilleCity/scripts.pory"
	delay 24
# 616 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime
# 617 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 618 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallyUncleExit
# 619 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchUncleLeave
# 620 "data/maps/MauvilleCity/scripts.pory"
	waitmovement LOCALID_WALLYS_UNCLE
# 621 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 622 "data/maps/MauvilleCity/scripts.pory"
	release
	end

MauvilleCity_EventScript_WallyAndUncleExit_2:
# 593 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_WallyAndUncleExit_Text_0
	goto MauvilleCity_EventScript_WallyAndUncleExit_1


# 626 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyStartToLeave:
# 627 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 628 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 629 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_right
	step_end

# 632 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExit:
# 633 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 633 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 633 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 633 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 633 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 633 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 633 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 633 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 636 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayer:
# 637 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 638 "data/maps/MauvilleCity/scripts.pory"
	walk_down
	step_end

# 641 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyUncleExit:
# 642 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 643 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 644 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 644 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 644 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 644 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 644 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 644 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 644 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 644 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 647 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchUncleLeave:
# 648 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 648 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 649 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_left
	step_end

MauvilleCity_EventScript_TeamAquaGrunts::
# 653 "data/maps/MauvilleCity/scripts.pory"
	lock
# 654 "data/maps/MauvilleCity/scripts.pory"
	delay 16
# 655 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_TeamAquaGrunts_Text_0
# 656 "data/maps/MauvilleCity/scripts.pory"
	applymovement 13, Common_Movement_WalkInPlaceUp
# 657 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 13
# 658 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_TeamAquaGrunts_Text_1
# 659 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 660 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 12
# 661 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_TeamAquaGrunts_Text_2
# 662 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 663 "data/maps/MauvilleCity/scripts.pory"
	delay 16
# 664 "data/maps/MauvilleCity/scripts.pory"
	applymovement 12, MauvilleCity_EventScript_TeamAquaGruntsExit
# 665 "data/maps/MauvilleCity/scripts.pory"
	applymovement 13, MauvilleCity_EventScript_TeamAquaGruntsExit
# 666 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 13
# 667 "data/maps/MauvilleCity/scripts.pory"
	removeobject 12
# 668 "data/maps/MauvilleCity/scripts.pory"
	removeobject 13
# 669 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_CITY_STATE, 4
# 670 "data/maps/MauvilleCity/scripts.pory"
	release
	end


# 674 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_TeamAquaGruntsExit:
# 675 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 675 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 675 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 675 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 675 "data/maps/MauvilleCity/scripts.pory"
	walk_up
	step_end

MauvilleCity_EventScript_RivalAfterCozmoEvent::
# 679 "data/maps/MauvilleCity/scripts.pory"
	lock
# 680 "data/maps/MauvilleCity/scripts.pory"
	delay 16
# 681 "data/maps/MauvilleCity/scripts.pory"
	checkplayergender
# 682 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MauvilleCity_EventScript_RivalAfterCozmoEvent_2
# 685 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_RivalAfterCozmoEvent_Text_1
MauvilleCity_EventScript_RivalAfterCozmoEvent_1:
# 687 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 688 "data/maps/MauvilleCity/scripts.pory"
	applymovement 14, Common_Movement_WalkInPlaceRight
# 689 "data/maps/MauvilleCity/scripts.pory"
	delay 8
# 690 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 691 "data/maps/MauvilleCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 692 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_RivalAfterCozmoEvent_Text_2
# 693 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 694 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_CITY_STATE, 6
# 695 "data/maps/MauvilleCity/scripts.pory"
	release
	end

MauvilleCity_EventScript_RivalAfterCozmoEvent_2:
# 683 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_RivalAfterCozmoEvent_Text_0
	goto MauvilleCity_EventScript_RivalAfterCozmoEvent_1


MauvilleCity_EventScript_Rival::
# 700 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_Rival_Text_0, MSGBOX_NPC
	end


MauvilleCity_EventScript_WallyAfterPetalburgEvent::
# 705 "data/maps/MauvilleCity/scripts.pory"
	lock
# 706 "data/maps/MauvilleCity/scripts.pory"
	delay 16
# 707 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceUp
# 708 "data/maps/MauvilleCity/scripts.pory"
	waitmovement LOCALID_WALLY
# 709 "data/maps/MauvilleCity/scripts.pory"
	delay 8
# 710 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_WallyAfterPetalburgEvent_Text_0
# 711 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 712 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceRight
# 713 "data/maps/MauvilleCity/scripts.pory"
	waitmovement LOCALID_WALLY
# 714 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_WallyAfterPetalburgEvent_Text_1
# 715 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 716 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceUp
# 717 "data/maps/MauvilleCity/scripts.pory"
	waitmovement LOCALID_WALLY
# 718 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_WallyAfterPetalburgEvent_Text_2
# 719 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 720 "data/maps/MauvilleCity/scripts.pory"
	delay 8
# 721 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitToRoute118
# 722 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitToRoute118
# 723 "data/maps/MauvilleCity/scripts.pory"
	waitmovement LOCALID_WALLY
# 724 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLY
# 725 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_CITY_STATE, 8
# 726 "data/maps/MauvilleCity/scripts.pory"
	release
	end


# 730 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitToRoute118:
# 731 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 731 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 732 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 733 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 733 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 733 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 733 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 733 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 733 "data/maps/MauvilleCity/scripts.pory"
	walk_right
	step_end

# 736 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitToRoute118:
# 737 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 737 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 738 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_right
	step_end

MauvilleCity_EventScript_Wattson::
# 742 "data/maps/MauvilleCity/scripts.pory"
	lock
# 743 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 744 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_THUNDERBOLT, MauvilleCity_EventScript_Wattson_2
# 750 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_NEW_MAUVILLE_STATE, 2
	goto_if_eq MauvilleCity_EventScript_Wattson_5
# 763 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_Wattson_8
# 769 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_Wattson_Text_4
# 770 "data/maps/MauvilleCity/scripts.pory"
	delay 8
# 771 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_BASEMENT_KEY
# 772 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 773 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_Wattson_Text_5
# 774 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 775 "data/maps/MauvilleCity/scripts.pory"
	release
	end

MauvilleCity_EventScript_Wattson_2:
# 745 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_Wattson_Text_0
# 746 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 747 "data/maps/MauvilleCity/scripts.pory"
	release
	end

MauvilleCity_EventScript_Wattson_5:
# 751 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_Wattson_Text_1
# 752 "data/maps/MauvilleCity/scripts.pory"
	delay 8
# 753 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM_THUNDERBOLT
# 754 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_EventScript_Wattson_11
MauvilleCity_EventScript_Wattson_10:
# 757 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_RECEIVED_TM_THUNDERBOLT
# 758 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_Wattson_Text_2
# 759 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 760 "data/maps/MauvilleCity/scripts.pory"
	release
	end

MauvilleCity_EventScript_Wattson_8:
# 764 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_Wattson_Text_3
# 765 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 766 "data/maps/MauvilleCity/scripts.pory"
	release
	end

MauvilleCity_EventScript_Wattson_11:
# 755 "data/maps/MauvilleCity/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MauvilleCity_EventScript_Wattson_10


MauvilleCity_EventScript_RolloutMan::
# 780 "data/maps/MauvilleCity/scripts.pory"
	lock
# 781 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 782 "data/maps/MauvilleCity/scripts.pory"
	checkitem ITEM_TM_GYRO_BALL, 1
# 783 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne MauvilleCity_EventScript_RolloutMan_2
MauvilleCity_EventScript_RolloutMan_1:
# 787 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_RolloutMan_Text_1
# 788 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 789 "data/maps/MauvilleCity/scripts.pory"
	release
	end

MauvilleCity_EventScript_RolloutMan_2:
# 784 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_RolloutMan_Text_0
# 785 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM_GYRO_BALL, 1
	goto MauvilleCity_EventScript_RolloutMan_1


MauvilleCity_EventScript_WallyAndUncleIntro_Text_0:
# 451 "data/maps/MauvilleCity/scripts.pory"
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: Wow!\nSo this is Mauville City!$"

MauvilleCity_EventScript_WallyAndUncleIntro_Text_1:
# 452 "data/maps/MauvilleCity/scripts.pory"
	.string "{COLOR RED}Uncle{COLOR DARK_GRAY}: Hahaha!\pYou sure seem to be enjoying it,\nWally!\pSo what would you like to do?\nDo you want to grab a bite to eat at\lthe Mauville Food Court?\pOr maybe we should get you a Bike of\nyou own at Rydel's Cycles.\lWould you like that?\pI bet the exercise would be good for\nyour health.$"

MauvilleCity_EventScript_WallyAndUncleIntro_Text_2:
# 453 "data/maps/MauvilleCity/scripts.pory"
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: No, thank you!\pI want to challenge the Gym right away!$"

MauvilleCity_EventScript_WallyAndUncleIntro_Text_3:
# 455 "data/maps/MauvilleCity/scripts.pory"
	.string "{COLOR RED}Uncle{COLOR DARK_GRAY}: What?$"

MauvilleCity_EventScript_WallyAndUncleIntro_Text_4:
# 456 "data/maps/MauvilleCity/scripts.pory"
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: Let me see…\nI'm pretty sure the Gym is…$"

MauvilleCity_EventScript_WallyAndUncleIntro_Text_5:
# 461 "data/maps/MauvilleCity/scripts.pory"
	.string "Yup!\nStraight ahead this way!$"

MauvilleCity_EventScript_WallyAndUncleIntro_Text_6:
# 469 "data/maps/MauvilleCity/scripts.pory"
	.string "{COLOR RED}Uncle{COLOR DARK_GRAY}: What?\nHey! Wait!\pWally!?$"

MauvilleCity_EventScript_WallyAndUncleExit_Text_0:
# 593 "data/maps/MauvilleCity/scripts.pory"
	.string "{COLOR RED}Uncle{COLOR DARK_GRAY}: It just dawned on me that\nyou must the young man who kept an\leye out for Wally when he caught his\lPokémon.\pSo it's you we have to thank for\nWally becoming so positive about the\lfuture.\pThank you.$"

MauvilleCity_EventScript_WallyAndUncleExit_Text_1:
# 595 "data/maps/MauvilleCity/scripts.pory"
	.string "{COLOR RED}Uncle{COLOR DARK_GRAY}: It just dawned on me that\nyou must the young lady who kept an\leye out for Wally when he caught his\lPokémon.\pSo it's you we have to thank for\nWally becoming so positive about the\lfuture.\pThank you.$"

MauvilleCity_EventScript_WallyAndUncleExit_Text_2:
# 603 "data/maps/MauvilleCity/scripts.pory"
	.string "…Ah, here!\nTake this.\pI want you to take this as a bit of a\nthank-you.$"

MauvilleCity_EventScript_WallyAndUncleExit_Text_3:
# 608 "data/maps/MauvilleCity/scripts.pory"
	.string "Even if there are obstacles in your\npath, I think you'll be able to break\lthrough them.\pEspecially if you use Rock Smash there!$"

MauvilleCity_EventScript_TeamAquaGrunts_Text_0:
# 655 "data/maps/MauvilleCity/scripts.pory"
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: Where are we supposed to be,\num…\pWhere are we going, again?$"

MauvilleCity_EventScript_TeamAquaGrunts_Text_1:
# 658 "data/maps/MauvilleCity/scripts.pory"
	.string "It's Mt. Chimney!\pStay spaced out, and you'll get scolded\nby Maxie!$"

MauvilleCity_EventScript_TeamAquaGrunts_Text_2:
# 661 "data/maps/MauvilleCity/scripts.pory"
	.string "Mt. Chimney…\pIt'll be a long walk going along Route\n112 to get there.\lI wish I'd brought some snacks…$"

MauvilleCity_EventScript_RivalAfterCozmoEvent_Text_0:
# 683 "data/maps/MauvilleCity/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: We've arrived in Mauville City!$"

MauvilleCity_EventScript_RivalAfterCozmoEvent_Text_1:
# 685 "data/maps/MauvilleCity/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: All right, made it to Mauville\nCity.$"

MauvilleCity_EventScript_RivalAfterCozmoEvent_Text_2:
# 692 "data/maps/MauvilleCity/scripts.pory"
	.string "Up ahead here is {COLOR BLUE}Mt. Chimney{COLOR DARK_GRAY}, huh?\pThat's the place those nut jobs at\nMeteor Falls were talking about going\lto.\pBe careful, {PLAYER}.\nIt might get dangerous around here.$"

MauvilleCity_EventScript_Rival_Text_0:
# 700 "data/maps/MauvilleCity/scripts.pory"
	.string "{COLOR RED}{RIVAL}{COLOR DARK_GRAY}: Up ahead here is {COLOR BLUE}Mt. Chimney{COLOR DARK_GRAY},\nhuh?\pThat's the place those nut jobs at\nMeteor Falls were talking about going\lto.\pBe careful, {PLAYER}.\nIt might get dangerous around here.$"

MauvilleCity_EventScript_WallyAfterPetalburgEvent_Text_0:
# 710 "data/maps/MauvilleCity/scripts.pory"
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: It's actually pretty far, isn't\nit? All the way here to Mauville…$"

MauvilleCity_EventScript_WallyAfterPetalburgEvent_Text_1:
# 714 "data/maps/MauvilleCity/scripts.pory"
	.string "So that must be Route 118 ahead…\pI wonder what kind of Pokémon I'll meet\nthere. I can't wait to find out!$"

MauvilleCity_EventScript_WallyAfterPetalburgEvent_Text_2:
# 718 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll see you later, {PLAYER}!\nI'm going straight to Route 118!\pLet's definitely have a battle next\ntime we meet!\lIt's a promise, OK?\pAnd you can't break a promise!$"

MauvilleCity_EventScript_Wattson_Text_0:
# 745 "data/maps/MauvilleCity/scripts.pory"
	.string "{COLOR RED}Wattson{COLOR DARK_GRAY}: It pleases me to no end\nto see the young step up and take\lcharge!$"

MauvilleCity_EventScript_Wattson_Text_1:
# 751 "data/maps/MauvilleCity/scripts.pory"
	.string "{COLOR RED}Wattson{COLOR DARK_GRAY}: I knew it, {PLAYER}!\pI knew I'd made the right choice\nasking you!\pLet me give you this as a way to say\nsorry for causing you such a hassle.$"

MauvilleCity_EventScript_Wattson_Text_2:
# 758 "data/maps/MauvilleCity/scripts.pory"
	.string "By the way, there wasn't anything going\nin New Mauville, right?\pThat was supposed to be a new town,\nthough…\pWe should've been able to build a\nhuge underground city stretching\ldown into the depths.\pThings happened, and its development\nhad to be suspended.\lSince then it's just left to rot.\pAll the equipment inside might have\nseen better days.$"

MauvilleCity_EventScript_Wattson_Text_3:
# 764 "data/maps/MauvilleCity/scripts.pory"
	.string "{COLOR RED}Wattson{COLOR DARK_GRAY}: When you get inside, switch\noff the Generator.\pIt has been running a bit haywire.\nIt's getting unsafe.\pI sure am sorry to bug you with all this,\nbut I'm really counting on you!\pYou can {COLOR BLUE}Surf{COLOR DARK_GRAY} from {COLOR BLUE}Route 110{COLOR DARK_GRAY} to get to\nNew Mauville.$"

MauvilleCity_EventScript_Wattson_Text_4:
# 769 "data/maps/MauvilleCity/scripts.pory"
	.string "{COLOR RED}Wattson{COLOR DARK_GRAY}: Oh, {PLAYER}, eh?\pYou got here just in time to give\nme a hand at something.\pMauville City has an underground\nsector called New Mauville.\pThere's just one thing, though.\nIt is usually a prohibited area.\pHere, this is the key to get into\nNew Mauville.$"

MauvilleCity_EventScript_Wattson_Text_5:
# 773 "data/maps/MauvilleCity/scripts.pory"
	.string "When you get inside, switch off the\nGenerator.\pIt has been running a bit haywire.\nIt's getting unsafe.\pI sure am sorry to bug you with all this,\nbut I'm really counting on you!\pYou can {COLOR BLUE}Surf{COLOR DARK_GRAY} from {COLOR BLUE}Route 110{COLOR DARK_GRAY} to get to\nNew Mauville.$"

MauvilleCity_EventScript_RolloutMan_Text_0:
# 784 "data/maps/MauvilleCity/scripts.pory"
	.string "Did you know that you can go\nfrom here a long way in that direction\lwithout changing direction?\pI might even be able to roll that way.\pDo you think your Pokémon will want to\nroll, too?\pHere, let them try out this TM if you'd\nlike.$"

MauvilleCity_EventScript_RolloutMan_Text_1:
# 787 "data/maps/MauvilleCity/scripts.pory"
	.string "The TM I gave you contains the move\nGyro Ball.\pIt's an attack that does more damage\nthe slower the user is compared to\lthe foe.$"
