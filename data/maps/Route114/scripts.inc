# 1 "data/maps/Route114/scripts.pory"

# 2 "data/maps/Route114/scripts.pory"
Route114_MapScripts::
# 3 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_OnTransition
# 4 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route114_OnLoad
# 5 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route114_OnFrame
# 6 "data/maps/Route114/scripts.pory"
	.byte 0
# 7 "data/maps/Route114/scripts.pory"

# 8 "data/maps/Route114/scripts.pory"
Route114_OnTransition:
# 9 "data/maps/Route114/scripts.pory"
    call Common_EventScript_SetupRivalGfxId
# 10 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 11 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_StartGroudonWeather
# 12 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_StartGroudonWeather
# 13 "data/maps/Route114/scripts.pory"
	end
# 14 "data/maps/Route114/scripts.pory"

# 15 "data/maps/Route114/scripts.pory"
Route114_OnLoad:
# 16 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute114North
# 17 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute114South
# 18 "data/maps/Route114/scripts.pory"
	end
# 19 "data/maps/Route114/scripts.pory"

# 20 "data/maps/Route114/scripts.pory"
Route114_OnFrame:
# 21 "data/maps/Route114/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 22 "data/maps/Route114/scripts.pory"
	.2byte 0
# 23 "data/maps/Route114/scripts.pory"

# 24 "data/maps/Route114/scripts.pory"
Route114_EventScript_Man::
# 25 "data/maps/Route114/scripts.pory"
	lock
# 26 "data/maps/Route114/scripts.pory"
	faceplayer
# 27 "data/maps/Route114/scripts.pory"
	dotimebasedevents
# 28 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_114_RECEIVED_BERRY, Route114_EventScript_ReceivedBerry
# 29 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LoveUsingBerryCrushShareBerry, MSGBOX_DEFAULT
# 30 "data/maps/Route114/scripts.pory"
	random NUM_ROUTE_114_MAN_BERRIES
# 31 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, NUM_ROUTE_114_MAN_BERRIES_SKIPPED
# 32 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 33 "data/maps/Route114/scripts.pory"
	giveitem VAR_RESULT
# 34 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 35 "data/maps/Route114/scripts.pory"
	setflag FLAG_DAILY_ROUTE_114_RECEIVED_BERRY
# 36 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TryBerryCrushWithFriends, MSGBOX_DEFAULT
# 37 "data/maps/Route114/scripts.pory"
	release
# 38 "data/maps/Route114/scripts.pory"
	end
# 39 "data/maps/Route114/scripts.pory"

# 40 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedBerry::
# 41 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FunToThinkAboutBerries, MSGBOX_DEFAULT
# 42 "data/maps/Route114/scripts.pory"
	release
# 43 "data/maps/Route114/scripts.pory"
	end
# 44 "data/maps/Route114/scripts.pory"

# 45 "data/maps/Route114/scripts.pory"
Route114_EventScript_RoarGentleman::
# 46 "data/maps/Route114/scripts.pory"
	lock
# 47 "data/maps/Route114/scripts.pory"
	faceplayer
# 48 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ROAR, Route114_EventScript_ReceivedRoar
# 49 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AllMyMonDoesIsRoarTakeThis, MSGBOX_DEFAULT
# 50 "data/maps/Route114/scripts.pory"
	giveitem ITEM_TM_ROAR
# 51 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 52 "data/maps/Route114/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROAR
# 53 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 54 "data/maps/Route114/scripts.pory"
	release
# 55 "data/maps/Route114/scripts.pory"
	end
# 56 "data/maps/Route114/scripts.pory"

# 57 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedRoar::
# 58 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 59 "data/maps/Route114/scripts.pory"
	release
# 60 "data/maps/Route114/scripts.pory"
	end
# 61 "data/maps/Route114/scripts.pory"

# 62 "data/maps/Route114/scripts.pory"
Route114_EventScript_Poochyena::
# 63 "data/maps/Route114/scripts.pory"
	lock
# 64 "data/maps/Route114/scripts.pory"
	faceplayer
# 65 "data/maps/Route114/scripts.pory"
	waitse
# 66 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
# 67 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Poochyena, MSGBOX_DEFAULT
# 68 "data/maps/Route114/scripts.pory"
	waitmoncry
# 69 "data/maps/Route114/scripts.pory"
	release
# 70 "data/maps/Route114/scripts.pory"
	end
# 71 "data/maps/Route114/scripts.pory"

# 72 "data/maps/Route114/scripts.pory"
Route114_EventScript_MeteorFallsSign::
# 73 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_MeteorFallsSign, MSGBOX_SIGN
# 74 "data/maps/Route114/scripts.pory"
	end
