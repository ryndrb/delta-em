# 1 "data/maps/DewfordTown/scripts.pory"

# 2 "data/maps/DewfordTown/scripts.pory"
@ Sailing to and from Dewford uses local IDs from different maps
# 3 "data/maps/DewfordTown/scripts.pory"
@ e.g. Route 104's sail to Dewford script references local IDs from Dewford's map
# 4 "data/maps/DewfordTown/scripts.pory"
@ All of these local IDs are labeled here
# 5 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BRINEY_DEWFORD, 2
# 6 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BOAT_DEWFORD, 4
# 7 "data/maps/DewfordTown/scripts.pory"

# 8 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BOAT_R109, 1
# 9 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BRINEY_R109, 2
# 10 "data/maps/DewfordTown/scripts.pory"

# 11 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BOAT_R104, 7
# 12 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BRINEY_R104, 8
# 13 "data/maps/DewfordTown/scripts.pory"

# 14 "data/maps/DewfordTown/scripts.pory"
DewfordTown_MapScripts::
# 15 "data/maps/DewfordTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_OnTransition
# 16 "data/maps/DewfordTown/scripts.pory"
	.byte 0
# 17 "data/maps/DewfordTown/scripts.pory"

# 18 "data/maps/DewfordTown/scripts.pory"
DewfordTown_OnTransition:
# 19 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_VISITED_DEWFORD_TOWN
# 20 "data/maps/DewfordTown/scripts.pory"
	end
# 21 "data/maps/DewfordTown/scripts.pory"

# 22 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Briney::
# 23 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_Briney_Continue
# 24 "data/maps/DewfordTown/scripts.pory"
	end
# 25 "data/maps/DewfordTown/scripts.pory"

# 26 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ChoosePetalburg::
# 27 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_PetalburgWereSettingSail, MSGBOX_DEFAULT
# 28 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 29 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToPetalburg
# 30 "data/maps/DewfordTown/scripts.pory"
	release
# 31 "data/maps/DewfordTown/scripts.pory"
	end
# 32 "data/maps/DewfordTown/scripts.pory"

# 33 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ChooseSlateport::
# 34 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_SlateportWereSettingSail, MSGBOX_DEFAULT
# 35 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 36 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToSlateport
# 37 "data/maps/DewfordTown/scripts.pory"
	release
# 38 "data/maps/DewfordTown/scripts.pory"
	end
# 39 "data/maps/DewfordTown/scripts.pory"

# 40 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_CancelSailSelect::
# 41 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_JustTellMeWhenYouNeedToSetSail, MSGBOX_DEFAULT
# 42 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 43 "data/maps/DewfordTown/scripts.pory"
	release
# 44 "data/maps/DewfordTown/scripts.pory"
	end
# 45 "data/maps/DewfordTown/scripts.pory"

# 46 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ReturnToPetalburgPrompt::
# 47 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_SetSailBackToPetalburg, MSGBOX_YESNO
# 48 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_SailBackToPetalburg
# 49 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GoDeliverIllBeWaiting, MSGBOX_DEFAULT
# 50 "data/maps/DewfordTown/scripts.pory"
	release
# 51 "data/maps/DewfordTown/scripts.pory"
	end
# 52 "data/maps/DewfordTown/scripts.pory"

# 53 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailBackToPetalburg::
# 54 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_PetalburgWereSettingSail2, MSGBOX_DEFAULT
# 55 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 56 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToPetalburg
# 57 "data/maps/DewfordTown/scripts.pory"
	end
# 58 "data/maps/DewfordTown/scripts.pory"

# 59 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Woman::
# 60 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TinyIslandCommunity, MSGBOX_NPC
# 61 "data/maps/DewfordTown/scripts.pory"
	end
# 62 "data/maps/DewfordTown/scripts.pory"

# 63 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_TownSign::
# 64 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TownSign, MSGBOX_SIGN
# 65 "data/maps/DewfordTown/scripts.pory"
	end
# 66 "data/maps/DewfordTown/scripts.pory"

# 67 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GymSign::
# 68 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GymSign, MSGBOX_SIGN
# 69 "data/maps/DewfordTown/scripts.pory"
	end
# 70 "data/maps/DewfordTown/scripts.pory"

