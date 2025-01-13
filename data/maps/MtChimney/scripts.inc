# 1 "data/maps/MtChimney/scripts.pory"

# 2 "data/maps/MtChimney/scripts.pory"
.set LOCALID_ARCHIE, 1
# 3 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAXIE, 2
# 4 "data/maps/MtChimney/scripts.pory"
.set LOCALID_TABITHA, 3
# 5 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_2, 22
# 6 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_1, 29
# 7 "data/maps/MtChimney/scripts.pory"

# 8 "data/maps/MtChimney/scripts.pory"

# 9 "data/maps/MtChimney/scripts.pory"
MtChimney_MapScripts::
# 10 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtChimney_OnResume
# 11 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_OnTransition
# 12 "data/maps/MtChimney/scripts.pory"
	.byte 0
# 13 "data/maps/MtChimney/scripts.pory"

# 14 "data/maps/MtChimney/scripts.pory"
MtChimney_OnTransition:
# 15 "data/maps/MtChimney/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
# 16 "data/maps/MtChimney/scripts.pory"
    call_if_gt VAR_MT_CHIMNEY_STATE, 1, MtChimney_EventScript_TabithaPos
# 17 "data/maps/MtChimney/scripts.pory"
	end
# 18 "data/maps/MtChimney/scripts.pory"

# 19 "data/maps/MtChimney/scripts.pory"
MtChimney_OnResume:
# 20 "data/maps/MtChimney/scripts.pory"
	setstepcallback STEP_CB_ASH
# 21 "data/maps/MtChimney/scripts.pory"
	end
# 22 "data/maps/MtChimney/scripts.pory"

# 23 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Archie::
# 24 "data/maps/MtChimney/scripts.pory"
	lock
# 25 "data/maps/MtChimney/scripts.pory"
    applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceLeft
# 26 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 27 "data/maps/MtChimney/scripts.pory"
	call_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieLetMeThrough
# 28 "data/maps/MtChimney/scripts.pory"
	call_if_set FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieLetMeThrough
# 29 "data/maps/MtChimney/scripts.pory"
	closemessage
# 30 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
# 31 "data/maps/MtChimney/scripts.pory"
	release
# 32 "data/maps/MtChimney/scripts.pory"
	end
# 33 "data/maps/MtChimney/scripts.pory"

# 34 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieLetMeThrough::
# 35 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieLetMeThrough, MSGBOX_DEFAULT
# 36 "data/maps/MtChimney/scripts.pory"
	return
# 37 "data/maps/MtChimney/scripts.pory"

# 38 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 39 "data/maps/MtChimney/scripts.pory"
	lock
# 40 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 41 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 42 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 43 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
# 44 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 45 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
# 46 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 47 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 48 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
# 49 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 50 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 51 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 52 "data/maps/MtChimney/scripts.pory"
	release
# 53 "data/maps/MtChimney/scripts.pory"
	end
# 54 "data/maps/MtChimney/scripts.pory"

# 55 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 56 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 57 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 58 "data/maps/MtChimney/scripts.pory"
	release
# 59 "data/maps/MtChimney/scripts.pory"
	end
# 60 "data/maps/MtChimney/scripts.pory"

# 61 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 62 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 63 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 64 "data/maps/MtChimney/scripts.pory"
	return
# 65 "data/maps/MtChimney/scripts.pory"

# 66 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 67 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 68 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 69 "data/maps/MtChimney/scripts.pory"
	release
# 70 "data/maps/MtChimney/scripts.pory"
	end
# 71 "data/maps/MtChimney/scripts.pory"

# 72 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 73 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 74 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 75 "data/maps/MtChimney/scripts.pory"
	release
# 76 "data/maps/MtChimney/scripts.pory"
	end
# 77 "data/maps/MtChimney/scripts.pory"

# 78 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused1:
# 79 "data/maps/MtChimney/scripts.pory"
	walk_down
# 80 "data/maps/MtChimney/scripts.pory"
	walk_down
# 81 "data/maps/MtChimney/scripts.pory"
	walk_down
# 82 "data/maps/MtChimney/scripts.pory"
	walk_down
# 83 "data/maps/MtChimney/scripts.pory"
	walk_down
# 84 "data/maps/MtChimney/scripts.pory"
	walk_left
# 85 "data/maps/MtChimney/scripts.pory"
	walk_left
# 86 "data/maps/MtChimney/scripts.pory"
	walk_down
# 87 "data/maps/MtChimney/scripts.pory"
	walk_down
# 88 "data/maps/MtChimney/scripts.pory"
	walk_down
# 89 "data/maps/MtChimney/scripts.pory"
	walk_down
# 90 "data/maps/MtChimney/scripts.pory"
	walk_left
# 91 "data/maps/MtChimney/scripts.pory"
	walk_left
# 92 "data/maps/MtChimney/scripts.pory"
	walk_left
# 93 "data/maps/MtChimney/scripts.pory"
	walk_left
# 94 "data/maps/MtChimney/scripts.pory"
	walk_left
# 95 "data/maps/MtChimney/scripts.pory"
	walk_down
# 96 "data/maps/MtChimney/scripts.pory"
	step_end
# 97 "data/maps/MtChimney/scripts.pory"

# 98 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused2:
# 99 "data/maps/MtChimney/scripts.pory"
	walk_down
# 100 "data/maps/MtChimney/scripts.pory"
	walk_down
# 101 "data/maps/MtChimney/scripts.pory"
	walk_down
# 102 "data/maps/MtChimney/scripts.pory"
	walk_down
# 103 "data/maps/MtChimney/scripts.pory"
	walk_left
# 104 "data/maps/MtChimney/scripts.pory"
	walk_left
# 105 "data/maps/MtChimney/scripts.pory"
	walk_left
# 106 "data/maps/MtChimney/scripts.pory"
	walk_down
# 107 "data/maps/MtChimney/scripts.pory"
	step_end
# 108 "data/maps/MtChimney/scripts.pory"

# 109 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused3:
# 110 "data/maps/MtChimney/scripts.pory"
	walk_right
# 111 "data/maps/MtChimney/scripts.pory"
	walk_down
# 112 "data/maps/MtChimney/scripts.pory"
	walk_down
# 113 "data/maps/MtChimney/scripts.pory"
	walk_down
# 114 "data/maps/MtChimney/scripts.pory"
	walk_down
# 115 "data/maps/MtChimney/scripts.pory"
	walk_left
# 116 "data/maps/MtChimney/scripts.pory"
	walk_left
# 117 "data/maps/MtChimney/scripts.pory"
	walk_left
# 118 "data/maps/MtChimney/scripts.pory"
	walk_left
# 119 "data/maps/MtChimney/scripts.pory"
	walk_left
# 120 "data/maps/MtChimney/scripts.pory"
	walk_down
# 121 "data/maps/MtChimney/scripts.pory"
	walk_down
# 122 "data/maps/MtChimney/scripts.pory"
	walk_down
# 123 "data/maps/MtChimney/scripts.pory"
	walk_down
# 124 "data/maps/MtChimney/scripts.pory"
	step_end
# 125 "data/maps/MtChimney/scripts.pory"

# 126 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused4:
# 127 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 128 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 129 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 130 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 131 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 132 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 133 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 134 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 135 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 136 "data/maps/MtChimney/scripts.pory"
	walk_left
# 137 "data/maps/MtChimney/scripts.pory"
	walk_left
# 138 "data/maps/MtChimney/scripts.pory"
	walk_down
# 139 "data/maps/MtChimney/scripts.pory"
	walk_down
# 140 "data/maps/MtChimney/scripts.pory"
	walk_down
# 141 "data/maps/MtChimney/scripts.pory"
	walk_left
# 142 "data/maps/MtChimney/scripts.pory"
	walk_left
# 143 "data/maps/MtChimney/scripts.pory"
	walk_down
# 144 "data/maps/MtChimney/scripts.pory"
	walk_down
# 145 "data/maps/MtChimney/scripts.pory"
	walk_left
# 146 "data/maps/MtChimney/scripts.pory"
	walk_left
# 147 "data/maps/MtChimney/scripts.pory"
	walk_left
# 148 "data/maps/MtChimney/scripts.pory"
	walk_left
# 149 "data/maps/MtChimney/scripts.pory"
	walk_left
# 150 "data/maps/MtChimney/scripts.pory"
	walk_down
# 151 "data/maps/MtChimney/scripts.pory"
	step_end
# 152 "data/maps/MtChimney/scripts.pory"

# 153 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused5:
# 154 "data/maps/MtChimney/scripts.pory"
	delay_16
# 155 "data/maps/MtChimney/scripts.pory"
	delay_16
# 156 "data/maps/MtChimney/scripts.pory"
	delay_16
# 157 "data/maps/MtChimney/scripts.pory"
	walk_down
# 158 "data/maps/MtChimney/scripts.pory"
	walk_down
# 159 "data/maps/MtChimney/scripts.pory"
	walk_down
# 160 "data/maps/MtChimney/scripts.pory"
	walk_left
# 161 "data/maps/MtChimney/scripts.pory"
	walk_left
# 162 "data/maps/MtChimney/scripts.pory"
	walk_left
