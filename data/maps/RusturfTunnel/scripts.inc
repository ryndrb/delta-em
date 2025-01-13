# 1 "data/maps/RusturfTunnel/scripts.pory"

# 2 "data/maps/RusturfTunnel/scripts.pory"
.equ LOCALID_WANDAS_BF, 1
# 3 "data/maps/RusturfTunnel/scripts.pory"
.set LOCALID_BRINEY, 5
# 4 "data/maps/RusturfTunnel/scripts.pory"
.set LOCALID_GRUNT, 6
# 5 "data/maps/RusturfTunnel/scripts.pory"
.set LOCALID_PEEKO, 7
# 6 "data/maps/RusturfTunnel/scripts.pory"
.equ LOCALID_WANDA, 10
# 7 "data/maps/RusturfTunnel/scripts.pory"

# 8 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_MapScripts::
# 9 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RusturfTunnel_OnTransition
# 10 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RusturfTunnel_OnFrame
# 11 "data/maps/RusturfTunnel/scripts.pory"
	.byte 0
# 12 "data/maps/RusturfTunnel/scripts.pory"

# 13 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_OnFrame:
# 14 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 4, RusturfTunnel_EventScript_ClearTunnelScene
# 15 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 5, RusturfTunnel_EventScript_ClearTunnelScene
# 16 "data/maps/RusturfTunnel/scripts.pory"
	.2byte 0
# 17 "data/maps/RusturfTunnel/scripts.pory"

# 18 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_OnTransition:
# 19 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_RUSTURF_TUNNEL_STATE, 2, RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos
# 20 "data/maps/RusturfTunnel/scripts.pory"
	end
# 21 "data/maps/RusturfTunnel/scripts.pory"

# 22 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos::
# 23 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_PEEKO, 13, 4
# 24 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_GRUNT, 13, 5
# 25 "data/maps/RusturfTunnel/scripts.pory"
	return
# 26 "data/maps/RusturfTunnel/scripts.pory"

# 27 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Wanda::
# 28 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 29 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 30 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_BoyfriendOnOtherSideOfRock, MSGBOX_DEFAULT
# 31 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 32 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceLeft
# 33 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 34 "data/maps/RusturfTunnel/scripts.pory"
	release
# 35 "data/maps/RusturfTunnel/scripts.pory"
	end
# 36 "data/maps/RusturfTunnel/scripts.pory"

# 37 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriend::
# 38 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 39 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 40 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_set FLAG_TEMP_1, RusturfTunnel_EventScript_AlreadySpokenTo
# 41 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_TEMP_1
# 42 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WhyCantTheyKeepDigging, MSGBOX_DEFAULT
# 43 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 44 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 45 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 46 "data/maps/RusturfTunnel/scripts.pory"
	release
# 47 "data/maps/RusturfTunnel/scripts.pory"
	end
# 48 "data/maps/RusturfTunnel/scripts.pory"

# 49 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AlreadySpokenTo::
# 50 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ToGetToVerdanturf, MSGBOX_DEFAULT
# 51 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 52 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 53 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 54 "data/maps/RusturfTunnel/scripts.pory"
	release
# 55 "data/maps/RusturfTunnel/scripts.pory"
	end
# 56 "data/maps/RusturfTunnel/scripts.pory"

# 57 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene::
# 58 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 59 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_FaceWandasBoyfriend1
# 60 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_FaceWandasBoyfriend2
# 61 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_FaceWandasBoyfriend3
# 62 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_WandasBoyfriendNotice
# 63 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_YouShatteredBoulderTakeStone, MSGBOX_DEFAULT
# 64 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 65 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 66 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_AGGRONITE
# 67 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECEIVED_AGGRONITE
# 68 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ExplainAggronite, MSGBOX_DEFAULT
# 69 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 70 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_BoyfriendApproachWanda1
# 71 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_BoyfriendApproachWanda2
# 72 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_BoyfriendApproachWanda3
# 73 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WandaReunion, MSGBOX_DEFAULT
# 74 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 75 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_WandaAndBoyfriendExit1
# 76 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 77 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 78 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_SetRusturfTunnelOpen
# 79 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
# 80 "data/maps/RusturfTunnel/scripts.pory"
	end
# 81 "data/maps/RusturfTunnel/scripts.pory"

# 82 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda1::
# 83 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend1
# 84 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda1
# 85 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 86 "data/maps/RusturfTunnel/scripts.pory"
	return
