# 1 "data/maps/Route110/scripts.pory"

# 2 "data/maps/Route110/scripts.pory"
.set LOCALID_CHALLENGE_BIKER, 21
# 3 "data/maps/Route110/scripts.pory"
.set LOCALID_RIVAL, 28
# 4 "data/maps/Route110/scripts.pory"
.set LOCALID_RIVAL_ON_BIKE, 29
# 5 "data/maps/Route110/scripts.pory"
.set LOCALID_BIRCH, 36
# 6 "data/maps/Route110/scripts.pory"

# 7 "data/maps/Route110/scripts.pory"
Route110_MapScripts::
# 8 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_OnResume
# 9 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_OnTransition
# 10 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_OnFrame
# 11 "data/maps/Route110/scripts.pory"
	.byte 0
# 12 "data/maps/Route110/scripts.pory"

# 13 "data/maps/Route110/scripts.pory"
Route110_OnResume:
# 14 "data/maps/Route110/scripts.pory"
	special UpdateCyclingRoadState
# 15 "data/maps/Route110/scripts.pory"
	end
# 16 "data/maps/Route110/scripts.pory"

# 17 "data/maps/Route110/scripts.pory"
Route110_OnTransition:
# 18 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 19 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 20 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_SaveCyclingMusic
# 21 "data/maps/Route110/scripts.pory"
	end
# 22 "data/maps/Route110/scripts.pory"

# 23 "data/maps/Route110/scripts.pory"
Route110_EventScript_SaveCyclingMusic::
# 24 "data/maps/Route110/scripts.pory"
	savebgm MUS_CYCLING
# 25 "data/maps/Route110/scripts.pory"
	return
# 26 "data/maps/Route110/scripts.pory"

# 27 "data/maps/Route110/scripts.pory"
Route110_OnFrame:
# 28 "data/maps/Route110/scripts.pory"
	map_script_2 VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_BeginCylcingRoadChallenge
# 29 "data/maps/Route110/scripts.pory"
	.2byte 0
# 30 "data/maps/Route110/scripts.pory"

# 31 "data/maps/Route110/scripts.pory"
Route110_EventScript_BeginCylcingRoadChallenge::
# 32 "data/maps/Route110/scripts.pory"
	special Special_BeginCyclingRoadChallenge
# 33 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 2
# 34 "data/maps/Route110/scripts.pory"
	return
# 35 "data/maps/Route110/scripts.pory"

# 36 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt1::
# 37 "data/maps/Route110/scripts.pory"
	lock
# 38 "data/maps/Route110/scripts.pory"
	faceplayer
# 39 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WeCantTalkAboutAquaActivities, MSGBOX_DEFAULT
# 40 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceUp
# 41 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route110/scripts.pory"
	release
# 43 "data/maps/Route110/scripts.pory"
	end
# 44 "data/maps/Route110/scripts.pory"

# 45 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt2::
# 46 "data/maps/Route110/scripts.pory"
	lock
# 47 "data/maps/Route110/scripts.pory"
	faceplayer
# 48 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KickUpARuckus, MSGBOX_DEFAULT
# 49 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceUp
# 50 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route110/scripts.pory"
	release
# 52 "data/maps/Route110/scripts.pory"
	end
# 53 "data/maps/Route110/scripts.pory"

# 54 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt3::
# 55 "data/maps/Route110/scripts.pory"
	lock
# 56 "data/maps/Route110/scripts.pory"
	faceplayer
# 57 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MyFirstJobInAqua, MSGBOX_DEFAULT
# 58 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceUp
# 59 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route110/scripts.pory"
	release
# 61 "data/maps/Route110/scripts.pory"
	end
# 62 "data/maps/Route110/scripts.pory"

# 63 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt4::
# 64 "data/maps/Route110/scripts.pory"
	lock
# 65 "data/maps/Route110/scripts.pory"
	faceplayer
# 66 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaActionsBringSmiles, MSGBOX_DEFAULT
# 67 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceUp
# 68 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route110/scripts.pory"
	release
# 70 "data/maps/Route110/scripts.pory"
	end
# 71 "data/maps/Route110/scripts.pory"

# 72 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy1::
# 73 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RideBikeAtFullSpeed, MSGBOX_NPC
# 74 "data/maps/Route110/scripts.pory"
	end
# 75 "data/maps/Route110/scripts.pory"

# 76 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGirl1::
# 77 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HairStreamsBehindMe, MSGBOX_NPC
# 78 "data/maps/Route110/scripts.pory"
	end
# 79 "data/maps/Route110/scripts.pory"

# 80 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy1::
# 81 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_YouGotBikeFromRydel, MSGBOX_NPC
# 82 "data/maps/Route110/scripts.pory"
	end
# 83 "data/maps/Route110/scripts.pory"

# 84 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldMan::
# 85 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TwoRoads, MSGBOX_NPC
# 86 "data/maps/Route110/scripts.pory"
	end
# 87 "data/maps/Route110/scripts.pory"

# 88 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldWoman::
# 89 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WalkOnTheLowRoad, MSGBOX_NPC
# 90 "data/maps/Route110/scripts.pory"
	end
# 91 "data/maps/Route110/scripts.pory"

# 92 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy2::
# 93 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BikeTechniques, MSGBOX_NPC
# 94 "data/maps/Route110/scripts.pory"
	end
# 95 "data/maps/Route110/scripts.pory"

# 96 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy2::
# 97 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WhichShouldIChoose, MSGBOX_NPC
# 98 "data/maps/Route110/scripts.pory"
	end
# 99 "data/maps/Route110/scripts.pory"

# 100 "data/maps/Route110/scripts.pory"
Route110_EventScript_SlateportCitySign::
# 101 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SlateportCitySign, MSGBOX_SIGN
# 102 "data/maps/Route110/scripts.pory"
	end
# 103 "data/maps/Route110/scripts.pory"

# 104 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadSign::
# 105 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingRoadSign, MSGBOX_SIGN
# 106 "data/maps/Route110/scripts.pory"
	end
# 107 "data/maps/Route110/scripts.pory"

# 108 "data/maps/Route110/scripts.pory"
Route110_EventScript_VandalizedSign::
# 109 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaWasHere, MSGBOX_SIGN
# 110 "data/maps/Route110/scripts.pory"
	end
# 111 "data/maps/Route110/scripts.pory"

# 112 "data/maps/Route110/scripts.pory"
Route110_EventScript_Route103Sign::
# 113 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_Route103Sign, MSGBOX_SIGN
# 114 "data/maps/Route110/scripts.pory"
	end
# 115 "data/maps/Route110/scripts.pory"

# 116 "data/maps/Route110/scripts.pory"
Route110_EventScript_SeasideParkingSign::
# 117 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SeasideParkingSign, MSGBOX_SIGN
# 118 "data/maps/Route110/scripts.pory"
	end
# 119 "data/maps/Route110/scripts.pory"

# 120 "data/maps/Route110/scripts.pory"
Route110_EventScript_MauvilleCitySign::
# 121 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MauvilleCitySign, MSGBOX_SIGN
# 122 "data/maps/Route110/scripts.pory"
	end
# 123 "data/maps/Route110/scripts.pory"

# 124 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsPrlzSleep::
# 125 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsPrlzSleep, MSGBOX_SIGN
# 126 "data/maps/Route110/scripts.pory"
	end
# 127 "data/maps/Route110/scripts.pory"

# 128 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsRegisterItems::
# 129 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsRegisterItems, MSGBOX_SIGN
# 130 "data/maps/Route110/scripts.pory"
	end
# 131 "data/maps/Route110/scripts.pory"

# 132 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrickHouseSign::
# 133 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrickHouseSign, MSGBOX_SIGN
# 134 "data/maps/Route110/scripts.pory"
	end
# 135 "data/maps/Route110/scripts.pory"

# 136 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadResultsSign::
# 137 "data/maps/Route110/scripts.pory"
	lockall
# 138 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetRecordedCyclingRoadResults
# 139 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_NoRecordSet
# 140 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BestRecord, MSGBOX_DEFAULT
# 141 "data/maps/Route110/scripts.pory"
	releaseall
# 142 "data/maps/Route110/scripts.pory"
	end
# 143 "data/maps/Route110/scripts.pory"

