# 1 "data/maps/Route110/scripts.pory"

# 2 "data/maps/Route110/scripts.pory"
.set LOCALID_RIVAL, 28
# 3 "data/maps/Route110/scripts.pory"
.set LOCALID_RIVAL_ON_BIKE, 29
# 4 "data/maps/Route110/scripts.pory"
.set LOCALID_BIRCH, 36
# 5 "data/maps/Route110/scripts.pory"

# 6 "data/maps/Route110/scripts.pory"
Route110_MapScripts::
# 7 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_OnResume
# 8 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_OnTransition
# 9 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_OnFrame
# 10 "data/maps/Route110/scripts.pory"
	.byte 0
# 11 "data/maps/Route110/scripts.pory"

# 12 "data/maps/Route110/scripts.pory"
Route110_OnResume:
# 13 "data/maps/Route110/scripts.pory"
	special UpdateCyclingRoadState
# 14 "data/maps/Route110/scripts.pory"
	end
# 15 "data/maps/Route110/scripts.pory"

# 16 "data/maps/Route110/scripts.pory"
Route110_OnTransition:
# 17 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 18 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 19 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_SaveCyclingMusic
# 20 "data/maps/Route110/scripts.pory"
	end
# 21 "data/maps/Route110/scripts.pory"

# 22 "data/maps/Route110/scripts.pory"
Route110_EventScript_SaveCyclingMusic::
# 23 "data/maps/Route110/scripts.pory"
	savebgm MUS_CYCLING
# 24 "data/maps/Route110/scripts.pory"
	return
# 25 "data/maps/Route110/scripts.pory"

# 26 "data/maps/Route110/scripts.pory"
Route110_OnFrame:
# 27 "data/maps/Route110/scripts.pory"
	map_script_2 VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_BeginCylcingRoadChallenge
# 28 "data/maps/Route110/scripts.pory"
	.2byte 0
# 29 "data/maps/Route110/scripts.pory"

# 30 "data/maps/Route110/scripts.pory"
Route110_EventScript_BeginCylcingRoadChallenge::
# 31 "data/maps/Route110/scripts.pory"
	special Special_BeginCyclingRoadChallenge
# 32 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 2
# 33 "data/maps/Route110/scripts.pory"
	return
# 34 "data/maps/Route110/scripts.pory"

# 35 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt1::
# 36 "data/maps/Route110/scripts.pory"
	lock
# 37 "data/maps/Route110/scripts.pory"
	faceplayer
# 38 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WeCantTalkAboutAquaActivities, MSGBOX_DEFAULT
# 39 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceUp
# 40 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 41 "data/maps/Route110/scripts.pory"
	release
# 42 "data/maps/Route110/scripts.pory"
	end
# 43 "data/maps/Route110/scripts.pory"

# 44 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt2::
# 45 "data/maps/Route110/scripts.pory"
	lock
# 46 "data/maps/Route110/scripts.pory"
	faceplayer
# 47 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KickUpARuckus, MSGBOX_DEFAULT
# 48 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceUp
# 49 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 50 "data/maps/Route110/scripts.pory"
	release
# 51 "data/maps/Route110/scripts.pory"
	end
# 52 "data/maps/Route110/scripts.pory"

# 53 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt3::
# 54 "data/maps/Route110/scripts.pory"
	lock
# 55 "data/maps/Route110/scripts.pory"
	faceplayer
# 56 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MyFirstJobInAqua, MSGBOX_DEFAULT
# 57 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceUp
# 58 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route110/scripts.pory"
	release
# 60 "data/maps/Route110/scripts.pory"
	end
# 61 "data/maps/Route110/scripts.pory"

# 62 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt4::
# 63 "data/maps/Route110/scripts.pory"
	lock
# 64 "data/maps/Route110/scripts.pory"
	faceplayer
# 65 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaActionsBringSmiles, MSGBOX_DEFAULT
# 66 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceUp
# 67 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route110/scripts.pory"
	release
# 69 "data/maps/Route110/scripts.pory"
	end
# 70 "data/maps/Route110/scripts.pory"

# 71 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy1::
# 72 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RideBikeAtFullSpeed, MSGBOX_NPC
# 73 "data/maps/Route110/scripts.pory"
	end
# 74 "data/maps/Route110/scripts.pory"

# 75 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGirl1::
# 76 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HairStreamsBehindMe, MSGBOX_NPC
# 77 "data/maps/Route110/scripts.pory"
	end
# 78 "data/maps/Route110/scripts.pory"

# 79 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy1::
# 80 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_YouGotBikeFromRydel, MSGBOX_NPC
# 81 "data/maps/Route110/scripts.pory"
	end
# 82 "data/maps/Route110/scripts.pory"

# 83 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldMan::
# 84 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TwoRoads, MSGBOX_NPC
# 85 "data/maps/Route110/scripts.pory"
	end
# 86 "data/maps/Route110/scripts.pory"

# 87 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldWoman::
# 88 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WalkOnTheLowRoad, MSGBOX_NPC
# 89 "data/maps/Route110/scripts.pory"
	end
# 90 "data/maps/Route110/scripts.pory"

# 91 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy2::
# 92 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BikeTechniques, MSGBOX_NPC
# 93 "data/maps/Route110/scripts.pory"
	end
# 94 "data/maps/Route110/scripts.pory"

# 95 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy2::
# 96 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WhichShouldIChoose, MSGBOX_NPC
# 97 "data/maps/Route110/scripts.pory"
	end
# 98 "data/maps/Route110/scripts.pory"

# 99 "data/maps/Route110/scripts.pory"
Route110_EventScript_SlateportCitySign::
# 100 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SlateportCitySign, MSGBOX_SIGN
# 101 "data/maps/Route110/scripts.pory"
	end
# 102 "data/maps/Route110/scripts.pory"

# 103 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadSign::
# 104 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingRoadSign, MSGBOX_SIGN
# 105 "data/maps/Route110/scripts.pory"
	end
# 106 "data/maps/Route110/scripts.pory"

# 107 "data/maps/Route110/scripts.pory"
Route110_EventScript_VandalizedSign::
# 108 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaWasHere, MSGBOX_SIGN
# 109 "data/maps/Route110/scripts.pory"
	end
# 110 "data/maps/Route110/scripts.pory"

# 111 "data/maps/Route110/scripts.pory"
Route110_EventScript_Route103Sign::
# 112 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_Route103Sign, MSGBOX_SIGN
# 113 "data/maps/Route110/scripts.pory"
	end
# 114 "data/maps/Route110/scripts.pory"

# 115 "data/maps/Route110/scripts.pory"
Route110_EventScript_SeasideParkingSign::
# 116 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SeasideParkingSign, MSGBOX_SIGN
# 117 "data/maps/Route110/scripts.pory"
	end
# 118 "data/maps/Route110/scripts.pory"

# 119 "data/maps/Route110/scripts.pory"
Route110_EventScript_MauvilleCitySign::
# 120 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MauvilleCitySign, MSGBOX_SIGN
# 121 "data/maps/Route110/scripts.pory"
	end
# 122 "data/maps/Route110/scripts.pory"

# 123 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsPrlzSleep::
# 124 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsPrlzSleep, MSGBOX_SIGN
# 125 "data/maps/Route110/scripts.pory"
	end
# 126 "data/maps/Route110/scripts.pory"

# 127 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsRegisterItems::
# 128 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsRegisterItems, MSGBOX_SIGN
# 129 "data/maps/Route110/scripts.pory"
	end
# 130 "data/maps/Route110/scripts.pory"

# 131 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrickHouseSign::
# 132 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrickHouseSign, MSGBOX_SIGN
# 133 "data/maps/Route110/scripts.pory"
	end
# 134 "data/maps/Route110/scripts.pory"

# 135 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadResultsSign::
# 136 "data/maps/Route110/scripts.pory"
	lockall
# 137 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetRecordedCyclingRoadResults
# 138 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_NoRecordSet
# 139 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BestRecord, MSGBOX_DEFAULT
# 140 "data/maps/Route110/scripts.pory"
	releaseall
# 141 "data/maps/Route110/scripts.pory"
	end
# 142 "data/maps/Route110/scripts.pory"

# 143 "data/maps/Route110/scripts.pory"
Route110_EventScript_NoRecordSet::
# 144 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ThereIsNoRecord, MSGBOX_DEFAULT
# 145 "data/maps/Route110/scripts.pory"
	releaseall