# 87 "data/maps/RusturfTunnel/scripts.pory"

# 88 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda2::
# 89 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 90 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
# 91 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 92 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDA, Common_Movement_WalkInPlaceDown
# 93 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 94 "data/maps/RusturfTunnel/scripts.pory"
	return
# 95 "data/maps/RusturfTunnel/scripts.pory"

# 96 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda3::
# 97 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 98 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
# 99 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 100 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDA, Common_Movement_WalkInPlaceDown
# 101 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 102 "data/maps/RusturfTunnel/scripts.pory"
	return
# 103 "data/maps/RusturfTunnel/scripts.pory"

# 104 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend1::
# 105 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, Common_Movement_WalkInPlaceUp
# 106 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 107 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 108 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 109 "data/maps/RusturfTunnel/scripts.pory"
	return
# 110 "data/maps/RusturfTunnel/scripts.pory"

# 111 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend2::
# 112 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendFaceRight
# 113 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 114 "data/maps/RusturfTunnel/scripts.pory"
	return
# 115 "data/maps/RusturfTunnel/scripts.pory"

# 116 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend3::
# 117 "data/maps/RusturfTunnel/scripts.pory"
	return
# 118 "data/maps/RusturfTunnel/scripts.pory"

# 119 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer::
# 120 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 121 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendApproachPlayer
# 122 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 123 "data/maps/RusturfTunnel/scripts.pory"
	return
# 124 "data/maps/RusturfTunnel/scripts.pory"

# 125 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit1::
# 126 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDA, RusturfTunnel_Movement_WandaExit1
# 127 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit1
# 128 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 129 "data/maps/RusturfTunnel/scripts.pory"
	return
# 130 "data/maps/RusturfTunnel/scripts.pory"

# 131 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit::
# 132 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchWandaExit
# 133 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDA, RusturfTunnel_Movement_WandaExit
# 134 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit
# 135 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 136 "data/maps/RusturfTunnel/scripts.pory"
	return
# 137 "data/maps/RusturfTunnel/scripts.pory"

# 138 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendNotice::
# 139 "data/maps/RusturfTunnel/scripts.pory"
	playse SE_PIN
# 140 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, Common_Movement_ExclamationMark
# 141 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 142 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, Common_Movement_Delay48
# 143 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 144 "data/maps/RusturfTunnel/scripts.pory"
	return
# 145 "data/maps/RusturfTunnel/scripts.pory"

# 146 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandaExit1:
# 147 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 148 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 149 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 150 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 151 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 152 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 153 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 154 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 155 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 156 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 157 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 158 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 159 "data/maps/RusturfTunnel/scripts.pory"

# 160 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandaExit:
# 161 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 162 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 163 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 164 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 165 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 166 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 167 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 168 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 169 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 170 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 171 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 172 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 173 "data/maps/RusturfTunnel/scripts.pory"

# 174 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchWandaExit:
# 175 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 176 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_up
# 177 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 178 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 179 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_right
# 180 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 181 "data/maps/RusturfTunnel/scripts.pory"

# 182 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused1:
# 183 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 184 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_right
# 185 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 186 "data/maps/RusturfTunnel/scripts.pory"

# 187 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused2:
# 188 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 189 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_up
# 190 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 191 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_right
# 192 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 193 "data/maps/RusturfTunnel/scripts.pory"

# 194 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused3:
# 195 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 196 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_down
# 197 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 198 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_right
# 199 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 200 "data/maps/RusturfTunnel/scripts.pory"

# 201 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend1:
# 202 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 203 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_right
# 204 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 205 "data/maps/RusturfTunnel/scripts.pory"

# 206 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend:
# 207 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 208 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_left
# 209 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 210 "data/maps/RusturfTunnel/scripts.pory"

# 211 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendFaceRight:
# 212 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 213 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_right
# 214 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 215 "data/maps/RusturfTunnel/scripts.pory"

# 216 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit1:
# 217 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 218 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 219 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 220 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 221 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 222 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 223 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 224 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 225 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 226 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 227 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 228 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 229 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 230 "data/maps/RusturfTunnel/scripts.pory"

# 231 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit:
# 232 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 233 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 234 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 235 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 236 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 237 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 238 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 239 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 240 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 241 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 242 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 243 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 244 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 245 "data/maps/RusturfTunnel/scripts.pory"

# 246 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendApproachPlayer:
# 247 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 248 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 249 "data/maps/RusturfTunnel/scripts.pory"

