# 1 "data/maps/Route118/scripts.pory"

# 2 "data/maps/Route118/scripts.pory"
.set LOCALID_STEVEN, 19
# 3 "data/maps/Route118/scripts.pory"
.set LOCALID_LATIAS, 22
# 4 "data/maps/Route118/scripts.pory"

# 5 "data/maps/Route118/scripts.pory"
Route118_MapScripts::
# 6 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route118_OnTransition
# 7 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route118_OnLoad
# 8 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route118_OnFrame
# 9 "data/maps/Route118/scripts.pory"
	.byte 0
# 10 "data/maps/Route118/scripts.pory"

# 11 "data/maps/Route118/scripts.pory"
Route118_OnTransition:
# 12 "data/maps/Route118/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 13 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 14 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_EAST, AbnormalWeather_StartGroudonWeather
# 15 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_WEST, AbnormalWeather_StartGroudonWeather
# 16 "data/maps/Route118/scripts.pory"
    call_if_ge VAR_ROUTE118_STATE, 2, Route118_EventScript_StevenLatiasPos
# 17 "data/maps/Route118/scripts.pory"
	end
# 18 "data/maps/Route118/scripts.pory"

# 19 "data/maps/Route118/scripts.pory"
Route118_OnLoad:
# 20 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_EAST, AbnormalWeather_EventScript_PlaceTilesRoute118East
# 21 "data/maps/Route118/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_WEST, AbnormalWeather_EventScript_PlaceTilesRoute118West
# 22 "data/maps/Route118/scripts.pory"
	end
# 23 "data/maps/Route118/scripts.pory"

# 24 "data/maps/Route118/scripts.pory"
Route118_OnFrame:
# 25 "data/maps/Route118/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 26 "data/maps/Route118/scripts.pory"
    map_script_2 VAR_ROUTE118_STATE, 2, Route118_EventScript_PlayerAskToGoBackFromSouthernIsland
# 27 "data/maps/Route118/scripts.pory"
    map_script_2 VAR_ROUTE118_STATE, 4, Route118_EventScript_ReturnFromSouthernIsland
# 28 "data/maps/Route118/scripts.pory"
	.2byte 0
# 29 "data/maps/Route118/scripts.pory"

# 30 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenLatiasPos::
# 31 "data/maps/Route118/scripts.pory"
    setobjectxyperm LOCALID_STEVEN, 45, 15
# 32 "data/maps/Route118/scripts.pory"
    setobjectxyperm LOCALID_LATIAS, 44, 17
# 33 "data/maps/Route118/scripts.pory"
    setobjectmovementtype LOCALID_STEVEN, MOVEMENT_TYPE_FACE_DOWN
# 34 "data/maps/Route118/scripts.pory"
    return
# 35 "data/maps/Route118/scripts.pory"

# 36 "data/maps/Route118/scripts.pory"
Route118_EventScript_GoodRodFisherman::
# 37 "data/maps/Route118/scripts.pory"
	lock
# 38 "data/maps/Route118/scripts.pory"
	faceplayer
# 39 "data/maps/Route118/scripts.pory"
	goto_if_set FLAG_RECEIVED_GOOD_ROD, Route118_EventScript_ReceivedGoodRod
# 40 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_YouAgreeGoodRodIsGood, MSGBOX_YESNO
# 41 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route118_EventScript_ReceiveGoodRod
# 42 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route118_EventScript_DeclineGoodRod
# 43 "data/maps/Route118/scripts.pory"
	end
# 44 "data/maps/Route118/scripts.pory"

# 45 "data/maps/Route118/scripts.pory"
Route118_EventScript_ReceiveGoodRod::
# 46 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_IdenticalMindsTakeThis, MSGBOX_DEFAULT
# 47 "data/maps/Route118/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 48 "data/maps/Route118/scripts.pory"
	setflag FLAG_RECEIVED_GOOD_ROD
# 49 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_TryYourLuckFishing, MSGBOX_DEFAULT
# 50 "data/maps/Route118/scripts.pory"
	release
# 51 "data/maps/Route118/scripts.pory"
	end
# 52 "data/maps/Route118/scripts.pory"

# 53 "data/maps/Route118/scripts.pory"
Route118_EventScript_DeclineGoodRod::
# 54 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DontYouLikeToFish, MSGBOX_DEFAULT
# 55 "data/maps/Route118/scripts.pory"
	release
# 56 "data/maps/Route118/scripts.pory"
	end
# 57 "data/maps/Route118/scripts.pory"