# 144 "data/maps/Route110/scripts.pory"
Route110_EventScript_NoRecordSet::
# 145 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ThereIsNoRecord, MSGBOX_DEFAULT
# 146 "data/maps/Route110/scripts.pory"
	releaseall
# 147 "data/maps/Route110/scripts.pory"
	end
# 148 "data/maps/Route110/scripts.pory"

# 149 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeGuy::
# 150 "data/maps/Route110/scripts.pory"
	lock
# 151 "data/maps/Route110/scripts.pory"
	faceplayer
# 152 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 153 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route110_EventScript_PlayerRidingAcroBike
# 154 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_CYCLING_CHALLENGE_STATE, 0, Route110_EventScript_PlayerNotRidingBike
# 155 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlwaysAimHigher, MSGBOX_DEFAULT
# 156 "data/maps/Route110/scripts.pory"
	release
# 157 "data/maps/Route110/scripts.pory"
	end
# 158 "data/maps/Route110/scripts.pory"

# 159 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerNotRidingBike::
# 160 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RatedForNumberOfCollisions, MSGBOX_DEFAULT
# 161 "data/maps/Route110/scripts.pory"
	release
# 162 "data/maps/Route110/scripts.pory"
	end
# 163 "data/maps/Route110/scripts.pory"

# 164 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerRidingAcroBike::
# 165 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AcroBikesDoNotQualify, MSGBOX_DEFAULT
# 166 "data/maps/Route110/scripts.pory"
	release
# 167 "data/maps/Route110/scripts.pory"
	end
# 168 "data/maps/Route110/scripts.pory"

# 169 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edward::
# 170 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWARD, Route110_Text_EdwardIntro, Route110_Text_EdwardDefeated
# 171 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
# 172 "data/maps/Route110/scripts.pory"
	end
# 173 "data/maps/Route110/scripts.pory"

# 174 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jaclyn::
# 175 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACLYN, Route110_Text_JaclynIntro, Route110_Text_JaclynDefeated
# 176 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
# 177 "data/maps/Route110/scripts.pory"
	end
# 178 "data/maps/Route110/scripts.pory"

# 179 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edwin::
# 180 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWIN_1, Route110_Text_EdwinIntro, Route110_Text_EdwinDefeated, Route110_EventScript_EdwinRegisterMatchCallAfterBattle
# 181 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 182 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_EdwinRematch
# 183 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinPostBattle, MSGBOX_DEFAULT
# 184 "data/maps/Route110/scripts.pory"
	release
# 185 "data/maps/Route110/scripts.pory"
	end
# 186 "data/maps/Route110/scripts.pory"

# 187 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRegisterMatchCallAfterBattle::
# 188 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 189 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 190 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRegister, MSGBOX_DEFAULT
# 191 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_EDWIN_1
# 192 "data/maps/Route110/scripts.pory"
	release
# 193 "data/maps/Route110/scripts.pory"
	end
# 194 "data/maps/Route110/scripts.pory"

# 195 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRematch::
# 196 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_EDWIN_1, Route110_Text_EdwinRematchIntro, Route110_Text_EdwinRematchDefeated
# 197 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRematchPostBattle, MSGBOX_AUTOCLOSE
# 198 "data/maps/Route110/scripts.pory"
	end
# 199 "data/maps/Route110/scripts.pory"

# 200 "data/maps/Route110/scripts.pory"
Route110_EventScript_Dale::
# 201 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_DALE, Route110_Text_DaleIntro, Route110_Text_DaleDefeated
# 202 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_DalePostBattle, MSGBOX_AUTOCLOSE
# 203 "data/maps/Route110/scripts.pory"
	end
# 204 "data/maps/Route110/scripts.pory"

# 205 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jacob::
# 206 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACOB, Route110_Text_JacobIntro, Route110_Text_JacobDefeated
# 207 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 208 "data/maps/Route110/scripts.pory"
	end
# 209 "data/maps/Route110/scripts.pory"

# 210 "data/maps/Route110/scripts.pory"
Route110_EventScript_Anthony::
# 211 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ANTHONY, Route110_Text_AnthonyIntro, Route110_Text_AnthonyDefeated
# 212 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 213 "data/maps/Route110/scripts.pory"
	end
# 214 "data/maps/Route110/scripts.pory"

# 215 "data/maps/Route110/scripts.pory"
Route110_EventScript_Benjamin::
# 216 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_BENJAMIN_1, Route110_Text_BenjaminIntro, Route110_Text_BenjaminDefeated, Route110_EventScript_BenjaminRegisterMatchCallAfterBattle
# 217 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 218 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_BenjaminRematch
# 219 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminPostBattle, MSGBOX_DEFAULT
# 220 "data/maps/Route110/scripts.pory"
	release
# 221 "data/maps/Route110/scripts.pory"
	end
# 222 "data/maps/Route110/scripts.pory"

# 223 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRegisterMatchCallAfterBattle::
# 224 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 225 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 226 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRegister, MSGBOX_DEFAULT
# 227 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_BENJAMIN_1
# 228 "data/maps/Route110/scripts.pory"
	release
# 229 "data/maps/Route110/scripts.pory"
	end
# 230 "data/maps/Route110/scripts.pory"

# 231 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRematch::
# 232 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_BENJAMIN_1, Route110_Text_BenjaminRematchIntro, Route110_Text_BenjaminRematchDefeated
# 233 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRematchPostBattle, MSGBOX_AUTOCLOSE
# 234 "data/maps/Route110/scripts.pory"
	end
# 235 "data/maps/Route110/scripts.pory"

# 236 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jasmine::
# 237 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, Route110_Text_JasmineIntro, Route110_Text_JasmineDefeated
# 238 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 239 "data/maps/Route110/scripts.pory"
	end
# 240 "data/maps/Route110/scripts.pory"

# 241 "data/maps/Route110/scripts.pory"
Route110_EventScript_Abigail::
# 242 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ABIGAIL_1, Route110_Text_AbigailIntro, Route110_Text_AbigailDefeated, Route110_EventScript_AbigailRegisterMatchCallAfterBattle
# 243 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 244 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_AbigailRematch
# 245 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailPostBattle, MSGBOX_DEFAULT
# 246 "data/maps/Route110/scripts.pory"
	release
# 247 "data/maps/Route110/scripts.pory"
	end
# 248 "data/maps/Route110/scripts.pory"

# 249 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRegisterMatchCallAfterBattle::
# 250 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 251 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 252 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRegister, MSGBOX_DEFAULT
# 253 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ABIGAIL_1
# 254 "data/maps/Route110/scripts.pory"
	release
# 255 "data/maps/Route110/scripts.pory"
	end
# 256 "data/maps/Route110/scripts.pory"

# 257 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRematch::
# 258 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ABIGAIL_1, Route110_Text_AbigailRematchIntro, Route110_Text_AbigailRematchDefeated
# 259 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRematchPostBattle, MSGBOX_AUTOCLOSE
# 260 "data/maps/Route110/scripts.pory"
	end
# 261 "data/maps/Route110/scripts.pory"

# 262 "data/maps/Route110/scripts.pory"
Route110_EventScript_Isabel::
# 263 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ISABEL_1, Route110_Text_IsabelIntro, Route110_Text_IsabelDefeated, Route110_EventScript_IsabelRegisterMatchCallAfterBattle
# 264 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 265 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_IsabelRematch
# 266 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelPostBattle, MSGBOX_DEFAULT
# 267 "data/maps/Route110/scripts.pory"
	release
# 268 "data/maps/Route110/scripts.pory"
	end
# 269 "data/maps/Route110/scripts.pory"

# 270 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRegisterMatchCallAfterBattle::
# 271 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 272 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 273 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRegister, MSGBOX_DEFAULT
# 274 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ISABEL_1
# 275 "data/maps/Route110/scripts.pory"
	release
# 276 "data/maps/Route110/scripts.pory"
	end
# 277 "data/maps/Route110/scripts.pory"

# 278 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRematch::
# 279 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ISABEL_1, Route110_Text_IsabelRematchIntro, Route110_Text_IsabelRematchDefeated
# 280 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRematchPostBattle, MSGBOX_AUTOCLOSE
# 281 "data/maps/Route110/scripts.pory"
	end
# 282 "data/maps/Route110/scripts.pory"

# 283 "data/maps/Route110/scripts.pory"
Route110_EventScript_Timmy::
# 284 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, Route110_Text_TimmyIntro, Route110_Text_TimmyDefeated
# 285 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
# 286 "data/maps/Route110/scripts.pory"
	end
