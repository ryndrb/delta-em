# 1 "data/maps/SlateportCity_Harbor/scripts.pory"

# 2 "data/maps/SlateportCity_Harbor/scripts.pory"
.set LOCALID_CAPT_STERN, 4
# 3 "data/maps/SlateportCity_Harbor/scripts.pory"
.set LOCALID_SS_TIDAL, 5
# 4 "data/maps/SlateportCity_Harbor/scripts.pory"
.set LOCALID_SHELLY, 6
# 5 "data/maps/SlateportCity_Harbor/scripts.pory"
.set LOCALID_ARCHIE, 7
# 6 "data/maps/SlateportCity_Harbor/scripts.pory"
.set LOCALID_SUBMARINE, 8
# 7 "data/maps/SlateportCity_Harbor/scripts.pory"

# 8 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_MapScripts::
# 9 "data/maps/SlateportCity_Harbor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_Harbor_OnTransition
# 10 "data/maps/SlateportCity_Harbor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_Harbor_OnFrameTable
# 11 "data/maps/SlateportCity_Harbor/scripts.pory"
	.byte 0
# 12 "data/maps/SlateportCity_Harbor/scripts.pory"

# 13 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_OnTransition:
# 14 "data/maps/SlateportCity_Harbor/scripts.pory"
	setescapewarp MAP_SLATEPORT_CITY, 28, 13
# 15 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_TEMP_1, 0
# 16 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_SLATEPORT_HARBOR_STATE, 1, SlateportCity_Harbor_EventScript_ReadyAquaEscapeScene
# 17 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_ShowSSTidal
# 18 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 19 "data/maps/SlateportCity_Harbor/scripts.pory"

# 20 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ShowSSTidal::
# 21 "data/maps/SlateportCity_Harbor/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SS_TIDAL
# 22 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 23 "data/maps/SlateportCity_Harbor/scripts.pory"

# 24 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ReadyAquaEscapeScene::
# 25 "data/maps/SlateportCity_Harbor/scripts.pory"
	savebgm MUS_ENCOUNTER_AQUA
# 26 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectxyperm LOCALID_CAPT_STERN, 8, 12
# 27 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectmovementtype LOCALID_CAPT_STERN, MOVEMENT_TYPE_FACE_UP
# 28 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
# 29 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 30 "data/maps/SlateportCity_Harbor/scripts.pory"

# 31 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_OnFrameTable:
# 32 "data/maps/SlateportCity_Harbor/scripts.pory"
	map_script_2 VAR_SLATEPORT_HARBOR_STATE, 1, SlateportCity_Harbor_EventScript_AquaEscapeScene
# 33 "data/maps/SlateportCity_Harbor/scripts.pory"
	.2byte 0
# 34 "data/maps/SlateportCity_Harbor/scripts.pory"

# 35 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_FerryAttendant::
# 36 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock
# 37 "data/maps/SlateportCity_Harbor/scripts.pory"
	faceplayer
# 38 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_AskForTicket
# 39 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_FerryServiceUnavailable, MSGBOX_DEFAULT
# 40 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 41 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 42 "data/maps/SlateportCity_Harbor/scripts.pory"

# 43 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AskForTicket::
# 44 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 45 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_FlashedTicketWhereTo
# 46 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 47 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDestination
# 48 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 49 "data/maps/SlateportCity_Harbor/scripts.pory"

# 50 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDestination::
# 51 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_ON_SS_TIDAL, SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier
# 52 "data/maps/SlateportCity_Harbor/scripts.pory"
	multichoicedefault 18, 8, MULTI_SSTIDAL_SLATEPORT_NO_BF, 2, FALSE
# 53 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 54 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 0, SlateportCity_Harbor_EventScript_Lilycove
# 55 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 1, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 56 "data/maps/SlateportCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 57 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 58 "data/maps/SlateportCity_Harbor/scripts.pory"

# 59 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier::
# 60 "data/maps/SlateportCity_Harbor/scripts.pory"
	multichoicedefault 17, 6, MULTI_SSTIDAL_SLATEPORT_WITH_BF, 2, FALSE
# 61 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 62 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 0, SlateportCity_Harbor_EventScript_Lilycove
# 63 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 1, SlateportCity_Harbor_EventScript_BattleFrontier
# 64 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 2, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 65 "data/maps/SlateportCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 66 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 67 "data/maps/SlateportCity_Harbor/scripts.pory"

