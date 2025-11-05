# 1 "data/maps/Route119/scripts.pory"

# 2 "data/maps/Route119/scripts.pory"

# 3 "data/maps/Route119/scripts.pory"
Route119_MapScripts::
# 4 "data/maps/Route119/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route119_OnResume
# 5 "data/maps/Route119/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_OnTransition
# 6 "data/maps/Route119/scripts.pory"
	.byte 0
# 7 "data/maps/Route119/scripts.pory"

# 8 "data/maps/Route119/scripts.pory"
Route119_OnResume:
# 9 "data/maps/Route119/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route119_EventScript_TryRemoveKecleon
# 10 "data/maps/Route119/scripts.pory"
	end
# 11 "data/maps/Route119/scripts.pory"

# 12 "data/maps/Route119/scripts.pory"
Route119_EventScript_TryRemoveKecleon::
# 13 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 14 "data/maps/Route119/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 15 "data/maps/Route119/scripts.pory"
	removeobject VAR_LAST_TALKED
# 16 "data/maps/Route119/scripts.pory"
	return
# 17 "data/maps/Route119/scripts.pory"

# 18 "data/maps/Route119/scripts.pory"
Route119_OnTransition:
# 19 "data/maps/Route119/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 20 "data/maps/Route119/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 21 "data/maps/Route119/scripts.pory"
	special SetRoute119Weather
# 22 "data/maps/Route119/scripts.pory"
	end
# 23 "data/maps/Route119/scripts.pory"

# 24 "data/maps/Route119/scripts.pory"
Route119_EventScript_CyclingTriathleteM::
# 25 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TallGrassSnaresBikeTires, MSGBOX_NPC
# 26 "data/maps/Route119/scripts.pory"
	end
# 27 "data/maps/Route119/scripts.pory"

# 28 "data/maps/Route119/scripts.pory"
Route119_EventScript_RouteSignFortree::
# 29 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_RouteSignFortree, MSGBOX_SIGN
# 30 "data/maps/Route119/scripts.pory"
	end
# 31 "data/maps/Route119/scripts.pory"

# 32 "data/maps/Route119/scripts.pory"
Route119_EventScript_WeatherInstituteSign::
# 33 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_WeatherInstitute, MSGBOX_SIGN
# 34 "data/maps/Route119/scripts.pory"
	end
# 35 "data/maps/Route119/scripts.pory"

# 36 "data/maps/Route119/scripts.pory"
Route119_EventScript_Brent::
# 37 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_BRENT, Route119_Text_BrentIntro, Route119_Text_BrentDefeat
# 38 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrentPostBattle, MSGBOX_AUTOCLOSE
# 39 "data/maps/Route119/scripts.pory"
	end
# 40 "data/maps/Route119/scripts.pory"

# 41 "data/maps/Route119/scripts.pory"
Route119_EventScript_Donald::
# 42 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DONALD, Route119_Text_DonaldIntro, Route119_Text_DonaldDefeat
# 43 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DonaldPostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/Route119/scripts.pory"
	end
# 45 "data/maps/Route119/scripts.pory"

# 46 "data/maps/Route119/scripts.pory"
Route119_EventScript_Taylor::
# 47 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_TAYLOR, Route119_Text_TaylorIntro, Route119_Text_TaylorDefeat
# 48 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TaylorPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/Route119/scripts.pory"
	end
# 50 "data/maps/Route119/scripts.pory"

# 51 "data/maps/Route119/scripts.pory"
Route119_EventScript_Doug::
# 52 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DOUG, Route119_Text_DougIntro, Route119_Text_DougDefeat
# 53 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DougPostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/Route119/scripts.pory"
	end
# 55 "data/maps/Route119/scripts.pory"

# 56 "data/maps/Route119/scripts.pory"
Route119_EventScript_Greg::
# 57 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_GREG, Route119_Text_GregIntro, Route119_Text_GregDefeat
# 58 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_GregPostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/Route119/scripts.pory"
	end
# 60 "data/maps/Route119/scripts.pory"

# 61 "data/maps/Route119/scripts.pory"
Route119_EventScript_Kent::
# 62 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_KENT, Route119_Text_KentIntro, Route119_Text_KentDefeat
# 63 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_KentPostBattle, MSGBOX_AUTOCLOSE
# 64 "data/maps/Route119/scripts.pory"
	end
# 65 "data/maps/Route119/scripts.pory"

# 66 "data/maps/Route119/scripts.pory"
Route119_EventScript_Jackson::
# 67 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_JACKSON_1, Route119_Text_JacksonIntro, Route119_Text_JacksonDefeat, Route119_EventScript_RegisterJackson
# 68 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 69 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route119_EventScript_RematchJackson
# 70 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonPostBattle, MSGBOX_DEFAULT
# 71 "data/maps/Route119/scripts.pory"
	release