# 287 "data/maps/Route110/scripts.pory"

# 288 "data/maps/Route110/scripts.pory"
Route110_EventScript_Unused::
# 289 "data/maps/Route110/scripts.pory"
	end
# 290 "data/maps/Route110/scripts.pory"

# 291 "data/maps/Route110/scripts.pory"
Route110_EventScript_Kaleb::
# 292 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_KALEB, Route110_Text_KalebIntro, Route110_Text_KalebDefeated
# 293 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
# 294 "data/maps/Route110/scripts.pory"
	end
# 295 "data/maps/Route110/scripts.pory"

# 296 "data/maps/Route110/scripts.pory"
Route110_EventScript_Joseph::
# 297 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH, Route110_Text_JosephIntro, Route110_Text_JosephDefeated
# 298 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 299 "data/maps/Route110/scripts.pory"
	end
# 300 "data/maps/Route110/scripts.pory"

# 301 "data/maps/Route110/scripts.pory"
Route110_EventScript_Alyssa::
# 302 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ALYSSA, Route110_Text_AlyssaIntro, Route110_Text_AlyssaDefeated
# 303 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
# 304 "data/maps/Route110/scripts.pory"
	end
# 305 "data/maps/Route110/scripts.pory"

# 306 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeEnd::
# 307 "data/maps/Route110/scripts.pory"
	lockall
# 308 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_CHALLENGE_BIKER, Common_Movement_WalkInPlaceRight
# 309 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 310 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_CyclingChallengeResults
# 311 "data/maps/Route110/scripts.pory"
	releaseall
# 312 "data/maps/Route110/scripts.pory"
	end
# 313 "data/maps/Route110/scripts.pory"

# 314 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults::
# 315 "data/maps/Route110/scripts.pory"
	special FinishCyclingRoadChallenge
# 316 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingChallengeResultSummary, MSGBOX_DEFAULT
# 317 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 318 "data/maps/Route110/scripts.pory"
	case 10, Route110_EventScript_ChallengeReactionBest
# 319 "data/maps/Route110/scripts.pory"
	case 9, Route110_EventScript_ChallengeReactionGood
# 320 "data/maps/Route110/scripts.pory"
	case 8, Route110_EventScript_ChallengeReactionGood
# 321 "data/maps/Route110/scripts.pory"
	case 7, Route110_EventScript_ChallengeReactionGood
# 322 "data/maps/Route110/scripts.pory"
	case 6, Route110_EventScript_ChallengeReactionOk
# 323 "data/maps/Route110/scripts.pory"
	case 5, Route110_EventScript_ChallengeReactionOk
# 324 "data/maps/Route110/scripts.pory"
	case 4, Route110_EventScript_ChallengeReactionOk
# 325 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_ChallengeReactionBad
# 326 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_ChallengeReactionBad
# 327 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_ChallengeReactionBad
# 328 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_ChallengeReactionWorst
# 329 "data/maps/Route110/scripts.pory"
	end
# 330 "data/maps/Route110/scripts.pory"

# 331 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionOk::
# 332 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionOk, MSGBOX_DEFAULT
# 333 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 334 "data/maps/Route110/scripts.pory"
	end
# 335 "data/maps/Route110/scripts.pory"

# 336 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBad::
# 337 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBad, MSGBOX_DEFAULT
# 338 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 339 "data/maps/Route110/scripts.pory"
	end
# 340 "data/maps/Route110/scripts.pory"

# 341 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionWorst::
# 342 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionWorst, MSGBOX_DEFAULT
# 343 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 344 "data/maps/Route110/scripts.pory"
	end
# 345 "data/maps/Route110/scripts.pory"

# 346 "data/maps/Route110/scripts.pory"
Route110_EventScript_EndChallenge::
# 347 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 3
# 348 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 349 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 350 "data/maps/Route110/scripts.pory"
	return
# 351 "data/maps/Route110/scripts.pory"

# 352 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger1::
# 353 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 354 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 355 "data/maps/Route110/scripts.pory"
	end
# 356 "data/maps/Route110/scripts.pory"

# 357 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger2::
# 358 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 359 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 360 "data/maps/Route110/scripts.pory"
	end
# 361 "data/maps/Route110/scripts.pory"

# 362 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger3::
# 363 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 364 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 365 "data/maps/Route110/scripts.pory"
	end
# 366 "data/maps/Route110/scripts.pory"

# 367 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene::
# 368 "data/maps/Route110/scripts.pory"
	lockall
# 369 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceDown
# 370 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 371 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 372 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 373 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 374 "data/maps/Route110/scripts.pory"
	waitse
# 375 "data/maps/Route110/scripts.pory"
	checkplayergender
# 376 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route110_EventScript_PlayMayMusic
# 377 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route110_EventScript_PlayBrendanMusic
# 378 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 379 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 380 "data/maps/Route110/scripts.pory"
	delay 30
# 381 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalApproachPlayer1
# 382 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalApproachPlayer2
# 383 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalApproachPlayer3
# 384 "data/maps/Route110/scripts.pory"
	checkplayergender
# 385 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route110_EventScript_MayBattle
# 386 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route110_EventScript_BrendanBattle
# 387 "data/maps/Route110/scripts.pory"
	releaseall
# 388 "data/maps/Route110/scripts.pory"
	end
# 389 "data/maps/Route110/scripts.pory"

# 390 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayMayMusic::
# 391 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 392 "data/maps/Route110/scripts.pory"
	return
# 393 "data/maps/Route110/scripts.pory"

# 394 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayBrendanMusic::
# 395 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 396 "data/maps/Route110/scripts.pory"
	return
# 397 "data/maps/Route110/scripts.pory"

# 398 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattle::
# 399 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayRoute110Intro, MSGBOX_DEFAULT
# 400 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayLetsBattle, MSGBOX_DEFAULT
# 401 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 402 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_MayBattleTreecko
# 403 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_MayBattleTorchic
# 404 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_MayBattleMudkip
# 405 "data/maps/Route110/scripts.pory"
	end
# 406 "data/maps/Route110/scripts.pory"

# 407 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTreecko::
# 408 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TREECKO, Route110_Text_MayDefeated
# 409 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 410 "data/maps/Route110/scripts.pory"
	end
# 411 "data/maps/Route110/scripts.pory"

# 412 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTorchic::
# 413 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TORCHIC, Route110_Text_MayDefeated
# 414 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 415 "data/maps/Route110/scripts.pory"
	end
# 416 "data/maps/Route110/scripts.pory"

# 417 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleMudkip::
# 418 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, Route110_Text_MayDefeated
# 419 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 420 "data/maps/Route110/scripts.pory"
	end
# 421 "data/maps/Route110/scripts.pory"

# 422 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayDefeated::
# 423 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayMonWornOut, MSGBOX_DEFAULT
# 424 "data/maps/Route110/scripts.pory"
	closemessage
# 425 "data/maps/Route110/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 426 "data/maps/Route110/scripts.pory"
	special HealPlayerParty
# 427 "data/maps/Route110/scripts.pory"
	playse SE_USE_ITEM
# 428 "data/maps/Route110/scripts.pory"
	waitse
# 429 "data/maps/Route110/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 430 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MonHPRestored, MSGBOX_DEFAULT
# 431 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayTakeThis, MSGBOX_DEFAULT
# 432 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 433 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayExplainItemfinder, MSGBOX_DEFAULT
# 434 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 435 "data/maps/Route110/scripts.pory"
	end
# 436 "data/maps/Route110/scripts.pory"

# 437 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattle::
# 438 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanRoute110Intro, MSGBOX_DEFAULT
# 439 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 440 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 441 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_BrendanBattleTreecko
# 442 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_BrendanBattleTorchic
# 443 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_BrendanBattleMudkip
# 444 "data/maps/Route110/scripts.pory"
	end
# 445 "data/maps/Route110/scripts.pory"

# 446 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTreecko::
# 447 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, Route110_Text_BrendanDefeated
# 448 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 449 "data/maps/Route110/scripts.pory"
	end
# 450 "data/maps/Route110/scripts.pory"

# 451 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTorchic::
# 452 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, Route110_Text_BrendanDefeated
# 453 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 454 "data/maps/Route110/scripts.pory"
	end
