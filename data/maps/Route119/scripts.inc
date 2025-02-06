# 1 "data/maps/Route119/scripts.pory"

# 2 "data/maps/Route119/scripts.pory"
.set LOCALID_RIVAL, 16
# 3 "data/maps/Route119/scripts.pory"
.set LOCALID_RIVAL_ON_BIKE, 25
# 4 "data/maps/Route119/scripts.pory"
.set LOCALID_SCOTT, 43
# 5 "data/maps/Route119/scripts.pory"

# 6 "data/maps/Route119/scripts.pory"
Route119_MapScripts::
# 7 "data/maps/Route119/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route119_OnResume
# 8 "data/maps/Route119/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_OnTransition
# 9 "data/maps/Route119/scripts.pory"
	.byte 0
# 10 "data/maps/Route119/scripts.pory"

# 11 "data/maps/Route119/scripts.pory"
Route119_OnResume:
# 12 "data/maps/Route119/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route119_EventScript_TryRemoveKecleon
# 13 "data/maps/Route119/scripts.pory"
	end
# 14 "data/maps/Route119/scripts.pory"

# 15 "data/maps/Route119/scripts.pory"
Route119_EventScript_TryRemoveKecleon::
# 16 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 17 "data/maps/Route119/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 18 "data/maps/Route119/scripts.pory"
	removeobject VAR_LAST_TALKED
# 19 "data/maps/Route119/scripts.pory"
	return
# 20 "data/maps/Route119/scripts.pory"

# 21 "data/maps/Route119/scripts.pory"
Route119_OnTransition:
# 22 "data/maps/Route119/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 23 "data/maps/Route119/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 24 "data/maps/Route119/scripts.pory"
	special SetRoute119Weather
# 25 "data/maps/Route119/scripts.pory"
	end
# 26 "data/maps/Route119/scripts.pory"

# 27 "data/maps/Route119/scripts.pory"
Route119_EventScript_CyclingTriathleteM::
# 28 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TallGrassSnaresBikeTires, MSGBOX_NPC
# 29 "data/maps/Route119/scripts.pory"
	end
# 30 "data/maps/Route119/scripts.pory"

# 31 "data/maps/Route119/scripts.pory"
Route119_EventScript_RouteSignFortree::
# 32 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_RouteSignFortree, MSGBOX_SIGN
# 33 "data/maps/Route119/scripts.pory"
	end
# 34 "data/maps/Route119/scripts.pory"

# 35 "data/maps/Route119/scripts.pory"
Route119_EventScript_WeatherInstituteSign::
# 36 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_WeatherInstitute, MSGBOX_SIGN
# 37 "data/maps/Route119/scripts.pory"
	end
# 38 "data/maps/Route119/scripts.pory"

# 39 "data/maps/Route119/scripts.pory"
Route119_EventScript_Brent::
# 40 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_BRENT, Route119_Text_BrentIntro, Route119_Text_BrentDefeat
# 41 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrentPostBattle, MSGBOX_AUTOCLOSE
# 42 "data/maps/Route119/scripts.pory"
	end
# 43 "data/maps/Route119/scripts.pory"

# 44 "data/maps/Route119/scripts.pory"
Route119_EventScript_Donald::
# 45 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DONALD, Route119_Text_DonaldIntro, Route119_Text_DonaldDefeat
# 46 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DonaldPostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/Route119/scripts.pory"
	end
# 48 "data/maps/Route119/scripts.pory"

# 49 "data/maps/Route119/scripts.pory"
Route119_EventScript_Taylor::
# 50 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_TAYLOR, Route119_Text_TaylorIntro, Route119_Text_TaylorDefeat
# 51 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TaylorPostBattle, MSGBOX_AUTOCLOSE
# 52 "data/maps/Route119/scripts.pory"
	end
# 53 "data/maps/Route119/scripts.pory"

# 54 "data/maps/Route119/scripts.pory"
Route119_EventScript_Doug::
# 55 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DOUG, Route119_Text_DougIntro, Route119_Text_DougDefeat
# 56 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DougPostBattle, MSGBOX_AUTOCLOSE
# 57 "data/maps/Route119/scripts.pory"
	end
# 58 "data/maps/Route119/scripts.pory"

# 59 "data/maps/Route119/scripts.pory"
Route119_EventScript_Greg::
# 60 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_GREG, Route119_Text_GregIntro, Route119_Text_GregDefeat
# 61 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_GregPostBattle, MSGBOX_AUTOCLOSE
# 62 "data/maps/Route119/scripts.pory"
	end
