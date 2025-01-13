# 1 "data/maps/PetalburgCity/scripts.pory"

# 2 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_WALLY, 2
# 3 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_BOY, 3
# 4 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_WALLYS_DAD, 5
# 5 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_GYM_BOY, 8
# 6 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_SCOTT, 9
# 7 "data/maps/PetalburgCity/scripts.pory"

# 8 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_MapScripts::
# 9 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_OnWarp
# 10 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
# 11 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
# 12 "data/maps/PetalburgCity/scripts.pory"
	.byte 0
# 13 "data/maps/PetalburgCity/scripts.pory"

# 14 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnWarp:
# 15 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyFaceGymDoor
# 16 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 17 "data/maps/PetalburgCity/scripts.pory"

# 18 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyFaceGymDoor::
# 19 "data/maps/PetalburgCity/scripts.pory"
	turnobject LOCALID_WALLY, DIR_NORTH
# 20 "data/maps/PetalburgCity/scripts.pory"
	end
# 21 "data/maps/PetalburgCity/scripts.pory"

# 22 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition:
# 23 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 24 "data/maps/PetalburgCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 25 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
# 26 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
# 27 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
# 28 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_EventScript_SetGymDoorsUnlocked
# 29 "data/maps/PetalburgCity/scripts.pory"
	call_if_ge VAR_LAVARIDGE_TOWN_STATE, 2, PetalburgCity_EventScript_HideLavaridgeRival
# 30 "data/maps/PetalburgCity/scripts.pory"
	end
# 31 "data/maps/PetalburgCity/scripts.pory"

# 32 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 33 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
# 34 "data/maps/PetalburgCity/scripts.pory"
	return
# 35 "data/maps/PetalburgCity/scripts.pory"

# 36 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 37 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 38 "data/maps/PetalburgCity/scripts.pory"
	return
# 39 "data/maps/PetalburgCity/scripts.pory"

# 40 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 41 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 42 "data/maps/PetalburgCity/scripts.pory"
	return
# 43 "data/maps/PetalburgCity/scripts.pory"

# 44 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_HideLavaridgeRival::
# 45 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL
# 46 "data/maps/PetalburgCity/scripts.pory"
	return
# 47 "data/maps/PetalburgCity/scripts.pory"

# 48 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnFrame:
# 49 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 50 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WallysDadGivesPlayerSurf
# 51 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE_2, 2, PetalburgCity_EventScript_RivalTeleportDone
# 52 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 53 "data/maps/PetalburgCity/scripts.pory"

# 54 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 55 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 56 "data/maps/PetalburgCity/scripts.pory"
	special SavePlayerParty
# 57 "data/maps/PetalburgCity/scripts.pory"
	special LoadWallyZigzagoon
# 58 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 59 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 60 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 61 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 62 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 63 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceRight, MAP_PETALBURG_CITY
# 64 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY, MAP_PETALBURG_CITY
# 65 "data/maps/PetalburgCity/scripts.pory"
	delay 8
# 66 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 67 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark, MAP_PETALBURG_CITY
# 68 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY, MAP_PETALBURG_CITY
# 69 "data/maps/PetalburgCity/scripts.pory"
	delay 8
# 70 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_Whoa, MSGBOX_DEFAULT
# 71 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 72 "data/maps/PetalburgCity/scripts.pory"
	delay 8
# 73 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 74 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 75 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 76 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 77 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceLeft, MAP_PETALBURG_CITY
# 78 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY, MAP_PETALBURG_CITY
# 79 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 80 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 81 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 82 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 83 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 84 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 85 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 86 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 87 "data/maps/PetalburgCity/scripts.pory"
	delay 8
# 88 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 89 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 90 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 91 "data/maps/PetalburgCity/scripts.pory"
	end
# 92 "data/maps/PetalburgCity/scripts.pory"

# 93 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 94 "data/maps/PetalburgCity/scripts.pory"
	lock
# 95 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 96 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 97 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 98 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_BOY, Common_Movement_FaceOriginalDirection
# 99 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 100 "data/maps/PetalburgCity/scripts.pory"
	release
# 101 "data/maps/PetalburgCity/scripts.pory"
	end
# 102 "data/maps/PetalburgCity/scripts.pory"

# 103 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 104 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 105 "data/maps/PetalburgCity/scripts.pory"
	end
# 106 "data/maps/PetalburgCity/scripts.pory"

# 107 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 108 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 109 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 110 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 111 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 112 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 113 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 114 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 115 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 116 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 117 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 118 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 119 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 120 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 121 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 122 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 123 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 124 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 125 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 126 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 127 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 128 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 129 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 130 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 131 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 132 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 133 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 134 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 135 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 136 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 137 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_right
# 138 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 139 "data/maps/PetalburgCity/scripts.pory"