# 455 "data/maps/Route110/scripts.pory"

# 456 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleMudkip::
# 457 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_MUDKIP, Route110_Text_BrendanDefeated
# 458 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 459 "data/maps/Route110/scripts.pory"
	end
# 460 "data/maps/Route110/scripts.pory"

# 461 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanDefeated::
# 462 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanMonWornOut, MSGBOX_DEFAULT
# 463 "data/maps/Route110/scripts.pory"
	closemessage
# 464 "data/maps/Route110/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 465 "data/maps/Route110/scripts.pory"
	special HealPlayerParty
# 466 "data/maps/Route110/scripts.pory"
	playse SE_USE_ITEM
# 467 "data/maps/Route110/scripts.pory"
	waitse
# 468 "data/maps/Route110/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 469 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MonHPRestored, MSGBOX_DEFAULT
# 470 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanTakeThis, MSGBOX_DEFAULT
# 471 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 472 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanExplainItemfinder, MSGBOX_DEFAULT
# 473 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 474 "data/maps/Route110/scripts.pory"
	end
# 475 "data/maps/Route110/scripts.pory"

# 476 "data/maps/Route110/scripts.pory"
Route110_EventScript_GiveItemfinder::
# 477 "data/maps/Route110/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 478 "data/maps/Route110/scripts.pory"
	return
# 479 "data/maps/Route110/scripts.pory"

# 480 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit::
# 481 "data/maps/Route110/scripts.pory"
	closemessage
# 482 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_MoveRival1
# 483 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_MoveRival2
# 484 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_MoveRival3
# 485 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_RIGHT
# 486 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_RIGHT
# 487 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_RIVAL
# 488 "data/maps/Route110/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 489 "data/maps/Route110/scripts.pory"
	delay 45
# 490 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalExit1
# 491 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalExit2
# 492 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalExit3
# 493 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 494 "data/maps/Route110/scripts.pory"
	setvar VAR_ROUTE110_STATE, 1
# 495 "data/maps/Route110/scripts.pory"
	setvar VAR_LEVEL_CAP_VARIABLE, 36
# 496 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 497 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 498 "data/maps/Route110/scripts.pory"
	releaseall
# 499 "data/maps/Route110/scripts.pory"
	end
# 500 "data/maps/Route110/scripts.pory"

# 501 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer1::
# 502 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer1
# 503 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 504 "data/maps/Route110/scripts.pory"
	return
# 505 "data/maps/Route110/scripts.pory"

# 506 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer2::
# 507 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer2
# 508 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 509 "data/maps/Route110/scripts.pory"
	return
# 510 "data/maps/Route110/scripts.pory"

# 511 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer3::
# 512 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer3
# 513 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 514 "data/maps/Route110/scripts.pory"
	return
# 515 "data/maps/Route110/scripts.pory"

# 516 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit1::
# 517 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit1
# 518 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 519 "data/maps/Route110/scripts.pory"
	return
# 520 "data/maps/Route110/scripts.pory"

# 521 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit2::
# 522 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit2
# 523 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 524 "data/maps/Route110/scripts.pory"
	return
# 525 "data/maps/Route110/scripts.pory"

# 526 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit3::
# 527 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit3
# 528 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 529 "data/maps/Route110/scripts.pory"
	return
# 530 "data/maps/Route110/scripts.pory"

# 531 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival1::
# 532 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 33, 55
# 533 "data/maps/Route110/scripts.pory"
	return
# 534 "data/maps/Route110/scripts.pory"

# 535 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival2::
# 536 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 34, 55
# 537 "data/maps/Route110/scripts.pory"
	return
# 538 "data/maps/Route110/scripts.pory"

# 539 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival3::
# 540 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 35, 55
# 541 "data/maps/Route110/scripts.pory"
	return
# 542 "data/maps/Route110/scripts.pory"

# 543 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer1:
# 544 "data/maps/Route110/scripts.pory"
	walk_down
# 545 "data/maps/Route110/scripts.pory"
	walk_left
# 546 "data/maps/Route110/scripts.pory"
	walk_in_place_down
# 547 "data/maps/Route110/scripts.pory"
	step_end
# 548 "data/maps/Route110/scripts.pory"

# 549 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer2:
# 550 "data/maps/Route110/scripts.pory"
	walk_down
# 551 "data/maps/Route110/scripts.pory"
	step_end
# 552 "data/maps/Route110/scripts.pory"

# 553 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer3:
# 554 "data/maps/Route110/scripts.pory"
	walk_down
# 555 "data/maps/Route110/scripts.pory"
	walk_right
# 556 "data/maps/Route110/scripts.pory"
	walk_in_place_down
# 557 "data/maps/Route110/scripts.pory"
	step_end
# 558 "data/maps/Route110/scripts.pory"

# 559 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit1:
# 560 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 561 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 562 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 563 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 564 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 565 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 566 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 567 "data/maps/Route110/scripts.pory"
	step_end
# 568 "data/maps/Route110/scripts.pory"

# 569 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit2:
# 570 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 571 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 572 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 573 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 574 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 575 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 576 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 577 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 578 "data/maps/Route110/scripts.pory"
	step_end
# 579 "data/maps/Route110/scripts.pory"

# 580 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit3:
# 581 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 582 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 583 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 584 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 585 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 586 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 587 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 588 "data/maps/Route110/scripts.pory"
	step_end
# 589 "data/maps/Route110/scripts.pory"

# 590 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene1::
# 591 "data/maps/Route110/scripts.pory"
	lockall
# 592 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 593 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 594 "data/maps/Route110/scripts.pory"

# 595 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene2::
# 596 "data/maps/Route110/scripts.pory"
	lockall
# 597 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 598 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 599 "data/maps/Route110/scripts.pory"

# 600 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene3::
# 601 "data/maps/Route110/scripts.pory"
	lockall
# 602 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 603 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 604 "data/maps/Route110/scripts.pory"

# 605 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene4::
# 606 "data/maps/Route110/scripts.pory"
	lockall
# 607 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 608 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 609 "data/maps/Route110/scripts.pory"

# 610 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene::
# 611 "data/maps/Route110/scripts.pory"
	addobject LOCALID_BIRCH
# 612 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchEntrance
# 613 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 614 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 615 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 616 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 617 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_Delay48
# 618 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 619 "data/maps/Route110/scripts.pory"
    applymovement LOCALID_BIRCH, Route110_Movement_BirchNoticePlayer
# 620 "data/maps/Route110/scripts.pory"
    waitmovement 0
# 621 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchApproachPlayer1
# 622 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchApproachPlayer2
# 623 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchApproachPlayer3
# 624 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchApproachPlayer4
# 625 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 626 "data/maps/Route110/scripts.pory"
	closemessage
# 627 "data/maps/Route110/scripts.pory"
	delay 20
# 628 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceLeft
# 629 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 630 "data/maps/Route110/scripts.pory"
	delay 10
# 631 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceRight
# 632 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 633 "data/maps/Route110/scripts.pory"
	delay 20
# 634 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceDown
# 635 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 636 "data/maps/Route110/scripts.pory"
	delay 30
# 637 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 638 "data/maps/Route110/scripts.pory"
	closemessage
# 639 "data/maps/Route110/scripts.pory"
	delay 30
# 640 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 641 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RegisteredBirchInPokenav, MSGBOX_DEFAULT
# 642 "data/maps/Route110/scripts.pory"
	waitfanfare
# 643 "data/maps/Route110/scripts.pory"
	closemessage
# 644 "data/maps/Route110/scripts.pory"
	delay 30
# 645 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 646 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 647 "data/maps/Route110/scripts.pory"
	closemessage
# 648 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchExit1
# 649 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchExit2
# 650 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchExit3
# 651 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchExit4
# 652 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_BIRCH
# 653 "data/maps/Route110/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 654 "data/maps/Route110/scripts.pory"
	releaseall
# 655 "data/maps/Route110/scripts.pory"
	end
# 656 "data/maps/Route110/scripts.pory"

# 657 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer1::
# 658 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer1
# 659 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 660 "data/maps/Route110/scripts.pory"
	return
# 661 "data/maps/Route110/scripts.pory"

# 662 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer2::
# 663 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer2
# 664 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 665 "data/maps/Route110/scripts.pory"
	return
# 666 "data/maps/Route110/scripts.pory"

