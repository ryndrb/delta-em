# 1 "data/maps/LavaridgeTown/scripts.pory"

# 2 "data/maps/LavaridgeTown/scripts.pory"
.set LOCALID_RIVAL, 7
# 3 "data/maps/LavaridgeTown/scripts.pory"

# 4 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_MapScripts::
# 5 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_OnTransition
# 6 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LavaridgeTown_OnFrame
# 7 "data/maps/LavaridgeTown/scripts.pory"
	.byte 0
# 8 "data/maps/LavaridgeTown/scripts.pory"

# 9 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnTransition:
# 10 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_VISITED_LAVARIDGE_TOWN
# 11 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_WHITEOUT_TO_LAVARIDGE, LavaridgeTown_EventScript_ClearLavaridgeWhiteOut
# 12 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, LavaridgeTown_EventScript_ShowMtChimneyTrainers
# 13 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 14 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_LAVARIDGE_TOWN_STATE, 2, LavaridgeTown_EventScript_SetRivalPos
# 15 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_HideMapNamePopup
# 16 "data/maps/LavaridgeTown/scripts.pory"
	end
# 17 "data/maps/LavaridgeTown/scripts.pory"

# 18 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ClearLavaridgeWhiteOut::
# 19 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_WHITEOUT_TO_LAVARIDGE
# 20 "data/maps/LavaridgeTown/scripts.pory"
	return
# 21 "data/maps/LavaridgeTown/scripts.pory"

# 22 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_SetRivalPos::
# 23 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 6, 16
# 24 "data/maps/LavaridgeTown/scripts.pory"
    setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_DOWN
# 25 "data/maps/LavaridgeTown/scripts.pory"
	return
# 26 "data/maps/LavaridgeTown/scripts.pory"

# 27 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ShowMtChimneyTrainers::
# 28 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
# 29 "data/maps/LavaridgeTown/scripts.pory"
	return
# 30 "data/maps/LavaridgeTown/scripts.pory"

# 31 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HideMapNamePopup::
# 32 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 33 "data/maps/LavaridgeTown/scripts.pory"
	return
# 34 "data/maps/LavaridgeTown/scripts.pory"

# 35 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnFrame:
# 36 "data/maps/LavaridgeTown/scripts.pory"
	map_script_2 VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_RivalGiveGoGoggles
# 37 "data/maps/LavaridgeTown/scripts.pory"
	.2byte 0
# 38 "data/maps/LavaridgeTown/scripts.pory"

# 39 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsTrigger::
# 40 "data/maps/LavaridgeTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 41 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, DIR_SOUTH, LavaridgeTown_EventScript_EnteredHotSprings
# 42 "data/maps/LavaridgeTown/scripts.pory"
	end
# 43 "data/maps/LavaridgeTown/scripts.pory"

# 44 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EnteredHotSprings::
# 45 "data/maps/LavaridgeTown/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_HOT_SPRINGS
# 46 "data/maps/LavaridgeTown/scripts.pory"
	end
# 47 "data/maps/LavaridgeTown/scripts.pory"

# 48 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertM::
# 49 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsNeverRunDry, MSGBOX_NPC
# 50 "data/maps/LavaridgeTown/scripts.pory"
	end
# 51 "data/maps/LavaridgeTown/scripts.pory"

# 52 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_OldMan::
# 53 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_PokemonNippedBackside, MSGBOX_SIGN
# 54 "data/maps/LavaridgeTown/scripts.pory"
	end
# 55 "data/maps/LavaridgeTown/scripts.pory"

# 56 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_Twin::
# 57 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BatheInHotSpringsEveryDay, MSGBOX_NPC
# 58 "data/maps/LavaridgeTown/scripts.pory"
	end
# 59 "data/maps/LavaridgeTown/scripts.pory"

# 60 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman1::
# 61 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_IfPokemonInHotSprings, MSGBOX_NPC
# 62 "data/maps/LavaridgeTown/scripts.pory"
	end
# 63 "data/maps/LavaridgeTown/scripts.pory"

