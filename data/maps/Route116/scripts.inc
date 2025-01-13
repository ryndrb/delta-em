# 1 "data/maps/Route116/scripts.pory"

# 2 "data/maps/Route116/scripts.pory"
.set LOCALID_BRINEY, 11
# 3 "data/maps/Route116/scripts.pory"
.set LOCALID_WANDAS_BF_OUTSIDE, 21
# 4 "data/maps/Route116/scripts.pory"

# 5 "data/maps/Route116/scripts.pory"
Route116_MapScripts::
# 6 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_OnTransition
# 7 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route116_OnLoad
# 8 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route116_OnFrame
# 9 "data/maps/Route116/scripts.pory"
	.byte 0
# 10 "data/maps/Route116/scripts.pory"

# 11 "data/maps/Route116/scripts.pory"
Route116_OnTransition:
# 12 "data/maps/Route116/scripts.pory"
	call_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_EventScript_SetWandasBoyfriendPos
# 13 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 14 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH, AbnormalWeather_StartGroudonWeather
# 15 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH, AbnormalWeather_StartGroudonWeather
# 16 "data/maps/Route116/scripts.pory"
	end
# 17 "data/maps/Route116/scripts.pory"

# 18 "data/maps/Route116/scripts.pory"
Route116_EventScript_SetWandasBoyfriendPos::
# 19 "data/maps/Route116/scripts.pory"
	setobjectxyperm LOCALID_WANDAS_BF_OUTSIDE, 47, 11
# 20 "data/maps/Route116/scripts.pory"
    setobjectmovementtype LOCALID_WANDAS_BF_OUTSIDE, MOVEMENT_TYPE_FACE_UP
# 21 "data/maps/Route116/scripts.pory"
	return
# 22 "data/maps/Route116/scripts.pory"

# 23 "data/maps/Route116/scripts.pory"
Route116_OnLoad:
# 24 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute116North
# 25 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute116South
# 26 "data/maps/Route116/scripts.pory"
	end
# 27 "data/maps/Route116/scripts.pory"

# 28 "data/maps/Route116/scripts.pory"
Route116_OnFrame:
# 29 "data/maps/Route116/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 30 "data/maps/Route116/scripts.pory"
	.2byte 0
# 31 "data/maps/Route116/scripts.pory"

# 32 "data/maps/Route116/scripts.pory"
Route116_EventScript_WandasBoyfriend::
# 33 "data/maps/Route116/scripts.pory"
	lock
# 34 "data/maps/Route116/scripts.pory"
	faceplayer
# 35 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_EventScript_BoyfriendGruntLeftTunnel
# 36 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, Route116_EventScript_BoyfriendGruntInTunnel
# 37 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_WantToDigTunnel, MSGBOX_DEFAULT
# 38 "data/maps/Route116/scripts.pory"
	release
# 39 "data/maps/Route116/scripts.pory"
	end
# 40 "data/maps/Route116/scripts.pory"

# 41 "data/maps/Route116/scripts.pory"
Route116_EventScript_BoyfriendGruntLeftTunnel::
# 42 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_GoonHightailedItOutOfTunnel, MSGBOX_DEFAULT
# 43 "data/maps/Route116/scripts.pory"
	release
# 44 "data/maps/Route116/scripts.pory"
	end
# 45 "data/maps/Route116/scripts.pory"

# 46 "data/maps/Route116/scripts.pory"
Route116_EventScript_BoyfriendGruntInTunnel::
# 47 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DiggingTunnelWhenGoonOrderedMeOut, MSGBOX_DEFAULT
# 48 "data/maps/Route116/scripts.pory"
	release
# 49 "data/maps/Route116/scripts.pory"
	end
# 50 "data/maps/Route116/scripts.pory"

# 51 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployee::
# 52 "data/maps/Route116/scripts.pory"
	lock
# 53 "data/maps/Route116/scripts.pory"
	faceplayer