# 72 "data/maps/Route119/scripts.pory"
	end
# 73 "data/maps/Route119/scripts.pory"

# 74 "data/maps/Route119/scripts.pory"
Route119_EventScript_RegisterJackson::
# 75 "data/maps/Route119/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 76 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 77 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonRegister, MSGBOX_DEFAULT
# 78 "data/maps/Route119/scripts.pory"
	register_matchcall TRAINER_JACKSON_1
# 79 "data/maps/Route119/scripts.pory"
	release
# 80 "data/maps/Route119/scripts.pory"
	end
# 81 "data/maps/Route119/scripts.pory"

# 82 "data/maps/Route119/scripts.pory"
Route119_EventScript_RematchJackson::
# 83 "data/maps/Route119/scripts.pory"
	trainerbattle_rematch TRAINER_JACKSON_1, Route119_Text_JacksonRematchIntro, Route119_Text_JacksonRematchDefeat
# 84 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonPostRematch, MSGBOX_AUTOCLOSE
# 85 "data/maps/Route119/scripts.pory"
	end
# 86 "data/maps/Route119/scripts.pory"

# 87 "data/maps/Route119/scripts.pory"
Route119_EventScript_Catherine::
# 88 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_CATHERINE_1, Route119_Text_CatherineIntro, Route119_Text_CatherineDefeat, Route119_EventScript_RegisterCatherine
# 89 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 90 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route119_EventScript_RematchCatherine
# 91 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherinePostBattle, MSGBOX_DEFAULT
# 92 "data/maps/Route119/scripts.pory"
	release
# 93 "data/maps/Route119/scripts.pory"
	end
# 94 "data/maps/Route119/scripts.pory"

# 95 "data/maps/Route119/scripts.pory"
Route119_EventScript_RegisterCatherine::
# 96 "data/maps/Route119/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 97 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 98 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherineRegister, MSGBOX_DEFAULT
# 99 "data/maps/Route119/scripts.pory"
	register_matchcall TRAINER_CATHERINE_1
# 100 "data/maps/Route119/scripts.pory"
	release
# 101 "data/maps/Route119/scripts.pory"
	end
# 102 "data/maps/Route119/scripts.pory"

# 103 "data/maps/Route119/scripts.pory"
Route119_EventScript_RematchCatherine::
# 104 "data/maps/Route119/scripts.pory"
	trainerbattle_rematch TRAINER_CATHERINE_1, Route119_Text_CatherineRematchIntro, Route119_Text_CatherineRematchDefeat
# 105 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherinePostRematch, MSGBOX_AUTOCLOSE
# 106 "data/maps/Route119/scripts.pory"
	end
# 107 "data/maps/Route119/scripts.pory"

# 108 "data/maps/Route119/scripts.pory"
Route119_EventScript_Hugh::
# 109 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_HUGH, Route119_Text_HughIntro, Route119_Text_HughDefeat
# 110 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_HughPostBattle, MSGBOX_AUTOCLOSE
# 111 "data/maps/Route119/scripts.pory"
	end
# 112 "data/maps/Route119/scripts.pory"

# 113 "data/maps/Route119/scripts.pory"
Route119_EventScript_Phil::
# 114 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_PHIL, Route119_Text_PhilIntro, Route119_Text_PhilDefeat
# 115 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_PhilPostBattle, MSGBOX_AUTOCLOSE
# 116 "data/maps/Route119/scripts.pory"
	end
# 117 "data/maps/Route119/scripts.pory"

# 118 "data/maps/Route119/scripts.pory"
Route119_EventScript_Yasu::
# 119 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_YASU, Route119_Text_YasuIntro, Route119_Text_YasuDefeat
# 120 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_YasuPostBattle, MSGBOX_AUTOCLOSE
# 121 "data/maps/Route119/scripts.pory"
	end
# 122 "data/maps/Route119/scripts.pory"

# 123 "data/maps/Route119/scripts.pory"
Route119_EventScript_Takashi::
# 124 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_TAKASHI, Route119_Text_TakashiIntro, Route119_Text_TakashiDefeat
# 125 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TakashiPostBattle, MSGBOX_AUTOCLOSE
# 126 "data/maps/Route119/scripts.pory"
	end
# 127 "data/maps/Route119/scripts.pory"