# 163 "data/maps/MtChimney/scripts.pory"
	walk_down
# 164 "data/maps/MtChimney/scripts.pory"
	step_end
# 165 "data/maps/MtChimney/scripts.pory"

# 166 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused6:
# 167 "data/maps/MtChimney/scripts.pory"
	delay_16
# 168 "data/maps/MtChimney/scripts.pory"
	walk_left
# 169 "data/maps/MtChimney/scripts.pory"
	walk_down
# 170 "data/maps/MtChimney/scripts.pory"
	walk_down
# 171 "data/maps/MtChimney/scripts.pory"
	walk_down
# 172 "data/maps/MtChimney/scripts.pory"
	walk_down
# 173 "data/maps/MtChimney/scripts.pory"
	walk_left
# 174 "data/maps/MtChimney/scripts.pory"
	walk_left
# 175 "data/maps/MtChimney/scripts.pory"
	walk_left
# 176 "data/maps/MtChimney/scripts.pory"
	walk_left
# 177 "data/maps/MtChimney/scripts.pory"
	walk_left
# 178 "data/maps/MtChimney/scripts.pory"
	walk_down
# 179 "data/maps/MtChimney/scripts.pory"
	walk_down
# 180 "data/maps/MtChimney/scripts.pory"
	walk_down
# 181 "data/maps/MtChimney/scripts.pory"
	walk_down
# 182 "data/maps/MtChimney/scripts.pory"
	step_end
# 183 "data/maps/MtChimney/scripts.pory"

# 184 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused7:
# 185 "data/maps/MtChimney/scripts.pory"
	delay_16
# 186 "data/maps/MtChimney/scripts.pory"
	walk_left
# 187 "data/maps/MtChimney/scripts.pory"
	walk_left
# 188 "data/maps/MtChimney/scripts.pory"
	walk_down
# 189 "data/maps/MtChimney/scripts.pory"
	walk_down
# 190 "data/maps/MtChimney/scripts.pory"
	walk_down
# 191 "data/maps/MtChimney/scripts.pory"
	walk_left
# 192 "data/maps/MtChimney/scripts.pory"
	walk_left
# 193 "data/maps/MtChimney/scripts.pory"
	walk_down
# 194 "data/maps/MtChimney/scripts.pory"
	walk_down
# 195 "data/maps/MtChimney/scripts.pory"
	walk_left
# 196 "data/maps/MtChimney/scripts.pory"
	walk_left
# 197 "data/maps/MtChimney/scripts.pory"
	walk_left
# 198 "data/maps/MtChimney/scripts.pory"
	walk_left
# 199 "data/maps/MtChimney/scripts.pory"
	walk_left
# 200 "data/maps/MtChimney/scripts.pory"
	walk_down
# 201 "data/maps/MtChimney/scripts.pory"
	step_end
# 202 "data/maps/MtChimney/scripts.pory"

# 203 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused8:
# 204 "data/maps/MtChimney/scripts.pory"
	delay_16
# 205 "data/maps/MtChimney/scripts.pory"
	walk_down
# 206 "data/maps/MtChimney/scripts.pory"
	walk_left
# 207 "data/maps/MtChimney/scripts.pory"
	walk_left
# 208 "data/maps/MtChimney/scripts.pory"
	walk_left
# 209 "data/maps/MtChimney/scripts.pory"
	walk_left
# 210 "data/maps/MtChimney/scripts.pory"
	walk_in_place_down
# 211 "data/maps/MtChimney/scripts.pory"
	step_end
# 212 "data/maps/MtChimney/scripts.pory"

# 213 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused9:
# 214 "data/maps/MtChimney/scripts.pory"
	walk_down
# 215 "data/maps/MtChimney/scripts.pory"
	walk_down
# 216 "data/maps/MtChimney/scripts.pory"
	walk_down
# 217 "data/maps/MtChimney/scripts.pory"
	walk_down
# 218 "data/maps/MtChimney/scripts.pory"
	walk_left
# 219 "data/maps/MtChimney/scripts.pory"
	walk_left
# 220 "data/maps/MtChimney/scripts.pory"
	walk_left
# 221 "data/maps/MtChimney/scripts.pory"
	walk_left
# 222 "data/maps/MtChimney/scripts.pory"
	walk_left
# 223 "data/maps/MtChimney/scripts.pory"
	walk_down
# 224 "data/maps/MtChimney/scripts.pory"
	walk_down
# 225 "data/maps/MtChimney/scripts.pory"
	walk_down
# 226 "data/maps/MtChimney/scripts.pory"
	walk_down
# 227 "data/maps/MtChimney/scripts.pory"
	step_end
# 228 "data/maps/MtChimney/scripts.pory"

# 229 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused10:
# 230 "data/maps/MtChimney/scripts.pory"
	walk_down
# 231 "data/maps/MtChimney/scripts.pory"
	step_end
# 232 "data/maps/MtChimney/scripts.pory"

# 233 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused11:
# 234 "data/maps/MtChimney/scripts.pory"
	walk_down
# 235 "data/maps/MtChimney/scripts.pory"
	walk_down
# 236 "data/maps/MtChimney/scripts.pory"
	walk_down
# 237 "data/maps/MtChimney/scripts.pory"
	walk_down
# 238 "data/maps/MtChimney/scripts.pory"
	walk_down
# 239 "data/maps/MtChimney/scripts.pory"
	walk_down
# 240 "data/maps/MtChimney/scripts.pory"
	walk_down
# 241 "data/maps/MtChimney/scripts.pory"
	step_end
# 242 "data/maps/MtChimney/scripts.pory"

# 243 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused12:
# 244 "data/maps/MtChimney/scripts.pory"
	delay_16
# 245 "data/maps/MtChimney/scripts.pory"
	delay_16
# 246 "data/maps/MtChimney/scripts.pory"
	walk_in_place_left
# 247 "data/maps/MtChimney/scripts.pory"
	delay_16
# 248 "data/maps/MtChimney/scripts.pory"
	walk_down
# 249 "data/maps/MtChimney/scripts.pory"
	walk_down
# 250 "data/maps/MtChimney/scripts.pory"
	walk_down
# 251 "data/maps/MtChimney/scripts.pory"
	walk_down
# 252 "data/maps/MtChimney/scripts.pory"
	walk_down
# 253 "data/maps/MtChimney/scripts.pory"
	step_end
# 254 "data/maps/MtChimney/scripts.pory"

# 255 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused13:
# 256 "data/maps/MtChimney/scripts.pory"
	delay_16
# 257 "data/maps/MtChimney/scripts.pory"
	delay_16
# 258 "data/maps/MtChimney/scripts.pory"
	delay_16
# 259 "data/maps/MtChimney/scripts.pory"
	delay_16
# 260 "data/maps/MtChimney/scripts.pory"
	delay_16
# 261 "data/maps/MtChimney/scripts.pory"
	delay_16
# 262 "data/maps/MtChimney/scripts.pory"
	walk_in_place_left
# 263 "data/maps/MtChimney/scripts.pory"
	delay_16
# 264 "data/maps/MtChimney/scripts.pory"
	walk_down
# 265 "data/maps/MtChimney/scripts.pory"
	walk_down
# 266 "data/maps/MtChimney/scripts.pory"
	step_end
# 267 "data/maps/MtChimney/scripts.pory"

# 268 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused14:
# 269 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 270 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 271 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 272 "data/maps/MtChimney/scripts.pory"
	face_right
# 273 "data/maps/MtChimney/scripts.pory"
	step_end
# 274 "data/maps/MtChimney/scripts.pory"

# 275 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused15:
# 276 "data/maps/MtChimney/scripts.pory"
	walk_left
# 277 "data/maps/MtChimney/scripts.pory"
	walk_in_place_right
# 278 "data/maps/MtChimney/scripts.pory"
	delay_16
# 279 "data/maps/MtChimney/scripts.pory"
	step_end
# 280 "data/maps/MtChimney/scripts.pory"

# 281 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 282 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
# 283 "data/maps/MtChimney/scripts.pory"
	end
# 284 "data/maps/MtChimney/scripts.pory"

# 285 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 286 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
# 287 "data/maps/MtChimney/scripts.pory"
	end
# 288 "data/maps/MtChimney/scripts.pory"

# 289 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 290 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasInsane, MSGBOX_SIGN
# 291 "data/maps/MtChimney/scripts.pory"
	end
# 292 "data/maps/MtChimney/scripts.pory"

# 293 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 294 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
# 295 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 296 "data/maps/MtChimney/scripts.pory"
	end
# 297 "data/maps/MtChimney/scripts.pory"

# 298 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 299 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
# 300 "data/maps/MtChimney/scripts.pory"
	end
# 301 "data/maps/MtChimney/scripts.pory"

# 302 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 303 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
# 304 "data/maps/MtChimney/scripts.pory"
	end
# 305 "data/maps/MtChimney/scripts.pory"

# 306 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 307 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_StompEveryone, MSGBOX_SIGN
# 308 "data/maps/MtChimney/scripts.pory"
	end
# 309 "data/maps/MtChimney/scripts.pory"

