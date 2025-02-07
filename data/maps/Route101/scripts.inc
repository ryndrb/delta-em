# 1 "data/maps/Route101/scripts.pory"

# 2 "data/maps/Route101/scripts.pory"
.set LOCALID_BIRCH, 2
# 3 "data/maps/Route101/scripts.pory"
.set LOCALID_ZIGZAGOON, 4
# 4 "data/maps/Route101/scripts.pory"

# 5 "data/maps/Route101/scripts.pory"
Route101_MapScripts::
# 6 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
# 7 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_OnFrame
# 8 "data/maps/Route101/scripts.pory"
	.byte 0
# 9 "data/maps/Route101/scripts.pory"

# 10 "data/maps/Route101/scripts.pory"
Route101_OnTransition:
# 11 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 12 "data/maps/Route101/scripts.pory"
	end
# 13 "data/maps/Route101/scripts.pory"

# 14 "data/maps/Route101/scripts.pory"
Route101_OnFrame:
# 15 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
# 16 "data/maps/Route101/scripts.pory"
	.2byte 0
# 17 "data/maps/Route101/scripts.pory"

# 18 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMapNamePopup::
# 19 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 20 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 21 "data/maps/Route101/scripts.pory"
	end
# 22 "data/maps/Route101/scripts.pory"

# 23 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 24 "data/maps/Route101/scripts.pory"
	lockall
# 25 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 26 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
# 27 "data/maps/Route101/scripts.pory"
	closemessage
# 28 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_BIRCH, 0, 15
# 29 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ZIGZAGOON, 0, 16
# 30 "data/maps/Route101/scripts.pory"
	delay 16
# 31 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 32 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
# 33 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunAway1
# 34 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 35 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 37 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunInCircles
# 38 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 39 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceRight
# 40 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 41 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 42 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 43 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 44 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
# 45 "data/maps/Route101/scripts.pory"
	closemessage
# 46 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 47 "data/maps/Route101/scripts.pory"
	releaseall
# 48 "data/maps/Route101/scripts.pory"
	end
# 49 "data/maps/Route101/scripts.pory"

# 50 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 51 "data/maps/Route101/scripts.pory"
	lockall
# 52 "data/maps/Route101/scripts.pory"
	delay 8
# 53 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 54 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 55 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 56 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 57 "data/maps/Route101/scripts.pory"
	closemessage
# 58 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
# 59 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route101/scripts.pory"
	releaseall
# 61 "data/maps/Route101/scripts.pory"
	end
# 62 "data/maps/Route101/scripts.pory"

# 63 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 64 "data/maps/Route101/scripts.pory"
	lockall
# 65 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 66 "data/maps/Route101/scripts.pory"
	closemessage
# 67 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
# 68 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route101/scripts.pory"
	releaseall
# 70 "data/maps/Route101/scripts.pory"
	end
# 71 "data/maps/Route101/scripts.pory"

# 72 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 73 "data/maps/Route101/scripts.pory"
	lockall
# 74 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 75 "data/maps/Route101/scripts.pory"
	closemessage
# 76 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
# 77 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 78 "data/maps/Route101/scripts.pory"
	releaseall
# 79 "data/maps/Route101/scripts.pory"
	end
# 80 "data/maps/Route101/scripts.pory"

# 81 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 82 "data/maps/Route101/scripts.pory"
	walk_up
# 83 "data/maps/Route101/scripts.pory"
	step_end
# 84 "data/maps/Route101/scripts.pory"

# 85 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 86 "data/maps/Route101/scripts.pory"
	walk_right
# 87 "data/maps/Route101/scripts.pory"
	step_end
# 88 "data/maps/Route101/scripts.pory"

# 89 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 90 "data/maps/Route101/scripts.pory"
	walk_down
# 91 "data/maps/Route101/scripts.pory"
	step_end
# 92 "data/maps/Route101/scripts.pory"

# 93 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 94 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 95 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 96 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 97 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 98 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 99 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 100 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 101 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 102 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 103 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 104 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 105 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 106 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 107 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 108 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 109 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 110 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 111 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 112 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 113 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 114 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 115 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 116 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 117 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 118 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 119 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 120 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 121 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 122 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 123 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 124 "data/maps/Route101/scripts.pory"
	step_end
# 125 "data/maps/Route101/scripts.pory"

# 126 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 127 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 128 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 129 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 130 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 131 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 132 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 133 "data/maps/Route101/scripts.pory"
	step_end
# 134 "data/maps/Route101/scripts.pory"