# 64 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman2::
# 65 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsClaims, MSGBOX_NPC
# 66 "data/maps/LavaridgeTown/scripts.pory"
	end
# 67 "data/maps/LavaridgeTown/scripts.pory"

# 68 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertF::
# 69 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_OhYouLikeHotSprings, MSGBOX_NPC
# 70 "data/maps/LavaridgeTown/scripts.pory"
	end
# 71 "data/maps/LavaridgeTown/scripts.pory"

# 72 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EggWoman::
# 73 "data/maps/LavaridgeTown/scripts.pory"
	lock
# 74 "data/maps/LavaridgeTown/scripts.pory"
	faceplayer
# 75 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_LAVARIDGE_EGG, LavaridgeTown_EventScript_ReceivedEgg
# 76 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
# 77 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LavaridgeTown_EventScript_DeclineEgg
# 78 "data/maps/LavaridgeTown/scripts.pory"
	getpartysize
# 79 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, LavaridgeTown_EventScript_NoRoomForEgg
# 80 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
# 81 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_LAVARIDGE_EGG
# 82 "data/maps/LavaridgeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 83 "data/maps/LavaridgeTown/scripts.pory"
	message LavaridgeTown_Text_ReceivedTheEgg
# 84 "data/maps/LavaridgeTown/scripts.pory"
	waitfanfare
# 85 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_WYNAUT
# 86 "data/maps/LavaridgeTown/scripts.pory"
	release
# 87 "data/maps/LavaridgeTown/scripts.pory"
	end
# 88 "data/maps/LavaridgeTown/scripts.pory"

# 89 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ReceivedEgg::
# 90 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare, MSGBOX_DEFAULT
# 91 "data/maps/LavaridgeTown/scripts.pory"
	release
# 92 "data/maps/LavaridgeTown/scripts.pory"
	end
# 93 "data/maps/LavaridgeTown/scripts.pory"

# 94 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_NoRoomForEgg::
# 95 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
# 96 "data/maps/LavaridgeTown/scripts.pory"
	release
# 97 "data/maps/LavaridgeTown/scripts.pory"
	end
# 98 "data/maps/LavaridgeTown/scripts.pory"

# 99 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_DeclineEgg::
# 100 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_AsYouWishThen, MSGBOX_DEFAULT
# 101 "data/maps/LavaridgeTown/scripts.pory"
	release
# 102 "data/maps/LavaridgeTown/scripts.pory"
	end
# 103 "data/maps/LavaridgeTown/scripts.pory"

# 104 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_TownSign::
# 105 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_TownSign, MSGBOX_SIGN
# 106 "data/maps/LavaridgeTown/scripts.pory"
	end
# 107 "data/maps/LavaridgeTown/scripts.pory"

# 108 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_GymSign::
# 109 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_GymSign, MSGBOX_SIGN
# 110 "data/maps/LavaridgeTown/scripts.pory"
	end
# 111 "data/maps/LavaridgeTown/scripts.pory"

# 112 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HerbShopSign::
# 113 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HerbShopSign, MSGBOX_SIGN
# 114 "data/maps/LavaridgeTown/scripts.pory"
	end
# 115 "data/maps/LavaridgeTown/scripts.pory"

# 116 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HaveEggWillYouTakeIt:
# 117 "data/maps/LavaridgeTown/scripts.pory"
	.string "I have here an Egg.\pI'd hoped to hatch it by covering it\nin hot sand by the hot springs.\lBut that doesn't seem to be enough…\pI've heard it would be best if it\nwere kept together with Pokémon and\lcarried about.\pYou are a Trainer, yes?\nAnd your Pokémon radiate vitality.\pSo, what say you?\nWill you take this Egg to hatch?$"
# 118 "data/maps/LavaridgeTown/scripts.pory"

# 119 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg:
# 120 "data/maps/LavaridgeTown/scripts.pory"
	.string "Good! I hope you'll walk plenty with\n"
# 121 "data/maps/LavaridgeTown/scripts.pory"
	.string "this here Egg!$"
# 122 "data/maps/LavaridgeTown/scripts.pory"

