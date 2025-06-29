# 1 "data/maps/PetalburgCity/scripts.pory"

# 2 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_WALLY, 2
# 3 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_BOY, 3
# 4 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_WALLYS_DAD, 5
# 5 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_SCOTT, 9
# 6 "data/maps/PetalburgCity/scripts.pory"

# 7 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_MapScripts::
# 8 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_OnWarp
# 9 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
# 10 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
# 11 "data/maps/PetalburgCity/scripts.pory"
	.byte 0
# 12 "data/maps/PetalburgCity/scripts.pory"

# 13 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnWarp:
# 14 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyFaceGymDoor
# 15 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 16 "data/maps/PetalburgCity/scripts.pory"

# 17 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyFaceGymDoor::
# 18 "data/maps/PetalburgCity/scripts.pory"
	turnobject LOCALID_WALLY, DIR_NORTH
# 19 "data/maps/PetalburgCity/scripts.pory"
	end
# 20 "data/maps/PetalburgCity/scripts.pory"

# 21 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition:
# 22 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 23 "data/maps/PetalburgCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 24 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
# 25 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
# 26 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
# 27 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_EventScript_SetGymDoorsUnlocked
# 28 "data/maps/PetalburgCity/scripts.pory"
	call_if_ge VAR_LAVARIDGE_TOWN_STATE, 2, PetalburgCity_EventScript_HideLavaridgeRival
# 29 "data/maps/PetalburgCity/scripts.pory"
	end
# 30 "data/maps/PetalburgCity/scripts.pory"

# 31 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 32 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
# 33 "data/maps/PetalburgCity/scripts.pory"
	return
# 34 "data/maps/PetalburgCity/scripts.pory"

# 35 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 36 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 37 "data/maps/PetalburgCity/scripts.pory"
	return
# 38 "data/maps/PetalburgCity/scripts.pory"

# 39 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 40 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 41 "data/maps/PetalburgCity/scripts.pory"
	return
# 42 "data/maps/PetalburgCity/scripts.pory"

# 43 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_HideLavaridgeRival::
# 44 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL
# 45 "data/maps/PetalburgCity/scripts.pory"
	return
# 46 "data/maps/PetalburgCity/scripts.pory"

# 47 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnFrame:
# 48 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 49 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WallysDadGivesPlayerSurf
# 50 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE_2, 2, PetalburgCity_EventScript_RivalTeleportDone
# 51 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 52 "data/maps/PetalburgCity/scripts.pory"

# 53 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 54 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 55 "data/maps/PetalburgCity/scripts.pory"
	special SavePlayerParty
# 56 "data/maps/PetalburgCity/scripts.pory"
	special LoadWallyZigzagoon
# 57 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 58 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 59 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 60 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 61 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 62 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceRight, MAP_PETALBURG_CITY
# 63 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY, MAP_PETALBURG_CITY
# 64 "data/maps/PetalburgCity/scripts.pory"
	delay 8
# 65 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 66 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark, MAP_PETALBURG_CITY
# 67 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY, MAP_PETALBURG_CITY
# 68 "data/maps/PetalburgCity/scripts.pory"
	delay 8
# 69 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_Whoa, MSGBOX_DEFAULT
# 70 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 71 "data/maps/PetalburgCity/scripts.pory"
	delay 8
# 72 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 73 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 74 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 75 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 76 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceLeft, MAP_PETALBURG_CITY
# 77 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY, MAP_PETALBURG_CITY
# 78 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 79 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 80 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 81 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 82 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 83 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 84 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 85 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 86 "data/maps/PetalburgCity/scripts.pory"
	delay 8
# 87 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 88 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 89 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 90 "data/maps/PetalburgCity/scripts.pory"
	end
# 91 "data/maps/PetalburgCity/scripts.pory"

# 92 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 93 "data/maps/PetalburgCity/scripts.pory"
	lock
# 94 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 95 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 96 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 97 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_BOY, Common_Movement_FaceOriginalDirection
# 98 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 99 "data/maps/PetalburgCity/scripts.pory"
	release
# 100 "data/maps/PetalburgCity/scripts.pory"
	end
# 101 "data/maps/PetalburgCity/scripts.pory"

# 102 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 103 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 104 "data/maps/PetalburgCity/scripts.pory"
	end
# 105 "data/maps/PetalburgCity/scripts.pory"

# 106 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 107 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 108 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
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
	walk_up
# 135 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 136 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_right
# 137 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 138 "data/maps/PetalburgCity/scripts.pory"

# 139 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 140 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 141 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 148 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_left
# 149 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
	walk_up
# 168 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 169 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_up
# 170 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 171 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_right
# 172 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 173 "data/maps/PetalburgCity/scripts.pory"

# 174 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 175 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 176 "data/maps/PetalburgCity/scripts.pory"
	end
