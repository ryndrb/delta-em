# 1 "data/maps/SlateportCity/scripts.pory"

# 2 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_FAT_MAN, 1
# 3 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_MAN_1, 2
# 4 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_RICH_BOY, 3
# 5 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_1, 5
# 6 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_COOK, 6
# 7 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_OLD_WOMAN, 7
# 8 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GIRL, 8
# 9 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_TY, 9
# 10 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GABBY, 10
# 11 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_CAPT_STERN, 11
# 12 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_2, 18
# 13 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_3, 19
# 14 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_4, 26
# 15 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_5, 27
# 16 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_6, 28
# 17 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_7, 29
# 18 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_8, 30
# 19 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_9, 31
# 20 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_11, 33
# 21 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_SCOTT, 35
# 22 "data/maps/SlateportCity/scripts.pory"

# 23 "data/maps/SlateportCity/scripts.pory"
@ Note: LOCALID_SLATEPORT_ENERGY_GURU is a local id for this map used elsewhere. It's defined in event_objects.h
# 24 "data/maps/SlateportCity/scripts.pory"

# 25 "data/maps/SlateportCity/scripts.pory"
SlateportCity_MapScripts::
# 26 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_OnTransition
# 27 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_OnFrame
# 28 "data/maps/SlateportCity/scripts.pory"
	.byte 0
# 29 "data/maps/SlateportCity/scripts.pory"

# 30 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnTransition:
# 31 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
# 32 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_EnterSlateport
# 33 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_MovePeopleForSternInterview
# 34 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_SetReadyForScottScene
# 35 "data/maps/SlateportCity/scripts.pory"
	end
# 36 "data/maps/SlateportCity/scripts.pory"

# 37 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnterSlateport::
# 38 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 39 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 40 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
# 41 "data/maps/SlateportCity/scripts.pory"
	return
# 42 "data/maps/SlateportCity/scripts.pory"

# 43 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MovePeopleForSternInterview::
# 44 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_CAPT_STERN, 28, 13
# 45 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_OLD_WOMAN, 25, 13
# 46 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_RICH_BOY, 25, 14
# 47 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_COOK, 27, 16
# 48 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_GIRL, 28, 16
# 49 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_FAT_MAN, 29, 16
# 50 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_MAN_1, 31, 14
# 51 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
# 52 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 53 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 54 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_COOK, MOVEMENT_TYPE_FACE_UP
# 55 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_GIRL, MOVEMENT_TYPE_FACE_UP
# 56 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_FAT_MAN, MOVEMENT_TYPE_FACE_UP
# 57 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_MAN_1, MOVEMENT_TYPE_FACE_LEFT
# 58 "data/maps/SlateportCity/scripts.pory"
	return
# 59 "data/maps/SlateportCity/scripts.pory"

# 60 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SetReadyForScottScene::
# 61 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 62 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 63 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_0x8004, 30, SlateportCity_EventScript_MoveScottLeft
# 64 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 23, 27
# 65 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 66 "data/maps/SlateportCity/scripts.pory"
	return
# 67 "data/maps/SlateportCity/scripts.pory"

# 68 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottLeft::
# 69 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 22, 27
# 70 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 71 "data/maps/SlateportCity/scripts.pory"
	return
# 72 "data/maps/SlateportCity/scripts.pory"

# 73 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnFrame:
# 74 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
# 75 "data/maps/SlateportCity/scripts.pory"
	.2byte 0
# 76 "data/maps/SlateportCity/scripts.pory"

# 77 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene::
# 78 "data/maps/SlateportCity/scripts.pory"
	lockall
# 79 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 80 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceScott
# 81 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottApproachPlayer
# 82 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 83 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 84 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 85 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceLeft
# 86 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 87 "data/maps/SlateportCity/scripts.pory"
	delay 60
# 88 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 89 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceRight
# 90 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 91 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 92 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 93 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 94 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 95 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
# 96 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 97 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 98 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 99 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 100 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 101 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 102 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExit
# 103 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 104 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 105 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 10, 12
# 106 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 107 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 108 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 109 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 110 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 111 "data/maps/SlateportCity/scripts.pory"
	end
# 112 "data/maps/SlateportCity/scripts.pory"

# 113 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceScott:
# 114 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 115 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 116 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_left
# 117 "data/maps/SlateportCity/scripts.pory"
	step_end
# 118 "data/maps/SlateportCity/scripts.pory"

# 119 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottApproachPlayer:
# 120 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 121 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 122 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 123 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 124 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 125 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 126 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 127 "data/maps/SlateportCity/scripts.pory"
	step_end
# 128 "data/maps/SlateportCity/scripts.pory"

# 129 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExit:
# 130 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 131 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 132 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 133 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 134 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 135 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 136 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 137 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 138 "data/maps/SlateportCity/scripts.pory"
	step_end
# 139 "data/maps/SlateportCity/scripts.pory"

# 140 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyGuru::
# 141 "data/maps/SlateportCity/scripts.pory"
	lock
# 142 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 143 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
# 144 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 145 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EnergyGuru
# 146 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 147 "data/maps/SlateportCity/scripts.pory"
	release
# 148 "data/maps/SlateportCity/scripts.pory"
	end
# 149 "data/maps/SlateportCity/scripts.pory"

# 150 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 151 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EnergyGuru:
# 152 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 153 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_IRON
# 154 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CARBOS
# 155 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ZINC
# 156 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 157 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HP_UP
# 158 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 159 "data/maps/SlateportCity/scripts.pory"
	release
# 160 "data/maps/SlateportCity/scripts.pory"
	end
# 161 "data/maps/SlateportCity/scripts.pory"

# 162 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman::
# 163 "data/maps/SlateportCity/scripts.pory"
	lock
# 164 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 165 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 166 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 167 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 168 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
# 169 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 170 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
# 171 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 172 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 173 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 174 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 175 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 176 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 177 "data/maps/SlateportCity/scripts.pory"
	release
# 178 "data/maps/SlateportCity/scripts.pory"
	end
# 179 "data/maps/SlateportCity/scripts.pory"

# 180 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonEVsNotMaxed::
# 181 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 182 "data/maps/SlateportCity/scripts.pory"
	release
# 183 "data/maps/SlateportCity/scripts.pory"
	end
# 184 "data/maps/SlateportCity/scripts.pory"

# 185 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonHasEffortRibbon::
# 186 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 187 "data/maps/SlateportCity/scripts.pory"
	release
# 188 "data/maps/SlateportCity/scripts.pory"
	end
# 189 "data/maps/SlateportCity/scripts.pory"

# 190 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CookSternInterview::
# 191 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainInARush, MSGBOX_DEFAULT
# 192 "data/maps/SlateportCity/scripts.pory"
	release
# 193 "data/maps/SlateportCity/scripts.pory"
	end
# 194 "data/maps/SlateportCity/scripts.pory"

# 195 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman::
# 196 "data/maps/SlateportCity/scripts.pory"
	lock
# 197 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 198 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_TEMP_0, 1, SlateportCity_EventScript_OldWomanSternInterview
# 199 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 200 "data/maps/SlateportCity/scripts.pory"
	release
# 201 "data/maps/SlateportCity/scripts.pory"
	end
# 202 "data/maps/SlateportCity/scripts.pory"

# 203 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWomanSternInterview::
# 204 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatWasThat, MSGBOX_DEFAULT
# 205 "data/maps/SlateportCity/scripts.pory"
	release
# 206 "data/maps/SlateportCity/scripts.pory"
	end
# 207 "data/maps/SlateportCity/scripts.pory"

# 208 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl::
# 209 "data/maps/SlateportCity/scripts.pory"
	lock
# 210 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 211 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_TEMP_0, 1, SlateportCity_EventScript_GirlSternInterview
# 212 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_GirlSecretBase
# 213 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 214 "data/maps/SlateportCity/scripts.pory"
	release
# 215 "data/maps/SlateportCity/scripts.pory"
	end
# 216 "data/maps/SlateportCity/scripts.pory"

# 217 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSternInterview::
# 218 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_Premonition, MSGBOX_DEFAULT
# 219 "data/maps/SlateportCity/scripts.pory"
	release
# 220 "data/maps/SlateportCity/scripts.pory"
	end
# 221 "data/maps/SlateportCity/scripts.pory"