# 123 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_ReceivedTheEgg:
# 124 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER} received the Egg.$"
# 125 "data/maps/LavaridgeTown/scripts.pory"

# 126 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_NoRoomForThisEgg:
# 127 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh? You've too many Pokémon.\n"
# 128 "data/maps/LavaridgeTown/scripts.pory"
	.string "There's no room for this Egg…$"
# 129 "data/maps/LavaridgeTown/scripts.pory"

# 130 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_AsYouWishThen:
# 131 "data/maps/LavaridgeTown/scripts.pory"
	.string "As you wish, then…\p"
# 132 "data/maps/LavaridgeTown/scripts.pory"
	.string "If you have a change of heart about\n"
# 133 "data/maps/LavaridgeTown/scripts.pory"
	.string "hatching this Egg, I will be here.$"
# 134 "data/maps/LavaridgeTown/scripts.pory"

# 135 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare:
# 136 "data/maps/LavaridgeTown/scripts.pory"
	.string "Every so often, an Egg will be found at\n"
# 137 "data/maps/LavaridgeTown/scripts.pory"
	.string "the Pokémon Day Care.\p"
# 138 "data/maps/LavaridgeTown/scripts.pory"
	.string "Or at least that's how the rumor goes.$"
# 139 "data/maps/LavaridgeTown/scripts.pory"

# 140 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsNeverRunDry:
# 141 "data/maps/LavaridgeTown/scripts.pory"
	.string "We draw as much hot water as we need,\nand yet the hot springs never run dry.\pIsn't it magical?\pThese hot springs appear near active\nvolcanoes.\pVeins of water under the ground are\nheated by magma to well up as hot\lsprings.$"
# 142 "data/maps/LavaridgeTown/scripts.pory"

# 143 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_PokemonNippedBackside:
# 144 "data/maps/LavaridgeTown/scripts.pory"
	.string "Being buried in this hot sand is…\n"
# 145 "data/maps/LavaridgeTown/scripts.pory"
	.string "Sigh…\p"
# 146 "data/maps/LavaridgeTown/scripts.pory"
	.string "So warm and heavenly…\p"
# 147 "data/maps/LavaridgeTown/scripts.pory"
	.string "Eh? Gyaah! Ouch!\p"
# 148 "data/maps/LavaridgeTown/scripts.pory"
	.string "A Pokémon nipped my backside!$"
# 149 "data/maps/LavaridgeTown/scripts.pory"

# 150 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_OhYouLikeHotSprings:
# 151 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh, you like hot springs, do you?\p"
# 152 "data/maps/LavaridgeTown/scripts.pory"
	.string "That's surprising for one as young\n"
# 153 "data/maps/LavaridgeTown/scripts.pory"
	.string "as you.$"
# 154 "data/maps/LavaridgeTown/scripts.pory"

# 155 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BatheInHotSpringsEveryDay:
# 156 "data/maps/LavaridgeTown/scripts.pory"
	.string "I bathe in the hot springs every day.\p"
# 157 "data/maps/LavaridgeTown/scripts.pory"
	.string "I want to become a beautiful and strong\n"
# 158 "data/maps/LavaridgeTown/scripts.pory"
	.string "Gym Leader like Flannery.$"
# 159 "data/maps/LavaridgeTown/scripts.pory"

# 160 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_IfPokemonInHotSprings:
# 161 "data/maps/LavaridgeTown/scripts.pory"
	.string "If people put Pokémon in hot springs,\n"
# 162 "data/maps/LavaridgeTown/scripts.pory"
	.string "it might be seriously strange.\p"
# 163 "data/maps/LavaridgeTown/scripts.pory"
	.string "Why, it might be an electric bath, or\n"
# 164 "data/maps/LavaridgeTown/scripts.pory"
	.string "a bubble bath, or even a lava bath…$"
# 165 "data/maps/LavaridgeTown/scripts.pory"

# 166 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsClaims:
# 167 "data/maps/LavaridgeTown/scripts.pory"
	.string "They're claiming that these hot springs\n"