# 68 "data/maps/SlateportCity_Harbor/scripts.pory"
@ Unused. Should be impossible for player to reach Ferry without having received SS Tidal ticket
# 69 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_NoTicket::
# 70 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_YouMustHaveTicket, MSGBOX_DEFAULT
# 71 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 72 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 73 "data/maps/SlateportCity_Harbor/scripts.pory"

# 74 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_Lilycove::
# 75 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_LilycoveItIs, MSGBOX_YESNO
# 76 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_Harbor_EventScript_ChooseNewDestination
# 77 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_BOARD_SLATEPORT
# 78 "data/maps/SlateportCity_Harbor/scripts.pory"
	call SlateportCity_Harbor_EventScript_BoardFerry
# 79 "data/maps/SlateportCity_Harbor/scripts.pory"
	warp MAP_SS_TIDAL_CORRIDOR, 1, 10
# 80 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitstate
# 81 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 82 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 83 "data/maps/SlateportCity_Harbor/scripts.pory"

# 84 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BattleFrontier::
# 85 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_BattleFrontierItIs, MSGBOX_YESNO
# 86 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_Harbor_EventScript_ChooseNewDestination
# 87 "data/maps/SlateportCity_Harbor/scripts.pory"
	call SlateportCity_Harbor_EventScript_BoardFerry
# 88 "data/maps/SlateportCity_Harbor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_OUTSIDE_WEST, 19, 67
# 89 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitstate
# 90 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 91 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 92 "data/maps/SlateportCity_Harbor/scripts.pory"

# 93 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseNewDestination::
# 94 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_WhereWouldYouLikeToGo
# 95 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 96 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDestination
# 97 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 98 "data/maps/SlateportCity_Harbor/scripts.pory"

# 99 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerry::
# 100 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 101 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 102 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceUp
# 103 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 104 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 30
# 105 "data/maps/SlateportCity_Harbor/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_SLATEPORT_CITY_HARBOR
# 106 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SlateportCity_Harbor_EventScript_BoardFerryNorth
# 107 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SlateportCity_Harbor_EventScript_BoardFerryEast
# 108 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 30
# 109 "data/maps/SlateportCity_Harbor/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 110 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8004, LOCALID_SS_TIDAL
# 111 "data/maps/SlateportCity_Harbor/scripts.pory"
	call Common_EventScript_FerryDepart
# 112 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 113 "data/maps/SlateportCity_Harbor/scripts.pory"

# 114 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CancelDestinationSelect::
# 115 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SailAnotherTime, MSGBOX_DEFAULT
# 116 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 117 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 118 "data/maps/SlateportCity_Harbor/scripts.pory"

# 119 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerryEast::
# 120 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Harbor_Movement_BoardFerryEast
# 121 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 122 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 123 "data/maps/SlateportCity_Harbor/scripts.pory"

# 124 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerryNorth::
# 125 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Harbor_Movement_BoardFerryNorth
# 126 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 127 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 128 "data/maps/SlateportCity_Harbor/scripts.pory"

# 129 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_BoardFerryEast:
# 130 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 131 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_in_place_up
# 132 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 133 "data/maps/SlateportCity_Harbor/scripts.pory"

# 134 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_BoardFerryNorth:
# 135 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 136 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 137 "data/maps/SlateportCity_Harbor/scripts.pory"

# 138 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_Sailor::
# 139 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock
# 140 "data/maps/SlateportCity_Harbor/scripts.pory"
	faceplayer
# 141 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_SailorNoAbnormalWeather
# 142 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8004, 0
# 143 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_set FLAG_DEFEATED_KYOGRE, SlateportCity_Harbor_EventScript_CountDefeatedLegendary
# 144 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_set FLAG_DEFEATED_GROUDON, SlateportCity_Harbor_EventScript_CountDefeatedLegendary
# 145 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_0x8004, 2, SlateportCity_Harbor_EventScript_SailorNoAbnormalWeather  @ Defeated both
# 146 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_AbnormalWeather, MSGBOX_DEFAULT
# 147 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 148 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 149 "data/maps/SlateportCity_Harbor/scripts.pory"

# 150 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_SailorNoAbnormalWeather::
# 151 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_LoveToGoDeepUnderwaterSomeday, MSGBOX_DEFAULT
# 152 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 153 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 154 "data/maps/SlateportCity_Harbor/scripts.pory"

# 155 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CountDefeatedLegendary::
# 156 "data/maps/SlateportCity_Harbor/scripts.pory"
	addvar VAR_0x8004, 1
