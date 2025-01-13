# 1 "data/maps/Route112/scripts.pory"

# 2 "data/maps/Route112/scripts.pory"
.set LOCALID_GRUNT_1, 1
# 3 "data/maps/Route112/scripts.pory"
.set LOCALID_GRUNT_2, 6
# 4 "data/maps/Route112/scripts.pory"

# 5 "data/maps/Route112/scripts.pory"
Route112_MapScripts::
# 6 "data/maps/Route112/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route112_OnTransition
# 7 "data/maps/Route112/scripts.pory"
	.byte 0
# 8 "data/maps/Route112/scripts.pory"

# 9 "data/maps/Route112/scripts.pory"
Route112_OnTransition:
# 10 "data/maps/Route112/scripts.pory"
    call Common_EventScript_SetupRivalGfxId
# 11 "data/maps/Route112/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 12 "data/maps/Route112/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 0
# 13 "data/maps/Route112/scripts.pory"
	end
# 14 "data/maps/Route112/scripts.pory"

# 15 "data/maps/Route112/scripts.pory"
Route112_EventScript_MtChimneyCableCarSign::
# 16 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_MtChimneyCableCarSign, MSGBOX_SIGN
# 17 "data/maps/Route112/scripts.pory"
	end
# 18 "data/maps/Route112/scripts.pory"

# 19 "data/maps/Route112/scripts.pory"
Route112_EventScript_MtChimneySign::
# 20 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_MtChimneySign, MSGBOX_SIGN
# 21 "data/maps/Route112/scripts.pory"
	end
# 22 "data/maps/Route112/scripts.pory"

# 23 "data/maps/Route112/scripts.pory"
Route112_EventScript_RouteSignLavaridge::
# 24 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_RouteSignLavaridge, MSGBOX_SIGN
# 25 "data/maps/Route112/scripts.pory"
	end
# 26 "data/maps/Route112/scripts.pory"

# 27 "data/maps/Route112/scripts.pory"
Route112_EventScript_Hiker::
# 28 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_NotEasyToGetBackToLavaridge, MSGBOX_NPC
# 29 "data/maps/Route112/scripts.pory"
	end
# 30 "data/maps/Route112/scripts.pory"

# 31 "data/maps/Route112/scripts.pory"
Route112_EventScript_Brice::
# 32 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_BRICE, Route112_Text_BriceIntro, Route112_Text_BriceDefeat
# 33 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_BricePostBattle, MSGBOX_AUTOCLOSE
# 34 "data/maps/Route112/scripts.pory"
	end
# 35 "data/maps/Route112/scripts.pory"

# 36 "data/maps/Route112/scripts.pory"
Route112_EventScript_Trent::
# 37 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_TRENT_1, Route112_Text_TrentIntro, Route112_Text_TrentDefeat, Route112_EventScript_RegisterTrent
# 38 "data/maps/Route112/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 39 "data/maps/Route112/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route112_EventScript_RematchTrent
# 40 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentPostBattle, MSGBOX_DEFAULT
# 41 "data/maps/Route112/scripts.pory"
	release
# 42 "data/maps/Route112/scripts.pory"
	end
# 43 "data/maps/Route112/scripts.pory"

# 44 "data/maps/Route112/scripts.pory"
Route112_EventScript_RegisterTrent::
# 45 "data/maps/Route112/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 46 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentRegister, MSGBOX_DEFAULT
# 48 "data/maps/Route112/scripts.pory"
	register_matchcall TRAINER_TRENT_1
# 49 "data/maps/Route112/scripts.pory"
	release
# 50 "data/maps/Route112/scripts.pory"
	end
# 51 "data/maps/Route112/scripts.pory"

# 52 "data/maps/Route112/scripts.pory"
Route112_EventScript_RematchTrent::
# 53 "data/maps/Route112/scripts.pory"
	trainerbattle_rematch TRAINER_TRENT_1, Route112_Text_TrentRematchIntro, Route112_Text_TrentRematchDefeat