# 140 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 141 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 142 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 143 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 144 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 145 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 146 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 147 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 148 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 149 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_left
# 150 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 151 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 152 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 153 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 154 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 155 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 156 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 157 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 158 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 159 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 160 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 161 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 162 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 163 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 164 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 165 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 166 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 167 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 168 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 169 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 170 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_up
# 171 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 172 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_right
# 173 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 174 "data/maps/PetalburgCity/scripts.pory"

# 175 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 176 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 177 "data/maps/PetalburgCity/scripts.pory"
	end
# 178 "data/maps/PetalburgCity/scripts.pory"

# 179 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 180 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 181 "data/maps/PetalburgCity/scripts.pory"
	end
# 182 "data/maps/PetalburgCity/scripts.pory"

# 183 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 184 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 185 "data/maps/PetalburgCity/scripts.pory"
	end
# 186 "data/maps/PetalburgCity/scripts.pory"

# 187 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 188 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 189 "data/maps/PetalburgCity/scripts.pory"
	end
# 190 "data/maps/PetalburgCity/scripts.pory"

# 191 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 192 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 193 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 194 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 195 "data/maps/PetalburgCity/scripts.pory"
	end
# 196 "data/maps/PetalburgCity/scripts.pory"

# 197 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 198 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 199 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 200 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 201 "data/maps/PetalburgCity/scripts.pory"
	end
# 202 "data/maps/PetalburgCity/scripts.pory"

# 203 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 204 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 205 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 206 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 207 "data/maps/PetalburgCity/scripts.pory"
	end
# 208 "data/maps/PetalburgCity/scripts.pory"

# 209 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 210 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 211 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 212 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 213 "data/maps/PetalburgCity/scripts.pory"
	end
# 214 "data/maps/PetalburgCity/scripts.pory"

# 215 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 216 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceRight
# 217 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 218 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 219 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 220 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 221 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 222 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 223 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 224 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 225 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 226 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 227 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 228 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 229 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 230 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 231 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 232 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 233 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 234 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 235 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceRight
# 236 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 237 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 238 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 239 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 240 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 241 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerSeeBoyAway
# 242 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_GYM_BOY
# 243 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 244 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 245 "data/maps/PetalburgCity/scripts.pory"
	end
# 246 "data/maps/PetalburgCity/scripts.pory"

# 247 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 248 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 249 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 250 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 251 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 252 "data/maps/PetalburgCity/scripts.pory"
	return
# 253 "data/maps/PetalburgCity/scripts.pory"

# 254 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 255 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 256 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 257 "data/maps/PetalburgCity/scripts.pory"
	return
# 258 "data/maps/PetalburgCity/scripts.pory"

# 259 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 260 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 261 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 262 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 263 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 264 "data/maps/PetalburgCity/scripts.pory"
	return
# 265 "data/maps/PetalburgCity/scripts.pory"

# 266 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 267 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 268 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 269 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 270 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 271 "data/maps/PetalburgCity/scripts.pory"
	return
# 272 "data/maps/PetalburgCity/scripts.pory"

# 273 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 274 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 275 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 276 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 277 "data/maps/PetalburgCity/scripts.pory"
	return
# 278 "data/maps/PetalburgCity/scripts.pory"

# 279 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 280 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 281 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 282 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 283 "data/maps/PetalburgCity/scripts.pory"
	return
# 284 "data/maps/PetalburgCity/scripts.pory"

# 285 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 286 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 287 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 288 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 289 "data/maps/PetalburgCity/scripts.pory"
	return
# 290 "data/maps/PetalburgCity/scripts.pory"

# 291 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 292 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 293 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 294 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 295 "data/maps/PetalburgCity/scripts.pory"
	return
# 296 "data/maps/PetalburgCity/scripts.pory"

# 297 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 298 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 299 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 300 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 301 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 302 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 303 "data/maps/PetalburgCity/scripts.pory"

# 304 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 305 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 306 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 307 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 308 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_up
# 309 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 310 "data/maps/PetalburgCity/scripts.pory"

# 311 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 312 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 313 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 314 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 315 "data/maps/PetalburgCity/scripts.pory"

# 316 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 317 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 318 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 319 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 320 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
# 321 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 322 "data/maps/PetalburgCity/scripts.pory"

# 323 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 324 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 325 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 326 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 327 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 328 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
# 329 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 330 "data/maps/PetalburgCity/scripts.pory"

# 331 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 332 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 333 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 334 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 335 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 336 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 337 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 338 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 339 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 340 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 341 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_up
# 342 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 343 "data/maps/PetalburgCity/scripts.pory"

# 344 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 345 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 346 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 347 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 348 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 349 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 350 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 351 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 352 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 353 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 354 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 355 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 356 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 357 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_up
# 358 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 359 "data/maps/PetalburgCity/scripts.pory"

# 360 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 361 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 362 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 363 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 364 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 365 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 366 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 367 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 368 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 369 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 370 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_up
# 371 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 372 "data/maps/PetalburgCity/scripts.pory"