# 157 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 158 "data/maps/SlateportCity_Harbor/scripts.pory"

# 159 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_FatMan::
# 160 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SubTooSmallForMe, MSGBOX_NPC
# 161 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 162 "data/maps/SlateportCity_Harbor/scripts.pory"

# 163 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptStern::
# 164 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock
# 165 "data/maps/SlateportCity_Harbor/scripts.pory"
	faceplayer
# 166 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment
# 167 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_EVIL_TEAM_ESCAPED_STERN_SPOKE, SlateportCity_Harbor_EventScript_NeedDive
# 168 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, SlateportCity_Harbor_EventScript_TeamAquaLeftNeedDive
# 169 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_SLATEPORT_HARBOR_STATE, 2, SlateportCity_Harbor_EventScript_WhyStealSubmarine
# 170 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SameThugsTriedToRobAtMuseum, MSGBOX_DEFAULT
# 171 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 172 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 173 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 174 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 175 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 176 "data/maps/SlateportCity_Harbor/scripts.pory"

# 177 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_WhyStealSubmarine::
# 178 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_CaptSternWhyStealMySubmarine, MSGBOX_DEFAULT
# 179 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 180 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 181 "data/maps/SlateportCity_Harbor/scripts.pory"

# 182 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_TeamAquaLeftNeedDive::
# 183 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_EVIL_TEAM_ESCAPED_STERN_SPOKE
# 184 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_NeedDiveToCatchSub, MSGBOX_DEFAULT
# 185 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 186 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 187 "data/maps/SlateportCity_Harbor/scripts.pory"

# 188 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_NeedDive::
# 189 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_NeedDiveToCatchSub, MSGBOX_DEFAULT
# 190 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 191 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 192 "data/maps/SlateportCity_Harbor/scripts.pory"

# 193 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment::
# 194 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_TEMP_1, 1, SlateportCity_Harbor_EventScript_TradedScanner
# 195 "data/maps/SlateportCity_Harbor/scripts.pory"
	checkitem ITEM_SCANNER
# 196 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_Harbor_EventScript_AskToTradeScanner
# 197 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_FerryFinished
# 198 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_WontBeLongBeforeWeFinishFerry, MSGBOX_DEFAULT
# 199 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 200 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 201 "data/maps/SlateportCity_Harbor/scripts.pory"

# 202 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_FerryFinished::
# 203 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_FinishedMakingFerry, MSGBOX_DEFAULT
# 204 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 205 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 206 "data/maps/SlateportCity_Harbor/scripts.pory"

# 207 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AskToTradeScanner::
# 208 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_WouldYouTradeScanner
# 209 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 210 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseScannerTrade
# 211 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 212 "data/maps/SlateportCity_Harbor/scripts.pory"

# 213 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseScannerTrade::
# 214 "data/maps/SlateportCity_Harbor/scripts.pory"
	multichoice 0, 0, MULTI_STERN_DEEPSEA, FALSE
# 215 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 216 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 0, SlateportCity_Harbor_EventScript_DeepSeaTooth
# 217 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 1, SlateportCity_Harbor_EventScript_DeepSeaScale
# 218 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 2, SlateportCity_Harbor_EventScript_DeclineTrade
# 219 "data/maps/SlateportCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_Harbor_EventScript_DeclineTrade
# 220 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 221 "data/maps/SlateportCity_Harbor/scripts.pory"

# 222 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_DeepSeaTooth::
# 223 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_TradeForDeepSeaTooth, MSGBOX_YESNO
# 224 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_Harbor_EventScript_ChooseDifferentTrade
# 225 "data/maps/SlateportCity_Harbor/scripts.pory"
	giveitem ITEM_DEEP_SEA_TOOTH
# 226 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 227 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeitem ITEM_SCANNER
# 228 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_HandedScannerToStern, MSGBOX_DEFAULT
# 229 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_EXCHANGED_SCANNER
# 230 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_TradedScanner
# 231 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 232 "data/maps/SlateportCity_Harbor/scripts.pory"

# 233 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_DeepSeaScale::
# 234 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_TradeForDeepSeaScale, MSGBOX_YESNO
# 235 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_Harbor_EventScript_ChooseDifferentTrade
# 236 "data/maps/SlateportCity_Harbor/scripts.pory"
	giveitem ITEM_DEEP_SEA_SCALE