# 222 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSecretBase::
# 223 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 224 "data/maps/SlateportCity/scripts.pory"
	release
# 225 "data/maps/SlateportCity/scripts.pory"
	end
# 226 "data/maps/SlateportCity/scripts.pory"

# 227 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy::
# 228 "data/maps/SlateportCity/scripts.pory"
	lock
# 229 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 230 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_TEMP_0, 1, SlateportCity_EventScript_RichBoySternInterview
# 231 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 232 "data/maps/SlateportCity/scripts.pory"
	release
# 233 "data/maps/SlateportCity/scripts.pory"
	end
# 234 "data/maps/SlateportCity/scripts.pory"

# 235 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoySternInterview::
# 236 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SubmarineJackJustNow, MSGBOX_DEFAULT
# 237 "data/maps/SlateportCity/scripts.pory"
	release
# 238 "data/maps/SlateportCity/scripts.pory"
	end
# 239 "data/maps/SlateportCity/scripts.pory"

# 240 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan::
# 241 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_TEMP_0, 1, SlateportCity_EventScript_FatManSternInterview
# 242 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
# 243 "data/maps/SlateportCity/scripts.pory"
	end
# 244 "data/maps/SlateportCity/scripts.pory"

# 245 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatManSternInterview::
# 246 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_NPC
# 247 "data/maps/SlateportCity/scripts.pory"
	end
# 248 "data/maps/SlateportCity/scripts.pory"

# 249 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1::
# 250 "data/maps/SlateportCity/scripts.pory"
	lock
# 251 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 252 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_TEMP_0, 1, SlateportCity_EventScript_Man1SternInterview
# 253 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 254 "data/maps/SlateportCity/scripts.pory"
	release
# 255 "data/maps/SlateportCity/scripts.pory"
	end
# 256 "data/maps/SlateportCity/scripts.pory"

# 257 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1SternInterview::
# 258 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PeopleJackSubmarine, MSGBOX_DEFAULT
# 259 "data/maps/SlateportCity/scripts.pory"
	release
# 260 "data/maps/SlateportCity/scripts.pory"
	end
# 261 "data/maps/SlateportCity/scripts.pory"

# 262 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1::
# 263 "data/maps/SlateportCity/scripts.pory"
	lock
# 264 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 265 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1AquaGone
# 266 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
# 267 "data/maps/SlateportCity/scripts.pory"
	release
# 268 "data/maps/SlateportCity/scripts.pory"
	end
# 269 "data/maps/SlateportCity/scripts.pory"

# 270 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1AquaGone::
# 271 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 272 "data/maps/SlateportCity/scripts.pory"
	release
# 273 "data/maps/SlateportCity/scripts.pory"
	end
# 274 "data/maps/SlateportCity/scripts.pory"

# 275 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleTentSign::
# 276 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 277 "data/maps/SlateportCity/scripts.pory"
	end
# 278 "data/maps/SlateportCity/scripts.pory"

# 279 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign::
# 280 "data/maps/SlateportCity/scripts.pory"
	lockall
# 281 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
# 282 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
# 283 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 284 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 285 "data/maps/SlateportCity/scripts.pory"
	end
# 286 "data/maps/SlateportCity/scripts.pory"

# 287 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardNearsCompletion::
# 288 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 289 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 290 "data/maps/SlateportCity/scripts.pory"
	end
# 291 "data/maps/SlateportCity/scripts.pory"

# 292 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardFerryComplete::
# 293 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 294 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 295 "data/maps/SlateportCity/scripts.pory"
	end
# 296 "data/maps/SlateportCity/scripts.pory"

# 297 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokemonFanClubSign::
# 298 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 299 "data/maps/SlateportCity/scripts.pory"
	end
# 300 "data/maps/SlateportCity/scripts.pory"

# 301 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OceanicMuseumSign::
# 302 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 303 "data/maps/SlateportCity/scripts.pory"
	end
# 304 "data/maps/SlateportCity/scripts.pory"

# 305 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CitySign::
# 306 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 307 "data/maps/SlateportCity/scripts.pory"
	end
# 308 "data/maps/SlateportCity/scripts.pory"

# 309 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MarketSign::
# 310 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 311 "data/maps/SlateportCity/scripts.pory"
	end
# 312 "data/maps/SlateportCity/scripts.pory"

# 313 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign::
# 314 "data/maps/SlateportCity/scripts.pory"
	lockall
# 315 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
# 316 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 317 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 318 "data/maps/SlateportCity/scripts.pory"
	end
# 319 "data/maps/SlateportCity/scripts.pory"

# 320 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSignFerryComplete::
# 321 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 322 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 323 "data/maps/SlateportCity/scripts.pory"
	end
# 324 "data/maps/SlateportCity/scripts.pory"

# 325 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NameRatersHouseSign::
# 326 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
# 327 "data/maps/SlateportCity/scripts.pory"
	end
# 328 "data/maps/SlateportCity/scripts.pory"

# 329 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac::
# 330 "data/maps/SlateportCity/scripts.pory"
	lock
# 331 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 332 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_ManiacSternInterview
# 333 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 334 "data/maps/SlateportCity/scripts.pory"
	release
# 335 "data/maps/SlateportCity/scripts.pory"
	end
# 336 "data/maps/SlateportCity/scripts.pory"

# 337 "data/maps/SlateportCity/scripts.pory"
@ Unclear if the text here was meant to be different, but its not
# 338 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ManiacSternInterview::
# 339 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 340 "data/maps/SlateportCity/scripts.pory"
	release
# 341 "data/maps/SlateportCity/scripts.pory"
	end
# 342 "data/maps/SlateportCity/scripts.pory"

# 343 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman2::
# 344 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
# 345 "data/maps/SlateportCity/scripts.pory"
	end
# 346 "data/maps/SlateportCity/scripts.pory"

# 347 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1::
# 348 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 349 "data/maps/SlateportCity/scripts.pory"
	end
# 350 "data/maps/SlateportCity/scripts.pory"

# 351 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2::
# 352 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
# 353 "data/maps/SlateportCity/scripts.pory"
	end
# 354 "data/maps/SlateportCity/scripts.pory"

# 355 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokefanF::
# 356 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
# 357 "data/maps/SlateportCity/scripts.pory"
	end
# 358 "data/maps/SlateportCity/scripts.pory"

# 359 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2::
# 360 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
# 361 "data/maps/SlateportCity/scripts.pory"
	end
# 362 "data/maps/SlateportCity/scripts.pory"

# 363 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt1::
# 364 "data/maps/SlateportCity/scripts.pory"
	lock
# 365 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 366 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 367 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 368 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_WalkInPlaceUp
# 369 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 370 "data/maps/SlateportCity/scripts.pory"
	release
# 371 "data/maps/SlateportCity/scripts.pory"
	end
# 372 "data/maps/SlateportCity/scripts.pory"

# 373 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt2::
# 374 "data/maps/SlateportCity/scripts.pory"
	lock
# 375 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 376 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 377 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 378 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceRight
# 379 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 380 "data/maps/SlateportCity/scripts.pory"
	release
# 381 "data/maps/SlateportCity/scripts.pory"
	end
# 382 "data/maps/SlateportCity/scripts.pory"

# 383 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt3::
# 384 "data/maps/SlateportCity/scripts.pory"
	lock
# 385 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 386 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 387 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 388 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, Common_Movement_WalkInPlaceRight
# 389 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 390 "data/maps/SlateportCity/scripts.pory"
	release
# 391 "data/maps/SlateportCity/scripts.pory"
	end
# 392 "data/maps/SlateportCity/scripts.pory"

# 393 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt4::
# 394 "data/maps/SlateportCity/scripts.pory"
	lock
# 395 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 396 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
# 397 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 398 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, Common_Movement_WalkInPlaceRight
# 399 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 400 "data/maps/SlateportCity/scripts.pory"
	release
# 401 "data/maps/SlateportCity/scripts.pory"
	end
# 402 "data/maps/SlateportCity/scripts.pory"

# 403 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt5::
# 404 "data/maps/SlateportCity/scripts.pory"
	lock
# 405 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 406 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
# 407 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 408 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_WalkInPlaceUp
# 409 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 410 "data/maps/SlateportCity/scripts.pory"
	release
# 411 "data/maps/SlateportCity/scripts.pory"
	end
# 412 "data/maps/SlateportCity/scripts.pory"

