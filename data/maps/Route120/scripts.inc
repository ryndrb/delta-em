# 1 "data/maps/Route120/scripts.pory"

# 2 "data/maps/Route120/scripts.pory"
.set LOCALID_BRIDGE_KECLEON, 30
# 3 "data/maps/Route120/scripts.pory"
.set LOCALID_STEVEN, 31
# 4 "data/maps/Route120/scripts.pory"
.set LOCALID_BRIDGE_KECLEON_SHADOW, 36  @ They use a second object which is identical to Kecleon but has a reflection palette tag for the bridge shadow
# 5 "data/maps/Route120/scripts.pory"

# 6 "data/maps/Route120/scripts.pory"
Route120_MapScripts::
# 7 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route120_OnResume
# 8 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route120_OnTransition
# 9 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route120_OnLoad
# 10 "data/maps/Route120/scripts.pory"
	.byte 0
# 11 "data/maps/Route120/scripts.pory"

# 12 "data/maps/Route120/scripts.pory"
Route120_OnResume:
# 13 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route120_EventScript_RemoveKecleonObject
# 14 "data/maps/Route120/scripts.pory"
	end
# 15 "data/maps/Route120/scripts.pory"

# 16 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleonObject::
# 17 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 0, Route120_EventScript_RemoveBridgeKecleon
# 18 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 1, Route120_EventScript_RemoveKecleon
# 19 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 2, Route120_EventScript_RemoveKecleon
# 20 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 3, Route120_EventScript_RemoveKecleon
# 21 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 4, Route120_EventScript_RemoveKecleon
# 22 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 5, Route120_EventScript_RemoveKecleon
# 23 "data/maps/Route120/scripts.pory"
	return
# 24 "data/maps/Route120/scripts.pory"

# 25 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleon::
# 26 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 27 "data/maps/Route120/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 28 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON
# 29 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON_SHADOW
# 30 "data/maps/Route120/scripts.pory"
	return
# 31 "data/maps/Route120/scripts.pory"

# 32 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleon::
# 33 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 34 "data/maps/Route120/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 35 "data/maps/Route120/scripts.pory"
	removeobject VAR_LAST_TALKED
# 36 "data/maps/Route120/scripts.pory"
	return
# 37 "data/maps/Route120/scripts.pory"

# 38 "data/maps/Route120/scripts.pory"
Route120_OnLoad:
# 39 "data/maps/Route120/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route120_EventScript_CloseAncientTomb
# 40 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_RECEIVED_DEVON_SCOPE, Route120_EventScript_SetBridgeClearMetatiles
# 41 "data/maps/Route120/scripts.pory"
	call_if_unset FLAG_RECEIVED_DEVON_SCOPE, Route120_EventScript_SetBridgeKecleonMovement
# 42 "data/maps/Route120/scripts.pory"
	end
# 43 "data/maps/Route120/scripts.pory"

# 44 "data/maps/Route120/scripts.pory"
Route120_EventScript_CloseAncientTomb::
# 45 "data/maps/Route120/scripts.pory"
	setmetatile 7, 54, METATILE_General_RockWall_RockBase, TRUE
# 46 "data/maps/Route120/scripts.pory"
	setmetatile 7, 55, METATILE_General_RockWall_SandBase, TRUE
# 47 "data/maps/Route120/scripts.pory"
	return
# 48 "data/maps/Route120/scripts.pory"

# 49 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetBridgeClearMetatiles::
# 50 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 51 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 52 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 53 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 54 "data/maps/Route120/scripts.pory"
	return
# 55 "data/maps/Route120/scripts.pory"

# 56 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetBridgeKecleonMovement::
# 57 "data/maps/Route120/scripts.pory"
	setobjectmovementtype LOCALID_BRIDGE_KECLEON_SHADOW, MOVEMENT_TYPE_FACE_RIGHT
# 58 "data/maps/Route120/scripts.pory"
	return
# 59 "data/maps/Route120/scripts.pory"

# 60 "data/maps/Route120/scripts.pory"
Route120_OnTransition:
# 61 "data/maps/Route120/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 62 "data/maps/Route120/scripts.pory"
	call Route120_EventScript_SetWeather
# 63 "data/maps/Route120/scripts.pory"
	end
# 64 "data/maps/Route120/scripts.pory"