# 54 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentRematchPostBattle, MSGBOX_AUTOCLOSE
# 55 "data/maps/Route112/scripts.pory"
	end
# 56 "data/maps/Route112/scripts.pory"

# 57 "data/maps/Route112/scripts.pory"
Route112_EventScript_Larry::
# 58 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_LARRY, Route112_Text_LarryIntro, Route112_Text_LarryDefeat
# 59 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_LarryPostBattle, MSGBOX_AUTOCLOSE
# 60 "data/maps/Route112/scripts.pory"
	end
# 61 "data/maps/Route112/scripts.pory"

# 62 "data/maps/Route112/scripts.pory"
Route112_EventScript_Carol::
# 63 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_CAROL, Route112_Text_CarolIntro, Route112_Text_CarolDefeat
# 64 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_CarolPostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/Route112/scripts.pory"
	end
# 66 "data/maps/Route112/scripts.pory"

# 67 "data/maps/Route112/scripts.pory"
Route112_EventScript_Bryant::
# 68 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_BRYANT, Route112_Text_BryantIntro, Route112_Text_BryantDefeat
# 69 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_BryantPostBattle, MSGBOX_AUTOCLOSE
# 70 "data/maps/Route112/scripts.pory"
	end
# 71 "data/maps/Route112/scripts.pory"

# 72 "data/maps/Route112/scripts.pory"
Route112_EventScript_Shayla::
# 73 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_SHAYLA, Route112_Text_ShaylaIntro, Route112_Text_ShaylaDefeat
# 74 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_ShaylaPostBattle, MSGBOX_AUTOCLOSE
# 75 "data/maps/Route112/scripts.pory"
	end
# 76 "data/maps/Route112/scripts.pory"

# 77 "data/maps/Route112/scripts.pory"
Route112_Text_NotEasyToGetBackToLavaridge:
# 78 "data/maps/Route112/scripts.pory"
	.string "Eh, I'd like to get to Mauville, but if\nI went down these ledges, it'd be no\leasy matter to get back to Lavaridge.$"
# 79 "data/maps/Route112/scripts.pory"

# 80 "data/maps/Route112/scripts.pory"
Route112_Text_MtChimneyCableCarSign:
# 81 "data/maps/Route112/scripts.pory"
	.string "Mt. Chimney Cable Car\n"
# 82 "data/maps/Route112/scripts.pory"
	.string "“A short walk {UP_ARROW} way!”$"
# 83 "data/maps/Route112/scripts.pory"

# 84 "data/maps/Route112/scripts.pory"
Route112_Text_MtChimneySign:
# 85 "data/maps/Route112/scripts.pory"
	.string "Mt. Chimney\p"
# 86 "data/maps/Route112/scripts.pory"
	.string "“For Lavaridge Town or the summit,\n"
# 87 "data/maps/Route112/scripts.pory"
	.string "please take the Cable Car.”$"
# 88 "data/maps/Route112/scripts.pory"

# 89 "data/maps/Route112/scripts.pory"
Route112_Text_RouteSignLavaridge:
# 90 "data/maps/Route112/scripts.pory"
	.string "Route 112\n"
# 91 "data/maps/Route112/scripts.pory"
	.string "{LEFT_ARROW} Lavaridge Town$"

Route112_EventScript_RivalTrigger1::
# 99 "data/maps/Route112/scripts.pory"
	setvar VAR_TEMP_0, 1
# 100 "data/maps/Route112/scripts.pory"
	goto Route112_EventScript_Rival
	return


Route112_EventScript_RivalTrigger2::
# 104 "data/maps/Route112/scripts.pory"
	setvar VAR_TEMP_0, 2
# 105 "data/maps/Route112/scripts.pory"
	goto Route112_EventScript_Rival
	return


