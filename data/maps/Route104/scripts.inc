# 1 "data/maps/Route104/scripts.pory"

# 2 "data/maps/Route104/scripts.pory"
@ NOTE: Route 104's sail to Dewford script references local IDs from Dewford's map.
# 3 "data/maps/Route104/scripts.pory"
@  These are labeled in DewfordTown/scripts.inc
# 4 "data/maps/Route104/scripts.pory"

# 5 "data/maps/Route104/scripts.pory"
Route104_MapScripts::
# 6 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route104_OnFrame
# 7 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_OnTransition
# 8 "data/maps/Route104/scripts.pory"
	.byte 0
# 9 "data/maps/Route104/scripts.pory"

# 10 "data/maps/Route104/scripts.pory"
Route104_OnFrame:
# 11 "data/maps/Route104/scripts.pory"
	map_script_2 VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_StartSailToDewford
# 12 "data/maps/Route104/scripts.pory"
	.2byte 0
# 13 "data/maps/Route104/scripts.pory"

# 14 "data/maps/Route104/scripts.pory"
Route104_EventScript_StartSailToDewford::
# 15 "data/maps/Route104/scripts.pory"
	lockall
# 16 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_SailToDewford
# 17 "data/maps/Route104/scripts.pory"
	end
# 18 "data/maps/Route104/scripts.pory"

# 19 "data/maps/Route104/scripts.pory"
Route104_OnTransition:
# 20 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_ShowOrHideWhiteHerbFlorist
# 21 "data/maps/Route104/scripts.pory"
	end
# 22 "data/maps/Route104/scripts.pory"

# 23 "data/maps/Route104/scripts.pory"
Route104_EventScript_ShowOrHideWhiteHerbFlorist::
# 24 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_EventScript_HideWhiteHerbFlorist
# 25 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route104_EventScript_HideWhiteHerbFlorist
# 26 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 27 "data/maps/Route104/scripts.pory"
	return
# 28 "data/maps/Route104/scripts.pory"

# 29 "data/maps/Route104/scripts.pory"
Route104_EventScript_HideWhiteHerbFlorist::
# 30 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 31 "data/maps/Route104/scripts.pory"
	return
# 32 "data/maps/Route104/scripts.pory"

# 33 "data/maps/Route104/scripts.pory"
Route104_EventScript_ExpertF::
# 34 "data/maps/Route104/scripts.pory"
	lock
# 35 "data/maps/Route104/scripts.pory"
	faceplayer
# 36 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104, Route104_EventScript_ReceivedBerry
# 37 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PlantBerriesInSoilTakeThis, MSGBOX_DEFAULT
# 38 "data/maps/Route104/scripts.pory"
	giveitem ITEM_CHESTO_BERRY
# 39 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 40 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104
# 41 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 42 "data/maps/Route104/scripts.pory"
	release
# 43 "data/maps/Route104/scripts.pory"
	end
# 44 "data/maps/Route104/scripts.pory"

# 45 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBerry::
# 46 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 47 "data/maps/Route104/scripts.pory"
	release
# 48 "data/maps/Route104/scripts.pory"
	end
# 49 "data/maps/Route104/scripts.pory"

# 50 "data/maps/Route104/scripts.pory"
Route104_EventScript_WhiteHerbFlorist::
# 51 "data/maps/Route104/scripts.pory"
	lock
# 52 "data/maps/Route104/scripts.pory"
	faceplayer
# 53 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_WHITE_HERB, Route104_EventScript_ReceivedWhiteHerb
# 54 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DontNeedThisTakeIt, MSGBOX_DEFAULT
# 55 "data/maps/Route104/scripts.pory"
	giveitem ITEM_WHITE_HERB
# 56 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 57 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_WHITE_HERB
# 58 "data/maps/Route104/scripts.pory"
	release
# 59 "data/maps/Route104/scripts.pory"
	end
# 60 "data/maps/Route104/scripts.pory"

# 61 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedWhiteHerb::
# 62 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_FlowerShopSellingSaplings, MSGBOX_DEFAULT
# 63 "data/maps/Route104/scripts.pory"
	release
# 64 "data/maps/Route104/scripts.pory"
	end
# 65 "data/maps/Route104/scripts.pory"

# 66 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl1::
# 67 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrineyLivesInSeasideCottage, MSGBOX_NPC
# 68 "data/maps/Route104/scripts.pory"
	end
# 69 "data/maps/Route104/scripts.pory"