# 146 "data/maps/Route110/scripts.pory"
	end
# 147 "data/maps/Route110/scripts.pory"

# 148 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeGuy::
# 149 "data/maps/Route110/scripts.pory"
	lock
# 150 "data/maps/Route110/scripts.pory"
	faceplayer
# 151 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 152 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route110_EventScript_PlayerRidingAcroBike
# 153 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_CYCLING_CHALLENGE_STATE, 0, Route110_EventScript_PlayerNotRidingBike
# 154 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlwaysAimHigher, MSGBOX_DEFAULT
# 155 "data/maps/Route110/scripts.pory"
	release
# 156 "data/maps/Route110/scripts.pory"
	end
# 157 "data/maps/Route110/scripts.pory"

# 158 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerNotRidingBike::
# 159 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RatedForNumberOfCollisions, MSGBOX_DEFAULT
# 160 "data/maps/Route110/scripts.pory"
	release
# 161 "data/maps/Route110/scripts.pory"
	end
# 162 "data/maps/Route110/scripts.pory"

# 163 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerRidingAcroBike::
# 164 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AcroBikesDoNotQualify, MSGBOX_DEFAULT
# 165 "data/maps/Route110/scripts.pory"
	release
# 166 "data/maps/Route110/scripts.pory"
	end
# 167 "data/maps/Route110/scripts.pory"

# 168 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edward::
# 169 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWARD, Route110_Text_EdwardIntro, Route110_Text_EdwardDefeated
# 170 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
# 171 "data/maps/Route110/scripts.pory"
	end
# 172 "data/maps/Route110/scripts.pory"

# 173 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jaclyn::
# 174 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACLYN, Route110_Text_JaclynIntro, Route110_Text_JaclynDefeated
# 175 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
# 176 "data/maps/Route110/scripts.pory"
	end
# 177 "data/maps/Route110/scripts.pory"

# 178 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edwin::
# 179 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWIN_1, Route110_Text_EdwinIntro, Route110_Text_EdwinDefeated, Route110_EventScript_EdwinRegisterMatchCallAfterBattle
# 180 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 181 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_EdwinRematch
# 182 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinPostBattle, MSGBOX_DEFAULT
# 183 "data/maps/Route110/scripts.pory"
	release
# 184 "data/maps/Route110/scripts.pory"
	end
# 185 "data/maps/Route110/scripts.pory"

# 186 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRegisterMatchCallAfterBattle::
# 187 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 188 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 189 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRegister, MSGBOX_DEFAULT
# 190 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_EDWIN_1
# 191 "data/maps/Route110/scripts.pory"
	release
# 192 "data/maps/Route110/scripts.pory"
	end
# 193 "data/maps/Route110/scripts.pory"

# 194 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRematch::
# 195 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_EDWIN_1, Route110_Text_EdwinRematchIntro, Route110_Text_EdwinRematchDefeated
# 196 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRematchPostBattle, MSGBOX_AUTOCLOSE
# 197 "data/maps/Route110/scripts.pory"
	end
# 198 "data/maps/Route110/scripts.pory"

# 199 "data/maps/Route110/scripts.pory"
Route110_EventScript_Dale::
# 200 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_DALE, Route110_Text_DaleIntro, Route110_Text_DaleDefeated
# 201 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_DalePostBattle, MSGBOX_AUTOCLOSE
# 202 "data/maps/Route110/scripts.pory"
	end
# 203 "data/maps/Route110/scripts.pory"

# 204 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jacob::
# 205 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACOB, Route110_Text_JacobIntro, Route110_Text_JacobDefeated
# 206 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 207 "data/maps/Route110/scripts.pory"
	end
# 208 "data/maps/Route110/scripts.pory"

# 209 "data/maps/Route110/scripts.pory"
Route110_EventScript_Anthony::
# 210 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ANTHONY, Route110_Text_AnthonyIntro, Route110_Text_AnthonyDefeated
# 211 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 212 "data/maps/Route110/scripts.pory"
	end
# 213 "data/maps/Route110/scripts.pory"

# 214 "data/maps/Route110/scripts.pory"
Route110_EventScript_Benjamin::
# 215 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_BENJAMIN_1, Route110_Text_BenjaminIntro, Route110_Text_BenjaminDefeated, Route110_EventScript_BenjaminRegisterMatchCallAfterBattle
# 216 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 217 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_BenjaminRematch
# 218 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminPostBattle, MSGBOX_DEFAULT
# 219 "data/maps/Route110/scripts.pory"
	release
# 220 "data/maps/Route110/scripts.pory"
	end
# 221 "data/maps/Route110/scripts.pory"

# 222 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRegisterMatchCallAfterBattle::
# 223 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 224 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 225 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRegister, MSGBOX_DEFAULT
# 226 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_BENJAMIN_1
# 227 "data/maps/Route110/scripts.pory"
	release
# 228 "data/maps/Route110/scripts.pory"
	end
# 229 "data/maps/Route110/scripts.pory"

# 230 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRematch::
# 231 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_BENJAMIN_1, Route110_Text_BenjaminRematchIntro, Route110_Text_BenjaminRematchDefeated
# 232 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRematchPostBattle, MSGBOX_AUTOCLOSE
# 233 "data/maps/Route110/scripts.pory"
	end
# 234 "data/maps/Route110/scripts.pory"

# 235 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jasmine::
# 236 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, Route110_Text_JasmineIntro, Route110_Text_JasmineDefeated
# 237 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 238 "data/maps/Route110/scripts.pory"
	end
# 239 "data/maps/Route110/scripts.pory"

# 240 "data/maps/Route110/scripts.pory"
Route110_EventScript_Abigail::
# 241 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ABIGAIL_1, Route110_Text_AbigailIntro, Route110_Text_AbigailDefeated, Route110_EventScript_AbigailRegisterMatchCallAfterBattle
# 242 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 243 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_AbigailRematch
# 244 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailPostBattle, MSGBOX_DEFAULT
# 245 "data/maps/Route110/scripts.pory"
	release
# 246 "data/maps/Route110/scripts.pory"
	end
# 247 "data/maps/Route110/scripts.pory"

# 248 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRegisterMatchCallAfterBattle::
# 249 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 250 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 251 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRegister, MSGBOX_DEFAULT
# 252 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ABIGAIL_1
# 253 "data/maps/Route110/scripts.pory"
	release
# 254 "data/maps/Route110/scripts.pory"
	end
# 255 "data/maps/Route110/scripts.pory"

# 256 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRematch::
# 257 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ABIGAIL_1, Route110_Text_AbigailRematchIntro, Route110_Text_AbigailRematchDefeated
# 258 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRematchPostBattle, MSGBOX_AUTOCLOSE
# 259 "data/maps/Route110/scripts.pory"
	end
# 260 "data/maps/Route110/scripts.pory"

# 261 "data/maps/Route110/scripts.pory"
Route110_EventScript_Isabel::
# 262 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ISABEL_1, Route110_Text_IsabelIntro, Route110_Text_IsabelDefeated, Route110_EventScript_IsabelRegisterMatchCallAfterBattle
# 263 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 264 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_IsabelRematch
# 265 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelPostBattle, MSGBOX_DEFAULT
# 266 "data/maps/Route110/scripts.pory"
	release
# 267 "data/maps/Route110/scripts.pory"
	end
# 268 "data/maps/Route110/scripts.pory"

# 269 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRegisterMatchCallAfterBattle::
# 270 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 271 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 272 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRegister, MSGBOX_DEFAULT
# 273 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ISABEL_1
# 274 "data/maps/Route110/scripts.pory"
	release
# 275 "data/maps/Route110/scripts.pory"
	end
# 276 "data/maps/Route110/scripts.pory"

# 277 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRematch::
# 278 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ISABEL_1, Route110_Text_IsabelRematchIntro, Route110_Text_IsabelRematchDefeated
# 279 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRematchPostBattle, MSGBOX_AUTOCLOSE
# 280 "data/maps/Route110/scripts.pory"
	end
# 281 "data/maps/Route110/scripts.pory"

# 282 "data/maps/Route110/scripts.pory"
Route110_EventScript_Timmy::
# 283 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, Route110_Text_TimmyIntro, Route110_Text_TimmyDefeated
# 284 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
# 285 "data/maps/Route110/scripts.pory"
	end
