# 1 "data/maps/Route113/scripts.pory"

# 2 "data/maps/Route113/scripts.pory"
Route113_MapScripts::
# 3 "data/maps/Route113/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route113_OnResume
# 4 "data/maps/Route113/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route113_OnTransition
# 5 "data/maps/Route113/scripts.pory"
	.byte 0
# 6 "data/maps/Route113/scripts.pory"

# 7 "data/maps/Route113/scripts.pory"
Route113_OnResume:
# 8 "data/maps/Route113/scripts.pory"
	setstepcallback STEP_CB_ASH
# 9 "data/maps/Route113/scripts.pory"
	end
# 10 "data/maps/Route113/scripts.pory"

# 11 "data/maps/Route113/scripts.pory"
Route113_OnTransition:
# 12 "data/maps/Route113/scripts.pory"
    call Common_EventScript_SetupRivalGfxId
# 13 "data/maps/Route113/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 14 "data/maps/Route113/scripts.pory"
	call Route113_EventScript_CheckSetAshWeather
# 15 "data/maps/Route113/scripts.pory"
	end
# 16 "data/maps/Route113/scripts.pory"

# 17 "data/maps/Route113/scripts.pory"
Route113_EventScript_CheckSetAshWeather::
# 18 "data/maps/Route113/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 19 "data/maps/Route113/scripts.pory"
	goto_if_lt VAR_TEMP_0, 19, Route113_EventScript_DontSetAshWeather
# 20 "data/maps/Route113/scripts.pory"
	goto_if_gt VAR_TEMP_0, 84, Route113_EventScript_DontSetAshWeather
# 21 "data/maps/Route113/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 22 "data/maps/Route113/scripts.pory"
	return
# 23 "data/maps/Route113/scripts.pory"

# 24 "data/maps/Route113/scripts.pory"
Route113_EventScript_DontSetAshWeather::
# 25 "data/maps/Route113/scripts.pory"
	return
# 26 "data/maps/Route113/scripts.pory"

# 27 "data/maps/Route113/scripts.pory"
Route113_EventScript_Gentleman::
# 28 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_AshCanBeFashionedIntoGlass, MSGBOX_NPC
# 29 "data/maps/Route113/scripts.pory"
	end
# 30 "data/maps/Route113/scripts.pory"

# 31 "data/maps/Route113/scripts.pory"
Route113_EventScript_NinjaBoy::
# 32 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_FunWalkingThroughAsh, MSGBOX_NPC
# 33 "data/maps/Route113/scripts.pory"
	end
# 34 "data/maps/Route113/scripts.pory"

# 35 "data/maps/Route113/scripts.pory"
Route113_EventScript_RouteSign111::
# 36 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_RouteSign111, MSGBOX_SIGN
# 37 "data/maps/Route113/scripts.pory"
	end
# 38 "data/maps/Route113/scripts.pory"

# 39 "data/maps/Route113/scripts.pory"
Route113_EventScript_RouteSignFallarbor::
# 40 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_RouteSignFallarbor, MSGBOX_SIGN
# 41 "data/maps/Route113/scripts.pory"
	end
# 42 "data/maps/Route113/scripts.pory"

# 43 "data/maps/Route113/scripts.pory"
Route113_EventScript_GlassWorkshopSign::
# 44 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_GlassWorkshopSign, MSGBOX_SIGN
# 45 "data/maps/Route113/scripts.pory"
	end
# 46 "data/maps/Route113/scripts.pory"

# 47 "data/maps/Route113/scripts.pory"
Route113_EventScript_TrainerTipsRegisterKeyItems::
# 48 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_TrainerTipsRegisterKeyItems, MSGBOX_SIGN
# 49 "data/maps/Route113/scripts.pory"
	end
# 50 "data/maps/Route113/scripts.pory"

# 51 "data/maps/Route113/scripts.pory"
Route113_EventScript_Jaylen::
# 52 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_JAYLEN, Route113_Text_JaylenIntro, Route113_Text_JaylenDefeat
# 53 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_JaylenPostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/Route113/scripts.pory"
	end