# 250 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda1:
# 251 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_up
# 252 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_up
# 253 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_up
# 254 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 255 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 256 "data/maps/RusturfTunnel/scripts.pory"

# 257 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda:
# 258 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_right
# 259 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_right
# 260 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 261 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_up
# 262 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 263 "data/maps/RusturfTunnel/scripts.pory"

# 264 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos1::
# 265 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 1
# 266 "data/maps/RusturfTunnel/scripts.pory"
	end
# 267 "data/maps/RusturfTunnel/scripts.pory"

# 268 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos2::
# 269 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 2
# 270 "data/maps/RusturfTunnel/scripts.pory"
	end
# 271 "data/maps/RusturfTunnel/scripts.pory"

# 272 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos3::
# 273 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 3
# 274 "data/maps/RusturfTunnel/scripts.pory"
	end
# 275 "data/maps/RusturfTunnel/scripts.pory"

# 276 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AquaGruntBackUp::
# 277 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 278 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ComeAndGetSome, MSGBOX_DEFAULT
# 279 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 280 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_GRUNT, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 281 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PEEKO, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 282 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 283 "data/maps/RusturfTunnel/scripts.pory"
	copyobjectxytoperm LOCALID_GRUNT
# 284 "data/maps/RusturfTunnel/scripts.pory"
	copyobjectxytoperm LOCALID_PEEKO
# 285 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 3
# 286 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
# 287 "data/maps/RusturfTunnel/scripts.pory"
	end
# 288 "data/maps/RusturfTunnel/scripts.pory"

# 289 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntAndPeekoBackUp:
# 290 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 291 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 292 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 293 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 294 "data/maps/RusturfTunnel/scripts.pory"

# 295 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Peeko::
# 296 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 297 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 298 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 299 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 300 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_Peeko, MSGBOX_DEFAULT
# 301 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 302 "data/maps/RusturfTunnel/scripts.pory"
	release
# 303 "data/maps/RusturfTunnel/scripts.pory"
	end
# 304 "data/maps/RusturfTunnel/scripts.pory"

# 305 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt::
# 306 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 307 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 308 "data/maps/RusturfTunnel/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 309 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntIntro, MSGBOX_DEFAULT
# 310 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_RUSTURF_TUNNEL, RusturfTunnel_Text_GruntDefeat
# 311 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntTakePackage, MSGBOX_DEFAULT
# 312 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_DEVON_PARTS
# 313 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 314 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PushPlayerAsideForGrunt
# 315 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_GRUNT, RusturfTunnel_Movement_GruntEscape
# 316 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 317 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_GRUNT
# 318 "data/maps/RusturfTunnel/scripts.pory"
	delay 50
# 319 "data/maps/RusturfTunnel/scripts.pory"
	addobject LOCALID_BRINEY
# 320 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko1
# 321 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 322 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerMoveAsideForBriney
# 323 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko2
# 324 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 325 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_PeekoGladToSeeYouSafe, MSGBOX_DEFAULT
# 326 "data/maps/RusturfTunnel/scripts.pory"
    closemessage
# 327 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_BRINEY, Common_Movement_WalkInPlaceDown
# 328 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 329 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ThankYou, MSGBOX_DEFAULT
# 330 "data/maps/RusturfTunnel/scripts.pory"
    closemessage
# 331 "data/maps/RusturfTunnel/scripts.pory"
    applymovement LOCALID_BRINEY, Common_Movement_WalkInPlaceRight
# 332 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement LOCALID_BRINEY
# 333 "data/maps/RusturfTunnel/scripts.pory"
	message RusturfTunnel_Text_LetsGoHomePeeko
# 334 "data/maps/RusturfTunnel/scripts.pory"
    waitmessage
# 335 "data/maps/RusturfTunnel/scripts.pory"
    waitse
# 336 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 337 "data/maps/RusturfTunnel/scripts.pory"
	waitbuttonpress
# 338 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 339 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 340 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBrineyExit
# 341 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_BRINEY, RusturfTunnel_Movement_BrineyExit
# 342 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PEEKO, RusturfTunnel_Movement_PeekoExit
# 343 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 344 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_BRINEY
# 345 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_PEEKO
# 346 "data/maps/RusturfTunnel/scripts.pory"
	clearflag FLAG_DEVON_GOODS_STOLEN
# 347 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECOVERED_DEVON_GOODS
# 348 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 4
# 349 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 350 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 351 "data/maps/RusturfTunnel/scripts.pory"
	release