# 413 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt6::
# 414 "data/maps/SlateportCity/scripts.pory"
	lock
# 415 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 416 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
# 417 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 418 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_6, Common_Movement_WalkInPlaceRight
# 419 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 420 "data/maps/SlateportCity/scripts.pory"
	release
# 421 "data/maps/SlateportCity/scripts.pory"
	end
# 422 "data/maps/SlateportCity/scripts.pory"

# 423 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt7::
# 424 "data/maps/SlateportCity/scripts.pory"
	lock
# 425 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 426 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 427 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 428 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_7, Common_Movement_WalkInPlaceRight
# 429 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 430 "data/maps/SlateportCity/scripts.pory"
	release
# 431 "data/maps/SlateportCity/scripts.pory"
	end
# 432 "data/maps/SlateportCity/scripts.pory"

# 433 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt8::
# 434 "data/maps/SlateportCity/scripts.pory"
	lock
# 435 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 436 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 437 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 438 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_8, Common_Movement_WalkInPlaceRight
# 439 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 440 "data/maps/SlateportCity/scripts.pory"
	release
# 441 "data/maps/SlateportCity/scripts.pory"
	end
# 442 "data/maps/SlateportCity/scripts.pory"

# 443 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9::
# 444 "data/maps/SlateportCity/scripts.pory"
	lock
# 445 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 446 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 447 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_ExclamationMark
# 448 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 449 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_Delay48
# 450 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 451 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 452 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 453 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_WalkInPlaceUp
# 454 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 455 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 456 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 457 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 458 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 459 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 460 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 461 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_WalkInPlaceUp
# 462 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 463 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 464 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 465 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 466 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 467 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 468 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 469 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 470 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 471 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_WalkInPlaceUp
# 472 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 473 "data/maps/SlateportCity/scripts.pory"
	release
# 474 "data/maps/SlateportCity/scripts.pory"
	end
# 475 "data/maps/SlateportCity/scripts.pory"

# 476 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt:
# 477 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 478 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 479 "data/maps/SlateportCity/scripts.pory"
	step_end
# 480 "data/maps/SlateportCity/scripts.pory"

# 481 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt10::
# 482 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
# 483 "data/maps/SlateportCity/scripts.pory"
	end
# 484 "data/maps/SlateportCity/scripts.pory"

# 485 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt11::
# 486 "data/maps/SlateportCity/scripts.pory"
	lock
# 487 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 488 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 489 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 490 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_11, Common_Movement_WalkInPlaceUp
# 491 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 492 "data/maps/SlateportCity/scripts.pory"
	release
# 493 "data/maps/SlateportCity/scripts.pory"
	end
# 494 "data/maps/SlateportCity/scripts.pory"

# 495 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DollClerk::
# 496 "data/maps/SlateportCity/scripts.pory"
	lock
# 497 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 498 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 499 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 500 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
# 501 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 502 "data/maps/SlateportCity/scripts.pory"
	release
# 503 "data/maps/SlateportCity/scripts.pory"
	end
# 504 "data/maps/SlateportCity/scripts.pory"

# 505 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 506 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor_Dolls:
# 507 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 508 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 509 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 510 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 511 "data/maps/SlateportCity/scripts.pory"

# 512 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PowerTMClerk::
# 513 "data/maps/SlateportCity/scripts.pory"
	lock
# 514 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 515 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 516 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 517 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_PowerTMs
# 518 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 519 "data/maps/SlateportCity/scripts.pory"
	release
# 520 "data/maps/SlateportCity/scripts.pory"
	end
# 521 "data/maps/SlateportCity/scripts.pory"

# 522 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 523 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_PowerTMs:
# 524 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_LIGHT_SCREEN // 5000
# 525 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_PROTECT // 5000
# 526 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_ICY_WIND // 10000
# 527 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_REFLECT // 5000
# 528 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_STEALTH_ROCK // 5000
# 529 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_THUNDER_WAVE // 5000
# 530 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 531 "data/maps/SlateportCity/scripts.pory"

# 532 "data/maps/SlateportCity/scripts.pory"
@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
# 533 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern::
# 534 "data/maps/SlateportCity/scripts.pory"
	lockall
# 535 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
# 536 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GabbyWonderfulThanksForInterview, MSGBOX_DEFAULT
# 537 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 538 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, Common_Movement_WalkInPlaceRight
# 539 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 540 "data/maps/SlateportCity/scripts.pory"
	delay 10
# 541 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, Common_Movement_WalkInPlaceDown
# 542 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 543 "data/maps/SlateportCity/scripts.pory"
	delay 25
# 544 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternWatchGabbyAndTyExit
# 545 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceStern
# 546 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, SlateportCity_Movement_GabbyExit
# 547 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, SlateportCity_Movement_TyExit
# 548 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 549 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_GABBY
# 550 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_TY
# 551 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhewFirstInterview, MSGBOX_DEFAULT
# 552 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 553 "data/maps/SlateportCity/scripts.pory"
	delay 8
# 554 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 555 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_ExclamationMark
# 556 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 557 "data/maps/SlateportCity/scripts.pory"
	delay 8
# 558 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceUp
# 559 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 560 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhPlayerWeMadeDiscovery, MSGBOX_DEFAULT
# 561 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 562 "data/maps/SlateportCity/scripts.pory"
	delay 16
# 563 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 564 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_ExclamationMark
# 565 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 566 "data/maps/SlateportCity/scripts.pory"
	delay 16
# 567 "data/maps/SlateportCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 568 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
# 569 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 570 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_COOK, Common_Movement_WalkInPlaceLeft
# 571 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_FAT_MAN, Common_Movement_WalkInPlaceLeft
# 572 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
# 573 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_RICH_BOY, Common_Movement_QuestionMark
# 574 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_MAN_1, SlateportCity_Movement_ManConcern
# 575 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 576 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceDown
# 577 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 578 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
# 579 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 580 "data/maps/SlateportCity/scripts.pory"
	delay 8
# 581 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 582 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_ExclamationMark
# 583 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 584 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_Delay48
# 585 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 586 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternGotoHarborEntrance
# 587 "data/maps/SlateportCity/scripts.pory"
	delay 16
# 588 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 589 "data/maps/SlateportCity/scripts.pory"
	waitmovement LOCALID_CAPT_STERN
# 590 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
# 591 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 592 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceLeft
# 593 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 594 "data/maps/SlateportCity/scripts.pory"
	checkplayergender
# 595 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, MALE, SlateportCity_EventScript_PleaseComeWithMeM
# 596 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, SlateportCity_EventScript_PleaseComeWithMeF
# 597 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 598 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 599 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 600 "data/maps/SlateportCity/scripts.pory"
	fadedefaultbgm
# 601 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_CAPT_STERN
# 602 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 603 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 604 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 605 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 606 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 607 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_TEMP_0, 1
# 608 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 609 "data/maps/SlateportCity/scripts.pory"
	end
# 610 "data/maps/SlateportCity/scripts.pory"

# 611 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PleaseComeWithMeM::
# 612 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMeM, MSGBOX_DEFAULT
# 613 "data/maps/SlateportCity/scripts.pory"
	return
# 614 "data/maps/SlateportCity/scripts.pory"

# 615 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PleaseComeWithMeF::
# 616 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMeF, MSGBOX_DEFAULT
# 617 "data/maps/SlateportCity/scripts.pory"
	return
# 618 "data/maps/SlateportCity/scripts.pory"

# 619 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 620 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 621 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 622 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 623 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_right
# 624 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 625 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 626 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_left
# 627 "data/maps/SlateportCity/scripts.pory"
	step_end
# 628 "data/maps/SlateportCity/scripts.pory"

# 629 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 630 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 631 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_up
# 632 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 633 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_down
# 634 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 635 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 636 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_left
# 637 "data/maps/SlateportCity/scripts.pory"
	step_end
# 638 "data/maps/SlateportCity/scripts.pory"

# 639 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit:
# 640 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 641 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 642 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 643 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 644 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 645 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 646 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 647 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 648 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 649 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 650 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 651 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 652 "data/maps/SlateportCity/scripts.pory"
	step_end
# 653 "data/maps/SlateportCity/scripts.pory"

# 654 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit:
# 655 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 656 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 657 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 658 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 659 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 660 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 661 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 662 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 663 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 664 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 665 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 666 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 667 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 668 "data/maps/SlateportCity/scripts.pory"
	step_end
