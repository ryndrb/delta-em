# 1 "data/maps/RustboroCity/scripts.pory"

# 2 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_LITTLE_BOY, 7
# 3 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_LITTLE_GIRL, 8
# 4 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 9
# 5 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_GRUNT, 10
# 6 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_RIVAL, 14
# 7 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_SCIENTIST, 15
# 8 "data/maps/RustboroCity/scripts.pory"

# 9 "data/maps/RustboroCity/scripts.pory"
RustboroCity_MapScripts::
# 10 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_OnTransition
# 11 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_OnFrame
# 12 "data/maps/RustboroCity/scripts.pory"
	.byte 0
# 13 "data/maps/RustboroCity/scripts.pory"

# 14 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnTransition:
# 15 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 16 "data/maps/RustboroCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 17 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_HideMapNamePopup
# 18 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 19 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_PositionScientistForExit
# 20 "data/maps/RustboroCity/scripts.pory"
	end
# 21 "data/maps/RustboroCity/scripts.pory"

# 22 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistForExit::
# 23 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_TEMP_0, 11, RustboroCity_EventScript_PositionScientistLeftExit
# 24 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 12, 25
# 25 "data/maps/RustboroCity/scripts.pory"
	end
# 26 "data/maps/RustboroCity/scripts.pory"

# 27 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistLeftExit::
# 28 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 11, 25
# 29 "data/maps/RustboroCity/scripts.pory"
	end
# 30 "data/maps/RustboroCity/scripts.pory"

# 31 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HideMapNamePopup::
# 32 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 33 "data/maps/RustboroCity/scripts.pory"
	return
# 34 "data/maps/RustboroCity/scripts.pory"

# 35 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnFrame:
# 36 "data/maps/RustboroCity/scripts.pory"
	map_script_2 VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_ScientistAddMatchCall
# 37 "data/maps/RustboroCity/scripts.pory"
	.2byte 0
# 38 "data/maps/RustboroCity/scripts.pory"

# 39 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall::
# 40 "data/maps/RustboroCity/scripts.pory"
	lockall
# 41 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_PlayerWalkDown
# 42 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 43 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 44 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 45 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_SCIENTIST
# 46 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 47 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistApproachPlayer
# 48 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 49 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 50 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_ExclamationMark
# 51 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 52 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_Delay48
# 53 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 54 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 55 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 56 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistWalkInPlaceDown
# 57 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 58 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature, MSGBOX_DEFAULT
# 59 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 60 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 61 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceLeft
# 62 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 63 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 64 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 65 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 66 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 67 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 68 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 69 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 70 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 71 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceDown
# 72 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 73 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone, MSGBOX_DEFAULT
# 74 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 75 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 76 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 77 "data/maps/RustboroCity/scripts.pory"

# 78 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PleaseSelectPokenav::
# 79 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
# 80 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 81 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 82 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 83 "data/maps/RustboroCity/scripts.pory"

# 84 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial::
# 85 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 86 "data/maps/RustboroCity/scripts.pory"
	special ScriptMenu_CreateStartMenuForPokenavTutorial
# 87 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 88 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 89 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_PleaseSelectPokenav
# 90 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_PleaseSelectPokenav
# 91 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_PleaseSelectPokenav
# 92 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_PleaseSelectPokenav
# 93 "data/maps/RustboroCity/scripts.pory"
	case 5, RustboroCity_EventScript_PleaseSelectPokenav
# 94 "data/maps/RustboroCity/scripts.pory"
	case 6, RustboroCity_EventScript_PleaseSelectPokenav
# 95 "data/maps/RustboroCity/scripts.pory"
	case 7, RustboroCity_EventScript_PleaseSelectPokenav
# 96 "data/maps/RustboroCity/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_EventScript_PleaseSelectPokenav
# 97 "data/maps/RustboroCity/scripts.pory"
	special OpenPokenavForTutorial
# 98 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 99 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 100 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_IdBetterGetBackToWork, MSGBOX_DEFAULT
# 101 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 102 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistLeave
# 103 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 104 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 105 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_SCIENTIST
# 106 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 107 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 108 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 109 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 110 "data/maps/RustboroCity/scripts.pory"
	end
# 111 "data/maps/RustboroCity/scripts.pory"

# 112 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown:
# 113 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 114 "data/maps/RustboroCity/scripts.pory"
	step_end
# 115 "data/maps/RustboroCity/scripts.pory"

# 116 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown:
# 117 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 118 "data/maps/RustboroCity/scripts.pory"
	step_end
# 119 "data/maps/RustboroCity/scripts.pory"

# 120 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer:
# 121 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 122 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 123 "data/maps/RustboroCity/scripts.pory"
	step_end
# 124 "data/maps/RustboroCity/scripts.pory"

# 125 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 126 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkAroundPlayer:
# 127 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 128 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 129 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 130 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 131 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 132 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 133 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 134 "data/maps/RustboroCity/scripts.pory"
	step_end
# 135 "data/maps/RustboroCity/scripts.pory"

# 136 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistLeave:
# 137 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 138 "data/maps/RustboroCity/scripts.pory"
	step_end
# 139 "data/maps/RustboroCity/scripts.pory"

# 140 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 141 "data/maps/RustboroCity/scripts.pory"
	lock
# 142 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 143 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 144 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 145 "data/maps/RustboroCity/scripts.pory"
	release
# 146 "data/maps/RustboroCity/scripts.pory"
	end
# 147 "data/maps/RustboroCity/scripts.pory"

# 148 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 149 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 150 "data/maps/RustboroCity/scripts.pory"
	release
# 151 "data/maps/RustboroCity/scripts.pory"
	end
# 152 "data/maps/RustboroCity/scripts.pory"

# 153 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 154 "data/maps/RustboroCity/scripts.pory"
	lock
# 155 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 156 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 157 "data/maps/RustboroCity/scripts.pory"
	release
# 158 "data/maps/RustboroCity/scripts.pory"
	end
# 159 "data/maps/RustboroCity/scripts.pory"

# 160 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 161 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 162 "data/maps/RustboroCity/scripts.pory"
	end
# 163 "data/maps/RustboroCity/scripts.pory"

# 164 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 165 "data/maps/RustboroCity/scripts.pory"
	lock
# 166 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 167 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 168 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 169 "data/maps/RustboroCity/scripts.pory"
	release
# 170 "data/maps/RustboroCity/scripts.pory"
	end
# 171 "data/maps/RustboroCity/scripts.pory"

# 172 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 173 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 174 "data/maps/RustboroCity/scripts.pory"
	release
# 175 "data/maps/RustboroCity/scripts.pory"
	end
# 176 "data/maps/RustboroCity/scripts.pory"

# 177 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 178 "data/maps/RustboroCity/scripts.pory"
	lock
# 179 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 180 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 181 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 182 "data/maps/RustboroCity/scripts.pory"
	release
# 183 "data/maps/RustboroCity/scripts.pory"
	end
# 184 "data/maps/RustboroCity/scripts.pory"

# 185 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 186 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 187 "data/maps/RustboroCity/scripts.pory"
	release
# 188 "data/maps/RustboroCity/scripts.pory"
	end
# 189 "data/maps/RustboroCity/scripts.pory"

# 190 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 191 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 192 "data/maps/RustboroCity/scripts.pory"
	end
# 193 "data/maps/RustboroCity/scripts.pory"

# 194 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 195 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 196 "data/maps/RustboroCity/scripts.pory"
	end
# 197 "data/maps/RustboroCity/scripts.pory"

# 198 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 199 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 200 "data/maps/RustboroCity/scripts.pory"
	end