# 65 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetWeather::
# 66 "data/maps/Route120/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 67 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_1, 14, Route120_EventScript_SetSunnyWeather
# 68 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_1, 60, Route120_EventScript_TrySetRainyWeather
# 69 "data/maps/Route120/scripts.pory"
	goto_if_ge VAR_TEMP_1, 61, Route120_EventScript_SetCloudyWeather
# 70 "data/maps/Route120/scripts.pory"
	return
# 71 "data/maps/Route120/scripts.pory"

# 72 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetCloudyWeather::
# 73 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY_CLOUDS
# 74 "data/maps/Route120/scripts.pory"
	return
# 75 "data/maps/Route120/scripts.pory"

# 76 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetSunnyWeather::
# 77 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY
# 78 "data/maps/Route120/scripts.pory"
	return
# 79 "data/maps/Route120/scripts.pory"

# 80 "data/maps/Route120/scripts.pory"
Route120_EventScript_TrySetRainyWeather::
# 81 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_0, 7, Route120_EventScript_SetRainyWeather
# 82 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_0, 19, Route120_EventScript_SetSunnyWeather
# 83 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_SetRainyWeather
# 84 "data/maps/Route120/scripts.pory"
	end
# 85 "data/maps/Route120/scripts.pory"

# 86 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetRainyWeather::
# 87 "data/maps/Route120/scripts.pory"
	setweather WEATHER_RAIN
# 88 "data/maps/Route120/scripts.pory"
	return
# 89 "data/maps/Route120/scripts.pory"

# 90 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty::
# 91 "data/maps/Route120/scripts.pory"
	lock
# 92 "data/maps/Route120/scripts.pory"
	faceplayer
# 93 "data/maps/Route120/scripts.pory"
	dotimebasedevents
# 94 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_120_RECEIVED_BERRY, Route120_EventScript_ReceivedBerry
# 95 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerriesExpressionOfLoveIsntIt, MSGBOX_YESNO
# 96 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route120_EventScript_BerryLove
# 97 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_RESULT, NO, Route120_EventScript_BerryNotLove
# 98 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetPlayerTrainerIdOnesDigit
# 99 "data/maps/Route120/scripts.pory"
	switch VAR_RESULT
# 100 "data/maps/Route120/scripts.pory"
	case 0, Route120_EventScript_GiveFigyBerry
# 101 "data/maps/Route120/scripts.pory"
	case 5, Route120_EventScript_GiveFigyBerry
# 102 "data/maps/Route120/scripts.pory"
	case 1, Route120_EventScript_GiveWikiBerry
# 103 "data/maps/Route120/scripts.pory"
	case 6, Route120_EventScript_GiveWikiBerry
# 104 "data/maps/Route120/scripts.pory"
	case 2, Route120_EventScript_GiveMagoBerry
# 105 "data/maps/Route120/scripts.pory"
	case 7, Route120_EventScript_GiveMagoBerry
# 106 "data/maps/Route120/scripts.pory"
	case 3, Route120_EventScript_GiveAguavBerry
# 107 "data/maps/Route120/scripts.pory"
	case 8, Route120_EventScript_GiveAguavBerry
# 108 "data/maps/Route120/scripts.pory"
	case 4, Route120_EventScript_GiveIapapaBerry
# 109 "data/maps/Route120/scripts.pory"
	case 9, Route120_EventScript_GiveIapapaBerry
# 110 "data/maps/Route120/scripts.pory"
	end
# 111 "data/maps/Route120/scripts.pory"

# 112 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveFigyBerry::
# 113 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_FIGY_BERRY
# 114 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 115 "data/maps/Route120/scripts.pory"
	end
# 116 "data/maps/Route120/scripts.pory"

# 117 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveWikiBerry::
# 118 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_WIKI_BERRY
# 119 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 120 "data/maps/Route120/scripts.pory"
	end
# 121 "data/maps/Route120/scripts.pory"

# 122 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveMagoBerry::
# 123 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_MAGO_BERRY
# 124 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 125 "data/maps/Route120/scripts.pory"
	end
# 126 "data/maps/Route120/scripts.pory"

# 127 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveAguavBerry::
# 128 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_AGUAV_BERRY
# 129 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 130 "data/maps/Route120/scripts.pory"
	end
# 131 "data/maps/Route120/scripts.pory"

# 132 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveIapapaBerry::
# 133 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_IAPAPA_BERRY
# 134 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 135 "data/maps/Route120/scripts.pory"
	end