# 71 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_HallSign::
# 72 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_HallSign, MSGBOX_SIGN
# 73 "data/maps/DewfordTown/scripts.pory"
	end
# 74 "data/maps/DewfordTown/scripts.pory"

# 75 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailToPetalburg::
# 76 "data/maps/DewfordTown/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 77 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 78 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN, 0
# 79 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, DewfordTown_Movement_BrineyBoardBoat
# 80 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 81 "data/maps/DewfordTown/scripts.pory"
	removeobject LOCALID_BRINEY_DEWFORD
# 82 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
# 83 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 84 "data/maps/DewfordTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 85 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 86 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BOAT_DEWFORD, DewfordTown_Movement_SailToPetalburg
# 87 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_SailToPetalburg
# 88 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 89 "data/maps/DewfordTown/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 90 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 91 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_ExitBoatPetalburg
# 92 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 93 "data/maps/DewfordTown/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 94 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 95 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 96 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 97 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 98 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_BOAT_DEWFORD, MAP_DEWFORD_TOWN
# 99 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 2
# 100 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 101 "data/maps/DewfordTown/scripts.pory"
	warp MAP_ROUTE104_MR_BRINEYS_HOUSE, 5, 4
# 102 "data/maps/DewfordTown/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 103 "data/maps/DewfordTown/scripts.pory"
	waitstate
# 104 "data/maps/DewfordTown/scripts.pory"
	release
# 105 "data/maps/DewfordTown/scripts.pory"
	end
# 106 "data/maps/DewfordTown/scripts.pory"

# 107 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailToSlateport::
# 108 "data/maps/DewfordTown/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 109 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 110 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN, 1
# 111 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, DewfordTown_Movement_BrineyBoardBoat
# 112 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 113 "data/maps/DewfordTown/scripts.pory"
	removeobject LOCALID_BRINEY_DEWFORD
# 114 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
# 115 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 116 "data/maps/DewfordTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 117 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 118 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BOAT_DEWFORD, DewfordTown_Movement_SailToSlateport
# 119 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_SailToSlateport
# 120 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 121 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 122 "data/maps/DewfordTown/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
# 123 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_ExitBoatSlateport
# 124 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 125 "data/maps/DewfordTown/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_R109, 21, 26
# 126 "data/maps/DewfordTown/scripts.pory"
	addobject LOCALID_BRINEY_R109
# 127 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109, 0
# 128 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BRINEY_R109, DewfordTown_Movement_BrineyExitBoat
# 129 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 130 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY
# 131 "data/maps/DewfordTown/scripts.pory"
	addobject LOCALID_BOAT_R109
# 132 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 133 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 134 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_BOAT_DEWFORD, MAP_DEWFORD_TOWN
# 135 "data/maps/DewfordTown/scripts.pory"
	call_if_unset FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateportDeliverGoods
# 136 "data/maps/DewfordTown/scripts.pory"
	call_if_set FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateport
# 137 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 138 "data/maps/DewfordTown/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 139 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 140 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109
# 141 "data/maps/DewfordTown/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_R109
# 142 "data/maps/DewfordTown/scripts.pory"
	release
# 143 "data/maps/DewfordTown/scripts.pory"
	end
# 144 "data/maps/DewfordTown/scripts.pory"

# 145 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_LandedSlateportDeliverGoods::
# 146 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInSlateportDeliverGoods, MSGBOX_DEFAULT
# 147 "data/maps/DewfordTown/scripts.pory"
	return
# 148 "data/maps/DewfordTown/scripts.pory"

# 149 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_LandedSlateport::
# 150 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInSlateport, MSGBOX_DEFAULT
# 151 "data/maps/DewfordTown/scripts.pory"
	return
# 152 "data/maps/DewfordTown/scripts.pory"

