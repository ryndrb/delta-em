# 1 "data/maps/Route128/scripts.pory"

# 2 "data/maps/Route128/scripts.pory"
.set LOCALID_STEVEN, 3
# 3 "data/maps/Route128/scripts.pory"
.set LOCALID_ARCHIE, 4
# 4 "data/maps/Route128/scripts.pory"
.set LOCALID_MAXIE, 5
# 5 "data/maps/Route128/scripts.pory"
.set LOCALID_SHELLY, 11
# 6 "data/maps/Route128/scripts.pory"

# 7 "data/maps/Route128/scripts.pory"
Route128_MapScripts::
# 8 "data/maps/Route128/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route128_OnTransition
# 9 "data/maps/Route128/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route128_OnFrame
# 10 "data/maps/Route128/scripts.pory"
	.byte 0
# 11 "data/maps/Route128/scripts.pory"

# 12 "data/maps/Route128/scripts.pory"
Route128_OnTransition:
# 13 "data/maps/Route128/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 14 "data/maps/Route128/scripts.pory"
	end
# 15 "data/maps/Route128/scripts.pory"

# 16 "data/maps/Route128/scripts.pory"
Route128_OnFrame:
# 17 "data/maps/Route128/scripts.pory"
	map_script_2 VAR_ROUTE128_STATE, 1, Route128_EventScript_KyogreAwakenedScene
# 18 "data/maps/Route128/scripts.pory"
	.2byte 0
# 19 "data/maps/Route128/scripts.pory"

# 20 "data/maps/Route128/scripts.pory"
Route128_EventScript_Isaiah::
# 21 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_ISAIAH_1, Route128_Text_IsaiahIntro, Route128_Text_IsaiahDefeat, Route128_EventScript_RegisterIsaiah
# 22 "data/maps/Route128/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 23 "data/maps/Route128/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route128_EventScript_RematchIsaiah
# 24 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahPostBattle, MSGBOX_DEFAULT
# 25 "data/maps/Route128/scripts.pory"
	release
# 26 "data/maps/Route128/scripts.pory"
	end
# 27 "data/maps/Route128/scripts.pory"

# 28 "data/maps/Route128/scripts.pory"
Route128_EventScript_RegisterIsaiah::
# 29 "data/maps/Route128/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 30 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 31 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahRegister, MSGBOX_DEFAULT
# 32 "data/maps/Route128/scripts.pory"
	register_matchcall TRAINER_ISAIAH_1
# 33 "data/maps/Route128/scripts.pory"
	release
# 34 "data/maps/Route128/scripts.pory"
	end
# 35 "data/maps/Route128/scripts.pory"

# 36 "data/maps/Route128/scripts.pory"
Route128_EventScript_RematchIsaiah::
# 37 "data/maps/Route128/scripts.pory"
	trainerbattle_rematch TRAINER_ISAIAH_1, Route128_Text_IsaiahRematchIntro, Route128_Text_IsaiahRematchDefeat
# 38 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahPostRematch, MSGBOX_AUTOCLOSE
# 39 "data/maps/Route128/scripts.pory"
	end
# 40 "data/maps/Route128/scripts.pory"

# 41 "data/maps/Route128/scripts.pory"
Route128_EventScript_Katelyn::
# 42 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_KATELYN_1, Route128_Text_KatelynIntro, Route128_Text_KatelynDefeat, Route128_EventScript_RegisterKatelyn
# 43 "data/maps/Route128/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 44 "data/maps/Route128/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route128_EventScript_RematchKatelyn
# 45 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynPostBattle, MSGBOX_DEFAULT
# 46 "data/maps/Route128/scripts.pory"
	release
# 47 "data/maps/Route128/scripts.pory"
	end
# 48 "data/maps/Route128/scripts.pory"

# 49 "data/maps/Route128/scripts.pory"
Route128_EventScript_RegisterKatelyn::
# 50 "data/maps/Route128/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 51 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 52 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynRegister, MSGBOX_DEFAULT
# 53 "data/maps/Route128/scripts.pory"
	register_matchcall TRAINER_KATELYN_1
# 54 "data/maps/Route128/scripts.pory"
	release