# 135 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 136 "data/maps/Route101/scripts.pory"
	step_end
# 137 "data/maps/Route101/scripts.pory"

# 138 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 139 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 140 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 141 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 142 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 143 "data/maps/Route101/scripts.pory"
	step_end
# 144 "data/maps/Route101/scripts.pory"

# 145 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 146 "data/maps/Route101/scripts.pory"
	emote_exclamation_mark
# 147 "data/maps/Route101/scripts.pory"
	delay_16
# 148 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 149 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 150 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 151 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 152 "data/maps/Route101/scripts.pory"
	walk_in_place_left
# 153 "data/maps/Route101/scripts.pory"
	step_end
# 154 "data/maps/Route101/scripts.pory"

# 155 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 156 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 157 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 158 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 159 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 160 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 161 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 162 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 163 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 164 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 165 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 166 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 167 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 168 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 169 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 170 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 171 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 172 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 173 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 174 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 175 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 176 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 177 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 178 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 179 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 180 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 181 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 182 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 183 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 184 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 185 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 186 "data/maps/Route101/scripts.pory"
	step_end
# 187 "data/maps/Route101/scripts.pory"

# 188 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 189 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 190 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 191 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 192 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 193 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 194 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 195 "data/maps/Route101/scripts.pory"
	step_end
# 196 "data/maps/Route101/scripts.pory"

# 197 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 198 "data/maps/Route101/scripts.pory"
	step_end
# 199 "data/maps/Route101/scripts.pory"

# 200 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 201 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 202 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 203 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 204 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 205 "data/maps/Route101/scripts.pory"
	step_end
# 206 "data/maps/Route101/scripts.pory"

# 207 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused1:
# 208 "data/maps/Route101/scripts.pory"
	walk_up
# 209 "data/maps/Route101/scripts.pory"
	walk_up
# 210 "data/maps/Route101/scripts.pory"
	step_end
# 211 "data/maps/Route101/scripts.pory"

# 212 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused2:
# 213 "data/maps/Route101/scripts.pory"
	walk_up
# 214 "data/maps/Route101/scripts.pory"
	walk_left
# 215 "data/maps/Route101/scripts.pory"
	walk_up
# 216 "data/maps/Route101/scripts.pory"
	step_end
# 217 "data/maps/Route101/scripts.pory"

# 218 "data/maps/Route101/scripts.pory"
Route101_EventScript_Youngster::
# 219 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 220 "data/maps/Route101/scripts.pory"
	end
# 221 "data/maps/Route101/scripts.pory"

# 222 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 223 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 224 "data/maps/Route101/scripts.pory"
	end
# 225 "data/maps/Route101/scripts.pory"

# 226 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 227 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 228 "data/maps/Route101/scripts.pory"
	end
# 229 "data/maps/Route101/scripts.pory"

# 230 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 231 "data/maps/Route101/scripts.pory"
	lock
# 232 "data/maps/Route101/scripts.pory"
	faceplayer
# 233 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 234 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 235 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 236 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ZIGZAGOON
# 237 "data/maps/Route101/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 13
# 238 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 239 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 240 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 241 "data/maps/Route101/scripts.pory"
	waitstate
# 242 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchApproachPlayer
# 243 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 244 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 245 "data/maps/Route101/scripts.pory"
	closemessage
# 246 "data/maps/Route101/scripts.pory"
	delay 16
# 247 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 248 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 249 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 250 "data/maps/Route101/scripts.pory"
	checkplayergender
# 251 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_NoticePlayer_M
# 252 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_NoticePlayer_F
# 253 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 254 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 255 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 256 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 257 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 258 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 259 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 260 "data/maps/Route101/scripts.pory"
	checkplayergender
# 261 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 262 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 263 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 264 "data/maps/Route101/scripts.pory"
	waitstate
# 265 "data/maps/Route101/scripts.pory"
	release
# 266 "data/maps/Route101/scripts.pory"
	end
# 267 "data/maps/Route101/scripts.pory"

# 268 "data/maps/Route101/scripts.pory"
Route101_EventScript_NoticePlayer_M::
# 269 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_NoticeItsPlayer_M, MSGBOX_DEFAULT
# 270 "data/maps/Route101/scripts.pory"
	closemessage
# 271 "data/maps/Route101/scripts.pory"
	return
# 272 "data/maps/Route101/scripts.pory"

# 273 "data/maps/Route101/scripts.pory"
Route101_EventScript_NoticePlayer_F::
# 274 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_NoticeItsPlayer_F, MSGBOX_DEFAULT
# 275 "data/maps/Route101/scripts.pory"
	closemessage