Route112_EventScript_RivalTrigger3::
# 109 "data/maps/Route112/scripts.pory"
	setvar VAR_TEMP_0, 3
# 110 "data/maps/Route112/scripts.pory"
	goto Route112_EventScript_Rival
	return


Route112_EventScript_Rival::
# 114 "data/maps/Route112/scripts.pory"
	lock
# 115 "data/maps/Route112/scripts.pory"
	delay 16
# 116 "data/maps/Route112/scripts.pory"
	playse SE_PIN
# 117 "data/maps/Route112/scripts.pory"
	applymovement 15, Common_Movement_ExclamationMark
# 118 "data/maps/Route112/scripts.pory"
	waitmovement 15
# 119 "data/maps/Route112/scripts.pory"
	waitse
# 120 "data/maps/Route112/scripts.pory"
	delay 8
# 121 "data/maps/Route112/scripts.pory"
	applymovement 15, Common_Movement_WalkInPlaceRight
# 122 "data/maps/Route112/scripts.pory"
	waitmovement 15
# 123 "data/maps/Route112/scripts.pory"
	checkplayergender
# 124 "data/maps/Route112/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route112_EventScript_Rival_2
# 128 "data/maps/Route112/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 129 "data/maps/Route112/scripts.pory"
	msgbox Route112_EventScript_Rival_Text_1
Route112_EventScript_Rival_1:
# 131 "data/maps/Route112/scripts.pory"
	closemessage
# 132 "data/maps/Route112/scripts.pory"
	switch VAR_TEMP_0
# 133 "data/maps/Route112/scripts.pory"
	case 1, Route112_EventScript_Rival_7
# 134 "data/maps/Route112/scripts.pory"
	case 2, Route112_EventScript_Rival_8
# 135 "data/maps/Route112/scripts.pory"
	case 3, Route112_EventScript_Rival_9
Route112_EventScript_Rival_5:
# 137 "data/maps/Route112/scripts.pory"
	waitmovement 15
# 138 "data/maps/Route112/scripts.pory"
	checkplayergender
# 139 "data/maps/Route112/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route112_EventScript_Rival_11
# 142 "data/maps/Route112/scripts.pory"
	msgbox Route112_EventScript_Rival_Text_3
Route112_EventScript_Rival_10:
# 144 "data/maps/Route112/scripts.pory"
	closemessage
# 145 "data/maps/Route112/scripts.pory"
	applymovement 15, Common_Movement_WalkInPlaceLeft
# 146 "data/maps/Route112/scripts.pory"
	waitmovement 15
# 147 "data/maps/Route112/scripts.pory"
	checkplayergender
# 148 "data/maps/Route112/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route112_EventScript_Rival_15
# 154 "data/maps/Route112/scripts.pory"
	msgbox Route112_EventScript_Rival_Text_6
# 155 "data/maps/Route112/scripts.pory"
	closemessage
# 156 "data/maps/Route112/scripts.pory"
	delay 32
# 157 "data/maps/Route112/scripts.pory"
	msgbox Route112_EventScript_Rival_Text_7
Route112_EventScript_Rival_14:
# 159 "data/maps/Route112/scripts.pory"
	closemessage
# 160 "data/maps/Route112/scripts.pory"
	applymovement 15, Common_Movement_WalkInPlaceRight
# 161 "data/maps/Route112/scripts.pory"
	waitmovement 15
# 162 "data/maps/Route112/scripts.pory"
	checkplayergender
# 163 "data/maps/Route112/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route112_EventScript_Rival_19
# 166 "data/maps/Route112/scripts.pory"
	msgbox Route112_EventScript_Rival_Text_9
Route112_EventScript_Rival_18:
# 168 "data/maps/Route112/scripts.pory"
	closemessage
# 169 "data/maps/Route112/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 170 "data/maps/Route112/scripts.pory"
	playse SE_USE_ITEM