# 58 "data/maps/Route118/scripts.pory"
Route118_EventScript_ReceivedGoodRod::
# 59 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_TryCatchingMonWithGoodRod, MSGBOX_DEFAULT
# 60 "data/maps/Route118/scripts.pory"
	release
# 61 "data/maps/Route118/scripts.pory"
	end
# 62 "data/maps/Route118/scripts.pory"

# 63 "data/maps/Route118/scripts.pory"
Route118_EventScript_Girl::
# 64 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_CanCrossRiversWithSurf, MSGBOX_NPC
# 65 "data/maps/Route118/scripts.pory"
	end
# 66 "data/maps/Route118/scripts.pory"

# 67 "data/maps/Route118/scripts.pory"
Route118_EventScript_RouteSignMauville::
# 68 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RouteSignMauville, MSGBOX_SIGN
# 69 "data/maps/Route118/scripts.pory"
	end
# 70 "data/maps/Route118/scripts.pory"

# 71 "data/maps/Route118/scripts.pory"
Route118_EventScript_RouteSign119::
# 72 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RouteSign119, MSGBOX_SIGN
# 73 "data/maps/Route118/scripts.pory"
	end
# 74 "data/maps/Route118/scripts.pory"

# 75 "data/maps/Route118/scripts.pory"
Route118_EventScript_Rose::
# 76 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_ROSE_1, Route118_Text_RoseIntro, Route118_Text_RoseDefeat, Route118_EventScript_RegisterRose
# 77 "data/maps/Route118/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 78 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route118_EventScript_RematchRose
# 79 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RosePostBattle, MSGBOX_DEFAULT
# 80 "data/maps/Route118/scripts.pory"
	release
# 81 "data/maps/Route118/scripts.pory"
	end
# 82 "data/maps/Route118/scripts.pory"

# 83 "data/maps/Route118/scripts.pory"
Route118_EventScript_RegisterRose::
# 84 "data/maps/Route118/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 85 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 86 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RoseRegister, MSGBOX_DEFAULT
# 87 "data/maps/Route118/scripts.pory"
	register_matchcall TRAINER_ROSE_1
# 88 "data/maps/Route118/scripts.pory"
	release
# 89 "data/maps/Route118/scripts.pory"
	end
# 90 "data/maps/Route118/scripts.pory"

# 91 "data/maps/Route118/scripts.pory"
Route118_EventScript_RematchRose::
# 92 "data/maps/Route118/scripts.pory"
	trainerbattle_rematch TRAINER_ROSE_1, Route118_Text_RoseRematchIntro, Route118_Text_RoseRematchDefeat
# 93 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RosePostRematch, MSGBOX_AUTOCLOSE
# 94 "data/maps/Route118/scripts.pory"
	end
# 95 "data/maps/Route118/scripts.pory"

# 96 "data/maps/Route118/scripts.pory"
Route118_EventScript_Barny::
# 97 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_BARNY, Route118_Text_BarnyIntro, Route118_Text_BarnyDefeat
# 98 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_BarnyPostBattle, MSGBOX_AUTOCLOSE
# 99 "data/maps/Route118/scripts.pory"
	end
# 100 "data/maps/Route118/scripts.pory"

# 101 "data/maps/Route118/scripts.pory"
Route118_EventScript_Wade::
# 102 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_WADE, Route118_Text_WadeIntro, Route118_Text_WadeDefeat
# 103 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_WadePostBattle, MSGBOX_AUTOCLOSE
# 104 "data/maps/Route118/scripts.pory"
	end
# 105 "data/maps/Route118/scripts.pory"

# 106 "data/maps/Route118/scripts.pory"
Route118_EventScript_Dalton::
# 107 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_DALTON_1, Route118_Text_DaltonIntro, Route118_Text_DaltonDefeat, Route118_EventScript_RegisterDalton
# 108 "data/maps/Route118/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 109 "data/maps/Route118/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route118_EventScript_RematchDalton
# 110 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonPostBattle, MSGBOX_DEFAULT
# 111 "data/maps/Route118/scripts.pory"
	release
# 112 "data/maps/Route118/scripts.pory"
	end
# 113 "data/maps/Route118/scripts.pory"

# 114 "data/maps/Route118/scripts.pory"
Route118_EventScript_RegisterDalton::
# 115 "data/maps/Route118/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 116 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 117 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonRegister, MSGBOX_DEFAULT
# 118 "data/maps/Route118/scripts.pory"
	register_matchcall TRAINER_DALTON_1