# 136 "data/maps/Route120/scripts.pory"

# 137 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveBerry::
# 138 "data/maps/Route120/scripts.pory"
	giveitem VAR_0x8004
# 139 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 140 "data/maps/Route120/scripts.pory"
	setflag FLAG_DAILY_ROUTE_120_RECEIVED_BERRY
# 141 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerryIsRareRaiseItWithCare, MSGBOX_DEFAULT
# 142 "data/maps/Route120/scripts.pory"
	release
# 143 "data/maps/Route120/scripts.pory"
	end
# 144 "data/maps/Route120/scripts.pory"

# 145 "data/maps/Route120/scripts.pory"
Route120_EventScript_ReceivedBerry::
# 146 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_IllGetMoreBerriesFromBerryMaster, MSGBOX_DEFAULT
# 147 "data/maps/Route120/scripts.pory"
	release
# 148 "data/maps/Route120/scripts.pory"
	end
# 149 "data/maps/Route120/scripts.pory"

# 150 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryLove::
# 151 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_YesYouUnderstand, MSGBOX_DEFAULT
# 152 "data/maps/Route120/scripts.pory"
	return
# 153 "data/maps/Route120/scripts.pory"

# 154 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryNotLove::
# 155 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_MakeYourOwnImpressions, MSGBOX_DEFAULT
# 156 "data/maps/Route120/scripts.pory"
	return
# 157 "data/maps/Route120/scripts.pory"

# 158 "data/maps/Route120/scripts.pory"
Route120_EventScript_Steven::
# 159 "data/maps/Route120/scripts.pory"
	lock
# 160 "data/maps/Route120/scripts.pory"
	faceplayer
# 161 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_NOT_READY_FOR_BATTLE_ROUTE_120, Route120_EventScript_StevenAskReadyForBattle
# 162 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGreeting, MSGBOX_DEFAULT
# 163 "data/maps/Route120/scripts.pory"
    delay 16
# 164 "data/maps/Route120/scripts.pory"
    msgbox Route120_Text_StevenHaveYouNotice, MSGBOX_YESNO
# 165 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_EventScript_StevenNotReady
# 166 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 167 "data/maps/Route120/scripts.pory"
	end
# 168 "data/maps/Route120/scripts.pory"

# 169 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenNotReady::
# 170 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenIllWaitHere, MSGBOX_DEFAULT
# 171 "data/maps/Route120/scripts.pory"
	setflag FLAG_NOT_READY_FOR_BATTLE_ROUTE_120
# 172 "data/maps/Route120/scripts.pory"
	release
# 173 "data/maps/Route120/scripts.pory"
	end
# 174 "data/maps/Route120/scripts.pory"

# 175 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenAskReadyForBattle::
# 176 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenReadyForBattle, MSGBOX_YESNO
# 177 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_EventScript_StevenNotReady
# 178 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 179 "data/maps/Route120/scripts.pory"
	end
# 180 "data/maps/Route120/scripts.pory"

# 181 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenBattleKecleon::
# 182 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenShowMeYourPower, MSGBOX_DEFAULT
# 183 "data/maps/Route120/scripts.pory"
	closemessage
# 184 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route120_EventScript_PlayerApproachKecleonNorth
# 185 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route120_EventScript_PlayerApproachKecleonWest
# 186 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceLeft
# 187 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 188 "data/maps/Route120/scripts.pory"
	delay 20
# 189 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_PlayerUsedDevonScope, MSGBOX_DEFAULT
# 190 "data/maps/Route120/scripts.pory"
	closemessage
# 191 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Common_Movement_WalkInPlaceRight
# 192 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 193 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Movement_KecleonAppears
# 194 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 195 "data/maps/Route120/scripts.pory"
    playse SE_PIN
# 196 "data/maps/Route120/scripts.pory"
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 197 "data/maps/Route120/scripts.pory"
    msgbox Route120_Text_PokemonBecameVisible, MSGBOX_DEFAULT
# 198 "data/maps/Route120/scripts.pory"
    waitmovement OBJ_EVENT_ID_PLAYER
# 199 "data/maps/Route120/scripts.pory"
    closemessage
# 200 "data/maps/Route120/scripts.pory"
	waitse
# 201 "data/maps/Route120/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 202 "data/maps/Route120/scripts.pory"
	delay 40