# 70 "data/maps/Route104/scripts.pory"
Route104_EventScript_BugCatcher::
# 71 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WhatsItLikeAtBottomOfSea, MSGBOX_SIGN
# 72 "data/maps/Route104/scripts.pory"
	end
# 73 "data/maps/Route104/scripts.pory"

# 74 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrineysCottageSign::
# 75 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MrBrineysCottage, MSGBOX_SIGN
# 76 "data/maps/Route104/scripts.pory"
	end
# 77 "data/maps/Route104/scripts.pory"

# 78 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignPetalburg::
# 79 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignPetalburg, MSGBOX_SIGN
# 80 "data/maps/Route104/scripts.pory"
	end
# 81 "data/maps/Route104/scripts.pory"

# 82 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignRustboro::
# 83 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignRustboro, MSGBOX_SIGN
# 84 "data/maps/Route104/scripts.pory"
	end
# 85 "data/maps/Route104/scripts.pory"

# 86 "data/maps/Route104/scripts.pory"
Route104_EventScript_FlowerShopSign::
# 87 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PrettyPetalFlowShop, MSGBOX_SIGN
# 88 "data/maps/Route104/scripts.pory"
	end
# 89 "data/maps/Route104/scripts.pory"

# 90 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrainerTipsDoubleBattles::
# 91 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainerTipsDoubleBattles, MSGBOX_SIGN
# 92 "data/maps/Route104/scripts.pory"
	end
# 93 "data/maps/Route104/scripts.pory"

# 94 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy1::
# 95 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ThrowBallAtWeakenedPokemon, MSGBOX_NPC
# 96 "data/maps/Route104/scripts.pory"
	end
# 97 "data/maps/Route104/scripts.pory"

# 98 "data/maps/Route104/scripts.pory"
Route104_EventScript_Woman::
# 99 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_OnlyThrowBallAtWildPokemon, MSGBOX_NPC
# 100 "data/maps/Route104/scripts.pory"
	end
# 101 "data/maps/Route104/scripts.pory"

# 102 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy2::
# 103 "data/maps/Route104/scripts.pory"
	lock
# 104 "data/maps/Route104/scripts.pory"
	faceplayer
# 105 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BULLET_SEED, Route104_EventScript_ReceivedBulletSeed
# 106 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LikeFillingMouthWithSeedsTakeThis, MSGBOX_DEFAULT
# 107 "data/maps/Route104/scripts.pory"
	giveitem ITEM_TM09
# 108 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 109 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLET_SEED
# 110 "data/maps/Route104/scripts.pory"
	release
# 111 "data/maps/Route104/scripts.pory"
	end
# 112 "data/maps/Route104/scripts.pory"

# 113 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBulletSeed::
# 114 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TMsAreOneTimeUse, MSGBOX_DEFAULT
# 115 "data/maps/Route104/scripts.pory"
	release
# 116 "data/maps/Route104/scripts.pory"
	end
# 117 "data/maps/Route104/scripts.pory"

# 118 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl2::
# 119 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ImNotATrainer, MSGBOX_NPC
# 120 "data/maps/Route104/scripts.pory"
	end
# 121 "data/maps/Route104/scripts.pory"

# 122 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewford::
# 123 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R104, MAP_ROUTE104, 0
# 124 "data/maps/Route104/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104, 0
# 125 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_R104, Route104_Movement_BrineyBoardBoat
# 126 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 127 "data/maps/Route104/scripts.pory"
	removeobject LOCALID_BRINEY_R104
# 128 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBoardBoat
# 129 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 130 "data/maps/Route104/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 131 "data/maps/Route104/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 132 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordNoCall
# 133 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordDadCalls
# 134 "data/maps/Route104/scripts.pory"
	end
# 135 "data/maps/Route104/scripts.pory"

# 136 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordNoCall::
# 137 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewford
# 138 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewford
# 139 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 140 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 141 "data/maps/Route104/scripts.pory"

# 142 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordDadCalls::
# 143 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordBeforeDadCalls
# 144 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordBeforeDadCalls
# 145 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 146 "data/maps/Route104/scripts.pory"
	pokenavcall Route104_Text_DadPokenavCall
# 147 "data/maps/Route104/scripts.pory"
	waitmessage
# 148 "data/maps/Route104/scripts.pory"
	delay 30
# 149 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 150 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredDadInPokenav, MSGBOX_DEFAULT
# 151 "data/maps/Route104/scripts.pory"
	waitfanfare