# 177 "data/maps/PetalburgCity/scripts.pory"

# 178 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 179 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 180 "data/maps/PetalburgCity/scripts.pory"
	end
# 181 "data/maps/PetalburgCity/scripts.pory"

# 182 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 183 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 184 "data/maps/PetalburgCity/scripts.pory"
	end
# 185 "data/maps/PetalburgCity/scripts.pory"

# 186 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 187 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 188 "data/maps/PetalburgCity/scripts.pory"
	end
# 189 "data/maps/PetalburgCity/scripts.pory"

# 190 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 191 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 192 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 193 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 194 "data/maps/PetalburgCity/scripts.pory"
	end
# 195 "data/maps/PetalburgCity/scripts.pory"

# 196 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 197 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 198 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 199 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 200 "data/maps/PetalburgCity/scripts.pory"
	end
# 201 "data/maps/PetalburgCity/scripts.pory"

# 202 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 203 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 204 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 205 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 206 "data/maps/PetalburgCity/scripts.pory"
	end
# 207 "data/maps/PetalburgCity/scripts.pory"

# 208 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 209 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 210 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 211 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 212 "data/maps/PetalburgCity/scripts.pory"
	end
# 213 "data/maps/PetalburgCity/scripts.pory"

# 214 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 215 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceRight
# 216 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 217 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 218 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 219 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 220 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 221 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 222 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 223 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 224 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 225 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 226 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 227 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 228 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 229 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 230 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 231 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 232 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 233 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 234 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceRight
# 235 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 236 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 237 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 238 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 239 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 240 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerSeeBoyAway
# 241 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_GYM_BOY
# 242 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 243 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 244 "data/maps/PetalburgCity/scripts.pory"
	end
# 245 "data/maps/PetalburgCity/scripts.pory"

# 246 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 247 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 248 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 249 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 250 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 251 "data/maps/PetalburgCity/scripts.pory"
	return
# 252 "data/maps/PetalburgCity/scripts.pory"

# 253 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 254 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 255 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 256 "data/maps/PetalburgCity/scripts.pory"
	return
# 257 "data/maps/PetalburgCity/scripts.pory"

# 258 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 259 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 260 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 261 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 262 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 263 "data/maps/PetalburgCity/scripts.pory"
	return
# 264 "data/maps/PetalburgCity/scripts.pory"

# 265 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 266 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 267 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 268 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 269 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 270 "data/maps/PetalburgCity/scripts.pory"
	return
# 271 "data/maps/PetalburgCity/scripts.pory"

# 272 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 273 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 274 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 275 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 276 "data/maps/PetalburgCity/scripts.pory"
	return
# 277 "data/maps/PetalburgCity/scripts.pory"

# 278 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 279 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 280 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 281 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 282 "data/maps/PetalburgCity/scripts.pory"
	return
# 283 "data/maps/PetalburgCity/scripts.pory"

# 284 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 285 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 286 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 287 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 288 "data/maps/PetalburgCity/scripts.pory"
	return
# 289 "data/maps/PetalburgCity/scripts.pory"

# 290 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 291 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 292 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 293 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 294 "data/maps/PetalburgCity/scripts.pory"
	return
# 295 "data/maps/PetalburgCity/scripts.pory"

# 296 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 297 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 298 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 299 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 300 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 301 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 302 "data/maps/PetalburgCity/scripts.pory"

# 303 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 304 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 305 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 306 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 307 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_up
# 308 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 309 "data/maps/PetalburgCity/scripts.pory"

# 310 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 311 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 312 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 313 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 314 "data/maps/PetalburgCity/scripts.pory"

# 315 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 316 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 317 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 318 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 319 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
# 320 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 321 "data/maps/PetalburgCity/scripts.pory"

# 322 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 323 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 324 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 325 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 326 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 327 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
# 328 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 329 "data/maps/PetalburgCity/scripts.pory"

# 330 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 331 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
	walk_up
# 339 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 340 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_up
# 341 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 342 "data/maps/PetalburgCity/scripts.pory"

# 343 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 344 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 345 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
	walk_up
# 354 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 355 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 356 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_up
# 357 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 358 "data/maps/PetalburgCity/scripts.pory"

# 359 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 360 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
	walk_up
# 368 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 369 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_up
# 370 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 371 "data/maps/PetalburgCity/scripts.pory"

# 372 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 373 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
	walk_up
# 381 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 382 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 383 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_up
# 384 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 385 "data/maps/PetalburgCity/scripts.pory"

# 386 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 387 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 388 "data/maps/PetalburgCity/scripts.pory"
	walk_left
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
	step_end
# 400 "data/maps/PetalburgCity/scripts.pory"

# 401 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerSeeBoyAway:
# 402 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 403 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
# 404 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 405 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_left
# 406 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 407 "data/maps/PetalburgCity/scripts.pory"