# 237 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 238 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeitem ITEM_SCANNER
# 239 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_HandedScannerToStern, MSGBOX_DEFAULT
# 240 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_EXCHANGED_SCANNER
# 241 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_TradedScanner
# 242 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 243 "data/maps/SlateportCity_Harbor/scripts.pory"

# 244 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_DeclineTrade::
# 245 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_IfYouWantToTradeLetMeKnow, MSGBOX_DEFAULT
# 246 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 247 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 248 "data/maps/SlateportCity_Harbor/scripts.pory"

# 249 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDifferentTrade::
# 250 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_WhichOneDoYouWant
# 251 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 252 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseScannerTrade
# 253 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 254 "data/maps/SlateportCity_Harbor/scripts.pory"

# 255 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_TradedScanner::
# 256 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 257 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_ThisWillHelpResearch, MSGBOX_DEFAULT
# 258 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 259 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 260 "data/maps/SlateportCity_Harbor/scripts.pory"

# 261 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_FerryServiceUnavailable:
# 262 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I beg your pardon?\nYou're looking for a ship?\pI'm sorry.\nThe ferry service isn't available at\lpresent…$"
# 263 "data/maps/SlateportCity_Harbor/scripts.pory"

# 264 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_MayISeeYourTicket:
# 265 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Hello, are you here for the ferry?\n"
# 266 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "May I see your Ticket?$"
# 267 "data/maps/SlateportCity_Harbor/scripts.pory"

# 268 "data/maps/SlateportCity_Harbor/scripts.pory"

# 269 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_YouMustHaveTicket:
# 270 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} doesn't have the Ticket…\p"
# 271 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I'm terribly sorry.\p"
# 272 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You must have a Ticket to board\n"
# 273 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "the ferry.$"
# 274 "data/maps/SlateportCity_Harbor/scripts.pory"

# 275 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_FlashedTicketWhereTo:
# 276 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} flashed the Ticket.\p"
# 277 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Perfect! That's all you need!\p"
# 278 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "And where would you like to go?$"
# 279 "data/maps/SlateportCity_Harbor/scripts.pory"

# 280 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_SailAnotherTime:
# 281 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Please sail with us another time!$"
# 282 "data/maps/SlateportCity_Harbor/scripts.pory"

# 283 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_LilycoveItIs:
# 284 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Lilycove City it is, then!$"
# 285 "data/maps/SlateportCity_Harbor/scripts.pory"

# 286 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_BattleFrontierItIs:
# 287 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Battle Frontier it is, then!$"
# 288 "data/maps/SlateportCity_Harbor/scripts.pory"

# 289 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_PleaseBoardFerry:
# 290 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Please board the ferry and wait for\n"
# 291 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "departure.$"
# 292 "data/maps/SlateportCity_Harbor/scripts.pory"

# 293 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WhereWouldYouLikeToGo:
# 294 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Then, where would you like to go?$"
# 295 "data/maps/SlateportCity_Harbor/scripts.pory"

# 296 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_LoveToGoDeepUnderwaterSomeday:
# 297 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "A journey to the bottom of the sea…\n"
# 298 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I wonder what it'd be like?\p"
# 299 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I'd love to go deep underwater like\n"
# 300 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "that someday.$"
# 301 "data/maps/SlateportCity_Harbor/scripts.pory"

# 302 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_AbnormalWeather:
# 303 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "For a ship to sail safely, we need to\n"
# 304 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "know about the weather!\p"
# 305 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Speaking of weather, I heard something\n"
# 306 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "from a guy at the Weather Institute.\p"
# 307 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "He was saying abnormal weather has\n"
# 308 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "been reported all over the place!\p"
# 309 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You should visit the Weather Institute\n"
# 310 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "and ask around!$"
# 311 "data/maps/SlateportCity_Harbor/scripts.pory"

# 312 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_SubTooSmallForMe:
# 313 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I wanted to go with Captain Stern on\nthe ocean-floor exploration.\pBut the sub's too small for me.\pIf I squeezed in, there wouldn't be\nany room for the captain…$"
# 314 "data/maps/SlateportCity_Harbor/scripts.pory"

# 315 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_SameThugsTriedToRobAtMuseum:
# 316 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{COLOR RED}Stern{COLOR DARK_GRAY}: These thugs…\pThey're the same lot who tried to take\nthe Devon Parts at the museum…$"
# 317 "data/maps/SlateportCity_Harbor/scripts.pory"

