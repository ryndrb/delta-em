# 1 "data/maps/MossdeepCity/scripts.pory"

# 2 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_GRUNT_1, 13
# 3 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_GRUNT_2, 14
# 4 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_GRUNT_3, 15
# 5 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_GRUNT_4, 16
# 6 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_TABITHA, 17
# 7 "data/maps/MossdeepCity/scripts.pory"
.set LOCALID_SCOTT, 11
# 8 "data/maps/MossdeepCity/scripts.pory"

# 9 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_MapScripts::
# 10 "data/maps/MossdeepCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_OnTransition
# 11 "data/maps/MossdeepCity/scripts.pory"
	.byte 0
# 12 "data/maps/MossdeepCity/scripts.pory"

# 13 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_OnTransition:
# 14 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 15 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 16 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 17 "data/maps/MossdeepCity/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 18 "data/maps/MossdeepCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 19 "data/maps/MossdeepCity/scripts.pory"
	end
# 20 "data/maps/MossdeepCity/scripts.pory"

# 21 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_PokefanF::
# 22 "data/maps/MossdeepCity/scripts.pory"
	lock
# 23 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 24 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_PokefanFMagmaGone
# 25 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterReceivedLetter, MSGBOX_DEFAULT
# 26 "data/maps/MossdeepCity/scripts.pory"
	release
# 27 "data/maps/MossdeepCity/scripts.pory"
	end
# 28 "data/maps/MossdeepCity/scripts.pory"

# 29 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_PokefanFMagmaGone::
# 30 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterLaunchingRockets, MSGBOX_DEFAULT
# 31 "data/maps/MossdeepCity/scripts.pory"
	release
# 32 "data/maps/MossdeepCity/scripts.pory"
	end
# 33 "data/maps/MossdeepCity/scripts.pory"

# 34 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Sailor::
# 35 "data/maps/MossdeepCity/scripts.pory"
	lock
# 36 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 37 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_SailorMagmaGone
# 38 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_MossdeepTargetedByMagma, MSGBOX_DEFAULT
# 39 "data/maps/MossdeepCity/scripts.pory"
	release
# 40 "data/maps/MossdeepCity/scripts.pory"
	end
# 41 "data/maps/MossdeepCity/scripts.pory"

# 42 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_SailorMagmaGone::
# 43 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_FeelReliefOnLand, MSGBOX_DEFAULT
# 44 "data/maps/MossdeepCity/scripts.pory"
	release
# 45 "data/maps/MossdeepCity/scripts.pory"
	end
# 46 "data/maps/MossdeepCity/scripts.pory"

# 47 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_NinjaBoy::
# 48 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WailmerWatching, MSGBOX_NPC
# 49 "data/maps/MossdeepCity/scripts.pory"
	end
# 50 "data/maps/MossdeepCity/scripts.pory"

# 51 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ExpertM::
# 52 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_LifeNeedsSeaToLive, MSGBOX_NPC
# 53 "data/maps/MossdeepCity/scripts.pory"
	end
# 54 "data/maps/MossdeepCity/scripts.pory"

# 55 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Girl::
# 56 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_NiceIfWorldCoveredByFlowers, MSGBOX_NPC
# 57 "data/maps/MossdeepCity/scripts.pory"
	end
# 58 "data/maps/MossdeepCity/scripts.pory"

# 59 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Woman::
# 60 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpecialSpaceCenterRock, MSGBOX_NPC
# 61 "data/maps/MossdeepCity/scripts.pory"
	end
# 62 "data/maps/MossdeepCity/scripts.pory"

# 63 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_WhiteRock::
# 64 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_ItsAWhiteRock, MSGBOX_SIGN
# 65 "data/maps/MossdeepCity/scripts.pory"
	end
# 66 "data/maps/MossdeepCity/scripts.pory"

# 67 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_GymSign::
# 68 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_GymSign, MSGBOX_SIGN
# 69 "data/maps/MossdeepCity/scripts.pory"
	end
# 70 "data/maps/MossdeepCity/scripts.pory"

# 71 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_CitySign::
# 72 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_CitySign, MSGBOX_SIGN
# 73 "data/maps/MossdeepCity/scripts.pory"
	end
# 74 "data/maps/MossdeepCity/scripts.pory"

# 75 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_SpaceCenterSign::
# 76 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SpaceCenterSign, MSGBOX_SIGN
# 77 "data/maps/MossdeepCity/scripts.pory"
	end
