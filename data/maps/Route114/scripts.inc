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
	giverandomberry BERRY_ID_RAZZ, BERRY_ID_PINAP
# 31 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 32 "data/maps/Route114/scripts.pory"
	setflag FLAG_DAILY_ROUTE_114_RECEIVED_BERRY
# 33 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TryBerryCrushWithFriends, MSGBOX_DEFAULT
# 34 "data/maps/Route114/scripts.pory"
	release
# 35 "data/maps/Route114/scripts.pory"
	end
# 36 "data/maps/Route114/scripts.pory"

# 37 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedBerry::
# 38 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FunToThinkAboutBerries, MSGBOX_DEFAULT
# 39 "data/maps/Route114/scripts.pory"
	release
# 40 "data/maps/Route114/scripts.pory"
	end
# 41 "data/maps/Route114/scripts.pory"

# 42 "data/maps/Route114/scripts.pory"
Route114_EventScript_RoarGentleman::
# 43 "data/maps/Route114/scripts.pory"
	lock
# 44 "data/maps/Route114/scripts.pory"
	faceplayer
# 45 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ROAR, Route114_EventScript_ReceivedRoar
# 46 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AllMyMonDoesIsRoarTakeThis, MSGBOX_DEFAULT
# 47 "data/maps/Route114/scripts.pory"
	giveitem ITEM_TM_ROAR
# 48 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 49 "data/maps/Route114/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROAR
# 50 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 51 "data/maps/Route114/scripts.pory"
	release
# 52 "data/maps/Route114/scripts.pory"
	end
# 53 "data/maps/Route114/scripts.pory"

# 54 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedRoar::
# 55 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 56 "data/maps/Route114/scripts.pory"
	release
# 57 "data/maps/Route114/scripts.pory"
	end
# 58 "data/maps/Route114/scripts.pory"

# 59 "data/maps/Route114/scripts.pory"
Route114_EventScript_Poochyena::
# 60 "data/maps/Route114/scripts.pory"
	lock
# 61 "data/maps/Route114/scripts.pory"
	faceplayer
# 62 "data/maps/Route114/scripts.pory"
	waitse
# 63 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
# 64 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Poochyena, MSGBOX_DEFAULT
# 65 "data/maps/Route114/scripts.pory"
	waitmoncry
# 66 "data/maps/Route114/scripts.pory"
	release
# 67 "data/maps/Route114/scripts.pory"
	end
# 68 "data/maps/Route114/scripts.pory"

# 69 "data/maps/Route114/scripts.pory"
Route114_EventScript_MeteorFallsSign::
# 70 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_MeteorFallsSign, MSGBOX_SIGN
# 71 "data/maps/Route114/scripts.pory"
	end
# 72 "data/maps/Route114/scripts.pory"

# 73 "data/maps/Route114/scripts.pory"
Route114_EventScript_FossilManiacsHouseSign::
# 74 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FossilManiacsHouseSign, MSGBOX_SIGN
# 75 "data/maps/Route114/scripts.pory"
	end
# 76 "data/maps/Route114/scripts.pory"

# 77 "data/maps/Route114/scripts.pory"
Route114_EventScript_LanettesHouseSign::
# 78 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LanettesHouse, MSGBOX_SIGN
# 79 "data/maps/Route114/scripts.pory"
	end
# 80 "data/maps/Route114/scripts.pory"

# 81 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lenny::
# 82 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LENNY, Route114_Text_LennyIntro, Route114_Text_LennyDefeat
# 83 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LennyPostBattle, MSGBOX_AUTOCLOSE
# 84 "data/maps/Route114/scripts.pory"
	end
# 85 "data/maps/Route114/scripts.pory"

# 86 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lucas::
# 87 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LUCAS_1, Route114_Text_LucasIntro, Route114_Text_LucasDefeat
# 88 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LucasPostBattle, MSGBOX_AUTOCLOSE
# 89 "data/maps/Route114/scripts.pory"
	end
# 90 "data/maps/Route114/scripts.pory"

# 91 "data/maps/Route114/scripts.pory"
Route114_EventScript_Shane::
# 92 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_SHANE, Route114_Text_ShaneIntro, Route114_Text_ShaneDefeat
# 93 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ShanePostBattle, MSGBOX_AUTOCLOSE
# 94 "data/maps/Route114/scripts.pory"
	end