# 63 "data/maps/Route119/scripts.pory"

# 64 "data/maps/Route119/scripts.pory"
Route119_EventScript_Kent::
# 65 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_KENT, Route119_Text_KentIntro, Route119_Text_KentDefeat
# 66 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_KentPostBattle, MSGBOX_AUTOCLOSE
# 67 "data/maps/Route119/scripts.pory"
	end
# 68 "data/maps/Route119/scripts.pory"

# 69 "data/maps/Route119/scripts.pory"
Route119_EventScript_Jackson::
# 70 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_JACKSON_1, Route119_Text_JacksonIntro, Route119_Text_JacksonDefeat, Route119_EventScript_RegisterJackson
# 71 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 72 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route119_EventScript_RematchJackson
# 73 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonPostBattle, MSGBOX_DEFAULT
# 74 "data/maps/Route119/scripts.pory"
	release
# 75 "data/maps/Route119/scripts.pory"
	end
# 76 "data/maps/Route119/scripts.pory"

# 77 "data/maps/Route119/scripts.pory"
Route119_EventScript_RegisterJackson::
# 78 "data/maps/Route119/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 79 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 80 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonRegister, MSGBOX_DEFAULT
# 81 "data/maps/Route119/scripts.pory"
	register_matchcall TRAINER_JACKSON_1
# 82 "data/maps/Route119/scripts.pory"
	release
# 83 "data/maps/Route119/scripts.pory"
	end
# 84 "data/maps/Route119/scripts.pory"

# 85 "data/maps/Route119/scripts.pory"
Route119_EventScript_RematchJackson::
# 86 "data/maps/Route119/scripts.pory"
	trainerbattle_rematch TRAINER_JACKSON_1, Route119_Text_JacksonRematchIntro, Route119_Text_JacksonRematchDefeat
# 87 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonPostRematch, MSGBOX_AUTOCLOSE
# 88 "data/maps/Route119/scripts.pory"
	end
# 89 "data/maps/Route119/scripts.pory"

# 90 "data/maps/Route119/scripts.pory"
Route119_EventScript_Catherine::
# 91 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_CATHERINE_1, Route119_Text_CatherineIntro, Route119_Text_CatherineDefeat, Route119_EventScript_RegisterCatherine
# 92 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 93 "data/maps/Route119/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route119_EventScript_RematchCatherine
# 94 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherinePostBattle, MSGBOX_DEFAULT
# 95 "data/maps/Route119/scripts.pory"
	release
# 96 "data/maps/Route119/scripts.pory"
	end
# 97 "data/maps/Route119/scripts.pory"

# 98 "data/maps/Route119/scripts.pory"
Route119_EventScript_RegisterCatherine::
# 99 "data/maps/Route119/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 100 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 101 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherineRegister, MSGBOX_DEFAULT
# 102 "data/maps/Route119/scripts.pory"
	register_matchcall TRAINER_CATHERINE_1
# 103 "data/maps/Route119/scripts.pory"
	release
# 104 "data/maps/Route119/scripts.pory"
	end
# 105 "data/maps/Route119/scripts.pory"

# 106 "data/maps/Route119/scripts.pory"
Route119_EventScript_RematchCatherine::
# 107 "data/maps/Route119/scripts.pory"
	trainerbattle_rematch TRAINER_CATHERINE_1, Route119_Text_CatherineRematchIntro, Route119_Text_CatherineRematchDefeat
# 108 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherinePostRematch, MSGBOX_AUTOCLOSE
# 109 "data/maps/Route119/scripts.pory"
	end
# 110 "data/maps/Route119/scripts.pory"

# 111 "data/maps/Route119/scripts.pory"
Route119_EventScript_Hugh::
# 112 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_HUGH, Route119_Text_HughIntro, Route119_Text_HughDefeat
# 113 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_HughPostBattle, MSGBOX_AUTOCLOSE
# 114 "data/maps/Route119/scripts.pory"
	end
# 115 "data/maps/Route119/scripts.pory"

# 116 "data/maps/Route119/scripts.pory"
Route119_EventScript_Phil::
# 117 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_PHIL, Route119_Text_PhilIntro, Route119_Text_PhilDefeat
# 118 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_PhilPostBattle, MSGBOX_AUTOCLOSE
# 119 "data/maps/Route119/scripts.pory"
	end
# 120 "data/maps/Route119/scripts.pory"

# 121 "data/maps/Route119/scripts.pory"
Route119_EventScript_Yasu::
# 122 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_YASU, Route119_Text_YasuIntro, Route119_Text_YasuDefeat
# 123 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_YasuPostBattle, MSGBOX_AUTOCLOSE
# 124 "data/maps/Route119/scripts.pory"
	end