# 54 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, Route116_EventScript_TryGiveTMHyperVoiceAgain
# 55 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ThankYouTokenOfAppreciation, MSGBOX_DEFAULT
# 56 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveTMHyperVoice
# 57 "data/maps/Route116/scripts.pory"
	end
# 58 "data/maps/Route116/scripts.pory"

# 59 "data/maps/Route116/scripts.pory"
Route116_EventScript_GiveTMHyperVoice::
# 60 "data/maps/Route116/scripts.pory"
	setflag FLAG_MET_DEVON_EMPLOYEE
# 61 "data/maps/Route116/scripts.pory"
	giveitem ITEM_TM_HYPER_VOICE
# 62 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route116_EventScript_NoRoomForTMHyperVoice
# 63 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TryItOut, MSGBOX_DEFAULT
# 64 "data/maps/Route116/scripts.pory"
	closemessage
# 65 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route116_EventScript_DevonEmployeeExit
# 66 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, Route116_EventScript_DevonEmployeeExit
# 67 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route116_EventScript_DevonEmployeeExit
# 68 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Route116_EventScript_DevonEmployeeExitEast
# 69 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 70 "data/maps/Route116/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 71 "data/maps/Route116/scripts.pory"
	setflag FLAG_RECEIVED_TM_HYPER_VOICE
# 72 "data/maps/Route116/scripts.pory"
	release
# 73 "data/maps/Route116/scripts.pory"
	end
# 74 "data/maps/Route116/scripts.pory"

# 75 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployeeExit::
# 76 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_DevonEmployeeExit
# 77 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 78 "data/maps/Route116/scripts.pory"
	return
# 79 "data/maps/Route116/scripts.pory"

# 80 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployeeExitEast::
# 81 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_DevonEmployeeExitEast
# 82 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 83 "data/maps/Route116/scripts.pory"
	return
# 84 "data/maps/Route116/scripts.pory"

# 85 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryGiveTMHyperVoiceAgain::
# 86 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TokenOfAppreciation, MSGBOX_DEFAULT
# 87 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveTMHyperVoice
# 88 "data/maps/Route116/scripts.pory"
	end
# 89 "data/maps/Route116/scripts.pory"

# 90 "data/maps/Route116/scripts.pory"
Route116_EventScript_NoRoomForTMHyperVoice::
# 91 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_BagIsJamPacked, MSGBOX_DEFAULT
# 92 "data/maps/Route116/scripts.pory"
	release
# 93 "data/maps/Route116/scripts.pory"
	end
# 94 "data/maps/Route116/scripts.pory"

# 95 "data/maps/Route116/scripts.pory"
Route116_Movement_DevonEmployeeExit:
# 96 "data/maps/Route116/scripts.pory"
	walk_left
# 97 "data/maps/Route116/scripts.pory"
	walk_left
# 98 "data/maps/Route116/scripts.pory"
	walk_left
# 99 "data/maps/Route116/scripts.pory"
	walk_left
# 100 "data/maps/Route116/scripts.pory"
	walk_left
# 101 "data/maps/Route116/scripts.pory"
	walk_left
# 102 "data/maps/Route116/scripts.pory"
	walk_left
# 103 "data/maps/Route116/scripts.pory"
	walk_left
# 104 "data/maps/Route116/scripts.pory"
	step_end
# 105 "data/maps/Route116/scripts.pory"

# 106 "data/maps/Route116/scripts.pory"
Route116_Movement_DevonEmployeeExitEast:
# 107 "data/maps/Route116/scripts.pory"
	walk_down
# 108 "data/maps/Route116/scripts.pory"
	walk_left
# 109 "data/maps/Route116/scripts.pory"
	walk_left
# 110 "data/maps/Route116/scripts.pory"
	walk_left
# 111 "data/maps/Route116/scripts.pory"
	walk_left
# 112 "data/maps/Route116/scripts.pory"
	walk_left
# 113 "data/maps/Route116/scripts.pory"
	walk_left
# 114 "data/maps/Route116/scripts.pory"
	walk_left
# 115 "data/maps/Route116/scripts.pory"
	walk_left