# 286 "data/maps/Route110/scripts.pory"

# 287 "data/maps/Route110/scripts.pory"
Route110_EventScript_Unused::
# 288 "data/maps/Route110/scripts.pory"
	end
# 289 "data/maps/Route110/scripts.pory"

# 290 "data/maps/Route110/scripts.pory"
Route110_EventScript_Kaleb::
# 291 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_KALEB, Route110_Text_KalebIntro, Route110_Text_KalebDefeated
# 292 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
# 293 "data/maps/Route110/scripts.pory"
	end
# 294 "data/maps/Route110/scripts.pory"

# 295 "data/maps/Route110/scripts.pory"
Route110_EventScript_Joseph::
# 296 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH, Route110_Text_JosephIntro, Route110_Text_JosephDefeated
# 297 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 298 "data/maps/Route110/scripts.pory"
	end
# 299 "data/maps/Route110/scripts.pory"

# 300 "data/maps/Route110/scripts.pory"
Route110_EventScript_Alyssa::
# 301 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ALYSSA, Route110_Text_AlyssaIntro, Route110_Text_AlyssaDefeated
# 302 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
# 303 "data/maps/Route110/scripts.pory"
	end
# 304 "data/maps/Route110/scripts.pory"

# 305 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeEnd::
# 306 "data/maps/Route110/scripts.pory"
	lockall
# 307 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_CHALLENGE_BIKER, Common_Movement_WalkInPlaceRight
# 308 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 309 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_CyclingChallengeResults
# 310 "data/maps/Route110/scripts.pory"
	releaseall
# 311 "data/maps/Route110/scripts.pory"
	end
# 312 "data/maps/Route110/scripts.pory"

# 313 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults::
# 314 "data/maps/Route110/scripts.pory"
	special FinishCyclingRoadChallenge
# 315 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingChallengeResultSummary, MSGBOX_DEFAULT
# 316 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 317 "data/maps/Route110/scripts.pory"
	case 10, Route110_EventScript_ChallengeReactionBest
# 318 "data/maps/Route110/scripts.pory"
	case 9, Route110_EventScript_ChallengeReactionGood
# 319 "data/maps/Route110/scripts.pory"
	case 8, Route110_EventScript_ChallengeReactionGood
# 320 "data/maps/Route110/scripts.pory"
	case 7, Route110_EventScript_ChallengeReactionGood
# 321 "data/maps/Route110/scripts.pory"
	case 6, Route110_EventScript_ChallengeReactionOk
# 322 "data/maps/Route110/scripts.pory"
	case 5, Route110_EventScript_ChallengeReactionOk
# 323 "data/maps/Route110/scripts.pory"
	case 4, Route110_EventScript_ChallengeReactionOk
# 324 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_ChallengeReactionBad
# 325 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_ChallengeReactionBad
# 326 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_ChallengeReactionBad
# 327 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_ChallengeReactionWorst
# 328 "data/maps/Route110/scripts.pory"
	end
# 329 "data/maps/Route110/scripts.pory"

# 330 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionOk::
# 331 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionOk, MSGBOX_DEFAULT
# 332 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 333 "data/maps/Route110/scripts.pory"
	end
# 334 "data/maps/Route110/scripts.pory"

# 335 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBad::
# 336 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBad, MSGBOX_DEFAULT
# 337 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 338 "data/maps/Route110/scripts.pory"
	end
# 339 "data/maps/Route110/scripts.pory"

# 340 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionWorst::
# 341 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionWorst, MSGBOX_DEFAULT
# 342 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 343 "data/maps/Route110/scripts.pory"
	end
# 344 "data/maps/Route110/scripts.pory"

# 345 "data/maps/Route110/scripts.pory"
Route110_EventScript_EndChallenge::
# 346 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 3
# 347 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 348 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 349 "data/maps/Route110/scripts.pory"
	return
# 350 "data/maps/Route110/scripts.pory"

# 351 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger1::
# 352 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 353 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 354 "data/maps/Route110/scripts.pory"
	end
# 355 "data/maps/Route110/scripts.pory"

# 356 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger2::
# 357 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 358 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 359 "data/maps/Route110/scripts.pory"
	end
# 360 "data/maps/Route110/scripts.pory"

# 361 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger3::
# 362 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 363 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 364 "data/maps/Route110/scripts.pory"
	end
# 365 "data/maps/Route110/scripts.pory"

# 366 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene::
# 367 "data/maps/Route110/scripts.pory"
	lockall
# 368 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceDown
# 369 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 370 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 371 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 372 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 373 "data/maps/Route110/scripts.pory"
	waitse
# 374 "data/maps/Route110/scripts.pory"
	checkplayergender
# 375 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route110_EventScript_PlayMayMusic
# 376 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route110_EventScript_PlayBrendanMusic
# 377 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 378 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 379 "data/maps/Route110/scripts.pory"
	delay 30
# 380 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalApproachPlayer1
# 381 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalApproachPlayer2
# 382 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalApproachPlayer3
# 383 "data/maps/Route110/scripts.pory"
	checkplayergender
# 384 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route110_EventScript_MayBattle
# 385 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route110_EventScript_BrendanBattle
# 386 "data/maps/Route110/scripts.pory"
	releaseall
# 387 "data/maps/Route110/scripts.pory"
	end
# 388 "data/maps/Route110/scripts.pory"

# 389 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayMayMusic::
# 390 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 391 "data/maps/Route110/scripts.pory"
	return
# 392 "data/maps/Route110/scripts.pory"

# 393 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayBrendanMusic::
# 394 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 395 "data/maps/Route110/scripts.pory"
	return
# 396 "data/maps/Route110/scripts.pory"

# 397 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattle::
# 398 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayRoute110Intro, MSGBOX_DEFAULT
# 399 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayLetsBattle, MSGBOX_DEFAULT
# 400 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 401 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_MayBattleTreecko
# 402 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_MayBattleTorchic
# 403 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_MayBattleMudkip
# 404 "data/maps/Route110/scripts.pory"
	end
# 405 "data/maps/Route110/scripts.pory"

# 406 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTreecko::
# 407 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TREECKO, Route110_Text_MayDefeated
# 408 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 409 "data/maps/Route110/scripts.pory"
	end
# 410 "data/maps/Route110/scripts.pory"

# 411 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTorchic::
# 412 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TORCHIC, Route110_Text_MayDefeated
# 413 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 414 "data/maps/Route110/scripts.pory"
	end
# 415 "data/maps/Route110/scripts.pory"

# 416 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleMudkip::
# 417 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, Route110_Text_MayDefeated
# 418 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 419 "data/maps/Route110/scripts.pory"
	end
# 420 "data/maps/Route110/scripts.pory"

# 421 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayDefeated::
# 422 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayMonWornOut, MSGBOX_DEFAULT
# 423 "data/maps/Route110/scripts.pory"
	closemessage
# 424 "data/maps/Route110/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 425 "data/maps/Route110/scripts.pory"
	special HealPlayerParty
# 426 "data/maps/Route110/scripts.pory"
	playse SE_USE_ITEM
# 427 "data/maps/Route110/scripts.pory"
	waitse
# 428 "data/maps/Route110/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 429 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MonHPRestored, MSGBOX_DEFAULT
# 430 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayTakeThis, MSGBOX_DEFAULT
# 431 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 432 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayExplainItemfinder, MSGBOX_DEFAULT
# 433 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 434 "data/maps/Route110/scripts.pory"
	end
# 435 "data/maps/Route110/scripts.pory"

# 436 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattle::
# 437 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanRoute110Intro, MSGBOX_DEFAULT
# 438 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 439 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 440 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_BrendanBattleTreecko
# 441 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_BrendanBattleTorchic
# 442 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_BrendanBattleMudkip
# 443 "data/maps/Route110/scripts.pory"
	end
# 444 "data/maps/Route110/scripts.pory"

# 445 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTreecko::
# 446 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, Route110_Text_BrendanDefeated
# 447 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 448 "data/maps/Route110/scripts.pory"
	end
# 449 "data/maps/Route110/scripts.pory"

# 450 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTorchic::
# 451 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, Route110_Text_BrendanDefeated
# 452 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 453 "data/maps/Route110/scripts.pory"
	end
# 454 "data/maps/Route110/scripts.pory"