# 128 "data/maps/Route119/scripts.pory"
Route119_EventScript_Hideo::
# 129 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_HIDEO, Route119_Text_HideoIntro, Route119_Text_HideoDefeat
# 130 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_HideoPostBattle, MSGBOX_AUTOCLOSE
# 131 "data/maps/Route119/scripts.pory"
	end
# 132 "data/maps/Route119/scripts.pory"

# 133 "data/maps/Route119/scripts.pory"
Route119_EventScript_Chris::
# 134 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_CHRIS, Route119_Text_ChrisIntro, Route119_Text_ChrisDefeat
# 135 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ChrisPostBattle, MSGBOX_AUTOCLOSE
# 136 "data/maps/Route119/scripts.pory"
	end
# 137 "data/maps/Route119/scripts.pory"

# 138 "data/maps/Route119/scripts.pory"
Route119_EventScript_Fabian::
# 139 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_FABIAN, Route119_Text_FabianIntro, Route119_Text_FabianDefeat
# 140 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_FabianPostBattle, MSGBOX_AUTOCLOSE
# 141 "data/maps/Route119/scripts.pory"
	end
# 142 "data/maps/Route119/scripts.pory"

# 143 "data/maps/Route119/scripts.pory"
Route119_EventScript_Dayton::
# 144 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DAYTON, Route119_Text_DaytonIntro, Route119_Text_DaytonDefeat
# 145 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DaytonPostBattle, MSGBOX_AUTOCLOSE
# 146 "data/maps/Route119/scripts.pory"
	end
# 147 "data/maps/Route119/scripts.pory"

# 148 "data/maps/Route119/scripts.pory"
Route119_EventScript_Rachel::
# 149 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_RACHEL, Route119_Text_RachelIntro, Route119_Text_RachelDefeat
# 150 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_RachelPostBattle, MSGBOX_AUTOCLOSE
# 151 "data/maps/Route119/scripts.pory"
	end
# 152 "data/maps/Route119/scripts.pory"

# 153 "data/maps/Route119/scripts.pory"
Route119_EventScript_BridgeAquaGrunt1::
# 154 "data/maps/Route119/scripts.pory"
	lock
# 155 "data/maps/Route119/scripts.pory"
	faceplayer
# 156 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_StayAwayFromWeatherInstitute, MSGBOX_DEFAULT
# 157 "data/maps/Route119/scripts.pory"
	closemessage
# 158 "data/maps/Route119/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceRight
# 159 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 160 "data/maps/Route119/scripts.pory"
	release
# 161 "data/maps/Route119/scripts.pory"
	end
# 162 "data/maps/Route119/scripts.pory"

# 163 "data/maps/Route119/scripts.pory"
Route119_EventScript_BridgeAquaGrunt2::
# 164 "data/maps/Route119/scripts.pory"
	lock
# 165 "data/maps/Route119/scripts.pory"
	faceplayer
# 166 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DontGoNearWeatherInstitute, MSGBOX_DEFAULT
# 167 "data/maps/Route119/scripts.pory"
	closemessage
# 168 "data/maps/Route119/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceRight
# 169 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 170 "data/maps/Route119/scripts.pory"
	release
# 171 "data/maps/Route119/scripts.pory"
	end
# 172 "data/maps/Route119/scripts.pory"

# 173 "data/maps/Route119/scripts.pory"
Route119_EventScript_Boy1::
# 174 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ThoughtFlyByCatchingBirdMons, MSGBOX_NPC
# 175 "data/maps/Route119/scripts.pory"
	end
# 176 "data/maps/Route119/scripts.pory"

# 177 "data/maps/Route119/scripts.pory"
Route119_EventScript_Boy2::
# 178 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CanYourMonMakeSecretBase, MSGBOX_NPC
# 179 "data/maps/Route119/scripts.pory"
	end
# 180 "data/maps/Route119/scripts.pory"

# 181 "data/maps/Route119/scripts.pory"
Route119_EventScript_TrainerTipsDecoration::
# 182 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TrainerTipsDecoration, MSGBOX_SIGN
# 183 "data/maps/Route119/scripts.pory"
	end
# 184 "data/maps/Route119/scripts.pory"

# 185 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottWonAtFortreeGymCall::
# 186 "data/maps/Route119/scripts.pory"
	lockall
# 187 "data/maps/Route119/scripts.pory"
	pokenavcall Route119_Text_ScottYouWonAtFortreeGym
# 188 "data/maps/Route119/scripts.pory"
	waitmessage
# 189 "data/maps/Route119/scripts.pory"
	clearflag FLAG_SCOTT_CALL_FORTREE_GYM
# 190 "data/maps/Route119/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 191 "data/maps/Route119/scripts.pory"
	releaseall
# 192 "data/maps/Route119/scripts.pory"
	end