# 116 "data/maps/Route116/scripts.pory"
	walk_left
# 117 "data/maps/Route116/scripts.pory"
	step_end
# 118 "data/maps/Route116/scripts.pory"

# 119 "data/maps/Route116/scripts.pory"
Route116_EventScript_RouteSignRustboro::
# 120 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RouteSignRustboro, MSGBOX_SIGN
# 121 "data/maps/Route116/scripts.pory"
	end
# 122 "data/maps/Route116/scripts.pory"

# 123 "data/maps/Route116/scripts.pory"
Route116_EventScript_RusturfTunnelSign::
# 124 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RusturfTunnelSign, MSGBOX_SIGN
# 125 "data/maps/Route116/scripts.pory"
	end
# 126 "data/maps/Route116/scripts.pory"

# 127 "data/maps/Route116/scripts.pory"
Route116_EventScript_TunnelersRestHouseSign::
# 128 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TunnelersRestHouse, MSGBOX_SIGN
# 129 "data/maps/Route116/scripts.pory"
	end
# 130 "data/maps/Route116/scripts.pory"

# 131 "data/maps/Route116/scripts.pory"
Route116_EventScript_TrainerTipsBToStopEvolution::
# 132 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBToStopEvolution, MSGBOX_SIGN
# 133 "data/maps/Route116/scripts.pory"
	end
# 134 "data/maps/Route116/scripts.pory"

# 135 "data/maps/Route116/scripts.pory"
Route116_EventScript_TrainerTipsBagHasPockets::
# 136 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBagHasPockets, MSGBOX_SIGN
# 137 "data/maps/Route116/scripts.pory"
	end
# 138 "data/maps/Route116/scripts.pory"

# 139 "data/maps/Route116/scripts.pory"
Route116_EventScript_Briney::
# 140 "data/maps/Route116/scripts.pory"
	lock
# 141 "data/maps/Route116/scripts.pory"
	faceplayer
# 142 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
# 143 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 144 "data/maps/Route116/scripts.pory"
	release
# 145 "data/maps/Route116/scripts.pory"
	end
# 146 "data/maps/Route116/scripts.pory"

# 147 "data/maps/Route116/scripts.pory"
Route116_EventScript_BrineyTrigger::
# 148 "data/maps/Route116/scripts.pory"
	lockall
# 149 "data/maps/Route116/scripts.pory"
    delay 16
# 150 "data/maps/Route116/scripts.pory"
    playse SE_PIN
# 151 "data/maps/Route116/scripts.pory"
    applymovement LOCALID_BRINEY, Common_Movement_ExclamationMark
# 152 "data/maps/Route116/scripts.pory"
    waitmovement LOCALID_BRINEY
# 153 "data/maps/Route116/scripts.pory"
    delay 8
# 154 "data/maps/Route116/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 155 "data/maps/Route116/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 156 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
# 157 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 158 "data/maps/Route116/scripts.pory"
	releaseall
# 159 "data/maps/Route116/scripts.pory"
	end
# 160 "data/maps/Route116/scripts.pory"

# 161 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesMan::
# 162 "data/maps/Route116/scripts.pory"
	lock
# 163 "data/maps/Route116/scripts.pory"
	faceplayer
# 164 "data/maps/Route116/scripts.pory"
	checkitem ITEM_BLACK_GLASSES
# 165 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_PlayerHasGlasses
# 166 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 167 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_FoundGlassesNotOnPlayer
# 168 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses, MSGBOX_DEFAULT
# 169 "data/maps/Route116/scripts.pory"
	release
# 170 "data/maps/Route116/scripts.pory"
	end
# 171 "data/maps/Route116/scripts.pory"

# 172 "data/maps/Route116/scripts.pory"
Route116_EventScript_FoundGlassesNotOnPlayer::
# 173 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CantFindGlassesNotHere, MSGBOX_DEFAULT
# 174 "data/maps/Route116/scripts.pory"
	closemessage
# 175 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit
# 176 "data/maps/Route116/scripts.pory"
	end