# 95 "data/maps/Route114/scripts.pory"

# 96 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nancy::
# 97 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NANCY, Route114_Text_NancyIntro, Route114_Text_NancyDefeat
# 98 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NancyPostBattle, MSGBOX_AUTOCLOSE
# 99 "data/maps/Route114/scripts.pory"
	end
# 100 "data/maps/Route114/scripts.pory"

# 101 "data/maps/Route114/scripts.pory"
Route114_EventScript_Steve::
# 102 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_STEVE_1, Route114_Text_SteveIntro, Route114_Text_SteveDefeat, Route114_EventScript_RegisterSteve
# 103 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 104 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_EventScript_RematchSteve
# 105 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostBattle, MSGBOX_DEFAULT
# 106 "data/maps/Route114/scripts.pory"
	release
# 107 "data/maps/Route114/scripts.pory"
	end
# 108 "data/maps/Route114/scripts.pory"

# 109 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterSteve::
# 110 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 111 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 112 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_SteveRegister, MSGBOX_DEFAULT
# 113 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_STEVE_1
# 114 "data/maps/Route114/scripts.pory"
	release
# 115 "data/maps/Route114/scripts.pory"
	end
# 116 "data/maps/Route114/scripts.pory"

# 117 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchSteve::
# 118 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_STEVE_1, Route114_Text_SteveRematchIntro, Route114_Text_SteveRematchDefeat
# 119 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostRematch, MSGBOX_AUTOCLOSE
# 120 "data/maps/Route114/scripts.pory"
	end
# 121 "data/maps/Route114/scripts.pory"

# 122 "data/maps/Route114/scripts.pory"
Route114_EventScript_Bernie::
# 123 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_BERNIE_1, Route114_Text_BernieIntro, Route114_Text_BernieDefeat, Route114_EventScript_RegisterBernie
# 124 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 125 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_EventScript_RematchBernie
# 126 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostBattle, MSGBOX_DEFAULT
# 127 "data/maps/Route114/scripts.pory"
	release
# 128 "data/maps/Route114/scripts.pory"
	end
# 129 "data/maps/Route114/scripts.pory"

# 130 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterBernie::
# 131 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 132 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 133 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BernieRegister, MSGBOX_DEFAULT
# 134 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_BERNIE_1
# 135 "data/maps/Route114/scripts.pory"
	release
# 136 "data/maps/Route114/scripts.pory"
	end
# 137 "data/maps/Route114/scripts.pory"

# 138 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchBernie::
# 139 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_BERNIE_1, Route114_Text_BernieRematchIntro, Route114_Text_BernieRematchDefeat
# 140 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostRematch, MSGBOX_AUTOCLOSE
# 141 "data/maps/Route114/scripts.pory"
	end
# 142 "data/maps/Route114/scripts.pory"

# 143 "data/maps/Route114/scripts.pory"
Route114_EventScript_Claude::
# 144 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CLAUDE, Route114_Text_ClaudeIntro, Route114_Text_ClaudeDefeat
# 145 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
# 146 "data/maps/Route114/scripts.pory"
	end
# 147 "data/maps/Route114/scripts.pory"

# 148 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nolan::
# 149 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NOLAN, Route114_Text_NolanIntro, Route114_Text_NolanDefeat
# 150 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NolanPostBattle, MSGBOX_AUTOCLOSE
# 151 "data/maps/Route114/scripts.pory"
	end
# 152 "data/maps/Route114/scripts.pory"

# 153 "data/maps/Route114/scripts.pory"
Route114_EventScript_Tyra::
# 154 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_TyraIntro, Route114_Text_TyraDefeat, Route114_Text_TyraNotEnoughMons
# 155 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
# 156 "data/maps/Route114/scripts.pory"
	end
# 157 "data/maps/Route114/scripts.pory"

# 158 "data/maps/Route114/scripts.pory"
Route114_EventScript_Ivy::
# 159 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_IvyIntro, Route114_Text_IvyDefeat, Route114_Text_IvyNotEnoughMons
# 160 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_IvyPostBattle, MSGBOX_AUTOCLOSE
# 161 "data/maps/Route114/scripts.pory"
	end