# 152 "data/maps/Route104/scripts.pory"
	closemessage
# 153 "data/maps/Route104/scripts.pory"
	delay 30
# 154 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
# 155 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordAfterDadCalls
# 156 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordAfterDadCalls, MAP_ROUTE104
# 157 "data/maps/Route104/scripts.pory"
	waitmovement LOCALID_BOAT_R104, MAP_ROUTE104
# 158 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 159 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 160 "data/maps/Route104/scripts.pory"

# 161 "data/maps/Route104/scripts.pory"
Route104_EventScript_ArriveInDewford::
# 162 "data/maps/Route104/scripts.pory"
	delay 50
# 163 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerExitBoat
# 164 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 165 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 166 "data/maps/Route104/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 167 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerMoveForBriney
# 168 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 169 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_DEWFORD, 12, 8
# 170 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BRINEY_DEWFORD
# 171 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 172 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 173 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, Route104_Movement_BrineyExitBoat
# 174 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 175 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BOAT_DEWFORD
# 176 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 177 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 178 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 179 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_BOAT_R104, MAP_ROUTE104
# 180 "data/maps/Route104/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 181 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 182 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN
# 183 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_DEWFORD
# 184 "data/maps/Route104/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 0
# 185 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_DeliverLetterReminder
# 186 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_LandedInDewford
# 187 "data/maps/Route104/scripts.pory"
	end
# 188 "data/maps/Route104/scripts.pory"

# 189 "data/maps/Route104/scripts.pory"
Route104_EventScript_DeliverLetterReminder::
# 190 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LandedInDewfordDeliverLetter, MSGBOX_DEFAULT
# 191 "data/maps/Route104/scripts.pory"
	releaseall
# 192 "data/maps/Route104/scripts.pory"
	end
# 193 "data/maps/Route104/scripts.pory"

# 194 "data/maps/Route104/scripts.pory"
Route104_EventScript_LandedInDewford::
# 195 "data/maps/Route104/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 196 "data/maps/Route104/scripts.pory"
	releaseall
# 197 "data/maps/Route104/scripts.pory"
	end
# 198 "data/maps/Route104/scripts.pory"

# 199 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordBeforeDadCalls:
# 200 "data/maps/Route104/scripts.pory"
	walk_down
# 201 "data/maps/Route104/scripts.pory"
	walk_down
# 202 "data/maps/Route104/scripts.pory"
	walk_down
# 203 "data/maps/Route104/scripts.pory"
	walk_down
# 204 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 205 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 206 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 207 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 208 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 209 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 210 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 211 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 212 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 213 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 214 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 215 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 216 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 217 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 218 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 219 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 220 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 221 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 222 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 223 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 224 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 225 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 226 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 227 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 228 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 229 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 230 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 231 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 232 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 233 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 234 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 235 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 236 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 237 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 238 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 239 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 240 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 241 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 242 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 243 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 244 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 245 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 246 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 247 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 248 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 249 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 250 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 251 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 252 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 253 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 254 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 255 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 256 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 257 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 258 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 259 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 260 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 261 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 262 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 263 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 264 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 265 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 266 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 267 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 268 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 269 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 270 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 271 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 272 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 273 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 274 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 275 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 276 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 277 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 278 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 279 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 280 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 281 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 282 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 283 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 284 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 285 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 286 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 287 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 288 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 289 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 290 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 291 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 292 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 293 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 294 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 295 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 296 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 297 "data/maps/Route104/scripts.pory"
	step_end
# 298 "data/maps/Route104/scripts.pory"

# 299 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordAfterDadCalls:
# 300 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 301 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 302 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 303 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 304 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 305 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 306 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 307 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 308 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 309 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 310 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 311 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 312 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 313 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 314 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 315 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 316 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 317 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 318 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 319 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 320 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 321 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 322 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 323 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 324 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 325 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 326 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 327 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 328 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 329 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 330 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 331 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 332 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 333 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 334 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 335 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 336 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 337 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 338 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 339 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 340 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 341 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 342 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 343 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 344 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 345 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 346 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 347 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 348 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 349 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 350 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 351 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 352 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 353 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 354 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 355 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 356 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 357 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 358 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 359 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 360 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 361 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 362 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 363 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 364 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 365 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 366 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 367 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 368 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 369 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 370 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 371 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 372 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 373 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 374 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 375 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 376 "data/maps/Route104/scripts.pory"
	walk_right