# 119 "data/maps/Route118/scripts.pory"
	release
# 120 "data/maps/Route118/scripts.pory"
	end
# 121 "data/maps/Route118/scripts.pory"

# 122 "data/maps/Route118/scripts.pory"
Route118_EventScript_RematchDalton::
# 123 "data/maps/Route118/scripts.pory"
	trainerbattle_rematch TRAINER_DALTON_1, Route118_Text_DaltonRematchIntro, Route118_Text_DaltonRematchDefeat
# 124 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonPostRematch, MSGBOX_AUTOCLOSE
# 125 "data/maps/Route118/scripts.pory"
	end
# 126 "data/maps/Route118/scripts.pory"

# 127 "data/maps/Route118/scripts.pory"
Route118_EventScript_Perry::
# 128 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_PERRY, Route118_Text_PerryIntro, Route118_Text_PerryDefeat
# 129 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_PerryPostBattle, MSGBOX_AUTOCLOSE
# 130 "data/maps/Route118/scripts.pory"
	end
# 131 "data/maps/Route118/scripts.pory"

# 132 "data/maps/Route118/scripts.pory"
Route118_EventScript_Chester::
# 133 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_CHESTER, Route118_Text_ChesterIntro, Route118_Text_ChesterDefeat
# 134 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_ChesterPostBattle, MSGBOX_AUTOCLOSE
# 135 "data/maps/Route118/scripts.pory"
	end
# 136 "data/maps/Route118/scripts.pory"

# 137 "data/maps/Route118/scripts.pory"
Route118_EventScript_Deandre::
# 138 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_DEANDRE, Route118_Text_DeandreIntro, Route118_Text_DeandreDefeat
# 139 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DeandrePostBattle, MSGBOX_AUTOCLOSE
# 140 "data/maps/Route118/scripts.pory"
	end
# 141 "data/maps/Route118/scripts.pory"

# 142 "data/maps/Route118/scripts.pory"
Route118_Text_YouAgreeGoodRodIsGood:
# 143 "data/maps/Route118/scripts.pory"
	.string "Hmm!\n"
# 144 "data/maps/Route118/scripts.pory"
	.string "A Good Rod is really good!\p"
# 145 "data/maps/Route118/scripts.pory"
	.string "Wouldn't you agree?$"
# 146 "data/maps/Route118/scripts.pory"

# 147 "data/maps/Route118/scripts.pory"
Route118_Text_IdenticalMindsTakeThis:
# 148 "data/maps/Route118/scripts.pory"
	.string "Hmm!\n"
# 149 "data/maps/Route118/scripts.pory"
	.string "We're of identical minds!\p"
# 150 "data/maps/Route118/scripts.pory"
	.string "Hmm!\n"
# 151 "data/maps/Route118/scripts.pory"
	.string "Take this Good Rod!$"
# 152 "data/maps/Route118/scripts.pory"

# 153 "data/maps/Route118/scripts.pory"
Route118_Text_TryYourLuckFishing:
# 154 "data/maps/Route118/scripts.pory"
	.string "Wherever there's water, try your luck\n"
# 155 "data/maps/Route118/scripts.pory"
	.string "at fishing.$"
# 156 "data/maps/Route118/scripts.pory"

# 157 "data/maps/Route118/scripts.pory"
Route118_Text_DontYouLikeToFish:
# 158 "data/maps/Route118/scripts.pory"
	.string "Don't you like to fish?$"
# 159 "data/maps/Route118/scripts.pory"

# 160 "data/maps/Route118/scripts.pory"
Route118_Text_TryCatchingMonWithGoodRod:
# 161 "data/maps/Route118/scripts.pory"
	.string "Try catching all sorts of Pokémon\n"
# 162 "data/maps/Route118/scripts.pory"
	.string "with your Good Rod.$"
# 163 "data/maps/Route118/scripts.pory"

# 164 "data/maps/Route118/scripts.pory"
Route118_Text_CanCrossRiversWithSurf:
# 165 "data/maps/Route118/scripts.pory"
	.string "Even if there isn't a boat, you can\n"
# 166 "data/maps/Route118/scripts.pory"
	.string "cross rivers and the sea if you have\l"
# 167 "data/maps/Route118/scripts.pory"
	.string "a Pokémon that knows Surf.\p"
# 168 "data/maps/Route118/scripts.pory"
	.string "Pokémon can be counted on to do so\n"
# 169 "data/maps/Route118/scripts.pory"
	.string "much!$"