# 669 "data/maps/SlateportCity/scripts.pory"

# 670 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 671 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 672 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_up
# 673 "data/maps/SlateportCity/scripts.pory"
	step_end
# 674 "data/maps/SlateportCity/scripts.pory"

# 675 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternGotoHarborEntrance:
# 676 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 677 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 678 "data/maps/SlateportCity/scripts.pory"
	step_end
# 679 "data/maps/SlateportCity/scripts.pory"

# 680 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor:
# 681 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 682 "data/maps/SlateportCity/scripts.pory"
	set_invisible
# 683 "data/maps/SlateportCity/scripts.pory"
	step_end
# 684 "data/maps/SlateportCity/scripts.pory"

# 685 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit:
# 686 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 687 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 688 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 689 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 690 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 691 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 692 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 693 "data/maps/SlateportCity/scripts.pory"
	step_end
# 694 "data/maps/SlateportCity/scripts.pory"

# 695 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern:
# 696 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 697 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 698 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 699 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 700 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 701 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 702 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 703 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_down
# 704 "data/maps/SlateportCity/scripts.pory"
	step_end
# 705 "data/maps/SlateportCity/scripts.pory"

# 706 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty::
# 707 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
# 708 "data/maps/SlateportCity/scripts.pory"
	end
# 709 "data/maps/SlateportCity/scripts.pory"

# 710 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby::
# 711 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
# 712 "data/maps/SlateportCity/scripts.pory"
	end
# 713 "data/maps/SlateportCity/scripts.pory"

# 714 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man3::
# 715 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
# 716 "data/maps/SlateportCity/scripts.pory"
	end
# 717 "data/maps/SlateportCity/scripts.pory"

# 718 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk::
# 719 "data/maps/SlateportCity/scripts.pory"
	lock
# 720 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 721 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
# 722 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 723 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 724 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 725 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 726 "data/maps/SlateportCity/scripts.pory"
	release
# 727 "data/maps/SlateportCity/scripts.pory"
	end
# 728 "data/maps/SlateportCity/scripts.pory"

# 729 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar::
# 730 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 731 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 732 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
# 733 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 734 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 735 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 736 "data/maps/SlateportCity/scripts.pory"
	end
# 737 "data/maps/SlateportCity/scripts.pory"

# 738 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ExplainBerryPowder::
# 739 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 740 "data/maps/SlateportCity/scripts.pory"
	release
# 741 "data/maps/SlateportCity/scripts.pory"
	end
# 742 "data/maps/SlateportCity/scripts.pory"

# 743 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem::
# 744 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 745 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 746 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 747 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 748 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 749 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 750 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_EnergyPowder
# 751 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_EnergyRoot
# 752 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_HealPowder
# 753 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_RevivalHerb
# 754 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_Protein
# 755 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_Iron
# 756 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_Carbos
# 757 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_Calcium
# 758 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_Zinc
# 759 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_HPUp
# 760 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_PPUp
# 761 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
# 762 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
# 763 "data/maps/SlateportCity/scripts.pory"
	end
# 764 "data/maps/SlateportCity/scripts.pory"

# 765 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyPowder::
# 766 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 767 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 768 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 769 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 770 "data/maps/SlateportCity/scripts.pory"
	end
# 771 "data/maps/SlateportCity/scripts.pory"

# 772 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyRoot::
# 773 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 774 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 775 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 776 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 777 "data/maps/SlateportCity/scripts.pory"
	end
# 778 "data/maps/SlateportCity/scripts.pory"

# 779 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HealPowder::
# 780 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 781 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 782 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 783 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 784 "data/maps/SlateportCity/scripts.pory"
	end
# 785 "data/maps/SlateportCity/scripts.pory"

# 786 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RevivalHerb::
# 787 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 788 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 789 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 790 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 791 "data/maps/SlateportCity/scripts.pory"
	end
# 792 "data/maps/SlateportCity/scripts.pory"

# 793 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Protein::
# 794 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 795 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 796 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 797 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 798 "data/maps/SlateportCity/scripts.pory"
	end
# 799 "data/maps/SlateportCity/scripts.pory"

# 800 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Iron::
# 801 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 802 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 803 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 804 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 805 "data/maps/SlateportCity/scripts.pory"
	end
# 806 "data/maps/SlateportCity/scripts.pory"

# 807 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Carbos::
# 808 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 809 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 810 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 811 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 812 "data/maps/SlateportCity/scripts.pory"
	end
# 813 "data/maps/SlateportCity/scripts.pory"

# 814 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Calcium::
# 815 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 816 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 817 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 818 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 819 "data/maps/SlateportCity/scripts.pory"
	end
# 820 "data/maps/SlateportCity/scripts.pory"

# 821 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Zinc::
# 822 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 823 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 824 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 825 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 826 "data/maps/SlateportCity/scripts.pory"
	end
# 827 "data/maps/SlateportCity/scripts.pory"

# 828 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HPUp::
# 829 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 830 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 831 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 832 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 833 "data/maps/SlateportCity/scripts.pory"
	end
# 834 "data/maps/SlateportCity/scripts.pory"

# 835 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PPUp::
# 836 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 837 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 838 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 839 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 840 "data/maps/SlateportCity/scripts.pory"
	end
# 841 "data/maps/SlateportCity/scripts.pory"

# 842 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CancelPowderItemSelect::
# 843 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 844 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 845 "data/maps/SlateportCity/scripts.pory"
	release
# 846 "data/maps/SlateportCity/scripts.pory"
	end
# 847 "data/maps/SlateportCity/scripts.pory"

# 848 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem::
# 849 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 850 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
# 851 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 852 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 853 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
# 854 "data/maps/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 855 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
# 856 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 857 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 858 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 859 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 860 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
# 861 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 862 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 863 "data/maps/SlateportCity/scripts.pory"
	release
# 864 "data/maps/SlateportCity/scripts.pory"
	end
# 865 "data/maps/SlateportCity/scripts.pory"

# 866 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NoRoomForBerryPowderItem::
# 867 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 868 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 869 "data/maps/SlateportCity/scripts.pory"
	release
# 870 "data/maps/SlateportCity/scripts.pory"
	end
# 871 "data/maps/SlateportCity/scripts.pory"

# 872 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotEnoughBerryPowder::
# 873 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 874 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 875 "data/maps/SlateportCity/scripts.pory"
	end
# 876 "data/maps/SlateportCity/scripts.pory"

# 877 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene::
# 878 "data/maps/SlateportCity/scripts.pory"
	lockall
# 879 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 880 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 881 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 882 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 883 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 884 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 885 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 886 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 887 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 888 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 889 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 890 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 891 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 892 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 893 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 894 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 895 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 896 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 897 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 898 "data/maps/SlateportCity/scripts.pory"
	end
# 899 "data/maps/SlateportCity/scripts.pory"

# 900 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown:
# 901 "data/maps/SlateportCity/scripts.pory"
	lock_facing_direction
# 902 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 903 "data/maps/SlateportCity/scripts.pory"
	unlock_facing_direction
# 904 "data/maps/SlateportCity/scripts.pory"
	step_end
# 905 "data/maps/SlateportCity/scripts.pory"

# 906 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit:
# 907 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 908 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_right
# 909 "data/maps/SlateportCity/scripts.pory"
	step_end
# 910 "data/maps/SlateportCity/scripts.pory"

# 911 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent:
# 912 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 913 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 914 "data/maps/SlateportCity/scripts.pory"
	step_end
# 915 "data/maps/SlateportCity/scripts.pory"

# 916 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent:
# 917 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 918 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 919 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 920 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 921 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 922 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 923 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 924 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 925 "data/maps/SlateportCity/scripts.pory"
	step_end
# 926 "data/maps/SlateportCity/scripts.pory"

# 927 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryCrushRankingsSign::
# 928 "data/maps/SlateportCity/scripts.pory"
	lockall
# 929 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 930 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 931 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 932 "data/maps/SlateportCity/scripts.pory"
	end
# 933 "data/maps/SlateportCity/scripts.pory"

# 934 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EnergyGuruSellWhatYouNeed:
# 935 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the Energy Guru! I'll go for it and\n"
# 936 "data/maps/SlateportCity/scripts.pory"
	.string "sell you what you need!$"