# 168 "data/maps/LavaridgeTown/scripts.pory"
	.string "are good for calming nervous tension,\l"
# 169 "data/maps/LavaridgeTown/scripts.pory"
	.string "relieving aching muscles, solving\l"
# 170 "data/maps/LavaridgeTown/scripts.pory"
	.string "romantic problems, and attracting\l"
# 171 "data/maps/LavaridgeTown/scripts.pory"
	.string "money…$"
# 172 "data/maps/LavaridgeTown/scripts.pory"

# 173 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_TownSign:
# 174 "data/maps/LavaridgeTown/scripts.pory"
	.string "Lavaridge Town\p"
# 175 "data/maps/LavaridgeTown/scripts.pory"
	.string "“Pokémon Center Hot Springs\n"
# 176 "data/maps/LavaridgeTown/scripts.pory"
	.string "An excellent place for relaxing!”$"
# 177 "data/maps/LavaridgeTown/scripts.pory"

# 178 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_GymSign:
# 179 "data/maps/LavaridgeTown/scripts.pory"
	.string "Lavaridge Town Pokémon Gym\n"
# 180 "data/maps/LavaridgeTown/scripts.pory"
	.string "Leader: Flannery\l"
# 181 "data/maps/LavaridgeTown/scripts.pory"
	.string "“One with a fiery passion that burns!”$"
# 182 "data/maps/LavaridgeTown/scripts.pory"

# 183 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HerbShopSign:
# 184 "data/maps/LavaridgeTown/scripts.pory"
	.string "Pokémon Herb Shop\n"
# 185 "data/maps/LavaridgeTown/scripts.pory"
	.string "“Bitter taste--better cure!”$"

LavaridgeTown_EventScript_BlackBelt::
# 191 "data/maps/LavaridgeTown/scripts.pory"
	lock
# 192 "data/maps/LavaridgeTown/scripts.pory"
	faceplayer
# 193 "data/maps/LavaridgeTown/scripts.pory"
	checkitem ITEM_TM_SWORDS_DANCE, 1
# 194 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LavaridgeTown_EventScript_BlackBelt_2
# 200 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_BlackBelt_Text_0, MSGBOX_YESNO
# 201 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LavaridgeTown_EventScript_BlackBelt_5
# 206 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_BlackBelt_Text_2
# 207 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 208 "data/maps/LavaridgeTown/scripts.pory"
	delay 8
# 210 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_TM_SWORDS_DANCE, 1
# 211 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HaveSwordsDance
# 212 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 213 "data/maps/LavaridgeTown/scripts.pory"
	release
	end

LavaridgeTown_EventScript_BlackBelt_2:
# 195 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HaveSwordsDance
# 196 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 197 "data/maps/LavaridgeTown/scripts.pory"
	release
	end

LavaridgeTown_EventScript_BlackBelt_5:
# 202 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_BlackBelt_Text_1
# 203 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
	end


LavaridgeTown_EventScript_RivalGiveGoGoggles::
# 222 "data/maps/LavaridgeTown/scripts.pory"
	lock
# 223 "data/maps/LavaridgeTown/scripts.pory"
	opendoor 11, 14
# 224 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 225 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_RIVAL
# 226 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL
# 227 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkDown
# 228 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement LOCALID_RIVAL
# 229 "data/maps/LavaridgeTown/scripts.pory"
	closedoor 11, 14
# 230 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 231 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceLeft
# 232 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement LOCALID_RIVAL
# 233 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 234 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 235 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement LOCALID_RIVAL
# 236 "data/maps/LavaridgeTown/scripts.pory"
	waitse
# 237 "data/maps/LavaridgeTown/scripts.pory"
	delay 16
# 238 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 239 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LavaridgeTown_EventScript_RivalGiveGoGoggles_2
# 242 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
LavaridgeTown_EventScript_RivalGiveGoGoggles_1:
# 244 "data/maps/LavaridgeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 245 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 246 "data/maps/LavaridgeTown/scripts.pory"
	delay 8