# 170 "data/maps/Route118/scripts.pory"

# 171 "data/maps/Route118/scripts.pory"
Route118_Text_RouteSignMauville:
# 172 "data/maps/Route118/scripts.pory"
	.string "Route 118\n"
# 173 "data/maps/Route118/scripts.pory"
	.string "{LEFT_ARROW} Mauville City$"
# 174 "data/maps/Route118/scripts.pory"

# 175 "data/maps/Route118/scripts.pory"
Route118_Text_RouteSign119:
# 176 "data/maps/Route118/scripts.pory"
	.string "Route 118\n"
# 177 "data/maps/Route118/scripts.pory"
	.string "{UP_ARROW} Route 119$"

Route118_EventScript_StevenTrigger1::
# 183 "data/maps/Route118/scripts.pory"
	setvar VAR_TEMP_0, 1
# 184 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_Steven
	return


Route118_EventScript_StevenTrigger2::
# 188 "data/maps/Route118/scripts.pory"
	setvar VAR_TEMP_0, 2
# 189 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_Steven
	return


Route118_EventScript_StevenTrigger3::
# 193 "data/maps/Route118/scripts.pory"
	setvar VAR_TEMP_0, 3
# 194 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_Steven
	return


Route118_EventScript_Steven::
# 198 "data/maps/Route118/scripts.pory"
	lock
# 199 "data/maps/Route118/scripts.pory"
	delay 8
# 200 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
# 201 "data/maps/Route118/scripts.pory"
	waitmovement LOCALID_STEVEN
# 202 "data/maps/Route118/scripts.pory"
	delay 8
# 203 "data/maps/Route118/scripts.pory"
	playse SE_PIN
# 204 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_ExclamationMark
# 205 "data/maps/Route118/scripts.pory"
	waitmovement LOCALID_STEVEN
# 206 "data/maps/Route118/scripts.pory"
	waitse
# 207 "data/maps/Route118/scripts.pory"
	delay 16
# 208 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenJumpLedgeToPlayer
# 209 "data/maps/Route118/scripts.pory"
	switch VAR_TEMP_0
# 210 "data/maps/Route118/scripts.pory"
	case 1, Route118_EventScript_Steven_3
# 211 "data/maps/Route118/scripts.pory"
	case 2, Route118_EventScript_Steven_4
# 212 "data/maps/Route118/scripts.pory"
	case 3, Route118_EventScript_Steven_5
Route118_EventScript_Steven_1:
# 214 "data/maps/Route118/scripts.pory"
	waitmovement LOCALID_STEVEN
# 215 "data/maps/Route118/scripts.pory"
	delay 24
# 216 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_Steven_Text_0
# 217 "data/maps/Route118/scripts.pory"
	closemessage
# 218 "data/maps/Route118/scripts.pory"
	delay 32
# 219 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_Steven_Text_1
# 220 "data/maps/Route118/scripts.pory"
	closemessage
# 221 "data/maps/Route118/scripts.pory"
	delay 48
# 222 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_Steven_Text_2
# 223 "data/maps/Route118/scripts.pory"
	closemessage
# 224 "data/maps/Route118/scripts.pory"
	delay 16
# 225 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenKindaLeaving
# 226 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenKindaLeaving
# 227 "data/maps/Route118/scripts.pory"
	waitmovement LOCALID_STEVEN
# 228 "data/maps/Route118/scripts.pory"
	fadenewbgm MUS_DUMMY
# 229 "data/maps/Route118/scripts.pory"
	delay 24
# 230 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
# 231 "data/maps/Route118/scripts.pory"
	waitmovement LOCALID_STEVEN
# 232 "data/maps/Route118/scripts.pory"
	delay 32
# 233 "data/maps/Route118/scripts.pory"
	playse SE_PIN
# 234 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_QuestionMark
# 235 "data/maps/Route118/scripts.pory"
	delay 8
# 236 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 237 "data/maps/Route118/scripts.pory"
	waitmovement LOCALID_STEVEN
# 238 "data/maps/Route118/scripts.pory"
	waitse
# 239 "data/maps/Route118/scripts.pory"
	delay 24
# 240 "data/maps/Route118/scripts.pory"
	playmoncry SPECIES_LATIAS, CRY_MODE_NORMAL
# 241 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_Steven_Text_3
# 242 "data/maps/Route118/scripts.pory"
	waitmoncry
# 243 "data/maps/Route118/scripts.pory"
	closemessage
# 244 "data/maps/Route118/scripts.pory"
	delay 16