# 201 "data/maps/RustboroCity/scripts.pory"

# 202 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 203 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 204 "data/maps/RustboroCity/scripts.pory"
	end
# 205 "data/maps/RustboroCity/scripts.pory"

# 206 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 207 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 208 "data/maps/RustboroCity/scripts.pory"
	end
# 209 "data/maps/RustboroCity/scripts.pory"

# 210 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 211 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpBranchOfficeSign::
# 212 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
# 213 "data/maps/RustboroCity/scripts.pory"
	end
# 214 "data/maps/RustboroCity/scripts.pory"

# 215 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 216 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 217 "data/maps/RustboroCity/scripts.pory"
	end
# 218 "data/maps/RustboroCity/scripts.pory"

# 219 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 220 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 221 "data/maps/RustboroCity/scripts.pory"
	end
# 222 "data/maps/RustboroCity/scripts.pory"

# 223 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 224 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 225 "data/maps/RustboroCity/scripts.pory"
	end
# 226 "data/maps/RustboroCity/scripts.pory"

# 227 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 228 "data/maps/RustboroCity/scripts.pory"
	lock
# 229 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 230 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 231 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 232 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 233 "data/maps/RustboroCity/scripts.pory"
	release
# 234 "data/maps/RustboroCity/scripts.pory"
	end
# 235 "data/maps/RustboroCity/scripts.pory"

# 236 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 237 "data/maps/RustboroCity/scripts.pory"
	lock
# 238 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 239 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 240 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 241 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 242 "data/maps/RustboroCity/scripts.pory"
	release
# 243 "data/maps/RustboroCity/scripts.pory"
	end
# 244 "data/maps/RustboroCity/scripts.pory"

# 245 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 246 "data/maps/RustboroCity/scripts.pory"
	lock
# 247 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 248 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 249 "data/maps/RustboroCity/scripts.pory"
	release
# 250 "data/maps/RustboroCity/scripts.pory"
	end
# 251 "data/maps/RustboroCity/scripts.pory"

# 252 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 253 "data/maps/RustboroCity/scripts.pory"
	lockall
# 254 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 32
# 255 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 256 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 257 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 258 "data/maps/RustboroCity/scripts.pory"
	end
# 259 "data/maps/RustboroCity/scripts.pory"

# 260 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 261 "data/maps/RustboroCity/scripts.pory"
	lockall
# 262 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 32
# 263 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 264 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 265 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 266 "data/maps/RustboroCity/scripts.pory"
	end
# 267 "data/maps/RustboroCity/scripts.pory"

# 268 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 269 "data/maps/RustboroCity/scripts.pory"
	lockall
# 270 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 32
# 271 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 272 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 273 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 274 "data/maps/RustboroCity/scripts.pory"
	end
# 275 "data/maps/RustboroCity/scripts.pory"

# 276 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 277 "data/maps/RustboroCity/scripts.pory"
	lockall
# 278 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 32
# 279 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 280 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 281 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 282 "data/maps/RustboroCity/scripts.pory"
	end
# 283 "data/maps/RustboroCity/scripts.pory"

# 284 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 285 "data/maps/RustboroCity/scripts.pory"
	lockall
# 286 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 32
# 287 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 288 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 289 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 290 "data/maps/RustboroCity/scripts.pory"
	end
# 291 "data/maps/RustboroCity/scripts.pory"

# 292 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 293 "data/maps/RustboroCity/scripts.pory"
	delay 16
# 294 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 295 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 296 "data/maps/RustboroCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 297 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 298 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 299 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 300 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_GRUNT
# 301 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_DEVON_EMPLOYEE
# 302 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_GRUNT, RustboroCity_Movement_GruntEscape
# 303 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 304 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_GRUNT
# 305 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 306 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 307 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 308 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 309 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 310 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 311 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 312 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 313 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 30, 21
# 314 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 315 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 316 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 317 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 318 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 319 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 320 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 321 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 322 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 323 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 324 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_2
# 325 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_PEEKO_2
# 326 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 327 "data/maps/RustboroCity/scripts.pory"
	end
# 328 "data/maps/RustboroCity/scripts.pory"

# 329 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 330 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ShadyCharacterTookOff::
# 331 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 332 "data/maps/RustboroCity/scripts.pory"
	return
# 333 "data/maps/RustboroCity/scripts.pory"

# 334 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 335 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_YouGotItThankYou::
# 336 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 337 "data/maps/RustboroCity/scripts.pory"
	return
# 338 "data/maps/RustboroCity/scripts.pory"

# 339 "data/maps/RustboroCity/scripts.pory"
@ Unknown, unused employee movements. Based on the differences in movement theyre for approaching an object (probably the player) in different positions
# 340 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachUp::
# 341 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachUp
# 342 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 343 "data/maps/RustboroCity/scripts.pory"
	return
# 344 "data/maps/RustboroCity/scripts.pory"

# 345 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 346 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachLeft::
# 347 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachLeft
# 348 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 349 "data/maps/RustboroCity/scripts.pory"
	return
# 350 "data/maps/RustboroCity/scripts.pory"

# 351 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 352 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachRight::
# 353 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachRight
# 354 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 355 "data/maps/RustboroCity/scripts.pory"
	return
# 356 "data/maps/RustboroCity/scripts.pory"

# 357 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 358 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachDown::
# 359 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachDown
# 360 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 361 "data/maps/RustboroCity/scripts.pory"
	return
# 362 "data/maps/RustboroCity/scripts.pory"

# 363 "data/maps/RustboroCity/scripts.pory"
@ Unused, similar movement to the above scripts
# 364 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerFar::
# 365 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerFar
# 366 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 367 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 368 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 369 "data/maps/RustboroCity/scripts.pory"
	return
# 370 "data/maps/RustboroCity/scripts.pory"

# 371 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 372 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscapeExtended:
# 373 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 374 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 375 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 376 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 377 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 378 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 379 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 380 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 381 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 382 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 383 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 384 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 385 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 386 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 387 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 388 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 389 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 390 "data/maps/RustboroCity/scripts.pory"
	step_end
# 391 "data/maps/RustboroCity/scripts.pory"

# 392 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 393 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 394 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 395 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 396 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 397 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 398 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 399 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 400 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 401 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 402 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 403 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 404 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 405 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 406 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 407 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 408 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 409 "data/maps/RustboroCity/scripts.pory"
	step_end
# 410 "data/maps/RustboroCity/scripts.pory"

# 411 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
# 412 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 413 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 414 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 415 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 416 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 417 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 418 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 419 "data/maps/RustboroCity/scripts.pory"
	step_end
# 420 "data/maps/RustboroCity/scripts.pory"

# 421 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
# 422 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 423 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 424 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 425 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 426 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 427 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 428 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 429 "data/maps/RustboroCity/scripts.pory"
	step_end
# 430 "data/maps/RustboroCity/scripts.pory"

# 431 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 432 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachUp:
# 433 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 434 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 435 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 436 "data/maps/RustboroCity/scripts.pory"
	step_end
# 437 "data/maps/RustboroCity/scripts.pory"

# 438 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 439 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachLeft:
# 440 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 441 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 442 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 443 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 444 "data/maps/RustboroCity/scripts.pory"
	step_end
# 445 "data/maps/RustboroCity/scripts.pory"

# 446 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 447 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachRight:
# 448 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 449 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 450 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 451 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 452 "data/maps/RustboroCity/scripts.pory"
	step_end
# 453 "data/maps/RustboroCity/scripts.pory"