# 667 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer3::
# 668 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer3
# 669 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 670 "data/maps/Route110/scripts.pory"
	return
# 671 "data/maps/Route110/scripts.pory"

# 672 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer4::
# 673 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer4
# 674 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 675 "data/maps/Route110/scripts.pory"
	return
# 676 "data/maps/Route110/scripts.pory"

# 677 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit1::
# 678 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit1
# 679 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 680 "data/maps/Route110/scripts.pory"
	return
# 681 "data/maps/Route110/scripts.pory"

# 682 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit2::
# 683 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit2
# 684 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 685 "data/maps/Route110/scripts.pory"
	return
# 686 "data/maps/Route110/scripts.pory"

# 687 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit3::
# 688 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit3
# 689 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 690 "data/maps/Route110/scripts.pory"
	return
# 691 "data/maps/Route110/scripts.pory"

# 692 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit4::
# 693 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit4
# 694 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 695 "data/maps/Route110/scripts.pory"
	return
# 696 "data/maps/Route110/scripts.pory"

# 697 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchEntrance:
# 698 "data/maps/Route110/scripts.pory"
	walk_down
# 699 "data/maps/Route110/scripts.pory"
	walk_down
# 700 "data/maps/Route110/scripts.pory"
	walk_down
# 701 "data/maps/Route110/scripts.pory"
	step_end
# 702 "data/maps/Route110/scripts.pory"

# 703 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchNoticePlayer:
# 704 "data/maps/Route110/scripts.pory"
    walk_in_place_up
# 705 "data/maps/Route110/scripts.pory"
    delay_16
# 706 "data/maps/Route110/scripts.pory"
    delay_8
# 707 "data/maps/Route110/scripts.pory"
    emote_question_mark
# 708 "data/maps/Route110/scripts.pory"
    walk_in_place_down
# 709 "data/maps/Route110/scripts.pory"
    delay_8
# 710 "data/maps/Route110/scripts.pory"
    step_end
# 711 "data/maps/Route110/scripts.pory"

# 712 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer1:
# 713 "data/maps/Route110/scripts.pory"
	walk_down
# 714 "data/maps/Route110/scripts.pory"
	walk_left
# 715 "data/maps/Route110/scripts.pory"
	walk_left
# 716 "data/maps/Route110/scripts.pory"
	walk_down
# 717 "data/maps/Route110/scripts.pory"
	step_end
# 718 "data/maps/Route110/scripts.pory"

# 719 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer2:
# 720 "data/maps/Route110/scripts.pory"
	walk_down
# 721 "data/maps/Route110/scripts.pory"
	walk_left
# 722 "data/maps/Route110/scripts.pory"
	walk_down
# 723 "data/maps/Route110/scripts.pory"
	step_end
# 724 "data/maps/Route110/scripts.pory"

# 725 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer3:
# 726 "data/maps/Route110/scripts.pory"
	walk_down
# 727 "data/maps/Route110/scripts.pory"
	walk_down
# 728 "data/maps/Route110/scripts.pory"
	step_end
# 729 "data/maps/Route110/scripts.pory"

# 730 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer4:
# 731 "data/maps/Route110/scripts.pory"
	walk_down
# 732 "data/maps/Route110/scripts.pory"
	walk_right
# 733 "data/maps/Route110/scripts.pory"
	walk_down
# 734 "data/maps/Route110/scripts.pory"
	step_end
# 735 "data/maps/Route110/scripts.pory"

# 736 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit1:
# 737 "data/maps/Route110/scripts.pory"
	walk_up
# 738 "data/maps/Route110/scripts.pory"
	walk_up
# 739 "data/maps/Route110/scripts.pory"
	walk_right
# 740 "data/maps/Route110/scripts.pory"
	walk_up
# 741 "data/maps/Route110/scripts.pory"
	walk_up
# 742 "data/maps/Route110/scripts.pory"
	walk_up
# 743 "data/maps/Route110/scripts.pory"
	step_end
# 744 "data/maps/Route110/scripts.pory"

# 745 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit2:
# 746 "data/maps/Route110/scripts.pory"
	walk_up
# 747 "data/maps/Route110/scripts.pory"
	walk_up
# 748 "data/maps/Route110/scripts.pory"
	walk_up
# 749 "data/maps/Route110/scripts.pory"
	walk_up
# 750 "data/maps/Route110/scripts.pory"
	walk_up
# 751 "data/maps/Route110/scripts.pory"
	step_end
# 752 "data/maps/Route110/scripts.pory"

# 753 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit3:
# 754 "data/maps/Route110/scripts.pory"
	walk_up
# 755 "data/maps/Route110/scripts.pory"
	walk_up
# 756 "data/maps/Route110/scripts.pory"
	walk_up
# 757 "data/maps/Route110/scripts.pory"
	walk_up
# 758 "data/maps/Route110/scripts.pory"
	walk_up
# 759 "data/maps/Route110/scripts.pory"
	step_end
# 760 "data/maps/Route110/scripts.pory"

# 761 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit4:
# 762 "data/maps/Route110/scripts.pory"
	walk_up
# 763 "data/maps/Route110/scripts.pory"
	walk_up
# 764 "data/maps/Route110/scripts.pory"
	walk_up
# 765 "data/maps/Route110/scripts.pory"
	walk_up
# 766 "data/maps/Route110/scripts.pory"
	walk_up
# 767 "data/maps/Route110/scripts.pory"
	step_end
# 768 "data/maps/Route110/scripts.pory"

# 769 "data/maps/Route110/scripts.pory"
Route110_Text_WeCantTalkAboutAquaActivities:
# 770 "data/maps/Route110/scripts.pory"
	.string "Team Aqua's activities…\nWe can't talk about them yet.$"
# 771 "data/maps/Route110/scripts.pory"

# 772 "data/maps/Route110/scripts.pory"
Route110_Text_KickUpARuckus:
# 773 "data/maps/Route110/scripts.pory"
	.string "I want to get going to Slateport and\nkick up a ruckus!$"
# 774 "data/maps/Route110/scripts.pory"

# 775 "data/maps/Route110/scripts.pory"
Route110_Text_MyFirstJobInAqua:
# 776 "data/maps/Route110/scripts.pory"
	.string "This is my first job after joining\nTeam Aqua.\pIt's a little scary.$"
# 777 "data/maps/Route110/scripts.pory"

# 778 "data/maps/Route110/scripts.pory"
Route110_Text_AquaActionsBringSmiles:
# 779 "data/maps/Route110/scripts.pory"
	.string "Team Aqua's actions should bring\nsmiles to people's faces!$"
# 780 "data/maps/Route110/scripts.pory"

# 781 "data/maps/Route110/scripts.pory"
Route110_Text_MayRoute110Intro:
# 782 "data/maps/Route110/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Hey, {PLAYER}!\nIt's been ages!\lNice, timing, too.\pI was just searching for Pokémon, you\nknow?\pMy dad is always going on about how\nnature used to be even more diverse,\lway back in the day.\pHe says that there used to be way more\nkinds of Pokémon that there are now!\pSo that's why we do fieldwork, him and\nme.\pWe really want to find out what\nhappened to those Pokémon in the\lpast.\pOn my journey up to now, I've met a\nlot of different Pokémon, and I think\lI've gotten to understand a lot of\lthem, too.$"
# 783 "data/maps/Route110/scripts.pory"

# 784 "data/maps/Route110/scripts.pory"
Route110_Text_MayLetsBattle:
# 785 "data/maps/Route110/scripts.pory"
	.string "Me and my Pokémon have really grown.\nSo… How about a little battle?$"
# 786 "data/maps/Route110/scripts.pory"

# 787 "data/maps/Route110/scripts.pory"
Route110_Text_MayDefeated:
# 788 "data/maps/Route110/scripts.pory"
	.string "Yikes!\nYou're better than I expected!$"
# 789 "data/maps/Route110/scripts.pory"

# 790 "data/maps/Route110/scripts.pory"
Route110_Text_MayMonWornOut:
# 791 "data/maps/Route110/scripts.pory"
	.string "{PLAYER}, you've been busy training,\ntoo, haven't you?\pOops!\nBut look at us!\lOur teams looks pretty tired.\lLet's get them taken care of first.$"
# 792 "data/maps/Route110/scripts.pory"