# 245 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_Steven_Text_4
# 246 "data/maps/Route118/scripts.pory"
	closemessage
# 247 "data/maps/Route118/scripts.pory"
	delay 32
# 248 "data/maps/Route118/scripts.pory"
	fadescreen FADE_TO_WHITE
# 249 "data/maps/Route118/scripts.pory"
	addobject LOCALID_LATIAS
# 250 "data/maps/Route118/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 251 "data/maps/Route118/scripts.pory"
	delay 16
# 252 "data/maps/Route118/scripts.pory"
	playmoncry SPECIES_LATIAS, CRY_MODE_NORMAL
# 253 "data/maps/Route118/scripts.pory"
	waitmoncry
# 254 "data/maps/Route118/scripts.pory"
	delay 64
# 255 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenGotoLatias
# 256 "data/maps/Route118/scripts.pory"
	waitmovement LOCALID_STEVEN
# 257 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_Steven_Text_5
# 258 "data/maps/Route118/scripts.pory"
	closemessage
# 259 "data/maps/Route118/scripts.pory"
	delay 8
# 260 "data/maps/Route118/scripts.pory"
	playmoncry SPECIES_LATIAS, CRY_MODE_NORMAL
# 261 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_Steven_Text_3
# 262 "data/maps/Route118/scripts.pory"
	waitmoncry
# 263 "data/maps/Route118/scripts.pory"
	closemessage
# 264 "data/maps/Route118/scripts.pory"
	delay 16
# 265 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_Steven_Text_6
# 266 "data/maps/Route118/scripts.pory"
	closemessage
# 267 "data/maps/Route118/scripts.pory"
	delay 8
# 268 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceLeft
# 269 "data/maps/Route118/scripts.pory"
	delay 8
# 270 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 271 "data/maps/Route118/scripts.pory"
	waitmovement LOCALID_STEVEN
# 272 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_Steven_Text_7
# 273 "data/maps/Route118/scripts.pory"
	closemessage
# 274 "data/maps/Route118/scripts.pory"
	delay 16
# 275 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
# 276 "data/maps/Route118/scripts.pory"
	waitmovement LOCALID_STEVEN
# 277 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_Steven_Text_8
# 278 "data/maps/Route118/scripts.pory"
	closemessage
# 279 "data/maps/Route118/scripts.pory"
	delay 16
# 280 "data/maps/Route118/scripts.pory"
	playmoncry SPECIES_LATIAS, CRY_MODE_NORMAL
# 281 "data/maps/Route118/scripts.pory"
	waitmoncry
# 282 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_RideLatias
# 283 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_RideLatias
# 284 "data/maps/Route118/scripts.pory"
	fadescreen FADE_TO_BLACK
# 285 "data/maps/Route118/scripts.pory"
	waitmovement LOCALID_STEVEN
# 286 "data/maps/Route118/scripts.pory"
	removeobject LOCALID_LATIAS
# 287 "data/maps/Route118/scripts.pory"
	removeobject LOCALID_STEVEN
# 288 "data/maps/Route118/scripts.pory"
	setvar VAR_ROUTE118_STATE, 1
# 289 "data/maps/Route118/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 290 "data/maps/Route118/scripts.pory"
	delay 160
# 291 "data/maps/Route118/scripts.pory"
	warpsilent MAP_SOUTHERN_ISLAND_EXTERIOR, 14, 18
# 292 "data/maps/Route118/scripts.pory"
	waitstate
# 293 "data/maps/Route118/scripts.pory"
	release
	end

Route118_EventScript_Steven_3:
# 210 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerFaceSteven1
	goto Route118_EventScript_Steven_1

Route118_EventScript_Steven_4:
# 211 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerFaceSteven2
	goto Route118_EventScript_Steven_1

Route118_EventScript_Steven_5:
# 212 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerFaceSteven3
	goto Route118_EventScript_Steven_1


# 297 "data/maps/Route118/scripts.pory"
Route118_Movement_PlayerFaceSteven1:
# 298 "data/maps/Route118/scripts.pory"
	walk_right
# 299 "data/maps/Route118/scripts.pory"
	walk_in_place_up
	step_end

# 302 "data/maps/Route118/scripts.pory"
Route118_Movement_PlayerFaceSteven2:
	step_end

# 306 "data/maps/Route118/scripts.pory"
Route118_Movement_PlayerFaceSteven3:
# 307 "data/maps/Route118/scripts.pory"
	walk_left