# 937 "data/maps/SlateportCity/scripts.pory"

# 938 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhYourPokemon:
# 939 "data/maps/SlateportCity/scripts.pory"
	.string "Oh?\n"
# 940 "data/maps/SlateportCity/scripts.pory"
	.string "Your {STR_VAR_1}…$"
# 941 "data/maps/SlateportCity/scripts.pory"

# 942 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseGiveItThisEffortRibbon:
# 943 "data/maps/SlateportCity/scripts.pory"
	.string "Went for it stupendously!\p"
# 944 "data/maps/SlateportCity/scripts.pory"
	.string "As its reward, please give it this\n"
# 945 "data/maps/SlateportCity/scripts.pory"
	.string "Effort Ribbon.$"
# 946 "data/maps/SlateportCity/scripts.pory"

# 947 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ReceivedEffortRibbon:
# 948 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} received the Effort Ribbon.$"
# 949 "data/maps/SlateportCity/scripts.pory"

# 950 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PutEffortRibbonOnMon:
# 951 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} put the Effort Ribbon\n"
# 952 "data/maps/SlateportCity/scripts.pory"
	.string "on {STR_VAR_1}.$"
# 953 "data/maps/SlateportCity/scripts.pory"

# 954 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoForItLittleHarder:
# 955 "data/maps/SlateportCity/scripts.pory"
	.string "You have to go for it a little harder.\p"
# 956 "data/maps/SlateportCity/scripts.pory"
	.string "If you do, I'll give your Pokémon\n"
# 957 "data/maps/SlateportCity/scripts.pory"
	.string "something nice.$"
# 958 "data/maps/SlateportCity/scripts.pory"

# 959 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EffortRibbonLooksGoodOnIt:
# 960 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that Effort\n"
# 961 "data/maps/SlateportCity/scripts.pory"
	.string "Ribbon looks good on it!$"
# 962 "data/maps/SlateportCity/scripts.pory"

# 963 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
# 964 "data/maps/SlateportCity/scripts.pory"
	.string "The beam from the lighthouse reaches\nfor dozens of miles.\pI wonder whether its light startles\nany of the Pokémon in the sea.$"
# 965 "data/maps/SlateportCity/scripts.pory"

# 966 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaweedFullOfLife:
# 967 "data/maps/SlateportCity/scripts.pory"
	.string "Ooh, look at this!\p"
# 968 "data/maps/SlateportCity/scripts.pory"
	.string "The seaweed you can get around these\n"
# 969 "data/maps/SlateportCity/scripts.pory"
	.string "parts is fresh and full of life.\p"
# 970 "data/maps/SlateportCity/scripts.pory"
	.string "Why, it looks like it can even rear up\n"
# 971 "data/maps/SlateportCity/scripts.pory"
	.string "and attack!$"
# 972 "data/maps/SlateportCity/scripts.pory"

# 973 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HowTownIsBornAndGrows:
# 974 "data/maps/SlateportCity/scripts.pory"
	.string "Where the water is clean, the fruits\nof bountiful harvest gather.\pAnd where people gather, a market\nfor exchange soon starts.\pThis is how a town is formed.$"
# 975 "data/maps/SlateportCity/scripts.pory"

# 976 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SlateportWonderfulPlace:
# 977 "data/maps/SlateportCity/scripts.pory"
	.string "Shopping where you can breathe the\nscent of the ocean…\pSlateport is such a wonderful place!$"
# 978 "data/maps/SlateportCity/scripts.pory"

# 979 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
# 980 "data/maps/SlateportCity/scripts.pory"
	.string "If you put Dolls or Cushions on\n"
# 981 "data/maps/SlateportCity/scripts.pory"
	.string "the floor, they'll get dirty.\p"
# 982 "data/maps/SlateportCity/scripts.pory"
	.string "I'm going to buy some Bricks so my\n"
# 983 "data/maps/SlateportCity/scripts.pory"
	.string "Dolls and Cushions won't get dirty\l"
# 984 "data/maps/SlateportCity/scripts.pory"
	.string "when I leave them out.$"
# 985 "data/maps/SlateportCity/scripts.pory"

# 986 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoingToCompeteInBattleTent:
# 987 "data/maps/SlateportCity/scripts.pory"
	.string "Yeah!\nI've waited so long for this!\lPokémon Contest Spectacular!\lI'm going to enter!\pBut before I do, I have to catch\nsome Pokémon!$"
# 988 "data/maps/SlateportCity/scripts.pory"

# 989 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BushedHikingFromMauville:
# 990 "data/maps/SlateportCity/scripts.pory"
	.string "Whew…\nI'm just bushed…\pI hiked over from Mauville City.\nBut, boy, this city's huge.\pIf I'd know that, I would've ridden\nmy Bike here!$"
# 991 "data/maps/SlateportCity/scripts.pory"

# 992 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EveryoneCallsHimCaptStern:
# 993 "data/maps/SlateportCity/scripts.pory"
	.string "Stern, the fellow who built the\n"
# 994 "data/maps/SlateportCity/scripts.pory"
	.string "Museum, also happens to be the leader\l"
# 995 "data/maps/SlateportCity/scripts.pory"
	.string "of an undersea exploration team.\p"
# 996 "data/maps/SlateportCity/scripts.pory"
	.string "So, everyone calls him Captain Stern.$"
# 997 "data/maps/SlateportCity/scripts.pory"

# 998 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsLongLineOverThere:
# 999 "data/maps/SlateportCity/scripts.pory"
	.string "What is that over there?\n"
# 1000 "data/maps/SlateportCity/scripts.pory"
	.string "That long line…$"
# 1001 "data/maps/SlateportCity/scripts.pory"

# 1002 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_VisitedMuseumOften:
# 1003 "data/maps/SlateportCity/scripts.pory"
	.string "When I was a child, I visited\n"
# 1004 "data/maps/SlateportCity/scripts.pory"
	.string "the Museum often.\p"
# 1005 "data/maps/SlateportCity/scripts.pory"
	.string "I used to dream about the mysteries of\n"
# 1006 "data/maps/SlateportCity/scripts.pory"
	.string "the sea after seeing the exhibits.$"
# 1007 "data/maps/SlateportCity/scripts.pory"

# 1008 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_QuitPushing:
# 1009 "data/maps/SlateportCity/scripts.pory"
	.string "Hey there!\nQuit pushing!\pThis is the line, can't you see?$"
# 1010 "data/maps/SlateportCity/scripts.pory"

# 1011 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaHasPolicy:
# 1012 "data/maps/SlateportCity/scripts.pory"
	.string "Team Aqua has a policy of\nassembling and dispersing at the\loperation site.$"
# 1013 "data/maps/SlateportCity/scripts.pory"

# 1014 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BossIsBrilliant:
# 1015 "data/maps/SlateportCity/scripts.pory"
	.string "Our Boss is brilliant.\pWhat would he want to do with a\nMuseum now?$"
# 1016 "data/maps/SlateportCity/scripts.pory"

# 1017 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsNewSchemeIWonder:
# 1018 "data/maps/SlateportCity/scripts.pory"
	.string "What's new scheme, I wonder?\pOur Boss is scary when he's mad, so\nI'd better not screw things up…$"
# 1019 "data/maps/SlateportCity/scripts.pory"

# 1020 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldTakeItAll:
# 1021 "data/maps/SlateportCity/scripts.pory"
	.string "If there's something we need in the\nMuseum, we should take it all!$"
# 1022 "data/maps/SlateportCity/scripts.pory"

# 1023 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontButtIn:
# 1024 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, you there!\nDon't butt in!$"
# 1025 "data/maps/SlateportCity/scripts.pory"

# 1026 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RemindsMeOfLongLineForGames:
# 1027 "data/maps/SlateportCity/scripts.pory"
	.string "A long line, huh?\pIt reminds me of the times I lined up\nto buy smash-hit games…$"
# 1028 "data/maps/SlateportCity/scripts.pory"

# 1029 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhyAreWeLiningUp:
# 1030 "data/maps/SlateportCity/scripts.pory"
	.string "Why are we even living up and\npaying?\pWe should just march in!$"
# 1031 "data/maps/SlateportCity/scripts.pory"

# 1032 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatDoYouWant:
# 1033 "data/maps/SlateportCity/scripts.pory"
	.string "What?\n"