# 373 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 374 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 375 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 376 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 377 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 378 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 379 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 380 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 381 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 382 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 383 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 384 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_up
# 385 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 386 "data/maps/PetalburgCity/scripts.pory"

# 387 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 388 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 389 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 390 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 391 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 392 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 393 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 394 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 395 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 396 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 397 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 398 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 399 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 400 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 401 "data/maps/PetalburgCity/scripts.pory"

# 402 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerSeeBoyAway:
# 403 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 404 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
# 405 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 406 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_left
# 407 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 408 "data/maps/PetalburgCity/scripts.pory"

# 409 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 410 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 411 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 412 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 413 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 414 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 415 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 416 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 417 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 418 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 419 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 420 "data/maps/PetalburgCity/scripts.pory"

# 421 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 422 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 423 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 424 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 425 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 426 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 427 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 428 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 429 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 431 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 432 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 433 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 434 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 435 "data/maps/PetalburgCity/scripts.pory"

# 436 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 437 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 438 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 439 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 440 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 441 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 442 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 443 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 444 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 445 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 446 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 447 "data/maps/PetalburgCity/scripts.pory"

# 448 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 449 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 450 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 451 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 452 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 453 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 454 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 455 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 456 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 458 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 459 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 460 "data/maps/PetalburgCity/scripts.pory"

# 461 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 462 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 463 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 464 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 465 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 10
# 466 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 467 "data/maps/PetalburgCity/scripts.pory"
	end
# 468 "data/maps/PetalburgCity/scripts.pory"

# 469 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 470 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 471 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 472 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 473 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 11
# 474 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 475 "data/maps/PetalburgCity/scripts.pory"
	end
# 476 "data/maps/PetalburgCity/scripts.pory"

# 477 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 478 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 479 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 480 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 481 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 12
# 482 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 483 "data/maps/PetalburgCity/scripts.pory"
	end
# 484 "data/maps/PetalburgCity/scripts.pory"

# 485 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 486 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 487 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 488 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 489 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 13
# 490 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 491 "data/maps/PetalburgCity/scripts.pory"
	end
# 492 "data/maps/PetalburgCity/scripts.pory"

# 493 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 494 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 495 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 496 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 497 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
# 498 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 499 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
# 500 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 501 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 502 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 503 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 504 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 505 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 506 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 507 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 508 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 509 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 510 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 511 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 512 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 513 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 514 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 515 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 516 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 517 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 518 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 519 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 520 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 521 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 522 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 523 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 524 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 525 "data/maps/PetalburgCity/scripts.pory"
	end
# 526 "data/maps/PetalburgCity/scripts.pory"

# 527 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 528 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 529 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
# 530 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 531 "data/maps/PetalburgCity/scripts.pory"
	return
# 532 "data/maps/PetalburgCity/scripts.pory"

# 533 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 534 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 535 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
# 536 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 537 "data/maps/PetalburgCity/scripts.pory"
	return
# 538 "data/maps/PetalburgCity/scripts.pory"

# 539 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 540 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 541 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
# 542 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 543 "data/maps/PetalburgCity/scripts.pory"
	return
# 544 "data/maps/PetalburgCity/scripts.pory"

# 545 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 546 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 547 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
# 548 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 549 "data/maps/PetalburgCity/scripts.pory"
	return
# 550 "data/maps/PetalburgCity/scripts.pory"

# 551 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 552 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 553 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 554 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 555 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 556 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 557 "data/maps/PetalburgCity/scripts.pory"

# 558 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 559 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 560 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 561 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 562 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 563 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 564 "data/maps/PetalburgCity/scripts.pory"

# 565 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 566 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 567 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 568 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 569 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 570 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 571 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 572 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 573 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 574 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 575 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 576 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 577 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 578 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 579 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 580 "data/maps/PetalburgCity/scripts.pory"

# 581 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 582 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 583 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
# 584 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 585 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 586 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 587 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_left
# 588 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 589 "data/maps/PetalburgCity/scripts.pory"

# 590 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 591 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 592 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 593 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 594 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 595 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 596 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 597 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 598 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 599 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 600 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 601 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 602 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 603 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 604 "data/maps/PetalburgCity/scripts.pory"

# 605 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 606 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 607 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
# 608 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 609 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 610 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_left
# 611 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 612 "data/maps/PetalburgCity/scripts.pory"

# 613 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 614 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 615 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 616 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 617 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 618 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 619 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 620 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 621 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 622 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 623 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 624 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 625 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 626 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 627 "data/maps/PetalburgCity/scripts.pory"

# 628 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 629 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 630 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
# 631 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 632 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 633 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_left
# 634 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 635 "data/maps/PetalburgCity/scripts.pory"