# 125 "data/maps/Route119/scripts.pory"

# 126 "data/maps/Route119/scripts.pory"
Route119_EventScript_Takashi::
# 127 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_TAKASHI, Route119_Text_TakashiIntro, Route119_Text_TakashiDefeat
# 128 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TakashiPostBattle, MSGBOX_AUTOCLOSE
# 129 "data/maps/Route119/scripts.pory"
	end
# 130 "data/maps/Route119/scripts.pory"

# 131 "data/maps/Route119/scripts.pory"
Route119_EventScript_Hideo::
# 132 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_HIDEO, Route119_Text_HideoIntro, Route119_Text_HideoDefeat
# 133 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_HideoPostBattle, MSGBOX_AUTOCLOSE
# 134 "data/maps/Route119/scripts.pory"
	end
# 135 "data/maps/Route119/scripts.pory"

# 136 "data/maps/Route119/scripts.pory"
Route119_EventScript_Chris::
# 137 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_CHRIS, Route119_Text_ChrisIntro, Route119_Text_ChrisDefeat
# 138 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ChrisPostBattle, MSGBOX_AUTOCLOSE
# 139 "data/maps/Route119/scripts.pory"
	end
# 140 "data/maps/Route119/scripts.pory"

# 141 "data/maps/Route119/scripts.pory"
Route119_EventScript_Fabian::
# 142 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_FABIAN, Route119_Text_FabianIntro, Route119_Text_FabianDefeat
# 143 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_FabianPostBattle, MSGBOX_AUTOCLOSE
# 144 "data/maps/Route119/scripts.pory"
	end
# 145 "data/maps/Route119/scripts.pory"

# 146 "data/maps/Route119/scripts.pory"
Route119_EventScript_Dayton::
# 147 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DAYTON, Route119_Text_DaytonIntro, Route119_Text_DaytonDefeat
# 148 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DaytonPostBattle, MSGBOX_AUTOCLOSE
# 149 "data/maps/Route119/scripts.pory"
	end
# 150 "data/maps/Route119/scripts.pory"

# 151 "data/maps/Route119/scripts.pory"
Route119_EventScript_Rachel::
# 152 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_RACHEL, Route119_Text_RachelIntro, Route119_Text_RachelDefeat
# 153 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_RachelPostBattle, MSGBOX_AUTOCLOSE
# 154 "data/maps/Route119/scripts.pory"
	end
# 155 "data/maps/Route119/scripts.pory"

# 156 "data/maps/Route119/scripts.pory"
Route119_EventScript_BridgeAquaGrunt1::
# 157 "data/maps/Route119/scripts.pory"
	lock
# 158 "data/maps/Route119/scripts.pory"
	faceplayer
# 159 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_StayAwayFromWeatherInstitute, MSGBOX_DEFAULT
# 160 "data/maps/Route119/scripts.pory"
	closemessage
# 161 "data/maps/Route119/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceRight
# 162 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 163 "data/maps/Route119/scripts.pory"
	release
# 164 "data/maps/Route119/scripts.pory"
	end
# 165 "data/maps/Route119/scripts.pory"

# 166 "data/maps/Route119/scripts.pory"
Route119_EventScript_BridgeAquaGrunt2::
# 167 "data/maps/Route119/scripts.pory"
	lock
# 168 "data/maps/Route119/scripts.pory"
	faceplayer
# 169 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DontGoNearWeatherInstitute, MSGBOX_DEFAULT
# 170 "data/maps/Route119/scripts.pory"
	closemessage
# 171 "data/maps/Route119/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceRight
# 172 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 173 "data/maps/Route119/scripts.pory"
	release
# 174 "data/maps/Route119/scripts.pory"
	end
# 175 "data/maps/Route119/scripts.pory"

# 176 "data/maps/Route119/scripts.pory"
Route119_EventScript_Boy1::
# 177 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ThoughtFlyByCatchingBirdMons, MSGBOX_NPC
# 178 "data/maps/Route119/scripts.pory"
	end
# 179 "data/maps/Route119/scripts.pory"

# 180 "data/maps/Route119/scripts.pory"
Route119_EventScript_Boy2::
# 181 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CanYourMonMakeSecretBase, MSGBOX_NPC
# 182 "data/maps/Route119/scripts.pory"
	end
# 183 "data/maps/Route119/scripts.pory"