# 377 "data/maps/Route104/scripts.pory"
	walk_right
# 378 "data/maps/Route104/scripts.pory"
	walk_down
# 379 "data/maps/Route104/scripts.pory"
	walk_down
# 380 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 381 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 382 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 383 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 384 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 385 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 386 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 387 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 388 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 389 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 390 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 391 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 392 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 393 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 394 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 395 "data/maps/Route104/scripts.pory"
	walk_down
# 396 "data/maps/Route104/scripts.pory"
	walk_down
# 397 "data/maps/Route104/scripts.pory"
	step_end
# 398 "data/maps/Route104/scripts.pory"

# 399 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewford:
# 400 "data/maps/Route104/scripts.pory"
	walk_down
# 401 "data/maps/Route104/scripts.pory"
	walk_down
# 402 "data/maps/Route104/scripts.pory"
	walk_down
# 403 "data/maps/Route104/scripts.pory"
	walk_down
# 404 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 405 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 406 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 407 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 408 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 409 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 410 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 411 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 412 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 413 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 414 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 415 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 416 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 417 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 418 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 419 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 420 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 421 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 422 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 423 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 424 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 425 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 426 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 427 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 428 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 429 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 430 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 431 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 432 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 433 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 434 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 435 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 436 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 437 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 438 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 439 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 440 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 441 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 442 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 443 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 444 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 445 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 446 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 447 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 448 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 449 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 451 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 452 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 453 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 454 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 455 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 456 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 457 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 458 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 459 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 460 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 461 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 462 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 463 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 464 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 465 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 466 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 467 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 468 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 469 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 470 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 471 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 472 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 473 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 474 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 475 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 476 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 477 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 478 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 479 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 480 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 481 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 482 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 483 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 484 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 485 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 486 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 487 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 488 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 489 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 490 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 491 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 492 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 493 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 494 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 495 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 496 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 497 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 498 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 499 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 500 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 501 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 502 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 503 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 504 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 505 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 506 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 507 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 508 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 509 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 510 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 511 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 512 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 513 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 514 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 515 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 516 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 517 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 518 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 519 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 520 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 521 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 522 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 523 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 524 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 525 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 526 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 527 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 528 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 529 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 530 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 531 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 532 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 533 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 534 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 535 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 536 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 537 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 538 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 539 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 540 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 541 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 542 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 543 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 544 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 545 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 546 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 547 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 548 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 549 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 550 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 551 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 552 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 553 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 554 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 555 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 556 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 557 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 558 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 559 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 560 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 561 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 562 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 563 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 564 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 565 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 566 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 567 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 568 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 569 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 570 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 571 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 572 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 573 "data/maps/Route104/scripts.pory"
	walk_right
# 574 "data/maps/Route104/scripts.pory"
	walk_right
# 575 "data/maps/Route104/scripts.pory"
	walk_down
# 576 "data/maps/Route104/scripts.pory"
	walk_down
# 577 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 578 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 579 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 580 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 581 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 582 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 583 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 584 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 585 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 586 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 587 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 588 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 589 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 590 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 591 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 592 "data/maps/Route104/scripts.pory"
	walk_down
# 593 "data/maps/Route104/scripts.pory"
	walk_down
# 594 "data/maps/Route104/scripts.pory"
	step_end
# 595 "data/maps/Route104/scripts.pory"

# 596 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBoardBoat:
# 597 "data/maps/Route104/scripts.pory"
	walk_left
# 598 "data/maps/Route104/scripts.pory"
	walk_down
# 599 "data/maps/Route104/scripts.pory"
	walk_down
# 600 "data/maps/Route104/scripts.pory"
	step_end
# 601 "data/maps/Route104/scripts.pory"

# 602 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerExitBoat:
# 603 "data/maps/Route104/scripts.pory"
	walk_down
# 604 "data/maps/Route104/scripts.pory"
	step_end
# 605 "data/maps/Route104/scripts.pory"

# 606 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerMoveForBriney:
# 607 "data/maps/Route104/scripts.pory"
	walk_down
# 608 "data/maps/Route104/scripts.pory"
	walk_left
# 609 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_right
# 610 "data/maps/Route104/scripts.pory"
	step_end
# 611 "data/maps/Route104/scripts.pory"

# 612 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyBoardBoat:
# 613 "data/maps/Route104/scripts.pory"
	walk_down
# 614 "data/maps/Route104/scripts.pory"
	walk_down