# 193 "data/maps/Route119/scripts.pory"

# 194 "data/maps/Route119/scripts.pory"
Route119_Text_ScottYouWonAtFortreeGym:
# 195 "data/maps/Route119/scripts.pory"
	.string "… … … … … …\n"
# 196 "data/maps/Route119/scripts.pory"
	.string "… … … … … Beep!\p"
# 197 "data/maps/Route119/scripts.pory"
	.string "Scott: Hiya, {PLAYER}{KUN}, it's me!\p"
# 198 "data/maps/Route119/scripts.pory"
	.string "Just as I thought, you won at\n"
# 199 "data/maps/Route119/scripts.pory"
	.string "the Fortree Gym.\p"
# 200 "data/maps/Route119/scripts.pory"
	.string "Your strength…\n"
# 201 "data/maps/Route119/scripts.pory"
	.string "Perhaps you really are the Trainer\l"
# 202 "data/maps/Route119/scripts.pory"
	.string "that I've been searching for.\p"
# 203 "data/maps/Route119/scripts.pory"
	.string "Remember, you have a fan in me.\n"
# 204 "data/maps/Route119/scripts.pory"
	.string "I'll be cheering from the sidelines.\l"
# 205 "data/maps/Route119/scripts.pory"
	.string "Keep up the great work!\p"
# 206 "data/maps/Route119/scripts.pory"
	.string "… … … … … …\n"
# 207 "data/maps/Route119/scripts.pory"
	.string "… … … … … Click!$"
# 208 "data/maps/Route119/scripts.pory"

# 209 "data/maps/Route119/scripts.pory"
Route119_Text_StayAwayFromWeatherInstitute:
# 210 "data/maps/Route119/scripts.pory"
	.string "We're standing lookout here.\pHey, you!\pStay away from the Weather Institute.\nIt's not safe.$"
# 211 "data/maps/Route119/scripts.pory"

# 212 "data/maps/Route119/scripts.pory"
Route119_Text_DontGoNearWeatherInstitute:
# 213 "data/maps/Route119/scripts.pory"
	.string "Lookout duty is surprisingly boring.\pHey, you!\pPlease don't go near the Weather\nInstitute.$"
# 214 "data/maps/Route119/scripts.pory"

# 215 "data/maps/Route119/scripts.pory"
Route119_Text_ThoughtFlyByCatchingBirdMons:
# 216 "data/maps/Route119/scripts.pory"
	.string "I thought how you fly is by catching\na whole flock of bird Pokémon, and\lthen hanging on to them somehow.\pBut it turns out there's an HM move\ncalled Fly!\pI don't know…\nIn a way, my dream came true, but I\lalso feel like I lost my dream…\lIt feels really strange…$"
# 217 "data/maps/Route119/scripts.pory"

# 218 "data/maps/Route119/scripts.pory"
Route119_Text_TallGrassSnaresBikeTires:
# 219 "data/maps/Route119/scripts.pory"
	.string "Tch…\n"
# 220 "data/maps/Route119/scripts.pory"
	.string "It's a no-go…\p"
# 221 "data/maps/Route119/scripts.pory"
	.string "The tall grass snares Bike tires.\n"
# 222 "data/maps/Route119/scripts.pory"
	.string "There's no way you can cycle here.$"
# 223 "data/maps/Route119/scripts.pory"

# 224 "data/maps/Route119/scripts.pory"
Route119_Text_CanYourMonMakeSecretBase:
# 225 "data/maps/Route119/scripts.pory"
	.string "Can your Pokémon use its Secret Power\n"
# 226 "data/maps/Route119/scripts.pory"
	.string "on a big pile of grass and make a\l"
# 227 "data/maps/Route119/scripts.pory"
	.string "Secret Base?$"
# 228 "data/maps/Route119/scripts.pory"

# 229 "data/maps/Route119/scripts.pory"
Route119_Text_RouteSignFortree:
# 230 "data/maps/Route119/scripts.pory"
	.string "Route 119\n"
# 231 "data/maps/Route119/scripts.pory"
	.string "{RIGHT_ARROW} Fortree City$"
# 232 "data/maps/Route119/scripts.pory"

# 233 "data/maps/Route119/scripts.pory"
Route119_Text_WeatherInstitute:
# 234 "data/maps/Route119/scripts.pory"
	.string "Weather Institute$"
# 235 "data/maps/Route119/scripts.pory"

# 236 "data/maps/Route119/scripts.pory"
Route119_Text_TrainerTipsDecoration:
# 237 "data/maps/Route119/scripts.pory"
	.string "Trainer Tips\pUp to sixteen decorations and\nfurniture items can be placed in a\lSecret Base.\pPick your favorite items and create\nyour very own Secret Base exactly\lthe way you want.$"