# 75 "data/maps/Route114/scripts.pory"

# 76 "data/maps/Route114/scripts.pory"
Route114_EventScript_FossilManiacsHouseSign::
# 77 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FossilManiacsHouseSign, MSGBOX_SIGN
# 78 "data/maps/Route114/scripts.pory"
	end
# 79 "data/maps/Route114/scripts.pory"

# 80 "data/maps/Route114/scripts.pory"
Route114_EventScript_LanettesHouseSign::
# 81 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LanettesHouse, MSGBOX_SIGN
# 82 "data/maps/Route114/scripts.pory"
	end
# 83 "data/maps/Route114/scripts.pory"

# 84 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lenny::
# 85 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LENNY, Route114_Text_LennyIntro, Route114_Text_LennyDefeat
# 86 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LennyPostBattle, MSGBOX_AUTOCLOSE
# 87 "data/maps/Route114/scripts.pory"
	end
# 88 "data/maps/Route114/scripts.pory"

# 89 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lucas::
# 90 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LUCAS_1, Route114_Text_LucasIntro, Route114_Text_LucasDefeat
# 91 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LucasPostBattle, MSGBOX_AUTOCLOSE
# 92 "data/maps/Route114/scripts.pory"
	end
# 93 "data/maps/Route114/scripts.pory"

# 94 "data/maps/Route114/scripts.pory"
Route114_EventScript_Shane::
# 95 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_SHANE, Route114_Text_ShaneIntro, Route114_Text_ShaneDefeat
# 96 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ShanePostBattle, MSGBOX_AUTOCLOSE
# 97 "data/maps/Route114/scripts.pory"
	end
# 98 "data/maps/Route114/scripts.pory"

# 99 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nancy::
# 100 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NANCY, Route114_Text_NancyIntro, Route114_Text_NancyDefeat
# 101 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NancyPostBattle, MSGBOX_AUTOCLOSE
# 102 "data/maps/Route114/scripts.pory"
	end
# 103 "data/maps/Route114/scripts.pory"

# 104 "data/maps/Route114/scripts.pory"
Route114_EventScript_Steve::
# 105 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_STEVE_1, Route114_Text_SteveIntro, Route114_Text_SteveDefeat, Route114_EventScript_RegisterSteve
# 106 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 107 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_EventScript_RematchSteve
# 108 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostBattle, MSGBOX_DEFAULT
# 109 "data/maps/Route114/scripts.pory"
	release
# 110 "data/maps/Route114/scripts.pory"
	end
# 111 "data/maps/Route114/scripts.pory"

# 112 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterSteve::
# 113 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 114 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 115 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_SteveRegister, MSGBOX_DEFAULT
# 116 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_STEVE_1
# 117 "data/maps/Route114/scripts.pory"
	release
# 118 "data/maps/Route114/scripts.pory"
	end
# 119 "data/maps/Route114/scripts.pory"

# 120 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchSteve::
# 121 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_STEVE_1, Route114_Text_SteveRematchIntro, Route114_Text_SteveRematchDefeat
# 122 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostRematch, MSGBOX_AUTOCLOSE
# 123 "data/maps/Route114/scripts.pory"
	end
# 124 "data/maps/Route114/scripts.pory"

# 125 "data/maps/Route114/scripts.pory"
Route114_EventScript_Bernie::
# 126 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_BERNIE_1, Route114_Text_BernieIntro, Route114_Text_BernieDefeat, Route114_EventScript_RegisterBernie
# 127 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 128 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_EventScript_RematchBernie
# 129 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostBattle, MSGBOX_DEFAULT
# 130 "data/maps/Route114/scripts.pory"
	release
# 131 "data/maps/Route114/scripts.pory"
	end
# 132 "data/maps/Route114/scripts.pory"

# 133 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterBernie::
# 134 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 135 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 136 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BernieRegister, MSGBOX_DEFAULT
# 137 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_BERNIE_1
# 138 "data/maps/Route114/scripts.pory"
	release
# 139 "data/maps/Route114/scripts.pory"
	end
# 140 "data/maps/Route114/scripts.pory"

# 141 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchBernie::
# 142 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_BERNIE_1, Route114_Text_BernieRematchIntro, Route114_Text_BernieRematchDefeat
# 143 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostRematch, MSGBOX_AUTOCLOSE
# 144 "data/maps/Route114/scripts.pory"
	end
# 145 "data/maps/Route114/scripts.pory"

# 146 "data/maps/Route114/scripts.pory"
Route114_EventScript_Claude::
# 147 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CLAUDE, Route114_Text_ClaudeIntro, Route114_Text_ClaudeDefeat
# 148 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
# 149 "data/maps/Route114/scripts.pory"
	end