# 203 "data/maps/Route120/scripts.pory"
	waitmoncry
# 204 "data/maps/Route120/scripts.pory"
	setwildbattle SPECIES_KECLEON, 30
# 205 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8009, 0
# 206 "data/maps/Route120/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 207 "data/maps/Route120/scripts.pory"
	dowildbattle
# 208 "data/maps/Route120/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 209 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 210 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 211 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 212 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 213 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 214 "data/maps/Route120/scripts.pory"
	end
# 215 "data/maps/Route120/scripts.pory"

# 216 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleonPostBattle::
# 217 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 218 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON
# 219 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON_SHADOW
# 220 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 221 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 222 "data/maps/Route120/scripts.pory"
	end
# 223 "data/maps/Route120/scripts.pory"

# 224 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenGiveDeconScope::
# 225 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
# 226 "data/maps/Route120/scripts.pory"
    delay 8
# 227 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 228 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 229 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGiveDevonScope, MSGBOX_DEFAULT
# 230 "data/maps/Route120/scripts.pory"
	giveitem ITEM_DEVON_SCOPE
# 231 "data/maps/Route120/scripts.pory"
	setflag FLAG_RECEIVED_DEVON_SCOPE
# 232 "data/maps/Route120/scripts.pory"
    msgbox Route120_Text_StevenOneMoreThing, MSGBOX_DEFAULT
# 233 "data/maps/Route120/scripts.pory"
    giveitem ITEM_SWAMPERTITE, 1
# 234 "data/maps/Route120/scripts.pory"
    giveitem ITEM_BLAZIKENITE, 1
# 235 "data/maps/Route120/scripts.pory"
    giveitem ITEM_SCEPTILITE, 1
# 236 "data/maps/Route120/scripts.pory"
    msgbox Route120_Text_StevenExplainStones, MSGBOX_DEFAULT
# 237 "data/maps/Route120/scripts.pory"
    closemessage
# 238 "data/maps/Route120/scripts.pory"
	delay 16
# 239 "data/maps/Route120/scripts.pory"
	dofieldeffectsparkle 13, 16, 0
# 240 "data/maps/Route120/scripts.pory"
    waitfieldeffect FLDEFF_SPARKLE
# 241 "data/maps/Route120/scripts.pory"
	delay 16
# 242 "data/maps/Route120/scripts.pory"
    playse SE_PIN
# 243 "data/maps/Route120/scripts.pory"
    applymovement LOCALID_STEVEN, Common_Movement_ExclamationMark
# 244 "data/maps/Route120/scripts.pory"
    waitmovement LOCALID_STEVEN
# 245 "data/maps/Route120/scripts.pory"
    msgbox Route120_Text_StevenSomethingShone, MSGBOX_DEFAULT
# 246 "data/maps/Route120/scripts.pory"
    closemessage
# 247 "data/maps/Route120/scripts.pory"
    delay 32
# 248 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGoodbye, MSGBOX_DEFAULT
# 249 "data/maps/Route120/scripts.pory"
	closemessage
# 250 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
# 251 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 252 "data/maps/Route120/scripts.pory"
	delay 50
# 253 "data/maps/Route120/scripts.pory"
	setfieldeffectargument 0, 1
# 254 "data/maps/Route120/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 255 "data/maps/Route120/scripts.pory"
	delay 15
# 256 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_STEVEN
# 257 "data/maps/Route120/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 258 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 259 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 260 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 261 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 262 "data/maps/Route120/scripts.pory"
	special DrawWholeMapView
# 263 "data/maps/Route120/scripts.pory"
	release
# 264 "data/maps/Route120/scripts.pory"
	end
# 265 "data/maps/Route120/scripts.pory"

# 266 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonNorth::
# 267 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 268 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 269 "data/maps/Route120/scripts.pory"
	return
# 270 "data/maps/Route120/scripts.pory"

# 271 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonWest::
# 272 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route120_Movement_ApproachKecleonWest
# 273 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 274 "data/maps/Route120/scripts.pory"
	return
# 275 "data/maps/Route120/scripts.pory"

# 276 "data/maps/Route120/scripts.pory"
Route120_Movement_ApproachKecleonWest:
# 277 "data/maps/Route120/scripts.pory"
	walk_down
# 278 "data/maps/Route120/scripts.pory"
	walk_left
# 279 "data/maps/Route120/scripts.pory"
	step_end