# 454 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 455 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachDown:
# 456 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 457 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 458 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 459 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 460 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 461 "data/maps/RustboroCity/scripts.pory"
	step_end
# 462 "data/maps/RustboroCity/scripts.pory"

# 463 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 464 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerFar:
# 465 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 466 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 467 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 468 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 469 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 470 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 471 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_down
# 472 "data/maps/RustboroCity/scripts.pory"
	step_end
# 473 "data/maps/RustboroCity/scripts.pory"

# 474 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1::
# 475 "data/maps/RustboroCity/scripts.pory"
	lock
# 476 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 477 "data/maps/RustboroCity/scripts.pory"
	delay(16)
# 478 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceRight
# 479 "data/maps/RustboroCity/scripts.pory"
	waitmovement LOCALID_DEVON_EMPLOYEE
# 480 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 481 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 482 "data/maps/RustboroCity/scripts.pory"
	release
# 483 "data/maps/RustboroCity/scripts.pory"
	end
# 484 "data/maps/RustboroCity/scripts.pory"

# 485 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 486 "data/maps/RustboroCity/scripts.pory"
	waitse
# 487 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 488 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 489 "data/maps/RustboroCity/scripts.pory"
	end
# 490 "data/maps/RustboroCity/scripts.pory"

# 491 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 492 "data/maps/RustboroCity/scripts.pory"
	lockall
# 493 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 494 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 495 "data/maps/RustboroCity/scripts.pory"
	end
# 496 "data/maps/RustboroCity/scripts.pory"

# 497 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 498 "data/maps/RustboroCity/scripts.pory"
	lockall
# 499 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 500 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 501 "data/maps/RustboroCity/scripts.pory"
	end
# 502 "data/maps/RustboroCity/scripts.pory"

# 503 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 504 "data/maps/RustboroCity/scripts.pory"
	lockall
# 505 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 506 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 507 "data/maps/RustboroCity/scripts.pory"
	end
# 508 "data/maps/RustboroCity/scripts.pory"

# 509 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 510 "data/maps/RustboroCity/scripts.pory"
	lockall
# 511 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 512 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 513 "data/maps/RustboroCity/scripts.pory"
	end
# 514 "data/maps/RustboroCity/scripts.pory"

# 515 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods::
# 516 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
# 517 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 518 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
# 519 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 520 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 521 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 522 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_DEVON_EMPLOYEE
# 523 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 524 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 525 "data/maps/RustboroCity/scripts.pory"
	end
# 526 "data/maps/RustboroCity/scripts.pory"

# 527 "data/maps/RustboroCity/scripts.pory"
@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
# 528 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 529 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceUp
# 530 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 531 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 532 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 533 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 534 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 535 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 536 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 537 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 538 "data/maps/RustboroCity/scripts.pory"
	return
# 539 "data/maps/RustboroCity/scripts.pory"

# 540 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 541 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceLeft
# 542 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 543 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 544 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 545 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 546 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 547 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 548 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 549 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 550 "data/maps/RustboroCity/scripts.pory"
	return
# 551 "data/maps/RustboroCity/scripts.pory"

# 552 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 553 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceDown
# 554 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 555 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 556 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 557 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 558 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 559 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 560 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 561 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 562 "data/maps/RustboroCity/scripts.pory"
	return
# 563 "data/maps/RustboroCity/scripts.pory"

# 564 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 565 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceDown
# 566 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 567 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 568 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 569 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 570 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 571 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 572 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 573 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 574 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 575 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 576 "data/maps/RustboroCity/scripts.pory"
	return
# 577 "data/maps/RustboroCity/scripts.pory"

# 578 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 579 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 580 "data/maps/RustboroCity/scripts.pory"
	step_end
# 581 "data/maps/RustboroCity/scripts.pory"

# 582 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0::
# 583 "data/maps/RustboroCity/scripts.pory"
	lockall
# 584 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 585 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 586 "data/maps/RustboroCity/scripts.pory"
	end
# 587 "data/maps/RustboroCity/scripts.pory"

# 588 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1::
# 589 "data/maps/RustboroCity/scripts.pory"
	lockall
# 590 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 591 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 592 "data/maps/RustboroCity/scripts.pory"
	end
# 593 "data/maps/RustboroCity/scripts.pory"

# 594 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2::
# 595 "data/maps/RustboroCity/scripts.pory"
	lockall
# 596 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 597 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 598 "data/maps/RustboroCity/scripts.pory"
	end
# 599 "data/maps/RustboroCity/scripts.pory"

# 600 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3::
# 601 "data/maps/RustboroCity/scripts.pory"
	lockall
# 602 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 603 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 604 "data/maps/RustboroCity/scripts.pory"
	end
# 605 "data/maps/RustboroCity/scripts.pory"

# 606 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods::
# 607 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
# 608 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 609 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
# 610 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 611 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
# 612 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 613 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 614 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
# 615 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 616 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 617 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 618 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 619 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 620 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 621 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 622 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 623 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 624 "data/maps/RustboroCity/scripts.pory"
	end
# 625 "data/maps/RustboroCity/scripts.pory"

# 626 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BagFull::
# 627 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 628 "data/maps/RustboroCity/scripts.pory"
	return
# 629 "data/maps/RustboroCity/scripts.pory"

# 630 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 631 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceUp
# 632 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 633 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 634 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 635 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 636 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 637 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 638 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 639 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 640 "data/maps/RustboroCity/scripts.pory"
	return
# 641 "data/maps/RustboroCity/scripts.pory"

# 642 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 643 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceRight
# 644 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 645 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 646 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 647 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 648 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 649 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 650 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 651 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 652 "data/maps/RustboroCity/scripts.pory"
	return
# 653 "data/maps/RustboroCity/scripts.pory"

# 654 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 655 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceDown
# 656 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 657 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 658 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 659 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 660 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 661 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 662 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 663 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 664 "data/maps/RustboroCity/scripts.pory"
	return
# 665 "data/maps/RustboroCity/scripts.pory"

# 666 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 667 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceDown
# 668 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 669 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 670 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 671 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 672 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 673 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 674 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 675 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 676 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 677 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 678 "data/maps/RustboroCity/scripts.pory"
	return
# 679 "data/maps/RustboroCity/scripts.pory"

# 680 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight::
# 681 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceLeft
# 682 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 683 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 684 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 685 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 686 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 687 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 688 "data/maps/RustboroCity/scripts.pory"
	return
# 689 "data/maps/RustboroCity/scripts.pory"

# 690 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Rival::
# 691 "data/maps/RustboroCity/scripts.pory"
	lockall
# 692 "data/maps/RustboroCity/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
# 693 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 694 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 695 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 696 "data/maps/RustboroCity/scripts.pory"

# 697 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic::
# 698 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 699 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
# 700 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
# 701 "data/maps/RustboroCity/scripts.pory"
	return
# 702 "data/maps/RustboroCity/scripts.pory"

# 703 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic::
# 704 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 705 "data/maps/RustboroCity/scripts.pory"
	return
# 706 "data/maps/RustboroCity/scripts.pory"

# 707 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic::
# 708 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 709 "data/maps/RustboroCity/scripts.pory"
	return
# 710 "data/maps/RustboroCity/scripts.pory"

# 711 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0::
# 712 "data/maps/RustboroCity/scripts.pory"
	lockall
# 713 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceDown
# 714 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 715 "data/maps/RustboroCity/scripts.pory"
	delay 8
# 716 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 717 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 718 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 719 "data/maps/RustboroCity/scripts.pory"
	waitse