# 78 "data/maps/MossdeepCity/scripts.pory"

# 79 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_VisitedMossdeep::
# 80 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_VISITED_MOSSDEEP_CITY
# 81 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 82 "data/maps/MossdeepCity/scripts.pory"
	end
# 83 "data/maps/MossdeepCity/scripts.pory"

# 84 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_TeamMagmaEnterSpaceCenter::
# 85 "data/maps/MossdeepCity/scripts.pory"
	lockall
# 86 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_TABITHA, MossdeepCity_Movement_TabithaGestureToSpaceCenter
# 87 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 88 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, MossdeepCity_Movement_GruntFaceSpaceCenter
# 89 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, MossdeepCity_Movement_GruntFaceSpaceCenter
# 90 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, MossdeepCity_Movement_GruntFaceSpaceCenter
# 91 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, MossdeepCity_Movement_GruntFaceSpaceCenter
# 92 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 93 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_TABITHA, MossdeepCity_Movement_TabithaEnterSpaceCenter
# 94 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, MossdeepCity_Movement_Grunt1EnterSpaceCenter
# 95 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, MossdeepCity_Movement_Grunt2EnterSpaceCenter
# 96 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, MossdeepCity_Movement_Grunt3EnterSpaceCenter
# 97 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, MossdeepCity_Movement_Grunt4EnterSpaceCenter
# 98 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 99 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_TABITHA
# 100 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 101 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 102 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 103 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_GRUNT_4
# 104 "data/maps/MossdeepCity/scripts.pory"
	delay 30
# 105 "data/maps/MossdeepCity/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 2
# 106 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 107 "data/maps/MossdeepCity/scripts.pory"
	releaseall
# 108 "data/maps/MossdeepCity/scripts.pory"
	end
# 109 "data/maps/MossdeepCity/scripts.pory"

# 110 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_TabithaGestureToSpaceCenter:
# 111 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 112 "data/maps/MossdeepCity/scripts.pory"
	walk_in_place_right
# 113 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 114 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 115 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 116 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 117 "data/maps/MossdeepCity/scripts.pory"
	walk_in_place_left
# 118 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 119 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 120 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 121 "data/maps/MossdeepCity/scripts.pory"

# 122 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_GruntFaceSpaceCenter:
# 123 "data/maps/MossdeepCity/scripts.pory"
	walk_in_place_right
# 124 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 125 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 126 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 127 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 128 "data/maps/MossdeepCity/scripts.pory"

# 129 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_TabithaEnterSpaceCenter:
# 130 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 131 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 132 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 133 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 134 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 135 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 136 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 137 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 138 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 139 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 140 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 141 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 142 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 143 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 144 "data/maps/MossdeepCity/scripts.pory"

# 145 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt1EnterSpaceCenter:
# 146 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 147 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 148 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 149 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 150 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 151 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 152 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 153 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 154 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 155 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 156 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 157 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 158 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 159 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 160 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 161 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 162 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 163 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 164 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 165 "data/maps/MossdeepCity/scripts.pory"

# 166 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt2EnterSpaceCenter:
# 167 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 168 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 169 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 170 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 171 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 172 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 173 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 174 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 175 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 176 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 177 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 178 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 179 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 180 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 181 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 182 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 183 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 184 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 185 "data/maps/MossdeepCity/scripts.pory"

# 186 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt3EnterSpaceCenter:
# 187 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 188 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 189 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 190 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 191 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 192 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 193 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 194 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 195 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 196 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 197 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 198 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 199 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 200 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 201 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 202 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 203 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 204 "data/maps/MossdeepCity/scripts.pory"

# 205 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Grunt4EnterSpaceCenter:
# 206 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 207 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 208 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 209 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 210 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 211 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 212 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 213 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 214 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 215 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 216 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 217 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 218 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 219 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 220 "data/maps/MossdeepCity/scripts.pory"
	walk_right
# 221 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 222 "data/maps/MossdeepCity/scripts.pory"

# 223 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Man::
# 224 "data/maps/MossdeepCity/scripts.pory"
	lock
# 225 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 226 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SurfExhilarating, MSGBOX_DEFAULT
# 227 "data/maps/MossdeepCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 228 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 229 "data/maps/MossdeepCity/scripts.pory"
	release
# 230 "data/maps/MossdeepCity/scripts.pory"
	end
# 231 "data/maps/MossdeepCity/scripts.pory"