# 55 "data/maps/Route113/scripts.pory"

# 56 "data/maps/Route113/scripts.pory"
Route113_EventScript_Dillon::
# 57 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_DILLON, Route113_Text_DillonIntro, Route113_Text_DillonDefeat
# 58 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_DillonPostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/Route113/scripts.pory"
	end
# 60 "data/maps/Route113/scripts.pory"

# 61 "data/maps/Route113/scripts.pory"
Route113_EventScript_Madeline::
# 62 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_MADELINE_1, Route113_Text_MadelineIntro, Route113_Text_MadelineDefeat, Route113_EventScript_RegisterMadeline
# 63 "data/maps/Route113/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 64 "data/maps/Route113/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route113_EventScript_RematchMadeline
# 65 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_MadelinePostBattle, MSGBOX_DEFAULT
# 66 "data/maps/Route113/scripts.pory"
	release
# 67 "data/maps/Route113/scripts.pory"
	end
# 68 "data/maps/Route113/scripts.pory"

# 69 "data/maps/Route113/scripts.pory"
Route113_EventScript_RegisterMadeline::
# 70 "data/maps/Route113/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 71 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_MadelineRegister, MSGBOX_DEFAULT
# 73 "data/maps/Route113/scripts.pory"
	register_matchcall TRAINER_MADELINE_1
# 74 "data/maps/Route113/scripts.pory"
	release
# 75 "data/maps/Route113/scripts.pory"
	end
# 76 "data/maps/Route113/scripts.pory"

# 77 "data/maps/Route113/scripts.pory"
Route113_EventScript_RematchMadeline::
# 78 "data/maps/Route113/scripts.pory"
	trainerbattle_rematch TRAINER_MADELINE_1, Route113_Text_MadelineRematchIntro, Route113_Text_MadelineRematchDefeat
# 79 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_MadelinePostRematch, MSGBOX_AUTOCLOSE
# 80 "data/maps/Route113/scripts.pory"
	end
# 81 "data/maps/Route113/scripts.pory"

# 82 "data/maps/Route113/scripts.pory"
Route113_EventScript_Lao::
# 83 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_LAO_1, Route113_Text_LaoIntro, Route113_Text_LaoDefeat, Route113_EventScript_RegisterLao
# 84 "data/maps/Route113/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 85 "data/maps/Route113/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route113_EventScript_RematchLao
# 86 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoPostBattle, MSGBOX_DEFAULT
# 87 "data/maps/Route113/scripts.pory"
	release
# 88 "data/maps/Route113/scripts.pory"
	end
# 89 "data/maps/Route113/scripts.pory"

# 90 "data/maps/Route113/scripts.pory"
Route113_EventScript_RegisterLao::
# 91 "data/maps/Route113/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 92 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 93 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoRegister, MSGBOX_DEFAULT
# 94 "data/maps/Route113/scripts.pory"
	register_matchcall TRAINER_LAO_1
# 95 "data/maps/Route113/scripts.pory"
	release
# 96 "data/maps/Route113/scripts.pory"
	end
# 97 "data/maps/Route113/scripts.pory"

# 98 "data/maps/Route113/scripts.pory"
Route113_EventScript_RematchLao::
# 99 "data/maps/Route113/scripts.pory"
	trainerbattle_rematch TRAINER_LAO_1, Route113_Text_LaoRematchIntro, Route113_Text_LaoRematchDefeat
# 100 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoPostRematch, MSGBOX_AUTOCLOSE
# 101 "data/maps/Route113/scripts.pory"
	end
# 102 "data/maps/Route113/scripts.pory"

# 103 "data/maps/Route113/scripts.pory"
Route113_EventScript_Lung::
# 104 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_LUNG, Route113_Text_LungIntro, Route113_Text_LungDefeat
# 105 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LungPostBattle, MSGBOX_AUTOCLOSE
# 106 "data/maps/Route113/scripts.pory"
	end