# 247 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 248 "data/maps/LavaridgeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 249 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_EventScript_RivalApproachPlayer
# 250 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement LOCALID_RIVAL
# 251 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 252 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LavaridgeTown_EventScript_RivalGiveGoGoggles_6
# 280 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_RivalGiveGoGoggles_Text_6
# 281 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 282 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 283 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 284 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement LOCALID_RIVAL
# 285 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_RivalGiveGoGoggles_Text_7
# 286 "data/maps/LavaridgeTown/scripts.pory"
	delay 8
# 287 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 288 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_GO_GOGGLES
# 289 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_RivalGiveGoGoggles_Text_8
# 290 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 291 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 292 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 293 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement LOCALID_RIVAL
# 294 "data/maps/LavaridgeTown/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 2
# 295 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 296 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_RivalGiveGoGoggles_Text_9, MSGBOX_YESNO
# 297 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LavaridgeTown_EventScript_RivalGiveGoGoggles_12
# 303 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_RivalGiveGoGoggles_Text_11
# 304 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
LavaridgeTown_EventScript_RivalGiveGoGoggles_5:
# 307 "data/maps/LavaridgeTown/scripts.pory"
	fadedefaultbgm
# 308 "data/maps/LavaridgeTown/scripts.pory"
	release
	end

LavaridgeTown_EventScript_RivalGiveGoGoggles_2:
# 240 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
	goto LavaridgeTown_EventScript_RivalGiveGoGoggles_1

LavaridgeTown_EventScript_RivalGiveGoGoggles_6:
# 253 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_RivalGiveGoGoggles_Text_0
# 254 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 255 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 256 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 257 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement LOCALID_RIVAL
# 258 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_RivalGiveGoGoggles_Text_1
# 259 "data/maps/LavaridgeTown/scripts.pory"
	delay 8
# 260 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 261 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_GO_GOGGLES
# 262 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_RivalGiveGoGoggles_Text_2
# 263 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 264 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 265 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 266 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement LOCALID_RIVAL
# 267 "data/maps/LavaridgeTown/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 2
# 268 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 269 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_RivalGiveGoGoggles_Text_3, MSGBOX_YESNO
# 270 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LavaridgeTown_EventScript_RivalGiveGoGoggles_9
# 276 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_RivalGiveGoGoggles_Text_5
# 277 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
	goto LavaridgeTown_EventScript_RivalGiveGoGoggles_5

LavaridgeTown_EventScript_RivalGiveGoGoggles_9:
# 271 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_RivalGiveGoGoggles_Text_4
# 272 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 273 "data/maps/LavaridgeTown/scripts.pory"
	call LavaridgeTown_EventScript_AcceptedRivalOffer
# 274 "data/maps/LavaridgeTown/scripts.pory"
	waitstate
	goto LavaridgeTown_EventScript_RivalGiveGoGoggles_5

LavaridgeTown_EventScript_RivalGiveGoGoggles_12:
# 298 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_RivalGiveGoGoggles_Text_10
# 299 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 300 "data/maps/LavaridgeTown/scripts.pory"
	call LavaridgeTown_EventScript_AcceptedRivalOffer
# 301 "data/maps/LavaridgeTown/scripts.pory"
	waitstate
	goto LavaridgeTown_EventScript_RivalGiveGoGoggles_5


# 312 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalApproachPlayer:
# 313 "data/maps/LavaridgeTown/scripts.pory"
	walk_down
# 314 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 314 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 314 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 314 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 314 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
	step_end

LavaridgeTown_EventScript_Rival::
# 318 "data/maps/LavaridgeTown/scripts.pory"
	lock
# 319 "data/maps/LavaridgeTown/scripts.pory"
	faceplayer
# 320 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 321 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LavaridgeTown_EventScript_Rival_2
# 333 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_Rival_Text_1, MSGBOX_YESNO
# 334 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LavaridgeTown_EventScript_Rival_8
# 339 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_RivalGiveGoGoggles_Text_11
# 340 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
LavaridgeTown_EventScript_Rival_1:
# 343 "data/maps/LavaridgeTown/scripts.pory"
	release
	end