Route119_EventScript_RivalTrigger1::
# 242 "data/maps/Route119/scripts.pory"
	setvar VAR_TEMP_1, 1
# 243 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter
	end


Route119_EventScript_RivalTrigger2::
# 248 "data/maps/Route119/scripts.pory"
	setvar VAR_TEMP_1, 2
# 249 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter
	end


Route119_EventScript_RivalEncounter::
# 254 "data/maps/Route119/scripts.pory"
	lock
# 255 "data/maps/Route119/scripts.pory"
	addobject LOCALID_ROUTE119_RIVAL_ON_BIKE
# 256 "data/maps/Route119/scripts.pory"
	checkplayergender
# 257 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route119_EventScript_RivalEncounter_2
# 260 "data/maps/Route119/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
Route119_EventScript_RivalEncounter_1:
# 262 "data/maps/Route119/scripts.pory"
	delay 64
# 263 "data/maps/Route119/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 264 "data/maps/Route119/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 265 "data/maps/Route119/scripts.pory"
	switch VAR_TEMP_1
# 266 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_RivalEncounter_7
# 267 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_RivalEncounter_8
Route119_EventScript_RivalEncounter_5:
# 269 "data/maps/Route119/scripts.pory"
	waitmovement LOCALID_ROUTE119_RIVAL_ON_BIKE
# 270 "data/maps/Route119/scripts.pory"
	delay 32
# 271 "data/maps/Route119/scripts.pory"
	switch VAR_TEMP_1
# 272 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_RivalEncounter_11
# 275 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_RivalEncounter_12
Route119_EventScript_RivalEncounter_9:
# 279 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_ROUTE119_RIVAL_ON_BIKE
# 280 "data/maps/Route119/scripts.pory"
	addobject LOCALID_ROUTE119_RIVAL
# 281 "data/maps/Route119/scripts.pory"
	checkplayergender
# 282 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route119_EventScript_RivalEncounter_14
# 303 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_RivalEncounter_Text_5
# 304 "data/maps/Route119/scripts.pory"
	closemessage
# 305 "data/maps/Route119/scripts.pory"
	delay 8
# 306 "data/maps/Route119/scripts.pory"
	playse SE_PIN
# 307 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_RIVAL, Common_Movement_ExclamationMark
# 308 "data/maps/Route119/scripts.pory"
	waitmovement LOCALID_ROUTE119_RIVAL
# 309 "data/maps/Route119/scripts.pory"
	waitse
# 310 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_RivalEncounter_Text_6
# 311 "data/maps/Route119/scripts.pory"
	closemessage
# 312 "data/maps/Route119/scripts.pory"
	delay 8
# 313 "data/maps/Route119/scripts.pory"
	switch VAR_STARTER_MON
# 314 "data/maps/Route119/scripts.pory"
	case 0, Route119_EventScript_RivalEncounter_28
# 315 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_RivalEncounter_29
# 316 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_RivalEncounter_30
Route119_EventScript_RivalEncounter_26:
# 318 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_RivalEncounter_Text_8
# 319 "data/maps/Route119/scripts.pory"
	closemessage
# 320 "data/maps/Route119/scripts.pory"
	delay 8
# 321 "data/maps/Route119/scripts.pory"
	giveitem ITEM_HM_FLY
# 322 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_RivalEncounter_Text_9
Route119_EventScript_RivalEncounter_13:
# 324 "data/maps/Route119/scripts.pory"
	closemessage
# 325 "data/maps/Route119/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLY
# 326 "data/maps/Route119/scripts.pory"
	switch VAR_TEMP_1
# 327 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_RivalEncounter_19
# 330 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_RivalEncounter_20
Route119_EventScript_RivalEncounter_17:
# 334 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_ROUTE119_RIVAL
# 335 "data/maps/Route119/scripts.pory"
	addobject LOCALID_ROUTE119_RIVAL_ON_BIKE
# 336 "data/maps/Route119/scripts.pory"
	delay 32
# 337 "data/maps/Route119/scripts.pory"
	switch VAR_TEMP_1
# 338 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_RivalEncounter_33
# 341 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_RivalEncounter_34
Route119_EventScript_RivalEncounter_31:
# 345 "data/maps/Route119/scripts.pory"
	waitmovement LOCALID_ROUTE119_RIVAL_ON_BIKE
# 346 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_ROUTE119_RIVAL_ON_BIKE
# 347 "data/maps/Route119/scripts.pory"
	setvar VAR_ROUTE119_STATE, 1