# 280 "data/maps/Route120/scripts.pory"

# 281 "data/maps/Route120/scripts.pory"
Route120_EventScript_BridgeKecleon::
# 282 "data/maps/Route120/scripts.pory"
    lock
# 283 "data/maps/Route120/scripts.pory"
    delay 8
# 284 "data/maps/Route120/scripts.pory"
    playse SE_PIN
# 285 "data/maps/Route120/scripts.pory"
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 286 "data/maps/Route120/scripts.pory"
    waitmovement OBJ_EVENT_ID_PLAYER
# 287 "data/maps/Route120/scripts.pory"
    waitse
# 288 "data/maps/Route120/scripts.pory"
	msgbox Kecleon_Text_SomethingUnseeable, MSGBOX_DEFAULT
# 289 "data/maps/Route120/scripts.pory"
    closemessage
# 290 "data/maps/Route120/scripts.pory"
    release
# 291 "data/maps/Route120/scripts.pory"
	end
# 292 "data/maps/Route120/scripts.pory"

# 293 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSignFortree::
# 294 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSignFortree, MSGBOX_SIGN
# 295 "data/maps/Route120/scripts.pory"
	end
# 296 "data/maps/Route120/scripts.pory"

# 297 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSign121::
# 298 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSign121, MSGBOX_SIGN
# 299 "data/maps/Route120/scripts.pory"
	end
# 300 "data/maps/Route120/scripts.pory"

# 301 "data/maps/Route120/scripts.pory"
Route120_EventScript_Colin::
# 302 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_COLIN, Route120_Text_ColinIntro, Route120_Text_ColinDefeat
# 303 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ColinPostBattle, MSGBOX_AUTOCLOSE
# 304 "data/maps/Route120/scripts.pory"
	end
# 305 "data/maps/Route120/scripts.pory"

# 306 "data/maps/Route120/scripts.pory"
Route120_EventScript_Robert::
# 307 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ROBERT_1, Route120_Text_RobertIntro, Route120_Text_RobertDefeat, Route120_EventScript_RegisterRobert
# 308 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 309 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route120_EventScript_RematchRobert
# 310 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostBattle, MSGBOX_DEFAULT
# 311 "data/maps/Route120/scripts.pory"
	release
# 312 "data/maps/Route120/scripts.pory"
	end
# 313 "data/maps/Route120/scripts.pory"

# 314 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterRobert::
# 315 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 316 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 317 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertRegister, MSGBOX_DEFAULT
# 318 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_ROBERT_1
# 319 "data/maps/Route120/scripts.pory"
	release
# 320 "data/maps/Route120/scripts.pory"
	end
# 321 "data/maps/Route120/scripts.pory"

# 322 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchRobert::
# 323 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_ROBERT_1, Route120_Text_RobertRematchIntro, Route120_Text_RobertRematchDefeat
# 324 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostRematch, MSGBOX_AUTOCLOSE
# 325 "data/maps/Route120/scripts.pory"
	end
# 326 "data/maps/Route120/scripts.pory"

# 327 "data/maps/Route120/scripts.pory"
Route120_EventScript_Lorenzo::
# 328 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LORENZO, Route120_Text_LorenzoIntro, Route120_Text_LorenzoDefeat
# 329 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LorenzoPostBattle, MSGBOX_AUTOCLOSE
# 330 "data/maps/Route120/scripts.pory"
	end
# 331 "data/maps/Route120/scripts.pory"

# 332 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jenna::
# 333 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNA, Route120_Text_JennaIntro, Route120_Text_JennaDefeat
# 334 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JennaPostBattle, MSGBOX_AUTOCLOSE
# 335 "data/maps/Route120/scripts.pory"
	end
# 336 "data/maps/Route120/scripts.pory"

# 337 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jeffrey::
# 338 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JEFFREY_1, Route120_Text_JeffreyIntro, Route120_Text_JeffreyDefeat, Route120_EventScript_RegisterJeffrey
# 339 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 340 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route120_EventScript_RematchJeffrey
# 341 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostBattle, MSGBOX_DEFAULT
# 342 "data/maps/Route120/scripts.pory"
	release
# 343 "data/maps/Route120/scripts.pory"
	end
# 344 "data/maps/Route120/scripts.pory"