# 720 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 721 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 722 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 723 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
# 724 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 725 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 726 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 727 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 728 "data/maps/RustboroCity/scripts.pory"

# 729 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1::
# 730 "data/maps/RustboroCity/scripts.pory"
	lockall
# 731 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 732 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceDown
# 733 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 734 "data/maps/RustboroCity/scripts.pory"
	delay 8
# 735 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 736 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 737 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 738 "data/maps/RustboroCity/scripts.pory"
	waitse
# 739 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 740 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 741 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 742 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 743 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 744 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
# 745 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 746 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 747 "data/maps/RustboroCity/scripts.pory"

# 748 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2::
# 749 "data/maps/RustboroCity/scripts.pory"
	lockall
# 750 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceDown
# 751 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 752 "data/maps/RustboroCity/scripts.pory"
	delay 8
# 753 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 754 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 755 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 756 "data/maps/RustboroCity/scripts.pory"
	waitse
# 757 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 758 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 759 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 760 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 761 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 762 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
# 763 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 764 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 765 "data/maps/RustboroCity/scripts.pory"

# 766 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3::
# 767 "data/maps/RustboroCity/scripts.pory"
	lockall
# 768 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceDown
# 769 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 770 "data/maps/RustboroCity/scripts.pory"
	delay 8
# 771 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 772 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 773 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 774 "data/maps/RustboroCity/scripts.pory"
	waitse
# 775 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 776 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 777 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 778 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 779 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 780 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
# 781 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 782 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 783 "data/maps/RustboroCity/scripts.pory"

# 784 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4::
# 785 "data/maps/RustboroCity/scripts.pory"
	lockall
# 786 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceDown
# 787 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 788 "data/maps/RustboroCity/scripts.pory"
	delay 8
# 789 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 790 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 791 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 792 "data/maps/RustboroCity/scripts.pory"
	waitse
# 793 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 794 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 795 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 796 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 797 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 798 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
# 799 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 800 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 801 "data/maps/RustboroCity/scripts.pory"

# 802 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5::
# 803 "data/maps/RustboroCity/scripts.pory"
	lockall
# 804 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceDown
# 805 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 806 "data/maps/RustboroCity/scripts.pory"
	delay 8
# 807 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 808 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 809 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 810 "data/maps/RustboroCity/scripts.pory"
	waitse
# 811 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 812 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 813 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 814 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 815 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 816 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
# 817 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 818 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 819 "data/maps/RustboroCity/scripts.pory"

# 820 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger6::
# 821 "data/maps/RustboroCity/scripts.pory"
	lockall
# 822 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceDown
# 823 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 824 "data/maps/RustboroCity/scripts.pory"
	delay 8
# 825 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 826 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 827 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 828 "data/maps/RustboroCity/scripts.pory"
	waitse
# 829 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 830 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 831 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 832 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 833 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 834 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
# 835 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 836 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 837 "data/maps/RustboroCity/scripts.pory"

# 838 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger7::
# 839 "data/maps/RustboroCity/scripts.pory"
	lockall
# 840 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceDown
# 841 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 842 "data/maps/RustboroCity/scripts.pory"
	delay 8
# 843 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 844 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 845 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 846 "data/maps/RustboroCity/scripts.pory"
	waitse
# 847 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 848 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 849 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 850 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 851 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 852 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
# 853 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 854 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 855 "data/maps/RustboroCity/scripts.pory"

# 856 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter::
# 857 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 858 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_MayEncounter
# 859 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_BrendanEncounter
# 860 "data/maps/RustboroCity/scripts.pory"
	end
# 861 "data/maps/RustboroCity/scripts.pory"

# 862 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayEncounter::
# 863 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayBrineyHint
# 864 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 865 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 866 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 867 "data/maps/RustboroCity/scripts.pory"
	delay 32
# 868 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 869 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
# 870 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 871 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 872 "data/maps/RustboroCity/scripts.pory"
	delay 32
# 873 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 874 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 875 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayPassedBriney, MSGBOX_DEFAULT
# 876 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 877 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 878 "data/maps/RustboroCity/scripts.pory"
	end
# 879 "data/maps/RustboroCity/scripts.pory"

# 880 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHint::
# 881 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 882 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 883 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 884 "data/maps/RustboroCity/scripts.pory"
	end
# 885 "data/maps/RustboroCity/scripts.pory"

# 886 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm::
# 887 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 888 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 889 "data/maps/RustboroCity/scripts.pory"
	return
# 890 "data/maps/RustboroCity/scripts.pory"

# 891 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter::
# 892 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanBrineyHint
# 893 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 894 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
# 895 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 896 "data/maps/RustboroCity/scripts.pory"
	delay 32
# 897 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 898 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 899 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 900 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 901 "data/maps/RustboroCity/scripts.pory"
	delay 32
# 902 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 903 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 904 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanPassedBriney, MSGBOX_DEFAULT
# 905 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 906 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 907 "data/maps/RustboroCity/scripts.pory"
	end
# 908 "data/maps/RustboroCity/scripts.pory"

# 909 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanBrineyHint::
# 910 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 911 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 912 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 913 "data/maps/RustboroCity/scripts.pory"
	end
# 914 "data/maps/RustboroCity/scripts.pory"

# 915 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 916 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 917 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 918 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 919 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 920 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 921 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 922 "data/maps/RustboroCity/scripts.pory"
	step_end
# 923 "data/maps/RustboroCity/scripts.pory"

# 924 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 925 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 926 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 927 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 928 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 929 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 930 "data/maps/RustboroCity/scripts.pory"
	step_end
# 931 "data/maps/RustboroCity/scripts.pory"

# 932 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 933 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 934 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 935 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 936 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 937 "data/maps/RustboroCity/scripts.pory"
	step_end
# 938 "data/maps/RustboroCity/scripts.pory"

# 939 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 940 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 941 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 942 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 943 "data/maps/RustboroCity/scripts.pory"
	step_end
# 944 "data/maps/RustboroCity/scripts.pory"

# 945 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 946 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 947 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 948 "data/maps/RustboroCity/scripts.pory"
	step_end
# 949 "data/maps/RustboroCity/scripts.pory"

# 950 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 951 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 952 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 953 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 954 "data/maps/RustboroCity/scripts.pory"
	step_end
# 955 "data/maps/RustboroCity/scripts.pory"

# 956 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 957 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 958 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 959 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 960 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 961 "data/maps/RustboroCity/scripts.pory"
	step_end
# 962 "data/maps/RustboroCity/scripts.pory"

# 963 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 964 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 965 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 966 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 967 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 968 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 969 "data/maps/RustboroCity/scripts.pory"
	step_end
# 970 "data/maps/RustboroCity/scripts.pory"

# 971 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 972 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 973 "data/maps/RustboroCity/scripts.pory"
	end
# 974 "data/maps/RustboroCity/scripts.pory"

# 975 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon:
# 976 "data/maps/RustboroCity/scripts.pory"
	.string "The Devon Corporation…\pThat's kind of a mouthful, so we just\nsay Devon.\pThe company makes all sorts of\nconvenient products.$"
# 977 "data/maps/RustboroCity/scripts.pory"

# 978 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 979 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? Did I see a sneaky-looking man?\nCome to think of it, yes!\pA shady-looking fellow just went around\nthe corner there.$"
# 980 "data/maps/RustboroCity/scripts.pory"

# 981 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym:
# 982 "data/maps/RustboroCity/scripts.pory"
	.string "Have you taken on a Pokémon Gym yet?\pOnce you get a shiny Gym Badge in your\nhand, that's when you really start to\lfeel like a Trainer.$"