# 232 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_KingsRockBoy::
# 233 "data/maps/MossdeepCity/scripts.pory"
	lock
# 234 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 235 "data/maps/MossdeepCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_KINGS_ROCK, MossdeepCity_EventScript_ReceivedKingsRock
# 236 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WantKingsRockStevenGaveMe, MSGBOX_YESNO
# 237 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_EventScript_DeclineKingsRock
# 238 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_YouCanKeepIt, MSGBOX_DEFAULT
# 239 "data/maps/MossdeepCity/scripts.pory"
	giveitem ITEM_KINGS_ROCK
# 240 "data/maps/MossdeepCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 241 "data/maps/MossdeepCity/scripts.pory"
    msgbox MossdeepCity_Text_IsItFunCollectingRocks, MSGBOX_DEFAULT
# 242 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_RECEIVED_KINGS_ROCK
# 243 "data/maps/MossdeepCity/scripts.pory"
	release
# 244 "data/maps/MossdeepCity/scripts.pory"
	end
# 245 "data/maps/MossdeepCity/scripts.pory"

# 246 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ReceivedKingsRock::
# 247 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_IsItFunCollectingRocks, MSGBOX_DEFAULT
# 248 "data/maps/MossdeepCity/scripts.pory"
	release
# 249 "data/maps/MossdeepCity/scripts.pory"
	end
# 250 "data/maps/MossdeepCity/scripts.pory"

# 251 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_DeclineKingsRock::
# 252 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_WhatToDoWithWeirdRock, MSGBOX_DEFAULT
# 253 "data/maps/MossdeepCity/scripts.pory"
	release
# 254 "data/maps/MossdeepCity/scripts.pory"
	end
# 255 "data/maps/MossdeepCity/scripts.pory"

# 256 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_BlackBelt::
# 257 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_SootopolisNewGymLeader, MSGBOX_NPC
# 258 "data/maps/MossdeepCity/scripts.pory"
	end
# 259 "data/maps/MossdeepCity/scripts.pory"

# 260 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_Scott::
# 261 "data/maps/MossdeepCity/scripts.pory"
	lock
# 262 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 263 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_Text_ScottSomethingWrongWithTown, MSGBOX_DEFAULT
# 264 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 265 "data/maps/MossdeepCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MossdeepCity_EventScript_ScottExitNorth
# 266 "data/maps/MossdeepCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MossdeepCity_EventScript_ScottExitEast
# 267 "data/maps/MossdeepCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 268 "data/maps/MossdeepCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 269 "data/maps/MossdeepCity/scripts.pory"
	release
# 270 "data/maps/MossdeepCity/scripts.pory"
	end
# 271 "data/maps/MossdeepCity/scripts.pory"

# 272 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ScottExitNorth::
# 273 "data/maps/MossdeepCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
# 274 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_SCOTT, MossdeepCity_Movement_ScottExitNorth
# 275 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 276 "data/maps/MossdeepCity/scripts.pory"
	return
# 277 "data/maps/MossdeepCity/scripts.pory"

# 278 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_EventScript_ScottExitEast::
# 279 "data/maps/MossdeepCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
# 280 "data/maps/MossdeepCity/scripts.pory"
	applymovement LOCALID_SCOTT, MossdeepCity_Movement_ScottExitEast
# 281 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 0
# 282 "data/maps/MossdeepCity/scripts.pory"
	return
# 283 "data/maps/MossdeepCity/scripts.pory"

# 284 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_PlayerWatchScottExit:
# 285 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 286 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 287 "data/maps/MossdeepCity/scripts.pory"
	walk_in_place_faster_left
# 288 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 289 "data/maps/MossdeepCity/scripts.pory"

# 290 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_ScottExitNorth:
# 291 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 292 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 293 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 294 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 295 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 296 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 297 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 298 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 299 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 300 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 301 "data/maps/MossdeepCity/scripts.pory"

# 302 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_ScottExitEast:
# 303 "data/maps/MossdeepCity/scripts.pory"
	walk_down
# 304 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 305 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 306 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 307 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 308 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 309 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 310 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 311 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 312 "data/maps/MossdeepCity/scripts.pory"
	walk_left
# 313 "data/maps/MossdeepCity/scripts.pory"
	step_end
# 314 "data/maps/MossdeepCity/scripts.pory"