# 352 "data/maps/RusturfTunnel/scripts.pory"
	end
# 353 "data/maps/RusturfTunnel/scripts.pory"

# 354 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PushPlayerAsideForGrunt:
# 355 "data/maps/RusturfTunnel/scripts.pory"
	face_down
# 356 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 357 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 358 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 359 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_left
# 360 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 361 "data/maps/RusturfTunnel/scripts.pory"

# 362 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerMoveAsideForBriney:
# 363 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 364 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_up
# 365 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 366 "data/maps/RusturfTunnel/scripts.pory"

# 367 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntEscape:
# 368 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 369 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 370 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 371 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 372 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 373 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 374 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 375 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 376 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 377 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 378 "data/maps/RusturfTunnel/scripts.pory"

# 379 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko1:
# 380 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 381 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 382 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 383 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 384 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 385 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 386 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 387 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 388 "data/maps/RusturfTunnel/scripts.pory"

# 389 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyExit:
# 390 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 391 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 392 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 393 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 394 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 395 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 396 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 397 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 398 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 399 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 400 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 401 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 402 "data/maps/RusturfTunnel/scripts.pory"

# 403 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBrineyExit:
# 404 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 405 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 406 "data/maps/RusturfTunnel/scripts.pory"
	delay_4
# 407 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_left
# 408 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 409 "data/maps/RusturfTunnel/scripts.pory"

# 410 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko2:
# 411 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 412 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 413 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 414 "data/maps/RusturfTunnel/scripts.pory"

# 415 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PeekoExit:
# 416 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 417 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 418 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 419 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 420 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 421 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 422 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 423 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 424 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 425 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 426 "data/maps/RusturfTunnel/scripts.pory"

# 427 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Mike::
# 428 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_single TRAINER_MIKE_1, RusturfTunnel_Text_MikeIntro, RusturfTunnel_Text_MikeDefeat
# 429 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_MikePostBattle, MSGBOX_AUTOCLOSE
# 430 "data/maps/RusturfTunnel/scripts.pory"
	end
# 431 "data/maps/RusturfTunnel/scripts.pory"

# 432 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ComeAndGetSome:
# 433 "data/maps/RusturfTunnel/scripts.pory"
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: What?\nAre you coming?\lCome and get some, then!$"
# 434 "data/maps/RusturfTunnel/scripts.pory"

# 435 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_Peeko:
# 436 "data/maps/RusturfTunnel/scripts.pory"
	.string "Pii pihyoh!$"
# 437 "data/maps/RusturfTunnel/scripts.pory"

# 438 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntIntro:
# 439 "data/maps/RusturfTunnel/scripts.pory"
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: Grah, keelhaul it all!\pThis hostage Pokémon turned out to\nbe worthless!\pAnd to think I made a getaway…\ninto this tunnel to nowhere!\pAnd you!\nNow you're here to battle me.\lReally?$"
# 440 "data/maps/RusturfTunnel/scripts.pory"

# 441 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntDefeat:
# 442 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ugh! Uhhn ugh!\nIs this the end of my evil deeds!?$"
# 443 "data/maps/RusturfTunnel/scripts.pory"

# 444 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntTakePackage:
# 445 "data/maps/RusturfTunnel/scripts.pory"
	.string "This is plain not right…\pThe boss told me this would be a\nslick-and-easy job to pull.\pAll I had to do was steal some parts\nfrom Devon.\pTch!\pYou want 'em back that badly, then take\n'em!$"
# 446 "data/maps/RusturfTunnel/scripts.pory"

# 447 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_PeekoGladToSeeYouSafe:
# 448 "data/maps/RusturfTunnel/scripts.pory"
	.string "{COLOR RED}Mr. Briney{COLOR DARK_GRAY}: Peeko!\nAm I glad to see you're safe!$"
# 449 "data/maps/RusturfTunnel/scripts.pory"

# 450 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ThankYou:
# 451 "data/maps/RusturfTunnel/scripts.pory"
	.string "My Peeko owes her life an' freedom to\nyou!\pThey call me Mr. Briney.\nAnd you are?\pAh, so it's {PLAYER}, is it now!\pThen I sincerely thank you,\n{PLAYER}!\pIf there's ever a thing I can do to\nhelp you in turn, don't you hesitate\lto tell me.\pIf I'm to be found, it will always be at\nmy cottage by the sea near Petalburg\lWoods.$"