# 184 "data/maps/Route119/scripts.pory"
Route119_EventScript_TrainerTipsDecoration::
# 185 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TrainerTipsDecoration, MSGBOX_SIGN
# 186 "data/maps/Route119/scripts.pory"
	end
# 187 "data/maps/Route119/scripts.pory"

# 188 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottWonAtFortreeGymCall::
# 189 "data/maps/Route119/scripts.pory"
	lockall
# 190 "data/maps/Route119/scripts.pory"
	pokenavcall Route119_Text_ScottYouWonAtFortreeGym
# 191 "data/maps/Route119/scripts.pory"
	waitmessage
# 192 "data/maps/Route119/scripts.pory"
	clearflag FLAG_SCOTT_CALL_FORTREE_GYM
# 193 "data/maps/Route119/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 194 "data/maps/Route119/scripts.pory"
	releaseall
# 195 "data/maps/Route119/scripts.pory"
	end
# 196 "data/maps/Route119/scripts.pory"

# 197 "data/maps/Route119/scripts.pory"
Route119_Text_ScottYouWonAtFortreeGym:
# 198 "data/maps/Route119/scripts.pory"
	.string "… … … … … …\n"
# 199 "data/maps/Route119/scripts.pory"
	.string "… … … … … Beep!\p"
# 200 "data/maps/Route119/scripts.pory"
	.string "Scott: Hiya, {PLAYER}{KUN}, it's me!\p"
# 201 "data/maps/Route119/scripts.pory"
	.string "Just as I thought, you won at\n"
# 202 "data/maps/Route119/scripts.pory"
	.string "the Fortree Gym.\p"
# 203 "data/maps/Route119/scripts.pory"
	.string "Your strength…\n"
# 204 "data/maps/Route119/scripts.pory"
	.string "Perhaps you really are the Trainer\l"
# 205 "data/maps/Route119/scripts.pory"
	.string "that I've been searching for.\p"
# 206 "data/maps/Route119/scripts.pory"
	.string "Remember, you have a fan in me.\n"
# 207 "data/maps/Route119/scripts.pory"
	.string "I'll be cheering from the sidelines.\l"
# 208 "data/maps/Route119/scripts.pory"
	.string "Keep up the great work!\p"
# 209 "data/maps/Route119/scripts.pory"
	.string "… … … … … …\n"
# 210 "data/maps/Route119/scripts.pory"
	.string "… … … … … Click!$"
# 211 "data/maps/Route119/scripts.pory"

# 212 "data/maps/Route119/scripts.pory"
Route119_Text_StayAwayFromWeatherInstitute:
# 213 "data/maps/Route119/scripts.pory"
	.string "We're standing lookout here.\pHey, you!\pStay away from the Weather Institute.\nIt's not safe.$"
# 214 "data/maps/Route119/scripts.pory"

# 215 "data/maps/Route119/scripts.pory"
Route119_Text_DontGoNearWeatherInstitute:
# 216 "data/maps/Route119/scripts.pory"
	.string "Lookout duty is surprisingly boring.\pHey, you!\pPlease don't go near the Weather\nInstitute.$"
# 217 "data/maps/Route119/scripts.pory"

# 218 "data/maps/Route119/scripts.pory"
Route119_Text_ThoughtFlyByCatchingBirdMons:
# 219 "data/maps/Route119/scripts.pory"
	.string "I thought how you fly is by catching\na whole flock of bird Pokémon, and\lthen hanging on to them somehow.\pBut it turns out there's an HM move\ncalled Fly!\pI don't know…\nIn a way, my dream came true, but I\lalso feel like I lost my dream…\lIt feels really strange…$"
# 220 "data/maps/Route119/scripts.pory"

# 221 "data/maps/Route119/scripts.pory"
Route119_Text_TallGrassSnaresBikeTires:
# 222 "data/maps/Route119/scripts.pory"
	.string "Tch…\n"
# 223 "data/maps/Route119/scripts.pory"
	.string "It's a no-go…\p"
# 224 "data/maps/Route119/scripts.pory"
	.string "The tall grass snares Bike tires.\n"
# 225 "data/maps/Route119/scripts.pory"
	.string "There's no way you can cycle here.$"
# 226 "data/maps/Route119/scripts.pory"

# 227 "data/maps/Route119/scripts.pory"
Route119_Text_CanYourMonMakeSecretBase:
# 228 "data/maps/Route119/scripts.pory"
	.string "Can your Pokémon use its Secret Power\n"
# 229 "data/maps/Route119/scripts.pory"
	.string "on a big pile of grass and make a\l"