# 107 "data/maps/Route113/scripts.pory"

# 108 "data/maps/Route113/scripts.pory"
Route113_EventScript_Tori::
# 109 "data/maps/Route113/scripts.pory"
	trainerbattle_double TRAINER_TORI_AND_TIA, Route113_Text_ToriIntro, Route113_Text_ToriDefeat, Route113_Text_ToriNotEnoughMons
# 110 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_ToriPostBattle, MSGBOX_AUTOCLOSE
# 111 "data/maps/Route113/scripts.pory"
	end
# 112 "data/maps/Route113/scripts.pory"

# 113 "data/maps/Route113/scripts.pory"
Route113_EventScript_Tia::
# 114 "data/maps/Route113/scripts.pory"
	trainerbattle_double TRAINER_TORI_AND_TIA, Route113_Text_TiaIntro, Route113_Text_TiaDefeat, Route113_Text_TiaNotEnoughMons
# 115 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_TiaPostBattle, MSGBOX_AUTOCLOSE
# 116 "data/maps/Route113/scripts.pory"
	end
# 117 "data/maps/Route113/scripts.pory"

# 118 "data/maps/Route113/scripts.pory"
Route113_EventScript_Sophie::
# 119 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_SOPHIE, Route113_Text_SophieIntro, Route113_Text_SophieDefeat
# 120 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_SophiePostBattle, MSGBOX_AUTOCLOSE
# 121 "data/maps/Route113/scripts.pory"
	end
# 122 "data/maps/Route113/scripts.pory"

# 123 "data/maps/Route113/scripts.pory"
Route113_EventScript_Coby::
# 124 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_COBY, Route113_Text_CobyIntro, Route113_Text_CobyDefeat
# 125 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_CobyPostBattle, MSGBOX_AUTOCLOSE
# 126 "data/maps/Route113/scripts.pory"
	end
# 127 "data/maps/Route113/scripts.pory"

# 128 "data/maps/Route113/scripts.pory"
Route113_EventScript_Lawrence::
# 129 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_LAWRENCE, Route113_Text_LawrenceIntro, Route113_Text_LawrenceDefeat
# 130 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LawrencePostBattle, MSGBOX_AUTOCLOSE
# 131 "data/maps/Route113/scripts.pory"
	end
# 132 "data/maps/Route113/scripts.pory"

# 133 "data/maps/Route113/scripts.pory"
Route113_EventScript_Wyatt::
# 134 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_WYATT, Route113_Text_WyattIntro, Route113_Text_WyattDefeat
# 135 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_WyattPostBattle, MSGBOX_AUTOCLOSE
# 136 "data/maps/Route113/scripts.pory"
	end
# 137 "data/maps/Route113/scripts.pory"

# 138 "data/maps/Route113/scripts.pory"
Route113_Text_AshCanBeFashionedIntoGlass:
# 139 "data/maps/Route113/scripts.pory"
	.string "Wahahaha!\pToday's technology is a wondrous\nthing!\pTake this volcanic ash here.\nIt can be fashioned into glass.$"
# 140 "data/maps/Route113/scripts.pory"

# 141 "data/maps/Route113/scripts.pory"
Route113_Text_FunWalkingThroughAsh:
# 142 "data/maps/Route113/scripts.pory"
	.string "It's fun walking through the volcano's\nashes on the ground and grass.\pYou can see where you walked--it's\nreally neat!$"
# 143 "data/maps/Route113/scripts.pory"

# 144 "data/maps/Route113/scripts.pory"
Route113_Text_RouteSign111:
# 145 "data/maps/Route113/scripts.pory"
	.string "Route 113\n"
# 146 "data/maps/Route113/scripts.pory"
	.string "{RIGHT_ARROW} Route 111$"
# 147 "data/maps/Route113/scripts.pory"

# 148 "data/maps/Route113/scripts.pory"
Route113_Text_RouteSignFallarbor:
# 149 "data/maps/Route113/scripts.pory"
	.string "Route 113\n"