# 308 "data/maps/Route118/scripts.pory"
	walk_in_place_up
	step_end

# 312 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenJumpLedgeToPlayer:
# 313 "data/maps/Route118/scripts.pory"
	jump_2_down
	step_end

# 316 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenKindaLeaving:
# 317 "data/maps/Route118/scripts.pory"
	walk_right
# 317 "data/maps/Route118/scripts.pory"
	walk_right
# 318 "data/maps/Route118/scripts.pory"
	walk_down
# 319 "data/maps/Route118/scripts.pory"
	walk_right
	step_end

# 322 "data/maps/Route118/scripts.pory"
Route118_Movement_PlayerWatchStevenKindaLeaving:
# 323 "data/maps/Route118/scripts.pory"
	delay_16
# 323 "data/maps/Route118/scripts.pory"
	delay_16
# 324 "data/maps/Route118/scripts.pory"
	walk_in_place_right
	step_end

# 327 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenGotoLatias:
# 328 "data/maps/Route118/scripts.pory"
	walk_left
# 328 "data/maps/Route118/scripts.pory"
	walk_left
# 329 "data/maps/Route118/scripts.pory"
	walk_down
	step_end

# 332 "data/maps/Route118/scripts.pory"
Route118_Movement_RideLatias:
# 333 "data/maps/Route118/scripts.pory"
	walk_down
# 334 "data/maps/Route118/scripts.pory"
	jump_2_down
	step_end

Route118_EventScript_PlayerAskToGoBackFromSouthernIsland::
# 338 "data/maps/Route118/scripts.pory"
	lock
# 339 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceLeft
# 340 "data/maps/Route118/scripts.pory"
	delay 8
# 341 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 342 "data/maps/Route118/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 343 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_PlayerAskToGoBackFromSouthernIsland_Text_0
# 344 "data/maps/Route118/scripts.pory"
	closemessage
# 345 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
# 346 "data/maps/Route118/scripts.pory"
	waitmovement LOCALID_STEVEN
# 347 "data/maps/Route118/scripts.pory"
	setvar VAR_ROUTE118_STATE, 3
# 348 "data/maps/Route118/scripts.pory"
	release
	end


Route118_EventScript_StevenStopPlayerTrigger::
# 353 "data/maps/Route118/scripts.pory"
	lock
# 354 "data/maps/Route118/scripts.pory"
	delay 16
# 355 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceUp
# 356 "data/maps/Route118/scripts.pory"
	waitmovement LOCALID_STEVEN
# 357 "data/maps/Route118/scripts.pory"
	playse SE_PIN
# 358 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_ExclamationMark
# 359 "data/maps/Route118/scripts.pory"
	delay 8
# 360 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 361 "data/maps/Route118/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 362 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_StevenStopPlayerTrigger_Text_0
# 363 "data/maps/Route118/scripts.pory"
	closemessage
# 364 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 365 "data/maps/Route118/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 366 "data/maps/Route118/scripts.pory"
	release
	end


Route118_EventScript_StevenGoToSouthernIsland::
# 371 "data/maps/Route118/scripts.pory"
	lock
# 372 "data/maps/Route118/scripts.pory"
	faceplayer
# 373 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_StevenGoToSouthernIsland_Text_0, MSGBOX_YESNO
# 374 "data/maps/Route118/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route118_EventScript_StevenGoToSouthernIsland_2
Route118_EventScript_StevenGoToSouthernIsland_1:
# 386 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_StevenGoToSouthernIsland_Text_2
# 387 "data/maps/Route118/scripts.pory"
	closemessage
# 388 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
# 389 "data/maps/Route118/scripts.pory"
	waitmovement LOCALID_STEVEN
# 390 "data/maps/Route118/scripts.pory"
	release
	end

Route118_EventScript_StevenGoToSouthernIsland_2:
# 375 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_StevenGoToSouthernIsland_Text_1
# 376 "data/maps/Route118/scripts.pory"
	closemessage
# 377 "data/maps/Route118/scripts.pory"
	fadescreen FADE_TO_BLACK
# 378 "data/maps/Route118/scripts.pory"
	waitmovement LOCALID_STEVEN
# 379 "data/maps/Route118/scripts.pory"
	removeobject LOCALID_LATIAS
# 380 "data/maps/Route118/scripts.pory"
	removeobject LOCALID_STEVEN
# 381 "data/maps/Route118/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 382 "data/maps/Route118/scripts.pory"
	delay 160