# 310 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 311 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_GetItAll, MSGBOX_SIGN
# 312 "data/maps/MtChimney/scripts.pory"
	end
# 313 "data/maps/MtChimney/scripts.pory"

# 314 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 315 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
# 316 "data/maps/MtChimney/scripts.pory"
	end
# 317 "data/maps/MtChimney/scripts.pory"

# 318 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 319 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
# 320 "data/maps/MtChimney/scripts.pory"
	end
# 321 "data/maps/MtChimney/scripts.pory"

# 322 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MagmaPoochyena::
# 323 "data/maps/MtChimney/scripts.pory"
    waitse
# 324 "data/maps/MtChimney/scripts.pory"
    playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 325 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
# 326 "data/maps/MtChimney/scripts.pory"
    waitmoncry
# 327 "data/maps/MtChimney/scripts.pory"
	end
# 328 "data/maps/MtChimney/scripts.pory"

# 329 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_AquaPoochyena::
# 330 "data/maps/MtChimney/scripts.pory"
    waitse
# 331 "data/maps/MtChimney/scripts.pory"
    playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 332 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
# 333 "data/maps/MtChimney/scripts.pory"
    waitmoncry
# 334 "data/maps/MtChimney/scripts.pory"
	end
# 335 "data/maps/MtChimney/scripts.pory"

# 336 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 337 "data/maps/MtChimney/scripts.pory"
	lockall
# 338 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 339 "data/maps/MtChimney/scripts.pory"
	releaseall
# 340 "data/maps/MtChimney/scripts.pory"
	end
# 341 "data/maps/MtChimney/scripts.pory"

# 342 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 343 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 344 "data/maps/MtChimney/scripts.pory"
	end
# 345 "data/maps/MtChimney/scripts.pory"

# 346 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 347 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
# 348 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 349 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RematchShelby
# 350 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 351 "data/maps/MtChimney/scripts.pory"
	release
# 352 "data/maps/MtChimney/scripts.pory"
	end
# 353 "data/maps/MtChimney/scripts.pory"

# 354 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 355 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 356 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 357 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 358 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 359 "data/maps/MtChimney/scripts.pory"
	release
# 360 "data/maps/MtChimney/scripts.pory"
	end
# 361 "data/maps/MtChimney/scripts.pory"

# 362 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 363 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 364 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 365 "data/maps/MtChimney/scripts.pory"
	end
# 366 "data/maps/MtChimney/scripts.pory"

# 367 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 368 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 369 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 370 "data/maps/MtChimney/scripts.pory"
	end
# 371 "data/maps/MtChimney/scripts.pory"

# 372 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 373 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 374 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 375 "data/maps/MtChimney/scripts.pory"
	end
# 376 "data/maps/MtChimney/scripts.pory"

# 377 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 378 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 379 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 380 "data/maps/MtChimney/scripts.pory"
	end
# 381 "data/maps/MtChimney/scripts.pory"

# 382 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1::
# 383 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
# 384 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 385 "data/maps/MtChimney/scripts.pory"
	end
# 386 "data/maps/MtChimney/scripts.pory"

# 387 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 388 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
# 389 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 390 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
# 391 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 392 "data/maps/MtChimney/scripts.pory"
	release
# 393 "data/maps/MtChimney/scripts.pory"
	end
# 394 "data/maps/MtChimney/scripts.pory"

# 395 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 396 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 397 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 398 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 399 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 400 "data/maps/MtChimney/scripts.pory"
	release
# 401 "data/maps/MtChimney/scripts.pory"
	end
# 402 "data/maps/MtChimney/scripts.pory"

# 403 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 404 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 405 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 406 "data/maps/MtChimney/scripts.pory"
	end
# 407 "data/maps/MtChimney/scripts.pory"

# 408 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDefeat:
# 409 "data/maps/MtChimney/scripts.pory"
	.string "Ugh!\nYou are…quite capable…\lI fell behind, but only an inch…$"
# 410 "data/maps/MtChimney/scripts.pory"

# 411 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 412 "data/maps/MtChimney/scripts.pory"
	.string "Yet again?\nHyuhn!$"
# 413 "data/maps/MtChimney/scripts.pory"

# 414 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 415 "data/maps/MtChimney/scripts.pory"
	.string "We of Team Magma are working hard for\neveryone's sake.\pLike, if there's more land, there'd be\nmore places to live.\lEveryone would be happy!$"
# 416 "data/maps/MtChimney/scripts.pory"

# 417 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 418 "data/maps/MtChimney/scripts.pory"
	.string "Hunh?\n"
# 419 "data/maps/MtChimney/scripts.pory"
	.string "What do you mean I lost?$"
# 420 "data/maps/MtChimney/scripts.pory"

# 421 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 422 "data/maps/MtChimney/scripts.pory"
	.string "Our Boss says, “It will make everyone\n"
# 423 "data/maps/MtChimney/scripts.pory"
	.string "happy.”\p"
# 424 "data/maps/MtChimney/scripts.pory"
	.string "But why does everyone keep getting\n"
# 425 "data/maps/MtChimney/scripts.pory"
	.string "in our way?$"
# 426 "data/maps/MtChimney/scripts.pory"

# 427 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Intro:
# 428 "data/maps/MtChimney/scripts.pory"
	.string "If there were more land, I'd be able\n"
# 429 "data/maps/MtChimney/scripts.pory"
	.string "to get a big house of my own!\p"
# 430 "data/maps/MtChimney/scripts.pory"
	.string "I'm going to build it on hardened lava!$"
# 431 "data/maps/MtChimney/scripts.pory"

# 432 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Defeat:
# 433 "data/maps/MtChimney/scripts.pory"
	.string "My dream of a big house…$"
# 434 "data/maps/MtChimney/scripts.pory"

# 435 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1PostBattle:
# 436 "data/maps/MtChimney/scripts.pory"
	.string "A kid like you, you ought to be\n"
# 437 "data/maps/MtChimney/scripts.pory"
	.string "splashing about in the waves!$"
# 438 "data/maps/MtChimney/scripts.pory"

# 439 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 440 "data/maps/MtChimney/scripts.pory"
	.string "That annoying Team Aqua…\n"
# 441 "data/maps/MtChimney/scripts.pory"
	.string "They always mess with our plans!$"
# 442 "data/maps/MtChimney/scripts.pory"

# 443 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 444 "data/maps/MtChimney/scripts.pory"
	.string "Meteorites pack amazing power!$"
# 445 "data/maps/MtChimney/scripts.pory"

# 446 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_StompEveryone:
# 447 "data/maps/MtChimney/scripts.pory"
	.string "Go!\nStomp Team Aqua!\lAnd expand the land!$"
# 448 "data/maps/MtChimney/scripts.pory"

# 449 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_GetItAll:
# 450 "data/maps/MtChimney/scripts.pory"
	.string "The energy contained within\nMt. Chimney!\pAnd the power of the Meteorite!\pWe in Team Magma are gonna get it all\nfor ourselves! Wa ha ha ha!$"
# 451 "data/maps/MtChimney/scripts.pory"

# 452 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 453 "data/maps/MtChimney/scripts.pory"
	.string "Yeah!\n"
# 454 "data/maps/MtChimney/scripts.pory"
	.string "Douse them in fire!$"
# 455 "data/maps/MtChimney/scripts.pory"

# 456 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand:
# 457 "data/maps/MtChimney/scripts.pory"
	.string "Stay out of our way, OK?\pWe're trying to enlarge the landmass\nfor the good of everybody!$"
# 458 "data/maps/MtChimney/scripts.pory"

# 459 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bufoh:
# 460 "data/maps/MtChimney/scripts.pory"
	.string "Pwump!$"
# 461 "data/maps/MtChimney/scripts.pory"

# 462 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieLetMeThrough:
# 463 "data/maps/MtChimney/scripts.pory"
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: Confound the lot of you!\nLet me through, you bilge rats!$"
# 464 "data/maps/MtChimney/scripts.pory"

# 465 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 466 "data/maps/MtChimney/scripts.pory"
	.string "Oh no… Team Magma outnumbers us!\nWe can't keep up with them!$"
# 467 "data/maps/MtChimney/scripts.pory"

# 468 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon:
# 469 "data/maps/MtChimney/scripts.pory"
	.string "If they expand the land, there'll be\nfewer habitats for Water Pokémon!$"
# 470 "data/maps/MtChimney/scripts.pory"

# 471 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasInsane:
# 472 "data/maps/MtChimney/scripts.pory"
	.string "Team Magma wants to expand the\nlandmass? How's that for insane?$"
# 473 "data/maps/MtChimney/scripts.pory"

# 474 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bushaa:
# 475 "data/maps/MtChimney/scripts.pory"
	.string "Pfloosh!$"
# 476 "data/maps/MtChimney/scripts.pory"

# 477 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 478 "data/maps/MtChimney/scripts.pory"
	.string "Lava Cookies are Mt. Chimney's local\n"
# 479 "data/maps/MtChimney/scripts.pory"
	.string "specialty.\p"
# 480 "data/maps/MtChimney/scripts.pory"
	.string "Try one. It's just ¥200.$"
# 481 "data/maps/MtChimney/scripts.pory"