# 455 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleMudkip::
# 456 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_MUDKIP, Route110_Text_BrendanDefeated
# 457 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 458 "data/maps/Route110/scripts.pory"
	end
# 459 "data/maps/Route110/scripts.pory"

# 460 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanDefeated::
# 461 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanMonWornOut, MSGBOX_DEFAULT
# 462 "data/maps/Route110/scripts.pory"
	closemessage
# 463 "data/maps/Route110/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 464 "data/maps/Route110/scripts.pory"
	special HealPlayerParty
# 465 "data/maps/Route110/scripts.pory"
	playse SE_USE_ITEM
# 466 "data/maps/Route110/scripts.pory"
	waitse
# 467 "data/maps/Route110/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 468 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MonHPRestored, MSGBOX_DEFAULT
# 469 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanTakeThis, MSGBOX_DEFAULT
# 470 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 471 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanExplainItemfinder, MSGBOX_DEFAULT
# 472 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 473 "data/maps/Route110/scripts.pory"
	end
# 474 "data/maps/Route110/scripts.pory"

# 475 "data/maps/Route110/scripts.pory"
Route110_EventScript_GiveItemfinder::
# 476 "data/maps/Route110/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 477 "data/maps/Route110/scripts.pory"
	return
# 478 "data/maps/Route110/scripts.pory"

# 479 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit::
# 480 "data/maps/Route110/scripts.pory"
	closemessage
# 481 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_MoveRival1
# 482 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_MoveRival2
# 483 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_MoveRival3
# 484 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_RIGHT
# 485 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_RIGHT
# 486 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_RIVAL
# 487 "data/maps/Route110/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 488 "data/maps/Route110/scripts.pory"
	delay 45
# 489 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalExit1
# 490 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalExit2
# 491 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalExit3
# 492 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 493 "data/maps/Route110/scripts.pory"
	setvar VAR_ROUTE110_STATE, 1
# 494 "data/maps/Route110/scripts.pory"
	setvar VAR_LEVEL_CAP_VARIABLE, 36
# 495 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 496 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 497 "data/maps/Route110/scripts.pory"
	releaseall
# 498 "data/maps/Route110/scripts.pory"
	end
# 499 "data/maps/Route110/scripts.pory"

# 500 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer1::
# 501 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer1
# 502 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 503 "data/maps/Route110/scripts.pory"
	return
# 504 "data/maps/Route110/scripts.pory"

# 505 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer2::
# 506 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer2
# 507 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 508 "data/maps/Route110/scripts.pory"
	return
# 509 "data/maps/Route110/scripts.pory"

# 510 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer3::
# 511 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer3
# 512 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 513 "data/maps/Route110/scripts.pory"
	return
# 514 "data/maps/Route110/scripts.pory"

# 515 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit1::
# 516 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit1
# 517 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 518 "data/maps/Route110/scripts.pory"
	return
# 519 "data/maps/Route110/scripts.pory"

# 520 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit2::
# 521 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit2
# 522 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 523 "data/maps/Route110/scripts.pory"
	return
# 524 "data/maps/Route110/scripts.pory"

# 525 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit3::
# 526 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit3
# 527 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 528 "data/maps/Route110/scripts.pory"
	return
# 529 "data/maps/Route110/scripts.pory"

# 530 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival1::
# 531 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 33, 55
# 532 "data/maps/Route110/scripts.pory"
	return
# 533 "data/maps/Route110/scripts.pory"

# 534 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival2::
# 535 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 34, 55
# 536 "data/maps/Route110/scripts.pory"
	return
# 537 "data/maps/Route110/scripts.pory"

# 538 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival3::
# 539 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 35, 55
# 540 "data/maps/Route110/scripts.pory"
	return
# 541 "data/maps/Route110/scripts.pory"

# 542 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer1:
# 543 "data/maps/Route110/scripts.pory"
	walk_down
# 544 "data/maps/Route110/scripts.pory"
	walk_left
# 545 "data/maps/Route110/scripts.pory"
	walk_in_place_down
# 546 "data/maps/Route110/scripts.pory"
	step_end
# 547 "data/maps/Route110/scripts.pory"

# 548 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer2:
# 549 "data/maps/Route110/scripts.pory"
	walk_down
# 550 "data/maps/Route110/scripts.pory"
	step_end
# 551 "data/maps/Route110/scripts.pory"

# 552 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer3:
# 553 "data/maps/Route110/scripts.pory"
	walk_down
# 554 "data/maps/Route110/scripts.pory"
	walk_right
# 555 "data/maps/Route110/scripts.pory"
	walk_in_place_down
# 556 "data/maps/Route110/scripts.pory"
	step_end
# 557 "data/maps/Route110/scripts.pory"

# 558 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit1:
# 559 "data/maps/Route110/scripts.pory"
	walk_fast_up
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
	step_end
# 567 "data/maps/Route110/scripts.pory"

# 568 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit2:
# 569 "data/maps/Route110/scripts.pory"
	walk_fast_up
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
	walk_fast_down
# 577 "data/maps/Route110/scripts.pory"
	step_end
# 578 "data/maps/Route110/scripts.pory"

# 579 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit3:
# 580 "data/maps/Route110/scripts.pory"
	walk_fast_up
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
	step_end
# 588 "data/maps/Route110/scripts.pory"

# 589 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene1::
# 590 "data/maps/Route110/scripts.pory"
	lockall
# 591 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 592 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 593 "data/maps/Route110/scripts.pory"

# 594 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene2::
# 595 "data/maps/Route110/scripts.pory"
	lockall
# 596 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 597 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 598 "data/maps/Route110/scripts.pory"

# 599 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene3::
# 600 "data/maps/Route110/scripts.pory"
	lockall
# 601 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 602 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 603 "data/maps/Route110/scripts.pory"

# 604 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene4::
# 605 "data/maps/Route110/scripts.pory"
	lockall
# 606 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 607 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 608 "data/maps/Route110/scripts.pory"

# 609 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene::
# 610 "data/maps/Route110/scripts.pory"
	addobject LOCALID_BIRCH
# 611 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchEntrance
# 612 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 613 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 614 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 615 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 616 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_Delay48
# 617 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 618 "data/maps/Route110/scripts.pory"
    applymovement LOCALID_BIRCH, Route110_Movement_BirchNoticePlayer
# 619 "data/maps/Route110/scripts.pory"
    waitmovement 0
# 620 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchApproachPlayer1
# 621 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchApproachPlayer2
# 622 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchApproachPlayer3
# 623 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchApproachPlayer4
# 624 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 625 "data/maps/Route110/scripts.pory"
	closemessage
# 626 "data/maps/Route110/scripts.pory"
	delay 20
# 627 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceLeft
# 628 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 629 "data/maps/Route110/scripts.pory"
	delay 10
# 630 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceRight
# 631 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 632 "data/maps/Route110/scripts.pory"
	delay 20
# 633 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceDown
# 634 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 635 "data/maps/Route110/scripts.pory"
	delay 30
# 636 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 637 "data/maps/Route110/scripts.pory"
	closemessage
# 638 "data/maps/Route110/scripts.pory"
	delay 30
# 639 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 640 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RegisteredBirchInPokenav, MSGBOX_DEFAULT
# 641 "data/maps/Route110/scripts.pory"
	waitfanfare
# 642 "data/maps/Route110/scripts.pory"
	closemessage
# 643 "data/maps/Route110/scripts.pory"
	delay 30
# 644 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 645 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 646 "data/maps/Route110/scripts.pory"
	closemessage
# 647 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchExit1
# 648 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchExit2
# 649 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchExit3
# 650 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchExit4
# 651 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_BIRCH
# 652 "data/maps/Route110/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 653 "data/maps/Route110/scripts.pory"
	releaseall
# 654 "data/maps/Route110/scripts.pory"
	end
# 655 "data/maps/Route110/scripts.pory"

# 656 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer1::
# 657 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer1
# 658 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 659 "data/maps/Route110/scripts.pory"
	return
# 660 "data/maps/Route110/scripts.pory"

# 661 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer2::
# 662 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer2
# 663 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 664 "data/maps/Route110/scripts.pory"
	return
# 665 "data/maps/Route110/scripts.pory"

# 666 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer3::
# 667 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer3
# 668 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 669 "data/maps/Route110/scripts.pory"
	return
# 670 "data/maps/Route110/scripts.pory"

