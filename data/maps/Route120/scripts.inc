# 1 "data/maps/Route120/scripts.pory"

# 2 "data/maps/Route120/scripts.pory"
.set LOCALID_STEVEN, 31
# 3 "data/maps/Route120/scripts.pory"

# 4 "data/maps/Route120/scripts.pory"
Route120_MapScripts::
# 5 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route120_OnResume
# 6 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route120_OnTransition
# 7 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route120_OnLoad
# 8 "data/maps/Route120/scripts.pory"
	.byte 0
# 9 "data/maps/Route120/scripts.pory"

# 10 "data/maps/Route120/scripts.pory"
Route120_OnResume:
# 11 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route120_EventScript_RemoveKecleonObject
# 12 "data/maps/Route120/scripts.pory"
	end
# 13 "data/maps/Route120/scripts.pory"

# 14 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleonObject::
# 15 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 0, Route120_EventScript_RemoveBridgeKecleon
# 16 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 1, Route120_EventScript_RemoveKecleon
# 17 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 2, Route120_EventScript_RemoveKecleon
# 18 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 3, Route120_EventScript_RemoveKecleon
# 19 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 4, Route120_EventScript_RemoveKecleon
# 20 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 5, Route120_EventScript_RemoveKecleon
# 21 "data/maps/Route120/scripts.pory"
	return
# 22 "data/maps/Route120/scripts.pory"

# 23 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleon::
# 24 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 25 "data/maps/Route120/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 26 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON
# 27 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON_SHADOW
# 28 "data/maps/Route120/scripts.pory"
	return
# 29 "data/maps/Route120/scripts.pory"

# 30 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleon::
# 31 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 32 "data/maps/Route120/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 33 "data/maps/Route120/scripts.pory"
	removeobject VAR_LAST_TALKED
# 34 "data/maps/Route120/scripts.pory"
	return
# 35 "data/maps/Route120/scripts.pory"

# 36 "data/maps/Route120/scripts.pory"
Route120_OnLoad:
# 37 "data/maps/Route120/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route120_EventScript_CloseAncientTomb
# 38 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_RECEIVED_DEVON_SCOPE, Route120_EventScript_SetBridgeClearMetatiles
# 39 "data/maps/Route120/scripts.pory"
	call_if_unset FLAG_RECEIVED_DEVON_SCOPE, Route120_EventScript_SetBridgeKecleonMovement
# 40 "data/maps/Route120/scripts.pory"
	end
# 41 "data/maps/Route120/scripts.pory"

# 42 "data/maps/Route120/scripts.pory"
Route120_EventScript_CloseAncientTomb::
# 43 "data/maps/Route120/scripts.pory"
	setmetatile 7, 54, METATILE_General_RockWall_RockBase, TRUE
# 44 "data/maps/Route120/scripts.pory"
	setmetatile 7, 55, METATILE_General_RockWall_SandBase, TRUE
# 45 "data/maps/Route120/scripts.pory"
	return
# 46 "data/maps/Route120/scripts.pory"

# 47 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetBridgeClearMetatiles::
# 48 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 49 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 50 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 51 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 52 "data/maps/Route120/scripts.pory"
	return
# 53 "data/maps/Route120/scripts.pory"

# 54 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetBridgeKecleonMovement::
# 55 "data/maps/Route120/scripts.pory"
	setobjectmovementtype LOCALID_BRIDGE_KECLEON_SHADOW, MOVEMENT_TYPE_FACE_RIGHT
# 56 "data/maps/Route120/scripts.pory"
	return
# 57 "data/maps/Route120/scripts.pory"

# 58 "data/maps/Route120/scripts.pory"
Route120_OnTransition:
# 59 "data/maps/Route120/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 60 "data/maps/Route120/scripts.pory"
	call Route120_EventScript_SetWeather
# 61 "data/maps/Route120/scripts.pory"
	end
# 62 "data/maps/Route120/scripts.pory"

# 63 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetWeather::
# 64 "data/maps/Route120/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 65 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_1, 14, Route120_EventScript_SetSunnyWeather
# 66 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_1, 60, Route120_EventScript_TrySetRainyWeather
# 67 "data/maps/Route120/scripts.pory"
	goto_if_ge VAR_TEMP_1, 61, Route120_EventScript_SetCloudyWeather