# 482 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 483 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"
# 484 "data/maps/MtChimney/scripts.pory"

# 485 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 486 "data/maps/MtChimney/scripts.pory"
	.string "Oh, dear. You can't buy a thing if\n"
# 487 "data/maps/MtChimney/scripts.pory"
	.string "you've not got the money.$"
# 488 "data/maps/MtChimney/scripts.pory"

# 489 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 490 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"
# 491 "data/maps/MtChimney/scripts.pory"

# 492 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 493 "data/maps/MtChimney/scripts.pory"
	.string "This mysterious machine…\n"
# 494 "data/maps/MtChimney/scripts.pory"
	.string "It makes no response whatsoever.$"
# 495 "data/maps/MtChimney/scripts.pory"

# 496 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 497 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} Jagged Path\n"
# 498 "data/maps/MtChimney/scripts.pory"
	.string "Lavaridge Town ahead$"
# 499 "data/maps/MtChimney/scripts.pory"

# 500 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 501 "data/maps/MtChimney/scripts.pory"
	.string "I've been to the hot springs and\n"
# 502 "data/maps/MtChimney/scripts.pory"
	.string "refreshed my tired bones.\l"
# 503 "data/maps/MtChimney/scripts.pory"
	.string "Right now I'm feeling strong!$"
# 504 "data/maps/MtChimney/scripts.pory"

# 505 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 506 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 507 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 508 "data/maps/MtChimney/scripts.pory"

# 509 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 510 "data/maps/MtChimney/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
# 511 "data/maps/MtChimney/scripts.pory"
	.string "myself an Expert now, can I?$"
# 512 "data/maps/MtChimney/scripts.pory"

# 513 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 514 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, child. It was fun, as if\n"
# 515 "data/maps/MtChimney/scripts.pory"
	.string "I were battling my own grandchild.\p"
# 516 "data/maps/MtChimney/scripts.pory"
	.string "Please, come see me again for\n"
# 517 "data/maps/MtChimney/scripts.pory"
	.string "a rematch.$"
# 518 "data/maps/MtChimney/scripts.pory"

# 519 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 520 "data/maps/MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\n"
# 521 "data/maps/MtChimney/scripts.pory"
	.string "of your Pokémon, why, you should be\l"
# 522 "data/maps/MtChimney/scripts.pory"
	.string "able to achieve great things.$"
# 523 "data/maps/MtChimney/scripts.pory"

# 524 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 525 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 526 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 527 "data/maps/MtChimney/scripts.pory"

# 528 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 529 "data/maps/MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\n"
# 530 "data/maps/MtChimney/scripts.pory"
	.string "with the hearts of your Pokémon.$"
# 531 "data/maps/MtChimney/scripts.pory"

# 532 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 533 "data/maps/MtChimney/scripts.pory"
	.string "I've got the fire in me, baby.\n"
# 534 "data/maps/MtChimney/scripts.pory"
	.string "I can't stand it! I have to battle!$"
# 535 "data/maps/MtChimney/scripts.pory"

# 536 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 537 "data/maps/MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"
# 538 "data/maps/MtChimney/scripts.pory"

# 539 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 540 "data/maps/MtChimney/scripts.pory"
	.string "The heat of Mt. Chimney warms\n"
# 541 "data/maps/MtChimney/scripts.pory"
	.string "me up, baby!$"
# 542 "data/maps/MtChimney/scripts.pory"

# 543 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 544 "data/maps/MtChimney/scripts.pory"
	.string "I've finally made it to Mt. Chimney.\n"
# 545 "data/maps/MtChimney/scripts.pory"
	.string "I want to make my Pokémon battle!$"
# 546 "data/maps/MtChimney/scripts.pory"

# 547 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 548 "data/maps/MtChimney/scripts.pory"
	.string "The way you battle…\n"
# 549 "data/maps/MtChimney/scripts.pory"
	.string "It's like a Mt. Chimney eruption!$"
# 550 "data/maps/MtChimney/scripts.pory"

# 551 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 552 "data/maps/MtChimney/scripts.pory"
	.string "Like I said, I've finally made it to\n"
# 553 "data/maps/MtChimney/scripts.pory"
	.string "Mt. Chimney. It would be a shame if\l"
# 554 "data/maps/MtChimney/scripts.pory"
	.string "I only do a little sightseeing…\p"
# 555 "data/maps/MtChimney/scripts.pory"
	.string "I want to get in some battles and buy\n"
# 556 "data/maps/MtChimney/scripts.pory"
	.string "Cookies as souvenirs.$"
# 557 "data/maps/MtChimney/scripts.pory"

# 558 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 559 "data/maps/MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\n"
# 560 "data/maps/MtChimney/scripts.pory"
	.string "I've been feeling great!\l"
# 561 "data/maps/MtChimney/scripts.pory"
	.string "I'm sure I'm going to win!$"
# 562 "data/maps/MtChimney/scripts.pory"

# 563 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 564 "data/maps/MtChimney/scripts.pory"
	.string "Yowch!\n"
# 565 "data/maps/MtChimney/scripts.pory"
	.string "I'm getting a chill out of the water.$"
# 566 "data/maps/MtChimney/scripts.pory"

# 567 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 568 "data/maps/MtChimney/scripts.pory"
	.string "I'll have to take another dip in the\n"
# 569 "data/maps/MtChimney/scripts.pory"
	.string "hot springs. Want to join me?\p"
# 570 "data/maps/MtChimney/scripts.pory"
	.string "Just joking!$"
# 571 "data/maps/MtChimney/scripts.pory"

# 572 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 573 "data/maps/MtChimney/scripts.pory"
	.string "This is one fine mountain! Plenty of\n"
# 574 "data/maps/MtChimney/scripts.pory"
	.string "hot people around for company!$"
# 575 "data/maps/MtChimney/scripts.pory"

# 576 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 577 "data/maps/MtChimney/scripts.pory"
	.string "Oh, you're a real firebrand, too!$"
# 578 "data/maps/MtChimney/scripts.pory"

# 579 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 580 "data/maps/MtChimney/scripts.pory"
	.string "I think I need a dip in Lavaridge\n"
# 581 "data/maps/MtChimney/scripts.pory"
	.string "Hot Spring with the locals!$"
# 582 "data/maps/MtChimney/scripts.pory"

# 583 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 584 "data/maps/MtChimney/scripts.pory"
	.string "I like little fireballs like you.\n"
# 585 "data/maps/MtChimney/scripts.pory"
	.string "Let me register you in my Pokénav.$"
# 586 "data/maps/MtChimney/scripts.pory"

# 587 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 588 "data/maps/MtChimney/scripts.pory"
	.string "I'm happily surrounded by hot people\n"
# 589 "data/maps/MtChimney/scripts.pory"
	.string "around these parts. I won't lose!$"
# 590 "data/maps/MtChimney/scripts.pory"

# 591 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 592 "data/maps/MtChimney/scripts.pory"
	.string "Gosh, you're still the same\n"
# 593 "data/maps/MtChimney/scripts.pory"
	.string "firebrand as before!$"
# 594 "data/maps/MtChimney/scripts.pory"

# 595 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 596 "data/maps/MtChimney/scripts.pory"
	.string "Actually, it really is hot here.\n"
# 597 "data/maps/MtChimney/scripts.pory"
	.string "I'm overdressed for these parts.$"

MtChimney_EventScript_TabithaPos::
# 610 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_TABITHA, 14, 5
# 611 "data/maps/MtChimney/scripts.pory"
	setobjectmovementtype LOCALID_TABITHA, MOVEMENT_TYPE_FACE_DOWN
	return


MtChimney_EventScript_ArchieGangOnTrigger1::
# 616 "data/maps/MtChimney/scripts.pory"
	setvar VAR_TEMP_0, 1
# 617 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_ArchieGangOn
	return


MtChimney_EventScript_ArchieGangOnTrigger2::
# 621 "data/maps/MtChimney/scripts.pory"
	setvar VAR_TEMP_0, 2
# 622 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_ArchieGangOn
	return


MtChimney_EventScript_ArchieGangOnTrigger3::
# 626 "data/maps/MtChimney/scripts.pory"
	setvar VAR_TEMP_0, 3
# 627 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_ArchieGangOn
	return


MtChimney_EventScript_ArchieGangOnTrigger4::
# 631 "data/maps/MtChimney/scripts.pory"
	setvar VAR_TEMP_0, 4
# 632 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_ArchieGangOn
	return


MtChimney_EventScript_ArchieGangOnTrigger5::
# 636 "data/maps/MtChimney/scripts.pory"
	setvar VAR_TEMP_0, 5
# 637 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_ArchieGangOn
	return


MtChimney_EventScript_ArchieGangOnTrigger6::
# 641 "data/maps/MtChimney/scripts.pory"
	setvar VAR_TEMP_0, 6
# 642 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_ArchieGangOn
	return


MtChimney_EventScript_ArchieGangOn::
# 647 "data/maps/MtChimney/scripts.pory"
	lock
# 648 "data/maps/MtChimney/scripts.pory"
	delay 8