# 671 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer4::
# 672 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer4
# 673 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 674 "data/maps/Route110/scripts.pory"
	return
# 675 "data/maps/Route110/scripts.pory"

# 676 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit1::
# 677 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit1
# 678 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 679 "data/maps/Route110/scripts.pory"
	return
# 680 "data/maps/Route110/scripts.pory"

# 681 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit2::
# 682 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit2
# 683 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 684 "data/maps/Route110/scripts.pory"
	return
# 685 "data/maps/Route110/scripts.pory"

# 686 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit3::
# 687 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit3
# 688 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 689 "data/maps/Route110/scripts.pory"
	return
# 690 "data/maps/Route110/scripts.pory"

# 691 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit4::
# 692 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit4
# 693 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 694 "data/maps/Route110/scripts.pory"
	return
# 695 "data/maps/Route110/scripts.pory"

# 696 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchEntrance:
# 697 "data/maps/Route110/scripts.pory"
	walk_down
# 698 "data/maps/Route110/scripts.pory"
	walk_down
# 699 "data/maps/Route110/scripts.pory"
	walk_down
# 700 "data/maps/Route110/scripts.pory"
	step_end
# 701 "data/maps/Route110/scripts.pory"

# 702 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchNoticePlayer:
# 703 "data/maps/Route110/scripts.pory"
    walk_in_place_up
# 704 "data/maps/Route110/scripts.pory"
    delay_16
# 705 "data/maps/Route110/scripts.pory"
    delay_8
# 706 "data/maps/Route110/scripts.pory"
    emote_question_mark
# 707 "data/maps/Route110/scripts.pory"
    walk_in_place_down
# 708 "data/maps/Route110/scripts.pory"
    delay_8
# 709 "data/maps/Route110/scripts.pory"
    step_end
# 710 "data/maps/Route110/scripts.pory"

# 711 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer1:
# 712 "data/maps/Route110/scripts.pory"
	walk_down
# 713 "data/maps/Route110/scripts.pory"
	walk_left
# 714 "data/maps/Route110/scripts.pory"
	walk_left
# 715 "data/maps/Route110/scripts.pory"
	walk_down
# 716 "data/maps/Route110/scripts.pory"
	step_end
# 717 "data/maps/Route110/scripts.pory"

# 718 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer2:
# 719 "data/maps/Route110/scripts.pory"
	walk_down
# 720 "data/maps/Route110/scripts.pory"
	walk_left
# 721 "data/maps/Route110/scripts.pory"
	walk_down
# 722 "data/maps/Route110/scripts.pory"
	step_end
# 723 "data/maps/Route110/scripts.pory"

# 724 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer3:
# 725 "data/maps/Route110/scripts.pory"
	walk_down
# 726 "data/maps/Route110/scripts.pory"
	walk_down
# 727 "data/maps/Route110/scripts.pory"
	step_end
# 728 "data/maps/Route110/scripts.pory"

# 729 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer4:
# 730 "data/maps/Route110/scripts.pory"
	walk_down
# 731 "data/maps/Route110/scripts.pory"
	walk_right
# 732 "data/maps/Route110/scripts.pory"
	walk_down
# 733 "data/maps/Route110/scripts.pory"
	step_end
# 734 "data/maps/Route110/scripts.pory"

# 735 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit1:
# 736 "data/maps/Route110/scripts.pory"
	walk_up
# 737 "data/maps/Route110/scripts.pory"
	walk_up
# 738 "data/maps/Route110/scripts.pory"
	walk_right
# 739 "data/maps/Route110/scripts.pory"
	walk_up
# 740 "data/maps/Route110/scripts.pory"
	walk_up
# 741 "data/maps/Route110/scripts.pory"
	walk_up
# 742 "data/maps/Route110/scripts.pory"
	step_end
# 743 "data/maps/Route110/scripts.pory"

# 744 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit2:
# 745 "data/maps/Route110/scripts.pory"
	walk_up
# 746 "data/maps/Route110/scripts.pory"
	walk_up
# 747 "data/maps/Route110/scripts.pory"
	walk_up
# 748 "data/maps/Route110/scripts.pory"
	walk_up
# 749 "data/maps/Route110/scripts.pory"
	walk_up
# 750 "data/maps/Route110/scripts.pory"
	step_end
# 751 "data/maps/Route110/scripts.pory"

# 752 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit3:
# 753 "data/maps/Route110/scripts.pory"
	walk_up
# 754 "data/maps/Route110/scripts.pory"
	walk_up
# 755 "data/maps/Route110/scripts.pory"
	walk_up
# 756 "data/maps/Route110/scripts.pory"
	walk_up
# 757 "data/maps/Route110/scripts.pory"
	walk_up
# 758 "data/maps/Route110/scripts.pory"
	step_end
# 759 "data/maps/Route110/scripts.pory"

# 760 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit4:
# 761 "data/maps/Route110/scripts.pory"
	walk_up
# 762 "data/maps/Route110/scripts.pory"
	walk_up
# 763 "data/maps/Route110/scripts.pory"
	walk_up
# 764 "data/maps/Route110/scripts.pory"
	walk_up
# 765 "data/maps/Route110/scripts.pory"
	walk_up
# 766 "data/maps/Route110/scripts.pory"
	step_end
# 767 "data/maps/Route110/scripts.pory"

# 768 "data/maps/Route110/scripts.pory"
Route110_Text_WeCantTalkAboutAquaActivities:
# 769 "data/maps/Route110/scripts.pory"
	.string "Team Aqua's activities…\nWe can't talk about them yet.$"
# 770 "data/maps/Route110/scripts.pory"

# 771 "data/maps/Route110/scripts.pory"
Route110_Text_KickUpARuckus:
# 772 "data/maps/Route110/scripts.pory"
	.string "I want to get going to Slateport and\nkick up a ruckus!$"
# 773 "data/maps/Route110/scripts.pory"

# 774 "data/maps/Route110/scripts.pory"
Route110_Text_MyFirstJobInAqua:
# 775 "data/maps/Route110/scripts.pory"
	.string "This is my first job after joining\nTeam Aqua.\pIt's a little scary.$"
# 776 "data/maps/Route110/scripts.pory"

# 777 "data/maps/Route110/scripts.pory"
Route110_Text_AquaActionsBringSmiles:
# 778 "data/maps/Route110/scripts.pory"
	.string "Team Aqua's actions should bring\nsmiles to people's faces!$"
# 779 "data/maps/Route110/scripts.pory"

# 780 "data/maps/Route110/scripts.pory"
Route110_Text_MayRoute110Intro:
# 781 "data/maps/Route110/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Hey, {PLAYER}!\nIt's been ages!\lNice, timing, too.\pI was just searching for Pokémon, you\nknow?\pMy dad is always going on about how\nnature used to be even more diverse,\lway back in the day.\pHe says that there used to be way more\nkinds of Pokémon that there are now!\pSo that's why we do fieldwork, him and\nme.\pWe really want to find out what\nhappened to those Pokémon in the\lpast.\pOn my journey up to now, I've met a\nlot of different Pokémon, and I think\lI've gotten to understand a lot of\lthem, too.$"
# 782 "data/maps/Route110/scripts.pory"

# 783 "data/maps/Route110/scripts.pory"
Route110_Text_MayLetsBattle:
# 784 "data/maps/Route110/scripts.pory"
	.string "Me and my Pokémon have really grown.\nSo… How about a little battle?$"
# 785 "data/maps/Route110/scripts.pory"

# 786 "data/maps/Route110/scripts.pory"
Route110_Text_MayDefeated:
# 787 "data/maps/Route110/scripts.pory"
	.string "Yikes!\nYou're better than I expected!$"
# 788 "data/maps/Route110/scripts.pory"

# 789 "data/maps/Route110/scripts.pory"
Route110_Text_MayMonWornOut:
# 790 "data/maps/Route110/scripts.pory"
	.string "{PLAYER}, you've been busy training,\ntoo, haven't you?\pOops!\nBut look at us!\lOur teams looks pretty tired.\lLet's get them taken care of first.$"
# 791 "data/maps/Route110/scripts.pory"

# 792 "data/maps/Route110/scripts.pory"
Route110_Text_MayTakeThis:
# 793 "data/maps/Route110/scripts.pory"
	.string "And now I think you deserve a reward,\ntoo!\pHere, this is from me!$"