# 315 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WantKingsRockStevenGaveMe:
# 316 "data/maps/MossdeepCity/scripts.pory"
	.string "I got this from Steven, but I don't\nknow what it's good for.\pI think it's called King's Rock.\nDo you want it?$"
# 317 "data/maps/MossdeepCity/scripts.pory"

# 318 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_YouCanKeepIt:
# 319 "data/maps/MossdeepCity/scripts.pory"
	.string "Why would you want it?\nYou're weird.\pYou can keep it, but don't tell Steven I\ngave it away.$"
# 320 "data/maps/MossdeepCity/scripts.pory"

# 321 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_IsItFunCollectingRocks:
# 322 "data/maps/MossdeepCity/scripts.pory"
    .string "Is it really that fun collecting rocks?\nI don't get it.$"
# 323 "data/maps/MossdeepCity/scripts.pory"

# 324 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WhatToDoWithWeirdRock:
# 325 "data/maps/MossdeepCity/scripts.pory"
	.string "Yeah, you think so, too!\pWhat are you supposed to do with some\nweird rock?$"
# 326 "data/maps/MossdeepCity/scripts.pory"

# 327 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_WailmerWatching:
# 328 "data/maps/MossdeepCity/scripts.pory"
	.string "Around Mossdeep, you can see wild\nWailmer.\pIt's called, uh…\nWhat is it…\pWai, Wai, Wai…\pWailmer watching!$"
# 329 "data/maps/MossdeepCity/scripts.pory"

# 330 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterReceivedLetter:
# 331 "data/maps/MossdeepCity/scripts.pory"
	.string "The island's Space Center has been\n"
# 332 "data/maps/MossdeepCity/scripts.pory"
	.string "launching huge rockets.\p"
# 333 "data/maps/MossdeepCity/scripts.pory"
	.string "There's been some kind of an uproar\n"
# 334 "data/maps/MossdeepCity/scripts.pory"
	.string "over a letter they received recently.$"
# 335 "data/maps/MossdeepCity/scripts.pory"

# 336 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterLaunchingRockets:
# 337 "data/maps/MossdeepCity/scripts.pory"
	.string "The island's Space Center has been\n"
# 338 "data/maps/MossdeepCity/scripts.pory"
	.string "launching huge rockets.$"
# 339 "data/maps/MossdeepCity/scripts.pory"

# 340 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_MossdeepTargetedByMagma:
# 341 "data/maps/MossdeepCity/scripts.pory"
	.string "I heard from a Sailor buddy that\n"
# 342 "data/maps/MossdeepCity/scripts.pory"
	.string "Team Aqua set up shop in Lilycove.\p"
# 343 "data/maps/MossdeepCity/scripts.pory"
	.string "I also heard that someone came along\n"
# 344 "data/maps/MossdeepCity/scripts.pory"
	.string "and wiped the floor with them!\p"
# 345 "data/maps/MossdeepCity/scripts.pory"
	.string "But Mossdeep here's been targeted\n"
# 346 "data/maps/MossdeepCity/scripts.pory"
	.string "by that Team Magma.\p"
# 347 "data/maps/MossdeepCity/scripts.pory"
	.string "If you want to know what they're up to,\n"
# 348 "data/maps/MossdeepCity/scripts.pory"
	.string "go visit the Space Center.$"
# 349 "data/maps/MossdeepCity/scripts.pory"

# 350 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_FeelReliefOnLand:
# 351 "data/maps/MossdeepCity/scripts.pory"
	.string "I'm a Sailor, so the sea's obviously\n"
# 352 "data/maps/MossdeepCity/scripts.pory"
	.string "more important to me.\p"
# 353 "data/maps/MossdeepCity/scripts.pory"
	.string "But you know? When I get back on land\n"
# 354 "data/maps/MossdeepCity/scripts.pory"
	.string "after a long voyage, I do feel relief!$"
# 355 "data/maps/MossdeepCity/scripts.pory"

# 356 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_NiceIfWorldCoveredByFlowers:
# 357 "data/maps/MossdeepCity/scripts.pory"
	.string "Wouldn't it be nice?\p"
# 358 "data/maps/MossdeepCity/scripts.pory"
	.string "If the whole world was covered in\n"
# 359 "data/maps/MossdeepCity/scripts.pory"
	.string "plants and flowers like this island?$"
# 360 "data/maps/MossdeepCity/scripts.pory"

# 361 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_LifeNeedsSeaToLive:
# 362 "data/maps/MossdeepCity/scripts.pory"
	.string "All life needs the sea to live, even\n"