# 150 "data/maps/Route113/scripts.pory"
	.string "{LEFT_ARROW} Fallarbor Town$"
# 151 "data/maps/Route113/scripts.pory"

# 152 "data/maps/Route113/scripts.pory"
Route113_Text_TrainerTipsRegisterKeyItems:
# 153 "data/maps/Route113/scripts.pory"
	.string "Trainer Tips\pYou may register one of the Key Items\nin your Bag as Select.\pSimply press Select to use the\nregistered item conveniently.$"
# 154 "data/maps/Route113/scripts.pory"

# 155 "data/maps/Route113/scripts.pory"
Route113_Text_GlassWorkshopSign:
# 156 "data/maps/Route113/scripts.pory"
	.string "Glass Workshop\n"
# 157 "data/maps/Route113/scripts.pory"
	.string "“Turning Volcanic Ash into Glass Items”$"

Route113_EventScript_RivalTrigger1::
# 165 "data/maps/Route113/scripts.pory"
	setvar VAR_TEMP_0, 1
# 166 "data/maps/Route113/scripts.pory"
	goto Route113_EventScript_Rival
	return


Route113_EventScript_RivalTrigger2::
# 170 "data/maps/Route113/scripts.pory"
	setvar VAR_TEMP_0, 2
# 171 "data/maps/Route113/scripts.pory"
	goto Route113_EventScript_Rival
	return


Route113_EventScript_RivalTrigger3::
# 175 "data/maps/Route113/scripts.pory"
	setvar VAR_TEMP_0, 3
# 176 "data/maps/Route113/scripts.pory"
	goto Route113_EventScript_Rival
	return


Route113_EventScript_Rival::
# 180 "data/maps/Route113/scripts.pory"
	lock
# 181 "data/maps/Route113/scripts.pory"
	delay 8
# 182 "data/maps/Route113/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceRight
# 183 "data/maps/Route113/scripts.pory"
	waitmovement 17
# 184 "data/maps/Route113/scripts.pory"
	checkplayergender
# 185 "data/maps/Route113/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route113_EventScript_Rival_2
# 188 "data/maps/Route113/scripts.pory"
	msgbox Route113_EventScript_Rival_Text_1
Route113_EventScript_Rival_1:
# 190 "data/maps/Route113/scripts.pory"
	closemessage
# 191 "data/maps/Route113/scripts.pory"
	switch VAR_TEMP_0
# 192 "data/maps/Route113/scripts.pory"
	case 1, Route113_EventScript_Rival_7
# 193 "data/maps/Route113/scripts.pory"
	case 2, Route113_EventScript_Rival_8
# 194 "data/maps/Route113/scripts.pory"
	case 3, Route113_EventScript_Rival_9
Route113_EventScript_Rival_5:
# 196 "data/maps/Route113/scripts.pory"
	waitmovement 17
# 197 "data/maps/Route113/scripts.pory"
	checkplayergender
# 198 "data/maps/Route113/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route113_EventScript_Rival_11
# 201 "data/maps/Route113/scripts.pory"
	msgbox Route113_EventScript_Rival_Text_3
Route113_EventScript_Rival_10:
# 203 "data/maps/Route113/scripts.pory"
	closemessage
# 204 "data/maps/Route113/scripts.pory"
	delay 8
# 205 "data/maps/Route113/scripts.pory"
	playse SE_PIN
# 206 "data/maps/Route113/scripts.pory"
	applymovement 17, Common_Movement_ExclamationMark
# 207 "data/maps/Route113/scripts.pory"
	waitmovement 17
# 208 "data/maps/Route113/scripts.pory"
	waitse
# 209 "data/maps/Route113/scripts.pory"
	checkplayergender
# 210 "data/maps/Route113/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route113_EventScript_Rival_15
# 213 "data/maps/Route113/scripts.pory"
	msgbox Route113_EventScript_Rival_Text_5
Route113_EventScript_Rival_14:
# 215 "data/maps/Route113/scripts.pory"
	closemessage