# 177 "data/maps/Route116/scripts.pory"

# 178 "data/maps/Route116/scripts.pory"
Route116_EventScript_PlayerHasGlasses::
# 179 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses, MSGBOX_DEFAULT
# 180 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_MayISeeThoseGlasses, MSGBOX_DEFAULT
# 181 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 182 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_FoundGlassesOnPlayer
# 183 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NotWhatImLookingFor, MSGBOX_DEFAULT
# 184 "data/maps/Route116/scripts.pory"
	release
# 185 "data/maps/Route116/scripts.pory"
	end
# 186 "data/maps/Route116/scripts.pory"

# 187 "data/maps/Route116/scripts.pory"
Route116_EventScript_FoundGlassesOnPlayer::
# 188 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NotWhatImLookingForMaybeTheyArentHere, MSGBOX_DEFAULT
# 189 "data/maps/Route116/scripts.pory"
	closemessage
# 190 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit
# 191 "data/maps/Route116/scripts.pory"
	end
# 192 "data/maps/Route116/scripts.pory"

# 193 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExit::
# 194 "data/maps/Route116/scripts.pory"
	delay 20
# 195 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route116_EventScript_GlassesManExitNormal
# 196 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, Route116_EventScript_GlassesManExitNormal
# 197 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route116_EventScript_GlassesManExitNormal
# 198 "data/maps/Route116/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Route116_EventScript_GlassesManExitEast
# 199 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 200 "data/maps/Route116/scripts.pory"
	release
# 201 "data/maps/Route116/scripts.pory"
	end
# 202 "data/maps/Route116/scripts.pory"

# 203 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExitNormal::
# 204 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_GlassesManExit
# 205 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 206 "data/maps/Route116/scripts.pory"
	return
# 207 "data/maps/Route116/scripts.pory"

# 208 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExitEast::
# 209 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_GlassesManExitEast
# 210 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 211 "data/maps/Route116/scripts.pory"
	return
# 212 "data/maps/Route116/scripts.pory"

# 213 "data/maps/Route116/scripts.pory"
Route116_Movement_GlassesManExit:
# 214 "data/maps/Route116/scripts.pory"
	walk_left
# 215 "data/maps/Route116/scripts.pory"
	walk_left
# 216 "data/maps/Route116/scripts.pory"
	walk_left
# 217 "data/maps/Route116/scripts.pory"
	walk_left
# 218 "data/maps/Route116/scripts.pory"
	walk_left
# 219 "data/maps/Route116/scripts.pory"
	walk_left
# 220 "data/maps/Route116/scripts.pory"
	walk_left
# 221 "data/maps/Route116/scripts.pory"
	walk_left
# 222 "data/maps/Route116/scripts.pory"
	walk_left
# 223 "data/maps/Route116/scripts.pory"
	step_end
# 224 "data/maps/Route116/scripts.pory"

# 225 "data/maps/Route116/scripts.pory"
Route116_Movement_GlassesManExitEast:
# 226 "data/maps/Route116/scripts.pory"
	walk_up
# 227 "data/maps/Route116/scripts.pory"
	walk_left
# 228 "data/maps/Route116/scripts.pory"
	walk_left
# 229 "data/maps/Route116/scripts.pory"
	walk_left
# 230 "data/maps/Route116/scripts.pory"
	walk_left
# 231 "data/maps/Route116/scripts.pory"
	walk_left
# 232 "data/maps/Route116/scripts.pory"
	walk_left
# 233 "data/maps/Route116/scripts.pory"
	walk_left
# 234 "data/maps/Route116/scripts.pory"
	walk_left
# 235 "data/maps/Route116/scripts.pory"
	walk_left
# 236 "data/maps/Route116/scripts.pory"
	step_end
# 237 "data/maps/Route116/scripts.pory"

# 238 "data/maps/Route116/scripts.pory"
Route116_EventScript_Joey::
# 239 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOEY, Route116_Text_JoeyIntro, Route116_Text_JoeyDefeat
# 240 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JoeyPostBattle, MSGBOX_AUTOCLOSE
# 241 "data/maps/Route116/scripts.pory"
	end