# 793 "data/maps/Route110/scripts.pory"
Route110_Text_MayTakeThis:
# 794 "data/maps/Route110/scripts.pory"
	.string "And now I think you deserve a reward,\ntoo!\pHere, this is from me!$"
# 795 "data/maps/Route110/scripts.pory"

# 796 "data/maps/Route110/scripts.pory"
Route110_Text_MayExplainItemfinder:
# 797 "data/maps/Route110/scripts.pory"
	.string "That's a {COLOR BLUE}Dowsing Machine{COLOR DARK_GRAY}.\pTry it out-if there's a hidden item\nanywhere near you, that little thing\lwill react to tell you.\pPay attention, and it'll lead you right\nto items!\pAnd it's fun to see all those waving\nbits above your head.\lTry it, and I bet you'll get hooked!\pCareful--you won't be able to sneak\nup on Pokémon while you wear it!\pSee you later then, {PLAYER}!\nLet's meet again!\pI hope we'll both be able to meet even\nmore Pokémon on our journeys!$"
# 798 "data/maps/Route110/scripts.pory"

# 799 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanRoute110Intro:
# 800 "data/maps/Route110/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: Hey, {PLAYER}.\nSo this is where you've been.\lHow've things been going?\pI was just checking out the Pokémon\naround here to help with my dad's\lresearch.\pHe says that long, long time ago,\nnature used to be way more diverse\land there were lots more kinds of\lPokémon, too.\pMy dad and I want to learn more about\nthose Pokémon from the past, you\lknow? That's why we do fieldwork.\lAnd this journey has really helped.\pI've met a lot of Pokémon on my way\nhere and learned about them, too.$"
# 801 "data/maps/Route110/scripts.pory"

# 802 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanLetsBattle:
# 803 "data/maps/Route110/scripts.pory"
	.string "Which reminds me!\pCome on! It's the first time we've met\nin ages, so let's have a battle!\pShow me what you and your team\nhave accomplished on your journey,\l{PLAYER}!$"
# 804 "data/maps/Route110/scripts.pory"

# 805 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanDefeated:
# 806 "data/maps/Route110/scripts.pory"
	.string "Whoa!\nNot bad!$"
# 807 "data/maps/Route110/scripts.pory"

# 808 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanMonWornOut:
# 809 "data/maps/Route110/scripts.pory"
	.string "Sheesh, {PLAYER}, when did you go and\ntrain your Pokémon up that well?\pIt's like, I don't know…\nIt's pretty surprising, OK!\pBoth our teams look pretty wiped out\nafter that, huh!\lHere, let me help them out.$"
# 810 "data/maps/Route110/scripts.pory"

# 811 "data/maps/Route110/scripts.pory"
Route110_Text_MonHPRestored:
# 812 "data/maps/Route110/scripts.pory"
	.string "You had your Pokémon's HP restored!$"
# 813 "data/maps/Route110/scripts.pory"

# 814 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanTakeThis:
# 815 "data/maps/Route110/scripts.pory"
	.string "And this is for you.$"
# 816 "data/maps/Route110/scripts.pory"

# 817 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanExplainItemfinder:
# 818 "data/maps/Route110/scripts.pory"
	.string "That's a {COLOR BLUE}Dowsing Machine{COLOR DARK_GRAY}.\pUse it to root around for items that\naren't visible.\pIf it senses something nearby, it'll\nreact, see?\pTruth is, once I started using it, I\ngot pretty hooked on it.\lIt's addicting!\lBut I recommend you give it a try.\pCareful though, you won't be able to\nsneak up on Pokémon while you wear it!\pI guess I'm off to get started\nsurveying the next area then.\pI hope you meet a lot of Pokémon, too,\n{PLAYER}!$"
# 819 "data/maps/Route110/scripts.pory"

# 820 "data/maps/Route110/scripts.pory"
Route110_Text_RideBikeAtFullSpeed:
# 821 "data/maps/Route110/scripts.pory"
	.string "Wouldn't it be great to ride a Bike\nat full speed on the Cycling Road?$"
# 822 "data/maps/Route110/scripts.pory"

# 823 "data/maps/Route110/scripts.pory"
Route110_Text_HairStreamsBehindMe:
# 824 "data/maps/Route110/scripts.pory"
	.string "How do you like the way my raven-\n"
# 825 "data/maps/Route110/scripts.pory"
	.string "colored hair streams behind me?\p"
# 826 "data/maps/Route110/scripts.pory"
	.string "I grew my hair out just for that.$"
# 827 "data/maps/Route110/scripts.pory"

# 828 "data/maps/Route110/scripts.pory"
Route110_Text_YouGotBikeFromRydel:
# 829 "data/maps/Route110/scripts.pory"
	.string "Oh, hey, you got that Bike from Rydel!\p"
# 830 "data/maps/Route110/scripts.pory"
	.string "Oh, it's glaringly obvious.\n"
# 831 "data/maps/Route110/scripts.pory"
	.string "It says right on your bike…\p"
# 832 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\n"
# 833 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\p"
# 834 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\n"
# 835 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\p"
# 836 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\n"
# 837 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\p"
# 838 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\n"
# 839 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\p"
# 840 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel…\n"
# 841 "data/maps/Route110/scripts.pory"
	.string "That name's everywhere.\p"
# 842 "data/maps/Route110/scripts.pory"
	.string "You should ride it around all over\n"
# 843 "data/maps/Route110/scripts.pory"
	.string "the place-it's good advertising!$"
# 844 "data/maps/Route110/scripts.pory"

# 845 "data/maps/Route110/scripts.pory"
Route110_Text_TwoRoads:
# 846 "data/maps/Route110/scripts.pory"
	.string "The two roads, one above, one below…\p"
# 847 "data/maps/Route110/scripts.pory"
	.string "A road each for people and Pokémon.\n"
# 848 "data/maps/Route110/scripts.pory"
	.string "Perhaps that is right and fair.$"
# 849 "data/maps/Route110/scripts.pory"

# 850 "data/maps/Route110/scripts.pory"
Route110_Text_WalkOnTheLowRoad:
# 851 "data/maps/Route110/scripts.pory"
	.string "I don't have a Bike, so I'll take\n"
# 852 "data/maps/Route110/scripts.pory"
	.string "a leisurely walk on the low road.$"
# 853 "data/maps/Route110/scripts.pory"

# 854 "data/maps/Route110/scripts.pory"
Route110_Text_BikeTechniques:
# 855 "data/maps/Route110/scripts.pory"
	.string "Learning techniques will make Bike\n"
# 856 "data/maps/Route110/scripts.pory"
	.string "riding even more fun.\p"
# 857 "data/maps/Route110/scripts.pory"
	.string "There are some places that you can\n"
# 858 "data/maps/Route110/scripts.pory"
	.string "reach only by using a Bike technique.$"
# 859 "data/maps/Route110/scripts.pory"

# 860 "data/maps/Route110/scripts.pory"
Route110_Text_WhichShouldIChoose:
# 861 "data/maps/Route110/scripts.pory"
	.string "Which should I choose?\pMake a beeline for Mauville on the\nCycling Road, or take the low road\land look for Pokémon?$"
# 862 "data/maps/Route110/scripts.pory"

# 863 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingChallengeResultSummary:
# 864 "data/maps/Route110/scripts.pory"
	.string "Number of collisions:\n"
# 865 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_1}!\p"
# 866 "data/maps/Route110/scripts.pory"
	.string "Total time:\n"
# 867 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_2}!$"
# 868 "data/maps/Route110/scripts.pory"

# 869 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionOk:
# 870 "data/maps/Route110/scripts.pory"
	.string "I would consider you a work in\n"
# 871 "data/maps/Route110/scripts.pory"
	.string "progress.\p"
# 872 "data/maps/Route110/scripts.pory"
	.string "Still, I hope you don't forget the\n"
# 873 "data/maps/Route110/scripts.pory"
	.string "sheer pleasure of cycling.$"
# 874 "data/maps/Route110/scripts.pory"

# 875 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBad:
# 876 "data/maps/Route110/scripts.pory"
	.string "My word… Your cycling skills border\n"
# 877 "data/maps/Route110/scripts.pory"
	.string "on terrifying.\p"
# 878 "data/maps/Route110/scripts.pory"
	.string "Most certainly, you need much more\n"
# 879 "data/maps/Route110/scripts.pory"
	.string "practice riding.$"
# 880 "data/maps/Route110/scripts.pory"