# 408 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 409 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 410 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
	walk_up
# 418 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 419 "data/maps/PetalburgCity/scripts.pory"

# 420 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 421 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 422 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 423 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 424 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
	walk_up
# 432 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 433 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 434 "data/maps/PetalburgCity/scripts.pory"

# 435 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 436 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 437 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
	walk_up
# 445 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 446 "data/maps/PetalburgCity/scripts.pory"

# 447 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 448 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 449 "data/maps/PetalburgCity/scripts.pory"
	walk_right
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
	walk_up
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 458 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 459 "data/maps/PetalburgCity/scripts.pory"

# 460 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 461 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 462 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 463 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 464 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 10
# 465 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 466 "data/maps/PetalburgCity/scripts.pory"
	end
# 467 "data/maps/PetalburgCity/scripts.pory"

# 468 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 469 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 470 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 471 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 472 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 11
# 473 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 474 "data/maps/PetalburgCity/scripts.pory"
	end
# 475 "data/maps/PetalburgCity/scripts.pory"

# 476 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 477 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 478 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 479 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 480 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 12
# 481 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 482 "data/maps/PetalburgCity/scripts.pory"
	end
# 483 "data/maps/PetalburgCity/scripts.pory"

# 484 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 485 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 486 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 487 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 488 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 13
# 489 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 490 "data/maps/PetalburgCity/scripts.pory"
	end
# 491 "data/maps/PetalburgCity/scripts.pory"

# 492 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 493 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 494 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 495 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 496 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
# 497 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 498 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
# 499 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 500 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 501 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 502 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 503 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 504 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 505 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 506 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 507 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 508 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 509 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 510 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 511 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 512 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 513 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 514 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 515 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 516 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 517 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 518 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 519 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 520 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 521 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 522 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 523 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 524 "data/maps/PetalburgCity/scripts.pory"
	end
# 525 "data/maps/PetalburgCity/scripts.pory"

# 526 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 527 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 528 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
# 529 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 530 "data/maps/PetalburgCity/scripts.pory"
	return
# 531 "data/maps/PetalburgCity/scripts.pory"

# 532 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 533 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 534 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
# 535 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 536 "data/maps/PetalburgCity/scripts.pory"
	return
# 537 "data/maps/PetalburgCity/scripts.pory"

# 538 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 539 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 540 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
# 541 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 542 "data/maps/PetalburgCity/scripts.pory"
	return
# 543 "data/maps/PetalburgCity/scripts.pory"

# 544 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 545 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 546 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
# 547 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 548 "data/maps/PetalburgCity/scripts.pory"
	return
# 549 "data/maps/PetalburgCity/scripts.pory"

# 550 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 551 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 552 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 553 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 554 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 555 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 556 "data/maps/PetalburgCity/scripts.pory"

# 557 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 558 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 559 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 560 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 561 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 562 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 563 "data/maps/PetalburgCity/scripts.pory"

# 564 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 565 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 566 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 567 "data/maps/PetalburgCity/scripts.pory"
	walk_left
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
	step_end
# 579 "data/maps/PetalburgCity/scripts.pory"

# 580 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 581 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 582 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
# 583 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 584 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 585 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 586 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_left
# 587 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 588 "data/maps/PetalburgCity/scripts.pory"

# 589 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 590 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 591 "data/maps/PetalburgCity/scripts.pory"
	walk_left
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
	step_end
# 603 "data/maps/PetalburgCity/scripts.pory"

# 604 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 605 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 606 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
# 607 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 608 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 609 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_left
# 610 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 611 "data/maps/PetalburgCity/scripts.pory"

# 612 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 613 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 614 "data/maps/PetalburgCity/scripts.pory"
	walk_left
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
	step_end
# 626 "data/maps/PetalburgCity/scripts.pory"

# 627 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 628 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 629 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
# 630 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 631 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 632 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_left
# 633 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 634 "data/maps/PetalburgCity/scripts.pory"

# 635 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 636 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 637 "data/maps/PetalburgCity/scripts.pory"
	walk_left
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
	step_end
# 649 "data/maps/PetalburgCity/scripts.pory"

# 650 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 651 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 652 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_up
# 653 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 654 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 655 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_left
# 656 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 657 "data/maps/PetalburgCity/scripts.pory"

# 658 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 659 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 660 "data/maps/PetalburgCity/scripts.pory"
	end
# 661 "data/maps/PetalburgCity/scripts.pory"

# 662 "data/maps/PetalburgCity/scripts.pory"
@@@@@@@@@@@@@@@@@@@@@@
# 663 "data/maps/PetalburgCity/scripts.pory"
@ Old Rod Gift
# 664 "data/maps/PetalburgCity/scripts.pory"
@@@@@@@@@@@@@@@@@@@@@@
# 665 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_OldRodFisherman::
# 666 "data/maps/PetalburgCity/scripts.pory"
	lock