# 276 "data/maps/Route101/scripts.pory"
	return
# 277 "data/maps/Route101/scripts.pory"

# 278 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 279 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 280 "data/maps/Route101/scripts.pory"
	return
# 281 "data/maps/Route101/scripts.pory"

# 282 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 283 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 284 "data/maps/Route101/scripts.pory"
	return
# 285 "data/maps/Route101/scripts.pory"

# 286 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 287 "data/maps/Route101/scripts.pory"
	walk_right
# 288 "data/maps/Route101/scripts.pory"
	step_end
# 289 "data/maps/Route101/scripts.pory"

# 290 "data/maps/Route101/scripts.pory"
Route101_Text_HelpMe:
# 291 "data/maps/Route101/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: H-help me!$"
# 292 "data/maps/Route101/scripts.pory"

# 293 "data/maps/Route101/scripts.pory"
Route101_Text_PleaseHelp:
# 294 "data/maps/Route101/scripts.pory"
	.string "Halloo! You over there!\nPlease! Help me out!\pIn my Bag!\nThere are some Poké Balls!$"
# 295 "data/maps/Route101/scripts.pory"

# 296 "data/maps/Route101/scripts.pory"
Route101_Text_DontLeaveMe:
# 297 "data/maps/Route101/scripts.pory"
	.string "Wh-where are you going?!\nDon't leave me like this!$"
# 298 "data/maps/Route101/scripts.pory"

# 299 "data/maps/Route101/scripts.pory"
Route101_Text_YouSavedMe:
# 300 "data/maps/Route101/scripts.pory"
	.string "Whew…\pI went into the tall grass to survey\nwild Pokémon when I was suddenly\ljumped!\pYou saved my hide.\nThanks a lot!$"
# 301 "data/maps/Route101/scripts.pory"

# 302 "data/maps/Route101/scripts.pory"
Route101_Text_NoticeItsPlayer_M:
# 303 "data/maps/Route101/scripts.pory"
	.string "Oh?\pBut you're Norman's boy, {PLAYER}!\pI didn't even realize who you were\nat first.\pYou've grown into quite the young\nboy.\pThis isn't the place to chat, though.\nCome along to my lab.$"
# 304 "data/maps/Route101/scripts.pory"

# 305 "data/maps/Route101/scripts.pory"
Route101_Text_NoticeItsPlayer_F:
# 306 "data/maps/Route101/scripts.pory"
	.string "Oh?\pBut you're Norman's girl, {PLAYER}!\pI didn't even realize who you were\nat first.\pYou've grown into quite the young\nlady.\pThis isn't the place to chat, though.\nCome along to my lab.$"
# 307 "data/maps/Route101/scripts.pory"

# 308 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 309 "data/maps/Route101/scripts.pory"
	.string "If Pokémon get tired, take them to\n"
# 310 "data/maps/Route101/scripts.pory"
	.string "a Pokémon Center.\p"
# 311 "data/maps/Route101/scripts.pory"
	.string "There's a Pokémon Center in Oldale\n"
# 312 "data/maps/Route101/scripts.pory"
	.string "Town right close by.$"
# 313 "data/maps/Route101/scripts.pory"

# 314 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 315 "data/maps/Route101/scripts.pory"
	.string "Wild Pokémon will jump out at you in\n"
# 316 "data/maps/Route101/scripts.pory"
	.string "tall grass.\p"
# 317 "data/maps/Route101/scripts.pory"
	.string "If you want to catch Pokémon, you have\n"
# 318 "data/maps/Route101/scripts.pory"
	.string "to go into the tall grass and search.$"
# 319 "data/maps/Route101/scripts.pory"

# 320 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 321 "data/maps/Route101/scripts.pory"
	.string "Route 101\n"
# 322 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} Oldale Town$"

Route101_EventScript_RivalGiveDexNavTriggerLeft::
# 327 "data/maps/Route101/scripts.pory"
	lock
# 328 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_1, 0
# 329 "data/maps/Route101/scripts.pory"
	goto Route101_EventScript_RivalGiveDexNav
	end


Route101_EventScript_RivalGiveDexNavTriggerRight::
# 334 "data/maps/Route101/scripts.pory"
	setvar VAR_TEMP_1, 1
# 335 "data/maps/Route101/scripts.pory"
	goto Route101_EventScript_RivalGiveDexNav
	end


Route101_EventScript_RivalGiveDexNav::
# 340 "data/maps/Route101/scripts.pory"
	lock