# 242 "data/maps/Route116/scripts.pory"

# 243 "data/maps/Route116/scripts.pory"
Route116_EventScript_Jose::
# 244 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOSE, Route116_Text_JoseIntro, Route116_Text_JoseDefeat
# 245 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JosePostBattle, MSGBOX_AUTOCLOSE
# 246 "data/maps/Route116/scripts.pory"
	end
# 247 "data/maps/Route116/scripts.pory"

# 248 "data/maps/Route116/scripts.pory"
Route116_EventScript_Jerry::
# 249 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JERRY_1, Route116_Text_JerryIntro, Route116_Text_JerryDefeat, Route116_EventScript_TryRegisterJerryAfterBattle
# 250 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 251 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_RematchJerry
# 252 "data/maps/Route116/scripts.pory"
	setvar VAR_0x8004, TRAINER_JERRY_1
# 253 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 254 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route116_EventScript_TryRegisterJerry
# 255 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostBattle, MSGBOX_DEFAULT
# 256 "data/maps/Route116/scripts.pory"
	release
# 257 "data/maps/Route116/scripts.pory"
	end
# 258 "data/maps/Route116/scripts.pory"

# 259 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterJerryAfterBattle::
# 260 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterJerryAfterBattle
# 261 "data/maps/Route116/scripts.pory"
	release
# 262 "data/maps/Route116/scripts.pory"
	end
# 263 "data/maps/Route116/scripts.pory"

# 264 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterJerryAfterBattle::
# 265 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 266 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 267 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryRegister2, MSGBOX_DEFAULT
# 268 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_JERRY_1
# 269 "data/maps/Route116/scripts.pory"
	release
# 270 "data/maps/Route116/scripts.pory"
	end
# 271 "data/maps/Route116/scripts.pory"

# 272 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterJerry::
# 273 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterJerry
# 274 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostBattle, MSGBOX_DEFAULT
# 275 "data/maps/Route116/scripts.pory"
	release
# 276 "data/maps/Route116/scripts.pory"
	end
# 277 "data/maps/Route116/scripts.pory"

# 278 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterJerry::
# 279 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryRegister1, MSGBOX_DEFAULT
# 280 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_JERRY_1
# 281 "data/maps/Route116/scripts.pory"
	release
# 282 "data/maps/Route116/scripts.pory"
	end
# 283 "data/maps/Route116/scripts.pory"

# 284 "data/maps/Route116/scripts.pory"
Route116_EventScript_RematchJerry::
# 285 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_JERRY_1, Route116_Text_JerryRematchIntro, Route116_Text_JerryRematchDefeat
# 286 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostRematch, MSGBOX_AUTOCLOSE
# 287 "data/maps/Route116/scripts.pory"
	end
# 288 "data/maps/Route116/scripts.pory"

# 289 "data/maps/Route116/scripts.pory"
Route116_EventScript_Clark::
# 290 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_CLARK, Route116_Text_ClarkIntro, Route116_Text_ClarkDefeat
# 291 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ClarkPostBattle, MSGBOX_AUTOCLOSE
# 292 "data/maps/Route116/scripts.pory"
	end
# 293 "data/maps/Route116/scripts.pory"

# 294 "data/maps/Route116/scripts.pory"
Route116_EventScript_Janice::
# 295 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JANICE, Route116_Text_JaniceIntro, Route116_Text_JaniceDefeat
# 296 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JanicePostBattle, MSGBOX_AUTOCLOSE
# 297 "data/maps/Route116/scripts.pory"
	end
# 298 "data/maps/Route116/scripts.pory"

# 299 "data/maps/Route116/scripts.pory"
Route116_EventScript_Karen::
# 300 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_KAREN_1, Route116_Text_KarenIntro, Route116_Text_KarenDefeat, Route116_EventScript_TryRegisterKarenAfterBattle
# 301 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 302 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route116_EventScript_RematchKaren
# 303 "data/maps/Route116/scripts.pory"
	setvar VAR_0x8004, TRAINER_KAREN_1