# 171 "data/maps/Route112/scripts.pory"
	special HealPlayerParty
# 172 "data/maps/Route112/scripts.pory"
	waitse
# 173 "data/maps/Route112/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 174 "data/maps/Route112/scripts.pory"
	msgbox Route112_EventScript_Rival_Text_10
# 175 "data/maps/Route112/scripts.pory"
	delay 8
# 176 "data/maps/Route112/scripts.pory"
	checkplayergender
# 177 "data/maps/Route112/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route112_EventScript_Rival_23
# 180 "data/maps/Route112/scripts.pory"
	msgbox Route112_EventScript_Rival_Text_12
Route112_EventScript_Rival_22:
# 182 "data/maps/Route112/scripts.pory"
	closemessage
# 183 "data/maps/Route112/scripts.pory"
	applymovement 15, Route112_EventScript_RivalWalkRight
# 184 "data/maps/Route112/scripts.pory"
	waitmovement 15
# 185 "data/maps/Route112/scripts.pory"
	delay 8
# 186 "data/maps/Route112/scripts.pory"
	giveitem ITEM_HM_STRENGTH
# 187 "data/maps/Route112/scripts.pory"
	setflag FLAG_RECEIVED_HM_STRENGTH
# 188 "data/maps/Route112/scripts.pory"
	checkplayergender
# 189 "data/maps/Route112/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route112_EventScript_Rival_27
# 192 "data/maps/Route112/scripts.pory"
	msgbox Route112_EventScript_Rival_Text_14
Route112_EventScript_Rival_26:
# 194 "data/maps/Route112/scripts.pory"
	closemessage
# 195 "data/maps/Route112/scripts.pory"
	delay 16
# 196 "data/maps/Route112/scripts.pory"
	playse SE_PIN
# 197 "data/maps/Route112/scripts.pory"
	applymovement 15, Common_Movement_ExclamationMark
# 198 "data/maps/Route112/scripts.pory"
	waitmovement 15
# 199 "data/maps/Route112/scripts.pory"
	waitse
# 200 "data/maps/Route112/scripts.pory"
	checkplayergender
# 201 "data/maps/Route112/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route112_EventScript_Rival_31
# 204 "data/maps/Route112/scripts.pory"
	msgbox Route112_EventScript_Rival_Text_16
Route112_EventScript_Rival_30:
# 206 "data/maps/Route112/scripts.pory"
	closemessage
# 207 "data/maps/Route112/scripts.pory"
	switch VAR_TEMP_0
# 208 "data/maps/Route112/scripts.pory"
	case 1, Route112_EventScript_Rival_36
# 209 "data/maps/Route112/scripts.pory"
	case 2, Route112_EventScript_Rival_37
# 210 "data/maps/Route112/scripts.pory"
	case 3, Route112_EventScript_Rival_38
Route112_EventScript_Rival_34:
# 212 "data/maps/Route112/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route112_EventScript_PlayerWatchRivalExit
# 213 "data/maps/Route112/scripts.pory"
	waitmovement 15
# 214 "data/maps/Route112/scripts.pory"
	removeobject 15
# 215 "data/maps/Route112/scripts.pory"
	setvar VAR_ROUTE112_STATE, 1
# 216 "data/maps/Route112/scripts.pory"
	fadedefaultbgm
# 217 "data/maps/Route112/scripts.pory"
	release
	end

Route112_EventScript_Rival_2:
# 125 "data/maps/Route112/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 126 "data/maps/Route112/scripts.pory"
	msgbox Route112_EventScript_Rival_Text_0
	goto Route112_EventScript_Rival_1

Route112_EventScript_Rival_7:
# 133 "data/maps/Route112/scripts.pory"
	applymovement 15, Route112_EventScript_RivalGotoPlayer1
	goto Route112_EventScript_Rival_5