# 348 "data/maps/Route119/scripts.pory"
	savebgm MUS_DUMMY
# 349 "data/maps/Route119/scripts.pory"
	fadedefaultbgm
# 350 "data/maps/Route119/scripts.pory"
	delay 64
# 351 "data/maps/Route119/scripts.pory"
	switch VAR_TEMP_1
# 352 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_RivalEncounter_37
# 353 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_RivalEncounter_38
Route119_EventScript_RivalEncounter_35:
# 355 "data/maps/Route119/scripts.pory"
	addobject LOCALID_ROUTE119_SCOTT
# 356 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_SCOTT, Route119_Movement_ScottEnter
# 357 "data/maps/Route119/scripts.pory"
	waitmovement LOCALID_ROUTE119_SCOTT
# 358 "data/maps/Route119/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 359 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_RivalEncounter_Text_10
# 360 "data/maps/Route119/scripts.pory"
	closemessage
# 361 "data/maps/Route119/scripts.pory"
	switch VAR_TEMP_1
# 362 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_RivalEncounter_41
# 363 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_RivalEncounter_42
Route119_EventScript_RivalEncounter_39:
# 365 "data/maps/Route119/scripts.pory"
	waitmovement LOCALID_ROUTE119_SCOTT
# 366 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_ROUTE119_SCOTT
# 367 "data/maps/Route119/scripts.pory"
	setvar VAR_LEVEL_CAP_VARIABLE, 56
# 368 "data/maps/Route119/scripts.pory"
	release
	end

Route119_EventScript_RivalEncounter_2:
# 258 "data/maps/Route119/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	goto Route119_EventScript_RivalEncounter_1

Route119_EventScript_RivalEncounter_7:
# 266 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_RIVAL_ON_BIKE, Route119_Movement_RivalEnter1
	goto Route119_EventScript_RivalEncounter_5

Route119_EventScript_RivalEncounter_8:
# 267 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_RIVAL_ON_BIKE, Route119_Movement_RivalEnter2
	goto Route119_EventScript_RivalEncounter_5

Route119_EventScript_RivalEncounter_11:
# 273 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_RIVAL, 26, 32
# 274 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_RIVAL_ON_BIKE, 26, 32
	goto Route119_EventScript_RivalEncounter_9

Route119_EventScript_RivalEncounter_12:
# 276 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_RIVAL, 27, 32
# 277 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_RIVAL_ON_BIKE, 27, 32
	goto Route119_EventScript_RivalEncounter_9

Route119_EventScript_RivalEncounter_14:
# 283 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_RivalEncounter_Text_0
# 284 "data/maps/Route119/scripts.pory"
	closemessage
# 285 "data/maps/Route119/scripts.pory"
	delay 8
# 286 "data/maps/Route119/scripts.pory"
	playse SE_PIN
# 287 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_RIVAL, Common_Movement_ExclamationMark
# 288 "data/maps/Route119/scripts.pory"
	waitmovement LOCALID_ROUTE119_RIVAL
# 289 "data/maps/Route119/scripts.pory"
	waitse
# 290 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_RivalEncounter_Text_1
# 291 "data/maps/Route119/scripts.pory"
	closemessage
# 292 "data/maps/Route119/scripts.pory"
	switch VAR_STARTER_MON
# 293 "data/maps/Route119/scripts.pory"
	case 0, Route119_EventScript_RivalEncounter_23
# 294 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_RivalEncounter_24
# 295 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_RivalEncounter_25
Route119_EventScript_RivalEncounter_21:
# 297 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_RivalEncounter_Text_3
# 298 "data/maps/Route119/scripts.pory"
	closemessage
# 299 "data/maps/Route119/scripts.pory"
	delay 8
# 300 "data/maps/Route119/scripts.pory"
	giveitem ITEM_HM_FLY
# 301 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_RivalEncounter_Text_4
	goto Route119_EventScript_RivalEncounter_13

Route119_EventScript_RivalEncounter_19:
# 328 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_RIVAL, 26, 32
# 329 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_RIVAL_ON_BIKE, 26, 32
	goto Route119_EventScript_RivalEncounter_17

Route119_EventScript_RivalEncounter_20:
# 331 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_RIVAL, 27, 32
# 332 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_RIVAL_ON_BIKE, 27, 32
	goto Route119_EventScript_RivalEncounter_17

Route119_EventScript_RivalEncounter_23:
# 293 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_TREECKO, Route119_EventScript_RivalEncounter_Text_2
	goto Route119_EventScript_RivalEncounter_21