# 667 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 668 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_OLD_ROD, PetalburgCity_EventScript_HowsFishing
# 669 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GettingItchToFish, MSGBOX_YESNO
# 670 "data/maps/PetalburgCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_EventScript_GiveOldRod
# 671 "data/maps/PetalburgCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_EventScript_NotGettingItchToFish
# 672 "data/maps/PetalburgCity/scripts.pory"
	end
# 673 "data/maps/PetalburgCity/scripts.pory"

# 674 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GiveOldRod::
# 675 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GiveYouOneOfMyRods, MSGBOX_DEFAULT
# 676 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_OLD_ROD
# 677 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 678 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThrowInFishingAdvice, MSGBOX_DEFAULT
# 679 "data/maps/PetalburgCity/scripts.pory"
	release
# 680 "data/maps/PetalburgCity/scripts.pory"
	end
# 681 "data/maps/PetalburgCity/scripts.pory"

# 682 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_NotGettingItchToFish::
# 683 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThatsTooBadThen, MSGBOX_DEFAULT
# 684 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 685 "data/maps/PetalburgCity/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceUp
# 686 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 12
# 687 "data/maps/PetalburgCity/scripts.pory"
	release
# 688 "data/maps/PetalburgCity/scripts.pory"
	end
# 689 "data/maps/PetalburgCity/scripts.pory"

# 690 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_HowsFishing::
# 691 "data/maps/PetalburgCity/scripts.pory"
	message PetalburgCity_Text_HowsYourFishing
# 692 "data/maps/PetalburgCity/scripts.pory"
	waitmessage
# 693 "data/maps/PetalburgCity/scripts.pory"
	multichoice 20, 8, MULTI_HOWS_FISHING, TRUE
# 694 "data/maps/PetalburgCity/scripts.pory"
	goto_if_eq VAR_RESULT, 0, PetalburgCity_EventScript_FishingExcellent
# 695 "data/maps/PetalburgCity/scripts.pory"
	goto_if_eq VAR_RESULT, 1, PetalburgCity_EventScript_FishingNotSoGood
# 696 "data/maps/PetalburgCity/scripts.pory"
	end
# 697 "data/maps/PetalburgCity/scripts.pory"

# 698 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_FishingExcellent::
# 699 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GreatHaulInSomeBigOnes, MSGBOX_DEFAULT
# 700 "data/maps/PetalburgCity/scripts.pory"
	release
# 701 "data/maps/PetalburgCity/scripts.pory"
	end
# 702 "data/maps/PetalburgCity/scripts.pory"

# 703 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_FishingNotSoGood::
# 704 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FishingAdvice, MSGBOX_DEFAULT
# 705 "data/maps/PetalburgCity/scripts.pory"
	release
# 706 "data/maps/PetalburgCity/scripts.pory"
	end
# 707 "data/maps/PetalburgCity/scripts.pory"

# 708 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GettingItchToFish:
# 709 "data/maps/PetalburgCity/scripts.pory"
	.string "This is a renowned fishing spot.\n"
# 710 "data/maps/PetalburgCity/scripts.pory"
	.string "Are you getting the itch to fish?$"
# 711 "data/maps/PetalburgCity/scripts.pory"

# 712 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GiveYouOneOfMyRods:
# 713 "data/maps/PetalburgCity/scripts.pory"
	.string "I hear you, and I like what\n"
# 714 "data/maps/PetalburgCity/scripts.pory"
	.string "you're saying!\p"
# 715 "data/maps/PetalburgCity/scripts.pory"
	.string "I'll give you one of my fishing rods.$"
# 716 "data/maps/PetalburgCity/scripts.pory"

# 717 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThrowInFishingAdvice:
# 718 "data/maps/PetalburgCity/scripts.pory"
	.string "And, as an added bonus, I'll even throw\n"
# 719 "data/maps/PetalburgCity/scripts.pory"
	.string "in a little fishing advice!\p"
# 720 "data/maps/PetalburgCity/scripts.pory"
	.string "First, you want to face the water,\n"
# 721 "data/maps/PetalburgCity/scripts.pory"
	.string "then use the rod.\p"
# 722 "data/maps/PetalburgCity/scripts.pory"
	.string "Focus your mind…\n"
# 723 "data/maps/PetalburgCity/scripts.pory"
	.string "If you get a bite, pull on the rod.\p"
# 724 "data/maps/PetalburgCity/scripts.pory"
	.string "Sometimes you can snag something\n"
# 725 "data/maps/PetalburgCity/scripts.pory"
	.string "immediately, but with bigger catches,\l"
# 726 "data/maps/PetalburgCity/scripts.pory"
	.string "you need to time the pulls on your rod\l"