Route112_EventScript_Rival_8:
# 134 "data/maps/Route112/scripts.pory"
	applymovement 15, Route112_EventScript_RivalGotoPlayer2
	goto Route112_EventScript_Rival_5

Route112_EventScript_Rival_9:
# 135 "data/maps/Route112/scripts.pory"
	applymovement 15, Route112_EventScript_RivalGotoPlayer3
	goto Route112_EventScript_Rival_5

Route112_EventScript_Rival_11:
# 140 "data/maps/Route112/scripts.pory"
	msgbox Route112_EventScript_Rival_Text_2
	goto Route112_EventScript_Rival_10

Route112_EventScript_Rival_15:
# 149 "data/maps/Route112/scripts.pory"
	msgbox Route112_EventScript_Rival_Text_4
# 150 "data/maps/Route112/scripts.pory"
	closemessage
# 151 "data/maps/Route112/scripts.pory"
	delay 32
# 152 "data/maps/Route112/scripts.pory"
	msgbox Route112_EventScript_Rival_Text_5
	goto Route112_EventScript_Rival_14

Route112_EventScript_Rival_19:
# 164 "data/maps/Route112/scripts.pory"
	msgbox Route112_EventScript_Rival_Text_8
	goto Route112_EventScript_Rival_18

Route112_EventScript_Rival_23:
# 178 "data/maps/Route112/scripts.pory"
	msgbox Route112_EventScript_Rival_Text_11
	goto Route112_EventScript_Rival_22

Route112_EventScript_Rival_27:
# 190 "data/maps/Route112/scripts.pory"
	msgbox Route112_EventScript_Rival_Text_13
	goto Route112_EventScript_Rival_26

Route112_EventScript_Rival_31:
# 202 "data/maps/Route112/scripts.pory"
	msgbox Route112_EventScript_Rival_Text_15
	goto Route112_EventScript_Rival_30

Route112_EventScript_Rival_36:
# 208 "data/maps/Route112/scripts.pory"
	applymovement 15, Route112_EventScript_RivalExit1
	goto Route112_EventScript_Rival_34

Route112_EventScript_Rival_37:
# 209 "data/maps/Route112/scripts.pory"
	applymovement 15, Route112_EventScript_RivalExit2
	goto Route112_EventScript_Rival_34

Route112_EventScript_Rival_38:
# 210 "data/maps/Route112/scripts.pory"
	applymovement 15, Route112_EventScript_RivalExit3
	goto Route112_EventScript_Rival_34


# 222 "data/maps/Route112/scripts.pory"
Route112_EventScript_RivalGotoPlayer1:
# 223 "data/maps/Route112/scripts.pory"
	walk_right
# 223 "data/maps/Route112/scripts.pory"
	walk_right
# 224 "data/maps/Route112/scripts.pory"
	walk_up
# 225 "data/maps/Route112/scripts.pory"
	walk_right
	step_end

# 228 "data/maps/Route112/scripts.pory"
Route112_EventScript_RivalGotoPlayer2:
# 229 "data/maps/Route112/scripts.pory"
	walk_right
# 229 "data/maps/Route112/scripts.pory"
	walk_right
# 229 "data/maps/Route112/scripts.pory"
	walk_right
	step_end

# 232 "data/maps/Route112/scripts.pory"
Route112_EventScript_RivalGotoPlayer3:
# 233 "data/maps/Route112/scripts.pory"
	walk_right
# 233 "data/maps/Route112/scripts.pory"
	walk_right
# 234 "data/maps/Route112/scripts.pory"
	walk_down
# 235 "data/maps/Route112/scripts.pory"
	walk_right
	step_end

# 238 "data/maps/Route112/scripts.pory"
Route112_EventScript_RivalWalkRight:
# 239 "data/maps/Route112/scripts.pory"
	walk_right
	step_end

# 242 "data/maps/Route112/scripts.pory"
Route112_EventScript_RivalExit1:
# 243 "data/maps/Route112/scripts.pory"
	walk_fast_down