# 636 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 637 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 638 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 639 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 640 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 641 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 642 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 643 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 644 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 645 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 646 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 647 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 648 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 649 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 650 "data/maps/PetalburgCity/scripts.pory"

# 651 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 652 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 653 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_up
# 654 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 655 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 656 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_left
# 657 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 658 "data/maps/PetalburgCity/scripts.pory"

# 659 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 660 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 661 "data/maps/PetalburgCity/scripts.pory"
	end
# 662 "data/maps/PetalburgCity/scripts.pory"

# 663 "data/maps/PetalburgCity/scripts.pory"
@@@@@@@@@@@@@@@@@@@@@@
# 664 "data/maps/PetalburgCity/scripts.pory"
@ Old Rod Gift
# 665 "data/maps/PetalburgCity/scripts.pory"
@@@@@@@@@@@@@@@@@@@@@@
# 666 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_OldRodFisherman::
# 667 "data/maps/PetalburgCity/scripts.pory"
	lock
# 668 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 669 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_OLD_ROD, PetalburgCity_EventScript_HowsFishing
# 670 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GettingItchToFish, MSGBOX_YESNO
# 671 "data/maps/PetalburgCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_EventScript_GiveOldRod
# 672 "data/maps/PetalburgCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_EventScript_NotGettingItchToFish
# 673 "data/maps/PetalburgCity/scripts.pory"
	end
# 674 "data/maps/PetalburgCity/scripts.pory"

# 675 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GiveOldRod::
# 676 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GiveYouOneOfMyRods, MSGBOX_DEFAULT
# 677 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_OLD_ROD
# 678 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 679 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThrowInFishingAdvice, MSGBOX_DEFAULT
# 680 "data/maps/PetalburgCity/scripts.pory"
	release
# 681 "data/maps/PetalburgCity/scripts.pory"
	end
# 682 "data/maps/PetalburgCity/scripts.pory"

# 683 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_NotGettingItchToFish::
# 684 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThatsTooBadThen, MSGBOX_DEFAULT
# 685 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 686 "data/maps/PetalburgCity/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 687 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 12
# 688 "data/maps/PetalburgCity/scripts.pory"
	release
# 689 "data/maps/PetalburgCity/scripts.pory"
	end
# 690 "data/maps/PetalburgCity/scripts.pory"

# 691 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_HowsFishing::
# 692 "data/maps/PetalburgCity/scripts.pory"
	message PetalburgCity_Text_HowsYourFishing
# 693 "data/maps/PetalburgCity/scripts.pory"
	waitmessage
# 694 "data/maps/PetalburgCity/scripts.pory"
	multichoice 20, 8, MULTI_HOWS_FISHING, TRUE
# 695 "data/maps/PetalburgCity/scripts.pory"
	goto_if_eq VAR_RESULT, 0, PetalburgCity_EventScript_FishingExcellent
# 696 "data/maps/PetalburgCity/scripts.pory"
	goto_if_eq VAR_RESULT, 1, PetalburgCity_EventScript_FishingNotSoGood
# 697 "data/maps/PetalburgCity/scripts.pory"
	end
# 698 "data/maps/PetalburgCity/scripts.pory"

# 699 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_FishingExcellent::
# 700 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GreatHaulInSomeBigOnes, MSGBOX_DEFAULT
# 701 "data/maps/PetalburgCity/scripts.pory"
	release
# 702 "data/maps/PetalburgCity/scripts.pory"
	end
# 703 "data/maps/PetalburgCity/scripts.pory"

# 704 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_FishingNotSoGood::
# 705 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FishingAdvice, MSGBOX_DEFAULT
# 706 "data/maps/PetalburgCity/scripts.pory"
	release
# 707 "data/maps/PetalburgCity/scripts.pory"
	end
# 708 "data/maps/PetalburgCity/scripts.pory"

# 709 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GettingItchToFish:
# 710 "data/maps/PetalburgCity/scripts.pory"
	.string "This is a renowned fishing spot.\n"
# 711 "data/maps/PetalburgCity/scripts.pory"
	.string "Are you getting the itch to fish?$"
# 712 "data/maps/PetalburgCity/scripts.pory"

# 713 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GiveYouOneOfMyRods:
# 714 "data/maps/PetalburgCity/scripts.pory"
	.string "I hear you, and I like what\n"
# 715 "data/maps/PetalburgCity/scripts.pory"
	.string "you're saying!\p"
# 716 "data/maps/PetalburgCity/scripts.pory"
	.string "I'll give you one of my fishing rods.$"
# 717 "data/maps/PetalburgCity/scripts.pory"

# 718 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThrowInFishingAdvice:
# 719 "data/maps/PetalburgCity/scripts.pory"
	.string "And, as an added bonus, I'll even throw\n"
# 720 "data/maps/PetalburgCity/scripts.pory"
	.string "in a little fishing advice!\p"
# 721 "data/maps/PetalburgCity/scripts.pory"
	.string "First, you want to face the water,\n"