# 727 "data/maps/PetalburgCity/scripts.pory"
	.string "to haul them in.$"
# 728 "data/maps/PetalburgCity/scripts.pory"

# 729 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThatsTooBadThen:
# 730 "data/maps/PetalburgCity/scripts.pory"
	.string "Oh, is that so?\n"
# 731 "data/maps/PetalburgCity/scripts.pory"
	.string "That's too bad, then.$"
# 732 "data/maps/PetalburgCity/scripts.pory"

# 733 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_HowsYourFishing:
# 734 "data/maps/PetalburgCity/scripts.pory"
	.string "Yo!\n"
# 735 "data/maps/PetalburgCity/scripts.pory"
	.string "How's your fishing?$"
# 736 "data/maps/PetalburgCity/scripts.pory"

# 737 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GreatHaulInSomeBigOnes:
# 738 "data/maps/PetalburgCity/scripts.pory"
	.string "Is that right! That's great!\n"
# 739 "data/maps/PetalburgCity/scripts.pory"
	.string "Haul in some big ones!$"
# 740 "data/maps/PetalburgCity/scripts.pory"

# 741 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FishingAdvice:
# 742 "data/maps/PetalburgCity/scripts.pory"
	.string "Oh, hey, don't get down on yourself!\n"
# 743 "data/maps/PetalburgCity/scripts.pory"
	.string "I'll give you a little fishing advice.\p"
# 744 "data/maps/PetalburgCity/scripts.pory"
	.string "First, you want to face the water,\n"
# 745 "data/maps/PetalburgCity/scripts.pory"
	.string "then use the Rod.\p"
# 746 "data/maps/PetalburgCity/scripts.pory"
	.string "Focus your mind…\n"
# 747 "data/maps/PetalburgCity/scripts.pory"
	.string "If you get a bite, pull the Rod.\p"
# 748 "data/maps/PetalburgCity/scripts.pory"
	.string "Sometimes you can snag something\n"
# 749 "data/maps/PetalburgCity/scripts.pory"
	.string "immediately, but with bigger catches,\l"
# 750 "data/maps/PetalburgCity/scripts.pory"
	.string "you need to time the pulls on your Rod\l"
# 751 "data/maps/PetalburgCity/scripts.pory"
	.string "to haul them in.$"
# 752 "data/maps/PetalburgCity/scripts.pory"

# 753 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 754 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has Wally gone?\pHe should be leaving for\nVerdanturf Town soon$"
# 755 "data/maps/PetalburgCity/scripts.pory"

# 756 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 757 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 758 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie Trainer?\p"
# 759 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what Pokémon Trainers\n"
# 760 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 761 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of Gym\n"
# 762 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 763 "data/maps/PetalburgCity/scripts.pory"

# 764 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 765 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is Petalburg City's Gym.$"
# 766 "data/maps/PetalburgCity/scripts.pory"

# 767 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 768 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the Gym's sign. Look for it\n"
# 769 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a Gym.$"
# 770 "data/maps/PetalburgCity/scripts.pory"

# 771 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 772 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\pIt's shining grin full of hope…\pOr maybe it's a look of somber silence\nstruggling with fear…\pWhat do you see in your face?$"
# 773 "data/maps/PetalburgCity/scripts.pory"

# 774 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 775 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six Pokémon in your\nteam and then you catch another one…\pDo you know what happens?\pIt's automatically sent to a storage\nBox over the PC network!$"
# 776 "data/maps/PetalburgCity/scripts.pory"

# 777 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 778 "data/maps/PetalburgCity/scripts.pory"
	.string "Petalburg City Pokémon Gym\n"
# 779 "data/maps/PetalburgCity/scripts.pory"
	.string "Leader: Norman\l"
# 780 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 781 "data/maps/PetalburgCity/scripts.pory"

# 782 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 783 "data/maps/PetalburgCity/scripts.pory"
	.string "Petalburg City\n"
# 784 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 785 "data/maps/PetalburgCity/scripts.pory"

# 786 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 787 "data/maps/PetalburgCity/scripts.pory"
	.string "Wally's House$"
# 788 "data/maps/PetalburgCity/scripts.pory"

# 789 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 790 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 791 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 792 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a Pokémon Trainer?$"
# 793 "data/maps/PetalburgCity/scripts.pory"

# 794 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 795 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 796 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 797 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 798 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie Trainer,\n"
# 799 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 800 "data/maps/PetalburgCity/scripts.pory"

# 801 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 802 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 803 "data/maps/PetalburgCity/scripts.pory"
	.string "talented Trainers.\p"
# 804 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"

PetalburgCity_EventScript_WilburHouseSign::
# 811 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WilburHouseSign_Text_0, MSGBOX_SIGN
	end


PetalburgCity_EventScript_OliviaHouseSign::
# 816 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_OliviaHouseSign_Text_0, MSGBOX_SIGN
	end