# 649 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 650 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 651 "data/maps/MtChimney/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 652 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 653 "data/maps/MtChimney/scripts.pory"
	special SpawnCameraObject
# 654 "data/maps/MtChimney/scripts.pory"
	switch VAR_TEMP_0
# 655 "data/maps/MtChimney/scripts.pory"
	case 1, MtChimney_EventScript_ArchieGangOn_3
# 656 "data/maps/MtChimney/scripts.pory"
	case 2, MtChimney_EventScript_ArchieGangOn_4
# 657 "data/maps/MtChimney/scripts.pory"
	case 3, MtChimney_EventScript_ArchieGangOn_5
# 658 "data/maps/MtChimney/scripts.pory"
	case 4, MtChimney_EventScript_ArchieGangOn_6
# 659 "data/maps/MtChimney/scripts.pory"
	case 5, MtChimney_EventScript_ArchieGangOn_7
# 660 "data/maps/MtChimney/scripts.pory"
	case 6, MtChimney_EventScript_ArchieGangOn_8
MtChimney_EventScript_ArchieGangOn_1:
# 662 "data/maps/MtChimney/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 663 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 664 "data/maps/MtChimney/scripts.pory"
	delay 16
# 665 "data/maps/MtChimney/scripts.pory"
	applymovement 12, Common_Movement_WalkInPlaceDown
# 666 "data/maps/MtChimney/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 667 "data/maps/MtChimney/scripts.pory"
	delay 4
# 668 "data/maps/MtChimney/scripts.pory"
	applymovement 15, Common_Movement_WalkInPlaceRight
# 669 "data/maps/MtChimney/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 670 "data/maps/MtChimney/scripts.pory"
	delay 4
# 671 "data/maps/MtChimney/scripts.pory"
	applymovement 14, Common_Movement_WalkInPlaceUp
# 672 "data/maps/MtChimney/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 673 "data/maps/MtChimney/scripts.pory"
	waitmovement 14
# 674 "data/maps/MtChimney/scripts.pory"
	waitmoncry
# 675 "data/maps/MtChimney/scripts.pory"
	delay 8
# 676 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceLeft
# 677 "data/maps/MtChimney/scripts.pory"
	waitmovement LOCALID_ARCHIE
# 678 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_ArchieGangOn_Text_0
# 679 "data/maps/MtChimney/scripts.pory"
	closemessage
# 680 "data/maps/MtChimney/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_NORMAL
# 681 "data/maps/MtChimney/scripts.pory"
	applymovement 11, Common_Movement_WalkInPlaceLeft
# 682 "data/maps/MtChimney/scripts.pory"
	waitmovement 11
# 683 "data/maps/MtChimney/scripts.pory"
	waitmoncry
# 684 "data/maps/MtChimney/scripts.pory"
	delay 16
# 685 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 686 "data/maps/MtChimney/scripts.pory"
	switch VAR_TEMP_0
# 687 "data/maps/MtChimney/scripts.pory"
	case 1, MtChimney_EventScript_ArchieGangOn_11
# 688 "data/maps/MtChimney/scripts.pory"
	case 2, MtChimney_EventScript_ArchieGangOn_12
# 689 "data/maps/MtChimney/scripts.pory"
	case 3, MtChimney_EventScript_ArchieGangOn_13
# 690 "data/maps/MtChimney/scripts.pory"
	case 4, MtChimney_EventScript_ArchieGangOn_14
# 691 "data/maps/MtChimney/scripts.pory"
	case 5, MtChimney_EventScript_ArchieGangOn_15
# 692 "data/maps/MtChimney/scripts.pory"
	case 6, MtChimney_EventScript_ArchieGangOn_16
MtChimney_EventScript_ArchieGangOn_9:
# 694 "data/maps/MtChimney/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 695 "data/maps/MtChimney/scripts.pory"
	special RemoveCameraObject
# 696 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 697 "data/maps/MtChimney/scripts.pory"
	setvar VAR_MT_CHIMNEY_STATE, 1
# 698 "data/maps/MtChimney/scripts.pory"
	release
	end

MtChimney_EventScript_ArchieGangOn_3:
# 655 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraPanTo3v1_1
	goto MtChimney_EventScript_ArchieGangOn_1

MtChimney_EventScript_ArchieGangOn_4:
# 656 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraPanTo3v1_2
	goto MtChimney_EventScript_ArchieGangOn_1

MtChimney_EventScript_ArchieGangOn_5:
# 657 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraPanTo3v1_3
	goto MtChimney_EventScript_ArchieGangOn_1

MtChimney_EventScript_ArchieGangOn_6:
# 658 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraPanTo3v1_4
	goto MtChimney_EventScript_ArchieGangOn_1

MtChimney_EventScript_ArchieGangOn_7:
# 659 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraPanTo3v1_5
	goto MtChimney_EventScript_ArchieGangOn_1

MtChimney_EventScript_ArchieGangOn_8:
# 660 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraPanTo3v1_6
	goto MtChimney_EventScript_ArchieGangOn_1

MtChimney_EventScript_ArchieGangOn_11:
# 687 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraBackToPlayer_1
	goto MtChimney_EventScript_ArchieGangOn_9

MtChimney_EventScript_ArchieGangOn_12:
# 688 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraBackToPlayer_2
	goto MtChimney_EventScript_ArchieGangOn_9

MtChimney_EventScript_ArchieGangOn_13:
# 689 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraBackToPlayer_3
	goto MtChimney_EventScript_ArchieGangOn_9

MtChimney_EventScript_ArchieGangOn_14:
# 690 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraBackToPlayer_4
	goto MtChimney_EventScript_ArchieGangOn_9

MtChimney_EventScript_ArchieGangOn_15:
# 691 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraBackToPlayer_5
	goto MtChimney_EventScript_ArchieGangOn_9

MtChimney_EventScript_ArchieGangOn_16:
# 692 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraBackToPlayer_6
	goto MtChimney_EventScript_ArchieGangOn_9


# 702 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_CameraPanTo3v1_1:
# 703 "data/maps/MtChimney/scripts.pory"
	walk_left
# 703 "data/maps/MtChimney/scripts.pory"
	walk_left
# 704 "data/maps/MtChimney/scripts.pory"
	walk_diag_southwest
# 704 "data/maps/MtChimney/scripts.pory"
	walk_diag_southwest
	step_end

# 707 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_CameraPanTo3v1_2:
# 708 "data/maps/MtChimney/scripts.pory"
	walk_left
# 708 "data/maps/MtChimney/scripts.pory"
	walk_left
# 708 "data/maps/MtChimney/scripts.pory"
	walk_left
# 709 "data/maps/MtChimney/scripts.pory"
	walk_diag_southwest
	step_end

# 712 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_CameraPanTo3v1_3:
# 713 "data/maps/MtChimney/scripts.pory"
	walk_left
# 713 "data/maps/MtChimney/scripts.pory"
	walk_left
# 713 "data/maps/MtChimney/scripts.pory"
	walk_left
# 713 "data/maps/MtChimney/scripts.pory"
	walk_left
	step_end

# 716 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_CameraPanTo3v1_4:
# 717 "data/maps/MtChimney/scripts.pory"
	walk_left
# 717 "data/maps/MtChimney/scripts.pory"
	walk_left
# 717 "data/maps/MtChimney/scripts.pory"
	walk_left
# 718 "data/maps/MtChimney/scripts.pory"
	walk_diag_northwest
	step_end

# 721 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_CameraPanTo3v1_5:
# 722 "data/maps/MtChimney/scripts.pory"
	walk_left
# 722 "data/maps/MtChimney/scripts.pory"
	walk_left
# 723 "data/maps/MtChimney/scripts.pory"
	walk_diag_northwest
# 723 "data/maps/MtChimney/scripts.pory"
	walk_diag_northwest
	step_end

# 726 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_CameraPanTo3v1_6:
# 727 "data/maps/MtChimney/scripts.pory"
	walk_left
# 728 "data/maps/MtChimney/scripts.pory"
	walk_diag_northwest
# 728 "data/maps/MtChimney/scripts.pory"
	walk_diag_northwest
# 728 "data/maps/MtChimney/scripts.pory"
	walk_diag_northwest
	step_end

# 731 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_CameraBackToPlayer_1:
# 732 "data/maps/MtChimney/scripts.pory"
	walk_fast_right
# 732 "data/maps/MtChimney/scripts.pory"
	walk_fast_right
# 732 "data/maps/MtChimney/scripts.pory"
	walk_fast_right
# 732 "data/maps/MtChimney/scripts.pory"
	walk_fast_right
# 733 "data/maps/MtChimney/scripts.pory"
	walk_fast_up
# 733 "data/maps/MtChimney/scripts.pory"
	walk_fast_up
	step_end

# 736 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_CameraBackToPlayer_2:
# 737 "data/maps/MtChimney/scripts.pory"
	walk_fast_right
# 737 "data/maps/MtChimney/scripts.pory"
	walk_fast_right
# 737 "data/maps/MtChimney/scripts.pory"
	walk_fast_right
# 737 "data/maps/MtChimney/scripts.pory"
	walk_fast_right
# 738 "data/maps/MtChimney/scripts.pory"
	walk_fast_up
	step_end