# 722 "data/maps/PetalburgCity/scripts.pory"
	.string "then use the rod.\p"
# 723 "data/maps/PetalburgCity/scripts.pory"
	.string "Focus your mind…\n"
# 724 "data/maps/PetalburgCity/scripts.pory"
	.string "If you get a bite, pull on the rod.\p"
# 725 "data/maps/PetalburgCity/scripts.pory"
	.string "Sometimes you can snag something\n"
# 726 "data/maps/PetalburgCity/scripts.pory"
	.string "immediately, but with bigger catches,\l"
# 727 "data/maps/PetalburgCity/scripts.pory"
	.string "you need to time the pulls on your rod\l"
# 728 "data/maps/PetalburgCity/scripts.pory"
	.string "to haul them in.$"
# 729 "data/maps/PetalburgCity/scripts.pory"

# 730 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThatsTooBadThen:
# 731 "data/maps/PetalburgCity/scripts.pory"
	.string "Oh, is that so?\n"
# 732 "data/maps/PetalburgCity/scripts.pory"
	.string "That's too bad, then.$"
# 733 "data/maps/PetalburgCity/scripts.pory"

# 734 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_HowsYourFishing:
# 735 "data/maps/PetalburgCity/scripts.pory"
	.string "Yo!\n"
# 736 "data/maps/PetalburgCity/scripts.pory"
	.string "How's your fishing?$"
# 737 "data/maps/PetalburgCity/scripts.pory"

# 738 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GreatHaulInSomeBigOnes:
# 739 "data/maps/PetalburgCity/scripts.pory"
	.string "Is that right! That's great!\n"
# 740 "data/maps/PetalburgCity/scripts.pory"
	.string "Haul in some big ones!$"
# 741 "data/maps/PetalburgCity/scripts.pory"

# 742 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FishingAdvice:
# 743 "data/maps/PetalburgCity/scripts.pory"
	.string "Oh, hey, don't get down on yourself!\n"
# 744 "data/maps/PetalburgCity/scripts.pory"
	.string "I'll give you a little fishing advice.\p"
# 745 "data/maps/PetalburgCity/scripts.pory"
	.string "First, you want to face the water,\n"
# 746 "data/maps/PetalburgCity/scripts.pory"
	.string "then use the Rod.\p"
# 747 "data/maps/PetalburgCity/scripts.pory"
	.string "Focus your mind…\n"
# 748 "data/maps/PetalburgCity/scripts.pory"
	.string "If you get a bite, pull the Rod.\p"
# 749 "data/maps/PetalburgCity/scripts.pory"
	.string "Sometimes you can snag something\n"
# 750 "data/maps/PetalburgCity/scripts.pory"
	.string "immediately, but with bigger catches,\l"
# 751 "data/maps/PetalburgCity/scripts.pory"
	.string "you need to time the pulls on your Rod\l"
# 752 "data/maps/PetalburgCity/scripts.pory"
	.string "to haul them in.$"
# 753 "data/maps/PetalburgCity/scripts.pory"

# 754 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 755 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has Wally gone?\pHe should be leaving for\nVerdanturf Town soon$"
# 756 "data/maps/PetalburgCity/scripts.pory"

# 757 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 758 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 759 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie Trainer?\p"
# 760 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what Pokémon Trainers\n"
# 761 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 762 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of Gym\n"
# 763 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 764 "data/maps/PetalburgCity/scripts.pory"

# 765 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 766 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is Petalburg City's Gym.$"
# 767 "data/maps/PetalburgCity/scripts.pory"

# 768 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 769 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the Gym's sign. Look for it\n"
# 770 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a Gym.$"
# 771 "data/maps/PetalburgCity/scripts.pory"

# 772 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 773 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\pIt's shining grin full of hope…\pOr maybe it's a look of somber silence\nstruggling with fear…\pWhat do you see in your face?$"
# 774 "data/maps/PetalburgCity/scripts.pory"

# 775 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 776 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six Pokémon in your\nteam and then you catch another one…\pDo you know what happens?\pIt's automatically sent to a storage\nBox over the PC network!$"
# 777 "data/maps/PetalburgCity/scripts.pory"

# 778 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 779 "data/maps/PetalburgCity/scripts.pory"
	.string "Petalburg City Pokémon Gym\n"
# 780 "data/maps/PetalburgCity/scripts.pory"
	.string "Leader: Norman\l"
# 781 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 782 "data/maps/PetalburgCity/scripts.pory"

# 783 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 784 "data/maps/PetalburgCity/scripts.pory"
	.string "Petalburg City\n"
# 785 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 786 "data/maps/PetalburgCity/scripts.pory"

# 787 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 788 "data/maps/PetalburgCity/scripts.pory"
	.string "Wally's House$"
# 789 "data/maps/PetalburgCity/scripts.pory"