PetalburgCity_EventScript_RivalTeleportDone::
# 821 "data/maps/PetalburgCity/scripts.pory"
	lock
# 822 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_WalkInPlaceRight
# 823 "data/maps/PetalburgCity/scripts.pory"
	delay 8
# 824 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 825 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 826 "data/maps/PetalburgCity/scripts.pory"
	checkplayergender
# 827 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgCity_EventScript_RivalTeleportDone_2
# 830 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_RivalTeleportDone_Text_1
PetalburgCity_EventScript_RivalTeleportDone_1:
# 832 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 833 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchRivalExit
# 834 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, PetalburgCity_Movement_RivalExit
# 835 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 10
# 836 "data/maps/PetalburgCity/scripts.pory"
	removeobject 10
# 837 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE_2, 3
# 838 "data/maps/PetalburgCity/scripts.pory"
	release
	end

PetalburgCity_EventScript_RivalTeleportDone_2:
# 828 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_RivalTeleportDone_Text_0
	goto PetalburgCity_EventScript_RivalTeleportDone_1


# 842 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchRivalExit:
# 843 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 844 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
	step_end

# 847 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_RivalExit:
# 848 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 849 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 850 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 850 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 850 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 850 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 850 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 850 "data/maps/PetalburgCity/scripts.pory"
	walk_down
	step_end

PetalburgCity_EventScript_WallysDadGivesPlayerSurf::
# 856 "data/maps/PetalburgCity/scripts.pory"
	lock
# 857 "data/maps/PetalburgCity/scripts.pory"
	opendoor 15, 8
# 858 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 859 "data/maps/PetalburgCity/scripts.pory"
	addobject 11
# 860 "data/maps/PetalburgCity/scripts.pory"
	delay 8
# 861 "data/maps/PetalburgCity/scripts.pory"
	applymovement 11, PetalburgCity_Movement_NormanExitDoor
# 862 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerMoveAside
# 863 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 864 "data/maps/PetalburgCity/scripts.pory"
	closedoor 15, 8
# 865 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 866 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 867 "data/maps/PetalburgCity/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 868 "data/maps/PetalburgCity/scripts.pory"
	delay 8
# 869 "data/maps/PetalburgCity/scripts.pory"
	special SpawnCameraObject
# 870 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 871 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 872 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 873 "data/maps/PetalburgCity/scripts.pory"
	delay 16
# 874 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceUp
# 875 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY
# 876 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 877 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark
# 878 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY
# 879 "data/maps/PetalburgCity/scripts.pory"
	delay 8
# 880 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_0
# 881 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 882 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceUp
# 883 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLYS_DAD
# 884 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_1
# 885 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_2
# 886 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_3
# 887 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceUp
# 888 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLYS_DAD
# 889 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_4
# 890 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 891 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceRight
# 892 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLYS_DAD
# 893 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_5
# 894 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 895 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceUp
# 896 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLYS_DAD
# 897 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_6
# 898 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 899 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 900 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_ExclamationMark
# 901 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLYS_DAD
# 902 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_7
# 903 "data/maps/PetalburgCity/scripts.pory"
	delay 8
# 904 "data/maps/PetalburgCity/scripts.pory"
	giveitem ITEM_HM_SURF
# 905 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_RECEIVED_HM_SURF
# 906 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_8
# 907 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 908 "data/maps/PetalburgCity/scripts.pory"
	delay 8
# 909 "data/maps/PetalburgCity/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 910 "data/maps/PetalburgCity/scripts.pory"
	delay 8
# 911 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 912 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 913 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_9
# 914 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 915 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceUp
# 916 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY
# 917 "data/maps/PetalburgCity/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 918 "data/maps/PetalburgCity/scripts.pory"
	delay 8
# 919 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 920 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 921 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_10
# 922 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 923 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceLeft
# 924 "data/maps/PetalburgCity/scripts.pory"
	delay 8
# 925 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceRight
# 926 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY
# 927 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_11
# 928 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 929 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceUp
# 930 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY
# 931 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_12
# 932 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_13
# 933 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 934 "data/maps/PetalburgCity/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 935 "data/maps/PetalburgCity/scripts.pory"
	delay 8
# 936 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 937 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 938 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_14
# 939 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 940 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceDown
# 941 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY
# 942 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_15
# 943 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_16
# 944 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 945 "data/maps/PetalburgCity/scripts.pory"
	delay 16
# 946 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerExit
# 947 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyExit
# 948 "data/maps/PetalburgCity/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceDown
# 949 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY
# 950 "data/maps/PetalburgCity/scripts.pory"
	delay 64
# 951 "data/maps/PetalburgCity/scripts.pory"
	fadenewbgm MUS_DUMMY