Route119_EventScript_RivalEncounter_24:
# 294 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_TORCHIC, Route119_EventScript_RivalEncounter_Text_2
	goto Route119_EventScript_RivalEncounter_21

Route119_EventScript_RivalEncounter_25:
# 295 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_MUDKIP, Route119_EventScript_RivalEncounter_Text_2
	goto Route119_EventScript_RivalEncounter_21

Route119_EventScript_RivalEncounter_28:
# 314 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TREECKO, Route119_EventScript_RivalEncounter_Text_7
	goto Route119_EventScript_RivalEncounter_26

Route119_EventScript_RivalEncounter_29:
# 315 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TORCHIC, Route119_EventScript_RivalEncounter_Text_7
	goto Route119_EventScript_RivalEncounter_26

Route119_EventScript_RivalEncounter_30:
# 316 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_MUDKIP, Route119_EventScript_RivalEncounter_Text_7
	goto Route119_EventScript_RivalEncounter_26

Route119_EventScript_RivalEncounter_33:
# 339 "data/maps/Route119/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_Movement_PlayerWatchRivalExit1
# 340 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_RIVAL_ON_BIKE, Route119_Movement_RivalExit1
	goto Route119_EventScript_RivalEncounter_31

Route119_EventScript_RivalEncounter_34:
# 342 "data/maps/Route119/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_Movement_PlayerWatchRivalExit2
# 343 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_RIVAL_ON_BIKE, Route119_Movement_RivalExit2
	goto Route119_EventScript_RivalEncounter_31

Route119_EventScript_RivalEncounter_37:
# 352 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_SCOTT, 28, 25
	goto Route119_EventScript_RivalEncounter_35

Route119_EventScript_RivalEncounter_38:
# 353 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_SCOTT, 29, 25
	goto Route119_EventScript_RivalEncounter_35

Route119_EventScript_RivalEncounter_41:
# 362 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_SCOTT, Route119_Movement_ScottExit1
	goto Route119_EventScript_RivalEncounter_39

Route119_EventScript_RivalEncounter_42:
# 363 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_SCOTT, Route119_Movement_ScottExit2
	goto Route119_EventScript_RivalEncounter_39


# 372 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalEnter1:
# 373 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 373 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 373 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 373 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 373 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 373 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 373 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 373 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 374 "data/maps/Route119/scripts.pory"
	walk_fast_up
	step_end

# 377 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalEnter2:
# 378 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 378 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 378 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 378 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 378 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 378 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 378 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 378 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 378 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 379 "data/maps/Route119/scripts.pory"
	walk_fast_up
	step_end

# 382 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalExit1:
# 383 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 384 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 384 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 384 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 385 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 386 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 386 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 386 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 386 "data/maps/Route119/scripts.pory"
	walk_fast_up
	step_end

# 389 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalExit2:
# 390 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 391 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 391 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 391 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 392 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 392 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 393 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 393 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 393 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 393 "data/maps/Route119/scripts.pory"
	walk_fast_up
	step_end

# 396 "data/maps/Route119/scripts.pory"
Route119_Movement_PlayerWatchRivalExit1:
# 397 "data/maps/Route119/scripts.pory"
	delay_16
# 398 "data/maps/Route119/scripts.pory"
	walk_in_place_right
# 399 "data/maps/Route119/scripts.pory"
	delay_8
# 400 "data/maps/Route119/scripts.pory"
	walk_in_place_up
	step_end

# 403 "data/maps/Route119/scripts.pory"
Route119_Movement_PlayerWatchRivalExit2:
# 404 "data/maps/Route119/scripts.pory"
	delay_16
# 405 "data/maps/Route119/scripts.pory"
	walk_in_place_left
# 406 "data/maps/Route119/scripts.pory"
	delay_8
# 407 "data/maps/Route119/scripts.pory"
	walk_in_place_up
	step_end

# 410 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottEnter:
# 411 "data/maps/Route119/scripts.pory"
	walk_down
# 411 "data/maps/Route119/scripts.pory"
	walk_down
# 411 "data/maps/Route119/scripts.pory"
	walk_down
# 411 "data/maps/Route119/scripts.pory"
	walk_down
# 412 "data/maps/Route119/scripts.pory"
	walk_left
# 412 "data/maps/Route119/scripts.pory"
	walk_left
# 413 "data/maps/Route119/scripts.pory"
	walk_down
	step_end

# 416 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottExit1:
# 417 "data/maps/Route119/scripts.pory"
	walk_up
# 418 "data/maps/Route119/scripts.pory"
	walk_right
# 418 "data/maps/Route119/scripts.pory"
	walk_right
# 419 "data/maps/Route119/scripts.pory"
	walk_up