# 68 "data/maps/Route120/scripts.pory"
	return
# 69 "data/maps/Route120/scripts.pory"

# 70 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetCloudyWeather::
# 71 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY_CLOUDS
# 72 "data/maps/Route120/scripts.pory"
	return
# 73 "data/maps/Route120/scripts.pory"

# 74 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetSunnyWeather::
# 75 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY
# 76 "data/maps/Route120/scripts.pory"
	return
# 77 "data/maps/Route120/scripts.pory"

# 78 "data/maps/Route120/scripts.pory"
Route120_EventScript_TrySetRainyWeather::
# 79 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_0, 7, Route120_EventScript_SetRainyWeather
# 80 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_0, 19, Route120_EventScript_SetSunnyWeather
# 81 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_SetRainyWeather
# 82 "data/maps/Route120/scripts.pory"
	end
# 83 "data/maps/Route120/scripts.pory"

# 84 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetRainyWeather::
# 85 "data/maps/Route120/scripts.pory"
	setweather WEATHER_RAIN
# 86 "data/maps/Route120/scripts.pory"
	return
# 87 "data/maps/Route120/scripts.pory"

# 88 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty::
# 89 "data/maps/Route120/scripts.pory"
	lock
# 90 "data/maps/Route120/scripts.pory"
	faceplayer
# 91 "data/maps/Route120/scripts.pory"
	dotimebasedevents
# 92 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_120_RECEIVED_BERRY, Route120_EventScript_ReceivedBerry
# 93 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerriesExpressionOfLoveIsntIt, MSGBOX_YESNO
# 94 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route120_EventScript_BerryLove
# 95 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_RESULT, NO, Route120_EventScript_BerryNotLove
# 96 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetPlayerTrainerIdOnesDigit
# 97 "data/maps/Route120/scripts.pory"
	switch VAR_RESULT
# 98 "data/maps/Route120/scripts.pory"
	case 0, Route120_EventScript_GiveFigyBerry
# 99 "data/maps/Route120/scripts.pory"
	case 5, Route120_EventScript_GiveFigyBerry
# 100 "data/maps/Route120/scripts.pory"
	case 1, Route120_EventScript_GiveWikiBerry
# 101 "data/maps/Route120/scripts.pory"
	case 6, Route120_EventScript_GiveWikiBerry
# 102 "data/maps/Route120/scripts.pory"
	case 2, Route120_EventScript_GiveMagoBerry
# 103 "data/maps/Route120/scripts.pory"
	case 7, Route120_EventScript_GiveMagoBerry
# 104 "data/maps/Route120/scripts.pory"
	case 3, Route120_EventScript_GiveAguavBerry
# 105 "data/maps/Route120/scripts.pory"
	case 8, Route120_EventScript_GiveAguavBerry
# 106 "data/maps/Route120/scripts.pory"
	case 4, Route120_EventScript_GiveIapapaBerry
# 107 "data/maps/Route120/scripts.pory"
	case 9, Route120_EventScript_GiveIapapaBerry
# 108 "data/maps/Route120/scripts.pory"
	end
# 109 "data/maps/Route120/scripts.pory"

# 110 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveFigyBerry::
# 111 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_FIGY_BERRY
# 112 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 113 "data/maps/Route120/scripts.pory"
	end
# 114 "data/maps/Route120/scripts.pory"

# 115 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveWikiBerry::
# 116 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_WIKI_BERRY
# 117 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 118 "data/maps/Route120/scripts.pory"
	end
# 119 "data/maps/Route120/scripts.pory"

# 120 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveMagoBerry::
# 121 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_MAGO_BERRY
# 122 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 123 "data/maps/Route120/scripts.pory"
	end
# 124 "data/maps/Route120/scripts.pory"

# 125 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveAguavBerry::
# 126 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_AGUAV_BERRY
# 127 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 128 "data/maps/Route120/scripts.pory"
	end
# 129 "data/maps/Route120/scripts.pory"

# 130 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveIapapaBerry::
# 131 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_IAPAPA_BERRY
# 132 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 133 "data/maps/Route120/scripts.pory"
	end
# 134 "data/maps/Route120/scripts.pory"

# 135 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveBerry::
# 136 "data/maps/Route120/scripts.pory"
	giveitem VAR_0x8004