# 304 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 305 "data/maps/Route116/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route116_EventScript_TryRegisterKaren
# 306 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
# 307 "data/maps/Route116/scripts.pory"
	release
# 308 "data/maps/Route116/scripts.pory"
	end
# 309 "data/maps/Route116/scripts.pory"

# 310 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterKarenAfterBattle::
# 311 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterKarenAfterBattle
# 312 "data/maps/Route116/scripts.pory"
	release
# 313 "data/maps/Route116/scripts.pory"
	end
# 314 "data/maps/Route116/scripts.pory"

# 315 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterKarenAfterBattle::
# 316 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 317 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 318 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister2, MSGBOX_DEFAULT
# 319 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
# 320 "data/maps/Route116/scripts.pory"
	release
# 321 "data/maps/Route116/scripts.pory"
	end
# 322 "data/maps/Route116/scripts.pory"

# 323 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterKaren::
# 324 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterKaren
# 325 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
# 326 "data/maps/Route116/scripts.pory"
	release
# 327 "data/maps/Route116/scripts.pory"
	end
# 328 "data/maps/Route116/scripts.pory"

# 329 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterKaren::
# 330 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister1, MSGBOX_DEFAULT
# 331 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
# 332 "data/maps/Route116/scripts.pory"
	release
# 333 "data/maps/Route116/scripts.pory"
	end
# 334 "data/maps/Route116/scripts.pory"

# 335 "data/maps/Route116/scripts.pory"
Route116_EventScript_RematchKaren::
# 336 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_KAREN_1, Route116_Text_KarenRematchIntro, Route116_Text_KarenRematchDefeat
# 337 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostRematch, MSGBOX_AUTOCLOSE
# 338 "data/maps/Route116/scripts.pory"
	end
# 339 "data/maps/Route116/scripts.pory"

# 340 "data/maps/Route116/scripts.pory"
Route116_EventScript_Sarah::
# 341 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_SARAH, Route116_Text_SarahIntro, Route116_Text_SarahDefeat
# 342 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_SarahPostBattle, MSGBOX_AUTOCLOSE
# 343 "data/maps/Route116/scripts.pory"
	end
# 344 "data/maps/Route116/scripts.pory"

# 345 "data/maps/Route116/scripts.pory"
Route116_EventScript_Dawson::
# 346 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_DAWSON, Route116_Text_DawsonIntro, Route116_Text_DawsonDefeat
# 347 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
# 348 "data/maps/Route116/scripts.pory"
	end
# 349 "data/maps/Route116/scripts.pory"

# 350 "data/maps/Route116/scripts.pory"
Route116_EventScript_Devan::
# 351 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_DEVAN, Route116_Text_DevanIntro, Route116_Text_DevanDefeat
# 352 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DevanPostBattle, MSGBOX_AUTOCLOSE
# 353 "data/maps/Route116/scripts.pory"
	end
# 354 "data/maps/Route116/scripts.pory"

# 355 "data/maps/Route116/scripts.pory"
Route116_EventScript_Johnson::
# 356 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOHNSON, Route116_Text_JohnsonIntro, Route116_Text_JohnsonDefeat
# 357 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JohnsonPostBattle, MSGBOX_AUTOCLOSE
# 358 "data/maps/Route116/scripts.pory"
	end
# 359 "data/maps/Route116/scripts.pory"

# 360 "data/maps/Route116/scripts.pory"
Route116_Text_ScoundrelMadeOffWithPeeko:
# 361 "data/maps/Route116/scripts.pory"
	.string "{COLOR RED}Mr. Briney{COLOR DARK_GRAY}: Ohhh, what am I to do?\pWe were just out on our walk, Peeko\nand I, when we were attacked by an\lodd thug…\pAnd then the scoundrel made off with\nmy darling Peeko!\pWhere are yooouuu!?\nPeeeeeeko!$"