# 790 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 791 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 792 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 793 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a Pokémon Trainer?$"
# 794 "data/maps/PetalburgCity/scripts.pory"

# 795 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 796 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 797 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 798 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 799 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie Trainer,\n"
# 800 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 801 "data/maps/PetalburgCity/scripts.pory"

# 802 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 803 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 804 "data/maps/PetalburgCity/scripts.pory"
	.string "talented Trainers.\p"
# 805 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"

PetalburgCity_EventScript_WilburHouseSign::
# 812 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WilburHouseSign_Text_0, MSGBOX_SIGN
	end


PetalburgCity_EventScript_OliviaHouseSign::
# 817 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_OliviaHouseSign_Text_0, MSGBOX_SIGN
	end


PetalburgCity_EventScript_RivalTeleportDone::
# 822 "data/maps/PetalburgCity/scripts.pory"
	lock
# 823 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_WalkInPlaceRight
# 824 "data/maps/PetalburgCity/scripts.pory"
	delay 8
# 825 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 826 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 827 "data/maps/PetalburgCity/scripts.pory"
	checkplayergender
# 828 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgCity_EventScript_RivalTeleportDone_2
# 831 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_RivalTeleportDone_Text_1
PetalburgCity_EventScript_RivalTeleportDone_1:
# 833 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 834 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchRivalExit
# 835 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, PetalburgCity_Movement_RivalExit
# 836 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 10
# 837 "data/maps/PetalburgCity/scripts.pory"
	removeobject 10
# 838 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE_2, 3
# 839 "data/maps/PetalburgCity/scripts.pory"
	release
	end

PetalburgCity_EventScript_RivalTeleportDone_2:
# 829 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_RivalTeleportDone_Text_0
	goto PetalburgCity_EventScript_RivalTeleportDone_1


# 843 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchRivalExit:
# 844 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 845 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
	step_end

# 848 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_RivalExit:
# 849 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 850 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 851 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 851 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 851 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 851 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 851 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 851 "data/maps/PetalburgCity/scripts.pory"
	walk_down
	step_end

PetalburgCity_EventScript_WallysDadGivesPlayerSurf::
# 857 "data/maps/PetalburgCity/scripts.pory"
	lock
# 858 "data/maps/PetalburgCity/scripts.pory"
	opendoor 15, 8
# 859 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 860 "data/maps/PetalburgCity/scripts.pory"
	addobject 11
# 861 "data/maps/PetalburgCity/scripts.pory"
	delay 8
# 862 "data/maps/PetalburgCity/scripts.pory"
	applymovement 11, PetalburgCity_Movement_NormanExitDoor
# 863 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerMoveAside
# 864 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 865 "data/maps/PetalburgCity/scripts.pory"
	closedoor 15, 8
# 866 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 867 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 868 "data/maps/PetalburgCity/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 869 "data/maps/PetalburgCity/scripts.pory"
	delay 8
# 870 "data/maps/PetalburgCity/scripts.pory"
	special SpawnCameraObject
# 871 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 872 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 873 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 874 "data/maps/PetalburgCity/scripts.pory"
	delay 16
# 875 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceUp
# 876 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY
# 877 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 878 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark
# 879 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY
# 880 "data/maps/PetalburgCity/scripts.pory"
	delay 8
# 881 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_0
# 882 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 883 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceUp
# 884 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLYS_DAD
# 885 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_1
# 886 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_2
# 887 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_3
# 888 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceUp
# 889 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLYS_DAD
# 890 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_4
# 891 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 892 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceRight
# 893 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLYS_DAD
# 894 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_5
# 895 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 896 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceUp
# 897 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLYS_DAD
# 898 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_6
# 899 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 900 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 901 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_ExclamationMark
# 902 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLYS_DAD
# 903 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_7
# 904 "data/maps/PetalburgCity/scripts.pory"
	delay 8
# 905 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_HM_SURF
# 906 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_RECEIVED_HM_SURF
# 907 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_8
# 908 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 909 "data/maps/PetalburgCity/scripts.pory"
	delay 8
# 910 "data/maps/PetalburgCity/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 911 "data/maps/PetalburgCity/scripts.pory"
	delay 8
# 912 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 913 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 914 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_9
# 915 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 916 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceUp
# 917 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY
# 918 "data/maps/PetalburgCity/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 919 "data/maps/PetalburgCity/scripts.pory"
	delay 8
# 920 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 921 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 922 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_10
# 923 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 924 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceLeft
# 925 "data/maps/PetalburgCity/scripts.pory"
	delay 8
# 926 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceRight
# 927 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY
# 928 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_11
# 929 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 930 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceUp
# 931 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY
# 932 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_12
# 933 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_13
# 934 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 935 "data/maps/PetalburgCity/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 936 "data/maps/PetalburgCity/scripts.pory"
	delay 8