# 137 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 138 "data/maps/Route120/scripts.pory"
	setflag FLAG_DAILY_ROUTE_120_RECEIVED_BERRY
# 139 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerryIsRareRaiseItWithCare, MSGBOX_DEFAULT
# 140 "data/maps/Route120/scripts.pory"
	release
# 141 "data/maps/Route120/scripts.pory"
	end
# 142 "data/maps/Route120/scripts.pory"

# 143 "data/maps/Route120/scripts.pory"
Route120_EventScript_ReceivedBerry::
# 144 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_IllGetMoreBerriesFromBerryMaster, MSGBOX_DEFAULT
# 145 "data/maps/Route120/scripts.pory"
	release
# 146 "data/maps/Route120/scripts.pory"
	end
# 147 "data/maps/Route120/scripts.pory"

# 148 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryLove::
# 149 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_YesYouUnderstand, MSGBOX_DEFAULT
# 150 "data/maps/Route120/scripts.pory"
	return
# 151 "data/maps/Route120/scripts.pory"

# 152 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryNotLove::
# 153 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_MakeYourOwnImpressions, MSGBOX_DEFAULT
# 154 "data/maps/Route120/scripts.pory"
	return
# 155 "data/maps/Route120/scripts.pory"

# 156 "data/maps/Route120/scripts.pory"
Route120_EventScript_Steven::
# 157 "data/maps/Route120/scripts.pory"
	lock
# 158 "data/maps/Route120/scripts.pory"
	faceplayer
# 159 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_NOT_READY_FOR_BATTLE_ROUTE_120, Route120_EventScript_StevenAskReadyForBattle
# 160 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGreeting, MSGBOX_DEFAULT
# 161 "data/maps/Route120/scripts.pory"
    delay 16
# 162 "data/maps/Route120/scripts.pory"
    msgbox Route120_Text_StevenHaveYouNotice, MSGBOX_YESNO
# 163 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_EventScript_StevenNotReady
# 164 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 165 "data/maps/Route120/scripts.pory"
	end
# 166 "data/maps/Route120/scripts.pory"

# 167 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenNotReady::
# 168 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenIllWaitHere, MSGBOX_DEFAULT
# 169 "data/maps/Route120/scripts.pory"
	setflag FLAG_NOT_READY_FOR_BATTLE_ROUTE_120
# 170 "data/maps/Route120/scripts.pory"
	release
# 171 "data/maps/Route120/scripts.pory"
	end
# 172 "data/maps/Route120/scripts.pory"

# 173 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenAskReadyForBattle::
# 174 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenReadyForBattle, MSGBOX_YESNO
# 175 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_EventScript_StevenNotReady
# 176 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 177 "data/maps/Route120/scripts.pory"
	end
# 178 "data/maps/Route120/scripts.pory"

# 179 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenBattleKecleon::
# 180 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenShowMeYourPower, MSGBOX_DEFAULT
# 181 "data/maps/Route120/scripts.pory"
	closemessage
# 182 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route120_EventScript_PlayerApproachKecleonNorth
# 183 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route120_EventScript_PlayerApproachKecleonWest
# 184 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceLeft
# 185 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 186 "data/maps/Route120/scripts.pory"
	delay 20
# 187 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_PlayerUsedDevonScope, MSGBOX_DEFAULT
# 188 "data/maps/Route120/scripts.pory"
	closemessage
# 189 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Common_Movement_WalkInPlaceRight
# 190 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 191 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Movement_KecleonAppears
# 192 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 193 "data/maps/Route120/scripts.pory"
    playse SE_PIN
# 194 "data/maps/Route120/scripts.pory"
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 195 "data/maps/Route120/scripts.pory"
    msgbox Route120_Text_PokemonBecameVisible, MSGBOX_DEFAULT
# 196 "data/maps/Route120/scripts.pory"
    waitmovement OBJ_EVENT_ID_PLAYER
# 197 "data/maps/Route120/scripts.pory"
    closemessage
# 198 "data/maps/Route120/scripts.pory"
	waitse
# 199 "data/maps/Route120/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 200 "data/maps/Route120/scripts.pory"
	delay 40
# 201 "data/maps/Route120/scripts.pory"
	waitmoncry
# 202 "data/maps/Route120/scripts.pory"
	setwildbattle SPECIES_KECLEON, 30