# 318 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_CaptSternWhyStealMySubmarine:
# 319 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{COLOR RED}Stern{COLOR DARK_GRAY}: Those criminals…\pWhat are they planning to do with my\nSubmarine Explorer 1?\pThey can't be after the super-ancient\nPokémon that slumbers at the bottom\lof the sea…$"
# 320 "data/maps/SlateportCity_Harbor/scripts.pory"

# 321 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_NeedDiveToCatchSub:
# 322 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{COLOR RED}Stern{COLOR DARK_GRAY}: There's no way a normal human\nwould be able to catch that sub.\pAlthough it would be a different story\nif you could teach a Pokémon to swim\lunderwater using Dive…$"
# 323 "data/maps/SlateportCity_Harbor/scripts.pory"

# 324 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WontBeLongBeforeWeFinishFerry:
# 325 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Capt. Stern: Oh, yes.\n"
# 326 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Mr. Briney came to our Shipyard.\p"
# 327 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "It won't be long now before we finish\n"
# 328 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "making the ferry!$"
# 329 "data/maps/SlateportCity_Harbor/scripts.pory"

# 330 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_FinishedMakingFerry:
# 331 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Capt. Stern: {PLAYER}{KUN}!\p"
# 332 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "We finally finished making the ferry\n"
# 333 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "S.S. Tidal!\p"
# 334 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "We couldn't have done it without\n"
# 335 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "your friend Mr. Briney.\p"
# 336 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Please go for a short cruise on it!$"
# 337 "data/maps/SlateportCity_Harbor/scripts.pory"

# 338 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WouldYouTradeScanner:
# 339 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Capt. Stern: Oh?\n"
# 340 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER}{KUN}, that item you have…\p"
# 341 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "That's a Scanner! That would sure\n"
# 342 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "help us on our explorations.\p"
# 343 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER}{KUN}, would you trade your\n"
# 344 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Scanner for something?\p"
# 345 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Like, say, a Deepseatooth or\n"
# 346 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "a Deepseascale that I have?$"
# 347 "data/maps/SlateportCity_Harbor/scripts.pory"

# 348 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_IfYouWantToTradeLetMeKnow:
# 349 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Capt. Stern: Are you certain?\n"
# 350 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "It's useless to you, {PLAYER}{KUN}…\p"
# 351 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Well, okay, then. If you want to trade\n"
# 352 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "your Scanner, let me know.$"
# 353 "data/maps/SlateportCity_Harbor/scripts.pory"

# 354 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_TradeForDeepSeaTooth:
# 355 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Capt. Stern: So you'll trade it for\n"
# 356 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "my Deepseatooth?$"
# 357 "data/maps/SlateportCity_Harbor/scripts.pory"

# 358 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_TradeForDeepSeaScale:
# 359 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Capt. Stern: So you'll trade it for\n"
# 360 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "my Deepseascale?$"
# 361 "data/maps/SlateportCity_Harbor/scripts.pory"

# 362 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WhichOneDoYouWant:
# 363 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Capt. Stern: Which one do you want?$"
# 364 "data/maps/SlateportCity_Harbor/scripts.pory"

# 365 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_HandedScannerToStern:
# 366 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} handed the Scanner to\n"
# 367 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Capt. Stern.$"
# 368 "data/maps/SlateportCity_Harbor/scripts.pory"

# 369 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_ThisWillHelpResearch:
# 370 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Capt. Stern: Thanks, {PLAYER}{KUN}!\n"
# 371 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "This will help our research a lot!$"

SlateportCity_Harbor_EventScript_AquaEscapeScene::
# 376 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock
# 377 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 32
# 378 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_0
# 379 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 380 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 16
# 381 "data/maps/SlateportCity_Harbor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 382 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Harbor_Movement_PlayerGoFaceAqua
# 383 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 384 "data/maps/SlateportCity_Harbor/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 385 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceDown
# 386 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement LOCALID_ARCHIE
# 387 "data/maps/SlateportCity_Harbor/scripts.pory"
	playse SE_PIN