# 153 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_SailToPetalburg:
# 154 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 155 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 156 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 157 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 158 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 159 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 160 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 161 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 162 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 163 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 164 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 165 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 166 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 167 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 168 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 169 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 170 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 171 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 172 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 173 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 174 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 175 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 176 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 177 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 178 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 179 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 180 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 181 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 182 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 183 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 184 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 185 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 186 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 187 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 188 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 189 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 190 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 191 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 192 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 193 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 194 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 195 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 196 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 197 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 198 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 199 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 200 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 201 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 202 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 203 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 204 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 205 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 206 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 207 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 208 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 209 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 210 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 211 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 212 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 213 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 214 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 215 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 216 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 217 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 218 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 219 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 220 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 221 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 222 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 223 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 224 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 225 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 226 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 227 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 228 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 229 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 230 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 231 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 232 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 233 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 234 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 235 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 236 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 237 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 238 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 239 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 240 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 241 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 242 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 243 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 244 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 245 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 246 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 247 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 248 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 249 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 250 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 251 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 252 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 253 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 254 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 255 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 256 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 257 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 258 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 259 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 260 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 261 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 262 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 263 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 264 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 265 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 266 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 267 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 268 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 269 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 270 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 271 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 272 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 273 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 274 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 275 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 276 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 277 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 278 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 279 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 280 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 281 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 282 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 283 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 284 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 285 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 286 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 287 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 288 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 289 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 290 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 291 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 292 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 293 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 294 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 295 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 296 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 297 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 298 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 299 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 300 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 301 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 302 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 303 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 304 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 305 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 306 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 307 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 308 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 309 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 310 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 311 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 312 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 313 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 314 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 315 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 316 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 317 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 318 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 319 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 320 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 321 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 322 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 323 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 324 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 325 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 326 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 327 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 328 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 329 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 330 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 331 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 332 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 333 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 334 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 335 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 336 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 337 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 338 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 339 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 340 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 341 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 342 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 343 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 344 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 345 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 346 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 347 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 348 "data/maps/DewfordTown/scripts.pory"
	step_end
# 349 "data/maps/DewfordTown/scripts.pory"

# 350 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_SailToSlateport:
# 351 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 352 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 353 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 354 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 355 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 356 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 357 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 358 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 359 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 360 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 361 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 362 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 363 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 364 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 365 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 366 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 367 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 368 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 369 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 370 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 371 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 372 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 373 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 374 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 375 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 376 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 377 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 378 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 379 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 380 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 381 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 382 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 383 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 384 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 385 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 386 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 387 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 388 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 389 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 390 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 391 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 392 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 393 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 394 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 395 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 396 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 397 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 398 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 399 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 400 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 401 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 402 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 403 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 404 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 405 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 406 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 407 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 408 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 409 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 410 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 411 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 412 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 413 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 414 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 415 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 416 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 417 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 418 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 419 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 420 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 421 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 422 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 423 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 424 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 425 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 426 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 427 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 428 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 429 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 430 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 431 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 432 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 433 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 434 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 435 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 436 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 437 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 438 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 439 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 440 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 441 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 442 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 443 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 444 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 445 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 446 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 447 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 448 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 449 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 450 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 451 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 452 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 453 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 454 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 455 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 456 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 457 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 458 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 459 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 460 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 461 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 462 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 463 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 464 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 465 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 466 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 467 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 468 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 469 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 470 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 471 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 472 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 473 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 474 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 475 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 476 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 477 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 478 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 479 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 480 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 481 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 482 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 483 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 484 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 485 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 486 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 487 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 488 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 489 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 490 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 491 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 492 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 493 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 494 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 495 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 496 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 497 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 498 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 499 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 500 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 501 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 502 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 503 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 504 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 505 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 506 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 507 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 508 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 509 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 510 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 511 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 512 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 513 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 514 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 515 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 516 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 517 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 518 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 519 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 520 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 521 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 522 "data/maps/DewfordTown/scripts.pory"
	step_end
# 523 "data/maps/DewfordTown/scripts.pory"

# 524 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_PlayerBoardBoat:
# 525 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 526 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 527 "data/maps/DewfordTown/scripts.pory"
	step_end
# 528 "data/maps/DewfordTown/scripts.pory"

# 529 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_ExitBoatPetalburg:
# 530 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 531 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 532 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 533 "data/maps/DewfordTown/scripts.pory"
	step_end
# 534 "data/maps/DewfordTown/scripts.pory"

# 535 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_ExitBoatSlateport:
# 536 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 537 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 538 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 539 "data/maps/DewfordTown/scripts.pory"
	walk_in_place_faster_down
# 540 "data/maps/DewfordTown/scripts.pory"
	step_end
# 541 "data/maps/DewfordTown/scripts.pory"