# 216 "data/maps/Route113/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 217 "data/maps/Route113/scripts.pory"
	playse SE_USE_ITEM
# 218 "data/maps/Route113/scripts.pory"
	special HealPlayerParty
# 219 "data/maps/Route113/scripts.pory"
	waitse
# 220 "data/maps/Route113/scripts.pory"
	delay 8
# 221 "data/maps/Route113/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 222 "data/maps/Route113/scripts.pory"
	msgbox Route113_EventScript_Rival_Text_6
# 223 "data/maps/Route113/scripts.pory"
	delay 8
# 224 "data/maps/Route113/scripts.pory"
	checkplayergender
# 225 "data/maps/Route113/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route113_EventScript_Rival_19
# 228 "data/maps/Route113/scripts.pory"
	msgbox Route113_EventScript_Rival_Text_8
Route113_EventScript_Rival_18:
# 230 "data/maps/Route113/scripts.pory"
	closemessage
# 231 "data/maps/Route113/scripts.pory"
	delay 8
# 232 "data/maps/Route113/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceLeft
# 233 "data/maps/Route113/scripts.pory"
	delay 64
# 234 "data/maps/Route113/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceRight
# 235 "data/maps/Route113/scripts.pory"
	waitmovement 17
# 236 "data/maps/Route113/scripts.pory"
	checkplayergender
# 237 "data/maps/Route113/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route113_EventScript_Rival_23
# 240 "data/maps/Route113/scripts.pory"
	msgbox Route113_EventScript_Rival_Text_10
Route113_EventScript_Rival_22:
# 242 "data/maps/Route113/scripts.pory"
	closemessage
# 243 "data/maps/Route113/scripts.pory"
	applymovement 17, Route113_Movement_RivalExit
# 244 "data/maps/Route113/scripts.pory"
	waitmovement 17
# 245 "data/maps/Route113/scripts.pory"
	removeobject 17
# 246 "data/maps/Route113/scripts.pory"
	setvar VAR_ROUTE113_STATE, 1
# 247 "data/maps/Route113/scripts.pory"
	release
	end

Route113_EventScript_Rival_2:
# 186 "data/maps/Route113/scripts.pory"
	msgbox Route113_EventScript_Rival_Text_0
	goto Route113_EventScript_Rival_1

Route113_EventScript_Rival_7:
# 192 "data/maps/Route113/scripts.pory"
	applymovement 17, Route113_Movement_RivalGotoPlayer1
	goto Route113_EventScript_Rival_5

Route113_EventScript_Rival_8:
# 193 "data/maps/Route113/scripts.pory"
	applymovement 17, Route113_Movement_RivalGotoPlayer2
	goto Route113_EventScript_Rival_5

Route113_EventScript_Rival_9:
# 194 "data/maps/Route113/scripts.pory"
	applymovement 17, Route113_Movement_RivalGotoPlayer3
	goto Route113_EventScript_Rival_5

Route113_EventScript_Rival_11:
# 199 "data/maps/Route113/scripts.pory"
	msgbox Route113_EventScript_Rival_Text_2
	goto Route113_EventScript_Rival_10

Route113_EventScript_Rival_15:
# 211 "data/maps/Route113/scripts.pory"
	msgbox Route113_EventScript_Rival_Text_4
	goto Route113_EventScript_Rival_14

Route113_EventScript_Rival_19:
# 226 "data/maps/Route113/scripts.pory"
	msgbox Route113_EventScript_Rival_Text_7
	goto Route113_EventScript_Rival_18

Route113_EventScript_Rival_23:
# 238 "data/maps/Route113/scripts.pory"
	msgbox Route113_EventScript_Rival_Text_9
	goto Route113_EventScript_Rival_22


# 251 "data/maps/Route113/scripts.pory"
Route113_Movement_RivalGotoPlayer1:
# 252 "data/maps/Route113/scripts.pory"
	walk_right
# 252 "data/maps/Route113/scripts.pory"
	walk_right
# 252 "data/maps/Route113/scripts.pory"
	walk_right
	step_end