# 388 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_ExclamationMark
# 389 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 8
# 390 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceDown
# 391 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement LOCALID_SHELLY
# 392 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_1
# 393 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_2
# 394 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 395 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceLeft
# 396 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement LOCALID_SHELLY
# 397 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_3
# 398 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 399 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceUp
# 400 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 8
# 401 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceUp
# 402 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement LOCALID_SHELLY
# 403 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 16
# 404 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SHELLY, SlateportCity_Harbor_Movement_AquaBoardSub
# 405 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_ARCHIE, SlateportCity_Harbor_Movement_AquaBoardSub
# 406 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SUBMARINE, SlateportCity_Harbor_Movement_SubmarineExit
# 407 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 408 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_SHELLY
# 409 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_ARCHIE
# 410 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_SUBMARINE
# 411 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_SLATEPORT_HARBOR_STATE, 2
# 412 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_MET_TEAM_AQUA_HARBOR
# 413 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_MOTEL_SCOTT
# 414 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Harbor_Movement_SeeSubmarineExit
# 415 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 16
# 416 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 417 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement LOCALID_CAPT_STERN
# 418 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_4
# 419 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 420 "data/maps/SlateportCity_Harbor/scripts.pory"
	playse SE_PIN
# 421 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_ExclamationMark
# 422 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement LOCALID_CAPT_STERN
# 423 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitse
# 424 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_5
# 425 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 426 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Harbor_Movement_GoBackToPlayer
# 427 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement LOCALID_CAPT_STERN
# 428 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_6
# 429 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 430 "data/maps/SlateportCity_Harbor/scripts.pory"
	fadedefaultbgm
# 431 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE
# 432 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_2_BLOCKING_ENTRANCE
# 433 "data/maps/SlateportCity_Harbor/scripts.pory"
	copyobjectxytoperm LOCALID_CAPT_STERN
# 434 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectmovementtype LOCALID_CAPT_STERN, MOVEMENT_TYPE_FACE_UP
# 435 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
	end


# 439 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_PlayerGoFaceAqua:
# 440 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 440 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 440 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 440 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 441 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 441 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
	step_end

# 444 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_AquaBoardSub:
# 445 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 445 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 446 "data/maps/SlateportCity_Harbor/scripts.pory"
	jump_up
# 447 "data/maps/SlateportCity_Harbor/scripts.pory"
	set_invisible
	step_end

# 450 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_SubmarineExit:
# 451 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 451 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 451 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 451 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 452 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 452 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 452 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 453 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 453 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 453 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 453 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 453 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 453 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
	step_end

# 456 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_SeeSubmarineExit:
# 457 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 457 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 458 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 459 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_in_place_right
	step_end

# 462 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_GoBackToPlayer:
# 463 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_down
# 464 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 464 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
	step_end

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_0:
# 378 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{COLOR RED}Stern{COLOR DARK_GRAY}: These thugs…\pThey're the same lot who tried to take\nthe Devon Parts at the museum…$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_1:
# 392 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: Impossible!\pYou actually followed us all the way\nfrom Mt. Pyre?\pGrah-hah!\nYou got me!\pI bow to your persistence and love of\njustice!\pBwaha!\nBwahahahahah!\pIt's a pity, so it is, but we're well\npast the time when you and your best\lefforts could turn the tide.\pWe'll add a few last touches to this\nsubmarine, and we'll all be set to bust\lopen the Seafloor Cavern where that\lgreat Pokémon is sleeping!\pOur plans to return everything to the\nbeginning…\lThey're as good as complete!$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_2:
# 393 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "But I know you gotta do what you gotta\ndo, scamp.\pI'm not gonna tell ya to quit chasing\nus…\pFollow us all the way to our {COLOR BLUE}hideout{COLOR DARK_GRAY}\nin {COLOR BLUE}Lilycove{COLOR DARK_GRAY}, if that's your honor\ldemands.\pNow then… Shelly?$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_3:
# 397 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{COLOR RED}Shelly{COLOR DARK_GRAY}: …Got it.$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_4:
# 418 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{COLOR RED}Stern{COLOR DARK_GRAY}: Those criminals…\pWhat are they planning to do with my\nSubmarine Explorer 1?$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_5:
# 424 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "They can't be!\pThey can't be after the super-ancient\nPokémon that slumbers at the bottom\lof the sea…$"

SlateportCity_Harbor_EventScript_AquaEscapeScene_Text_6:
# 428 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER}…\nI'm sorry, but…\pMy stolen submarine…\pIt could bring an unimaginable disaster\nupon the world…\pSomeone has to get to {COLOR BLUE}their hideout{COLOR DARK_GRAY} in\n{COLOR BLUE}Lilycove{COLOR DARK_GRAY} and stop them!\lBut I've got no chance alone!\p{PLAYER}, please…\nMay I ask for your help?\pDo you think you and your Pokémon\ncould put a stop to them and save my\lsub from being used for evil? Please!$"