# 362 "data/maps/Route116/scripts.pory"

# 363 "data/maps/Route116/scripts.pory"
Route116_Text_WantToDigTunnel:
# 364 "data/maps/Route116/scripts.pory"
	.string "Grrrrrroar!\pThat goofy goon hightailed it out of\nthe tunnel!\pI can go back to digging!$"
# 365 "data/maps/Route116/scripts.pory"

# 366 "data/maps/Route116/scripts.pory"
Route116_Text_DiggingTunnelWhenGoonOrderedMeOut:
# 367 "data/maps/Route116/scripts.pory"
	.string "Grrrrr!\nWhat's going on?\pI was digging the tunnel without any\ntools when some goon ordered me out!\pThat tunnel's filled with Pokémon that\nreact badly to loud noises.\lThey could cause an uproar.\pThat's why we stopped using heavy\nequipment for tunneling…\pI'm worried that the goon will do\nsomething stupid and startle the\lPokémon into an uproar.$"
# 368 "data/maps/Route116/scripts.pory"

# 369 "data/maps/Route116/scripts.pory"
Route116_Text_GoonHightailedItOutOfTunnel:
# 370 "data/maps/Route116/scripts.pory"
	.string "Nnn…\nRoar!\pThat goofy goon hightailed it out of\nthe tunnel!\lI can go back to digging!$"
# 371 "data/maps/Route116/scripts.pory"

# 372 "data/maps/Route116/scripts.pory"
Route116_Text_ThankYouTokenOfAppreciation:
# 373 "data/maps/Route116/scripts.pory"
	.string "{COLOR RED}Researcher{COLOR DARK_GRAY}: Oh!\nIt's you!\pYou're that Trainer who helped me\nin Petalburg Woods and also got back\lmy case that was stolen and then\lgraciously delivered it to Slateport!\pCaptain Stern informed us that the\ncase arrived safely!\pI thank you very, very much.\pIf I were a rain cloud, I would shower\nyou with gratitude and hail you as a\lhero!\pFor you, wonderful Trainer, I bear good\nnews!\pRecently, our company developed a\nspecial Technical Machine containing\lthe move Hyper Voice.\pAs token of our appreciation for all\nyour help, we would like to give you\lTechnical Machine!$"
# 374 "data/maps/Route116/scripts.pory"

# 375 "data/maps/Route116/scripts.pory"
Route116_Text_TryItOut:
# 376 "data/maps/Route116/scripts.pory"
	.string "Please do try it out!\nThat you and bye-bye!$"
# 377 "data/maps/Route116/scripts.pory"

# 378 "data/maps/Route116/scripts.pory"
Route116_Text_BagIsJamPacked:
# 379 "data/maps/Route116/scripts.pory"
	.string "Your Bag is jam-packed.\n"
# 380 "data/maps/Route116/scripts.pory"
	.string "I can't give you this Repeat Ball.$"
# 381 "data/maps/Route116/scripts.pory"

# 382 "data/maps/Route116/scripts.pory"
Route116_Text_TokenOfAppreciation:
# 383 "data/maps/Route116/scripts.pory"
	.string "As a token of our appreciation for\n"
# 384 "data/maps/Route116/scripts.pory"
	.string "your delivering our package, I have\l"
# 385 "data/maps/Route116/scripts.pory"
	.string "a gift of a new kind of Poké Ball\l"
# 386 "data/maps/Route116/scripts.pory"
	.string "for our most wonderful Trainer!$"
# 387 "data/maps/Route116/scripts.pory"

# 388 "data/maps/Route116/scripts.pory"
Route116_Text_CanYouHelpMeFindGlasses:
# 389 "data/maps/Route116/scripts.pory"
	.string "I dropped my glasses.\nCan you help me find them?$"
# 390 "data/maps/Route116/scripts.pory"

# 391 "data/maps/Route116/scripts.pory"
Route116_Text_MayISeeThoseGlasses:
# 392 "data/maps/Route116/scripts.pory"
	.string "Those glasses!\n"