# 615 "data/maps/Route104/scripts.pory"
	step_end
# 616 "data/maps/Route104/scripts.pory"

# 617 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyExitBoat:
# 618 "data/maps/Route104/scripts.pory"
	walk_down
# 619 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 620 "data/maps/Route104/scripts.pory"
	step_end
# 621 "data/maps/Route104/scripts.pory"

# 622 "data/maps/Route104/scripts.pory"
Route104_EventScript_Ivan::
# 623 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
# 624 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 625 "data/maps/Route104/scripts.pory"
	end
# 626 "data/maps/Route104/scripts.pory"

# 627 "data/maps/Route104/scripts.pory"
Route104_EventScript_Billy::
# 628 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_BILLY, Route104_Text_BillyIntro, Route104_Text_BillyDefeat
# 629 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 630 "data/maps/Route104/scripts.pory"
	end
# 631 "data/maps/Route104/scripts.pory"

# 632 "data/maps/Route104/scripts.pory"
Route104_EventScript_Haley::
# 633 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, Route104_Text_HaleyIntro, Route104_Text_HaleyDefeat, Route104_EventScript_TryRegisterHaleyAfterBattle
# 634 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 635 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchHaley
# 636 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_HALEY_1
# 637 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 638 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterHaley
# 639 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 640 "data/maps/Route104/scripts.pory"
	release
# 641 "data/maps/Route104/scripts.pory"
	end
# 642 "data/maps/Route104/scripts.pory"

# 643 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaleyAfterBattle::
# 644 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 645 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 646 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaleyAfterBattle
# 647 "data/maps/Route104/scripts.pory"
	release
# 648 "data/maps/Route104/scripts.pory"
	end
# 649 "data/maps/Route104/scripts.pory"

# 650 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaleyAfterBattle::
# 651 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister2, MSGBOX_DEFAULT
# 652 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 653 "data/maps/Route104/scripts.pory"
	release
# 654 "data/maps/Route104/scripts.pory"
	end
# 655 "data/maps/Route104/scripts.pory"

# 656 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaley::
# 657 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaley
# 658 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 659 "data/maps/Route104/scripts.pory"
	release
# 660 "data/maps/Route104/scripts.pory"
	end
# 661 "data/maps/Route104/scripts.pory"

# 662 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaley::
# 663 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister1, MSGBOX_DEFAULT
# 664 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 665 "data/maps/Route104/scripts.pory"
	release
# 666 "data/maps/Route104/scripts.pory"
	end
# 667 "data/maps/Route104/scripts.pory"

# 668 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchHaley::
# 669 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_HALEY_1, Route104_Text_HaleyRematchIntro, Route104_Text_HaleyRematchDefeat
# 670 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
# 671 "data/maps/Route104/scripts.pory"
	end
# 672 "data/maps/Route104/scripts.pory"

# 673 "data/maps/Route104/scripts.pory"
Route104_EventScript_Winston::
# 674 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat, Route104_EventScript_TryRegisterWinstonAfterBattle
# 675 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 676 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchWinston
# 677 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_WINSTON_1
# 678 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 679 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterWinston
# 680 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 681 "data/maps/Route104/scripts.pory"
	release
# 682 "data/maps/Route104/scripts.pory"
	end
# 683 "data/maps/Route104/scripts.pory"

# 684 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinstonAfterBattle::
# 685 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 686 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 687 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinstonAfterBattle
# 688 "data/maps/Route104/scripts.pory"
	release
# 689 "data/maps/Route104/scripts.pory"
	end
# 690 "data/maps/Route104/scripts.pory"

# 691 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinstonAfterBattle::
# 692 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister2, MSGBOX_DEFAULT
# 693 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 694 "data/maps/Route104/scripts.pory"
	release
# 695 "data/maps/Route104/scripts.pory"
	end
# 696 "data/maps/Route104/scripts.pory"

# 697 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinston::
# 698 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinston
# 699 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 700 "data/maps/Route104/scripts.pory"
	release
# 701 "data/maps/Route104/scripts.pory"
	end
# 702 "data/maps/Route104/scripts.pory"

# 703 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinston::
# 704 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister1, MSGBOX_DEFAULT
# 705 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 706 "data/maps/Route104/scripts.pory"
	release
# 707 "data/maps/Route104/scripts.pory"
	end
# 708 "data/maps/Route104/scripts.pory"