# 983 "data/maps/RustboroCity/scripts.pory"

# 984 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge:
# 985 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, that's Rustboro's Gym Badge!\p"
# 986 "data/maps/RustboroCity/scripts.pory"
	.string "Out of all the Pokémon Gym Badges,\n"
# 987 "data/maps/RustboroCity/scripts.pory"
	.string "Rustboro's is the coolest, I'd say.$"
# 988 "data/maps/RustboroCity/scripts.pory"

# 989 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere:
# 990 "data/maps/RustboroCity/scripts.pory"
	.string "Oh?\nWho might you be?\pYou're a new face around these\nparts?\pHave you just transferred into the\nPokémon Trainers' School?$"
# 991 "data/maps/RustboroCity/scripts.pory"

# 992 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 993 "data/maps/RustboroCity/scripts.pory"
	.string "I challenged the Gym Leader, but…\p"
# 994 "data/maps/RustboroCity/scripts.pory"
	.string "It's not going to be easy winning with\n"
# 995 "data/maps/RustboroCity/scripts.pory"
	.string "my Fire-type Pokémon…\p"
# 996 "data/maps/RustboroCity/scripts.pory"
	.string "Fire-type Pokémon don't match up\n"
# 997 "data/maps/RustboroCity/scripts.pory"
	.string "well against Rock-type Pokémon…$"
# 998 "data/maps/RustboroCity/scripts.pory"

# 999 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 1000 "data/maps/RustboroCity/scripts.pory"
	.string "Every now and then I see that old\nsailor who lives by the sea, Mr. Briney\ltaking a stroll through the tunnel.$"
# 1001 "data/maps/RustboroCity/scripts.pory"

# 1002 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko:
# 1003 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor Mr. Briney lives in\n"
# 1004 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1005 "data/maps/RustboroCity/scripts.pory"
	.string "He said he was going shopping in\n"
# 1006 "data/maps/RustboroCity/scripts.pory"
	.string "Slateport for his pet, Peeko.\p"
# 1007 "data/maps/RustboroCity/scripts.pory"
	.string "That old sea dog, he must really love\n"
# 1008 "data/maps/RustboroCity/scripts.pory"
	.string "that Peeko.$"
# 1009 "data/maps/RustboroCity/scripts.pory"

# 1010 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon:
# 1011 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, you are with your Pokémon!\pWhen I'm an adult, someday I'll go to\nplaces with Pokémon, too.$"
# 1012 "data/maps/RustboroCity/scripts.pory"

# 1013 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 1014 "data/maps/RustboroCity/scripts.pory"
	.string "So this is the\nPokémon's Trainers' School!\pIf I enroll in this school, do you think\nI'll be able to catch rare Pokémon\leasily, too?$"
# 1015 "data/maps/RustboroCity/scripts.pory"

# 1016 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp:
# 1017 "data/maps/RustboroCity/scripts.pory"
	.string "If a Pokémon gains experience\nthrough battle, the way it looks\lcan sometimes change!$"
# 1018 "data/maps/RustboroCity/scripts.pory"

# 1019 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape:
# 1020 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon can change the way they\nlook?\pThat could be quite a shock!$"
# 1021 "data/maps/RustboroCity/scripts.pory"

# 1022 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast:
# 1023 "data/maps/RustboroCity/scripts.pory"
	.string "A Pokémon you get in a trade from\nsomeone else grows faster.\pBut if you don't have enough Gym\nBadges, it may not listen to you…$"
# 1024 "data/maps/RustboroCity/scripts.pory"

# 1025 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_OutOfTheWay:
# 1026 "data/maps/RustboroCity/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Out of the way! Move it!$"
# 1027 "data/maps/RustboroCity/scripts.pory"

# 1028 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods:
# 1029 "data/maps/RustboroCity/scripts.pory"
	.string "Wait! Pleeeaaase!\pDon't take those parts!$"
# 1030 "data/maps/RustboroCity/scripts.pory"

# 1031 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed:
# 1032 "data/maps/RustboroCity/scripts.pory"
	.string "{COLOR RED}Researcher{COLOR DARK_GRAY}: Oh, you there!\pYou're that fantastic Trainer who\nhelped me in Petalburg Woods!\pHelp me!\nI was robbed by Team Aqua!\pI have to get the Devon Parts back!\pIf I don't…\nI'm going to be in serious trouble…$"
# 1033 "data/maps/RustboroCity/scripts.pory"

# 1034 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 1035 "data/maps/RustboroCity/scripts.pory"
	.string "{COLOR RED}Researcher{COLOR DARK_GRAY}: I think that shady\ncharacter took off towards the\ltunnel over there.$"
# 1036 "data/maps/RustboroCity/scripts.pory"

# 1037 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou:
# 1038 "data/maps/RustboroCity/scripts.pory"
	.string "{COLOR RED}Researcher{COLOR DARK_GRAY}: Oh!\nHow did it go?\lDid you get my Devon Parts?\pYou did!\nYou got them back!\pYou really are a great Trainer!\pI know!\pAs my thanks, I'll give you a Great Ball!$"
# 1039 "data/maps/RustboroCity/scripts.pory"

# 1040 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems:
# 1041 "data/maps/RustboroCity/scripts.pory"
	.string "You're loaded with items.\n"
# 1042 "data/maps/RustboroCity/scripts.pory"
	.string "I can't give you this Great Ball.$"
# 1043 "data/maps/RustboroCity/scripts.pory"

# 1044 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe:
# 1045 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, yes! Young Trainer!\nPlease come with me!$"
# 1046 "data/maps/RustboroCity/scripts.pory"

# 1047 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayHiLetsRegister:
# 1048 "data/maps/RustboroCity/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Oh! Hey, {PLAYER}!\pHave you been catching lots of\nPokémon?\pI'm doing pretty good on that front,\nat least.\pI caught so many Pokémon in Petalburg\nWoods that I ran out of Poké Balls!\p…\pOh!\pYou have a Pokénav!\nAnd with a Match Call feature, too!\pLet's register each other so we can\ncontact one another anytime!$"
# 1049 "data/maps/RustboroCity/scripts.pory"
	
# 1050 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredMay:
# 1051 "data/maps/RustboroCity/scripts.pory"
	.string "Registered May\nin the Pokénav.$"
# 1052 "data/maps/RustboroCity/scripts.pory"

# 1053 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayPassedBriney:
# 1054 "data/maps/RustboroCity/scripts.pory"
	.string "Oh yeah… And I passed by Mr. Briney\nwhen I was in Petalburg Woods.\pHmm. I guess he must have been on his\nway home to his cottage on {COLOR BLUE}Route 104{COLOR DARK_GRAY}.\p{PLAYER}, you just moved here so\nthere's no way you could know, but\lMr. Briney was once a highly\lrespected seafarer.$"
# 1055 "data/maps/RustboroCity/scripts.pory"

# 1056 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayMrBrineyHint:
# 1057 "data/maps/RustboroCity/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Oh yeah…\nAnd I passed by Mr. Briney when I was\lin Petalburg Woods.\pHmm. I guess he must have been on his\nway home to his cottage on {COLOR BLUE}Route 104{COLOR DARK_GRAY}.\p{PLAYER}, you just moved here so\nthere's no way you could know, but\lMr. Briney was once a highly\lrespected seafarer.$"
# 1058 "data/maps/RustboroCity/scripts.pory"