# 203 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8009, 0
# 204 "data/maps/Route120/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 205 "data/maps/Route120/scripts.pory"
	dowildbattle
# 206 "data/maps/Route120/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 207 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 208 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 209 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 210 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 211 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 212 "data/maps/Route120/scripts.pory"
	end
# 213 "data/maps/Route120/scripts.pory"

# 214 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleonPostBattle::
# 215 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 216 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON
# 217 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON_SHADOW
# 218 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 219 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 220 "data/maps/Route120/scripts.pory"
	end
# 221 "data/maps/Route120/scripts.pory"

# 222 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenGiveDeconScope::
# 223 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
# 224 "data/maps/Route120/scripts.pory"
    delay 8
# 225 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 226 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 227 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGiveDevonScope, MSGBOX_DEFAULT
# 228 "data/maps/Route120/scripts.pory"
	giveitem ITEM_DEVON_SCOPE
# 229 "data/maps/Route120/scripts.pory"
	setflag FLAG_RECEIVED_DEVON_SCOPE
# 230 "data/maps/Route120/scripts.pory"
    msgbox Route120_Text_StevenOneMoreThing, MSGBOX_DEFAULT
# 231 "data/maps/Route120/scripts.pory"
    giveitem ITEM_SWAMPERTITE, 1
# 232 "data/maps/Route120/scripts.pory"
    giveitem ITEM_BLAZIKENITE, 1
# 233 "data/maps/Route120/scripts.pory"
    giveitem ITEM_SCEPTILITE, 1
# 234 "data/maps/Route120/scripts.pory"
    msgbox Route120_Text_StevenExplainStones, MSGBOX_DEFAULT
# 235 "data/maps/Route120/scripts.pory"
    closemessage
# 236 "data/maps/Route120/scripts.pory"
	delay 16
# 237 "data/maps/Route120/scripts.pory"
	dofieldeffectsparkle 13, 16, 0
# 238 "data/maps/Route120/scripts.pory"
    waitfieldeffect FLDEFF_SPARKLE
# 239 "data/maps/Route120/scripts.pory"
	delay 16
# 240 "data/maps/Route120/scripts.pory"
    playse SE_PIN
# 241 "data/maps/Route120/scripts.pory"
    applymovement LOCALID_STEVEN, Common_Movement_ExclamationMark
# 242 "data/maps/Route120/scripts.pory"
    waitmovement LOCALID_STEVEN
# 243 "data/maps/Route120/scripts.pory"
    msgbox Route120_Text_StevenSomethingShone, MSGBOX_DEFAULT
# 244 "data/maps/Route120/scripts.pory"
    closemessage
# 245 "data/maps/Route120/scripts.pory"
    delay 32
# 246 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGoodbye, MSGBOX_DEFAULT
# 247 "data/maps/Route120/scripts.pory"
	closemessage
# 248 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
# 249 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 250 "data/maps/Route120/scripts.pory"
	delay 50
# 251 "data/maps/Route120/scripts.pory"
	setfieldeffectargument 0, 1
# 252 "data/maps/Route120/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 253 "data/maps/Route120/scripts.pory"
	delay 15
# 254 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_STEVEN
# 255 "data/maps/Route120/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 256 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 257 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 258 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 259 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 260 "data/maps/Route120/scripts.pory"
	special DrawWholeMapView
# 261 "data/maps/Route120/scripts.pory"
	release
# 262 "data/maps/Route120/scripts.pory"
	end
# 263 "data/maps/Route120/scripts.pory"

# 264 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonNorth::
# 265 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 266 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 267 "data/maps/Route120/scripts.pory"
	return
# 268 "data/maps/Route120/scripts.pory"

# 269 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonWest::
# 270 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route120_Movement_ApproachKecleonWest
# 271 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 272 "data/maps/Route120/scripts.pory"
	return
# 273 "data/maps/Route120/scripts.pory"

# 274 "data/maps/Route120/scripts.pory"
Route120_Movement_ApproachKecleonWest:
# 275 "data/maps/Route120/scripts.pory"
	walk_down
# 276 "data/maps/Route120/scripts.pory"
	walk_left
# 277 "data/maps/Route120/scripts.pory"
	step_end
# 278 "data/maps/Route120/scripts.pory"

# 279 "data/maps/Route120/scripts.pory"
Route120_EventScript_BridgeKecleon::
# 280 "data/maps/Route120/scripts.pory"
    lock