# 393 "data/maps/Route116/scripts.pory"
	.string "May I see them for a second?$"
# 394 "data/maps/Route116/scripts.pory"

# 395 "data/maps/Route116/scripts.pory"
Route116_Text_NotWhatImLookingForMaybeTheyArentHere:
# 396 "data/maps/Route116/scripts.pory"
	.string "Hmm…\nThese are Black Glasses.\lThey're not what I'm looking for…\pMaybe my glasses aren't around here…$"
# 397 "data/maps/Route116/scripts.pory"

# 398 "data/maps/Route116/scripts.pory"
Route116_Text_CantFindGlassesNotHere:
# 399 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 400 "data/maps/Route116/scripts.pory"
	.string "I can't find my glasses anywhere…\l"
# 401 "data/maps/Route116/scripts.pory"
	.string "Maybe they're not around here…$"
# 402 "data/maps/Route116/scripts.pory"

# 403 "data/maps/Route116/scripts.pory"
Route116_Text_NotWhatImLookingFor:
# 404 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 405 "data/maps/Route116/scripts.pory"
	.string "These are Blackglasses.\l"
# 406 "data/maps/Route116/scripts.pory"
	.string "They're not what I'm looking for…$"
# 407 "data/maps/Route116/scripts.pory"

# 408 "data/maps/Route116/scripts.pory"
Route116_Text_RouteSignRustboro:
# 409 "data/maps/Route116/scripts.pory"
	.string "Route 116\n"
# 410 "data/maps/Route116/scripts.pory"
	.string "{LEFT_ARROW} Rustboro City$"
# 411 "data/maps/Route116/scripts.pory"

# 412 "data/maps/Route116/scripts.pory"
Route116_Text_RusturfTunnelSign:
# 413 "data/maps/Route116/scripts.pory"
	.string "Rusturf Tunnel\n"
# 414 "data/maps/Route116/scripts.pory"
	.string "“Linking Rustboro and Verdanturf\p"
# 415 "data/maps/Route116/scripts.pory"
	.string "“The tunnel project has been\n"
# 416 "data/maps/Route116/scripts.pory"
	.string "canceled.”$"
# 417 "data/maps/Route116/scripts.pory"

# 418 "data/maps/Route116/scripts.pory"
Route116_Text_TunnelersRestHouse:
# 419 "data/maps/Route116/scripts.pory"
	.string "Tunneler's Rest House$"
# 420 "data/maps/Route116/scripts.pory"

# 421 "data/maps/Route116/scripts.pory"
Route116_Text_TrainerTipsBToStopEvolution:
# 422 "data/maps/Route116/scripts.pory"
	.string "Trainer Tips\p"
# 423 "data/maps/Route116/scripts.pory"
	.string "If you want to stop a Pokémon from\n"
# 424 "data/maps/Route116/scripts.pory"
	.string "evolving, press the B Button while it\l"
# 425 "data/maps/Route116/scripts.pory"
	.string "is trying to evolve.\l"
# 426 "data/maps/Route116/scripts.pory"
	.string "The startled Pokémon will stop.\p"
# 427 "data/maps/Route116/scripts.pory"
	.string "This is called an evolution cancel.$"
# 428 "data/maps/Route116/scripts.pory"

# 429 "data/maps/Route116/scripts.pory"
Route116_Text_TrainerTipsBagHasPockets:
# 430 "data/maps/Route116/scripts.pory"
	.string "Trainer Tips\p"
# 431 "data/maps/Route116/scripts.pory"
	.string "Your Bag has several Pockets.\p"
# 432 "data/maps/Route116/scripts.pory"
	.string "Items you obtain are automatically\n"
# 433 "data/maps/Route116/scripts.pory"
	.string "placed in the appropriate Pockets.\p"
# 434 "data/maps/Route116/scripts.pory"
	.string "No Trainer can afford to be without\n"
# 435 "data/maps/Route116/scripts.pory"
	.string "a Bag of their own.$"