# 709 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchWinston::
# 710 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_WINSTON_1, Route104_Text_WinstonRematchIntro, Route104_Text_WinstonRematchDefeat
# 711 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
# 712 "data/maps/Route104/scripts.pory"
	end
# 713 "data/maps/Route104/scripts.pory"

# 714 "data/maps/Route104/scripts.pory"
Route104_EventScript_Cindy::
# 715 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_CINDY_1, Route104_Text_CindyIntro, Route104_Text_CindyDefeat, Route104_EventScript_TryRegisterCindyAfterBattle
# 716 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 717 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchCindy
# 718 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_CINDY_1
# 719 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 720 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterCindy
# 721 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 722 "data/maps/Route104/scripts.pory"
	release
# 723 "data/maps/Route104/scripts.pory"
	end
# 724 "data/maps/Route104/scripts.pory"

# 725 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindyAfterBattle::
# 726 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 727 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 728 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindyAfterBattle
# 729 "data/maps/Route104/scripts.pory"
	release
# 730 "data/maps/Route104/scripts.pory"
	end
# 731 "data/maps/Route104/scripts.pory"

# 732 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindyAfterBattle::
# 733 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister2, MSGBOX_DEFAULT
# 734 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 735 "data/maps/Route104/scripts.pory"
	release
# 736 "data/maps/Route104/scripts.pory"
	end
# 737 "data/maps/Route104/scripts.pory"

# 738 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindy::
# 739 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindy
# 740 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 741 "data/maps/Route104/scripts.pory"
	release
# 742 "data/maps/Route104/scripts.pory"
	end
# 743 "data/maps/Route104/scripts.pory"

# 744 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindy::
# 745 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister1, MSGBOX_DEFAULT
# 746 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 747 "data/maps/Route104/scripts.pory"
	release
# 748 "data/maps/Route104/scripts.pory"
	end
# 749 "data/maps/Route104/scripts.pory"

# 750 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchCindy::
# 751 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_CINDY_1, Route104_Text_CindyRematchIntro, Route104_Text_CindyRematchDefeat
# 752 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostRematch, MSGBOX_AUTOCLOSE
# 753 "data/maps/Route104/scripts.pory"
	end
# 754 "data/maps/Route104/scripts.pory"

# 755 "data/maps/Route104/scripts.pory"
Route104_EventScript_Gina::
# 756 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_GinaIntro, Route104_Text_GinaDefeat, Route104_Text_GinaNotEnoughMons
# 757 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 758 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_GinaPostBattle, MSGBOX_DEFAULT
# 759 "data/maps/Route104/scripts.pory"
	release
# 760 "data/maps/Route104/scripts.pory"
	end
# 761 "data/maps/Route104/scripts.pory"

# 762 "data/maps/Route104/scripts.pory"
Route104_EventScript_Mia::
# 763 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_MiaIntro, Route104_Text_MiaDefeat, Route104_Text_MiaNotEnoughMons
# 764 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 765 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MiaPostBattle, MSGBOX_DEFAULT
# 766 "data/maps/Route104/scripts.pory"
	release
# 767 "data/maps/Route104/scripts.pory"
	end
# 768 "data/maps/Route104/scripts.pory"

# 769 "data/maps/Route104/scripts.pory"
Route104_EventScript_Darian::
# 770 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_DARIAN, Route104_Text_DarianIntro, Route104_Text_DarianDefeat
# 771 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
# 772 "data/maps/Route104/scripts.pory"
	end
# 773 "data/maps/Route104/scripts.pory"

# 774 "data/maps/Route104/scripts.pory"
Route104_Text_BrineyLivesInSeasideCottage:
# 775 "data/maps/Route104/scripts.pory"
	.string "That seaside cottage is where\n"
# 776 "data/maps/Route104/scripts.pory"
	.string "Mr. Briney lives.\p"
# 777 "data/maps/Route104/scripts.pory"
	.string "He was once a mighty sailor who never\n"
# 778 "data/maps/Route104/scripts.pory"
	.string "feared the sea, however stormy.$"
# 779 "data/maps/Route104/scripts.pory"

# 780 "data/maps/Route104/scripts.pory"
Route104_Text_WhatsItLikeAtBottomOfSea:
# 781 "data/maps/Route104/scripts.pory"
	.string "The sea, huh?\p"
# 782 "data/maps/Route104/scripts.pory"
	.string "I wonder what it's like at the bottom\n"
# 783 "data/maps/Route104/scripts.pory"
	.string "of the sea?$"