# 794 "data/maps/Route110/scripts.pory"

# 795 "data/maps/Route110/scripts.pory"
Route110_Text_MayExplainItemfinder:
# 796 "data/maps/Route110/scripts.pory"
	.string "That's a {COLOR BLUE}Dowsing Machine{COLOR DARK_GRAY}.\pTry it out-if there's a hidden item\nanywhere near you, that little thing\lwill react to tell you.\pPay attention, and it'll lead you right\nto items!\pAnd it's fun to see all those waving\nbits above your head.\lTry it, and I bet you'll get hooked!\pCareful--you won't be able to sneak\nup on Pokémon while you wear it!\pSee you later then, {PLAYER}!\nLet's meet again!\pI hope we'll both be able to meet even\nmore Pokémon on our journeys!$"
# 797 "data/maps/Route110/scripts.pory"

# 798 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanRoute110Intro:
# 799 "data/maps/Route110/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: Hey, {PLAYER}.\nSo this is where you've been.\lHow've things been going?\pI was just checking out the Pokémon\naround here to help with my dad's\lresearch.\pHe says that long, long time ago,\nnature used to be way more diverse\land there were lots more kinds of\lPokémon, too.\pMy dad and I want to learn more about\nthose Pokémon from the past, you\lknow? That's why we do fieldwork.\lAnd this journey has really helped.\pI've met a lot of Pokémon on my way\nhere and learned about them, too.$"
# 800 "data/maps/Route110/scripts.pory"

# 801 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanLetsBattle:
# 802 "data/maps/Route110/scripts.pory"
	.string "Which reminds me!\pCome on! It's the first time we've met\nin ages, so let's have a battle!\pShow me what you and your team\nhave accomplished on your journey,\l{PLAYER}!$"
# 803 "data/maps/Route110/scripts.pory"

# 804 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanDefeated:
# 805 "data/maps/Route110/scripts.pory"
	.string "Whoa!\nNot bad!$"
# 806 "data/maps/Route110/scripts.pory"

# 807 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanMonWornOut:
# 808 "data/maps/Route110/scripts.pory"
	.string "Sheesh, {PLAYER}, when did you go and\ntrain your Pokémon up that well?\pIt's like, I don't know…\nIt's pretty surprising, OK!\pBoth our teams look pretty wiped out\nafter that, huh!\lHere, let me help them out.$"
# 809 "data/maps/Route110/scripts.pory"

# 810 "data/maps/Route110/scripts.pory"
Route110_Text_MonHPRestored:
# 811 "data/maps/Route110/scripts.pory"
	.string "You had your Pokémon's HP restored!$"
# 812 "data/maps/Route110/scripts.pory"

# 813 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanTakeThis:
# 814 "data/maps/Route110/scripts.pory"
	.string "And this is for you.$"
# 815 "data/maps/Route110/scripts.pory"

# 816 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanExplainItemfinder:
# 817 "data/maps/Route110/scripts.pory"
	.string "That's a {COLOR BLUE}Dowsing Machine{COLOR DARK_GRAY}.\pUse it to root around for items that\naren't visible.\pIf it senses something nearby, it'll\nreact, see?\pTruth is, once I started using it, I\ngot pretty hooked on it.\lIt's addicting!\lBut I recommend you give it a try.\pCareful though, you won't be able to\nsneak up on Pokémon while you wear it!\pI guess I'm off to get started\nsurveying the next area then.\pI hope you meet a lot of Pokémon, too,\n{PLAYER}!$"
# 818 "data/maps/Route110/scripts.pory"

# 819 "data/maps/Route110/scripts.pory"
Route110_Text_RideBikeAtFullSpeed:
# 820 "data/maps/Route110/scripts.pory"
	.string "Wouldn't it be great to ride a Bike\nat full speed on the Cycling Road?$"
# 821 "data/maps/Route110/scripts.pory"

# 822 "data/maps/Route110/scripts.pory"
Route110_Text_HairStreamsBehindMe:
# 823 "data/maps/Route110/scripts.pory"
	.string "How do you like the way my raven-\n"
# 824 "data/maps/Route110/scripts.pory"
	.string "colored hair streams behind me?\p"
# 825 "data/maps/Route110/scripts.pory"
	.string "I grew my hair out just for that.$"
# 826 "data/maps/Route110/scripts.pory"

# 827 "data/maps/Route110/scripts.pory"
Route110_Text_YouGotBikeFromRydel:
# 828 "data/maps/Route110/scripts.pory"
	.string "Oh, hey, you got that Bike from Rydel!\p"
# 829 "data/maps/Route110/scripts.pory"
	.string "Oh, it's glaringly obvious.\n"
# 830 "data/maps/Route110/scripts.pory"
	.string "It says right on your bike…\p"
# 831 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\n"
# 832 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\p"
# 833 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\n"
# 834 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\p"
# 835 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\n"
# 836 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\p"
# 837 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\n"
# 838 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel,\p"
# 839 "data/maps/Route110/scripts.pory"
	.string "Rydel, Rydel, Rydel, Rydel, Rydel…\n"
# 840 "data/maps/Route110/scripts.pory"
	.string "That name's everywhere.\p"
# 841 "data/maps/Route110/scripts.pory"
	.string "You should ride it around all over\n"
# 842 "data/maps/Route110/scripts.pory"
	.string "the place-it's good advertising!$"
# 843 "data/maps/Route110/scripts.pory"

# 844 "data/maps/Route110/scripts.pory"
Route110_Text_TwoRoads:
# 845 "data/maps/Route110/scripts.pory"
	.string "The two roads, one above, one below…\p"
# 846 "data/maps/Route110/scripts.pory"
	.string "A road each for people and Pokémon.\n"
# 847 "data/maps/Route110/scripts.pory"
	.string "Perhaps that is right and fair.$"
# 848 "data/maps/Route110/scripts.pory"

# 849 "data/maps/Route110/scripts.pory"
Route110_Text_WalkOnTheLowRoad:
# 850 "data/maps/Route110/scripts.pory"
	.string "I don't have a Bike, so I'll take\n"
# 851 "data/maps/Route110/scripts.pory"
	.string "a leisurely walk on the low road.$"
# 852 "data/maps/Route110/scripts.pory"

# 853 "data/maps/Route110/scripts.pory"
Route110_Text_BikeTechniques:
# 854 "data/maps/Route110/scripts.pory"
	.string "Learning techniques will make Bike\n"
# 855 "data/maps/Route110/scripts.pory"
	.string "riding even more fun.\p"
# 856 "data/maps/Route110/scripts.pory"
	.string "There are some places that you can\n"
# 857 "data/maps/Route110/scripts.pory"
	.string "reach only by using a Bike technique.$"
# 858 "data/maps/Route110/scripts.pory"

# 859 "data/maps/Route110/scripts.pory"
Route110_Text_WhichShouldIChoose:
# 860 "data/maps/Route110/scripts.pory"
	.string "Which should I choose?\pMake a beeline for Mauville on the\nCycling Road, or take the low road\land look for Pokémon?$"
# 861 "data/maps/Route110/scripts.pory"

# 862 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingChallengeResultSummary:
# 863 "data/maps/Route110/scripts.pory"
	.string "Number of collisions:\n"
# 864 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_1}!\p"
# 865 "data/maps/Route110/scripts.pory"
	.string "Total time:\n"
# 866 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_2}!$"
# 867 "data/maps/Route110/scripts.pory"

# 868 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionOk:
# 869 "data/maps/Route110/scripts.pory"
	.string "I would consider you a work in\n"
# 870 "data/maps/Route110/scripts.pory"
	.string "progress.\p"
# 871 "data/maps/Route110/scripts.pory"
	.string "Still, I hope you don't forget the\n"
# 872 "data/maps/Route110/scripts.pory"
	.string "sheer pleasure of cycling.$"
# 873 "data/maps/Route110/scripts.pory"

# 874 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBad:
# 875 "data/maps/Route110/scripts.pory"
	.string "My word… Your cycling skills border\n"
# 876 "data/maps/Route110/scripts.pory"
	.string "on terrifying.\p"
# 877 "data/maps/Route110/scripts.pory"
	.string "Most certainly, you need much more\n"
# 878 "data/maps/Route110/scripts.pory"
	.string "practice riding.$"
# 879 "data/maps/Route110/scripts.pory"