# 363 "data/maps/MossdeepCity/scripts.pory"
	.string "though it makes its home on the land.\p"
# 364 "data/maps/MossdeepCity/scripts.pory"
	.string "Life, having run its course, becomes\n"
# 365 "data/maps/MossdeepCity/scripts.pory"
	.string "soil and returns to the land.\p"
# 366 "data/maps/MossdeepCity/scripts.pory"
	.string "And the sea is always connected to\n"
# 367 "data/maps/MossdeepCity/scripts.pory"
	.string "the land.\p"
# 368 "data/maps/MossdeepCity/scripts.pory"
	.string "Yes, like the very shoreline here.$"
# 369 "data/maps/MossdeepCity/scripts.pory"

# 370 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SurfExhilarating:
# 371 "data/maps/MossdeepCity/scripts.pory"
	.string "A voyage on a ship is fine.\p"
# 372 "data/maps/MossdeepCity/scripts.pory"
	.string "But crossing the sea with Pokémon\n"
# 373 "data/maps/MossdeepCity/scripts.pory"
	.string "using Surf…\p"
# 374 "data/maps/MossdeepCity/scripts.pory"
	.string "Now that's an exhilarating trip!\n"
# 375 "data/maps/MossdeepCity/scripts.pory"
	.string "Wouldn't you agree, youngster?$"
# 376 "data/maps/MossdeepCity/scripts.pory"

# 377 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpecialSpaceCenterRock:
# 378 "data/maps/MossdeepCity/scripts.pory"
	.string "This rock has a special meaning to\n"
# 379 "data/maps/MossdeepCity/scripts.pory"
	.string "the people at the Space Center.\p"
# 380 "data/maps/MossdeepCity/scripts.pory"
	.string "They put it here as their wish for\n"
# 381 "data/maps/MossdeepCity/scripts.pory"
	.string "their rockets to fly safely.\p"
# 382 "data/maps/MossdeepCity/scripts.pory"
	.string "When you make a wish, what do you use?\n"
# 383 "data/maps/MossdeepCity/scripts.pory"
	.string "Do you wish upon a star?\p"
# 384 "data/maps/MossdeepCity/scripts.pory"
	.string "I use a wish tag to make it happen.\n"
# 385 "data/maps/MossdeepCity/scripts.pory"
	.string "That's what I do.$"
# 386 "data/maps/MossdeepCity/scripts.pory"

# 387 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_ItsAWhiteRock:
# 388 "data/maps/MossdeepCity/scripts.pory"
	.string "It's a white rock.$"
# 389 "data/maps/MossdeepCity/scripts.pory"

# 390 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_GymSign:
# 391 "data/maps/MossdeepCity/scripts.pory"
	.string "Mossdeep City Pokémon Gym\n"
# 392 "data/maps/MossdeepCity/scripts.pory"
	.string "Leaders: Liza & Tate\p"
# 393 "data/maps/MossdeepCity/scripts.pory"
	.string "“The mystic combination!”$"
# 394 "data/maps/MossdeepCity/scripts.pory"

# 395 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_CitySign:
# 396 "data/maps/MossdeepCity/scripts.pory"
	.string "Mossdeep City\n"
# 397 "data/maps/MossdeepCity/scripts.pory"
	.string "“Our slogan: Cherish Pokémon!”$"
# 398 "data/maps/MossdeepCity/scripts.pory"

# 399 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SpaceCenterSign:
# 400 "data/maps/MossdeepCity/scripts.pory"
	.string "Mossdeep Space Center\n"
# 401 "data/maps/MossdeepCity/scripts.pory"
	.string "“The closest place to space.”$"
# 402 "data/maps/MossdeepCity/scripts.pory"

# 403 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_ScottSomethingWrongWithTown:
# 404 "data/maps/MossdeepCity/scripts.pory"
	.string "{COLOR RED}Scott{COLOR DARK_GRAY}: {PLAYER}, feeling good?\nI'm doing great!\pI'd heard Mossdeep's Gym Leaders are\npretty strong, so I decided to come\ltake a look-see for myself.\pBut there's something wrong about\nthis town.\pPeople are going on about a warning\nletter and the Space Center…\pI don't think it concerns me in any way,\nthough.$"
# 405 "data/maps/MossdeepCity/scripts.pory"

# 406 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Text_SootopolisNewGymLeader:
# 407 "data/maps/MossdeepCity/scripts.pory"
	.string "Ahh… It feels great letting the waves\n"