# 345 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterJeffrey::
# 346 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 347 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 348 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyRegister, MSGBOX_DEFAULT
# 349 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_JEFFREY_1
# 350 "data/maps/Route120/scripts.pory"
	release
# 351 "data/maps/Route120/scripts.pory"
	end
# 352 "data/maps/Route120/scripts.pory"

# 353 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchJeffrey::
# 354 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_JEFFREY_1, Route120_Text_JeffreyRematchIntro, Route120_Text_JeffreyRematchDefeat
# 355 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostRematch, MSGBOX_AUTOCLOSE
# 356 "data/maps/Route120/scripts.pory"
	end
# 357 "data/maps/Route120/scripts.pory"

# 358 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jennifer::
# 359 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNIFER, Route120_Text_JenniferIntro, Route120_Text_JenniferDefeat
# 360 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
# 361 "data/maps/Route120/scripts.pory"
	end
# 362 "data/maps/Route120/scripts.pory"

# 363 "data/maps/Route120/scripts.pory"
Route120_EventScript_Chip::
# 364 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CHIP, Route120_Text_ChipIntro, Route120_Text_ChipDefeat
# 365 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ChipPostBattle, MSGBOX_AUTOCLOSE
# 366 "data/maps/Route120/scripts.pory"
	end
# 367 "data/maps/Route120/scripts.pory"

# 368 "data/maps/Route120/scripts.pory"
Route120_EventScript_Clarissa::
# 369 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CLARISSA, Route120_Text_ClarissaIntro, Route120_Text_ClarissaDefeat
# 370 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ClarissaPostBattle, MSGBOX_AUTOCLOSE
# 371 "data/maps/Route120/scripts.pory"
	end
# 372 "data/maps/Route120/scripts.pory"

# 373 "data/maps/Route120/scripts.pory"
Route120_EventScript_Angelica::
# 374 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ANGELICA, Route120_Text_AngelicaIntro, Route120_Text_AngelicaDefeat
# 375 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_AngelicaPostBattle, MSGBOX_AUTOCLOSE
# 376 "data/maps/Route120/scripts.pory"
	end
# 377 "data/maps/Route120/scripts.pory"

# 378 "data/maps/Route120/scripts.pory"
Route120_EventScript_Keigo::
# 379 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_KEIGO, Route120_Text_KeigoIntro, Route120_Text_KeigoDefeat
# 380 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_KeigoPostBattle, MSGBOX_AUTOCLOSE
# 381 "data/maps/Route120/scripts.pory"
	end
# 382 "data/maps/Route120/scripts.pory"

# 383 "data/maps/Route120/scripts.pory"
Route120_EventScript_Riley::
# 384 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_RILEY, Route120_Text_RileyIntro, Route120_Text_RileyDefeat
# 385 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
# 386 "data/maps/Route120/scripts.pory"
	end
# 387 "data/maps/Route120/scripts.pory"

# 388 "data/maps/Route120/scripts.pory"
Route120_EventScript_Leonel::
# 389 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LEONEL, Route120_Text_LeonelIntro, Route120_Text_LeonelDefeat
# 390 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LeonelPostBattle, MSGBOX_AUTOCLOSE
# 391 "data/maps/Route120/scripts.pory"
	end
# 392 "data/maps/Route120/scripts.pory"

# 393 "data/maps/Route120/scripts.pory"
Route120_EventScript_Callie::
# 394 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CALLIE, Route120_Text_CallieIntro, Route120_Text_CallieDefeat
# 395 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_CalliePostBattle, MSGBOX_AUTOCLOSE
# 396 "data/maps/Route120/scripts.pory"
	end
# 397 "data/maps/Route120/scripts.pory"

# 398 "data/maps/Route120/scripts.pory"
@@@@@@@@@@@@@@@@@@@@@@
# 399 "data/maps/Route120/scripts.pory"
@ Super Rod Gift
# 400 "data/maps/Route120/scripts.pory"
@@@@@@@@@@@@@@@@@@@@@@
# 401 "data/maps/Route120/scripts.pory"
Route120_House3_EventScript_SuperRodFisherman::
# 402 "data/maps/Route120/scripts.pory"
	lock
# 403 "data/maps/Route120/scripts.pory"
	faceplayer
# 404 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUPER_ROD, Route120_House3_EventScript_ReceivedSuperRod
# 405 "data/maps/Route120/scripts.pory"
	msgbox Route120_House3_Text_YouWantSuperRod, MSGBOX_YESNO