# 341 "data/maps/Route101/scripts.pory"
	delay 8
# 342 "data/maps/Route101/scripts.pory"
	addobject 7
# 343 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_RivalGiveDexNav_Text_0
# 344 "data/maps/Route101/scripts.pory"
	closemessage
# 345 "data/maps/Route101/scripts.pory"
	playse SE_PIN
# 346 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 347 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 348 "data/maps/Route101/scripts.pory"
	delay 8
# 349 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Route101_EventScript_RivalGiveDexNav_2
Route101_EventScript_RivalGiveDexNav_1:
# 353 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PlayerLookAtMayRight
# 354 "data/maps/Route101/scripts.pory"
	applymovement 7, Route101_Movement_RivalGotoPlayerRight
# 355 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 356 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_RivalGiveDexNav_Text_1
# 357 "data/maps/Route101/scripts.pory"
	delay 8
# 358 "data/maps/Route101/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 359 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_RivalGiveDexNav_Text_2
# 360 "data/maps/Route101/scripts.pory"
	waitfanfare
# 361 "data/maps/Route101/scripts.pory"
	setflag DN_FLAG_DETECTOR_MODE
# 362 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_DEXNAV_GET_
# 363 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_RivalGiveDexNav_Text_3
# 364 "data/maps/Route101/scripts.pory"
	checkplayergender
# 365 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route101_EventScript_RivalGiveDexNav_5
# 368 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_RivalGiveDexNav_Text_5
Route101_EventScript_RivalGiveDexNav_4:
# 370 "data/maps/Route101/scripts.pory"
	closemessage
# 371 "data/maps/Route101/scripts.pory"
	delay 8
# 372 "data/maps/Route101/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Route101_EventScript_RivalGiveDexNav_9
Route101_EventScript_RivalGiveDexNav_8:
# 376 "data/maps/Route101/scripts.pory"
	applymovement 7, Route101_Movement_RivalLeaveRight
# 377 "data/maps/Route101/scripts.pory"
	waitmovement 7
# 378 "data/maps/Route101/scripts.pory"
	removeobject 7
# 379 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 5
# 380 "data/maps/Route101/scripts.pory"
	release
	end

Route101_EventScript_RivalGiveDexNav_2:
# 350 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PlayerLookAtMayLeft
# 351 "data/maps/Route101/scripts.pory"
	applymovement 7, Route101_Movement_RivalGotoPlayerLeft
	goto Route101_EventScript_RivalGiveDexNav_1

Route101_EventScript_RivalGiveDexNav_5:
# 366 "data/maps/Route101/scripts.pory"
	msgbox Route101_EventScript_RivalGiveDexNav_Text_4
	goto Route101_EventScript_RivalGiveDexNav_4

Route101_EventScript_RivalGiveDexNav_9:
# 373 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PlayerLookAtMayLeaving
# 374 "data/maps/Route101/scripts.pory"
	applymovement 7, Route101_Movement_RivalLeaveLeft
	goto Route101_EventScript_RivalGiveDexNav_8


# 384 "data/maps/Route101/scripts.pory"
Route101_Movement_PlayerLookAtMayLeft:
# 385 "data/maps/Route101/scripts.pory"
	walk_in_place_down
# 386 "data/maps/Route101/scripts.pory"
	delay_16
# 386 "data/maps/Route101/scripts.pory"
	delay_16
# 386 "data/maps/Route101/scripts.pory"
	delay_16
# 386 "data/maps/Route101/scripts.pory"
	delay_16
# 386 "data/maps/Route101/scripts.pory"
	delay_16
# 386 "data/maps/Route101/scripts.pory"
	delay_16
# 387 "data/maps/Route101/scripts.pory"
	walk_in_place_right
	step_end

# 390 "data/maps/Route101/scripts.pory"
Route101_Movement_PlayerLookAtMayRight:
# 391 "data/maps/Route101/scripts.pory"
	walk_in_place_down
# 392 "data/maps/Route101/scripts.pory"
	delay_16
# 392 "data/maps/Route101/scripts.pory"
	delay_16
# 392 "data/maps/Route101/scripts.pory"
	delay_16
# 392 "data/maps/Route101/scripts.pory"
	delay_16
# 392 "data/maps/Route101/scripts.pory"
	delay_16
# 393 "data/maps/Route101/scripts.pory"
	walk_in_place_left
	step_end

# 396 "data/maps/Route101/scripts.pory"
Route101_Movement_PlayerLookAtMayLeaving:
# 397 "data/maps/Route101/scripts.pory"
	delay_16