# 1034 "data/maps/SlateportCity/scripts.pory"
	.string "What do you want?$"
# 1035 "data/maps/SlateportCity/scripts.pory"

# 1036 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllReadSignForYou:
# 1037 "data/maps/SlateportCity/scripts.pory"
	.string "You want to read this sign?\n"
# 1038 "data/maps/SlateportCity/scripts.pory"
	.string "I'll read it for you!$"
# 1039 "data/maps/SlateportCity/scripts.pory"

# 1040 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
# 1041 "data/maps/SlateportCity/scripts.pory"
	.string "Let's see…\pUm…\nI think it says something like\l“the life in the sea is endless.”\pYup, I'm pretty sure that's what it\nsays.$"
# 1042 "data/maps/SlateportCity/scripts.pory"

# 1043 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldveBroughtMyGameBoy:
# 1044 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…\pI should've brought my\nGame Boy Advance so I wouldn't get\lbored in line…\pGrumble…$"
# 1045 "data/maps/SlateportCity/scripts.pory"

# 1046 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HotSpringsAfterOperation:
# 1047 "data/maps/SlateportCity/scripts.pory"
	.string "When this operation's over, I'll take\nyou to a hot spring spa!\pThat's what our leader said.\nI can't wait!$"
# 1048 "data/maps/SlateportCity/scripts.pory"

# 1049 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaIsSoWet:
# 1050 "data/maps/SlateportCity/scripts.pory"
	.string "The sea is just so vast…\pCould the sea have been made by the\ntears shed by Pokémon?$"
# 1051 "data/maps/SlateportCity/scripts.pory"

# 1052 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SinkOldBoats:
# 1053 "data/maps/SlateportCity/scripts.pory"
	.string "When you sink a man-made object\ninto the sea to make a habitat for\lPokémon, it's called an artificial\lreef!\pWe in Hoenn are well know for our\nreef!\pWe call is Sea Mauville!$"
# 1054 "data/maps/SlateportCity/scripts.pory"

# 1055 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyTooMuch:
# 1056 "data/maps/SlateportCity/scripts.pory"
	.string "Whenever I visit here, I get carried\n"
# 1057 "data/maps/SlateportCity/scripts.pory"
	.string "away and buy too much.$"
# 1058 "data/maps/SlateportCity/scripts.pory"

# 1059 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GetNameRaterToHelpYou:
# 1060 "data/maps/SlateportCity/scripts.pory"
	.string "If you want to change\nyour Pokémon's nickname, get the\l{COLOR BLUE}Name Rater{COLOR DARK_GRAY} to help.\lHe lives in this town.$"
# 1061 "data/maps/SlateportCity/scripts.pory"

# 1062 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CantChangeTradeMonName:
# 1063 "data/maps/SlateportCity/scripts.pory"
	.string "Any Pokémon you get in a trade, you\ncan't change its nickname.\pThe original Trainer's love for that\nPokémon is in the nickname!$"
# 1064 "data/maps/SlateportCity/scripts.pory"

# 1065 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentBuiltRecently:
# 1066 "data/maps/SlateportCity/scripts.pory"
	.string "Recently, a Battle Tent was built\n"
# 1067 "data/maps/SlateportCity/scripts.pory"
	.string "in Slateport.\p"
# 1068 "data/maps/SlateportCity/scripts.pory"
	.string "Gyms are fun, but the Battle Tent's\n"
# 1069 "data/maps/SlateportCity/scripts.pory"
	.string "awesome in its own way.\p"
# 1070 "data/maps/SlateportCity/scripts.pory"
	.string "You should go find tough Pokémon\n"
# 1071 "data/maps/SlateportCity/scripts.pory"
	.string "for the Battle Tent!$"
# 1072 "data/maps/SlateportCity/scripts.pory"

# 1073 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatWasThat:
# 1074 "data/maps/SlateportCity/scripts.pory"
	.string "What?\nWhat was that?$"
# 1075 "data/maps/SlateportCity/scripts.pory"

# 1076 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_Premonition:
# 1077 "data/maps/SlateportCity/scripts.pory"
	.string "What? What?\nIs that a premonition that something\lbig is going to happen?$"
# 1078 "data/maps/SlateportCity/scripts.pory"

# 1079 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SubmarineJackJustNow:
# 1080 "data/maps/SlateportCity/scripts.pory"
	.string "What?\pThe announcement just now…\nWas is about a submarine jack?!$"
# 1081 "data/maps/SlateportCity/scripts.pory"

# 1082 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainInARush:
# 1083 "data/maps/SlateportCity/scripts.pory"
	.string "Captain…\nHe went inside in a rush…\lI hope everything is OK.$"
# 1084 "data/maps/SlateportCity/scripts.pory"

# 1085 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AmIOnTV:
# 1086 "data/maps/SlateportCity/scripts.pory"
	.string "Is somebody going to steal the\nsubmarine?\pWill I be on TV again?$"
# 1087 "data/maps/SlateportCity/scripts.pory"

# 1088 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PeopleJackSubmarine:
# 1089 "data/maps/SlateportCity/scripts.pory"
	.string "Oh no!\nI've never imagined that there are\lpeople who want to jack a submarine.$"
# 1090 "data/maps/SlateportCity/scripts.pory"

# 1091 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BigSmileForCamera:
# 1092 "data/maps/SlateportCity/scripts.pory"
	.string "{COLOR RED}Ty{COLOR DARK_GRAY}: Okay, Captain Stern, a big smile\nfor the camera!$"
# 1093 "data/maps/SlateportCity/scripts.pory"

# 1094 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MostInvaluableExperience:
# 1095 "data/maps/SlateportCity/scripts.pory"
	.string "{COLOR RED}Gabby{COLOR DARK_GRAY}: I see, I see.\pYou've had a most invaluable\nexperience…$"
# 1096 "data/maps/SlateportCity/scripts.pory"

# 1097 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternMoveAheadWithExploration:
# 1098 "data/maps/SlateportCity/scripts.pory"
	.string "{COLOR RED}Stern{COLOR DARK_GRAY}: Yes, indeed.\pAnd that is why we intend to move ahead\nwith out expedition.$"
# 1099 "data/maps/SlateportCity/scripts.pory"

# 1100 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GabbyWonderfulThanksForInterview:
# 1101 "data/maps/SlateportCity/scripts.pory"
	.string "{COLOR RED}Gabby{COLOR DARK_GRAY}: That's wonderful,\nCaptain Stern!\pThank you for taking the time form your\nbusy schedule to talk to us.\pWe hope we can interview you again with\nnews of more discoveries!$"
# 1102 "data/maps/SlateportCity/scripts.pory"

# 1103 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhewFirstInterview:
# 1104 "data/maps/SlateportCity/scripts.pory"
	.string "{COLOR RED}Stern{COLOR DARK_GRAY}: Whew…\pThat was my first time being filmed for\nTV. What a nerve-racking experience!$"
# 1105 "data/maps/SlateportCity/scripts.pory"

# 1106 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhPlayerWeMadeDiscovery:
# 1107 "data/maps/SlateportCity/scripts.pory"
	.string "Oh!\nIt's you again!\pYou're looking well.\nGlad to see it.\pWe made a huge discovery on our latest\nexpedition to the seafloor.\pWe found an {COLOR BLUE}underwater cavern on\nRoute 128{COLOR DARK_GRAY}--and we think it may be the\lden of a super-ancient Pokémon long\lthought to have been extinct.$"
# 1108 "data/maps/SlateportCity/scripts.pory"

# 1109 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
# 1110 "data/maps/SlateportCity/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: “Ahhh… Ahhh… Testing, testing.\nOne, two, three…OK.”\p“I hope you're listening out there…\nCaptain Stern!”\p“We of Team Aqua will now be assuming\ncontrol of your lovely submarine!”\p“You'll contribute to our great\nplan of returning everything to the\lbeginning…\lI hope you appreciate this great\lhonor!”\p“Wah…hahahah!\nBwahahahahahahahah!”$"
# 1111 "data/maps/SlateportCity/scripts.pory"

# 1112 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhatWasAllThat:
# 1113 "data/maps/SlateportCity/scripts.pory"
	.string "{COLOR RED}Stern{COLOR DARK_GRAY}: Did you hear that voice?\pIt's like someone is using a\nmegaphone…\pBut where is it coming from?$"