# 230 "data/maps/Route119/scripts.pory"
	.string "Secret Base?$"
# 231 "data/maps/Route119/scripts.pory"

# 232 "data/maps/Route119/scripts.pory"
Route119_Text_RouteSignFortree:
# 233 "data/maps/Route119/scripts.pory"
	.string "Route 119\n"
# 234 "data/maps/Route119/scripts.pory"
	.string "{RIGHT_ARROW} Fortree City$"
# 235 "data/maps/Route119/scripts.pory"

# 236 "data/maps/Route119/scripts.pory"
Route119_Text_WeatherInstitute:
# 237 "data/maps/Route119/scripts.pory"
	.string "Weather Institute$"
# 238 "data/maps/Route119/scripts.pory"

# 239 "data/maps/Route119/scripts.pory"
Route119_Text_TrainerTipsDecoration:
# 240 "data/maps/Route119/scripts.pory"
	.string "Trainer Tips\pUp to sixteen decorations and\nfurniture items can be placed in a\lSecret Base.\pPick your favorite items and create\nyour very own Secret Base exactly\lthe way you want.$"

Route119_EventScript_RivalTrigger1::
# 245 "data/maps/Route119/scripts.pory"
	setvar VAR_TEMP_1, 1
# 246 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter
	end


Route119_EventScript_RivalTrigger2::
# 251 "data/maps/Route119/scripts.pory"
	setvar VAR_TEMP_1, 2
# 252 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter
	end


Route119_EventScript_RivalEncounter::
# 257 "data/maps/Route119/scripts.pory"
	lock
# 258 "data/maps/Route119/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 259 "data/maps/Route119/scripts.pory"
	checkplayergender
# 260 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route119_EventScript_RivalEncounter_2
# 263 "data/maps/Route119/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
Route119_EventScript_RivalEncounter_1:
# 265 "data/maps/Route119/scripts.pory"
	delay 64
# 266 "data/maps/Route119/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 267 "data/maps/Route119/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 268 "data/maps/Route119/scripts.pory"
	switch VAR_TEMP_1
# 269 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_RivalEncounter_7
# 270 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_RivalEncounter_8
Route119_EventScript_RivalEncounter_5:
# 272 "data/maps/Route119/scripts.pory"
	waitmovement LOCALID_RIVAL_ON_BIKE
# 273 "data/maps/Route119/scripts.pory"
	delay 32
# 274 "data/maps/Route119/scripts.pory"
	switch VAR_TEMP_1
# 275 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_RivalEncounter_11
# 278 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_RivalEncounter_12
Route119_EventScript_RivalEncounter_9:
# 282 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 283 "data/maps/Route119/scripts.pory"
	addobject LOCALID_RIVAL
# 284 "data/maps/Route119/scripts.pory"
	checkplayergender
# 285 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route119_EventScript_RivalEncounter_14
# 306 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_RivalEncounter_Text_5
# 307 "data/maps/Route119/scripts.pory"
	closemessage
# 308 "data/maps/Route119/scripts.pory"
	delay 8
# 309 "data/maps/Route119/scripts.pory"
	playse SE_PIN
# 310 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 311 "data/maps/Route119/scripts.pory"
	waitmovement LOCALID_RIVAL
# 312 "data/maps/Route119/scripts.pory"
	waitse
# 313 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_RivalEncounter_Text_6
# 314 "data/maps/Route119/scripts.pory"
	closemessage
# 315 "data/maps/Route119/scripts.pory"
	delay 8
# 316 "data/maps/Route119/scripts.pory"
	switch VAR_STARTER_MON
# 317 "data/maps/Route119/scripts.pory"
	case 0, Route119_EventScript_RivalEncounter_28
# 318 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_RivalEncounter_29
# 319 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_RivalEncounter_30
Route119_EventScript_RivalEncounter_26:
# 321 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_RivalEncounter_Text_8
# 322 "data/maps/Route119/scripts.pory"
	closemessage
# 323 "data/maps/Route119/scripts.pory"
	delay 8
# 324 "data/maps/Route119/scripts.pory"
	giveitem ITEM_HM_FLY
# 325 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_RivalEncounter_Text_9
Route119_EventScript_RivalEncounter_13:
# 327 "data/maps/Route119/scripts.pory"
	closemessage
# 328 "data/maps/Route119/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLY
# 329 "data/maps/Route119/scripts.pory"
	switch VAR_TEMP_1
# 330 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_RivalEncounter_19
# 333 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_RivalEncounter_20
Route119_EventScript_RivalEncounter_17:
# 337 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_RIVAL
# 338 "data/maps/Route119/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 339 "data/maps/Route119/scripts.pory"
	delay 32