# 383 "data/maps/Route118/scripts.pory"
	warpsilent MAP_SOUTHERN_ISLAND_EXTERIOR, 14, 18
# 384 "data/maps/Route118/scripts.pory"
	waitstate
	goto Route118_EventScript_StevenGoToSouthernIsland_1


Route118_EventScript_ReturnFromSouthernIsland::
# 395 "data/maps/Route118/scripts.pory"
	lock
# 396 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceLeft
# 397 "data/maps/Route118/scripts.pory"
	delay 8
# 398 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 399 "data/maps/Route118/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 400 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_ReturnFromSouthernIsland_Text_0
# 401 "data/maps/Route118/scripts.pory"
	closemessage
# 402 "data/maps/Route118/scripts.pory"
	playmoncry SPECIES_LATIAS, CRY_MODE_NORMAL
# 403 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_ReturnFromSouthernIsland_Text_1
# 404 "data/maps/Route118/scripts.pory"
	closemessage
# 405 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
# 406 "data/maps/Route118/scripts.pory"
	delay 8
# 407 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 408 "data/maps/Route118/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 409 "data/maps/Route118/scripts.pory"
	waitmoncry
# 410 "data/maps/Route118/scripts.pory"
	delay 16
# 411 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceLeft
# 412 "data/maps/Route118/scripts.pory"
	waitmovement LOCALID_STEVEN
# 413 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_ReturnFromSouthernIsland_Text_2
# 414 "data/maps/Route118/scripts.pory"
	playmoncry SPECIES_LATIAS, CRY_MODE_NORMAL
# 415 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_ReturnFromSouthernIsland_Text_1
# 416 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
# 417 "data/maps/Route118/scripts.pory"
	waitmovement LOCALID_STEVEN
# 418 "data/maps/Route118/scripts.pory"
	closemessage
# 419 "data/maps/Route118/scripts.pory"
	delay 24
# 420 "data/maps/Route118/scripts.pory"
	fadescreen FADE_TO_WHITE
# 421 "data/maps/Route118/scripts.pory"
	removeobject LOCALID_LATIAS
# 422 "data/maps/Route118/scripts.pory"
	delay 24
# 423 "data/maps/Route118/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 424 "data/maps/Route118/scripts.pory"
	delay 24
# 425 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceLeft
# 426 "data/maps/Route118/scripts.pory"
	delay 8
# 427 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 428 "data/maps/Route118/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 429 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_ReturnFromSouthernIsland_Text_3
# 430 "data/maps/Route118/scripts.pory"
	closemessage
# 431 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenExit
# 432 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 433 "data/maps/Route118/scripts.pory"
	waitmovement LOCALID_STEVEN
# 434 "data/maps/Route118/scripts.pory"
	removeobject LOCALID_STEVEN
# 435 "data/maps/Route118/scripts.pory"
	setvar VAR_ROUTE118_STATE, 5
# 436 "data/maps/Route118/scripts.pory"
	release
	end


# 440 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit:
# 441 "data/maps/Route118/scripts.pory"
	delay_16
# 441 "data/maps/Route118/scripts.pory"
	delay_16
# 442 "data/maps/Route118/scripts.pory"
	walk_left
# 443 "data/maps/Route118/scripts.pory"
	walk_up
# 443 "data/maps/Route118/scripts.pory"
	walk_up
# 443 "data/maps/Route118/scripts.pory"
	walk_up
# 443 "data/maps/Route118/scripts.pory"
	walk_up
# 443 "data/maps/Route118/scripts.pory"
	walk_up
# 444 "data/maps/Route118/scripts.pory"
	walk_right
# 444 "data/maps/Route118/scripts.pory"
	walk_right
# 444 "data/maps/Route118/scripts.pory"
	walk_right
# 444 "data/maps/Route118/scripts.pory"
	walk_right
# 444 "data/maps/Route118/scripts.pory"
	walk_right
# 444 "data/maps/Route118/scripts.pory"
	walk_right
# 444 "data/maps/Route118/scripts.pory"
	walk_right
# 445 "data/maps/Route118/scripts.pory"
	walk_down
# 446 "data/maps/Route118/scripts.pory"
	walk_right
	step_end

# 449 "data/maps/Route118/scripts.pory"
Route118_Movement_PlayerWatchStevenExit:
# 450 "data/maps/Route118/scripts.pory"
	lock_facing_direction
# 451 "data/maps/Route118/scripts.pory"
	walk_left
# 452 "data/maps/Route118/scripts.pory"
	unlock_facing_direction