# 1114 "data/maps/SlateportCity/scripts.pory"

# 1115 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FromHarborTryingToTakeSub:
# 1116 "data/maps/SlateportCity/scripts.pory"
	.string "It came from the Harbor!\pOur submarine!\nThey took it!$"
# 1117 "data/maps/SlateportCity/scripts.pory"

# 1118 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseComeWithMeM:
# 1119 "data/maps/SlateportCity/scripts.pory"
	.string "Young man! I'm sorry, but…\nPlease come with me!$"
# 1120 "data/maps/SlateportCity/scripts.pory"

# 1121 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseComeWithMeF:
# 1122 "data/maps/SlateportCity/scripts.pory"
	.string "Young lady! I'm sorry, but…\nPlease come with me!$"
# 1123 "data/maps/SlateportCity/scripts.pory"

# 1124 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentSign:
# 1125 "data/maps/SlateportCity/scripts.pory"
	.string "Battle Tent Slateport Site\n"
# 1126 "data/maps/SlateportCity/scripts.pory"
	.string "“Find it! The ultimate Pokémon!”$"
# 1127 "data/maps/SlateportCity/scripts.pory"

# 1128 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardWantedSign:
# 1129 "data/maps/SlateportCity/scripts.pory"
	.string "Stern's Shipyard\p"
# 1130 "data/maps/SlateportCity/scripts.pory"
	.string "“Wanted: A sailor capable of sailing\n"
# 1131 "data/maps/SlateportCity/scripts.pory"
	.string "in all currents.”$"
# 1132 "data/maps/SlateportCity/scripts.pory"

# 1133 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardNearsCompletion:
# 1134 "data/maps/SlateportCity/scripts.pory"
	.string "Stern's Shipyard\p"
# 1135 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. Tidal nears\n"
# 1136 "data/maps/SlateportCity/scripts.pory"
	.string "completion for serving the ports of\l"
# 1137 "data/maps/SlateportCity/scripts.pory"
	.string "Slateport and Lilycove.”$"
# 1138 "data/maps/SlateportCity/scripts.pory"

# 1139 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardFerryComplete:
# 1140 "data/maps/SlateportCity/scripts.pory"
	.string "Stern's Shipyard\p"
# 1141 "data/maps/SlateportCity/scripts.pory"
	.string "“Boarding of the Slateport-Lilycove\n"
# 1142 "data/maps/SlateportCity/scripts.pory"
	.string "ferry S.S. Tidal is handled at the\l"
# 1143 "data/maps/SlateportCity/scripts.pory"
	.string "Harbor.”$"
# 1144 "data/maps/SlateportCity/scripts.pory"

# 1145 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PokemonFanClubSign:
# 1146 "data/maps/SlateportCity/scripts.pory"
	.string "Pokémon Fan Club\n"
# 1147 "data/maps/SlateportCity/scripts.pory"
	.string "“Calling all fans of Pokémon!”$"
# 1148 "data/maps/SlateportCity/scripts.pory"

# 1149 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OceanicMuseumSign:
# 1150 "data/maps/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
# 1151 "data/maps/SlateportCity/scripts.pory"
	.string "all life.”\p"
# 1152 "data/maps/SlateportCity/scripts.pory"
	.string "Oceanic Museum$"
# 1153 "data/maps/SlateportCity/scripts.pory"

# 1154 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CitySign:
# 1155 "data/maps/SlateportCity/scripts.pory"
	.string "Slateport City\p"
# 1156 "data/maps/SlateportCity/scripts.pory"
	.string "“The port where people and Pokémon\n"
# 1157 "data/maps/SlateportCity/scripts.pory"
	.string "cross paths.”$"
# 1158 "data/maps/SlateportCity/scripts.pory"

# 1159 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketSign:
# 1160 "data/maps/SlateportCity/scripts.pory"
	.string "Slateport Market\n"
# 1161 "data/maps/SlateportCity/scripts.pory"
	.string "“Unique items found nowhere else!”$"
# 1162 "data/maps/SlateportCity/scripts.pory"

# 1163 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborFerryUnderConstruction:
# 1164 "data/maps/SlateportCity/scripts.pory"
	.string "Slateport Harbor\p"
# 1165 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. Tidal is under\n"
# 1166 "data/maps/SlateportCity/scripts.pory"
	.string "construction in the Shipyard.\p"
# 1167 "data/maps/SlateportCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 1168 "data/maps/SlateportCity/scripts.pory"
	.string "shortly.”$"
# 1169 "data/maps/SlateportCity/scripts.pory"

# 1170 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborSign:
# 1171 "data/maps/SlateportCity/scripts.pory"
	.string "Slateport Harbor\p"
# 1172 "data/maps/SlateportCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 1173 "data/maps/SlateportCity/scripts.pory"
	.string "the ferry S.S. Tidal.”$"
# 1174 "data/maps/SlateportCity/scripts.pory"

# 1175 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_NameRatersHouseSign:
# 1176 "data/maps/SlateportCity/scripts.pory"
	.string "Name Rater's House\n"
# 1177 "data/maps/SlateportCity/scripts.pory"
	.string "“Pokémon nicknames rated.”$"
# 1178 "data/maps/SlateportCity/scripts.pory"

# 1179 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerries:
# 1180 "data/maps/SlateportCity/scripts.pory"
	.string "If a wild Pokémon gets hurt, it heals\n"
# 1181 "data/maps/SlateportCity/scripts.pory"
	.string "itself by chewing on Berries.\p"
# 1182 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1183 "data/maps/SlateportCity/scripts.pory"
	.string "Somebody saw that and got the idea\n"
# 1184 "data/maps/SlateportCity/scripts.pory"
	.string "of making medicine from Berries.\p"
# 1185 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1186 "data/maps/SlateportCity/scripts.pory"
	.string "To turn Berries into medicine,\n"
# 1187 "data/maps/SlateportCity/scripts.pory"
	.string "they must be crushed into powder.\p"
# 1188 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1189 "data/maps/SlateportCity/scripts.pory"
	.string "You seem to have an interest\n"
# 1190 "data/maps/SlateportCity/scripts.pory"
	.string "in Berries!\p"
# 1191 "data/maps/SlateportCity/scripts.pory"
	.string "I've got something good for someone\n"
# 1192 "data/maps/SlateportCity/scripts.pory"
	.string "like you.$"
# 1193 "data/maps/SlateportCity/scripts.pory"

# 1194 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerryPowder:
# 1195 "data/maps/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
# 1196 "data/maps/SlateportCity/scripts.pory"
	.string "Pokémon Centers for crushing Berries.\p"
# 1197 "data/maps/SlateportCity/scripts.pory"
	.string "The Berry Crush machines are at\n"
# 1198 "data/maps/SlateportCity/scripts.pory"
	.string "the Direct Corner upstairs.\p"
# 1199 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?\p"
# 1200 "data/maps/SlateportCity/scripts.pory"
	.string "Could you make Berry Powder for\n"
# 1201 "data/maps/SlateportCity/scripts.pory"
	.string "me using those machines?\p"
# 1202 "data/maps/SlateportCity/scripts.pory"
	.string "I can make you all sorts of medicine\n"
# 1203 "data/maps/SlateportCity/scripts.pory"
	.string "if you bring me lots of Berry Powder.$"
# 1204 "data/maps/SlateportCity/scripts.pory"

# 1205 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BroughtMeSomeBerryPowder:
# 1206 "data/maps/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
# 1207 "data/maps/SlateportCity/scripts.pory"
	.string "Berry Powder?$"
# 1208 "data/maps/SlateportCity/scripts.pory"

# 1209 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeWhatWithIt:
# 1210 "data/maps/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
# 1211 "data/maps/SlateportCity/scripts.pory"
	.string "it with?$"
# 1212 "data/maps/SlateportCity/scripts.pory"

# 1213 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeBerryPowderForItem:
# 1214 "data/maps/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
# 1215 "data/maps/SlateportCity/scripts.pory"
	.string "Berry Powder for one {STR_VAR_1}?$"
# 1216 "data/maps/SlateportCity/scripts.pory"

# 1217 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontHaveEnoughBerryPowder:
# 1218 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
# 1219 "data/maps/SlateportCity/scripts.pory"
	.string "Berry Powder.$"
# 1220 "data/maps/SlateportCity/scripts.pory"