# 952 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WallyDadGoUp
# 953 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLYS_DAD
# 954 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_17
# 955 "data/maps/PetalburgCity/scripts.pory"
	delay 16
# 956 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_18
# 957 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 958 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceRight
# 959 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLYS_DAD
# 960 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_19
# 961 "data/maps/PetalburgCity/scripts.pory"
	delay 16
# 962 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_20
# 963 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 964 "data/maps/PetalburgCity/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 965 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 11
# 966 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_21
# 967 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_22
# 968 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_23
# 969 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_24
# 970 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 971 "data/maps/PetalburgCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 972 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PetalburgCity_Movement_CameraBackToPlayer
# 973 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 974 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 975 "data/maps/PetalburgCity/scripts.pory"
	special RemoveCameraObject
# 976 "data/maps/PetalburgCity/scripts.pory"
	removeobject 11
# 977 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_WALLYS_DAD
# 978 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkTowardsRoute103
# 979 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WalkTowardsRoute103
# 980 "data/maps/PetalburgCity/scripts.pory"
	delay 80
# 981 "data/maps/PetalburgCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 982 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY
# 983 "data/maps/PetalburgCity/scripts.pory"
	delay 32
# 984 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceLeft
# 985 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY
# 986 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_25
# 987 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 988 "data/maps/PetalburgCity/scripts.pory"
	delay 24
# 989 "data/maps/PetalburgCity/scripts.pory"
	playse SE_SUCCESS
# 990 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 991 "data/maps/PetalburgCity/scripts.pory"
	delay 16
# 992 "data/maps/PetalburgCity/scripts.pory"
	playse SE_SUCCESS
# 993 "data/maps/PetalburgCity/scripts.pory"
	waitse
# 994 "data/maps/PetalburgCity/scripts.pory"
	delay 32
# 995 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_26
# 996 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 997 "data/maps/PetalburgCity/scripts.pory"
	delay 16
# 998 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WalkTowardsMauville
# 999 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkTowardsMauville
# 1000 "data/maps/PetalburgCity/scripts.pory"
	delay 32
# 1001 "data/maps/PetalburgCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1002 "data/maps/PetalburgCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1003 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 1004 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 1005 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_WALLY
# 1006 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 1007 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 1008 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 5
# 1009 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_MAUVILLE_CITY_STATE, 7
# 1010 "data/maps/PetalburgCity/scripts.pory"
	warpsilent MAP_MAUVILLE_CITY, 35, 8
# 1011 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 1012 "data/maps/PetalburgCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1013 "data/maps/PetalburgCity/scripts.pory"
	release
	end


# 1017 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_NormanExitDoor:
# 1018 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 1019 "data/maps/PetalburgCity/scripts.pory"
	walk_down
	step_end

# 1022 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerMoveAside:
# 1023 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 1024 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_right
	step_end

# 1027 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerExit:
# 1028 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1029 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1030 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1030 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1030 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1030 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1030 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1030 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1030 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1030 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1031 "data/maps/PetalburgCity/scripts.pory"
	walk_right
	step_end

# 1034 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyExit:
# 1035 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 1035 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 1036 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1036 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1036 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1036 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1036 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1036 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1036 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1037 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1037 "data/maps/PetalburgCity/scripts.pory"
	walk_right
	step_end

# 1040 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyDadGoUp:
# 1041 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 1041 "data/maps/PetalburgCity/scripts.pory"
	walk_slow_up
# 1042 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
	step_end

# 1045 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_CameraBackToPlayer:
# 1046 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1046 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1047 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 1047 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 1047 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 1047 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 1047 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 1047 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 1047 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
# 1047 "data/maps/PetalburgCity/scripts.pory"
	walk_faster_down
	step_end

# 1050 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkTowardsRoute103:
# 1051 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1051 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1051 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1051 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1051 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1051 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1051 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1051 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1051 "data/maps/PetalburgCity/scripts.pory"
	walk_right
	step_end

# 1054 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkTowardsMauville:
# 1055 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1055 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1055 "data/maps/PetalburgCity/scripts.pory"
	walk_right
	step_end

PetalburgCity_EventScript_WilburHouseSign_Text_0:
# 811 "data/maps/PetalburgCity/scripts.pory"
	.string "Wilbur's House$"

PetalburgCity_EventScript_OliviaHouseSign_Text_0:
# 816 "data/maps/PetalburgCity/scripts.pory"
	.string "Olivia's House$"

PetalburgCity_EventScript_RivalTeleportDone_Text_0:
# 828 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Well, we made it!\nThe Petalburg City Gym!\pGood luck taking on the Gym Leader,\n{PLAYER}.\lI'm cheering for you!\pLater!$"