# 244 "data/maps/Route112/scripts.pory"
	walk_fast_right
# 244 "data/maps/Route112/scripts.pory"
	walk_fast_right
# 244 "data/maps/Route112/scripts.pory"
	walk_fast_right
# 244 "data/maps/Route112/scripts.pory"
	walk_fast_right
# 244 "data/maps/Route112/scripts.pory"
	walk_fast_right
# 244 "data/maps/Route112/scripts.pory"
	walk_fast_right
# 244 "data/maps/Route112/scripts.pory"
	walk_fast_right
# 244 "data/maps/Route112/scripts.pory"
	walk_fast_right
# 244 "data/maps/Route112/scripts.pory"
	walk_fast_right
	step_end

# 247 "data/maps/Route112/scripts.pory"
Route112_EventScript_RivalExit2:
# 248 "data/maps/Route112/scripts.pory"
	walk_fast_up
# 249 "data/maps/Route112/scripts.pory"
	walk_fast_right
# 249 "data/maps/Route112/scripts.pory"
	walk_fast_right
# 249 "data/maps/Route112/scripts.pory"
	walk_fast_right
# 249 "data/maps/Route112/scripts.pory"
	walk_fast_right
# 249 "data/maps/Route112/scripts.pory"
	walk_fast_right
# 249 "data/maps/Route112/scripts.pory"
	walk_fast_right
# 249 "data/maps/Route112/scripts.pory"
	walk_fast_right
# 249 "data/maps/Route112/scripts.pory"
	walk_fast_right
# 249 "data/maps/Route112/scripts.pory"
	walk_fast_right
	step_end

# 252 "data/maps/Route112/scripts.pory"
Route112_EventScript_RivalExit3:
# 253 "data/maps/Route112/scripts.pory"
	walk_fast_up
# 254 "data/maps/Route112/scripts.pory"
	walk_fast_right
# 254 "data/maps/Route112/scripts.pory"
	walk_fast_right
# 254 "data/maps/Route112/scripts.pory"
	walk_fast_right
# 254 "data/maps/Route112/scripts.pory"
	walk_fast_right
# 254 "data/maps/Route112/scripts.pory"
	walk_fast_right
# 254 "data/maps/Route112/scripts.pory"
	walk_fast_right
# 254 "data/maps/Route112/scripts.pory"
	walk_fast_right
# 254 "data/maps/Route112/scripts.pory"
	walk_fast_right
# 254 "data/maps/Route112/scripts.pory"
	walk_fast_right
	step_end

# 257 "data/maps/Route112/scripts.pory"
Route112_EventScript_PlayerWatchRivalExit:
# 258 "data/maps/Route112/scripts.pory"
	delay_16
# 258 "data/maps/Route112/scripts.pory"
	delay_16
# 259 "data/maps/Route112/scripts.pory"
	walk_in_place_right
	step_end

Route112_EventScript_MagmaGruntsLeft::
# 263 "data/maps/Route112/scripts.pory"
	msgbox Route112_EventScript_MagmaGruntsLeft_Text_0, MSGBOX_NPC
	end


Route112_EventScript_MagmaGruntsMiddle::
# 268 "data/maps/Route112/scripts.pory"
	msgbox Route112_EventScript_MagmaGruntsMiddle_Text_0, MSGBOX_NPC
	end


Route112_EventScript_MagmaGruntsRight::
# 273 "data/maps/Route112/scripts.pory"
	msgbox Route112_EventScript_MagmaGruntsRight_Text_0, MSGBOX_NPC
	end


Route112_EventScript_Rival_Text_0:
# 126 "data/maps/Route112/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Ah!$"

Route112_EventScript_Rival_Text_1:
# 129 "data/maps/Route112/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: Hm?$"

Route112_EventScript_Rival_Text_2:
# 140 "data/maps/Route112/scripts.pory"
	.string "{PLAYER}!$"