# 937 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 938 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 939 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_14
# 940 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 941 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceDown
# 942 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY
# 943 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_15
# 944 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_16
# 945 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 946 "data/maps/PetalburgCity/scripts.pory"
	delay 16
# 947 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerExit
# 948 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyExit
# 949 "data/maps/PetalburgCity/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 950 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY
# 951 "data/maps/PetalburgCity/scripts.pory"
	delay 64
# 952 "data/maps/PetalburgCity/scripts.pory"
	fadenewbgm MUS_DUMMY
# 953 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WallyDadGoUp
# 954 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLYS_DAD
# 955 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_17
# 956 "data/maps/PetalburgCity/scripts.pory"
	delay 16
# 957 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_18
# 958 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 959 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceRight
# 960 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLYS_DAD
# 961 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_19
# 962 "data/maps/PetalburgCity/scripts.pory"
	delay 16
# 963 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_20
# 964 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 965 "data/maps/PetalburgCity/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 966 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 11
# 967 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_21
# 968 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_22
# 969 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_23
# 970 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_24
# 971 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 972 "data/maps/PetalburgCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 973 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PetalburgCity_Movement_CameraBackToPlayer
# 974 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 975 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 976 "data/maps/PetalburgCity/scripts.pory"
	special RemoveCameraObject
# 977 "data/maps/PetalburgCity/scripts.pory"
	removeobject 11
# 978 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_WALLYS_DAD
# 979 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkTowardsRoute103
# 980 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WalkTowardsRoute103
# 981 "data/maps/PetalburgCity/scripts.pory"
	delay 80
# 982 "data/maps/PetalburgCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 983 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY
# 984 "data/maps/PetalburgCity/scripts.pory"
	delay 32
# 985 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceLeft
# 986 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY
# 987 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_25
# 988 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 989 "data/maps/PetalburgCity/scripts.pory"
	delay 24
# 990 "data/maps/PetalburgCity/scripts.pory"
	playse SE_SUCCESS
# 991 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 992 "data/maps/PetalburgCity/scripts.pory"
	delay 16
# 993 "data/maps/PetalburgCity/scripts.pory"
	playse SE_SUCCESS
# 994 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 995 "data/maps/PetalburgCity/scripts.pory"
	delay 32
# 996 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_26
# 997 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 998 "data/maps/PetalburgCity/scripts.pory"
	delay 16
# 999 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WalkTowardsMauville
# 1000 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkTowardsMauville
# 1001 "data/maps/PetalburgCity/scripts.pory"
	delay 32
# 1002 "data/maps/PetalburgCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1003 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1004 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 1005 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 1006 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_WALLY
# 1007 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1008 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 1009 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 5
# 1010 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_MAUVILLE_CITY_STATE, 7
# 1011 "data/maps/PetalburgCity/scripts.pory"
	warpsilent MAP_MAUVILLE_CITY, 35, 8
# 1012 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 1013 "data/maps/PetalburgCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1014 "data/maps/PetalburgCity/scripts.pory"
	release
	end


# 1018 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_NormanExitDoor:
# 1019 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 1020 "data/maps/PetalburgCity/scripts.pory"
	walk_down
	step_end

# 1023 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerMoveAside:
# 1024 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1025 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_right
	step_end

# 1028 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerExit:
# 1029 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1030 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1031 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1031 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1031 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1031 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1031 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1031 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1031 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1031 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1032 "data/maps/PetalburgCity/scripts.pory"
	walk_right
	step_end

# 1035 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyExit:
# 1036 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 1036 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 1037 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1037 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1037 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1037 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1037 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1037 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1037 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1038 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1038 "data/maps/PetalburgCity/scripts.pory"
	walk_right
	step_end

# 1041 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyDadGoUp:
# 1042 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 1042 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 1043 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
	step_end

# 1046 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_CameraBackToPlayer:
# 1047 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1047 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1048 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 1048 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 1048 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 1048 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 1048 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 1048 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 1048 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 1048 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
	step_end

# 1051 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkTowardsRoute103:
# 1052 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1052 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1052 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1052 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1052 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1052 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1052 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1052 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1052 "data/maps/PetalburgCity/scripts.pory"
	walk_right
	step_end

# 1055 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkTowardsMauville:
# 1056 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1056 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1056 "data/maps/PetalburgCity/scripts.pory"
	walk_right
	step_end

PetalburgCity_EventScript_WilburHouseSign_Text_0:
# 812 "data/maps/PetalburgCity/scripts.pory"
	.string "Wilbur's House$"

PetalburgCity_EventScript_OliviaHouseSign_Text_0:
# 817 "data/maps/PetalburgCity/scripts.pory"
	.string "Olivia's House$"

PetalburgCity_EventScript_RivalTeleportDone_Text_0:
# 829 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Well, we made it!\nThe Petalburg City Gym!\pGood luck taking on the Gym Leader,\n{PLAYER}.\lI'm cheering for you!\pLater!$"