PetalburgCity_EventScript_RivalTeleportDone_Text_1:
# 830 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: So we're here.\nPetalburg City.\p{PLAYER}, you do your best with the Gym.\nI'm behind you all the way.\pSee ya!$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_0:
# 880 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: Ah!\p{PLAYER}!\nMr. Norman!$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_1:
# 884 "data/maps/PetalburgCity/scripts.pory"
	.string "I haven't seen the two of you in some\ntime. What a coincidence!\pI just came back to my parent's house\nto grab something I'd forgotten.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_2:
# 885 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Dad{COLOR DARK_GRAY}: You look like you've been\nworking hard, Wally.\lIt's clear even without a battle.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_3:
# 886 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: R-really?\nYou really think so?\pHehe… Thank you!\nThat's so nice of you to say!$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_4:
# 889 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Ah.\n{PLAYER}, isn't it?\pI'm glad to see you here.\nI'm {COLOR RED}Wally's father{COLOR DARK_GRAY}, of course.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_5:
# 893 "data/maps/PetalburgCity/scripts.pory"
	.string "As you can see, Wally's health has\nthoroughly improved.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_6:
# 897 "data/maps/PetalburgCity/scripts.pory"
	.string "It's all thanks to you and your\nfather.\pYou two helped Wally catch his first\nPokémon that day.\pIt's because of you that he has a\npartner of his own now.\pThat partner is why he's grown so\nstrong.\pThat's my firm belief.\nSo, I thank you.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_7:
# 902 "data/maps/PetalburgCity/scripts.pory"
	.string "Yeah, that's it.\pSometimes words aren't enough.\nIt would delight me if you'd take this.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_8:
# 906 "data/maps/PetalburgCity/scripts.pory"
	.string "If you're cleared to use Surf\noutside of battle, you'll be able to\lcross seas with your Pokémon.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_9:
# 913 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Dad{COLOR DARK_GRAY}: {PLAYER}…\pConsidering how much you and Wally\nhave grown, you should be able to\lhandle what lies beyond the sea on\l{COLOR BLUE}Route 118{COLOR DARK_GRAY} now.\pThere are far stronger Pokémon and\nTrainers waiting for you on Hoenn's\least coast.\pContinue your journey and your\nadventures there.\lI know you'll do your best.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_10:
# 921 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: Yes, sir!\pI will do my best to become as strong as\n{PLAYER}, sir!$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_11:
# 927 "data/maps/PetalburgCity/scripts.pory"
	.string "I guess I had better start out, then.\nI'm off for now, Dad!\lSee you next time!$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_12:
# 931 "data/maps/PetalburgCity/scripts.pory"
	.string "Um. Come on, {PLAYER}!\nLet's go together!$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_13:
# 932 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Dad{COLOR DARK_GRAY}: Wally…\pI look forward to seeing you and your\nPokémon grow stronger together.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_14:
# 938 "data/maps/PetalburgCity/scripts.pory"
	.string "{PLAYER}?\nWell, take care of yourself out there.\pDon't forget to drop by Littleroot to\nvisit your mother from time to time!$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_15:
# 942 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: OK!\nWe're off!$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_16:
# 943 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Wally's Dad{COLOR DARK_GRAY}: Be safe out there!$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_17:
# 954 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Wally's Dad{COLOR DARK_GRAY}: …$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_18:
# 956 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Dad{COLOR DARK_GRAY}: …$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_19:
# 960 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Wally's Dad{COLOR DARK_GRAY}: I don't know what it is,\nbut…$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_20:
# 962 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Dad{COLOR DARK_GRAY}: …Hm?$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_21:
# 966 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Wally's Dad{COLOR DARK_GRAY}: Seeing my little boy all\ngrown up and going off on his own…\pAs a father, it makes me happy and a\nlittle sad…$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_22:
# 967 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Dad{COLOR DARK_GRAY}: Hahaha!\nWhat a coincidence!\pI caught myself thinking the same\nthing.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_23:
# 968 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Wally's Dad{COLOR DARK_GRAY}: Hohoho!\nIs that so?\p…\nBut if only…\pIf only my boy keeps growing strong\nand healthy like that…\lI wouldn't ask for anything else.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_24:
# 969 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Dad{COLOR DARK_GRAY}: Yes.\nI know exactly what you mean.$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_25:
# 986 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: Mr. Norman told us to keep going\nbeyond {COLOR BLUE}Route 118{COLOR DARK_GRAY}, didn't he…\pLet me check my AreaNav…$"

PetalburgCity_EventScript_WallysDadGivesPlayerSurf_Text_26:
# 995 "data/maps/PetalburgCity/scripts.pory"
	.string "{COLOR BLUE}Route 118{COLOR DARK_GRAY} is the one east of Mauville\nCity, huh?\p{PLAYER}!\nSince we're both here anyway, let's go\lto Mauville together!\pI'm definitely planning on going to\ncheck out Route 118 like your dad\lsaid!$"