# 741 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_CameraBackToPlayer_3:
# 742 "data/maps/MtChimney/scripts.pory"
	walk_fast_right
# 742 "data/maps/MtChimney/scripts.pory"
	walk_fast_right
# 742 "data/maps/MtChimney/scripts.pory"
	walk_fast_right
# 742 "data/maps/MtChimney/scripts.pory"
	walk_fast_right
	step_end

# 745 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_CameraBackToPlayer_4:
# 746 "data/maps/MtChimney/scripts.pory"
	walk_fast_right
# 746 "data/maps/MtChimney/scripts.pory"
	walk_fast_right
# 746 "data/maps/MtChimney/scripts.pory"
	walk_fast_right
# 746 "data/maps/MtChimney/scripts.pory"
	walk_fast_right
# 747 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
	step_end

# 750 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_CameraBackToPlayer_5:
# 751 "data/maps/MtChimney/scripts.pory"
	walk_fast_right
# 751 "data/maps/MtChimney/scripts.pory"
	walk_fast_right
# 751 "data/maps/MtChimney/scripts.pory"
	walk_fast_right
# 751 "data/maps/MtChimney/scripts.pory"
	walk_fast_right
# 752 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 752 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
	step_end

# 755 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_CameraBackToPlayer_6:
# 756 "data/maps/MtChimney/scripts.pory"
	walk_fast_right
# 756 "data/maps/MtChimney/scripts.pory"
	walk_fast_right
# 756 "data/maps/MtChimney/scripts.pory"
	walk_fast_right
# 756 "data/maps/MtChimney/scripts.pory"
	walk_fast_right
# 757 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 757 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 757 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
	step_end

MtChimney_EventScript_MagmaAdminTabithaTrigger1::
# 761 "data/maps/MtChimney/scripts.pory"
	setvar VAR_TEMP_0, 1
# 762 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_MagmaAdminTabitha
	return


MtChimney_EventScript_MagmaAdminTabithaTrigger2::
# 766 "data/maps/MtChimney/scripts.pory"
	setvar VAR_TEMP_0, 2
# 767 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_MagmaAdminTabitha
	return


MtChimney_EventScript_MagmaAdminTabitha::
# 771 "data/maps/MtChimney/scripts.pory"
	lock
# 772 "data/maps/MtChimney/scripts.pory"
	compare VAR_MT_CHIMNEY_STATE, 2
	goto_if_ge MtChimney_EventScript_MagmaAdminTabitha_2
# 775 "data/maps/MtChimney/scripts.pory"
	delay 16
# 776 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 777 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_ExclamationMark
# 778 "data/maps/MtChimney/scripts.pory"
	waitmovement LOCALID_TABITHA
# 779 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceLeft
# 780 "data/maps/MtChimney/scripts.pory"
	switch VAR_TEMP_0
# 781 "data/maps/MtChimney/scripts.pory"
	case 1, MtChimney_EventScript_MagmaAdminTabitha_7
# 782 "data/maps/MtChimney/scripts.pory"
	case 2, MtChimney_EventScript_MagmaAdminTabitha_8
MtChimney_EventScript_MagmaAdminTabitha_5:
# 784 "data/maps/MtChimney/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 785 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_MagmaAdminTabitha_Text_1
# 786 "data/maps/MtChimney/scripts.pory"
	delay 8
# 787 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, MtChimney_Movement_TabithaStomping
# 788 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_MagmaAdminTabitha_Text_2
# 789 "data/maps/MtChimney/scripts.pory"
	waitmovement LOCALID_TABITHA
# 790 "data/maps/MtChimney/scripts.pory"
	delay 8
# 791 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, MtChimney_Movement_TabithaStomping
# 792 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_MagmaAdminTabitha_Text_3
# 793 "data/maps/MtChimney/scripts.pory"
	waitmovement LOCALID_TABITHA
# 794 "data/maps/MtChimney/scripts.pory"
	delay 8
# 795 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, MtChimney_Movement_TabithaStomping
# 796 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_MagmaAdminTabitha_Text_4
# 797 "data/maps/MtChimney/scripts.pory"
	waitmovement LOCALID_TABITHA
# 798 "data/maps/MtChimney/scripts.pory"
	closemessage
# 799 "data/maps/MtChimney/scripts.pory"
	delay 8
# 800 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceDown
# 801 "data/maps/MtChimney/scripts.pory"
	waitmovement LOCALID_TABITHA
# 802 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_MagmaAdminTabitha_Text_5
# 803 "data/maps/MtChimney/scripts.pory"
	closemessage
# 804 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceLeft
# 805 "data/maps/MtChimney/scripts.pory"
	waitmovement LOCALID_TABITHA
# 806 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_MagmaAdminTabitha_Text_6
# 807 "data/maps/MtChimney/scripts.pory"
	closemessage
# 808 "data/maps/MtChimney/scripts.pory"
	trainerbattle_no_intro TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaDefeat
# 809 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_MagmaAdminTabitha_Text_7
# 810 "data/maps/MtChimney/scripts.pory"
	closemessage
# 811 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_TABITHA, MtChimney_Movement_TabithaGoUp
# 812 "data/maps/MtChimney/scripts.pory"
	waitmovement LOCALID_TABITHA
# 813 "data/maps/MtChimney/scripts.pory"
	setvar VAR_MT_CHIMNEY_STATE, 2
MtChimney_EventScript_MagmaAdminTabitha_1:
# 815 "data/maps/MtChimney/scripts.pory"
	release
	end

MtChimney_EventScript_MagmaAdminTabitha_2:
# 773 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_MagmaAdminTabitha_Text_0, MSGBOX_NPC
	goto MtChimney_EventScript_MagmaAdminTabitha_1

MtChimney_EventScript_MagmaAdminTabitha_7:
# 781 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
	goto MtChimney_EventScript_MagmaAdminTabitha_5

MtChimney_EventScript_MagmaAdminTabitha_8:
# 782 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtChimney_Movement_PlayerFrontOfAdmin
	goto MtChimney_EventScript_MagmaAdminTabitha_5


# 819 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_PlayerFrontOfAdmin:
# 820 "data/maps/MtChimney/scripts.pory"
	walk_right
# 821 "data/maps/MtChimney/scripts.pory"
	walk_up
# 822 "data/maps/MtChimney/scripts.pory"
	walk_in_place_right
	step_end

# 825 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_TabithaStomping:
# 826 "data/maps/MtChimney/scripts.pory"
	jump_in_place_left
# 826 "data/maps/MtChimney/scripts.pory"
	jump_in_place_left
# 826 "data/maps/MtChimney/scripts.pory"
	jump_in_place_left
	step_end

# 829 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_TabithaGoUp:
# 830 "data/maps/MtChimney/scripts.pory"
	walk_up
# 831 "data/maps/MtChimney/scripts.pory"
	walk_in_place_down
	step_end

MtChimney_EventScript_MaxieTrigger1::
# 835 "data/maps/MtChimney/scripts.pory"
	setvar VAR_TEMP_0, 1
# 836 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_Maxie
	return


MtChimney_EventScript_MaxieTrigger2::
# 840 "data/maps/MtChimney/scripts.pory"
	setvar VAR_TEMP_0, 2
# 841 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_Maxie
	return


MtChimney_EventScript_MaxieTrigger3::
# 845 "data/maps/MtChimney/scripts.pory"
	setvar VAR_TEMP_0, 3
# 846 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_Maxie
	return


MtChimney_EventScript_Maxie::
# 850 "data/maps/MtChimney/scripts.pory"
	lock
# 851 "data/maps/MtChimney/scripts.pory"
	delay 8
# 852 "data/maps/MtChimney/scripts.pory"
	switch VAR_TEMP_0
# 853 "data/maps/MtChimney/scripts.pory"
	case 1, MtChimney_EventScript_Maxie_3
# 855 "data/maps/MtChimney/scripts.pory"
	case 2, MtChimney_EventScript_Maxie_4
# 857 "data/maps/MtChimney/scripts.pory"
	case 3, MtChimney_EventScript_Maxie_5
MtChimney_EventScript_Maxie_1:
# 860 "data/maps/MtChimney/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 861 "data/maps/MtChimney/scripts.pory"
	special SpawnCameraObject
# 862 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_CameraPanToMaxie
# 863 "data/maps/MtChimney/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 864 "data/maps/MtChimney/scripts.pory"
	special RemoveCameraObject
# 865 "data/maps/MtChimney/scripts.pory"
	delay 8
# 866 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, TRUE
# 867 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_Maxie_Text_0
# 868 "data/maps/MtChimney/scripts.pory"
	closemessage
# 869 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 870 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 871 "data/maps/MtChimney/scripts.pory"
	waitmovement LOCALID_MAXIE
# 872 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceLeft
# 873 "data/maps/MtChimney/scripts.pory"
	waitmovement LOCALID_MAXIE
# 874 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_Maxie_Text_1
# 875 "data/maps/MtChimney/scripts.pory"
	delay 16
# 876 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_Maxie_Text_2
# 877 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_Maxie_Text_3
# 878 "data/maps/MtChimney/scripts.pory"
	closemessage