# 1059 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanHiLetsRegister:
# 1060 "data/maps/RustboroCity/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: Hey, {PLAYER}.\pHow's your Pokédex?\nCompleted any entries yet?\pMine pretty much rules.\pI went on a Pokémon-catching frenzy\nin Petalburg Woods until I ran out of\lPoké Balls!\p…\pOh?\nYou have a Pokénav!\pAnd a Match Call feature, too.\nCool!\pLet's register each other so we can get\nin touch anytime.$"
# 1061 "data/maps/RustboroCity/scripts.pory"

# 1062 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredBrendan:
# 1063 "data/maps/RustboroCity/scripts.pory"
	.string "Registered Brendan\nin the Pokénav.$"
# 1064 "data/maps/RustboroCity/scripts.pory"

# 1065 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanPassedBriney:
# 1066 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, yeah. I passed by Mr. Briney in\nPetalburg Woods.\pI bet he was on his way home to his\ncottage on {COLOR BLUE}Route 104{COLOR DARK_GRAY}.\pI guess you wouldn't know, since you\njust moved here and all, but they say\lthat old guy used to be an amazing\lsailor!$"
# 1067 "data/maps/RustboroCity/scripts.pory"

# 1068 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanMrBrineyHint:
# 1069 "data/maps/RustboroCity/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: Oh, yeah. I passed by Mr.\nBriney in Petalburg Woods.\pI bet he was on his way home to his\ncottage on {COLOR BLUE}Route 104{COLOR DARK_GRAY}.\pI guess you wouldn't know, since you\njust moved here and all, but they say\lthat old guy used to be an amazing\lsailor!$"
# 1070 "data/maps/RustboroCity/scripts.pory"

# 1071 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion:
# 1072 "data/maps/RustboroCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
# 1073 "data/maps/RustboroCity/scripts.pory"
	.string "completion!”\p"
# 1074 "data/maps/RustboroCity/scripts.pory"
	.string "…Is what it says on the sign, but\n"
# 1075 "data/maps/RustboroCity/scripts.pory"
	.string "there's also a big “X” splashed\l"
# 1076 "data/maps/RustboroCity/scripts.pory"
	.string "across it in red paint…$"
# 1077 "data/maps/RustboroCity/scripts.pory"

# 1078 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpSign:
# 1079 "data/maps/RustboroCity/scripts.pory"
	.string "Devon Corporation\p"
# 1080 "data/maps/RustboroCity/scripts.pory"
	.string "“For all your living needs, we make\n"
# 1081 "data/maps/RustboroCity/scripts.pory"
	.string "it all.”$"
# 1082 "data/maps/RustboroCity/scripts.pory"

# 1083 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymSign:
# 1084 "data/maps/RustboroCity/scripts.pory"
	.string "Rustboro City Pokémon Gym\n"
# 1085 "data/maps/RustboroCity/scripts.pory"
	.string "Leader: Roxanne\p"
# 1086 "data/maps/RustboroCity/scripts.pory"
	.string "“The Rock-loving honors student!”$"
# 1087 "data/maps/RustboroCity/scripts.pory"

# 1088 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign:
# 1089 "data/maps/RustboroCity/scripts.pory"
	.string "Devon Corp. Branch Office\p"
# 1090 "data/maps/RustboroCity/scripts.pory"
	.string "“Access limited to Devon employees\n"
# 1091 "data/maps/RustboroCity/scripts.pory"
	.string "and authorized personnel.”$"
# 1092 "data/maps/RustboroCity/scripts.pory"

# 1093 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CitySign:
# 1094 "data/maps/RustboroCity/scripts.pory"
	.string "Rustboro City\p"
# 1095 "data/maps/RustboroCity/scripts.pory"
	.string "“The city probing the integration of\n"
# 1096 "data/maps/RustboroCity/scripts.pory"
	.string "nature and science.”$"
# 1097 "data/maps/RustboroCity/scripts.pory"

# 1098 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign:
# 1099 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon Trainer's School\p"
# 1100 "data/maps/RustboroCity/scripts.pory"
	.string "“We'll teach you anything about\n"
# 1101 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon!”$"
# 1102 "data/maps/RustboroCity/scripts.pory"

# 1103 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CuttersHouse:
# 1104 "data/maps/RustboroCity/scripts.pory"
	.string "Cutter's House$"
# 1105 "data/maps/RustboroCity/scripts.pory"

# 1106 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature:
# 1107 "data/maps/RustboroCity/scripts.pory"
	.string "I've been working on an exciting new\nfeature for the Pokénav…\lAnd it's turned out splendidly!\p{PLAYER}, could I take a look at\nyour Pokénav?\pThe one President Stone provided you\nwith?$"
# 1108 "data/maps/RustboroCity/scripts.pory"

# 1109 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 1110 "data/maps/RustboroCity/scripts.pory"
	.string "Fantastic!\nThere you go, {PLAYER}!\pI've added a new feature called the\nMatch Call to your Pokénav.\pWith the Match Call, you can easily\nconnect and chat with trainers\lyou've met on your journey, right\lfrom your Pokénav.\pYou know, President Stone should be\none of your first contacts.\pGive it a try!$"
# 1111 "data/maps/RustboroCity/scripts.pory"

# 1112 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav:
# 1113 "data/maps/RustboroCity/scripts.pory"
	.string "Go ahead, initiate a call with him\nand see how it works.$"
# 1114 "data/maps/RustboroCity/scripts.pory"

# 1115 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_IdBetterGetBackToWork:
# 1116 "data/maps/RustboroCity/scripts.pory"
	.string "OK!\nI'd better get back to work.\nPlease take care, {PLAYER}!$"
# 1117 "data/maps/RustboroCity/scripts.pory"

# 1118 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle:
# 1119 "data/maps/RustboroCity/scripts.pory"
	.string "Did you know this?\p"
# 1120 "data/maps/RustboroCity/scripts.pory"
	.string "You can have a 2-on-2 battle even\n"
# 1121 "data/maps/RustboroCity/scripts.pory"
	.string "if you're not with another Trainer.\p"
# 1122 "data/maps/RustboroCity/scripts.pory"
	.string "If you catch the eyes of two Trainers\n"
# 1123 "data/maps/RustboroCity/scripts.pory"
	.string "when you have two or more Pokémon,\l"
# 1124 "data/maps/RustboroCity/scripts.pory"
	.string "they'll both challenge you.\p"
# 1125 "data/maps/RustboroCity/scripts.pory"
	.string "Don't you think it'd be cool if you\n"
# 1126 "data/maps/RustboroCity/scripts.pory"
	.string "could beat two Trainers by yourself?$"

RustboroCity_EventScript_RivalTriggerFirstMeet22::
# 1133 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 22
# 1134 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalTriggerGreet
	return


RustboroCity_EventScript_RivalTriggerFirstMeet23::
# 1138 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 23
# 1139 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalTriggerGreet
	return


RustboroCity_EventScript_RivalTriggerFirstMeet24::
# 1143 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 24
# 1144 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalTriggerGreet
	return


RustboroCity_EventScript_RivalTriggerFirstMeet25::
# 1148 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 25
# 1149 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalTriggerGreet
	return


RustboroCity_EventScript_RivalTriggerFirstMeet26::
# 1153 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 26
# 1154 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalTriggerGreet
	return


RustboroCity_EventScript_RivalTriggerFirstMeet27::
# 1158 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 27
# 1159 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalTriggerGreet
	return


RustboroCity_EventScript_RivalTriggerFirstMeet28::
# 1163 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 28
# 1164 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalTriggerGreet
	return


RustboroCity_EventScript_RivalTriggerFirstMeet29::
# 1168 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 29
# 1169 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalTriggerGreet
	return