# 406 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_House3_EventScript_DeclineSuperRod
# 407 "data/maps/Route120/scripts.pory"
	msgbox Route120_House3_Text_SuperRodIsSuper, MSGBOX_DEFAULT
# 408 "data/maps/Route120/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 409 "data/maps/Route120/scripts.pory"
	setflag FLAG_RECEIVED_SUPER_ROD
# 410 "data/maps/Route120/scripts.pory"
	msgbox Route120_House3_Text_TryDroppingRodInWater, MSGBOX_DEFAULT
# 411 "data/maps/Route120/scripts.pory"
	release
# 412 "data/maps/Route120/scripts.pory"
	end
# 413 "data/maps/Route120/scripts.pory"

# 414 "data/maps/Route120/scripts.pory"
Route120_House3_EventScript_ReceivedSuperRod::
# 415 "data/maps/Route120/scripts.pory"
	msgbox Route120_House3_Text_GoAfterSeafloorPokemon, MSGBOX_DEFAULT
# 416 "data/maps/Route120/scripts.pory"
	release
# 417 "data/maps/Route120/scripts.pory"
	end
# 418 "data/maps/Route120/scripts.pory"

# 419 "data/maps/Route120/scripts.pory"
Route120_House3_EventScript_DeclineSuperRod::
# 420 "data/maps/Route120/scripts.pory"
	msgbox Route120_House3_Text_DontYouLikeToFish, MSGBOX_DEFAULT
# 421 "data/maps/Route120/scripts.pory"
	release
# 422 "data/maps/Route120/scripts.pory"
	end
# 423 "data/maps/Route120/scripts.pory"

# 424 "data/maps/Route120/scripts.pory"
Route120_House3_Text_YouWantSuperRod:
# 425 "data/maps/Route120/scripts.pory"
	.string "Hey there, Trainer!\nA Super Rod really is super!\pSay whatever you want, but this\nbaby can catch Pokémon right off the\lseafloor!\pWhat do you think?\nYou want one, don't you?$"
# 426 "data/maps/Route120/scripts.pory"

# 427 "data/maps/Route120/scripts.pory"
Route120_House3_Text_SuperRodIsSuper:
# 428 "data/maps/Route120/scripts.pory"
	.string "You bet, you bet!\pAfter all, a Super Rod is the definition\nof super!$"
# 429 "data/maps/Route120/scripts.pory"

# 430 "data/maps/Route120/scripts.pory"
Route120_House3_Text_TryDroppingRodInWater:
# 431 "data/maps/Route120/scripts.pory"
	.string "If there's any water, try dropping in\nyour line and see what bites!$"
# 432 "data/maps/Route120/scripts.pory"

# 433 "data/maps/Route120/scripts.pory"
Route120_House3_Text_DontYouLikeToFish:
# 434 "data/maps/Route120/scripts.pory"
	.string "Say wha-a-a-a-at?\nYou mean you don't like fishing?$"
# 435 "data/maps/Route120/scripts.pory"

# 436 "data/maps/Route120/scripts.pory"
Route120_House3_Text_GoAfterSeafloorPokemon:
# 437 "data/maps/Route120/scripts.pory"
	.string "You can go after seafloor-dwelling\nPokémon with your Super Rod.$"
# 438 "data/maps/Route120/scripts.pory"

# 439 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGreeting:
# 440 "data/maps/Route120/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: Hm?\p{PLAYER}?\nSo, we meet again.\pHow has it been? Have you been using\nthe Mega Ring wisely?\pI suppose I needn't even ask, though.\nNot when it comes to you and your\lteam.$"
# 441 "data/maps/Route120/scripts.pory"

# 442 "data/maps/Route120/scripts.pory"
Route120_Text_StevenHaveYouNotice:
# 443 "data/maps/Route120/scripts.pory"
    .string "I wonder…\nHave you noticed? Hm?\pThere's something here you can't see.\pNow if I were to use this device on the\ninvisible obstacle…\p…\pNo, no… Rather than describing it, I\nshould just show you.\lThat should be more entertaining.\p{PLAYER}…\pAre you and your Pokémon ready for\nbattle?$"
# 444 "data/maps/Route120/scripts.pory"

# 445 "data/maps/Route120/scripts.pory"
Route120_Text_StevenIllWaitHere:
# 446 "data/maps/Route120/scripts.pory"
	.string "No?\pI'll wait here, so go get ready.$"