# 881 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionWorst:
# 882 "data/maps/Route110/scripts.pory"
	.string "…I am aghast…\p"
# 883 "data/maps/Route110/scripts.pory"
	.string "You're perhaps not cut out for this\n"
# 884 "data/maps/Route110/scripts.pory"
	.string "unfortunate cycling business.\p"
# 885 "data/maps/Route110/scripts.pory"
	.string "You ought to give serious thought to\n"
# 886 "data/maps/Route110/scripts.pory"
	.string "returning that Bike to Rydel.$"
# 887 "data/maps/Route110/scripts.pory"

# 888 "data/maps/Route110/scripts.pory"
Route110_Text_RatedForNumberOfCollisions:
# 889 "data/maps/Route110/scripts.pory"
	.string "This is Cycling Road.\p"
# 890 "data/maps/Route110/scripts.pory"
	.string "If you were to ride from Mauville to\n"
# 891 "data/maps/Route110/scripts.pory"
	.string "Slateport on a Mach Bike, you would\l"
# 892 "data/maps/Route110/scripts.pory"
	.string "be rated for the number of collisions\l"
# 893 "data/maps/Route110/scripts.pory"
	.string "and your total time.$"
# 894 "data/maps/Route110/scripts.pory"

# 895 "data/maps/Route110/scripts.pory"
Route110_Text_AlwaysAimHigher:
# 896 "data/maps/Route110/scripts.pory"
	.string "Regardless of the results, I count on\n"
# 897 "data/maps/Route110/scripts.pory"
	.string "seeing more challenges from you.\l"
# 898 "data/maps/Route110/scripts.pory"
	.string "Always aim higher!$"
# 899 "data/maps/Route110/scripts.pory"

# 900 "data/maps/Route110/scripts.pory"
Route110_Text_AcroBikesDoNotQualify:
# 901 "data/maps/Route110/scripts.pory"
	.string "On this Cycling Road, those riding\n"
# 902 "data/maps/Route110/scripts.pory"
	.string "Mach Bikes are rated for their number\l"
# 903 "data/maps/Route110/scripts.pory"
	.string "of collisions and their total times.\p"
# 904 "data/maps/Route110/scripts.pory"
	.string "Acro Bikes do not qualify for rating.\n"
# 905 "data/maps/Route110/scripts.pory"
	.string "They are easy to turn, so it's not fair.$"
# 906 "data/maps/Route110/scripts.pory"

# 907 "data/maps/Route110/scripts.pory"
Route110_Text_SlateportCitySign:
# 908 "data/maps/Route110/scripts.pory"
	.string "Route 110\n"
# 909 "data/maps/Route110/scripts.pory"
	.string "{DOWN_ARROW} Slateport City$"
# 910 "data/maps/Route110/scripts.pory"

# 911 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingRoadSign:
# 912 "data/maps/Route110/scripts.pory"
	.string "Seaside Cycling Road$"
# 913 "data/maps/Route110/scripts.pory"

# 914 "data/maps/Route110/scripts.pory"
Route110_Text_AquaWasHere:
# 915 "data/maps/Route110/scripts.pory"
	.string "“Team Aqua was here!”\p"
# 916 "data/maps/Route110/scripts.pory"
	.string "Someone painted that onto this sign,\n"
# 917 "data/maps/Route110/scripts.pory"
	.string "but then someone else painted over it.\p"
# 918 "data/maps/Route110/scripts.pory"
	.string "“Team Magma rules!” is what it\n"
# 919 "data/maps/Route110/scripts.pory"
	.string "says now.$"
# 920 "data/maps/Route110/scripts.pory"

# 921 "data/maps/Route110/scripts.pory"
Route110_Text_Route103Sign:
# 922 "data/maps/Route110/scripts.pory"
	.string "Route 110\n"
# 923 "data/maps/Route110/scripts.pory"
	.string "{LEFT_ARROW} Route 103$"
# 924 "data/maps/Route110/scripts.pory"

# 925 "data/maps/Route110/scripts.pory"
Route110_Text_SeasideParkingSign:
# 926 "data/maps/Route110/scripts.pory"
	.string "Seaside Parking$"
# 927 "data/maps/Route110/scripts.pory"

# 928 "data/maps/Route110/scripts.pory"
Route110_Text_MauvilleCitySign:
# 929 "data/maps/Route110/scripts.pory"
	.string "Route 110\n"
# 930 "data/maps/Route110/scripts.pory"
	.string "{UP_ARROW} Mauville City$"
# 931 "data/maps/Route110/scripts.pory"

# 932 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsPrlzSleep:
# 933 "data/maps/Route110/scripts.pory"
	.string "Trainer Tips\p"
# 934 "data/maps/Route110/scripts.pory"
	.string "The foe can be made helpless by\n"
# 935 "data/maps/Route110/scripts.pory"
	.string "paralyzing it or causing it to sleep.\p"
# 936 "data/maps/Route110/scripts.pory"
	.string "It is an important technique for\n"
# 937 "data/maps/Route110/scripts.pory"
	.string "Pokémon battles.$"
# 938 "data/maps/Route110/scripts.pory"

# 939 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsRegisterItems:
# 940 "data/maps/Route110/scripts.pory"
	.string "Trainer Tips\p"
# 941 "data/maps/Route110/scripts.pory"
	.string "The items in the Bag can be reorganized\n"
# 942 "data/maps/Route110/scripts.pory"
	.string "by pressing Select.$"
# 943 "data/maps/Route110/scripts.pory"

# 944 "data/maps/Route110/scripts.pory"
Route110_Text_TrickHouseSign:
# 945 "data/maps/Route110/scripts.pory"
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
# 946 "data/maps/Route110/scripts.pory"
	.string "to reach the wondrous Trick House.”$"
# 947 "data/maps/Route110/scripts.pory"

# 948 "data/maps/Route110/scripts.pory"
Route110_Text_BestRecord:
# 949 "data/maps/Route110/scripts.pory"
	.string "The best record to date…\p"
# 950 "data/maps/Route110/scripts.pory"
	.string "No. of collisions: {STR_VAR_1}\p"
# 951 "data/maps/Route110/scripts.pory"
	.string "Elapsed time: {STR_VAR_2}$"
# 952 "data/maps/Route110/scripts.pory"

# 953 "data/maps/Route110/scripts.pory"
Route110_Text_ThereIsNoRecord:
# 954 "data/maps/Route110/scripts.pory"
	.string "The best record to date…\p"
# 955 "data/maps/Route110/scripts.pory"
	.string "No one seems to have taken the\n"
# 956 "data/maps/Route110/scripts.pory"
	.string "challenge. There is no record…$"
# 957 "data/maps/Route110/scripts.pory"

# 958 "data/maps/Route110/scripts.pory"
Route110_Text_ImagineSeeingYouHere:
# 959 "data/maps/Route110/scripts.pory"
	.string "{COLOR RED}Prof. Birch{COLOR DARK_GRAY}: Oh, {PLAYER}!\nImagine seeing you here!\pI hope you haven't had any trouble with\nthose troublesome Team Aqua/Magma.\pI heard they've been causing quite a\nruckus in some towns lately.\pBut anyway, how has your journey been\nso far?\pAnd speaking of which, where might my\n{RIVAL} be?$"
# 960 "data/maps/Route110/scripts.pory"

# 961 "data/maps/Route110/scripts.pory"
Route110_Text_HeardYouInstallMatchCall:
# 962 "data/maps/Route110/scripts.pory"
	.string "Oh, I see!\nYou two are running separately.\lWell, that's fine.\pOh, yes, I heard that your Pokénav had\nthe Match Call system installed.\pWell, then, I should register you in my\nPokénav as well.\pThat way, even when we're apart, I can\nrate your Pokédex anytime.$"
# 963 "data/maps/Route110/scripts.pory"

# 964 "data/maps/Route110/scripts.pory"
Route110_Text_RegisteredBirchInPokenav:
# 965 "data/maps/Route110/scripts.pory"
	.string "Registered Prof. Birch\n"
# 966 "data/maps/Route110/scripts.pory"
	.string "in the Pokénav.$"
# 967 "data/maps/Route110/scripts.pory"

# 968 "data/maps/Route110/scripts.pory"
Route110_Text_KeepAnEyeOutForRival:
# 969 "data/maps/Route110/scripts.pory"
	.string "Oh, and {PLAYER}…\pPlease keep an eye out for my\n{RIVAL}.\pWell, I had better get going, then.\nSee you again, {PLAYER}!$"