# 784 "data/maps/Route104/scripts.pory"

# 785 "data/maps/Route104/scripts.pory"
Route104_Text_ThrowBallAtWeakenedPokemon:
# 786 "data/maps/Route104/scripts.pory"
	.string "If you're going to throw a Poké Ball,\n"
# 787 "data/maps/Route104/scripts.pory"
	.string "weaken the wild Pokémon first.\p"
# 788 "data/maps/Route104/scripts.pory"
	.string "It will be easier to catch if it's been\n"
# 789 "data/maps/Route104/scripts.pory"
	.string "poisoned, burned, or lulled to sleep.$"
# 790 "data/maps/Route104/scripts.pory"

# 791 "data/maps/Route104/scripts.pory"
Route104_Text_OnlyThrowBallAtWildPokemon:
# 792 "data/maps/Route104/scripts.pory"
	.string "You're a thief if you try to steal\n"
# 793 "data/maps/Route104/scripts.pory"
	.string "someone else's Pokémon.\p"
# 794 "data/maps/Route104/scripts.pory"
	.string "You should throw Poké Balls only at\n"
# 795 "data/maps/Route104/scripts.pory"
	.string "wild Pokémon.$"
# 796 "data/maps/Route104/scripts.pory"

# 797 "data/maps/Route104/scripts.pory"
Route104_Text_ImNotATrainer:
# 798 "data/maps/Route104/scripts.pory"
	.string "Oh, no, I'm not a Trainer.\p"
# 799 "data/maps/Route104/scripts.pory"
	.string "But that's right, if Trainers lock eyes,\n"
# 800 "data/maps/Route104/scripts.pory"
	.string "it's a challenge to battle.\p"
# 801 "data/maps/Route104/scripts.pory"
	.string "If you don't want to battle, stay out\n"
# 802 "data/maps/Route104/scripts.pory"
	.string "of their sight.$"
# 803 "data/maps/Route104/scripts.pory"

# 804 "data/maps/Route104/scripts.pory"
Route104_Text_LikeFillingMouthWithSeedsTakeThis:
# 805 "data/maps/Route104/scripts.pory"
	.string "I like filling my mouth with seeds,\n"
# 806 "data/maps/Route104/scripts.pory"
	.string "then spitting them out fast!\p"
# 807 "data/maps/Route104/scripts.pory"
	.string "You can have this, so you try it out!\p"
# 808 "data/maps/Route104/scripts.pory"
	.string "Use it on a Pokémon, and it will learn\n"
# 809 "data/maps/Route104/scripts.pory"
	.string "a move for firing seeds rapidly.$"
# 810 "data/maps/Route104/scripts.pory"

# 811 "data/maps/Route104/scripts.pory"
Route104_Text_TMsAreOneTimeUse:
# 812 "data/maps/Route104/scripts.pory"
	.string "A word of advice!\p"
# 813 "data/maps/Route104/scripts.pory"
	.string "A TM, Technical Machine, is good only\n"
# 814 "data/maps/Route104/scripts.pory"
	.string "for one-time use.\p"
# 815 "data/maps/Route104/scripts.pory"
	.string "Once you use it, it's gone.\n"
# 816 "data/maps/Route104/scripts.pory"
	.string "Think twice before using it!$"
# 817 "data/maps/Route104/scripts.pory"

# 818 "data/maps/Route104/scripts.pory"
Route104_Text_DontNeedThisTakeIt:
# 819 "data/maps/Route104/scripts.pory"
	.string "This Flower Shop started selling\n"
# 820 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 821 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 822 "data/maps/Route104/scripts.pory"
	.string "shopping.\p"
# 823 "data/maps/Route104/scripts.pory"
	.string "I don't need this White Herb anymore.\n"
# 824 "data/maps/Route104/scripts.pory"
	.string "Would you take it, please?$"
# 825 "data/maps/Route104/scripts.pory"

# 826 "data/maps/Route104/scripts.pory"
Route104_Text_FlowerShopSellingSaplings:
# 827 "data/maps/Route104/scripts.pory"
	.string "This Flower Shop started selling\n"
# 828 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 829 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 830 "data/maps/Route104/scripts.pory"
	.string "shopping. Where should I put them?$"
# 831 "data/maps/Route104/scripts.pory"

# 832 "data/maps/Route104/scripts.pory"
Route104_Text_MrBrineysCottage:
# 833 "data/maps/Route104/scripts.pory"
	.string "Mr. Briney's Cottage$"