# 880 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionWorst:
# 881 "data/maps/Route110/scripts.pory"
	.string "…I am aghast…\p"
# 882 "data/maps/Route110/scripts.pory"
	.string "You're perhaps not cut out for this\n"
# 883 "data/maps/Route110/scripts.pory"
	.string "unfortunate cycling business.\p"
# 884 "data/maps/Route110/scripts.pory"
	.string "You ought to give serious thought to\n"
# 885 "data/maps/Route110/scripts.pory"
	.string "returning that Bike to Rydel.$"
# 886 "data/maps/Route110/scripts.pory"

# 887 "data/maps/Route110/scripts.pory"
Route110_Text_RatedForNumberOfCollisions:
# 888 "data/maps/Route110/scripts.pory"
	.string "This is Cycling Road.\p"
# 889 "data/maps/Route110/scripts.pory"
	.string "If you were to ride from Mauville to\n"
# 890 "data/maps/Route110/scripts.pory"
	.string "Slateport on a Mach Bike, you would\l"
# 891 "data/maps/Route110/scripts.pory"
	.string "be rated for the number of collisions\l"
# 892 "data/maps/Route110/scripts.pory"
	.string "and your total time.$"
# 893 "data/maps/Route110/scripts.pory"

# 894 "data/maps/Route110/scripts.pory"
Route110_Text_AlwaysAimHigher:
# 895 "data/maps/Route110/scripts.pory"
	.string "Regardless of the results, I count on\n"
# 896 "data/maps/Route110/scripts.pory"
	.string "seeing more challenges from you.\l"
# 897 "data/maps/Route110/scripts.pory"
	.string "Always aim higher!$"
# 898 "data/maps/Route110/scripts.pory"

# 899 "data/maps/Route110/scripts.pory"
Route110_Text_AcroBikesDoNotQualify:
# 900 "data/maps/Route110/scripts.pory"
	.string "On this Cycling Road, those riding\n"
# 901 "data/maps/Route110/scripts.pory"
	.string "Mach Bikes are rated for their number\l"
# 902 "data/maps/Route110/scripts.pory"
	.string "of collisions and their total times.\p"
# 903 "data/maps/Route110/scripts.pory"
	.string "Acro Bikes do not qualify for rating.\n"
# 904 "data/maps/Route110/scripts.pory"
	.string "They are easy to turn, so it's not fair.$"
# 905 "data/maps/Route110/scripts.pory"

# 906 "data/maps/Route110/scripts.pory"
Route110_Text_SlateportCitySign:
# 907 "data/maps/Route110/scripts.pory"
	.string "Route 110\n"
# 908 "data/maps/Route110/scripts.pory"
	.string "{DOWN_ARROW} Slateport City$"
# 909 "data/maps/Route110/scripts.pory"

# 910 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingRoadSign:
# 911 "data/maps/Route110/scripts.pory"
	.string "Seaside Cycling Road$"
# 912 "data/maps/Route110/scripts.pory"

# 913 "data/maps/Route110/scripts.pory"
Route110_Text_AquaWasHere:
# 914 "data/maps/Route110/scripts.pory"
	.string "“Team Aqua was here!”\p"
# 915 "data/maps/Route110/scripts.pory"
	.string "Someone painted that onto this sign,\n"
# 916 "data/maps/Route110/scripts.pory"
	.string "but then someone else painted over it.\p"
# 917 "data/maps/Route110/scripts.pory"
	.string "“Team Magma rules!” is what it\n"
# 918 "data/maps/Route110/scripts.pory"
	.string "says now.$"
# 919 "data/maps/Route110/scripts.pory"

# 920 "data/maps/Route110/scripts.pory"
Route110_Text_Route103Sign:
# 921 "data/maps/Route110/scripts.pory"
	.string "Route 110\n"
# 922 "data/maps/Route110/scripts.pory"
	.string "{LEFT_ARROW} Route 103$"
# 923 "data/maps/Route110/scripts.pory"

# 924 "data/maps/Route110/scripts.pory"
Route110_Text_SeasideParkingSign:
# 925 "data/maps/Route110/scripts.pory"
	.string "Seaside Parking$"
# 926 "data/maps/Route110/scripts.pory"

# 927 "data/maps/Route110/scripts.pory"
Route110_Text_MauvilleCitySign:
# 928 "data/maps/Route110/scripts.pory"
	.string "Route 110\n"
# 929 "data/maps/Route110/scripts.pory"
	.string "{UP_ARROW} Mauville City$"
# 930 "data/maps/Route110/scripts.pory"

# 931 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsPrlzSleep:
# 932 "data/maps/Route110/scripts.pory"
	.string "Trainer Tips\p"
# 933 "data/maps/Route110/scripts.pory"
	.string "The foe can be made helpless by\n"
# 934 "data/maps/Route110/scripts.pory"
	.string "paralyzing it or causing it to sleep.\p"
# 935 "data/maps/Route110/scripts.pory"
	.string "It is an important technique for\n"
# 936 "data/maps/Route110/scripts.pory"
	.string "Pokémon battles.$"
# 937 "data/maps/Route110/scripts.pory"

# 938 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsRegisterItems:
# 939 "data/maps/Route110/scripts.pory"
	.string "Trainer Tips\p"
# 940 "data/maps/Route110/scripts.pory"
	.string "The items in the Bag can be reorganized\n"
# 941 "data/maps/Route110/scripts.pory"
	.string "by pressing Select.$"
# 942 "data/maps/Route110/scripts.pory"

# 943 "data/maps/Route110/scripts.pory"
Route110_Text_TrickHouseSign:
# 944 "data/maps/Route110/scripts.pory"
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
# 945 "data/maps/Route110/scripts.pory"
	.string "to reach the wondrous Trick House.”$"
# 946 "data/maps/Route110/scripts.pory"

# 947 "data/maps/Route110/scripts.pory"
Route110_Text_BestRecord:
# 948 "data/maps/Route110/scripts.pory"
	.string "The best record to date…\p"
# 949 "data/maps/Route110/scripts.pory"
	.string "No. of collisions: {STR_VAR_1}\p"
# 950 "data/maps/Route110/scripts.pory"
	.string "Elapsed time: {STR_VAR_2}$"
# 951 "data/maps/Route110/scripts.pory"

# 952 "data/maps/Route110/scripts.pory"
Route110_Text_ThereIsNoRecord:
# 953 "data/maps/Route110/scripts.pory"
	.string "The best record to date…\p"
# 954 "data/maps/Route110/scripts.pory"
	.string "No one seems to have taken the\n"
# 955 "data/maps/Route110/scripts.pory"
	.string "challenge. There is no record…$"
# 956 "data/maps/Route110/scripts.pory"

# 957 "data/maps/Route110/scripts.pory"
Route110_Text_ImagineSeeingYouHere:
# 958 "data/maps/Route110/scripts.pory"
	.string "{COLOR RED}Prof. Birch{COLOR DARK_GRAY}: Oh, {PLAYER}!\nImagine seeing you here!\pI hope you haven't had any trouble with\nthose troublesome Team Aqua/Magma.\pI heard they've been causing quite a\nruckus in some towns lately.\pBut anyway, how has your journey been\nso far?\pAnd speaking of which, where might my\n{RIVAL} be?$"
# 959 "data/maps/Route110/scripts.pory"

# 960 "data/maps/Route110/scripts.pory"
Route110_Text_HeardYouInstallMatchCall:
# 961 "data/maps/Route110/scripts.pory"
	.string "Oh, I see!\nYou two are running separately.\lWell, that's fine.\pOh, yes, I heard that your Pokénav had\nthe Match Call system installed.\pWell, then, I should register you in my\nPokénav as well.\pThat way, even when we're apart, I can\nrate your Pokédex anytime.$"
# 962 "data/maps/Route110/scripts.pory"

# 963 "data/maps/Route110/scripts.pory"
Route110_Text_RegisteredBirchInPokenav:
# 964 "data/maps/Route110/scripts.pory"
	.string "Registered Prof. Birch\n"
# 965 "data/maps/Route110/scripts.pory"
	.string "in the Pokénav.$"
# 966 "data/maps/Route110/scripts.pory"

# 967 "data/maps/Route110/scripts.pory"
Route110_Text_KeepAnEyeOutForRival:
# 968 "data/maps/Route110/scripts.pory"
	.string "Oh, and {PLAYER}…\pPlease keep an eye out for my\n{RIVAL}.\pWell, I had better get going, then.\nSee you again, {PLAYER}!$"