PetalburgCity_EventScript_RivalTeleportDone_Text_1:
# 831 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: So we're here.\nPetalburg City.\p{PLAYER}, you do your best with the Gym.\nI'm behind you all the way.\pSee ya!$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_0:
# 881 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: Ah!\p{PLAYER}!\nMr. Norman!$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_1:
# 885 "data/maps/PetalburgCity/scripts.pory"
	.string "I haven't seen the two of you in some\ntime. What a coincidence!\pI just came back to my parent's house\nto grab something I'd forgotten.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_2:
# 886 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Dad{COLOR DARK_GRAY}: You look like you've been\nworking hard, Wally.\lIt's clear even without a battle.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_3:
# 887 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: R-really?\nYou really think so?\pHehe… Thank you!\nThat's so nice of you to say!$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_4:
# 890 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Ah.\n{PLAYER}, isn't it?\pI'm glad to see you here.\nI'm {COLOR RED}Wally's father{COLOR DARK_GRAY}, of course.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_5:
# 894 "data/maps/PetalburgCity/scripts.pory"
	.string "As you can see, Wally's health has\nthoroughly improved.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_6:
# 898 "data/maps/PetalburgCity/scripts.pory"
	.string "It's all thanks to you and your\nfather.\pYou two helped Wally catch his first\nPokémon that day.\pIt's because of you that he has a\npartner of his own now.\pThat partner is why he's grown so\nstrong.\pThat's my firm belief.\nSo, I thank you.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_7:
# 903 "data/maps/PetalburgCity/scripts.pory"
	.string "Yeah, that's it.\pSometimes words aren't enough.\nIt would delight me if you'd take this.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_8:
# 907 "data/maps/PetalburgCity/scripts.pory"
	.string "If you're cleared to use Surf\noutside of battle, you'll be able to\lcross seas with your Pokémon.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_9:
# 914 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Dad{COLOR DARK_GRAY}: {PLAYER}…\pConsidering how much you and Wally\nhave grown, you should be able to\lhandle what lies beyond the sea on\l{COLOR BLUE}Route 118{COLOR DARK_GRAY} now.\pThere are far stronger Pokémon and\nTrainers waiting for you on Hoenn's\least coast.\pContinue your journey and your\nadventures there.\lI know you'll do your best.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_10:
# 922 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: Yes, sir!\pI will do my best to become as strong as\n{PLAYER}, sir!$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_11:
# 928 "data/maps/PetalburgCity/scripts.pory"
	.string "I guess I had better start out, then.\nI'm off for now, Dad!\lSee you next time!$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_12:
# 932 "data/maps/PetalburgCity/scripts.pory"
	.string "Um. Come on, {PLAYER}!\nLet's go together!$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_13:
# 933 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Dad{COLOR DARK_GRAY}: Wally…\pI look forward to seeing you and your\nPokémon grow stronger together.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_14:
# 939 "data/maps/PetalburgCity/scripts.pory"
	.string "{PLAYER}?\nWell, take care of yourself out there.\pDon't forget to drop by Littleroot to\nvisit your mother from time to time!$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_15:
# 943 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: OK!\nWe're off!$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_16:
# 944 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Wally's Dad{COLOR DARK_GRAY}: Be safe out there!$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_17:
# 955 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Wally's Dad{COLOR DARK_GRAY}: …$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_18:
# 957 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Dad{COLOR DARK_GRAY}: …$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_19:
# 961 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Wally's Dad{COLOR DARK_GRAY}: I don't know what it is,\nbut…$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_20:
# 963 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Dad{COLOR DARK_GRAY}: …Hm?$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_21:
# 967 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Wally's Dad{COLOR DARK_GRAY}: Seeing my little boy all\ngrown up and going off on his own…\pAs a father, it makes me happy and a\nlittle sad…$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_22:
# 968 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Dad{COLOR DARK_GRAY}: Hahaha!\nWhat a coincidence!\pI caught myself thinking the same\nthing.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_23:
# 969 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Wally's Dad{COLOR DARK_GRAY}: Hohoho!\nIs that so?\p…\nBut if only…\pIf only my boy keeps growing strong\nand healthy like that…\lI wouldn't ask for anything else.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_24:
# 970 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Dad{COLOR DARK_GRAY}: Yes.\nI know exactly what you mean.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_25:
# 987 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: Mr. Norman told us to keep going\nbeyond {COLOR BLUE}Route 118{COLOR DARK_GRAY}, didn't he…\pLet me check my AreaNav…$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_26:
# 996 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR BLUE}Route 118{COLOR DARK_GRAY} is the one east of Mauville\nCity, huh?\p{PLAYER}!\nSince we're both here anyway, let's go\lto Mauville together!\pI'm definitely planning on going to\ncheck out Route 118 like your dad\lsaid!$"