# 340 "data/maps/Route119/scripts.pory"
	switch VAR_TEMP_1
# 341 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_RivalEncounter_33
# 344 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_RivalEncounter_34
Route119_EventScript_RivalEncounter_31:
# 348 "data/maps/Route119/scripts.pory"
	waitmovement LOCALID_RIVAL_ON_BIKE
# 349 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 350 "data/maps/Route119/scripts.pory"
	setvar VAR_ROUTE119_STATE, 1
# 351 "data/maps/Route119/scripts.pory"
	savebgm MUS_DUMMY
# 352 "data/maps/Route119/scripts.pory"
	fadedefaultbgm
# 353 "data/maps/Route119/scripts.pory"
	delay 64
# 354 "data/maps/Route119/scripts.pory"
	switch VAR_TEMP_1
# 355 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_RivalEncounter_37
# 356 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_RivalEncounter_38
Route119_EventScript_RivalEncounter_35:
# 358 "data/maps/Route119/scripts.pory"
	addobject LOCALID_SCOTT
# 359 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_SCOTT, Route119_Movement_ScottEnter
# 360 "data/maps/Route119/scripts.pory"
	waitmovement LOCALID_SCOTT
# 361 "data/maps/Route119/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 362 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_RivalEncounter_Text_10
# 363 "data/maps/Route119/scripts.pory"
	closemessage
# 364 "data/maps/Route119/scripts.pory"
	switch VAR_TEMP_1
# 365 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_RivalEncounter_41
# 366 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_RivalEncounter_42
Route119_EventScript_RivalEncounter_39:
# 368 "data/maps/Route119/scripts.pory"
	waitmovement LOCALID_SCOTT
# 369 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_SCOTT
# 370 "data/maps/Route119/scripts.pory"
	setvar VAR_LEVEL_CAP_VARIABLE, 56
# 371 "data/maps/Route119/scripts.pory"
	release
	end

Route119_EventScript_RivalEncounter_2:
# 261 "data/maps/Route119/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	goto Route119_EventScript_RivalEncounter_1

Route119_EventScript_RivalEncounter_7:
# 269 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalEnter1
	goto Route119_EventScript_RivalEncounter_5

Route119_EventScript_RivalEncounter_8:
# 270 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalEnter2
	goto Route119_EventScript_RivalEncounter_5

Route119_EventScript_RivalEncounter_11:
# 276 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 26, 32
# 277 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 26, 32
	goto Route119_EventScript_RivalEncounter_9

Route119_EventScript_RivalEncounter_12:
# 279 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 27, 32
# 280 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 27, 32
	goto Route119_EventScript_RivalEncounter_9

Route119_EventScript_RivalEncounter_14:
# 286 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_RivalEncounter_Text_0
# 287 "data/maps/Route119/scripts.pory"
	closemessage
# 288 "data/maps/Route119/scripts.pory"
	delay 8
# 289 "data/maps/Route119/scripts.pory"
	playse SE_PIN
# 290 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 291 "data/maps/Route119/scripts.pory"
	waitmovement LOCALID_RIVAL
# 292 "data/maps/Route119/scripts.pory"
	waitse
# 293 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_RivalEncounter_Text_1
# 294 "data/maps/Route119/scripts.pory"
	closemessage
# 295 "data/maps/Route119/scripts.pory"
	switch VAR_STARTER_MON
# 296 "data/maps/Route119/scripts.pory"
	case 0, Route119_EventScript_RivalEncounter_23
# 297 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_RivalEncounter_24
# 298 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_RivalEncounter_25
Route119_EventScript_RivalEncounter_21:
# 300 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_RivalEncounter_Text_3
# 301 "data/maps/Route119/scripts.pory"
	closemessage
# 302 "data/maps/Route119/scripts.pory"
	delay 8
# 303 "data/maps/Route119/scripts.pory"
	giveitem ITEM_HM_FLY
# 304 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_RivalEncounter_Text_4
	goto Route119_EventScript_RivalEncounter_13

Route119_EventScript_RivalEncounter_19:
# 331 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 26, 32
# 332 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 26, 32
	goto Route119_EventScript_RivalEncounter_17

Route119_EventScript_RivalEncounter_20:
# 334 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 27, 32
# 335 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 27, 32
	goto Route119_EventScript_RivalEncounter_17

Route119_EventScript_RivalEncounter_23:
# 296 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_TREECKO, Route119_EventScript_RivalEncounter_Text_2
	goto Route119_EventScript_RivalEncounter_21