# 879 "data/maps/MtChimney/scripts.pory"
	delay 32
# 880 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_Maxie_Text_4
# 881 "data/maps/MtChimney/scripts.pory"
	closemessage
# 882 "data/maps/MtChimney/scripts.pory"
	delay 8
# 883 "data/maps/MtChimney/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
# 884 "data/maps/MtChimney/scripts.pory"
	delay 16
# 885 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_Maxie_Text_5
# 886 "data/maps/MtChimney/scripts.pory"
	closemessage
# 887 "data/maps/MtChimney/scripts.pory"
	playse SE_BIKE_BELL
# 888 "data/maps/MtChimney/scripts.pory"
	waitse
# 889 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 890 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 891 "data/maps/MtChimney/scripts.pory"
	waitmovement LOCALID_MAXIE
# 892 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_Maxie_Text_6
# 893 "data/maps/MtChimney/scripts.pory"
	closemessage
# 894 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceRight
# 895 "data/maps/MtChimney/scripts.pory"
	waitmovement LOCALID_MAXIE
# 896 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_Maxie_Text_7
# 897 "data/maps/MtChimney/scripts.pory"
	closemessage
# 898 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceLeft
# 899 "data/maps/MtChimney/scripts.pory"
	waitmovement LOCALID_MAXIE
# 900 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_Maxie_Text_8
# 901 "data/maps/MtChimney/scripts.pory"
	closemessage
# 902 "data/maps/MtChimney/scripts.pory"
	delay 8
# 903 "data/maps/MtChimney/scripts.pory"
	special SpawnCameraObject
# 904 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtChimney_Movement_MaxieCameraBackToPlayer
# 905 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkLeft
# 906 "data/maps/MtChimney/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 907 "data/maps/MtChimney/scripts.pory"
	special RemoveCameraObject
# 908 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE, 1
# 909 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 910 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_Maxie_Text_9
# 911 "data/maps/MtChimney/scripts.pory"
	closemessage
# 912 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtChimney_Movement_PlayeWatchMaxieExit
# 913 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, MtChimney_Movement_MaxieExit
# 914 "data/maps/MtChimney/scripts.pory"
	delay 24
# 915 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 916 "data/maps/MtChimney/scripts.pory"
	waitmovement LOCALID_MAXIE
# 917 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAXIE
# 918 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_1
# 919 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_TABITHA
# 920 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_2
# 921 "data/maps/MtChimney/scripts.pory"
	removeobject 13
# 922 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 923 "data/maps/MtChimney/scripts.pory"
	fadenewbgm MUS_DUMMY
# 924 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 10, 6
# 925 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 7, 9, 6
# 926 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm 8, 9, 7
# 927 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_ARCHIE
# 928 "data/maps/MtChimney/scripts.pory"
	addobject 7
# 929 "data/maps/MtChimney/scripts.pory"
	addobject 8
# 930 "data/maps/MtChimney/scripts.pory"
	delay 8
# 931 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 932 "data/maps/MtChimney/scripts.pory"
	delay 16
# 933 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 934 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayer
# 935 "data/maps/MtChimney/scripts.pory"
	applymovement 8, MtChimney_Movement_AquaGrunt8ApproachPlayer
# 936 "data/maps/MtChimney/scripts.pory"
	applymovement 7, MtChimney_Movement_AquaGrunt7ApproachPlayer
# 937 "data/maps/MtChimney/scripts.pory"
	waitmovement 7
# 938 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_Maxie_Text_10
# 939 "data/maps/MtChimney/scripts.pory"
	delay 16
# 940 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_Maxie_Text_11
# 941 "data/maps/MtChimney/scripts.pory"
	closemessage
# 942 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExit
# 943 "data/maps/MtChimney/scripts.pory"
	applymovement 8, MtChimney_Movement_AquaGrunt8Exit
# 944 "data/maps/MtChimney/scripts.pory"
	applymovement 7, MtChimney_Movement_AquaGrunt7Exit
# 945 "data/maps/MtChimney/scripts.pory"
	delay 24
# 946 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 947 "data/maps/MtChimney/scripts.pory"
	waitmovement 7
# 948 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_ARCHIE
# 949 "data/maps/MtChimney/scripts.pory"
	removeobject 7
# 950 "data/maps/MtChimney/scripts.pory"
	removeobject 8
# 951 "data/maps/MtChimney/scripts.pory"
	fadedefaultbgm
# 952 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 953 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 954 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 955 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 956 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 957 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_RIVAL
# 958 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 959 "data/maps/MtChimney/scripts.pory"
	setvar VAR_MT_CHIMNEY_STATE, 3
# 960 "data/maps/MtChimney/scripts.pory"
	setvar VAR_LEVEL_CAP_VARIABLE, 48
# 961 "data/maps/MtChimney/scripts.pory"
	release
	end

MtChimney_EventScript_Maxie_3:
# 854 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtChimney_Movement_PlayerFrontOfMaxie1
	goto MtChimney_EventScript_Maxie_1

MtChimney_EventScript_Maxie_4:
# 856 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtChimney_Movement_PlayerFrontOfMaxie2
	goto MtChimney_EventScript_Maxie_1

MtChimney_EventScript_Maxie_5:
# 858 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtChimney_Movement_PlayerFrontOfMaxie3
	goto MtChimney_EventScript_Maxie_1


# 965 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_CameraPanToMaxie:
# 966 "data/maps/MtChimney/scripts.pory"
	walk_right
# 966 "data/maps/MtChimney/scripts.pory"
	walk_right
	step_end

# 969 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_PlayerFrontOfMaxie1:
# 970 "data/maps/MtChimney/scripts.pory"
	walk_right
# 971 "data/maps/MtChimney/scripts.pory"
	walk_down
# 972 "data/maps/MtChimney/scripts.pory"
	walk_in_place_right
	step_end

# 975 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_PlayerFrontOfMaxie2:
# 976 "data/maps/MtChimney/scripts.pory"
	walk_right
	step_end

# 979 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_PlayerFrontOfMaxie3:
# 980 "data/maps/MtChimney/scripts.pory"
	walk_right
# 981 "data/maps/MtChimney/scripts.pory"
	walk_up
# 982 "data/maps/MtChimney/scripts.pory"
	walk_in_place_right
	step_end

# 985 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_MaxieCameraBackToPlayer:
# 986 "data/maps/MtChimney/scripts.pory"
	walk_left
# 986 "data/maps/MtChimney/scripts.pory"
	walk_left
	step_end

# 989 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_PlayeWatchMaxieExit:
# 990 "data/maps/MtChimney/scripts.pory"
	delay_16
# 991 "data/maps/MtChimney/scripts.pory"
	walk_in_place_down
# 992 "data/maps/MtChimney/scripts.pory"
	delay_16
# 993 "data/maps/MtChimney/scripts.pory"
	walk_in_place_left
	step_end

# 996 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_MaxieExit:
# 997 "data/maps/MtChimney/scripts.pory"
	walk_down
# 998 "data/maps/MtChimney/scripts.pory"
	walk_left
# 998 "data/maps/MtChimney/scripts.pory"
	walk_left
# 998 "data/maps/MtChimney/scripts.pory"
	walk_left
# 998 "data/maps/MtChimney/scripts.pory"
	walk_left
# 998 "data/maps/MtChimney/scripts.pory"
	walk_left
# 998 "data/maps/MtChimney/scripts.pory"
	walk_left
# 998 "data/maps/MtChimney/scripts.pory"
	walk_left
# 998 "data/maps/MtChimney/scripts.pory"
	walk_left
	step_end

# 1001 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayer:
# 1002 "data/maps/MtChimney/scripts.pory"
	walk_right
# 1002 "data/maps/MtChimney/scripts.pory"
	walk_right
# 1002 "data/maps/MtChimney/scripts.pory"
	walk_right
# 1002 "data/maps/MtChimney/scripts.pory"
	walk_right
# 1002 "data/maps/MtChimney/scripts.pory"
	walk_right
# 1002 "data/maps/MtChimney/scripts.pory"
	walk_right
# 1002 "data/maps/MtChimney/scripts.pory"
	walk_right
	step_end

# 1005 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_AquaGrunt7ApproachPlayer:
# 1006 "data/maps/MtChimney/scripts.pory"
	walk_right
# 1006 "data/maps/MtChimney/scripts.pory"
	walk_right
# 1006 "data/maps/MtChimney/scripts.pory"
	walk_right
# 1006 "data/maps/MtChimney/scripts.pory"
	walk_right
# 1006 "data/maps/MtChimney/scripts.pory"
	walk_right
# 1006 "data/maps/MtChimney/scripts.pory"
	walk_right
# 1006 "data/maps/MtChimney/scripts.pory"
	walk_right
# 1007 "data/maps/MtChimney/scripts.pory"
	walk_up
# 1008 "data/maps/MtChimney/scripts.pory"
	walk_in_place_right
	step_end

# 1011 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_AquaGrunt8ApproachPlayer:
# 1012 "data/maps/MtChimney/scripts.pory"
	walk_right
# 1012 "data/maps/MtChimney/scripts.pory"
	walk_right