# 452 "data/maps/RusturfTunnel/scripts.pory"

# 453 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_LetsGoHomePeeko:
# 454 "data/maps/RusturfTunnel/scripts.pory"
    .string "Come, Peeko!\nHigh time we're under way to home!\p{COLOR RED}Peeko{COLOR DARK_GRAY}: Pikwee!$"
# 455 "data/maps/RusturfTunnel/scripts.pory"

# 456 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_WhyCantTheyKeepDigging:
# 457 "data/maps/RusturfTunnel/scripts.pory"
	.string "…\p"
# 458 "data/maps/RusturfTunnel/scripts.pory"
	.string "Why can't they keep digging?\n"
# 459 "data/maps/RusturfTunnel/scripts.pory"
	.string "Is the bedrock too hard?\p"
# 460 "data/maps/RusturfTunnel/scripts.pory"
	.string "My beloved awaits me in Verdanturf\n"
# 461 "data/maps/RusturfTunnel/scripts.pory"
	.string "Town just beyond here…\p"
# 462 "data/maps/RusturfTunnel/scripts.pory"
	.string "If Rustboro and Verdanturf were\n"
# 463 "data/maps/RusturfTunnel/scripts.pory"
	.string "joined by this tunnel, I could visit\l"
# 464 "data/maps/RusturfTunnel/scripts.pory"
	.string "her every day…\p"
# 465 "data/maps/RusturfTunnel/scripts.pory"
	.string "But this…\n"
# 466 "data/maps/RusturfTunnel/scripts.pory"
	.string "What am I to do?$"
# 467 "data/maps/RusturfTunnel/scripts.pory"

# 468 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ToGetToVerdanturf:
# 469 "data/maps/RusturfTunnel/scripts.pory"
	.string "To get from Rustboro to Verdanturf,\n"
# 470 "data/maps/RusturfTunnel/scripts.pory"
	.string "you need to go to Dewford, then pass\l"
# 471 "data/maps/RusturfTunnel/scripts.pory"
	.string "through Slateport and Mauville…$"
# 472 "data/maps/RusturfTunnel/scripts.pory"

# 473 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_YouShatteredBoulderTakeStone:
# 474 "data/maps/RusturfTunnel/scripts.pory"
	.string "Wow! You shattered those boulders\nthat blocked the way.\pTo show you how much I appreciate it,\nI'd like you to have this!$"
# 475 "data/maps/RusturfTunnel/scripts.pory"

# 476 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ExplainAggronite:
# 477 "data/maps/RusturfTunnel/scripts.pory"
	.string "I found that when I was digging for the\ntunnel.\pI feel like there's some mysterious\npower coming from it, but I don't\lthink I could do a thing with it.$"
# 478 "data/maps/RusturfTunnel/scripts.pory"

# 479 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_WandaReunion:
# 480 "data/maps/RusturfTunnel/scripts.pory"
	.string "Wanda!\nNow I can see you anytime!\p{COLOR RED}Wanda{COLOR DARK_GRAY}: That's…that's wonderful!\pCome on.\nLet me take you to my place so you\lcan rest.$"
# 481 "data/maps/RusturfTunnel/scripts.pory"

# 482 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_BoyfriendOnOtherSideOfRock:
# 483 "data/maps/RusturfTunnel/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: On the other side of this rock…\nMy boyfriend labors day after day.\pHe…he's not just digging this tunnel to\ncome see me.\pHe works his hands raw and rough for\nthe benefit of everyone.$"
# 484 "data/maps/RusturfTunnel/scripts.pory"

# 485 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikeIntro:
# 486 "data/maps/RusturfTunnel/scripts.pory"
	.string "What do you call a wild man up in the\nmountains?\lA mountain man, right?\pSo why don't they call a Pokémon that\nclimb steep cliffs a Pocragmon?$"
# 487 "data/maps/RusturfTunnel/scripts.pory"

# 488 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikeDefeat:
# 489 "data/maps/RusturfTunnel/scripts.pory"
	.string "My Pokémon…\n"
# 490 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ran out of power…$"
# 491 "data/maps/RusturfTunnel/scripts.pory"

# 492 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikePostBattle:
# 493 "data/maps/RusturfTunnel/scripts.pory"
	.string "They halted development here to\n"
# 494 "data/maps/RusturfTunnel/scripts.pory"
	.string "protect Pokémon, right?\l"
# 495 "data/maps/RusturfTunnel/scripts.pory"
	.string "There's a feel-good story!$"