# 55 "data/maps/Route128/scripts.pory"
	end
# 56 "data/maps/Route128/scripts.pory"

# 57 "data/maps/Route128/scripts.pory"
Route128_EventScript_RematchKatelyn::
# 58 "data/maps/Route128/scripts.pory"
	trainerbattle_rematch TRAINER_KATELYN_1, Route128_Text_KatelynRematchIntro, Route128_Text_KatelynRematchDefeat
# 59 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynPostRematch, MSGBOX_AUTOCLOSE
# 60 "data/maps/Route128/scripts.pory"
	end
# 61 "data/maps/Route128/scripts.pory"

# 62 "data/maps/Route128/scripts.pory"
Route128_EventScript_Alexa::
# 63 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_ALEXA, Route128_Text_AlexaIntro, Route128_Text_AlexaDefeat
# 64 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_AlexaPostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/Route128/scripts.pory"
	end
# 66 "data/maps/Route128/scripts.pory"

# 67 "data/maps/Route128/scripts.pory"
Route128_EventScript_Ruben::
# 68 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_RUBEN, Route128_Text_RubenIntro, Route128_Text_RubenDefeat
# 69 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_RubenPostBattle, MSGBOX_AUTOCLOSE
# 70 "data/maps/Route128/scripts.pory"
	end
# 71 "data/maps/Route128/scripts.pory"

# 72 "data/maps/Route128/scripts.pory"
Route128_EventScript_Wayne::
# 73 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_WAYNE, Route128_Text_WayneIntro, Route128_Text_WayneDefeat
# 74 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_WaynePostBattle, MSGBOX_AUTOCLOSE
# 75 "data/maps/Route128/scripts.pory"
	end
# 76 "data/maps/Route128/scripts.pory"

# 77 "data/maps/Route128/scripts.pory"
Route128_EventScript_Harrison::
# 78 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_HARRISON, Route128_Text_HarrisonIntro, Route128_Text_HarrisonDefeat
# 79 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_HarrisonPostBattle, MSGBOX_AUTOCLOSE
# 80 "data/maps/Route128/scripts.pory"
	end
# 81 "data/maps/Route128/scripts.pory"

# 82 "data/maps/Route128/scripts.pory"
Route128_EventScript_Carlee::
# 83 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_CARLEE, Route128_Text_CarleeIntro, Route128_Text_CarleeDefeat
# 84 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_CarleePostBattle, MSGBOX_AUTOCLOSE
# 85 "data/maps/Route128/scripts.pory"
	end

Route128_EventScript_KyogreAwakenedScene::
# 91 "data/maps/Route128/scripts.pory"
	lock
# 92 "data/maps/Route128/scripts.pory"
	delay 24
# 93 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ARCHIE, Route128_Movement_ArchieLookAround
# 94 "data/maps/Route128/scripts.pory"
	waitmovement LOCALID_ARCHIE
# 95 "data/maps/Route128/scripts.pory"
	msgbox Route128_EventScript_KyogreAwakenedScene_Text_0
# 96 "data/maps/Route128/scripts.pory"
	closemessage
# 97 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ARCHIE, Route128_Movement_ArchieBackUp
# 98 "data/maps/Route128/scripts.pory"
	waitmovement LOCALID_ARCHIE
# 99 "data/maps/Route128/scripts.pory"
	msgbox Route128_EventScript_KyogreAwakenedScene_Text_1
# 100 "data/maps/Route128/scripts.pory"
	msgbox Route128_EventScript_KyogreAwakenedScene_Text_2
# 101 "data/maps/Route128/scripts.pory"
	closemessage
# 102 "data/maps/Route128/scripts.pory"
	delay 24
# 103 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceRight
# 104 "data/maps/Route128/scripts.pory"
	waitmovement LOCALID_SHELLY
# 105 "data/maps/Route128/scripts.pory"
	msgbox Route128_EventScript_KyogreAwakenedScene_Text_3
# 106 "data/maps/Route128/scripts.pory"
	closemessage
# 107 "data/maps/Route128/scripts.pory"
	delay 16
# 108 "data/maps/Route128/scripts.pory"
	msgbox Route128_EventScript_KyogreAwakenedScene_Text_4