Route119_EventScript_RivalEncounter_24:
# 297 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_TORCHIC, Route119_EventScript_RivalEncounter_Text_2
	goto Route119_EventScript_RivalEncounter_21

Route119_EventScript_RivalEncounter_25:
# 298 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_MUDKIP, Route119_EventScript_RivalEncounter_Text_2
	goto Route119_EventScript_RivalEncounter_21

Route119_EventScript_RivalEncounter_28:
# 317 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TREECKO, Route119_EventScript_RivalEncounter_Text_7
	goto Route119_EventScript_RivalEncounter_26

Route119_EventScript_RivalEncounter_29:
# 318 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TORCHIC, Route119_EventScript_RivalEncounter_Text_7
	goto Route119_EventScript_RivalEncounter_26

Route119_EventScript_RivalEncounter_30:
# 319 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_MUDKIP, Route119_EventScript_RivalEncounter_Text_7
	goto Route119_EventScript_RivalEncounter_26

Route119_EventScript_RivalEncounter_33:
# 342 "data/maps/Route119/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_Movement_PlayerWatchRivalExit1
# 343 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalExit1
	goto Route119_EventScript_RivalEncounter_31

Route119_EventScript_RivalEncounter_34:
# 345 "data/maps/Route119/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_Movement_PlayerWatchRivalExit2
# 346 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalExit2
	goto Route119_EventScript_RivalEncounter_31

Route119_EventScript_RivalEncounter_37:
# 355 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 28, 25
	goto Route119_EventScript_RivalEncounter_35

Route119_EventScript_RivalEncounter_38:
# 356 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 29, 25
	goto Route119_EventScript_RivalEncounter_35

Route119_EventScript_RivalEncounter_41:
# 365 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_SCOTT, Route119_Movement_ScottExit1
	goto Route119_EventScript_RivalEncounter_39

Route119_EventScript_RivalEncounter_42:
# 366 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_SCOTT, Route119_Movement_ScottExit2
	goto Route119_EventScript_RivalEncounter_39


# 375 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalEnter1:
# 376 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 376 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 376 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 376 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 376 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 376 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 376 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 376 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 377 "data/maps/Route119/scripts.pory"
	walk_fast_up
	step_end

# 380 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalEnter2:
# 381 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 381 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 381 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 381 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 381 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 381 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 381 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 381 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 381 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 382 "data/maps/Route119/scripts.pory"
	walk_fast_up
	step_end

# 385 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalExit1:
# 386 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 387 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 387 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 387 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 388 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 389 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 389 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 389 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 389 "data/maps/Route119/scripts.pory"
	walk_fast_up
	step_end

# 392 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalExit2:
# 393 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 394 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 394 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 394 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 395 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 395 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 396 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 396 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 396 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 396 "data/maps/Route119/scripts.pory"
	walk_fast_up
	step_end

# 399 "data/maps/Route119/scripts.pory"
Route119_Movement_PlayerWatchRivalExit1:
# 400 "data/maps/Route119/scripts.pory"
	delay_16
# 401 "data/maps/Route119/scripts.pory"
	walk_in_place_right
# 402 "data/maps/Route119/scripts.pory"
	delay_8
# 403 "data/maps/Route119/scripts.pory"
	walk_in_place_up
	step_end

# 406 "data/maps/Route119/scripts.pory"
Route119_Movement_PlayerWatchRivalExit2:
# 407 "data/maps/Route119/scripts.pory"
	delay_16
# 408 "data/maps/Route119/scripts.pory"
	walk_in_place_left
# 409 "data/maps/Route119/scripts.pory"
	delay_8
# 410 "data/maps/Route119/scripts.pory"
	walk_in_place_up
	step_end

# 413 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottEnter:
# 414 "data/maps/Route119/scripts.pory"
	walk_down
# 414 "data/maps/Route119/scripts.pory"
	walk_down
# 414 "data/maps/Route119/scripts.pory"
	walk_down
# 414 "data/maps/Route119/scripts.pory"
	walk_down
# 415 "data/maps/Route119/scripts.pory"
	walk_left
# 415 "data/maps/Route119/scripts.pory"
	walk_left
# 416 "data/maps/Route119/scripts.pory"
	walk_down
	step_end

# 419 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottExit1:
# 420 "data/maps/Route119/scripts.pory"
	walk_up
# 421 "data/maps/Route119/scripts.pory"
	walk_right
# 421 "data/maps/Route119/scripts.pory"
	walk_right