Route112_EventScript_Rival_Text_3:
# 142 "data/maps/Route112/scripts.pory"
	.string "So it's you, {PLAYER}.$"

Route112_EventScript_Rival_Text_4:
# 149 "data/maps/Route112/scripts.pory"
	.string "Look!\nRight up there!\lThat's Mt. Chimney!$"

Route112_EventScript_Rival_Text_5:
# 152 "data/maps/Route112/scripts.pory"
	.string "It sure is big…\pNo, more like huge…\pIt totally takes my breath away!\pI'd love to take the Cable Car all the\nway to the top someday…$"

Route112_EventScript_Rival_Text_6:
# 154 "data/maps/Route112/scripts.pory"
	.string "You see that mountain up there?\nThat's Mt. Chimney.$"

Route112_EventScript_Rival_Text_7:
# 157 "data/maps/Route112/scripts.pory"
	.string "I dunno, but…\nBut seeing it for real is, like…\lLike a punch in the gut, you know?\pHope I might get to take the Cable Car\nup to the top someday…$"

Route112_EventScript_Rival_Text_8:
# 164 "data/maps/Route112/scripts.pory"
	.string "Hm?\nHey, {PLAYER}, don't your Pokémon seem\la bit ragged around the edges?\pHere, let me give them a little boost!$"

Route112_EventScript_Rival_Text_9:
# 166 "data/maps/Route112/scripts.pory"
	.string "Hey, {PLAYER}, doesn't your team seem a\nbit worse for wear?\pHere.\nI'll help them out for you.$"

Route112_EventScript_Rival_Text_10:
# 174 "data/maps/Route112/scripts.pory"
	.string "Your team's health was restored!$"

Route112_EventScript_Rival_Text_11:
# 178 "data/maps/Route112/scripts.pory"
	.string "Here!\nTake this, too!$"

Route112_EventScript_Rival_Text_12:
# 180 "data/maps/Route112/scripts.pory"
	.string "And why don't you take this?$"

Route112_EventScript_Rival_Text_13:
# 190 "data/maps/Route112/scripts.pory"
	.string "I bet you can find all kinds of\nways to use it in the mountains that\llie ahead!\pBut it won't work outside of battle\nif you don't have a Badge from\lLavaridge Gym.$"

Route112_EventScript_Rival_Text_14:
# 192 "data/maps/Route112/scripts.pory"
	.string "I bet you can find all kinds of\nways to use it in the mountains that\llie ahead!\pOh…\pBut it won't work out here if you don't\nhave a Badge from Lavaridge Gym.$"

Route112_EventScript_Rival_Text_15:
# 202 "data/maps/Route112/scripts.pory"
	.string "Gasp!\nWhat am I doing nattering away here?\pI'm supposed to be on my way to\nFallarbor to visit Professor Cozmo!\pI'm off for now, {PLAYER}, but let's\nbattle next time!$"

Route112_EventScript_Rival_Text_16:
# 204 "data/maps/Route112/scripts.pory"
	.string "Bah!\pThis is not time to be giving you\ntricks!\pI'm supposed to be heading to Fallarbor\nto visit Professor Cozmo right now!\pSee you later, {PLAYER}.\nNext time let's have a battle, OK?$"

Route112_EventScript_MagmaGruntsLeft_Text_0:
# 263 "data/maps/Route112/scripts.pory"
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: Grumble…\pWhat happened to the others who went\nto Fallarbor?\lThey're late…$"

Route112_EventScript_MagmaGruntsMiddle_Text_0:
# 268 "data/maps/Route112/scripts.pory"
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: Grumble…\pYou two never cease to complain…\nGrumble…$"

Route112_EventScript_MagmaGruntsRight_Text_0:
# 273 "data/maps/Route112/scripts.pory"
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: Grumble…\pI'd like to ride the Cable Car to the\ntop, too…$"