# 281 "data/maps/Route120/scripts.pory"
    delay 8
# 282 "data/maps/Route120/scripts.pory"
    playse SE_PIN
# 283 "data/maps/Route120/scripts.pory"
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 284 "data/maps/Route120/scripts.pory"
    waitmovement OBJ_EVENT_ID_PLAYER
# 285 "data/maps/Route120/scripts.pory"
    waitse
# 286 "data/maps/Route120/scripts.pory"
	msgbox Kecleon_Text_SomethingUnseeable, MSGBOX_DEFAULT
# 287 "data/maps/Route120/scripts.pory"
    closemessage
# 288 "data/maps/Route120/scripts.pory"
    release
# 289 "data/maps/Route120/scripts.pory"
	end
# 290 "data/maps/Route120/scripts.pory"

# 291 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSignFortree::
# 292 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSignFortree, MSGBOX_SIGN
# 293 "data/maps/Route120/scripts.pory"
	end
# 294 "data/maps/Route120/scripts.pory"

# 295 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSign121::
# 296 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSign121, MSGBOX_SIGN
# 297 "data/maps/Route120/scripts.pory"
	end
# 298 "data/maps/Route120/scripts.pory"

# 299 "data/maps/Route120/scripts.pory"
Route120_EventScript_Colin::
# 300 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_COLIN, Route120_Text_ColinIntro, Route120_Text_ColinDefeat
# 301 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ColinPostBattle, MSGBOX_AUTOCLOSE
# 302 "data/maps/Route120/scripts.pory"
	end
# 303 "data/maps/Route120/scripts.pory"

# 304 "data/maps/Route120/scripts.pory"
Route120_EventScript_Robert::
# 305 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ROBERT_1, Route120_Text_RobertIntro, Route120_Text_RobertDefeat, Route120_EventScript_RegisterRobert
# 306 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 307 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route120_EventScript_RematchRobert
# 308 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostBattle, MSGBOX_DEFAULT
# 309 "data/maps/Route120/scripts.pory"
	release
# 310 "data/maps/Route120/scripts.pory"
	end
# 311 "data/maps/Route120/scripts.pory"

# 312 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterRobert::
# 313 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 314 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 315 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertRegister, MSGBOX_DEFAULT
# 316 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_ROBERT_1
# 317 "data/maps/Route120/scripts.pory"
	release
# 318 "data/maps/Route120/scripts.pory"
	end
# 319 "data/maps/Route120/scripts.pory"

# 320 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchRobert::
# 321 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_ROBERT_1, Route120_Text_RobertRematchIntro, Route120_Text_RobertRematchDefeat
# 322 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostRematch, MSGBOX_AUTOCLOSE
# 323 "data/maps/Route120/scripts.pory"
	end
# 324 "data/maps/Route120/scripts.pory"

# 325 "data/maps/Route120/scripts.pory"
Route120_EventScript_Lorenzo::
# 326 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LORENZO, Route120_Text_LorenzoIntro, Route120_Text_LorenzoDefeat
# 327 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LorenzoPostBattle, MSGBOX_AUTOCLOSE
# 328 "data/maps/Route120/scripts.pory"
	end
# 329 "data/maps/Route120/scripts.pory"

# 330 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jenna::
# 331 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNA, Route120_Text_JennaIntro, Route120_Text_JennaDefeat
# 332 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JennaPostBattle, MSGBOX_AUTOCLOSE
# 333 "data/maps/Route120/scripts.pory"
	end
# 334 "data/maps/Route120/scripts.pory"

# 335 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jeffrey::
# 336 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JEFFREY_1, Route120_Text_JeffreyIntro, Route120_Text_JeffreyDefeat, Route120_EventScript_RegisterJeffrey
# 337 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 338 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route120_EventScript_RematchJeffrey
# 339 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostBattle, MSGBOX_DEFAULT
# 340 "data/maps/Route120/scripts.pory"
	release
# 341 "data/maps/Route120/scripts.pory"
	end
# 342 "data/maps/Route120/scripts.pory"

# 343 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterJeffrey::
# 344 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 345 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 346 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyRegister, MSGBOX_DEFAULT
# 347 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_JEFFREY_1
# 348 "data/maps/Route120/scripts.pory"
	release