# 422 "data/maps/Route119/scripts.pory"
	walk_up
# 422 "data/maps/Route119/scripts.pory"
	walk_up
# 422 "data/maps/Route119/scripts.pory"
	walk_up
# 422 "data/maps/Route119/scripts.pory"
	walk_up
# 422 "data/maps/Route119/scripts.pory"
	walk_up
	step_end

# 425 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottExit2:
# 426 "data/maps/Route119/scripts.pory"
	walk_up
# 427 "data/maps/Route119/scripts.pory"
	walk_right
# 428 "data/maps/Route119/scripts.pory"
	walk_up
# 428 "data/maps/Route119/scripts.pory"
	walk_up
# 428 "data/maps/Route119/scripts.pory"
	walk_up
# 428 "data/maps/Route119/scripts.pory"
	walk_up
# 428 "data/maps/Route119/scripts.pory"
	walk_up
	step_end

Route119_EventScript_RivalEncounter_Text_0:
# 286 "data/maps/Route119/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: {PLAYER}!\pGosh, where have you been hiding?\nI've been looking all over for you!$"

Route119_EventScript_RivalEncounter_Text_1:
# 293 "data/maps/Route119/scripts.pory"
	.string "Oh… Where did you get that thing on\nyour finger?\lThat's a pretty fancy-looking ring…\p…\pWow! So that's a Mega Ring?\nAnd you can use it for Mega Evolution…\pI guess now you can keep getting even\ncloser to your Pokémon, huh?\lSome guys have all the luck…\pBut I'm not about to lose to you and\nsome accessory!\lLet's see who's best in battle!\pAre your Pokémon all ready?\nOf course they are!\lLet's go!$"

Route119_EventScript_RivalEncounter_Text_2:
# 296 "data/maps/Route119/scripts.pory"
	.string "Achah! You're as strong as I expected,\n{PLAYER}!$"

Route119_EventScript_RivalEncounter_Text_3:
# 300 "data/maps/Route119/scripts.pory"
	.string "Hm!\nWell, you did battle me like I asked,\lso I'll give you a reward.$"

Route119_EventScript_RivalEncounter_Text_4:
# 304 "data/maps/Route119/scripts.pory"
	.string "If you use Fly, your Pokémon will\ncarry you back to anywhere you've\lbeen before. But you already know\lthat! Hehe.\pWell, till we meet again!\nAnd next time I won't lose!$"

Route119_EventScript_RivalEncounter_Text_5:
# 306 "data/maps/Route119/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: {PLAYER}!\nYou've been looking for Pokémon here!$"

Route119_EventScript_RivalEncounter_Text_6:
# 313 "data/maps/Route119/scripts.pory"
	.string "Huh?\pThat ring you've got on…\nIt's like, I don't know, really cool…\p…\pWhoa. So that's the Mega Ring?\nAnd you can use if for Mega Evolution…\pSo you'll just keep getting closer\nto your Pokémon and getting even\lstronger…\pAll right, then.\nI guess I've just gotta help you test\lhow strong you've become, huh?\pShow me in battle how much better\nyou've gotten!\pCome on! A battle!\nI'm challenging you to a battle!$"

Route119_EventScript_RivalEncounter_Text_7:
# 317 "data/maps/Route119/scripts.pory"
	.string "Sheesh, {PLAYER}…\nYou've gotten pretty darn decent.$"

Route119_EventScript_RivalEncounter_Text_8:
# 321 "data/maps/Route119/scripts.pory"
	.string "I'd say you're good enough to search\nfor Pokémon anywhere by now.\pHere, I'll give you this, so try it out.\nYou should be able to use it fine.$"

Route119_EventScript_RivalEncounter_Text_9:
# 325 "data/maps/Route119/scripts.pory"
	.string "With Fly, your Pokémon can carry you\nback to just about anyplace you've\lvisited before. But I'm sure you know\lthat already.\pWell, I'm going on ahead.\nBut I'm definitely winning next time!$"

Route119_EventScript_RivalEncounter_Text_10:
# 362 "data/maps/Route119/scripts.pory"
	.string "{COLOR RED}Scott{COLOR DARK_GRAY}: Hahahah!\nWay to go, {PLAYER}!\pI just passed by a Trainer riding a\nBike.\pYou just beat that Trainer, didn't you?\nIt was pretty obvious that you did.\pThe kid looked really upset with a\nface all red from anger.\pI sure seem to run into you often.\nAre you off to Fortree Gym next?\pI expect that you'll do well at the Gym.\nWell, I'll be seeing you!$"