# 408 "data/maps/MossdeepCity/scripts.pory"
	.string "wash over my feet…\p"
# 409 "data/maps/MossdeepCity/scripts.pory"
	.string "Speaking of the waves, you know that\n"
# 410 "data/maps/MossdeepCity/scripts.pory"
	.string "island city Sootopolis?\p"
# 411 "data/maps/MossdeepCity/scripts.pory"
	.string "I think the Gym there had a new\n"
# 412 "data/maps/MossdeepCity/scripts.pory"
	.string "Leader come in.\p"
# 413 "data/maps/MossdeepCity/scripts.pory"
	.string "People tell me the new Leader once\n"
# 414 "data/maps/MossdeepCity/scripts.pory"
	.string "mentored Wallace.$"

MossdeepCity_EventScript_DynamicPunchBlackBelt::
# 420 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_DynamicPunchBlackBelt_Text_0
# 421 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 422 "data/maps/MossdeepCity/scripts.pory"
	release
	end


MossdeepCity_EventScript_TMExpandingForce::
# 428 "data/maps/MossdeepCity/scripts.pory"
	lock
# 429 "data/maps/MossdeepCity/scripts.pory"
	delay 8
# 430 "data/maps/MossdeepCity/scripts.pory"
	faceplayer
# 431 "data/maps/MossdeepCity/scripts.pory"
	checkitem ITEM_TM_EXPANDING_FORCE, 1
# 432 "data/maps/MossdeepCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MossdeepCity_EventScript_TMExpandingForce_2
MossdeepCity_EventScript_TMExpandingForce_1:
# 454 "data/maps/MossdeepCity/scripts.pory"
	applymovement 18, MossdeepCity_Movement_EFGuy_1
# 455 "data/maps/MossdeepCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Movement_Player_1
# 456 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 18
# 457 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_TMExpandingForce_Text_4
# 458 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 459 "data/maps/MossdeepCity/scripts.pory"
	applymovement 18, MossdeepCity_Movement_EFGuy_2
# 460 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 18
# 461 "data/maps/MossdeepCity/scripts.pory"
	removeobject 18
# 462 "data/maps/MossdeepCity/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_EF_GUY
# 463 "data/maps/MossdeepCity/scripts.pory"
	release
	end

MossdeepCity_EventScript_TMExpandingForce_2:
# 433 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_TMExpandingForce_Text_0
# 434 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 435 "data/maps/MossdeepCity/scripts.pory"
	delay 8
# 436 "data/maps/MossdeepCity/scripts.pory"
	applymovement 18, Common_Movement_WalkInPlaceDown
# 437 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 18
# 438 "data/maps/MossdeepCity/scripts.pory"
	delay 8
# 439 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_TMExpandingForce_Text_1
# 440 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 441 "data/maps/MossdeepCity/scripts.pory"
	applymovement 18, Common_Movement_WalkInPlaceLeft
# 442 "data/maps/MossdeepCity/scripts.pory"
	applymovement 18, Common_Movement_ExclamationMark
# 443 "data/maps/MossdeepCity/scripts.pory"
	waitmovement 18
# 444 "data/maps/MossdeepCity/scripts.pory"
	message MossdeepCity_EventScript_TMExpandingForce_Text_2
# 445 "data/maps/MossdeepCity/scripts.pory"
	closemessage
# 446 "data/maps/MossdeepCity/scripts.pory"
	delay 16
# 447 "data/maps/MossdeepCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 448 "data/maps/MossdeepCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 449 "data/maps/MossdeepCity/scripts.pory"
	delay 8
# 450 "data/maps/MossdeepCity/scripts.pory"
	giveitem ITEM_TM_EXPANDING_FORCE
# 451 "data/maps/MossdeepCity/scripts.pory"
	msgbox MossdeepCity_EventScript_TMExpandingForce_Text_3
# 452 "data/maps/MossdeepCity/scripts.pory"
	closemessage
	goto MossdeepCity_EventScript_TMExpandingForce_1


# 467 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_EFGuy_1:
# 468 "data/maps/MossdeepCity/scripts.pory"
	jump_in_place_left
# 469 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 470 "data/maps/MossdeepCity/scripts.pory"
	walk_fast_left
# 471 "data/maps/MossdeepCity/scripts.pory"
	walk_fast_up
# 471 "data/maps/MossdeepCity/scripts.pory"
	walk_fast_up