# 109 "data/maps/Route128/scripts.pory"
	closemessage
# 110 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceDown
# 111 "data/maps/Route128/scripts.pory"
	delay 8
# 112 "data/maps/Route128/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 113 "data/maps/Route128/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 114 "data/maps/Route128/scripts.pory"
	msgbox Route128_EventScript_KyogreAwakenedScene_Text_5
# 115 "data/maps/Route128/scripts.pory"
	closemessage
# 116 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_MAXIE, Route128_Movement_MaxieApproachArchie
# 117 "data/maps/Route128/scripts.pory"
	waitmovement LOCALID_MAXIE
# 118 "data/maps/Route128/scripts.pory"
	msgbox Route128_EventScript_KyogreAwakenedScene_Text_6
# 119 "data/maps/Route128/scripts.pory"
	delay 16
# 120 "data/maps/Route128/scripts.pory"
	msgbox Route128_EventScript_KyogreAwakenedScene_Text_7
# 121 "data/maps/Route128/scripts.pory"
	msgbox Route128_EventScript_KyogreAwakenedScene_Text_8
# 122 "data/maps/Route128/scripts.pory"
	closemessage
# 123 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_SHELLY, Route128_Movement_ShellyExit
# 124 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ARCHIE, Route128_Movement_ArchieExit
# 125 "data/maps/Route128/scripts.pory"
	delay 16
# 126 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceLeft
# 127 "data/maps/Route128/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 128 "data/maps/Route128/scripts.pory"
	waitmovement LOCALID_ARCHIE
# 129 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_ARCHIE
# 130 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_SHELLY
# 131 "data/maps/Route128/scripts.pory"
	delay 16
# 132 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceDown
# 133 "data/maps/Route128/scripts.pory"
	waitmovement LOCALID_MAXIE
# 134 "data/maps/Route128/scripts.pory"
	delay 32
# 135 "data/maps/Route128/scripts.pory"
	msgbox Route128_EventScript_KyogreAwakenedScene_Text_9
# 136 "data/maps/Route128/scripts.pory"
	closemessage
# 137 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_MAXIE, Route128_Movement_MaxieExit
# 138 "data/maps/Route128/scripts.pory"
	waitmovement LOCALID_MAXIE
# 139 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_MAXIE
# 140 "data/maps/Route128/scripts.pory"
	delay 96
# 141 "data/maps/Route128/scripts.pory"
	setfieldeffectargument 0, 1
# 142 "data/maps/Route128/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 143 "data/maps/Route128/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 144 "data/maps/Route128/scripts.pory"
	addobject LOCALID_STEVEN
# 145 "data/maps/Route128/scripts.pory"
	delay 16
# 146 "data/maps/Route128/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 147 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceLeft
# 148 "data/maps/Route128/scripts.pory"
	waitmovement LOCALID_STEVEN
# 149 "data/maps/Route128/scripts.pory"
	msgbox Route128_EventScript_KyogreAwakenedScene_Text_10
# 150 "data/maps/Route128/scripts.pory"
	closemessage
# 151 "data/maps/Route128/scripts.pory"
	delay 16
# 152 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_STEVEN, Route128_Movement_StevenLookAround
# 153 "data/maps/Route128/scripts.pory"
	waitmovement LOCALID_STEVEN
# 154 "data/maps/Route128/scripts.pory"
	msgbox Route128_EventScript_KyogreAwakenedScene_Text_11
# 155 "data/maps/Route128/scripts.pory"
	closemessage
# 156 "data/maps/Route128/scripts.pory"
	delay 24
# 157 "data/maps/Route128/scripts.pory"
	msgbox Route128_EventScript_KyogreAwakenedScene_Text_12
# 158 "data/maps/Route128/scripts.pory"
	closemessage
# 159 "data/maps/Route128/scripts.pory"
	delay 32
# 160 "data/maps/Route128/scripts.pory"
	msgbox Route128_EventScript_KyogreAwakenedScene_Text_13
# 161 "data/maps/Route128/scripts.pory"
	closemessage
# 162 "data/maps/Route128/scripts.pory"
	delay 24