# 834 "data/maps/Route104/scripts.pory"

# 835 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignPetalburg:
# 836 "data/maps/Route104/scripts.pory"
	.string "Route 1O4\n"
# 837 "data/maps/Route104/scripts.pory"
	.string "{RIGHT_ARROW} Petalburg City$"
# 838 "data/maps/Route104/scripts.pory"

# 839 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignRustboro:
# 840 "data/maps/Route104/scripts.pory"
	.string "Route 1O4\n"
# 841 "data/maps/Route104/scripts.pory"
	.string "{UP_ARROW} Rustboro City$"
# 842 "data/maps/Route104/scripts.pory"

# 843 "data/maps/Route104/scripts.pory"
Route104_Text_PrettyPetalFlowShop:
# 844 "data/maps/Route104/scripts.pory"
	.string "Pretty Petal Flower Shop$"
# 845 "data/maps/Route104/scripts.pory"

# 846 "data/maps/Route104/scripts.pory"
Route104_Text_TrainerTipsDoubleBattles:
# 847 "data/maps/Route104/scripts.pory"
	.string "Trainer Tips\p"
# 848 "data/maps/Route104/scripts.pory"
	.string "In the Hoenn region there are pairs\n"
# 849 "data/maps/Route104/scripts.pory"
	.string "of Trainers who challenge others\l"
# 850 "data/maps/Route104/scripts.pory"
	.string "for 2-on-2 Pokémon battles called\l"
# 851 "data/maps/Route104/scripts.pory"
	.string "Double Battles.\p"
# 852 "data/maps/Route104/scripts.pory"
	.string "In a Double Battle, the Trainer must\n"
# 853 "data/maps/Route104/scripts.pory"
	.string "send out two Pokémon, the one at the\l"
# 854 "data/maps/Route104/scripts.pory"
	.string "left of the list and the top one.\l"
# 855 "data/maps/Route104/scripts.pory"
	.string "Watch how Pokémon are lined up.$"

Route104_EventScript_MrBriney_FirstEncounter::
# 859 "data/maps/Route104/scripts.pory"
	lock
# 860 "data/maps/Route104/scripts.pory"
	faceplayer
# 861 "data/maps/Route104/scripts.pory"
	msgbox Route104_EventScript_MrBriney_FirstEncounter_Text_0
# 862 "data/maps/Route104/scripts.pory"
	closemessage
# 863 "data/maps/Route104/scripts.pory"
	applymovement 34, Common_Movement_WalkInPlaceDown
# 864 "data/maps/Route104/scripts.pory"
	waitmovement 34
# 865 "data/maps/Route104/scripts.pory"
	release
	end


Route104_EventScript_Peeko_FirstEncounter::
# 870 "data/maps/Route104/scripts.pory"
	lock
# 871 "data/maps/Route104/scripts.pory"
	faceplayer
# 872 "data/maps/Route104/scripts.pory"
	delay 8
# 873 "data/maps/Route104/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 874 "data/maps/Route104/scripts.pory"
	msgbox Route104_EventScript_Peeko_FirstEncounter_Text_0
# 875 "data/maps/Route104/scripts.pory"
	closemessage
# 876 "data/maps/Route104/scripts.pory"
	delay 8
# 877 "data/maps/Route104/scripts.pory"
	release
	end


Route104_EventScript_Boy3::
# 882 "data/maps/Route104/scripts.pory"
	lock
# 883 "data/maps/Route104/scripts.pory"
	faceplayer
# 884 "data/maps/Route104/scripts.pory"
	msgbox Route104_EventScript_Boy3_Text_0
# 885 "data/maps/Route104/scripts.pory"
	release
	end


Route104_EventScript_MrBriney_FirstEncounter_Text_0:
# 861 "data/maps/Route104/scripts.pory"
	.string "{COLOR RED}Mr. Briney{COLOR DARK_GRAY}: Hoh hoh hoh hoh!\pMy pretty Peeko's as full of energy\nas usual!$"

Route104_EventScript_Peeko_FirstEncounter_Text_0:
# 874 "data/maps/Route104/scripts.pory"
	.string "Pi-kwee!$"

Route104_EventScript_Boy3_Text_0:
# 884 "data/maps/Route104/scripts.pory"
	.string "I kept encountering the same kind of\nPokémon.\pThen the DexNav got better, and now\nI can find rare Pokémon easily.$"