# 542 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_BrineyBoardBoat:
# 543 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 544 "data/maps/DewfordTown/scripts.pory"
	step_end
# 545 "data/maps/DewfordTown/scripts.pory"

# 546 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_BrineyExitBoat:
# 547 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 548 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 549 "data/maps/DewfordTown/scripts.pory"
	step_end
# 550 "data/maps/DewfordTown/scripts.pory"

# 551 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_TrendyPhraseBoy::
# 552 "data/maps/DewfordTown/scripts.pory"
	lock
# 553 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 554 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 555 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_XIsTheBiggestHappeningThingRight, MSGBOX_YESNO
# 556 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_ConfirmTrendyPhrase
# 557 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DewfordTown_EventScript_RejectTrendyPhrase
# 558 "data/maps/DewfordTown/scripts.pory"
	end
# 559 "data/maps/DewfordTown/scripts.pory"

# 560 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ConfirmTrendyPhrase::
# 561 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_YeahDefinitionOfInRightNow, MSGBOX_DEFAULT
# 562 "data/maps/DewfordTown/scripts.pory"
	release
# 563 "data/maps/DewfordTown/scripts.pory"
	end
# 564 "data/maps/DewfordTown/scripts.pory"

# 565 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_RejectTrendyPhrase::
# 566 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TellMeWhatsNewAndIn, MSGBOX_DEFAULT
# 567 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
# 568 "data/maps/DewfordTown/scripts.pory"
	call Common_ShowEasyChatScreen
# 569 "data/maps/DewfordTown/scripts.pory"
	lock
# 570 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 571 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_EventScript_GiveNewTrendyPhrase
# 572 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, DewfordTown_EventScript_CancelNewTrendyPhrase
# 573 "data/maps/DewfordTown/scripts.pory"
	end
# 574 "data/maps/DewfordTown/scripts.pory"

# 575 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GiveNewTrendyPhrase::
# 576 "data/maps/DewfordTown/scripts.pory"
	incrementgamestat GAME_STAT_STARTED_TRENDS
# 577 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_0x8004, FALSE, DewfordTown_EventScript_PhraseNotTrendyEnough
# 578 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_OfCourseIKnowAboutThat, MSGBOX_DEFAULT
# 579 "data/maps/DewfordTown/scripts.pory"
	release
# 580 "data/maps/DewfordTown/scripts.pory"
	end
# 581 "data/maps/DewfordTown/scripts.pory"

# 582 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_CancelNewTrendyPhrase::
# 583 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_HearOfAnyTrendsComeShareWithMe, MSGBOX_DEFAULT
# 584 "data/maps/DewfordTown/scripts.pory"
	release
# 585 "data/maps/DewfordTown/scripts.pory"
	end
# 586 "data/maps/DewfordTown/scripts.pory"

# 587 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_PhraseNotTrendyEnough::
# 588 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_XHuhIThinkYIsCool, MSGBOX_DEFAULT
# 589 "data/maps/DewfordTown/scripts.pory"
	release
# 590 "data/maps/DewfordTown/scripts.pory"
	end
# 591 "data/maps/DewfordTown/scripts.pory"

# 592 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TinyIslandCommunity:
# 593 "data/maps/DewfordTown/scripts.pory"
	.string "Dewford Town is a tiny island\ncommunity.\pSo if something gets trendy here,\neveryone picks on it right away.$"
# 594 "data/maps/DewfordTown/scripts.pory"

# 595 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TownSign:
# 596 "data/maps/DewfordTown/scripts.pory"
	.string "Dewford Town\n"
# 597 "data/maps/DewfordTown/scripts.pory"
	.string "“A tiny island in the blue sea.”$"
# 598 "data/maps/DewfordTown/scripts.pory"

# 599 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GymSign:
# 600 "data/maps/DewfordTown/scripts.pory"
	.string "Dewford Town Pokémon Gym\n"
# 601 "data/maps/DewfordTown/scripts.pory"
	.string "Leader: Brawly\l"
# 602 "data/maps/DewfordTown/scripts.pory"
	.string "“A big wave in fighting!”$"
# 603 "data/maps/DewfordTown/scripts.pory"

# 604 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_HallSign:
# 605 "data/maps/DewfordTown/scripts.pory"
	.string "Dewford Hall\n"