# 397 "data/maps/Route101/scripts.pory"
	delay_16
# 398 "data/maps/Route101/scripts.pory"
	walk_in_place_up
	step_end

# 401 "data/maps/Route101/scripts.pory"
Route101_Movement_RivalGotoPlayerLeft:
# 402 "data/maps/Route101/scripts.pory"
	walk_right
# 403 "data/maps/Route101/scripts.pory"
	walk_up
# 403 "data/maps/Route101/scripts.pory"
	walk_up
# 403 "data/maps/Route101/scripts.pory"
	walk_up
# 403 "data/maps/Route101/scripts.pory"
	walk_up
# 403 "data/maps/Route101/scripts.pory"
	walk_up
# 403 "data/maps/Route101/scripts.pory"
	walk_up
# 404 "data/maps/Route101/scripts.pory"
	walk_in_place_left
	step_end

# 407 "data/maps/Route101/scripts.pory"
Route101_Movement_RivalGotoPlayerRight:
# 408 "data/maps/Route101/scripts.pory"
	walk_up
# 408 "data/maps/Route101/scripts.pory"
	walk_up
# 408 "data/maps/Route101/scripts.pory"
	walk_up
# 408 "data/maps/Route101/scripts.pory"
	walk_up
# 408 "data/maps/Route101/scripts.pory"
	walk_up
# 408 "data/maps/Route101/scripts.pory"
	walk_up
# 409 "data/maps/Route101/scripts.pory"
	walk_in_place_right
	step_end

# 412 "data/maps/Route101/scripts.pory"
Route101_Movement_RivalLeaveLeft:
# 413 "data/maps/Route101/scripts.pory"
	walk_up
# 414 "data/maps/Route101/scripts.pory"
	walk_left
# 414 "data/maps/Route101/scripts.pory"
	walk_left
# 414 "data/maps/Route101/scripts.pory"
	walk_left
# 414 "data/maps/Route101/scripts.pory"
	walk_left
# 415 "data/maps/Route101/scripts.pory"
	walk_up
# 415 "data/maps/Route101/scripts.pory"
	walk_up
# 415 "data/maps/Route101/scripts.pory"
	walk_up
# 415 "data/maps/Route101/scripts.pory"
	walk_up
# 415 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

# 418 "data/maps/Route101/scripts.pory"
Route101_Movement_RivalLeaveRight:
# 419 "data/maps/Route101/scripts.pory"
	walk_up
# 420 "data/maps/Route101/scripts.pory"
	walk_left
# 420 "data/maps/Route101/scripts.pory"
	walk_left
# 420 "data/maps/Route101/scripts.pory"
	walk_left
# 421 "data/maps/Route101/scripts.pory"
	walk_up
# 421 "data/maps/Route101/scripts.pory"
	walk_up
# 421 "data/maps/Route101/scripts.pory"
	walk_up
# 421 "data/maps/Route101/scripts.pory"
	walk_up
# 421 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

Route101_EventScript_RivalGiveDexNav_Text_0:
# 343 "data/maps/Route101/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: {PLAYER}!$"

Route101_EventScript_RivalGiveDexNav_Text_1:
# 356 "data/maps/Route101/scripts.pory"
	.string "This is from my dad.\pHe said he forgot to give it to\nyou before.$"

Route101_EventScript_RivalGiveDexNav_Text_2:
# 359 "data/maps/Route101/scripts.pory"
	.string "{PLAYER} received the {COLOR RED}DexNav{COLOR DARK_GRAY}!$"

Route101_EventScript_RivalGiveDexNav_Text_3:
# 363 "data/maps/Route101/scripts.pory"
	.string "The item I just gave you is called a\nDexNav.\pIt can tell you lots about the\nPokémon living in each area and\lthat kind of stuff.\pIt's a handy app if you're trying\nto catch lots of different Pokémon.$"

Route101_EventScript_RivalGiveDexNav_Text_4:
# 366 "data/maps/Route101/scripts.pory"
	.string "All right!\pGuess it's about time I use the\nDexNav to do some more Pokémon\lcatching myself!\p{PLAYER}, you should use those\nPoké Balls I gave you earlier to do a\lbit of catching, too!$"

Route101_EventScript_RivalGiveDexNav_Text_5:
# 368 "data/maps/Route101/scripts.pory"
	.string "Guess it's about time I use\nthe DexNav to do a little more\lcatching myself!\pI'm gonna head that way and see what\nI find.\p{PLAYER}, you should those Poké Balls\nI gave you earlier to do a bit of\lcatching, too!$"