RustboroCity_EventScript_RivalTriggerGreet::
# 1173 "data/maps/RustboroCity/scripts.pory"
	lock
# 1174 "data/maps/RustboroCity/scripts.pory"
	delay 16
# 1175 "data/maps/RustboroCity/scripts.pory"
	special SpawnCameraObject
# 1176 "data/maps/RustboroCity/scripts.pory"
	switch VAR_TEMP_1
# 1178 "data/maps/RustboroCity/scripts.pory"
	case 22, RustboroCity_EventScript_RivalTriggerGreet_3
# 1179 "data/maps/RustboroCity/scripts.pory"
	case 23, RustboroCity_EventScript_RivalTriggerGreet_4
# 1180 "data/maps/RustboroCity/scripts.pory"
	case 24, RustboroCity_EventScript_RivalTriggerGreet_5
# 1181 "data/maps/RustboroCity/scripts.pory"
	case 25, RustboroCity_EventScript_RivalTriggerGreet_6
# 1182 "data/maps/RustboroCity/scripts.pory"
	case 26, RustboroCity_EventScript_RivalTriggerGreet_7
# 1183 "data/maps/RustboroCity/scripts.pory"
	case 27, RustboroCity_EventScript_RivalTriggerGreet_8
# 1184 "data/maps/RustboroCity/scripts.pory"
	case 28, RustboroCity_EventScript_RivalTriggerGreet_9
# 1185 "data/maps/RustboroCity/scripts.pory"
	case 29, RustboroCity_EventScript_RivalTriggerGreet_10
	end

RustboroCity_EventScript_RivalTriggerGreet_1:
# 1188 "data/maps/RustboroCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1189 "data/maps/RustboroCity/scripts.pory"
	opendoor 15, 54
# 1190 "data/maps/RustboroCity/scripts.pory"
	waitdooranim
# 1191 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 1192 "data/maps/RustboroCity/scripts.pory"
	addobject 17
# 1193 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroCity_Movement_RivalWalkDown
# 1194 "data/maps/RustboroCity/scripts.pory"
	waitmovement 17
# 1195 "data/maps/RustboroCity/scripts.pory"
	closedoor 15, 54
# 1196 "data/maps/RustboroCity/scripts.pory"
	waitdooranim
# 1197 "data/maps/RustboroCity/scripts.pory"
	delay 8
# 1198 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroCity_Movement_RivalWalkDown
# 1199 "data/maps/RustboroCity/scripts.pory"
	waitmovement 17
# 1200 "data/maps/RustboroCity/scripts.pory"
	delay 8
# 1201 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 1202 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, Common_Movement_ExclamationMark
# 1203 "data/maps/RustboroCity/scripts.pory"
	waitmovement 17
# 1204 "data/maps/RustboroCity/scripts.pory"
	delay 16
# 1205 "data/maps/RustboroCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1206 "data/maps/RustboroCity/scripts.pory"
	switch VAR_TEMP_1
# 1208 "data/maps/RustboroCity/scripts.pory"
	case 22, RustboroCity_EventScript_RivalTriggerGreet_14
# 1209 "data/maps/RustboroCity/scripts.pory"
	case 23, RustboroCity_EventScript_RivalTriggerGreet_15
# 1210 "data/maps/RustboroCity/scripts.pory"
	case 24, RustboroCity_EventScript_RivalTriggerGreet_16
# 1211 "data/maps/RustboroCity/scripts.pory"
	case 25, RustboroCity_EventScript_RivalTriggerGreet_17
# 1212 "data/maps/RustboroCity/scripts.pory"
	case 26, RustboroCity_EventScript_RivalTriggerGreet_18
# 1213 "data/maps/RustboroCity/scripts.pory"
	case 27, RustboroCity_EventScript_RivalTriggerGreet_19
# 1214 "data/maps/RustboroCity/scripts.pory"
	case 28, RustboroCity_EventScript_RivalTriggerGreet_20
# 1215 "data/maps/RustboroCity/scripts.pory"
	case 29, RustboroCity_EventScript_RivalTriggerGreet_21
	end

RustboroCity_EventScript_RivalTriggerGreet_3:
# 1178 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RustboroCity_Movement_22_PanToRival
	goto RustboroCity_EventScript_RivalTriggerGreet_1

RustboroCity_EventScript_RivalTriggerGreet_4:
# 1179 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RustboroCity_Movement_23_PanToRival
	goto RustboroCity_EventScript_RivalTriggerGreet_1

RustboroCity_EventScript_RivalTriggerGreet_5:
# 1180 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RustboroCity_Movement_24_PanToRival
	goto RustboroCity_EventScript_RivalTriggerGreet_1

RustboroCity_EventScript_RivalTriggerGreet_6:
# 1181 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RustboroCity_Movement_25_PanToRival
	goto RustboroCity_EventScript_RivalTriggerGreet_1

RustboroCity_EventScript_RivalTriggerGreet_7:
# 1182 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RustboroCity_Movement_26_PanToRival
	goto RustboroCity_EventScript_RivalTriggerGreet_1

RustboroCity_EventScript_RivalTriggerGreet_8:
# 1183 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RustboroCity_Movement_27_PanToRival
	goto RustboroCity_EventScript_RivalTriggerGreet_1

RustboroCity_EventScript_RivalTriggerGreet_9:
# 1184 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RustboroCity_Movement_28_PanToRival
	goto RustboroCity_EventScript_RivalTriggerGreet_1

RustboroCity_EventScript_RivalTriggerGreet_10:
# 1185 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RustboroCity_Movement_29_PanToRival
	goto RustboroCity_EventScript_RivalTriggerGreet_1

RustboroCity_EventScript_RivalTriggerGreet_12:
# 1218 "data/maps/RustboroCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1219 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceLeft
# 1220 "data/maps/RustboroCity/scripts.pory"
	waitmovement 17
# 1221 "data/maps/RustboroCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1222 "data/maps/RustboroCity/scripts.pory"
	special RemoveCameraObject
# 1223 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 1224 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RustboroCity_EventScript_RivalTriggerGreet_24
# 1227 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_RivalTriggerGreet_Text_1
RustboroCity_EventScript_RivalTriggerGreet_23:
# 1229 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 1230 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroCity_Movement_LookAround
# 1231 "data/maps/RustboroCity/scripts.pory"
	waitmovement 17
# 1232 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 1233 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RustboroCity_EventScript_RivalTriggerGreet_28
# 1236 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_RivalTriggerGreet_Text_3
RustboroCity_EventScript_RivalTriggerGreet_27:
# 1238 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 1239 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceLeft
# 1240 "data/maps/RustboroCity/scripts.pory"
	waitmovement 17
# 1241 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 1242 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RustboroCity_EventScript_RivalTriggerGreet_32
# 1245 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_RivalTriggerGreet_Text_5
RustboroCity_EventScript_RivalTriggerGreet_31:
# 1247 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 1248 "data/maps/RustboroCity/scripts.pory"
	applymovement 17, RustboroCity_Movement_RivalExit
# 1249 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_SeeRivalExit
# 1250 "data/maps/RustboroCity/scripts.pory"
	waitmovement 17
# 1251 "data/maps/RustboroCity/scripts.pory"
	removeobject 17
# 1252 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_RIVAL_ENCOUNTER_STATE, 1
# 1253 "data/maps/RustboroCity/scripts.pory"
	release
	end

RustboroCity_EventScript_RivalTriggerGreet_14:
# 1208 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_22_GoToRival
	goto RustboroCity_EventScript_RivalTriggerGreet_12