# 447 "data/maps/Route120/scripts.pory"

# 448 "data/maps/Route120/scripts.pory"
Route120_Text_StevenReadyForBattle:
# 449 "data/maps/Route120/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: Are you and your Pokémon ready\nfor battle?$"
# 450 "data/maps/Route120/scripts.pory"

# 451 "data/maps/Route120/scripts.pory"
Route120_Text_StevenShowMeYourPower:
# 452 "data/maps/Route120/scripts.pory"
	.string "Good.\pIn that case…\pI want you to take this.\pTry it on.\nI'm sure it will fit you.$"
# 453 "data/maps/Route120/scripts.pory"

# 454 "data/maps/Route120/scripts.pory"
Route120_Text_PlayerUsedDevonScope:
# 455 "data/maps/Route120/scripts.pory"
	.string "{PLAYER} slipped the Devon Scope on.$"
# 456 "data/maps/Route120/scripts.pory"

# 457 "data/maps/Route120/scripts.pory"
Route120_Text_PokemonBecameVisible:
# 458 "data/maps/Route120/scripts.pory"
    .string "A previously invisible Pokémon became\nvisible to the naked eye!\pThe startled Keckleon attacked!$"
# 459 "data/maps/Route120/scripts.pory"

# 460 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGiveDevonScope:
# 461 "data/maps/Route120/scripts.pory"
	.string "Just as I expected.\pThat's called a Devon Scope.\nIt's a fantastic piece of tech that\llets you see Pokémon in hiding.\pConsider it a gift from me.\nTake it.$"
# 462 "data/maps/Route120/scripts.pory"

# 463 "data/maps/Route120/scripts.pory"
Route120_Text_StevenOneMoreThing:
# 464 "data/maps/Route120/scripts.pory"
    .string "And one more thing…$"
# 465 "data/maps/Route120/scripts.pory"

# 466 "data/maps/Route120/scripts.pory"
Route120_Text_StevenExplainStones:
# 467 "data/maps/Route120/scripts.pory"
    .string "These stones rank in my top ten\nfavorite stones in existence.\pI have no doubt that your Pokémon will\nlike them, too.\pYou know, {PLAYER}…\pI like to see Trainers and Pokémon\ntrying their best.\lThat's why I like you so much.$"
# 468 "data/maps/Route120/scripts.pory"

# 469 "data/maps/Route120/scripts.pory"
Route120_Text_StevenSomethingShone:
# 470 "data/maps/Route120/scripts.pory"
    .string "Hm?\pIt seemed as though something just…\nshone for a moment in your Bag.\pI'm sure I sensed the power of some\nkind of stone…\pA Meteorite…?\nNo, it couldn't be…$"
# 471 "data/maps/Route120/scripts.pory"

# 472 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGoodbye:
# 473 "data/maps/Route120/scripts.pory"
	.string "Let's meet again someday.$"
# 474 "data/maps/Route120/scripts.pory"

# 475 "data/maps/Route120/scripts.pory"
Kecleon_Text_SomethingUnseeable:
# 476 "data/maps/Route120/scripts.pory"
	.string "There's an invisible obstacle in your\nway.$"
# 477 "data/maps/Route120/scripts.pory"

# 478 "data/maps/Route120/scripts.pory"
Kecleon_Text_WantToUseDevonScope:
# 479 "data/maps/Route120/scripts.pory"
	.string "There's an invisible obstacle in your\nway.\pWould you like to use the Devon Scope?$"
# 480 "data/maps/Route120/scripts.pory"

# 481 "data/maps/Route120/scripts.pory"
Kecleon_Text_UseDevonScopeMonAttacked:
# 482 "data/maps/Route120/scripts.pory"
	.string "{PLAYER} slipped the Devon Scope on.\pA previously invisible Pokémon became\nvisible to the naked eye!\pThe startled Keckleon attacked!$"
# 483 "data/maps/Route120/scripts.pory"

# 484 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSignFortree:
# 485 "data/maps/Route120/scripts.pory"
	.string "Route 120\n"
# 486 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} Fortree City$"
# 487 "data/maps/Route120/scripts.pory"

# 488 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSign121:
# 489 "data/maps/Route120/scripts.pory"
	.string "{RIGHT_ARROW} Route 121\n"
# 490 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} Route 120$"