Route110_EventScript_AquaGruntsScene1::
# 979 "data/maps/Route110/scripts.pory"
	lockall
# 980 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 981 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_AquaGruntsScene
	end


Route110_EventScript_AquaGruntsScene2::
# 986 "data/maps/Route110/scripts.pory"
	lockall
# 987 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 988 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_AquaGruntsScene
	end


Route110_EventScript_AquaGruntsScene3::
# 993 "data/maps/Route110/scripts.pory"
	lockall
# 994 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 995 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_AquaGruntsScene
	end


Route110_EventScript_AquaGruntsScene4::
# 1000 "data/maps/Route110/scripts.pory"
	lockall
# 1001 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 1002 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_AquaGruntsScene
	end


Route110_EventScript_AquaGruntsScene::
# 1007 "data/maps/Route110/scripts.pory"
	delay 32
# 1008 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_AquaGruntsScene_Text_0
# 1009 "data/maps/Route110/scripts.pory"
	applymovement 23, Common_Movement_WalkInPlaceUp
# 1010 "data/maps/Route110/scripts.pory"
	waitmovement 23
# 1011 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_AquaGruntsScene_Text_1
# 1012 "data/maps/Route110/scripts.pory"
	applymovement 25, Common_Movement_WalkInPlaceUp
# 1013 "data/maps/Route110/scripts.pory"
	waitmovement 25
# 1014 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_AquaGruntsScene_Text_2
# 1015 "data/maps/Route110/scripts.pory"
	closemessage
# 1016 "data/maps/Route110/scripts.pory"
	delay 8
# 1017 "data/maps/Route110/scripts.pory"
	applymovement 22, Route110_Movement_AquaGruntsLeave22
# 1018 "data/maps/Route110/scripts.pory"
	applymovement 23, Route110_Movement_AquaGruntsLeave23
# 1019 "data/maps/Route110/scripts.pory"
	applymovement 24, Route110_Movement_AquaGruntsLeave24
# 1020 "data/maps/Route110/scripts.pory"
	applymovement 25, Route110_Movement_AquaGruntsLeave25
# 1021 "data/maps/Route110/scripts.pory"
	applymovement 26, Route110_Movement_AquaGruntsLeave26
# 1022 "data/maps/Route110/scripts.pory"
	waitmovement 22
# 1023 "data/maps/Route110/scripts.pory"
	removeobject 22
# 1024 "data/maps/Route110/scripts.pory"
	removeobject 23
# 1025 "data/maps/Route110/scripts.pory"
	removeobject 24
# 1026 "data/maps/Route110/scripts.pory"
	removeobject 25
# 1027 "data/maps/Route110/scripts.pory"
	removeobject 26
# 1028 "data/maps/Route110/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_TEAM_AQUA
# 1029 "data/maps/Route110/scripts.pory"
	delay 64
# 1030 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
	end


# 1034 "data/maps/Route110/scripts.pory"
Route110_Movement_AquaGruntsLeave22:
# 1035 "data/maps/Route110/scripts.pory"
	walk_right
# 1036 "data/maps/Route110/scripts.pory"
	walk_up
# 1036 "data/maps/Route110/scripts.pory"
	walk_up
# 1036 "data/maps/Route110/scripts.pory"
	walk_up
# 1036 "data/maps/Route110/scripts.pory"
	walk_up
# 1036 "data/maps/Route110/scripts.pory"
	walk_up
	step_end

# 1039 "data/maps/Route110/scripts.pory"
Route110_Movement_AquaGruntsLeave23:
# 1040 "data/maps/Route110/scripts.pory"
	walk_up
# 1040 "data/maps/Route110/scripts.pory"
	walk_up
# 1040 "data/maps/Route110/scripts.pory"
	walk_up
# 1040 "data/maps/Route110/scripts.pory"
	walk_up
# 1040 "data/maps/Route110/scripts.pory"
	walk_up
	step_end

# 1043 "data/maps/Route110/scripts.pory"
Route110_Movement_AquaGruntsLeave24:
# 1044 "data/maps/Route110/scripts.pory"
	walk_up
# 1044 "data/maps/Route110/scripts.pory"
	walk_up
# 1044 "data/maps/Route110/scripts.pory"
	walk_up
# 1044 "data/maps/Route110/scripts.pory"
	walk_up
# 1044 "data/maps/Route110/scripts.pory"
	walk_up
	step_end

# 1047 "data/maps/Route110/scripts.pory"
Route110_Movement_AquaGruntsLeave25:
# 1048 "data/maps/Route110/scripts.pory"
	walk_up
# 1048 "data/maps/Route110/scripts.pory"
	walk_up
# 1048 "data/maps/Route110/scripts.pory"
	walk_up
# 1048 "data/maps/Route110/scripts.pory"
	walk_up
# 1048 "data/maps/Route110/scripts.pory"
	walk_up
	step_end

# 1051 "data/maps/Route110/scripts.pory"
Route110_Movement_AquaGruntsLeave26:
# 1052 "data/maps/Route110/scripts.pory"
	walk_up
# 1052 "data/maps/Route110/scripts.pory"
	walk_up
# 1052 "data/maps/Route110/scripts.pory"
	walk_up
# 1052 "data/maps/Route110/scripts.pory"
	walk_up
	step_end

Route110_EventScript_ChallengeReactionBest::
# 1058 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_ChallengeReactionBest_Text_0
# 1059 "data/maps/Route110/scripts.pory"
	checkitem ITEM_TM_WILD_CHARGE, 1
# 1060 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route110_EventScript_ChallengeReactionBest_2
Route110_EventScript_ChallengeReactionBest_1:
# 1065 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
	end

Route110_EventScript_ChallengeReactionBest_2:
# 1061 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_ChallengeReactionBest_Text_1
# 1062 "data/maps/Route110/scripts.pory"
	delay 8
# 1063 "data/maps/Route110/scripts.pory"
	giveitem ITEM_TM_WILD_CHARGE
	goto Route110_EventScript_ChallengeReactionBest_1


Route110_EventScript_ChallengeReactionGood::
# 1070 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_ChallengeReactionGood_Text_0
# 1071 "data/maps/Route110/scripts.pory"
	checkitem ITEM_TM_FLAME_CHARGE, 1
# 1072 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route110_EventScript_ChallengeReactionGood_2
Route110_EventScript_ChallengeReactionGood_1:
# 1077 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
	end

Route110_EventScript_ChallengeReactionGood_2:
# 1073 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_ChallengeReactionGood_Text_1
# 1074 "data/maps/Route110/scripts.pory"
	delay 8
# 1075 "data/maps/Route110/scripts.pory"
	giveitem ITEM_TM_FLAME_CHARGE
	goto Route110_EventScript_ChallengeReactionGood_1


Route110_EventScript_AquaGruntsScene_Text_0:
# 1008 "data/maps/Route110/scripts.pory"
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: Let's keep going through Route\n110 and head for Mt. Chimney!$"

Route110_EventScript_AquaGruntsScene_Text_1:
# 1011 "data/maps/Route110/scripts.pory"
	.string "Wow, that's quite far.\pWhy don't we take a rest in{COLOR BLUE}Mauville\nCity{COLOR DARK_GRAY}. It's on the way.$"

Route110_EventScript_AquaGruntsScene_Text_2:
# 1014 "data/maps/Route110/scripts.pory"
	.string "Great idea!$"

Route110_EventScript_ChallengeReactionBest_Text_0:
# 1058 "data/maps/Route110/scripts.pory"
	.string "Bravo!\nSplendid showing!\pYour love for cycling comes from deep\nwithing your heart.\pYou've shaken me to my very soul!$"

Route110_EventScript_ChallengeReactionBest_Text_1:
# 1061 "data/maps/Route110/scripts.pory"
	.string "Please, take this TM as a reward for\nyour cycling mastery!$"

Route110_EventScript_ChallengeReactionGood_Text_0:
# 1070 "data/maps/Route110/scripts.pory"
	.string "Your technique is remarkable.\pI suggest you speed up a bit while still\navoiding collisions.$"

Route110_EventScript_ChallengeReactionGood_Text_1:
# 1073 "data/maps/Route110/scripts.pory"
	.string "Here, take this TM to commemorate your\neffort.$"