# 606 "data/maps/DewfordTown/scripts.pory"
	.string "“Everyone's information exchange!”$"
# 607 "data/maps/DewfordTown/scripts.pory"

# 608 "data/maps/DewfordTown/scripts.pory"
Route104_Text_LandedInDewfordDeliverLetter:
# 609 "data/maps/DewfordTown/scripts.pory"
	.string "{COLOR RED}Mr. Briney{COLOR DARK_GRAY}: Ahoy!\nWe've struck land in Dewford.\pI suppose you'll be heading\nashore to deliver that letter to\lwhat's-his-name or whomever.\pIf you're ever feeling lost and adrift\nthough, try calling in on the island's\lPokémon Gym.\pThe Leader, Brawly, surely knows\neveryone and everything that goes\lon in his town!$"
# 610 "data/maps/DewfordTown/scripts.pory"

# 611 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_SetSailBackToPetalburg:
# 612 "data/maps/DewfordTown/scripts.pory"
	.string "{COLOR RED}Mr. Briney{COLOR DARK_GRAY}: Have you delivered that\nletter yet?\pOr were you meaning to sail back to\nPetalburg way, maybe?$"
# 613 "data/maps/DewfordTown/scripts.pory"

# 614 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_PetalburgWereSettingSail2:
# 615 "data/maps/DewfordTown/scripts.pory"
	.string "Petalburg City, or thereabouts?\nAnchors aweigh!\pPeeko, we're setting sail, my darling!$"
# 616 "data/maps/DewfordTown/scripts.pory"

# 617 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GoDeliverIllBeWaiting:
# 618 "data/maps/DewfordTown/scripts.pory"
	.string "Then you go on and deliver that\nletter. I have the deck.\pIf you're ever feeling lost and adrift\nthough, try calling in on the island's\lPokémon Gym.\pThe Leader, Brawly, surely knows\neveryone and everything that goes\lon in his town!$"
# 619 "data/maps/DewfordTown/scripts.pory"

# 620 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_BrineyLandedInDewford:
# 621 "data/maps/DewfordTown/scripts.pory"
	.string "{COLOR RED}Mr. Briney{COLOR DARK_GRAY}: Ahoy!\nWe've hit land in Dewford!\pYou just go on and tell me whenever\nyou want to set sail again, {PLAYER}!$"
# 622 "data/maps/DewfordTown/scripts.pory"

# 623 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_WhereAreWeBound:
# 624 "data/maps/DewfordTown/scripts.pory"
	.string "{COLOR RED}Mr. Briney{COLOR DARK_GRAY}: Ahoy!\nWe'll lift anchor anytime for you!\pSo tell me, my friend, where are\nwe bound?$"
# 625 "data/maps/DewfordTown/scripts.pory"

# 626 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_PetalburgWereSettingSail:
# 627 "data/maps/DewfordTown/scripts.pory"
	.string "Petalburg City, or thereabouts?\nAnchors aweigh!\pPeeko, we're setting sail, my darling!$"
# 628 "data/maps/DewfordTown/scripts.pory"

# 629 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_SlateportWereSettingSail:
# 630 "data/maps/DewfordTown/scripts.pory"
	.string "Slateport City, is it?\nAnchors aweigh!\pPeeko, we're setting sail, my darling!$"
# 631 "data/maps/DewfordTown/scripts.pory"

# 632 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_JustTellMeWhenYouNeedToSetSail:
# 633 "data/maps/DewfordTown/scripts.pory"
	.string "Just tell me whenever you want to\nhoist anchor again.$"
# 634 "data/maps/DewfordTown/scripts.pory"

# 635 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_XIsTheBiggestHappeningThingRight:
# 636 "data/maps/DewfordTown/scripts.pory"
	.string "I like what's hip, happening, and\ntrendy.\lI'm always checking it out.\pHey, have you heard about these new\n{STR_VAR_1}?\pThat's right!\nOf course you know!\pI mean {STR_VAR_1} are the\nhottest thing in cool!\p{STR_VAR_1} are the biggest\nthing happening where you're from,\ltoo, right?$"
# 637 "data/maps/DewfordTown/scripts.pory"