# 255 "data/maps/Route113/scripts.pory"
Route113_Movement_RivalGotoPlayer2:
# 256 "data/maps/Route113/scripts.pory"
	walk_down
# 257 "data/maps/Route113/scripts.pory"
	walk_right
# 257 "data/maps/Route113/scripts.pory"
	walk_right
# 257 "data/maps/Route113/scripts.pory"
	walk_right
	step_end

# 260 "data/maps/Route113/scripts.pory"
Route113_Movement_RivalGotoPlayer3:
# 261 "data/maps/Route113/scripts.pory"
	walk_down
# 262 "data/maps/Route113/scripts.pory"
	walk_right
# 262 "data/maps/Route113/scripts.pory"
	walk_right
# 263 "data/maps/Route113/scripts.pory"
	walk_down
# 264 "data/maps/Route113/scripts.pory"
	walk_right
	step_end

# 267 "data/maps/Route113/scripts.pory"
Route113_Movement_RivalExit:
# 268 "data/maps/Route113/scripts.pory"
	walk_left
# 268 "data/maps/Route113/scripts.pory"
	walk_left
# 268 "data/maps/Route113/scripts.pory"
	walk_left
# 268 "data/maps/Route113/scripts.pory"
	walk_left
# 268 "data/maps/Route113/scripts.pory"
	walk_left
# 268 "data/maps/Route113/scripts.pory"
	walk_left
# 268 "data/maps/Route113/scripts.pory"
	walk_left
# 268 "data/maps/Route113/scripts.pory"
	walk_left
	step_end

Route113_EventScript_Rival_Text_0:
# 186 "data/maps/Route113/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Hey!$"

Route113_EventScript_Rival_Text_1:
# 188 "data/maps/Route113/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: Phew…$"

Route113_EventScript_Rival_Text_2:
# 199 "data/maps/Route113/scripts.pory"
	.string "The road here is pretty long, huh?\pI got tired enough that I had to take a\nlittle break.$"

Route113_EventScript_Rival_Text_3:
# 201 "data/maps/Route113/scripts.pory"
	.string "It took a long time to make it this\nfar.\pEven I felt like I needed a little\nbreak.$"

Route113_EventScript_Rival_Text_4:
# 211 "data/maps/Route113/scripts.pory"
	.string "{PLAYER}, your Pokémon look tired\nthemselves.\lLet me take care of them for a sec.$"

Route113_EventScript_Rival_Text_5:
# 213 "data/maps/Route113/scripts.pory"
	.string "Looks like your team could use one, too,\n{PLAYER}.\lLemme patch them up for you.$"

Route113_EventScript_Rival_Text_6:
# 222 "data/maps/Route113/scripts.pory"
	.string "Your team's health was restored!$"

Route113_EventScript_Rival_Text_7:
# 226 "data/maps/Route113/scripts.pory"
	.string "…There!\nThat's all better.\pI'm on my way to pay a visit to\nProfessor Cozmo.\pHe's famous for his research on\nMeteorites.\pHe was working on a project with my\ndad--um, I mean, Professor Birch--on\lhow Meteorites might affect Pokémon.$"

Route113_EventScript_Rival_Text_8:
# 228 "data/maps/Route113/scripts.pory"
	.string "…There.\nThat's them sorted.\pI'm on my way to meet this Professor\nCozmo fellow, right?\pHe's super famous for his research on\nMeteorites.\pHe even worked with my dad--I mean,\nwith Professor Birch--on figuring out\lif Meteorites could have any effect\lon Pokémon.$"

Route113_EventScript_Rival_Text_9:
# 238 "data/maps/Route113/scripts.pory"
	.string "Enough dawdling!\pI think it's not much farther to\nFallarbor.\lLet's give it one last push!$"

Route113_EventScript_Rival_Text_10:
# 240 "data/maps/Route113/scripts.pory"
	.string "OK!\nTime to get moving again!\lI think Fallarbor's pretty close now.\pLet's both give it one last push!$"