# 163 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceLeft
# 164 "data/maps/Route128/scripts.pory"
	waitmovement LOCALID_STEVEN
# 165 "data/maps/Route128/scripts.pory"
	msgbox Route128_EventScript_KyogreAwakenedScene_Text_14
# 166 "data/maps/Route128/scripts.pory"
	closemessage
# 167 "data/maps/Route128/scripts.pory"
	delay 8
# 168 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
# 169 "data/maps/Route128/scripts.pory"
	waitmovement LOCALID_STEVEN
# 170 "data/maps/Route128/scripts.pory"
	delay 48
# 171 "data/maps/Route128/scripts.pory"
	setfieldeffectargument 0, 1
# 172 "data/maps/Route128/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 173 "data/maps/Route128/scripts.pory"
	delay 16
# 174 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_STEVEN
# 175 "data/maps/Route128/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 176 "data/maps/Route128/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 177 "data/maps/Route128/scripts.pory"
	setvar VAR_ROUTE128_STATE, 2
# 178 "data/maps/Route128/scripts.pory"
	release
	end


# 182 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieLookAround:
# 183 "data/maps/Route128/scripts.pory"
	walk_fast_down
# 184 "data/maps/Route128/scripts.pory"
	walk_in_place_left
# 185 "data/maps/Route128/scripts.pory"
	delay_16
# 186 "data/maps/Route128/scripts.pory"
	walk_in_place_right
# 187 "data/maps/Route128/scripts.pory"
	delay_16
# 187 "data/maps/Route128/scripts.pory"
	delay_16
# 188 "data/maps/Route128/scripts.pory"
	walk_in_place_down
	step_end

# 191 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieBackUp:
# 192 "data/maps/Route128/scripts.pory"
	lock_facing_direction
# 193 "data/maps/Route128/scripts.pory"
	walk_slow_up
# 194 "data/maps/Route128/scripts.pory"
	delay_16
# 195 "data/maps/Route128/scripts.pory"
	unlock_facing_direction
	step_end

# 198 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieApproachArchie:
# 199 "data/maps/Route128/scripts.pory"
	walk_left
# 200 "data/maps/Route128/scripts.pory"
	walk_in_place_down
	step_end

# 203 "data/maps/Route128/scripts.pory"
Route128_Movement_ShellyExit:
# 204 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 204 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 205 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 206 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 207 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 207 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 207 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 207 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 207 "data/maps/Route128/scripts.pory"
	walk_fast_up
	step_end

# 210 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieExit:
# 211 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 211 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 211 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 212 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 213 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 214 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 214 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 214 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 214 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 214 "data/maps/Route128/scripts.pory"
	walk_fast_up
	step_end

# 217 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieExit:
# 218 "data/maps/Route128/scripts.pory"
	walk_left
# 218 "data/maps/Route128/scripts.pory"
	walk_left
# 218 "data/maps/Route128/scripts.pory"
	walk_left
# 218 "data/maps/Route128/scripts.pory"
	walk_left
# 219 "data/maps/Route128/scripts.pory"
	walk_up
# 219 "data/maps/Route128/scripts.pory"
	walk_up
# 219 "data/maps/Route128/scripts.pory"
	walk_up
# 219 "data/maps/Route128/scripts.pory"
	walk_up
# 219 "data/maps/Route128/scripts.pory"
	walk_up
	step_end

# 222 "data/maps/Route128/scripts.pory"
Route128_Movement_StevenLookAround:
# 223 "data/maps/Route128/scripts.pory"
	walk_in_place_right
# 224 "data/maps/Route128/scripts.pory"
	delay_16
# 225 "data/maps/Route128/scripts.pory"
	walk_in_place_up
# 226 "data/maps/Route128/scripts.pory"
	delay_16
# 227 "data/maps/Route128/scripts.pory"
	walk_in_place_down
	step_end

Route128_EventScript_KyogreAwakenedScene_Text_0:
# 95 "data/maps/Route128/scripts.pory"
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: This… This is…$"

Route128_EventScript_KyogreAwakenedScene_Text_1:
# 99 "data/maps/Route128/scripts.pory"
	.string "{COLOR RED}Shelly{COLOR DARK_GRAY}: How awful…$"