# 349 "data/maps/Route120/scripts.pory"
	end
# 350 "data/maps/Route120/scripts.pory"

# 351 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchJeffrey::
# 352 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_JEFFREY_1, Route120_Text_JeffreyRematchIntro, Route120_Text_JeffreyRematchDefeat
# 353 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostRematch, MSGBOX_AUTOCLOSE
# 354 "data/maps/Route120/scripts.pory"
	end
# 355 "data/maps/Route120/scripts.pory"

# 356 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jennifer::
# 357 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNIFER, Route120_Text_JenniferIntro, Route120_Text_JenniferDefeat
# 358 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
# 359 "data/maps/Route120/scripts.pory"
	end
# 360 "data/maps/Route120/scripts.pory"

# 361 "data/maps/Route120/scripts.pory"
Route120_EventScript_Chip::
# 362 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CHIP, Route120_Text_ChipIntro, Route120_Text_ChipDefeat
# 363 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ChipPostBattle, MSGBOX_AUTOCLOSE
# 364 "data/maps/Route120/scripts.pory"
	end
# 365 "data/maps/Route120/scripts.pory"

# 366 "data/maps/Route120/scripts.pory"
Route120_EventScript_Clarissa::
# 367 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CLARISSA, Route120_Text_ClarissaIntro, Route120_Text_ClarissaDefeat
# 368 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ClarissaPostBattle, MSGBOX_AUTOCLOSE
# 369 "data/maps/Route120/scripts.pory"
	end
# 370 "data/maps/Route120/scripts.pory"

# 371 "data/maps/Route120/scripts.pory"
Route120_EventScript_Angelica::
# 372 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ANGELICA, Route120_Text_AngelicaIntro, Route120_Text_AngelicaDefeat
# 373 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_AngelicaPostBattle, MSGBOX_AUTOCLOSE
# 374 "data/maps/Route120/scripts.pory"
	end
# 375 "data/maps/Route120/scripts.pory"

# 376 "data/maps/Route120/scripts.pory"
Route120_EventScript_Keigo::
# 377 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_KEIGO, Route120_Text_KeigoIntro, Route120_Text_KeigoDefeat
# 378 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_KeigoPostBattle, MSGBOX_AUTOCLOSE
# 379 "data/maps/Route120/scripts.pory"
	end
# 380 "data/maps/Route120/scripts.pory"

# 381 "data/maps/Route120/scripts.pory"
Route120_EventScript_Riley::
# 382 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_RILEY, Route120_Text_RileyIntro, Route120_Text_RileyDefeat
# 383 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
# 384 "data/maps/Route120/scripts.pory"
	end
# 385 "data/maps/Route120/scripts.pory"

# 386 "data/maps/Route120/scripts.pory"
Route120_EventScript_Leonel::
# 387 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LEONEL, Route120_Text_LeonelIntro, Route120_Text_LeonelDefeat
# 388 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LeonelPostBattle, MSGBOX_AUTOCLOSE
# 389 "data/maps/Route120/scripts.pory"
	end
# 390 "data/maps/Route120/scripts.pory"

# 391 "data/maps/Route120/scripts.pory"
Route120_EventScript_Callie::
# 392 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CALLIE, Route120_Text_CallieIntro, Route120_Text_CallieDefeat
# 393 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_CalliePostBattle, MSGBOX_AUTOCLOSE
# 394 "data/maps/Route120/scripts.pory"
	end
# 395 "data/maps/Route120/scripts.pory"

# 396 "data/maps/Route120/scripts.pory"
@@@@@@@@@@@@@@@@@@@@@@
# 397 "data/maps/Route120/scripts.pory"
@ Super Rod Gift
# 398 "data/maps/Route120/scripts.pory"
@@@@@@@@@@@@@@@@@@@@@@
# 399 "data/maps/Route120/scripts.pory"
Route120_House3_EventScript_SuperRodFisherman::
# 400 "data/maps/Route120/scripts.pory"
	lock
# 401 "data/maps/Route120/scripts.pory"
	faceplayer
# 402 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUPER_ROD, Route120_House3_EventScript_ReceivedSuperRod
# 403 "data/maps/Route120/scripts.pory"
	msgbox Route120_House3_Text_YouWantSuperRod, MSGBOX_YESNO