LavaridgeTown_EventScript_Rival_2:
# 322 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_Rival_Text_0, MSGBOX_YESNO
# 323 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LavaridgeTown_EventScript_Rival_5
# 329 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_RivalGiveGoGoggles_Text_5
# 330 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
	goto LavaridgeTown_EventScript_Rival_1

LavaridgeTown_EventScript_Rival_5:
# 324 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_RivalGiveGoGoggles_Text_4
# 325 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 326 "data/maps/LavaridgeTown/scripts.pory"
	call LavaridgeTown_EventScript_AcceptedRivalOffer
# 327 "data/maps/LavaridgeTown/scripts.pory"
	waitstate
	goto LavaridgeTown_EventScript_Rival_1

LavaridgeTown_EventScript_Rival_8:
# 335 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_RivalGiveGoGoggles_Text_10
# 336 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 337 "data/maps/LavaridgeTown/scripts.pory"
	call LavaridgeTown_EventScript_AcceptedRivalOffer
	goto LavaridgeTown_EventScript_Rival_1


LavaridgeTown_EventScript_AcceptedRivalOffer::
# 348 "data/maps/LavaridgeTown/scripts.pory"
	delay 8
# 349 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_PlayerRivalExit
# 350 "data/maps/LavaridgeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LavaridgeTown_Movement_PlayerRivalExit
# 351 "data/maps/LavaridgeTown/scripts.pory"
	delay 16
# 352 "data/maps/LavaridgeTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 353 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 354 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 355 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL
# 356 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_RIVAL
# 357 "data/maps/LavaridgeTown/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE_2, 2
# 358 "data/maps/LavaridgeTown/scripts.pory"
	delay 64
# 359 "data/maps/LavaridgeTown/scripts.pory"
	warpsilent MAP_PETALBURG_CITY, 15, 12
# 360 "data/maps/LavaridgeTown/scripts.pory"
	waitstate
	return


# 364 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_PlayerRivalExit:
# 365 "data/maps/LavaridgeTown/scripts.pory"
	walk_right
# 365 "data/maps/LavaridgeTown/scripts.pory"
	walk_right
# 365 "data/maps/LavaridgeTown/scripts.pory"
	walk_right
# 366 "data/maps/LavaridgeTown/scripts.pory"
	walk_up
	step_end

LavaridgeTown_EventScript_BlackBelt_Text_0:
# 200 "data/maps/LavaridgeTown/scripts.pory"
	.string "Dance and soul make power!\pSoul is the way of karate for me!\pYou understand, yes?$"

LavaridgeTown_EventScript_BlackBelt_Text_1:
# 202 "data/maps/LavaridgeTown/scripts.pory"
	.string "OK! OK!\nYou good kid!$"

LavaridgeTown_EventScript_BlackBelt_Text_2:
# 206 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh…\nI so sad and wretched…\pYou take this and you understand way\nof karate of me, fool Trainer!$"

LavaridgeTown_EventScript_RivalGiveGoGoggles_Text_0:
# 253 "data/maps/LavaridgeTown/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: {PLAYER}!\pWow, it's a relief to see you in one\npiece!\pOh, well, you know…\nThe last I saw you was right after\lbattling those Team Whatsit people…\pSo I was a bit worried thinking\nabout what might have happened to\lyou after that, {PLAYER}…\p…What?\nYou battled them AGAIN after that?\lAnd you BEAT them!\pYou really are something else,\n{PLAYER}.\lI-I mean, you and your team are.\lI'm pretty impressed by you all!\pAnd that pretty stone that's sparkling\nthere…\pIs that the Meteorite you got back\nfrom them?$"

LavaridgeTown_EventScript_RivalGiveGoGoggles_Text_1:
# 258 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh, that's right!\nHere! Here!\pI've been thinking of giving these to\nyou.$"

LavaridgeTown_EventScript_RivalGiveGoGoggles_Text_2:
# 262 "data/maps/LavaridgeTown/scripts.pory"
	.string "If you put on those Go-Goggles,\nyou'll be all set into the desert on\lRoute 111.$"