# 1012 "data/maps/MtChimney/scripts.pory"
	walk_right
# 1012 "data/maps/MtChimney/scripts.pory"
	walk_right
# 1012 "data/maps/MtChimney/scripts.pory"
	walk_right
# 1012 "data/maps/MtChimney/scripts.pory"
	walk_right
# 1012 "data/maps/MtChimney/scripts.pory"
	walk_right
	step_end

# 1015 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExit:
# 1016 "data/maps/MtChimney/scripts.pory"
	walk_left
# 1016 "data/maps/MtChimney/scripts.pory"
	walk_left
# 1016 "data/maps/MtChimney/scripts.pory"
	walk_left
# 1016 "data/maps/MtChimney/scripts.pory"
	walk_left
# 1016 "data/maps/MtChimney/scripts.pory"
	walk_left
# 1016 "data/maps/MtChimney/scripts.pory"
	walk_left
# 1016 "data/maps/MtChimney/scripts.pory"
	walk_left
# 1016 "data/maps/MtChimney/scripts.pory"
	walk_left
	step_end

# 1019 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_AquaGrunt7Exit:
# 1020 "data/maps/MtChimney/scripts.pory"
	walk_in_place_down
# 1021 "data/maps/MtChimney/scripts.pory"
	walk_in_place_left
# 1022 "data/maps/MtChimney/scripts.pory"
	walk_left
# 1022 "data/maps/MtChimney/scripts.pory"
	walk_left
# 1022 "data/maps/MtChimney/scripts.pory"
	walk_left
# 1022 "data/maps/MtChimney/scripts.pory"
	walk_left
# 1022 "data/maps/MtChimney/scripts.pory"
	walk_left
# 1022 "data/maps/MtChimney/scripts.pory"
	walk_left
# 1022 "data/maps/MtChimney/scripts.pory"
	walk_left
# 1022 "data/maps/MtChimney/scripts.pory"
	walk_left
	step_end

# 1025 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_AquaGrunt8Exit:
# 1026 "data/maps/MtChimney/scripts.pory"
	walk_in_place_up
# 1027 "data/maps/MtChimney/scripts.pory"
	walk_in_place_left
# 1028 "data/maps/MtChimney/scripts.pory"
	walk_left
# 1028 "data/maps/MtChimney/scripts.pory"
	walk_left
# 1028 "data/maps/MtChimney/scripts.pory"
	walk_left
# 1028 "data/maps/MtChimney/scripts.pory"
	walk_left
# 1028 "data/maps/MtChimney/scripts.pory"
	walk_left
# 1028 "data/maps/MtChimney/scripts.pory"
	walk_left
# 1028 "data/maps/MtChimney/scripts.pory"
	walk_left
# 1028 "data/maps/MtChimney/scripts.pory"
	walk_left
	step_end

MtChimney_EventScript_ArchieGangOn_Text_0:
# 678 "data/maps/MtChimney/scripts.pory"
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: Get out of my blasted way, ye\nscurvy Team Magma knaves!\pOr face a keelhauling!$"

MtChimney_EventScript_MagmaAdminTabitha_Text_0:
# 773 "data/maps/MtChimney/scripts.pory"
	.string "{COLOR RED}Tabitha{COLOR DARK_GRAY}: The Boss is right this way!\pOh, I do hope that you can be shown\nTeam Magma's true power!$"

MtChimney_EventScript_MagmaAdminTabitha_Text_1:
# 785 "data/maps/MtChimney/scripts.pory"
	.string "{COLOR RED}Tabitha{COLOR DARK_GRAY}: Hyahyahya?!\pIt's you!\nYou're the one who tried to interrupt\lme, Tabitha, at Meteor Falls!\pD-d-do you intend to get in my way once\nmore?\pUnngh!\nYou're really…$"

MtChimney_EventScript_MagmaAdminTabitha_Text_2:
# 788 "data/maps/MtChimney/scripts.pory"
	.string "really, really, really, really, really,\nreally…$"

MtChimney_EventScript_MagmaAdminTabitha_Text_3:
# 792 "data/maps/MtChimney/scripts.pory"
	.string "really, really, really, really, really,\nreally, really, really, really, really…$"

MtChimney_EventScript_MagmaAdminTabitha_Text_4:
# 796 "data/maps/MtChimney/scripts.pory"
	.string "reeeallllyyyyy…\pan obnoxious child, aren't you?!$"

MtChimney_EventScript_MagmaAdminTabitha_Text_5:
# 802 "data/maps/MtChimney/scripts.pory"
	.string "Ahh… Ahh…$"

MtChimney_EventScript_MagmaAdminTabitha_Text_6:
# 806 "data/maps/MtChimney/scripts.pory"
	.string "I will…crush you.\pSo that you…never get in my way…again.$"

MtChimney_EventScript_MagmaAdminTabitha_Text_7:
# 809 "data/maps/MtChimney/scripts.pory"
	.string "I knew you would be strong.\pWhat a shame though!\nThe Meteorite we got from\lProfessor Whoever is already in our\lBoss's hands!\pWhere's the Boss, you ask?\nAh, yes, yes, right this way!\pOh, I do hope that you can be shown\nTeam Magma's true power!\pAhya!\nAhyahyahyahya!$"

MtChimney_EventScript_Maxie_Text_0:
# 867 "data/maps/MtChimney/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: The power contained in the\nMeteorite…\pIf we merge the explosive energy\ncontained within the planet's core\lwith the Meteorite's power…$"

MtChimney_EventScript_Maxie_Text_1:
# 874 "data/maps/MtChimney/scripts.pory"
	.string "Hm?\nWho are you?\p… … … … … …\n… … … … … …\pI'd heard Archie bemoaning a child who's\nbeen meddling in Team Aqua's affairs.\lIt must be you he meant.\pAnd, your presence here tells me that\nyou have defeated Tabitha.\pHmph.\nYou show true promise.\pFine.\nI will attempt to educate you.$"

MtChimney_EventScript_Maxie_Text_2:
# 876 "data/maps/MtChimney/scripts.pory"
	.string "Thousands of years ago, there lived\na most powerful being that was to be\lcapable of creating new lands on the\lplanet.\pThe power which we in Team Magma\nseek--\pThis power, which can expand the\navailable landmass, belongs to a\llegendary and super-ancient Pokémon.\pThough now it slumbers, having lost the\nsource of its power and been trapped\lin a deep sleep.$"

MtChimney_EventScript_Maxie_Text_3:
# 877 "data/maps/MtChimney/scripts.pory"
	.string "So what is it that we must do to\nawaken this slumbering giant?\pOur research has led us here, to\nMt. Chimney.\lYes, here…to this very Meteorite.\pIf we create the right conditions, we\nshould find ourselves able to alter\lthe Meteorite's qualities.\pYes, even into a Mega Stone.\pEven into a Key Stone.\pAnd, here at Mt. Chimney--\pHmph… I should not say too much.\nThat is the end of today's lesson.$"

MtChimney_EventScript_Maxie_Text_4:
# 880 "data/maps/MtChimney/scripts.pory"
	.string "Now then.\nI believe it is time we begin.\pThe time for the purge has come.\pAny fool standing in our way would be\nmet without mercy!\pI will bury you by my own hand.\pI hope you appreciate this honor!$"

MtChimney_EventScript_Maxie_Text_5:
# 885 "data/maps/MtChimney/scripts.pory"
	.string "Oh? So you repulsed the great Maxie in\nbattle.\lHaha… This is amusing!\pAn excellent start!\pThis time, permit me to unleash my full\nstrength!\pOnce you've tasted my Pokémon's Mega\nEvolved power, you will say good-bye\lto your last shred of hope!$"

MtChimney_EventScript_Maxie_Text_6:
# 892 "data/maps/MtChimney/scripts.pory"
	.string "Hm?$"

MtChimney_EventScript_Maxie_Text_7:
# 896 "data/maps/MtChimney/scripts.pory"
	.string "Yes, it's me.\p…\nOh?\pThen you've found it.\pI understand.\nI will come at once.$"

MtChimney_EventScript_Maxie_Text_8:
# 900 "data/maps/MtChimney/scripts.pory"
	.string "I am sorry to cut our battle short, but\nI'm afraid I must excuse myself.\pSuch rudeness demands reparation.\nTake this Meteorite with my apologies.\lYou may do with it what you like.$"

MtChimney_EventScript_Maxie_Text_9:
# 910 "data/maps/MtChimney/scripts.pory"
	.string "And I will not again forget the face of\nthe Trainer who managed to thwart me\lin battle!$"

MtChimney_EventScript_Maxie_Text_10:
# 938 "data/maps/MtChimney/scripts.pory"
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: Huh?\nIf it ain't that little scamp!\pBut blast that Maxie!\nHe just escaped us!\pAnd he just left behind the Meteorite\nthat he's been crazy about finding?$"

MtChimney_EventScript_Maxie_Text_11:
# 940 "data/maps/MtChimney/scripts.pory"
	.string "Can't be--!\pCould he have found out where the real\norbs are hidden?!\pThat sneaky little scientific\nso-and-so!\pI'm always left watching his bony\nbackside run two steps ahead of me!$"