# 162 "data/maps/Route114/scripts.pory"

# 163 "data/maps/Route114/scripts.pory"
Route114_EventScript_Angelina::
# 164 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_ANGELINA, Route114_Text_AngelinaIntro, Route114_Text_AngelinaDefeat
# 165 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AngelinaPostBattle, MSGBOX_AUTOCLOSE
# 166 "data/maps/Route114/scripts.pory"
	end
# 167 "data/maps/Route114/scripts.pory"

# 168 "data/maps/Route114/scripts.pory"
Route114_EventScript_Charlotte::
# 169 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CHARLOTTE, Route114_Text_CharlotteIntro, Route114_Text_CharlotteDefeat
# 170 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
# 171 "data/maps/Route114/scripts.pory"
	end
# 172 "data/maps/Route114/scripts.pory"

# 173 "data/maps/Route114/scripts.pory"
Route114_EventScript_Kai::
# 174 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_KAI, Route114_Text_KaiIntro, Route114_Text_KaiDefeat
# 175 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_KaiPostBattle, MSGBOX_AUTOCLOSE
# 176 "data/maps/Route114/scripts.pory"
	end
# 177 "data/maps/Route114/scripts.pory"

# 178 "data/maps/Route114/scripts.pory"
Route114_Text_AllMyMonDoesIsRoarTakeThis:
# 179 "data/maps/Route114/scripts.pory"
	.string "All my Pokémon does is Roar…\n"
# 180 "data/maps/Route114/scripts.pory"
	.string "No one dares to come near me…\p"
# 181 "data/maps/Route114/scripts.pory"
	.string "Sigh… If you would, please take\n"
# 182 "data/maps/Route114/scripts.pory"
	.string "this TM away…$"
# 183 "data/maps/Route114/scripts.pory"

# 184 "data/maps/Route114/scripts.pory"
Route114_Text_ExplainRoar:
# 185 "data/maps/Route114/scripts.pory"
	.string "A Roar can scare the opposing Pokémon\naway.$"
# 186 "data/maps/Route114/scripts.pory"

# 187 "data/maps/Route114/scripts.pory"
Route114_Text_Poochyena:
# 188 "data/maps/Route114/scripts.pory"
	.string "Bow! Bowwow!$"
# 189 "data/maps/Route114/scripts.pory"

# 190 "data/maps/Route114/scripts.pory"
Route114_Text_MeteorFallsSign:
# 191 "data/maps/Route114/scripts.pory"
	.string "Meteor Falls\n"
# 192 "data/maps/Route114/scripts.pory"
	.string "Rustboro City through here$"
# 193 "data/maps/Route114/scripts.pory"

# 194 "data/maps/Route114/scripts.pory"
Route114_Text_FossilManiacsHouseSign:
# 195 "data/maps/Route114/scripts.pory"
	.string "Fossil Maniac's House\n"
# 196 "data/maps/Route114/scripts.pory"
	.string "“Fossils gratefully accepted!”$"
# 197 "data/maps/Route114/scripts.pory"

# 198 "data/maps/Route114/scripts.pory"
Route114_Text_LanettesHouse:
# 199 "data/maps/Route114/scripts.pory"
	.string "Lanette's House$"

Route114_EventScript_Sign::
# 207 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_Sign_Text_0, MSGBOX_SIGN
	end


Route114_EventScript_Rival::
# 212 "data/maps/Route114/scripts.pory"
	lock
# 213 "data/maps/Route114/scripts.pory"
	delay 8
# 214 "data/maps/Route114/scripts.pory"
	special SpawnCameraObject
# 215 "data/maps/Route114/scripts.pory"
	addobject 28
# 216 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route114_Movement_CameraPanToRivalDown
# 217 "data/maps/Route114/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 218 "data/maps/Route114/scripts.pory"
	checkplayergender
# 219 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route114_EventScript_Rival_2
# 222 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_Rival_Text_1
Route114_EventScript_Rival_1:
# 224 "data/maps/Route114/scripts.pory"
	closemessage
# 225 "data/maps/Route114/scripts.pory"
	playse SE_PIN