Route128_EventScript_KyogreAwakenedScene_Text_2:
# 100 "data/maps/Route128/scripts.pory"
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: …\pI…\pI only wanted…\pI wanted to make…a world where Pokémon\ncould live on…in peace…\pWhere…that…Pokémon…$"

Route128_EventScript_KyogreAwakenedScene_Text_3:
# 105 "data/maps/Route128/scripts.pory"
	.string "{COLOR RED}Shelly{COLOR DARK_GRAY}: Archie…$"

Route128_EventScript_KyogreAwakenedScene_Text_4:
# 108 "data/maps/Route128/scripts.pory"
	.string "{COLOR RED}Maxie{COLOR DARK_GRAY}: This…\pThis is the power of super-ancient\nPokémon.\pThe balance in this world is faltering.\nAt this rate, it may be lost forever.$"

Route128_EventScript_KyogreAwakenedScene_Text_5:
# 114 "data/maps/Route128/scripts.pory"
	.string "You…\pWe will make our way to Sootopolis.\pIt is most likely the case that Groudon\nand Kyogre are also making their way\lto that city.\pIn the deepest reaches of the\nCave of Origin, which lies in the heart\lof Sootopolis City…\pThat is where they'll find the energy\nthey need to reclaim their primal form.\pI expect Groudon and Kyogre will\ngo to that place in search of even\lgreater power.\pWe must follow them to the\nCave of Origin and whatever it takes!\pThere's nothing else we can do!$"

Route128_EventScript_KyogreAwakenedScene_Text_6:
# 118 "data/maps/Route128/scripts.pory"
	.string "Archie.\pYou and your team of fools will\naccompany us.\pWe have brought this calamity upon\nourselves.\pIt is only right that we take\nresponsibility and clean up after our\lmistakes.$"

Route128_EventScript_KyogreAwakenedScene_Text_7:
# 120 "data/maps/Route128/scripts.pory"
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: Ugh!$"

Route128_EventScript_KyogreAwakenedScene_Text_8:
# 121 "data/maps/Route128/scripts.pory"
	.string "{COLOR RED}Shelly{COLOR DARK_GRAY}: Let's go, Archie!$"

Route128_EventScript_KyogreAwakenedScene_Text_9:
# 135 "data/maps/Route128/scripts.pory"
	.string "{COLOR RED}Maxie{COLOR DARK_GRAY}: …\pAs an adult, I first feel I must\napologize for the way things have\lturned out.\pI am truly sorry…\pBut I must ask for your assistance.\nWon't you help us avert this crisis?\pIf we work together, I believe\nwe'll be able to overcome this\lultimate threat.\pI will expect your arrival in Sootopolis.$"

Route128_EventScript_KyogreAwakenedScene_Text_10:
# 149 "data/maps/Route128/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: {PLAYER}!\pI'm sorry I could not be here sooner.$"

Route128_EventScript_KyogreAwakenedScene_Text_11:
# 154 "data/maps/Route128/scripts.pory"
	.string "Terrible…\pSo this is what was being depicted in\nthat painting in Granite Cave.\pIf this doesn't stop, all Hoenn--no,\nthe entire world--will drown.\pNothing could live in such a world--\nneither humans nor Pokémon!\pThis huge rain cloud…\nIs it spreading out from Sootopolis?$"

Route128_EventScript_KyogreAwakenedScene_Text_12:
# 157 "data/maps/Route128/scripts.pory"
	.string "Come on, Steven… Think!\nWhat are you going to do?$"

Route128_EventScript_KyogreAwakenedScene_Text_13:
# 160 "data/maps/Route128/scripts.pory"
	.string "…\p…No.\pThere's no point agonizing over the\nsituation from here…\pI have to go to Sootopolis.\nThere must be answers there.$"

Route128_EventScript_KyogreAwakenedScene_Text_14:
# 165 "data/maps/Route128/scripts.pory"
	.string "{PLAYER}…\pI will count on you to help with this\ncrisis…\pBut…please… Promise you won't do\nanything reckless.\pWell then.\nI'll go ahead to Sootopolis.\pGood luck to you.$"