# 150 "data/maps/Route114/scripts.pory"

# 151 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nolan::
# 152 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NOLAN, Route114_Text_NolanIntro, Route114_Text_NolanDefeat
# 153 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NolanPostBattle, MSGBOX_AUTOCLOSE
# 154 "data/maps/Route114/scripts.pory"
	end
# 155 "data/maps/Route114/scripts.pory"

# 156 "data/maps/Route114/scripts.pory"
Route114_EventScript_Tyra::
# 157 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_TyraIntro, Route114_Text_TyraDefeat, Route114_Text_TyraNotEnoughMons
# 158 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
# 159 "data/maps/Route114/scripts.pory"
	end
# 160 "data/maps/Route114/scripts.pory"

# 161 "data/maps/Route114/scripts.pory"
Route114_EventScript_Ivy::
# 162 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_IvyIntro, Route114_Text_IvyDefeat, Route114_Text_IvyNotEnoughMons
# 163 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_IvyPostBattle, MSGBOX_AUTOCLOSE
# 164 "data/maps/Route114/scripts.pory"
	end
# 165 "data/maps/Route114/scripts.pory"

# 166 "data/maps/Route114/scripts.pory"
Route114_EventScript_Angelina::
# 167 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_ANGELINA, Route114_Text_AngelinaIntro, Route114_Text_AngelinaDefeat
# 168 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AngelinaPostBattle, MSGBOX_AUTOCLOSE
# 169 "data/maps/Route114/scripts.pory"
	end
# 170 "data/maps/Route114/scripts.pory"

# 171 "data/maps/Route114/scripts.pory"
Route114_EventScript_Charlotte::
# 172 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CHARLOTTE, Route114_Text_CharlotteIntro, Route114_Text_CharlotteDefeat
# 173 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
# 174 "data/maps/Route114/scripts.pory"
	end
# 175 "data/maps/Route114/scripts.pory"

# 176 "data/maps/Route114/scripts.pory"
Route114_EventScript_Kai::
# 177 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_KAI, Route114_Text_KaiIntro, Route114_Text_KaiDefeat
# 178 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_KaiPostBattle, MSGBOX_AUTOCLOSE
# 179 "data/maps/Route114/scripts.pory"
	end
# 180 "data/maps/Route114/scripts.pory"

# 181 "data/maps/Route114/scripts.pory"
Route114_Text_AllMyMonDoesIsRoarTakeThis:
# 182 "data/maps/Route114/scripts.pory"
	.string "All my Pokémon does is Roar…\n"
# 183 "data/maps/Route114/scripts.pory"
	.string "No one dares to come near me…\p"
# 184 "data/maps/Route114/scripts.pory"
	.string "Sigh… If you would, please take\n"
# 185 "data/maps/Route114/scripts.pory"
	.string "this TM away…$"
# 186 "data/maps/Route114/scripts.pory"

# 187 "data/maps/Route114/scripts.pory"
Route114_Text_ExplainRoar:
# 188 "data/maps/Route114/scripts.pory"
	.string "A Roar can scare the opposing Pokémon\naway.$"
# 189 "data/maps/Route114/scripts.pory"

# 190 "data/maps/Route114/scripts.pory"
Route114_Text_Poochyena:
# 191 "data/maps/Route114/scripts.pory"
	.string "Bow! Bowwow!$"
# 192 "data/maps/Route114/scripts.pory"

# 193 "data/maps/Route114/scripts.pory"
Route114_Text_MeteorFallsSign:
# 194 "data/maps/Route114/scripts.pory"
	.string "Meteor Falls\n"
# 195 "data/maps/Route114/scripts.pory"
	.string "Rustboro City through here$"
# 196 "data/maps/Route114/scripts.pory"

# 197 "data/maps/Route114/scripts.pory"
Route114_Text_FossilManiacsHouseSign:
# 198 "data/maps/Route114/scripts.pory"
	.string "Fossil Maniac's House\n"
# 199 "data/maps/Route114/scripts.pory"
	.string "“Fossils gratefully accepted!”$"
# 200 "data/maps/Route114/scripts.pory"

# 201 "data/maps/Route114/scripts.pory"
Route114_Text_LanettesHouse:
# 202 "data/maps/Route114/scripts.pory"
	.string "Lanette's House$"

Route114_EventScript_Sign::
# 210 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Route114_EventScript_Rival::
# 215 "data/maps/Route114/scripts.pory"
	lock
# 216 "data/maps/Route114/scripts.pory"
	delay 8
# 217 "data/maps/Route114/scripts.pory"
	special SpawnCameraObject