# 638 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TellMeWhatsNewAndIn:
# 639 "data/maps/DewfordTown/scripts.pory"
	.string "Huh!?\nIt's not hip and happening thing?\pWell, hey, you have to tell me,\nwhat's new and what's “in.”$"
# 640 "data/maps/DewfordTown/scripts.pory"

# 641 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_OfCourseIKnowAboutThat:
# 642 "data/maps/DewfordTown/scripts.pory"
	.string "Huh?\n"
# 643 "data/maps/DewfordTown/scripts.pory"
	.string "{STR_VAR_2}?\p"
# 644 "data/maps/DewfordTown/scripts.pory"
	.string "… …\p"
# 645 "data/maps/DewfordTown/scripts.pory"
	.string "…Uh… Yeah! That's right!\n"
# 646 "data/maps/DewfordTown/scripts.pory"
	.string "Yeah, I knew that! Knew it all along!\p"
# 647 "data/maps/DewfordTown/scripts.pory"
	.string "Of course I know about that!\n"
# 648 "data/maps/DewfordTown/scripts.pory"
	.string "{STR_VAR_2}, right?\p"
# 649 "data/maps/DewfordTown/scripts.pory"
	.string "Yeah, that's it, it's there!\n"
# 650 "data/maps/DewfordTown/scripts.pory"
	.string "Isn't {STR_VAR_2}\l"
# 651 "data/maps/DewfordTown/scripts.pory"
	.string "the coolest, or what?\p"
# 652 "data/maps/DewfordTown/scripts.pory"
	.string "It's the hippest thing in hip.\n"
# 653 "data/maps/DewfordTown/scripts.pory"
	.string "You think I'd not know about it?\p"
# 654 "data/maps/DewfordTown/scripts.pory"
	.string "{STR_VAR_1}…\n"
# 655 "data/maps/DewfordTown/scripts.pory"
	.string "It's, like, so five minutes ago.\p"
# 656 "data/maps/DewfordTown/scripts.pory"
	.string "Now, {STR_VAR_2} is\n"
# 657 "data/maps/DewfordTown/scripts.pory"
	.string "what's vital and in tune with the times!$"
# 658 "data/maps/DewfordTown/scripts.pory"

# 659 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_XHuhIThinkYIsCool:
# 660 "data/maps/DewfordTown/scripts.pory"
	.string "Hmmm. {STR_VAR_2}, huh?\nWhat's popular about them?$"
# 661 "data/maps/DewfordTown/scripts.pory"

# 662 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_HearOfAnyTrendsComeShareWithMe:
# 663 "data/maps/DewfordTown/scripts.pory"
	.string "Well, if you hear of any happening new\n"
# 664 "data/maps/DewfordTown/scripts.pory"
	.string "trends, come share them with me, okay?$"
# 665 "data/maps/DewfordTown/scripts.pory"

# 666 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_YeahDefinitionOfInRightNow:
# 667 "data/maps/DewfordTown/scripts.pory"
	.string "Yeah, absolutely right!\p"
# 668 "data/maps/DewfordTown/scripts.pory"
	.string "{STR_VAR_1} is the\n"
# 669 "data/maps/DewfordTown/scripts.pory"
	.string "definition of “in” right now.$"

DewfordTown_EventScript_Briney_Continue::
# 674 "data/maps/DewfordTown/scripts.pory"
	lock
# 675 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 676 "data/maps/DewfordTown/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, DewfordTown_EventScript_Briney_Continue_2
DewfordTown_EventScript_Briney_Continue_1:
# 679 "data/maps/DewfordTown/scripts.pory"
	compare VAR_MR_BRINEY_DIALOGUE_STATE, 0
	goto_if_eq DewfordTown_EventScript_Briney_Continue_5
# 682 "data/maps/DewfordTown/scripts.pory"
	compare VAR_MR_BRINEY_DIALOGUE_STATE, 1
	goto_if_eq DewfordTown_EventScript_Briney_Continue_8
DewfordTown_EventScript_Briney_Continue_7:
# 689 "data/maps/DewfordTown/scripts.pory"
	message DewfordTown_Text_WhereAreWeBound
DewfordTown_EventScript_Briney_Continue_4:
# 691 "data/maps/DewfordTown/scripts.pory"
	waitmessage