# 419 "data/maps/Route119/scripts.pory"
	walk_up
# 419 "data/maps/Route119/scripts.pory"
	walk_up
# 419 "data/maps/Route119/scripts.pory"
	walk_up
# 419 "data/maps/Route119/scripts.pory"
	walk_up
	step_end

# 422 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottExit2:
# 423 "data/maps/Route119/scripts.pory"
	walk_up
# 424 "data/maps/Route119/scripts.pory"
	walk_right
# 425 "data/maps/Route119/scripts.pory"
	walk_up
# 425 "data/maps/Route119/scripts.pory"
	walk_up
# 425 "data/maps/Route119/scripts.pory"
	walk_up
# 425 "data/maps/Route119/scripts.pory"
	walk_up
# 425 "data/maps/Route119/scripts.pory"
	walk_up
	step_end

Route119_EventScript_RivalEncounter_Text_0:
# 283 "data/maps/Route119/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: {PLAYER}!\pGosh, where have you been hiding?\nI've been looking all over for you!$"

Route119_EventScript_RivalEncounter_Text_1:
# 290 "data/maps/Route119/scripts.pory"
	.string "Oh… Where did you get that thing on\nyour finger?\lThat's a pretty fancy-looking ring…\p…\pWow! So that's a Mega Ring?\nAnd you can use it for Mega\lEvolution…\pHehe, looks like we're on the same\npage. I've got one too, you know.\pI guess now we can keep getting\neven closer to our Pokémon, huh?\lI guess we have all the luck…\pBut I'm not about to lose to you\nbecause we both have Mega Rings!\lLet's see who's best in battle!\pAre your Pokémon all ready?\nOf course they are!\lLet's go!$"

Route119_EventScript_RivalEncounter_Text_2:
# 293 "data/maps/Route119/scripts.pory"
	.string "Achah! You're as strong as I expected,\n{PLAYER}!$"

Route119_EventScript_RivalEncounter_Text_3:
# 297 "data/maps/Route119/scripts.pory"
	.string "Hm!\nWell, you did battle me like I asked,\lso I'll give you a reward.$"

Route119_EventScript_RivalEncounter_Text_4:
# 301 "data/maps/Route119/scripts.pory"
	.string "If you use Fly, your Pokémon will\ncarry you back to anywhere you've\lbeen before.\pBut you already know that! Hehe.\pWell, till we meet again!\nAnd next time I won't lose!$"

Route119_EventScript_RivalEncounter_Text_5:
# 303 "data/maps/Route119/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: {PLAYER}!\nYou've been looking for Pokémon here!$"

Route119_EventScript_RivalEncounter_Text_6:
# 310 "data/maps/Route119/scripts.pory"
	.string "Huh?\pThat ring you've got on…\nIt's like, I don't know, really cool…\p…\pWhoa. So that's the Mega Ring?\nAnd you can use if for Mega\lEvolution…\pHeh, guess what? I've got one too.\nLooks like we're both stepping up our\lgame.\pSo you'll just keep getting closer\nto your Pokémon and getting even\lstronger…\pAll right, then.\nI guess I've just gotta help you test\lhow strong you've become, huh?\pShow me in battle how much better\nyou've gotten!\pCome on! A battle!\nI'm challenging you to a battle!$"

Route119_EventScript_RivalEncounter_Text_7:
# 314 "data/maps/Route119/scripts.pory"
	.string "Sheesh, {PLAYER}…\nYou've gotten pretty darn decent.$"

Route119_EventScript_RivalEncounter_Text_8:
# 318 "data/maps/Route119/scripts.pory"
	.string "I'd say you're good enough to search\nfor Pokémon anywhere by now.\pHere, I'll give you this, so try it out.\nYou should be able to use it fine.$"

Route119_EventScript_RivalEncounter_Text_9:
# 322 "data/maps/Route119/scripts.pory"
	.string "With Fly, your Pokémon can carry you\nback to just about anyplace you've\lvisited before.\pBut I'm sure you know that already.\pWell, I'm going on ahead.\nBut I'm definitely winning next time!$"

Route119_EventScript_RivalEncounter_Text_10:
# 359 "data/maps/Route119/scripts.pory"
	.string "{COLOR RED}Scott{COLOR DARK_GRAY}: Hahahah!\nWay to go, {PLAYER}!\pI just passed by a Trainer riding a\nBike.\pYou just beat that Trainer, didn't you?\nIt was pretty obvious that you did.\pThe kid looked really upset with a\nface all red from anger.\pI sure seem to run into you often.\nAre you off to Fortree Gym next?\pI expect that you'll do well at the Gym.\nWell, I'll be seeing you!$"