# 218 "data/maps/Route114/scripts.pory"
	addobject 28
# 219 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route114_Movement_CameraPanToRivalDown
# 220 "data/maps/Route114/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 221 "data/maps/Route114/scripts.pory"
	checkplayergender
# 222 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route114_EventScript_Rival_2
# 225 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_Rival_Text_1
Route114_EventScript_Rival_1:
# 227 "data/maps/Route114/scripts.pory"
	closemessage
# 228 "data/maps/Route114/scripts.pory"
	playse SE_PIN
# 229 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_ExclamationMark
# 230 "data/maps/Route114/scripts.pory"
	waitmovement 28
# 231 "data/maps/Route114/scripts.pory"
	waitse
# 232 "data/maps/Route114/scripts.pory"
	applymovement 28, Route114_Movement_RivalJumpUp
# 233 "data/maps/Route114/scripts.pory"
	waitmovement 28
# 234 "data/maps/Route114/scripts.pory"
	checkplayergender
# 235 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route114_EventScript_Rival_6
# 238 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_Rival_Text_3
Route114_EventScript_Rival_5:
# 240 "data/maps/Route114/scripts.pory"
	closemessage
# 241 "data/maps/Route114/scripts.pory"
	applymovement 28, Route114_Movement_RivalExit
# 242 "data/maps/Route114/scripts.pory"
	waitmovement 28
# 243 "data/maps/Route114/scripts.pory"
	removeobject 28
# 244 "data/maps/Route114/scripts.pory"
	delay 16
# 245 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route114_Movement_CameraPanToPlayer
# 246 "data/maps/Route114/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 247 "data/maps/Route114/scripts.pory"
	special RemoveCameraObject
# 248 "data/maps/Route114/scripts.pory"
	setvar VAR_ROUTE114_STATE, 1
# 249 "data/maps/Route114/scripts.pory"
	release
	end

Route114_EventScript_Rival_2:
# 223 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_Rival_Text_0
	goto Route114_EventScript_Rival_1

Route114_EventScript_Rival_6:
# 236 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_Rival_Text_2
	goto Route114_EventScript_Rival_5


# 253 "data/maps/Route114/scripts.pory"
Route114_Movement_CameraPanToRivalDown:
# 254 "data/maps/Route114/scripts.pory"
	walk_down
# 254 "data/maps/Route114/scripts.pory"
	walk_down
# 254 "data/maps/Route114/scripts.pory"
	walk_down
# 254 "data/maps/Route114/scripts.pory"
	walk_down
# 254 "data/maps/Route114/scripts.pory"
	walk_down
# 254 "data/maps/Route114/scripts.pory"
	walk_down
	step_end

# 257 "data/maps/Route114/scripts.pory"
Route114_Movement_RivalJumpUp:
# 258 "data/maps/Route114/scripts.pory"
	jump_in_place_left
	step_end

# 261 "data/maps/Route114/scripts.pory"
Route114_Movement_RivalExit:
# 262 "data/maps/Route114/scripts.pory"
	walk_faster_down
# 262 "data/maps/Route114/scripts.pory"
	walk_faster_down
# 262 "data/maps/Route114/scripts.pory"
	walk_faster_down
# 262 "data/maps/Route114/scripts.pory"
	walk_faster_down
# 262 "data/maps/Route114/scripts.pory"
	walk_faster_down
	step_end

# 265 "data/maps/Route114/scripts.pory"
Route114_Movement_CameraPanToPlayer:
# 266 "data/maps/Route114/scripts.pory"
	walk_up
# 266 "data/maps/Route114/scripts.pory"
	walk_up
# 266 "data/maps/Route114/scripts.pory"
	walk_up
# 266 "data/maps/Route114/scripts.pory"
	walk_up
# 266 "data/maps/Route114/scripts.pory"
	walk_up
# 266 "data/maps/Route114/scripts.pory"
	walk_up
	step_end

Route114_EventScript_Sign_Text_0:
# 210 "data/maps/Route114/scripts.pory"
	.string "Route 114$"

Route114_EventScript_Rival_Text_0:
# 223 "data/maps/Route114/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: You guys are--\nWhere are you taking the professor!?$"

Route114_EventScript_Rival_Text_1:
# 225 "data/maps/Route114/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: You guys are--\nWhere are you taking the professor!?$"

Route114_EventScript_Rival_Text_2:
# 236 "data/maps/Route114/scripts.pory"
	.string "H-hey!\nWait up!$"

Route114_EventScript_Rival_Text_3:
# 238 "data/maps/Route114/scripts.pory"
	.string "H-hey!\nStop right there!$"