Route110_EventScript_AquaGruntsScene1::
# 980 "data/maps/Route110/scripts.pory"
	lockall
# 981 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 982 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_AquaGruntsScene
	end


Route110_EventScript_AquaGruntsScene2::
# 987 "data/maps/Route110/scripts.pory"
	lockall
# 988 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 989 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_AquaGruntsScene
	end


Route110_EventScript_AquaGruntsScene3::
# 994 "data/maps/Route110/scripts.pory"
	lockall
# 995 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 996 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_AquaGruntsScene
	end


Route110_EventScript_AquaGruntsScene4::
# 1001 "data/maps/Route110/scripts.pory"
	lockall
# 1002 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 1003 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_AquaGruntsScene
	end


Route110_EventScript_AquaGruntsScene::
# 1008 "data/maps/Route110/scripts.pory"
	delay 32
# 1009 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_AquaGruntsScene_Text_0
# 1010 "data/maps/Route110/scripts.pory"
	applymovement 23, Common_Movement_WalkInPlaceUp
# 1011 "data/maps/Route110/scripts.pory"
	waitmovement 23
# 1012 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_AquaGruntsScene_Text_1
# 1013 "data/maps/Route110/scripts.pory"
	applymovement 25, Common_Movement_WalkInPlaceUp
# 1014 "data/maps/Route110/scripts.pory"
	waitmovement 25
# 1015 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_AquaGruntsScene_Text_2
# 1016 "data/maps/Route110/scripts.pory"
	closemessage
# 1017 "data/maps/Route110/scripts.pory"
	delay 8
# 1018 "data/maps/Route110/scripts.pory"
	applymovement 22, Route110_Movement_AquaGruntsLeave22
# 1019 "data/maps/Route110/scripts.pory"
	applymovement 23, Route110_Movement_AquaGruntsLeave23
# 1020 "data/maps/Route110/scripts.pory"
	applymovement 24, Route110_Movement_AquaGruntsLeave24
# 1021 "data/maps/Route110/scripts.pory"
	applymovement 25, Route110_Movement_AquaGruntsLeave25
# 1022 "data/maps/Route110/scripts.pory"
	applymovement 26, Route110_Movement_AquaGruntsLeave26
# 1023 "data/maps/Route110/scripts.pory"
	waitmovement 22
# 1024 "data/maps/Route110/scripts.pory"
	removeobject 22
# 1025 "data/maps/Route110/scripts.pory"
	removeobject 23
# 1026 "data/maps/Route110/scripts.pory"
	removeobject 24
# 1027 "data/maps/Route110/scripts.pory"
	removeobject 25
# 1028 "data/maps/Route110/scripts.pory"
	removeobject 26
# 1029 "data/maps/Route110/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_TEAM_AQUA
# 1030 "data/maps/Route110/scripts.pory"
	delay 64
# 1031 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
	end


# 1035 "data/maps/Route110/scripts.pory"
Route110_Movement_AquaGruntsLeave22:
# 1036 "data/maps/Route110/scripts.pory"
	walk_right
# 1037 "data/maps/Route110/scripts.pory"
	walk_up
# 1037 "data/maps/Route110/scripts.pory"
	walk_up
# 1037 "data/maps/Route110/scripts.pory"
	walk_up
# 1037 "data/maps/Route110/scripts.pory"
	walk_up
# 1037 "data/maps/Route110/scripts.pory"
	walk_up
	step_end

# 1040 "data/maps/Route110/scripts.pory"
Route110_Movement_AquaGruntsLeave23:
# 1041 "data/maps/Route110/scripts.pory"
	walk_up
# 1041 "data/maps/Route110/scripts.pory"
	walk_up
# 1041 "data/maps/Route110/scripts.pory"
	walk_up
# 1041 "data/maps/Route110/scripts.pory"
	walk_up
# 1041 "data/maps/Route110/scripts.pory"
	walk_up
	step_end

# 1044 "data/maps/Route110/scripts.pory"
Route110_Movement_AquaGruntsLeave24:
# 1045 "data/maps/Route110/scripts.pory"
	walk_up
# 1045 "data/maps/Route110/scripts.pory"
	walk_up
# 1045 "data/maps/Route110/scripts.pory"
	walk_up
# 1045 "data/maps/Route110/scripts.pory"
	walk_up
# 1045 "data/maps/Route110/scripts.pory"
	walk_up
	step_end

# 1048 "data/maps/Route110/scripts.pory"
Route110_Movement_AquaGruntsLeave25:
# 1049 "data/maps/Route110/scripts.pory"
	walk_up
# 1049 "data/maps/Route110/scripts.pory"
	walk_up
# 1049 "data/maps/Route110/scripts.pory"
	walk_up
# 1049 "data/maps/Route110/scripts.pory"
	walk_up
# 1049 "data/maps/Route110/scripts.pory"
	walk_up
	step_end

# 1052 "data/maps/Route110/scripts.pory"
Route110_Movement_AquaGruntsLeave26:
# 1053 "data/maps/Route110/scripts.pory"
	walk_up
# 1053 "data/maps/Route110/scripts.pory"
	walk_up
# 1053 "data/maps/Route110/scripts.pory"
	walk_up
# 1053 "data/maps/Route110/scripts.pory"
	walk_up
	step_end

Route110_EventScript_ChallengeReactionBest::
# 1059 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_ChallengeReactionBest_Text_0
# 1060 "data/maps/Route110/scripts.pory"
	checkitem ITEM_TM_WILD_CHARGE, 1
# 1061 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route110_EventScript_ChallengeReactionBest_2
Route110_EventScript_ChallengeReactionBest_1:
# 1066 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
	end

Route110_EventScript_ChallengeReactionBest_2:
# 1062 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_ChallengeReactionBest_Text_1
# 1063 "data/maps/Route110/scripts.pory"
	delay 8
# 1064 "data/maps/Route110/scripts.pory"
	giveitem ITEM_TM_WILD_CHARGE
	goto Route110_EventScript_ChallengeReactionBest_1


Route110_EventScript_ChallengeReactionGood::
# 1071 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_ChallengeReactionGood_Text_0
# 1072 "data/maps/Route110/scripts.pory"
	checkitem ITEM_TM_FLAME_CHARGE, 1
# 1073 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route110_EventScript_ChallengeReactionGood_2
Route110_EventScript_ChallengeReactionGood_1:
# 1078 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
	end

Route110_EventScript_ChallengeReactionGood_2:
# 1074 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_ChallengeReactionGood_Text_1
# 1075 "data/maps/Route110/scripts.pory"
	delay 8
# 1076 "data/maps/Route110/scripts.pory"
	giveitem ITEM_TM_FLAME_CHARGE
	goto Route110_EventScript_ChallengeReactionGood_1


Route110_EventScript_AquaGruntsScene_Text_0:
# 1009 "data/maps/Route110/scripts.pory"
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: Let's keep going through Route\n110 and head for Mt. Chimney!$"

Route110_EventScript_AquaGruntsScene_Text_1:
# 1012 "data/maps/Route110/scripts.pory"
	.string "Wow, that's quite far.\pWhy don't we take a rest in{COLOR BLUE}Mauville\nCity{COLOR DARK_GRAY}. It's on the way.$"

Route110_EventScript_AquaGruntsScene_Text_2:
# 1015 "data/maps/Route110/scripts.pory"
	.string "Great idea!$"

Route110_EventScript_ChallengeReactionBest_Text_0:
# 1059 "data/maps/Route110/scripts.pory"
	.string "Bravo!\nSplendid showing!\pYour love for cycling comes from deep\nwithing your heart.\pYou've shaken me to my very soul!$"

Route110_EventScript_ChallengeReactionBest_Text_1:
# 1062 "data/maps/Route110/scripts.pory"
	.string "Please, take this TM as a reward for\nyour cycling mastery!$"

Route110_EventScript_ChallengeReactionGood_Text_0:
# 1071 "data/maps/Route110/scripts.pory"
	.string "Your technique is remarkable.\pI suggest you speed up a bit while still\navoiding collisions.$"

Route110_EventScript_ChallengeReactionGood_Text_1:
# 1074 "data/maps/Route110/scripts.pory"
	.string "Here, take this TM to commemorate your\neffort.$"