# 692 "data/maps/DewfordTown/scripts.pory"
	multichoicedefault 21, 6, MULTI_BRINEY_ON_DEWFORD, 2, FALSE
# 693 "data/maps/DewfordTown/scripts.pory"
	switch VAR_RESULT
# 694 "data/maps/DewfordTown/scripts.pory"
	case 0, DewfordTown_EventScript_Briney_Continue_14
# 695 "data/maps/DewfordTown/scripts.pory"
	case 1, DewfordTown_EventScript_Briney_Continue_15
# 696 "data/maps/DewfordTown/scripts.pory"
	case 2, DewfordTown_EventScript_Briney_Continue_16
# 697 "data/maps/DewfordTown/scripts.pory"
	case MULTI_B_PRESSED, DewfordTown_EventScript_Briney_Continue_17
DewfordTown_EventScript_Briney_Continue_12:
	end

DewfordTown_EventScript_Briney_Continue_2:
# 677 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_ReturnToPetalburgPrompt
	goto DewfordTown_EventScript_Briney_Continue_1

DewfordTown_EventScript_Briney_Continue_5:
# 680 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_MR_BRINEY_DIALOGUE_STATE, 1
# 681 "data/maps/DewfordTown/scripts.pory"
	message DewfordTown_EventScript_Briney_Continue_Text_0
	goto DewfordTown_EventScript_Briney_Continue_4

DewfordTown_EventScript_Briney_Continue_6:
# 683 "data/maps/DewfordTown/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_Briney_Continue_18
# 686 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_MR_BRINEY_DIALOGUE_STATE, 2
	goto DewfordTown_EventScript_Briney_Continue_4

DewfordTown_EventScript_Briney_Continue_8:
# 682 "data/maps/DewfordTown/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_Briney_Continue_6
	goto DewfordTown_EventScript_Briney_Continue_7

DewfordTown_EventScript_Briney_Continue_14:
# 694 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_ChoosePetalburg
	goto DewfordTown_EventScript_Briney_Continue_12

DewfordTown_EventScript_Briney_Continue_15:
# 695 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_ChooseSlateport
	goto DewfordTown_EventScript_Briney_Continue_12

DewfordTown_EventScript_Briney_Continue_16:
# 696 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_CancelSailSelect
	goto DewfordTown_EventScript_Briney_Continue_12

DewfordTown_EventScript_Briney_Continue_17:
# 697 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_CancelSailSelect
	goto DewfordTown_EventScript_Briney_Continue_12

DewfordTown_EventScript_Briney_Continue_18:
# 684 "data/maps/DewfordTown/scripts.pory"
	message DewfordTown_EventScript_Briney_Continue_Text_1
	goto DewfordTown_EventScript_Briney_Continue_4


DewfordTown_EventScript_OldFisherMan::
# 703 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_OldFisherMan_Text_0, MSGBOX_NPC
	end


DewfordTown_EventScript_Briney_Continue_Text_0:
# 681 "data/maps/DewfordTown/scripts.pory"
	.string "{COLOR RED}Mr. Briney{COLOR DARK_GRAY}: Oho!\pIt looks as though you have delivered\nyour chit good and proper.\pAh, but that reminds me!\pI've had a message from President\nStone, saying he has another favor\lto ask.\pIt's about the {COLOR BLUE}Devon Parts{COLOR DARK_GRAY} that you\nrecovered for him before.\pSeems as though they should go to some\nfellow called {COLOR RED}Stern{COLOR DARK_GRAY} at {COLOR BLUE}Slateport's\lshipyard{COLOR DARK_GRAY}.\pThis old seadog will see you there\nsafely!\pWeigh anchors!\nWe're for Slateport!$"

DewfordTown_EventScript_Briney_Continue_Text_1:
# 684 "data/maps/DewfordTown/scripts.pory"
	.string "{COLOR RED}Mr. Briney{COLOR DARK_GRAY}: Ahoy!\nI know exactly what you want to say!\pYou've still got to deliver that case to\nyoung Stern in Slateport.\lAin't that so?\pYou just leave it up to this old\nseadog!\pWeigh anchors!\nWe're for Slateport!$"

DewfordTown_EventScript_OldFisherMan_Text_0:
# 703 "data/maps/DewfordTown/scripts.pory"
	.string "This is a renowned fishing spot.$"