# 404 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_House3_EventScript_DeclineSuperRod
# 405 "data/maps/Route120/scripts.pory"
	msgbox Route120_House3_Text_SuperRodIsSuper, MSGBOX_DEFAULT
# 406 "data/maps/Route120/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 407 "data/maps/Route120/scripts.pory"
	setflag FLAG_RECEIVED_SUPER_ROD
# 408 "data/maps/Route120/scripts.pory"
	msgbox Route120_House3_Text_TryDroppingRodInWater, MSGBOX_DEFAULT
# 409 "data/maps/Route120/scripts.pory"
	release
# 410 "data/maps/Route120/scripts.pory"
	end
# 411 "data/maps/Route120/scripts.pory"

# 412 "data/maps/Route120/scripts.pory"
Route120_House3_EventScript_ReceivedSuperRod::
# 413 "data/maps/Route120/scripts.pory"
	msgbox Route120_House3_Text_GoAfterSeafloorPokemon, MSGBOX_DEFAULT
# 414 "data/maps/Route120/scripts.pory"
	release
# 415 "data/maps/Route120/scripts.pory"
	end
# 416 "data/maps/Route120/scripts.pory"

# 417 "data/maps/Route120/scripts.pory"
Route120_House3_EventScript_DeclineSuperRod::
# 418 "data/maps/Route120/scripts.pory"
	msgbox Route120_House3_Text_DontYouLikeToFish, MSGBOX_DEFAULT
# 419 "data/maps/Route120/scripts.pory"
	release
# 420 "data/maps/Route120/scripts.pory"
	end
# 421 "data/maps/Route120/scripts.pory"

# 422 "data/maps/Route120/scripts.pory"
Route120_House3_Text_YouWantSuperRod:
# 423 "data/maps/Route120/scripts.pory"
	.string "Hey there, Trainer!\nA Super Rod really is super!\pSay whatever you want, but this\nbaby can catch Pokémon right off the\lseafloor!\pWhat do you think?\nYou want one, don't you?$"
# 424 "data/maps/Route120/scripts.pory"

# 425 "data/maps/Route120/scripts.pory"
Route120_House3_Text_SuperRodIsSuper:
# 426 "data/maps/Route120/scripts.pory"
	.string "You bet, you bet!\pAfter all, a Super Rod is the definition\nof super!$"
# 427 "data/maps/Route120/scripts.pory"

# 428 "data/maps/Route120/scripts.pory"
Route120_House3_Text_TryDroppingRodInWater:
# 429 "data/maps/Route120/scripts.pory"
	.string "If there's any water, try dropping in\nyour line and see what bites!$"
# 430 "data/maps/Route120/scripts.pory"

# 431 "data/maps/Route120/scripts.pory"
Route120_House3_Text_DontYouLikeToFish:
# 432 "data/maps/Route120/scripts.pory"
	.string "Say wha-a-a-a-at?\nYou mean you don't like fishing?$"
# 433 "data/maps/Route120/scripts.pory"

# 434 "data/maps/Route120/scripts.pory"
Route120_House3_Text_GoAfterSeafloorPokemon:
# 435 "data/maps/Route120/scripts.pory"
	.string "You can go after seafloor-dwelling\nPokémon with your Super Rod.$"
# 436 "data/maps/Route120/scripts.pory"

# 437 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGreeting:
# 438 "data/maps/Route120/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: Hm?\p{PLAYER}?\nSo, we meet again.\pHow has it been? Have you been using\nthe Mega Ring wisely?\pI suppose I needn't even ask, though.\nNot when it comes to you and your\lteam.$"
# 439 "data/maps/Route120/scripts.pory"

# 440 "data/maps/Route120/scripts.pory"
Route120_Text_StevenHaveYouNotice:
# 441 "data/maps/Route120/scripts.pory"
    .string "I wonder…\nHave you noticed? Hm?\pThere's something here you can't see.\pNow if I were to use this device on the\ninvisible obstacle…\p…\pNo, no… Rather than describing it, I\nshould just show you.\lThat should be more entertaining.\p{PLAYER}…\pAre you and your Pokémon ready for\nbattle?$"
# 442 "data/maps/Route120/scripts.pory"

# 443 "data/maps/Route120/scripts.pory"
Route120_Text_StevenIllWaitHere:
# 444 "data/maps/Route120/scripts.pory"
	.string "No?\pI'll wait here, so go get ready.$"