# 226 "data/maps/Route114/scripts.pory"
	applymovement 28, Common_Movement_ExclamationMark
# 227 "data/maps/Route114/scripts.pory"
	waitmovement 28
# 228 "data/maps/Route114/scripts.pory"
	waitse
# 229 "data/maps/Route114/scripts.pory"
	applymovement 28, Route114_Movement_RivalJumpUp
# 230 "data/maps/Route114/scripts.pory"
	waitmovement 28
# 231 "data/maps/Route114/scripts.pory"
	checkplayergender
# 232 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route114_EventScript_Rival_6
# 235 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_Rival_Text_3
Route114_EventScript_Rival_5:
# 237 "data/maps/Route114/scripts.pory"
	closemessage
# 238 "data/maps/Route114/scripts.pory"
	applymovement 28, Route114_Movement_RivalExit
# 239 "data/maps/Route114/scripts.pory"
	waitmovement 28
# 240 "data/maps/Route114/scripts.pory"
	removeobject 28
# 241 "data/maps/Route114/scripts.pory"
	delay 16
# 242 "data/maps/Route114/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route114_Movement_CameraPanToPlayer
# 243 "data/maps/Route114/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 244 "data/maps/Route114/scripts.pory"
	special RemoveCameraObject
# 245 "data/maps/Route114/scripts.pory"
	setvar VAR_ROUTE114_STATE, 1
# 246 "data/maps/Route114/scripts.pory"
	release
	end

Route114_EventScript_Rival_2:
# 220 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_Rival_Text_0
	goto Route114_EventScript_Rival_1

Route114_EventScript_Rival_6:
# 233 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_Rival_Text_2
	goto Route114_EventScript_Rival_5


# 250 "data/maps/Route114/scripts.pory"
Route114_Movement_CameraPanToRivalDown:
# 251 "data/maps/Route114/scripts.pory"
	walk_down
# 251 "data/maps/Route114/scripts.pory"
	walk_down
# 251 "data/maps/Route114/scripts.pory"
	walk_down
# 251 "data/maps/Route114/scripts.pory"
	walk_down
# 251 "data/maps/Route114/scripts.pory"
	walk_down
# 251 "data/maps/Route114/scripts.pory"
	walk_down
	step_end

# 254 "data/maps/Route114/scripts.pory"
Route114_Movement_RivalJumpUp:
# 255 "data/maps/Route114/scripts.pory"
	jump_in_place_left
	step_end

# 258 "data/maps/Route114/scripts.pory"
Route114_Movement_RivalExit:
# 259 "data/maps/Route114/scripts.pory"
	walk_faster_down
# 259 "data/maps/Route114/scripts.pory"
	walk_faster_down
# 259 "data/maps/Route114/scripts.pory"
	walk_faster_down
# 259 "data/maps/Route114/scripts.pory"
	walk_faster_down
# 259 "data/maps/Route114/scripts.pory"
	walk_faster_down
	step_end

# 262 "data/maps/Route114/scripts.pory"
Route114_Movement_CameraPanToPlayer:
# 263 "data/maps/Route114/scripts.pory"
	walk_up
# 263 "data/maps/Route114/scripts.pory"
	walk_up
# 263 "data/maps/Route114/scripts.pory"
	walk_up
# 263 "data/maps/Route114/scripts.pory"
	walk_up
# 263 "data/maps/Route114/scripts.pory"
	walk_up
# 263 "data/maps/Route114/scripts.pory"
	walk_up
	step_end

Route114_EventScript_Sign_Text_0:
# 207 "data/maps/Route114/scripts.pory"
	.string "Route 114$"

Route114_EventScript_Rival_Text_0:
# 220 "data/maps/Route114/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: You guys are--\nWhere are you taking the professor!?$"

Route114_EventScript_Rival_Text_1:
# 222 "data/maps/Route114/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: You guys are--\nWhere are you taking the professor!?$"

Route114_EventScript_Rival_Text_2:
# 233 "data/maps/Route114/scripts.pory"
	.string "H-hey!\nWait up!$"

Route114_EventScript_Rival_Text_3:
# 235 "data/maps/Route114/scripts.pory"
	.string "H-hey!\nStop right there!$"