# 453 "data/maps/Route118/scripts.pory"
	delay_16
# 453 "data/maps/Route118/scripts.pory"
	delay_16
# 454 "data/maps/Route118/scripts.pory"
	walk_in_place_up
	step_end

Route118_EventScript_PokeFanSecretBase::
# 458 "data/maps/Route118/scripts.pory"
	msgbox Route118_EventScript_PokeFanSecretBase_Text_0, MSGBOX_NPC
	end


Route118_EventScript_Steven_Text_0:
# 216 "data/maps/Route118/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: Why, hello.\pWe met in Granite Cave, didn't we?\pNo, I remember it.\nIt's {PLAYER}…\lRight?\pIt's good to see that your journey is\ngoing well.$"

Route118_EventScript_Steven_Text_1:
# 219 "data/maps/Route118/scripts.pory"
	.string "You know, {PLAYER}…\pIn this vast world, there are many\nPokémon.\lThey come in many types.\pShould you raise different types?\nOr will you only raise Pokémon of a\lcertain type you like?\pI wonder what you think as a Pokémon\nTrainer?$"

Route118_EventScript_Steven_Text_2:
# 222 "data/maps/Route118/scripts.pory"
	.string "Not that it's anything I should be\nconcerning myself with…\pBut somehow I find myself wanting to\nknow what you think.\pI suppose I should be going.\nI hope to see you again though.$"

Route118_EventScript_Steven_Text_3:
# 241 "data/maps/Route118/scripts.pory"
	.string "Hyahhn!$"

Route118_EventScript_Steven_Text_4:
# 245 "data/maps/Route118/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: …Hm?$"

Route118_EventScript_Steven_Text_5:
# 257 "data/maps/Route118/scripts.pory"
	.string "Latias!$"

Route118_EventScript_Steven_Text_6:
# 265 "data/maps/Route118/scripts.pory"
	.string "Do you…want us to soar somewhere with\nyou?$"

Route118_EventScript_Steven_Text_7:
# 272 "data/maps/Route118/scripts.pory"
	.string "{PLAYER}.\pCome with me.$"

Route118_EventScript_Steven_Text_8:
# 277 "data/maps/Route118/scripts.pory"
	.string "Latias…\pI believe that it sought us out for\nhelp.\pIf that's the case, let's go!$"

Route118_EventScript_PlayerAskToGoBackFromSouthernIsland_Text_0:
# 343 "data/maps/Route118/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: So we've come back here…\pWhen you're ready to return to\nSouthern Island, come and tell me.$"

Route118_EventScript_StevenStopPlayerTrigger_Text_0:
# 362 "data/maps/Route118/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: Where are you going?\pI don't think we can walk away from\nthis?$"

Route118_EventScript_StevenGoToSouthernIsland_Text_0:
# 373 "data/maps/Route118/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: Are your preparations\ncomplete?$"

Route118_EventScript_StevenGoToSouthernIsland_Text_1:
# 375 "data/maps/Route118/scripts.pory"
	.string "If that's the case, let's go!$"

Route118_EventScript_StevenGoToSouthernIsland_Text_2:
# 386 "data/maps/Route118/scripts.pory"
	.string "I see.\nI'll be waiting here.$"

Route118_EventScript_ReturnFromSouthernIsland_Text_0:
# 400 "data/maps/Route118/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: Thank you for your help,\n{PLAYER}.$"

Route118_EventScript_ReturnFromSouthernIsland_Text_1:
# 403 "data/maps/Route118/scripts.pory"
	.string "Hyan!$"

Route118_EventScript_ReturnFromSouthernIsland_Text_2:
# 413 "data/maps/Route118/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: Perhaps it's trying to tell you\nto take good care of Latios.$"

Route118_EventScript_ReturnFromSouthernIsland_Text_3:
# 429 "data/maps/Route118/scripts.pory"
	.string "In the end, you were far greater help\nthan I expected you might be.\pI expect that you and your team will\nbe able to best both Route 119 ahead\land even the Fortree Gym beyond that.\pI'll be curious to see how much\nstronger you might grow next time\lwe meet.\pUntil then, {PLAYER}.$"

Route118_EventScript_PokeFanSecretBase_Text_0:
# 458 "data/maps/Route118/scripts.pory"
	.string "Thanks to that Aarune dude, I've been\nawakened to the adventure that is\lbuilding a Secret Base.\pHe said he would be waiting for me\nwith the Secret Base Guild, but\lFortree City is far away.$"