LavaridgeTown_EventScript_RivalGiveGoGoggles_Text_3:
# 269 "data/maps/LavaridgeTown/scripts.pory"
	.string "…Oh! And isn't that--\nThat's Lavaridge's Gym Badge!\pSo you beat Flannery, too?\pI guess you really are training your\nPokémon right…\pNext up will be challenging your dad,\nNorman, in Petalburg, right?\pI'm headed to Petalburg's Gym next\nmyself…\pDo you want to go back together?\nBack to Petalburg?$"

LavaridgeTown_EventScript_RivalGiveGoGoggles_Text_4:
# 271 "data/maps/LavaridgeTown/scripts.pory"
	.string "Aye aye!\nThen let's hit the road!$"

LavaridgeTown_EventScript_RivalGiveGoGoggles_Text_5:
# 276 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh, yeah?\pWell, I'll still be in Lavaridge for\na while, so find me if you think you'd\llike a little company on the road\lafter all.$"

LavaridgeTown_EventScript_RivalGiveGoGoggles_Text_6:
# 280 "data/maps/LavaridgeTown/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: {PLAYER}, hey!\nSo you were all right, huh?\pOh, well, you know…\nThe last time I saw you, you were\lmixed up with those “Team Whatsit”\lpeople…\pSo I just wondered if you'd gotten back\non the road after that.\pIt was, like, I don't know…\nI guess I was a bit…worried?\pWhat?\nYou battled them AGAIN after that?\lAnd you even managed to beat them?\pYou really are something else,\n{PLAYER}…\lYou and your Pokémon.\lYour team.\pAnd that…that sparkle there…\nIs that the Meteorite you got back\lfrom them?$"

LavaridgeTown_EventScript_RivalGiveGoGoggles_Text_7:
# 285 "data/maps/LavaridgeTown/scripts.pory"
	.string "…Oh, right!\nI forgot to give you these before.$"

LavaridgeTown_EventScript_RivalGiveGoGoggles_Text_8:
# 289 "data/maps/LavaridgeTown/scripts.pory"
	.string "Keep those with you if you're\nplanning on going into that desert\lnear Route 111.\pThere should be some Pokémon\nthat only make their habitat in the\ldesert, you know.\pYou might check 'em out--if you're up to\nit.$"

LavaridgeTown_EventScript_RivalGiveGoGoggles_Text_9:
# 296 "data/maps/LavaridgeTown/scripts.pory"
	.string "And…\nHuh?\pYou got the Lavaridge Badge!\pSo you even beat Flannery, huh?\pLooks like you've been taking proper\ncare of your Pokémon.\pGuess that means…that you'll be headed\nto Petalburg City next, huh?\lTo challenge your dad at his Gym?\pW-ell, if you are…\pI just happened to be thinking of going\nto Petalburg myself, so…\pHow about it?\nWanna go back to Petalburg together?$"

LavaridgeTown_EventScript_RivalGiveGoGoggles_Text_10:
# 298 "data/maps/LavaridgeTown/scripts.pory"
	.string "Y-yeah?\nThen let's hit it!$"

LavaridgeTown_EventScript_RivalGiveGoGoggles_Text_11:
# 303 "data/maps/LavaridgeTown/scripts.pory"
	.string "O-oh…\nYeah, I get it…\pBut, well, I'll probably still be here in\nLavaridge for a while.\pSo if you decide to head for Petalburg,\num, let me know.$"

LavaridgeTown_EventScript_Rival_Text_0:
# 322 "data/maps/LavaridgeTown/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Do you want to go back together?\nBack to Petalburg?$"

LavaridgeTown_EventScript_Rival_Text_1:
# 333 "data/maps/LavaridgeTown/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: How about it?\nWanna go back to Petalburg together?$"

LavaridgeTown_Text_HaveSwordsDance::
# 217 "data/maps/LavaridgeTown/scripts.pory"
	.string "Suh-words Dance!\pYou use soulful dance for to make\npower of Pokémon go up, up!\pIt is the way of karate I seek!$"