# 1221 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FineBerryPowderTradeSomethingElse:
# 1222 "data/maps/SlateportCity/scripts.pory"
	.string "This is fine Berry Powder.\n"
# 1223 "data/maps/SlateportCity/scripts.pory"
	.string "It will make excellent medicine.\p"
# 1224 "data/maps/SlateportCity/scripts.pory"
	.string "Would you like to trade more of your\n"
# 1225 "data/maps/SlateportCity/scripts.pory"
	.string "Berry Powder for something else?$"
# 1226 "data/maps/SlateportCity/scripts.pory"

# 1227 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhenYouGetMoreBringItToMe:
# 1228 "data/maps/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
# 1229 "data/maps/SlateportCity/scripts.pory"
	.string "Berry Powder, bring it to me, please!$"
# 1230 "data/maps/SlateportCity/scripts.pory"

# 1231 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ComeBackToTradeBerryPowder:
# 1232 "data/maps/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
# 1233 "data/maps/SlateportCity/scripts.pory"
	.string "Berry Powder for some medicine.\p"
# 1234 "data/maps/SlateportCity/scripts.pory"
	.string "I'm always running a bazaar here.\p"
# 1235 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?$"
# 1236 "data/maps/SlateportCity/scripts.pory"

# 1237 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDroveTeamAquaAway:
# 1238 "data/maps/SlateportCity/scripts.pory"
	.string "{COLOR RED}Scott{COLOR DARK_GRAY}: Huh?\pI'm sure I met you somewhere before.\nHave I introduced myself to you?\pIf not, my name's Scott.\nI just saw Team Aqua run away\lfrom here like they were stung.\pLet me guess-you drove them away?$"
# 1239 "data/maps/SlateportCity/scripts.pory"

# 1240 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MaybeThisTrainer:
# 1241 "data/maps/SlateportCity/scripts.pory"
	.string "Hmm…\nMaybe, just maybe, this Trainer…$"
# 1242 "data/maps/SlateportCity/scripts.pory"

# 1243 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_LetsRegisterEachOther:
# 1244 "data/maps/SlateportCity/scripts.pory"
	.string "All right!\pI think you're going to become a\ngood friend.\pSo, let's register each other in\nour Pokénavs.$"
# 1245 "data/maps/SlateportCity/scripts.pory"

# 1246 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RegisteredScott:
# 1247 "data/maps/SlateportCity/scripts.pory"
	.string "Registered this Scott person\n"
# 1248 "data/maps/SlateportCity/scripts.pory"
	.string "in the Pokénav.$"
# 1249 "data/maps/SlateportCity/scripts.pory"

# 1250 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou:
# 1251 "data/maps/SlateportCity/scripts.pory"
	.string "What I'd like to do is tag along with\nyou, but I do want to keep an eye\lon the talents of other people,\ltoo.\pSo, I'll be off to roam other\ntowns a bit more.\lBe seeing you, {PLAYER}!$"
# 1252 "data/maps/SlateportCity/scripts.pory"

# 1253 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_TakingBattleTentChallenge:
# 1254 "data/maps/SlateportCity/scripts.pory"
	.string "{COLOR RED}Scott{COLOR DARK_GRAY}: Oh, hey!\nIf it isn't {PLAYER}!\p{PLAYER}, let me guess-you're going to\ntake the Battle Tent challenge?\pYeah!\nThat's a good idea!\lThat's a really great idea!\pAfter all, a tough Trainer is the\nperfect fit for the Battle Tent!\pGive it your best effort!$"

SlateportCity_EventScript_AntiqueClerk::
# 1259 "data/maps/SlateportCity/scripts.pory"
	lock
# 1260 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1261 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 1262 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 1263 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_AntiqueEvolutionItems
# 1264 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 1265 "data/maps/SlateportCity/scripts.pory"
	release
	end


	.align 2
# 1269 "data/maps/SlateportCity/scripts.pory"
SlateportCity_AntiqueEvolutionItems:
# 1270 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 1271 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 1272 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 1273 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 1274 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LEADERS_CREST
# 1275 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
# 1276 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
	.2byte ITEM_NONE

SlateportCity_EventScript_Cook::
# 1280 "data/maps/SlateportCity/scripts.pory"
	lock
# 1281 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1282 "data/maps/SlateportCity/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq SlateportCity_EventScript_Cook_2
SlateportCity_EventScript_Cook_1:
# 1285 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 1286 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 1287 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_CookItems
# 1288 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 1289 "data/maps/SlateportCity/scripts.pory"
	release
	end

SlateportCity_EventScript_Cook_2:
# 1283 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_CookSternInterview
	goto SlateportCity_EventScript_Cook_1


	.align 2
# 1293 "data/maps/SlateportCity/scripts.pory"
SlateportCity_CookItems:
# 1294 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 1295 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 1296 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TART_APPLE
# 1297 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_WHIPPED_DREAM
# 1298 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_STRAWBERRY_SWEET
# 1299 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LOVE_SWEET
# 1300 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BERRY_SWEET
# 1301 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CLOVER_SWEET
# 1302 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FLOWER_SWEET
# 1303 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_STAR_SWEET
# 1304 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RIBBON_SWEET
	.2byte ITEM_NONE

SlateportCity_EventScript_PowerItems::
# 1308 "data/maps/SlateportCity/scripts.pory"
	lock
# 1309 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1310 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 1311 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 1312 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_UNLOCKED_STAT_EDITOR, SlateportCity_EventScript_PowerItems_2
# 1315 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_PowerItems
SlateportCity_EventScript_PowerItems_1:
# 1317 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 1318 "data/maps/SlateportCity/scripts.pory"
	release
	end

SlateportCity_EventScript_PowerItems_2:
# 1313 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_TypeBoostingItems
	goto SlateportCity_EventScript_PowerItems_1


	.align 2
# 1322 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_PowerItems:
# 1323 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 1324 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POWER_BELT
# 1325 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POWER_LENS
# 1326 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POWER_BAND
# 1327 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 1328 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
	.2byte ITEM_NONE

	.align 2
# 1331 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_TypeBoostingItems:
# 1332 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CHARCOAL
# 1333 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 1334 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 1335 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 1336 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FAIRY_FEATHER
# 1337 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HARD_STONE
# 1338 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MAGNET
# 1339 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 1340 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 1341 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NEVERMELTICE
# 1342 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POISON_BARB
# 1343 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 1344 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 1345 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 1346 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 1347 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 1348 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
	.2byte ITEM_NONE

SlateportCity_EventScript_IncenseStand::
# 1352 "data/maps/SlateportCity/scripts.pory"
	lock
# 1353 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1354 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 1355 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 1356 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_Incense
# 1357 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 1358 "data/maps/SlateportCity/scripts.pory"
	release
	end


	.align 2
# 1362 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_Incense:
# 1363 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FULL_INCENSE
# 1364 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LAX_INCENSE
# 1365 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LUCK_INCENSE
# 1366 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ODD_INCENSE
# 1367 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PURE_INCENSE
# 1368 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ROCK_INCENSE
# 1369 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ROSE_INCENSE
# 1370 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SEA_INCENSE
# 1371 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_WAVE_INCENSE
	.2byte ITEM_NONE

SlateportCity_EventScript_MintClerk::
# 1375 "data/maps/SlateportCity/scripts.pory"
	lock
# 1376 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1377 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 1378 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 1379 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_Mints
# 1380 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 1381 "data/maps/SlateportCity/scripts.pory"
	release
	end


	.align 2
# 1385 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_Mints:
# 1386 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 1387 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 1388 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 1389 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 1390 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 1391 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 1392 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LAX_MINT
# 1393 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 1394 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 1395 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MILD_MINT
# 1396 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RASH_MINT
# 1397 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 1398 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CALM_MINT
# 1399 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 1400 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 1401 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 1402 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 1403 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 1404 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 1405 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 1406 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

SlateportCity_EventScript_BerryClerk::
# 1410 "data/maps/SlateportCity/scripts.pory"
	lock
# 1411 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1412 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 1413 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 1414 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_Berries
# 1415 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 1416 "data/maps/SlateportCity/scripts.pory"
	release
	end


	.align 2
# 1420 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_Berries:
# 1421 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 1422 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 1423 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 1424 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 1425 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 1426 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
	.2byte ITEM_NONE