# 472 "data/maps/MossdeepCity/scripts.pory"
	walk_fast_left
# 472 "data/maps/MossdeepCity/scripts.pory"
	walk_fast_left
# 473 "data/maps/MossdeepCity/scripts.pory"
	walk_in_place_down
	step_end

# 476 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_EFGuy_2:
# 477 "data/maps/MossdeepCity/scripts.pory"
	walk_in_place_left
# 478 "data/maps/MossdeepCity/scripts.pory"
	walk_in_place_down
# 479 "data/maps/MossdeepCity/scripts.pory"
	walk_in_place_up
# 480 "data/maps/MossdeepCity/scripts.pory"
	walk_in_place_right
# 481 "data/maps/MossdeepCity/scripts.pory"
	delay_8
# 482 "data/maps/MossdeepCity/scripts.pory"
	jump_in_place_right
# 482 "data/maps/MossdeepCity/scripts.pory"
	jump_in_place_right
# 483 "data/maps/MossdeepCity/scripts.pory"
	walk_fast_left
# 483 "data/maps/MossdeepCity/scripts.pory"
	walk_fast_left
# 483 "data/maps/MossdeepCity/scripts.pory"
	walk_fast_left
# 483 "data/maps/MossdeepCity/scripts.pory"
	walk_fast_left
# 483 "data/maps/MossdeepCity/scripts.pory"
	walk_fast_left
# 483 "data/maps/MossdeepCity/scripts.pory"
	walk_fast_left
# 483 "data/maps/MossdeepCity/scripts.pory"
	walk_fast_left
	step_end

# 486 "data/maps/MossdeepCity/scripts.pory"
MossdeepCity_Movement_Player_1:
# 487 "data/maps/MossdeepCity/scripts.pory"
	lock_facing_direction
# 488 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 488 "data/maps/MossdeepCity/scripts.pory"
	delay_16
# 489 "data/maps/MossdeepCity/scripts.pory"
	walk_fast_left
# 490 "data/maps/MossdeepCity/scripts.pory"
	unlock_facing_direction
# 491 "data/maps/MossdeepCity/scripts.pory"
	walk_in_place_up
	step_end

MossdeepCity_EventScript_DynamicPunchBlackBelt_Text_0:
# 420 "data/maps/MossdeepCity/scripts.pory"
	.string "I can't do this anymore!\pIt's utterly hopeless!\pI'm a Fighting-type Trainer, so I\ncan't win at the Mossdeep Gym no\lmatter how hard I try!\pArgh! Punch! Punch! Punch!\nPunch! Punch! Punch!\pWhat, don't look at me that way!\nI'm only hitting the ground!$"

MossdeepCity_EventScript_TMExpandingForce_Text_0:
# 433 "data/maps/MossdeepCity/scripts.pory"
	.string "Ahh… y-you feel it too, don't you?\pYes, yes… the tremors… the whispers!\pWhispers from beyond… THE STARS!\pThey're always calling--calling to\nthose who can hear!\pCan you hear them!? The cosmos… IT\nCALLS!$"

MossdeepCity_EventScript_TMExpandingForce_Text_1:
# 439 "data/maps/MossdeepCity/scripts.pory"
	.string "Ke ke ke…\pKE KE… KE!\pThe force--it's expanding!\nIt's growing!\pIt will consume EVERYTHING!\nEverything in its path… Ha ha!\pCan you see it? Can you FEEL it!?$"

MossdeepCity_EventScript_TMExpandingForce_Text_2:
# 444 "data/maps/MossdeepCity/scripts.pory"
	.string "Hah!\pAnd you--you seek to control it, don't\nyou?\pYes… YES! You're not like the others…\pYou SEE, don't you!?\nYOU SEE EVERYTHING!$"

MossdeepCity_EventScript_TMExpandingForce_Text_3:
# 451 "data/maps/MossdeepCity/scripts.pory"
	.string "Take it…!\pExpanding Force… A power… A force\nthat bends the universe!\pBEND IT TO YOUR WILL!\pBut beware… Oh, beware…\nEvery time you use it…\lYOU GET CLOSER!\lCloser to the whispers…\p…to the void… TO THE TRUTH THEY\nHIDE!\pHA HA HA!$"

MossdeepCity_EventScript_TMExpandingForce_Text_4:
# 457 "data/maps/MossdeepCity/scripts.pory"
	.string "Ke ke ke...$"