RustboroCity_EventScript_RivalTriggerGreet_15:
# 1209 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_23_GoToRival
	goto RustboroCity_EventScript_RivalTriggerGreet_12

RustboroCity_EventScript_RivalTriggerGreet_16:
# 1210 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_24_GoToRival
	goto RustboroCity_EventScript_RivalTriggerGreet_12

RustboroCity_EventScript_RivalTriggerGreet_17:
# 1211 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_25_GoToRival
	goto RustboroCity_EventScript_RivalTriggerGreet_12

RustboroCity_EventScript_RivalTriggerGreet_18:
# 1212 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_26_GoToRival
	goto RustboroCity_EventScript_RivalTriggerGreet_12

RustboroCity_EventScript_RivalTriggerGreet_19:
# 1213 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_27_GoToRival
	goto RustboroCity_EventScript_RivalTriggerGreet_12

RustboroCity_EventScript_RivalTriggerGreet_20:
# 1214 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_28_GoToRival
	goto RustboroCity_EventScript_RivalTriggerGreet_12

RustboroCity_EventScript_RivalTriggerGreet_21:
# 1215 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_29_GoToRival
	goto RustboroCity_EventScript_RivalTriggerGreet_12

RustboroCity_EventScript_RivalTriggerGreet_24:
# 1225 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_RivalTriggerGreet_Text_0
	goto RustboroCity_EventScript_RivalTriggerGreet_23

RustboroCity_EventScript_RivalTriggerGreet_28:
# 1234 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_RivalTriggerGreet_Text_2
	goto RustboroCity_EventScript_RivalTriggerGreet_27

RustboroCity_EventScript_RivalTriggerGreet_32:
# 1243 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_RivalTriggerGreet_Text_4
	goto RustboroCity_EventScript_RivalTriggerGreet_31


# 1257 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_22_PanToRival:
# 1258 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1258 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1258 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1258 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1259 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1259 "data/maps/RustboroCity/scripts.pory"
	walk_right
	step_end

# 1262 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_23_PanToRival:
# 1263 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1263 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1263 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1263 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1264 "data/maps/RustboroCity/scripts.pory"
	walk_right
	step_end

# 1267 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_24_PanToRival:
# 1268 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1268 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1268 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1268 "data/maps/RustboroCity/scripts.pory"
	walk_up
	step_end

# 1271 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_25_PanToRival:
# 1272 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1272 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1272 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1272 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1273 "data/maps/RustboroCity/scripts.pory"
	walk_left
	step_end

# 1276 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_26_PanToRival:
# 1277 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1277 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1277 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1277 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1278 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1278 "data/maps/RustboroCity/scripts.pory"
	walk_left
	step_end

# 1281 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_27_PanToRival:
# 1282 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1282 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1282 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1282 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1283 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1283 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1283 "data/maps/RustboroCity/scripts.pory"
	walk_left
	step_end

# 1286 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_28_PanToRival:
# 1287 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1287 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1287 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1287 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1288 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1288 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1288 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1288 "data/maps/RustboroCity/scripts.pory"
	walk_left
	step_end

# 1291 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_29_PanToRival:
# 1292 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1292 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1292 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1292 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 1293 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1293 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1293 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1293 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1293 "data/maps/RustboroCity/scripts.pory"
	walk_left
	step_end

# 1296 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalWalkDown:
# 1297 "data/maps/RustboroCity/scripts.pory"
	walk_down
	step_end

# 1300 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_22_GoToRival:
# 1301 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 1301 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 1302 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1302 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1302 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1302 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1303 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_right
	step_end

# 1306 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_23_GoToRival:
# 1307 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 1308 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1308 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1308 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1308 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1309 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_right
	step_end

# 1312 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_24_GoToRival:
# 1313 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1313 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1313 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1313 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1314 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_right
	step_end

# 1317 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_25_GoToRival:
# 1318 "data/maps/RustboroCity/scripts.pory"
	walk_fast_left
# 1319 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1319 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1319 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1319 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1320 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_right
	step_end

# 1323 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_26_GoToRival:
# 1324 "data/maps/RustboroCity/scripts.pory"
	walk_fast_left
# 1324 "data/maps/RustboroCity/scripts.pory"
	walk_fast_left
# 1325 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1325 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1325 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1325 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1326 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_right
	step_end

# 1329 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_27_GoToRival:
# 1330 "data/maps/RustboroCity/scripts.pory"
	walk_fast_left
# 1330 "data/maps/RustboroCity/scripts.pory"
	walk_fast_left
# 1330 "data/maps/RustboroCity/scripts.pory"
	walk_fast_left
# 1331 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1331 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1331 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1331 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1332 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_right
	step_end

# 1335 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_28_GoToRival:
# 1336 "data/maps/RustboroCity/scripts.pory"
	walk_fast_left
# 1336 "data/maps/RustboroCity/scripts.pory"
	walk_fast_left
# 1336 "data/maps/RustboroCity/scripts.pory"
	walk_fast_left
# 1336 "data/maps/RustboroCity/scripts.pory"
	walk_fast_left
# 1337 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1337 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1337 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1337 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1338 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_right
	step_end

# 1341 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_29_GoToRival:
# 1342 "data/maps/RustboroCity/scripts.pory"
	walk_fast_left
# 1342 "data/maps/RustboroCity/scripts.pory"
	walk_fast_left
# 1342 "data/maps/RustboroCity/scripts.pory"
	walk_fast_left
# 1342 "data/maps/RustboroCity/scripts.pory"
	walk_fast_left
# 1342 "data/maps/RustboroCity/scripts.pory"
	walk_fast_left
# 1343 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1343 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1343 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1343 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1344 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_right
	step_end

# 1347 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_LookAround:
# 1348 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 1349 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_right
# 1350 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 1351 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
	step_end

# 1354 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalExit:
# 1355 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 1355 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 1355 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 1355 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 1355 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 1356 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1356 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1356 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1356 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1356 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 1356 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
	step_end

# 1359 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_SeeRivalExit:
# 1360 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 1360 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 1360 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 1360 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 1361 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_up
	step_end

RustboroCity_EventScript_RivalTriggerGreet_Text_0:
# 1225 "data/maps/RustboroCity/scripts.pory"
	.string "{COLOR RED}{RIVAL}{COLOR DARK_GRAY}: So you made it here to\nRustboro, too, {PLAYER}!$"

RustboroCity_EventScript_RivalTriggerGreet_Text_1:
# 1227 "data/maps/RustboroCity/scripts.pory"
	.string "{COLOR RED}{RIVAL}{COLOR DARK_GRAY}: So you made it here to\nRustboro, too, {PLAYER}.$"

RustboroCity_EventScript_RivalTriggerGreet_Text_2:
# 1234 "data/maps/RustboroCity/scripts.pory"
	.string "It's really big here, isn't it?\nLittleroot can't even compare.$"

RustboroCity_EventScript_RivalTriggerGreet_Text_3:
# 1236 "data/maps/RustboroCity/scripts.pory"
	.string "It's a real city, huh?\nNothing like Littleroot.$"

RustboroCity_EventScript_RivalTriggerGreet_Text_4:
# 1243 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, and {PLAYER}, have you heard?\nThere's a Pokémon Gym here, too!\pOnce I catch a couple more Pokémon, I'll\nbe sure take it on with my team!\pSee you later!$"

RustboroCity_EventScript_RivalTriggerGreet_Text_5:
# 1245 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, did you know?\nThere's a Pokémon Gym here, too.\pSoon as I gather a few more Pokémon,\nI'll be trying my team against it!\pSee ya!$"