# 445 "data/maps/Route120/scripts.pory"

# 446 "data/maps/Route120/scripts.pory"
Route120_Text_StevenReadyForBattle:
# 447 "data/maps/Route120/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: Are you and your Pokémon ready\nfor battle?$"
# 448 "data/maps/Route120/scripts.pory"

# 449 "data/maps/Route120/scripts.pory"
Route120_Text_StevenShowMeYourPower:
# 450 "data/maps/Route120/scripts.pory"
	.string "Good.\pIn that case…\pI want you to take this.\pTry it on.\nI'm sure it will fit you.$"
# 451 "data/maps/Route120/scripts.pory"

# 452 "data/maps/Route120/scripts.pory"
Route120_Text_PlayerUsedDevonScope:
# 453 "data/maps/Route120/scripts.pory"
	.string "{PLAYER} slipped the Devon Scope on.$"
# 454 "data/maps/Route120/scripts.pory"

# 455 "data/maps/Route120/scripts.pory"
Route120_Text_PokemonBecameVisible:
# 456 "data/maps/Route120/scripts.pory"
    .string "A previously invisible Pokémon became\nvisible to the naked eye!\pThe startled Keckleon attacked!$"
# 457 "data/maps/Route120/scripts.pory"

# 458 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGiveDevonScope:
# 459 "data/maps/Route120/scripts.pory"
	.string "Just as I expected.\pThat's called a Devon Scope.\nIt's a fantastic piece of tech that\llets you see Pokémon in hiding.\pConsider it a gift from me.\nTake it.$"
# 460 "data/maps/Route120/scripts.pory"

# 461 "data/maps/Route120/scripts.pory"
Route120_Text_StevenOneMoreThing:
# 462 "data/maps/Route120/scripts.pory"
    .string "And one more thing…$"
# 463 "data/maps/Route120/scripts.pory"

# 464 "data/maps/Route120/scripts.pory"
Route120_Text_StevenExplainStones:
# 465 "data/maps/Route120/scripts.pory"
    .string "These stones rank in my top ten\nfavorite stones in existence.\pI have no doubt that your Pokémon will\nlike them, too.\pYou know, {PLAYER}…\pI like to see Trainers and Pokémon\ntrying their best.\lThat's why I like you so much.$"
# 466 "data/maps/Route120/scripts.pory"

# 467 "data/maps/Route120/scripts.pory"
Route120_Text_StevenSomethingShone:
# 468 "data/maps/Route120/scripts.pory"
    .string "Hm?\pIt seemed as though something just…\nshone for a moment in your Bag.\pI'm sure I sensed the power of some\nkind of stone…\pA Meteorite…?\nNo, it couldn't be…$"
# 469 "data/maps/Route120/scripts.pory"

# 470 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGoodbye:
# 471 "data/maps/Route120/scripts.pory"
	.string "Let's meet again someday.$"
# 472 "data/maps/Route120/scripts.pory"

# 473 "data/maps/Route120/scripts.pory"
Kecleon_Text_SomethingUnseeable:
# 474 "data/maps/Route120/scripts.pory"
	.string "There's an invisible obstacle in your\nway.$"
# 475 "data/maps/Route120/scripts.pory"

# 476 "data/maps/Route120/scripts.pory"
Kecleon_Text_WantToUseDevonScope:
# 477 "data/maps/Route120/scripts.pory"
	.string "There's an invisible obstacle in your\nway.\pWould you like to use the Devon Scope?$"
# 478 "data/maps/Route120/scripts.pory"

# 479 "data/maps/Route120/scripts.pory"
Kecleon_Text_UseDevonScopeMonAttacked:
# 480 "data/maps/Route120/scripts.pory"
	.string "{PLAYER} slipped the Devon Scope on.\pA previously invisible Pokémon became\nvisible to the naked eye!\pThe startled Keckleon attacked!$"
# 481 "data/maps/Route120/scripts.pory"

# 482 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSignFortree:
# 483 "data/maps/Route120/scripts.pory"
	.string "Route 120\n"
# 484 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} Fortree City$"
# 485 "data/maps/Route120/scripts.pory"

# 486 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSign121:
# 487 "data/maps/Route120/scripts.pory"
	.string "{RIGHT_ARROW} Route 121\n"
# 488 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} Route 120$"
