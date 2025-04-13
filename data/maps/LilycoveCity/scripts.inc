# 1 "data/maps/LilycoveCity/scripts.pory"

# 2 "data/maps/LilycoveCity/scripts.pory"
.set LOCALID_RIVAL, 17
# 3 "data/maps/LilycoveCity/scripts.pory"
.set LOCALID_WOMAN_1, 19
# 4 "data/maps/LilycoveCity/scripts.pory"
.set LOCALID_MAN_1, 20
# 5 "data/maps/LilycoveCity/scripts.pory"

# 6 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_MapScripts::
# 7 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_OnTransition
# 8 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LilycoveCity_OnLoad
# 9 "data/maps/LilycoveCity/scripts.pory"
	.byte 0
# 10 "data/maps/LilycoveCity/scripts.pory"

# 11 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnTransition:
# 12 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_VISITED_LILYCOVE_CITY
# 13 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 14 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
# 15 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 16 "data/maps/LilycoveCity/scripts.pory"
    call_if_set FLAG_MET_RIVAL_LILYCOVE, LilycoveCity_EventScript_RivalSceneDone
# 17 "data/maps/LilycoveCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 18 "data/maps/LilycoveCity/scripts.pory"
	end
# 19 "data/maps/LilycoveCity/scripts.pory"

# 20 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RivalSceneDone::
# 21 "data/maps/LilycoveCity/scripts.pory"
    setvar VAR_TEMP_2, 1
# 22 "data/maps/LilycoveCity/scripts.pory"
    return
# 23 "data/maps/LilycoveCity/scripts.pory"

# 24 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnLoad:
# 25 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_SetWailmerMetatiles
# 26 "data/maps/LilycoveCity/scripts.pory"
	end
# 27 "data/maps/LilycoveCity/scripts.pory"

# 28 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SetWailmerMetatiles::
# 29 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 12, METATILE_Lilycove_Wailmer0, TRUE
# 30 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 12, METATILE_Lilycove_Wailmer1, TRUE
# 31 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 13, METATILE_Lilycove_Wailmer2, TRUE
# 32 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 13, METATILE_Lilycove_Wailmer3, TRUE
# 33 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 14, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 34 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 14, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 35 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 15, METATILE_Lilycove_Wailmer2, TRUE
# 36 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 15, METATILE_Lilycove_Wailmer3, TRUE
# 37 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 16, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 38 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 16, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 39 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 17, METATILE_Lilycove_Wailmer2, TRUE
# 40 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 17, METATILE_Lilycove_Wailmer3, TRUE
# 41 "data/maps/LilycoveCity/scripts.pory"
	return
# 42 "data/maps/LilycoveCity/scripts.pory"

# 43 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BerryGentleman::
# 44 "data/maps/LilycoveCity/scripts.pory"
	lock
# 45 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 46 "data/maps/LilycoveCity/scripts.pory"
	dotimebasedevents
# 47 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_DAILY_LILYCOVE_RECEIVED_BERRY, LilycoveCity_EventScript_ReceivedBerry
# 48 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BerrySuitsYou, MSGBOX_DEFAULT
# 49 "data/maps/LilycoveCity/scripts.pory"
	random 10
# 50 "data/maps/LilycoveCity/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 51 "data/maps/LilycoveCity/scripts.pory"
	giveitem VAR_RESULT
# 52 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 53 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DAILY_LILYCOVE_RECEIVED_BERRY
# 54 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BecauseYoureTrainer, MSGBOX_DEFAULT
# 55 "data/maps/LilycoveCity/scripts.pory"
	release
# 56 "data/maps/LilycoveCity/scripts.pory"
	end
# 57 "data/maps/LilycoveCity/scripts.pory"

# 58 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ReceivedBerry::
# 59 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_PokeblocksSuitPokemon, MSGBOX_DEFAULT
# 60 "data/maps/LilycoveCity/scripts.pory"
	release
# 61 "data/maps/LilycoveCity/scripts.pory"
	end
# 62 "data/maps/LilycoveCity/scripts.pory"

# 63 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man3::
# 64 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallInTown, MSGBOX_NPC
# 65 "data/maps/LilycoveCity/scripts.pory"
	end
# 66 "data/maps/LilycoveCity/scripts.pory"

# 67 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Girl::
# 68 "data/maps/LilycoveCity/scripts.pory"
	lock
# 69 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 70 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_GirlAquaGone
# 71 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_StrangeCaveInCove, MSGBOX_DEFAULT
# 72 "data/maps/LilycoveCity/scripts.pory"
	release
# 73 "data/maps/LilycoveCity/scripts.pory"
	end
# 74 "data/maps/LilycoveCity/scripts.pory"

# 75 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_GirlAquaGone::
# 76 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GoingToMoveDeleterForHMs, MSGBOX_DEFAULT
# 77 "data/maps/LilycoveCity/scripts.pory"
	release
# 78 "data/maps/LilycoveCity/scripts.pory"
	end
# 79 "data/maps/LilycoveCity/scripts.pory"

# 80 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RichBoy::
# 81 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImFromKanto, MSGBOX_NPC
# 82 "data/maps/LilycoveCity/scripts.pory"
	end
# 83 "data/maps/LilycoveCity/scripts.pory"

# 84 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2::
# 85 "data/maps/LilycoveCity/scripts.pory"
	lock
# 86 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 87 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Sailor2AquaGone
# 88 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaBeenTrainingWailmer, MSGBOX_DEFAULT
# 89 "data/maps/LilycoveCity/scripts.pory"
	release
# 90 "data/maps/LilycoveCity/scripts.pory"
	end
# 91 "data/maps/LilycoveCity/scripts.pory"

# 92 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2AquaGone::
# 93 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeonePuntedTeamAquaOut, MSGBOX_DEFAULT
# 94 "data/maps/LilycoveCity/scripts.pory"
	release
# 95 "data/maps/LilycoveCity/scripts.pory"
	end
# 96 "data/maps/LilycoveCity/scripts.pory"

# 97 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2::
# 98 "data/maps/LilycoveCity/scripts.pory"
	lock
# 99 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 100 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Woman2AquaGone
# 101 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeoneStoleMyPokemon, MSGBOX_DEFAULT
# 102 "data/maps/LilycoveCity/scripts.pory"
	release
# 103 "data/maps/LilycoveCity/scripts.pory"
	end
# 104 "data/maps/LilycoveCity/scripts.pory"

# 105 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2AquaGone::
# 106 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MissingPokemonCameBack, MSGBOX_DEFAULT
# 107 "data/maps/LilycoveCity/scripts.pory"
	release
# 108 "data/maps/LilycoveCity/scripts.pory"
	end
# 109 "data/maps/LilycoveCity/scripts.pory"

# 110 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man2::
# 111 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImArtDealer, MSGBOX_NPC
# 112 "data/maps/LilycoveCity/scripts.pory"
	end
# 113 "data/maps/LilycoveCity/scripts.pory"

# 114 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM1::
# 115 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SeaRemainsForeverYoung, MSGBOX_SIGN
# 116 "data/maps/LilycoveCity/scripts.pory"
	end
# 117 "data/maps/LilycoveCity/scripts.pory"

# 118 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertF::
# 119 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SixtyYearsAgoHusbandProposed, MSGBOX_SIGN
# 120 "data/maps/LilycoveCity/scripts.pory"
	end
# 121 "data/maps/LilycoveCity/scripts.pory"

# 122 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2::
# 123 "data/maps/LilycoveCity/scripts.pory"
	lock
# 124 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 125 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_ExpertM2AquaGone
# 126 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaRenovatedCavern, MSGBOX_DEFAULT
# 127 "data/maps/LilycoveCity/scripts.pory"
	release
# 128 "data/maps/LilycoveCity/scripts.pory"
	end
# 129 "data/maps/LilycoveCity/scripts.pory"

# 130 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2AquaGone::
# 131 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaLotGoneForGood, MSGBOX_DEFAULT
# 132 "data/maps/LilycoveCity/scripts.pory"
	release
# 133 "data/maps/LilycoveCity/scripts.pory"
	end
# 134 "data/maps/LilycoveCity/scripts.pory"

# 135 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor1::
# 136 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HeardTowerCalledSkyPillar, MSGBOX_NPC
# 137 "data/maps/LilycoveCity/scripts.pory"
	end
# 138 "data/maps/LilycoveCity/scripts.pory"

# 139 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_FatMan::
# 140 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SawTallTowerOnRoute131, MSGBOX_NPC
# 141 "data/maps/LilycoveCity/scripts.pory"
	end
# 142 "data/maps/LilycoveCity/scripts.pory"

# 143 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man1::
# 144 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 145 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_JustArrivedAndSawRarePokemon, MSGBOX_NPC
# 146 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_MAN_1, Common_Movement_FaceOriginalDirection
# 147 "data/maps/LilycoveCity/scripts.pory"
	end
# 148 "data/maps/LilycoveCity/scripts.pory"

# 149 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman1::
# 150 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 151 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HoneymoonVowToSeeRarePokemon, MSGBOX_NPC
# 152 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_WOMAN_1, Common_Movement_FaceOriginalDirection
# 153 "data/maps/LilycoveCity/scripts.pory"
	end
# 154 "data/maps/LilycoveCity/scripts.pory"

# 155 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CitySign::
# 156 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_CitySign, MSGBOX_SIGN
# 157 "data/maps/LilycoveCity/scripts.pory"
	end
# 158 "data/maps/LilycoveCity/scripts.pory"

# 159 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ContestHallSign::
# 160 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallSign, MSGBOX_SIGN
# 161 "data/maps/LilycoveCity/scripts.pory"
	end
# 162 "data/maps/LilycoveCity/scripts.pory"

# 163 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MotelSign::
# 164 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MotelSign, MSGBOX_SIGN
# 165 "data/maps/LilycoveCity/scripts.pory"
	end
# 166 "data/maps/LilycoveCity/scripts.pory"

# 167 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSign::
# 168 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 169 "data/maps/LilycoveCity/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 170 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_0x8004
# 171 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_MuseumSignNoPaintings
# 172 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSignPlayersExhibit, MSGBOX_DEFAULT
# 173 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 174 "data/maps/LilycoveCity/scripts.pory"
	end
# 175 "data/maps/LilycoveCity/scripts.pory"

# 176 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSignNoPaintings::
# 177 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSign, MSGBOX_DEFAULT
# 178 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 179 "data/maps/LilycoveCity/scripts.pory"
	end
# 180 "data/maps/LilycoveCity/scripts.pory"

# 181 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSign::
# 182 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 183 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_HarborSignFerryReady
# 184 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSignUnderConstruction, MSGBOX_DEFAULT
# 185 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 186 "data/maps/LilycoveCity/scripts.pory"
	end
# 187 "data/maps/LilycoveCity/scripts.pory"

# 188 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSignFerryReady::
# 189 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSign, MSGBOX_DEFAULT
# 190 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 191 "data/maps/LilycoveCity/scripts.pory"
	end
# 192 "data/maps/LilycoveCity/scripts.pory"

# 193 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_TrainerFanClubSign::
# 194 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TrainerFanClubSign, MSGBOX_SIGN
# 195 "data/maps/LilycoveCity/scripts.pory"
	end
# 196 "data/maps/LilycoveCity/scripts.pory"

# 197 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DepartmentStoreSign::
# 198 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DepartmentStoreSign, MSGBOX_SIGN
# 199 "data/maps/LilycoveCity/scripts.pory"
	end
# 200 "data/maps/LilycoveCity/scripts.pory"

# 201 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MoveDeletersHouseSign::
# 202 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MoveDeletersHouseSign, MSGBOX_SIGN
# 203 "data/maps/LilycoveCity/scripts.pory"
	end
# 204 "data/maps/LilycoveCity/scripts.pory"

# 205 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_WailmerTrainerGrunt::
# 206 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 207 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_MET_WAILMER_TRAINER, LilycoveCity_EventScript_MetWailmerTrainer
# 208 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 209 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 210 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 211 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GetLostMessingUpTraining, MSGBOX_DEFAULT
# 212 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceRight
# 213 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 214 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_WAILMER_TRAINER
# 215 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 216 "data/maps/LilycoveCity/scripts.pory"
	end
# 217 "data/maps/LilycoveCity/scripts.pory"

# 218 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MetWailmerTrainer::
# 219 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 220 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 221 "data/maps/LilycoveCity/scripts.pory"
	end
# 222 "data/maps/LilycoveCity/scripts.pory"

# 223 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt1::
# 224 "data/maps/LilycoveCity/scripts.pory"
	lock
# 225 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MovedLootIntoHideoutToday, MSGBOX_DEFAULT
# 226 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 227 "data/maps/LilycoveCity/scripts.pory"
	playse SE_PIN
# 228 "data/maps/LilycoveCity/scripts.pory"
	applymovement 13, Common_Movement_ExclamationMark
# 229 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 13
# 230 "data/maps/LilycoveCity/scripts.pory"
	delay 8
# 231 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 232 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_AquaGruntNoticePlayer, MSGBOX_DEFAULT
# 233 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 234 "data/maps/LilycoveCity/scripts.pory"
	applymovement 13, Common_Movement_WalkInPlaceLeft
# 235 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 13
# 236 "data/maps/LilycoveCity/scripts.pory"
	release
# 237 "data/maps/LilycoveCity/scripts.pory"
	end
# 238 "data/maps/LilycoveCity/scripts.pory"
	end
# 239 "data/maps/LilycoveCity/scripts.pory"

# 240 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt2::
# 241 "data/maps/LilycoveCity/scripts.pory"
	lock
# 242 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ChanceToDoBigThings, MSGBOX_DEFAULT
# 243 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 244 "data/maps/LilycoveCity/scripts.pory"
	playse SE_PIN
# 245 "data/maps/LilycoveCity/scripts.pory"
	applymovement 14, Common_Movement_ExclamationMark
# 246 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 14
# 247 "data/maps/LilycoveCity/scripts.pory"
	delay 8
# 248 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 249 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_AquaGruntNoticePlayer, MSGBOX_DEFAULT
# 250 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 251 "data/maps/LilycoveCity/scripts.pory"
	applymovement 14, Common_Movement_WalkInPlaceRight
# 252 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 14
# 253 "data/maps/LilycoveCity/scripts.pory"
	release
# 254 "data/maps/LilycoveCity/scripts.pory"
	end
# 255 "data/maps/LilycoveCity/scripts.pory"

# 256 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt3::
# 257 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DontGoNearCaveInCove, MSGBOX_NPC
# 258 "data/maps/LilycoveCity/scripts.pory"
	end
# 259 "data/maps/LilycoveCity/scripts.pory"

# 260 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt4::
# 261 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_IfWorldBecomesOurs, MSGBOX_NPC
# 262 "data/maps/LilycoveCity/scripts.pory"
	end
# 263 "data/maps/LilycoveCity/scripts.pory"

# 264 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SchoolKidM::
# 265 "data/maps/LilycoveCity/scripts.pory"
	lock
# 266 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 267 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DoYouKnowAboutBerryBlender, MSGBOX_YESNO
# 268 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, LilycoveCity_EventScript_KnowAboutBerryBlender
# 269 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DontKnowAboutBerryBlender
# 270 "data/maps/LilycoveCity/scripts.pory"
	release
# 271 "data/maps/LilycoveCity/scripts.pory"
	end
# 272 "data/maps/LilycoveCity/scripts.pory"

# 273 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_KnowAboutBerryBlender::
# 274 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_FasterSpinBetterPokeblocks, MSGBOX_DEFAULT
# 275 "data/maps/LilycoveCity/scripts.pory"
	return
# 276 "data/maps/LilycoveCity/scripts.pory"

# 277 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DontKnowAboutBerryBlender::
# 278 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ExplainBerryBlender, MSGBOX_DEFAULT
# 279 "data/maps/LilycoveCity/scripts.pory"
	return
# 280 "data/maps/LilycoveCity/scripts.pory"

# 281 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MovedLootIntoHideoutToday:
# 282 "data/maps/LilycoveCity/scripts.pory"
	.string "Fufufu…\pWe've finished moving more loot into\nour secret hideout today.$"
# 283 "data/maps/LilycoveCity/scripts.pory"

# 284 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ChanceToDoBigThings:
# 285 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm just a Grunt, so I have no idea what\nthe Boss is thinking…\lThat's OK with me, though!\pIf I just stay on Team Aqua, someday\nI'll be able to do something awesome!\lSomeday I'll be big time!$"
# 286 "data/maps/LilycoveCity/scripts.pory"

# 287 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_AquaGruntNoticePlayer:
# 288 "data/maps/LilycoveCity/scripts.pory"
	.string "Who-who are you?!\nI was just talking to myself!$"
# 289 "data/maps/LilycoveCity/scripts.pory"

# 290 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DontGoNearCaveInCove:
# 291 "data/maps/LilycoveCity/scripts.pory"
	.string "Hey, you!\p"
# 292 "data/maps/LilycoveCity/scripts.pory"
	.string "Don't go near the cave in the cove!\p"
# 293 "data/maps/LilycoveCity/scripts.pory"
	.string "Why? You don't need a reason why!\n"
# 294 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm an adult, so you just listen to me!$"
# 295 "data/maps/LilycoveCity/scripts.pory"

# 296 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_IfWorldBecomesOurs:
# 297 "data/maps/LilycoveCity/scripts.pory"
	.string "If this whole wide world becomes ours,\nTeam Aqua's, then the 101 Skitty at\lmy parents' house and Wailmer that\llive with me should be happier, too!$"
# 298 "data/maps/LilycoveCity/scripts.pory"

# 299 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_WailmerLeapOutOfWater:
# 300 "data/maps/LilycoveCity/scripts.pory"
	.string "There, Wailmer!\nNow leap out of the water and turn!$"
# 301 "data/maps/LilycoveCity/scripts.pory"

# 302 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GetLostMessingUpTraining:
# 303 "data/maps/LilycoveCity/scripts.pory"
	.string "Huh?\nWhat do you want?\pYou're messing with out trainer, so can\nyou, like, get lost?$"
# 304 "data/maps/LilycoveCity/scripts.pory"

# 305 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallInTown:
# 306 "data/maps/LilycoveCity/scripts.pory"
	.string "A great variety of Pokémon have\ngathered to show off how cute or\ltough they are in the Contest Hall!\pMe, I love a great variety of\nPokémon, so my heart is pounding with\lanticipation!$"
# 307 "data/maps/LilycoveCity/scripts.pory"

# 308 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_StrangeCaveInCove:
# 309 "data/maps/LilycoveCity/scripts.pory"
	.string "Have you seen that strange cave in\nthe cove at the edge of town?$"
# 310 "data/maps/LilycoveCity/scripts.pory"

# 311 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GoingToMoveDeleterForHMs:
# 312 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm going to teach my Pokémon some new\n"
# 313 "data/maps/LilycoveCity/scripts.pory"
	.string "moves for entering a Contest.\p"
# 314 "data/maps/LilycoveCity/scripts.pory"
	.string "So, I'm going to see the Move Deleter\n"
# 315 "data/maps/LilycoveCity/scripts.pory"
	.string "and make it forget HM moves.$"
# 316 "data/maps/LilycoveCity/scripts.pory"

# 317 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImFromKanto:
# 318 "data/maps/LilycoveCity/scripts.pory"
	.string "The Hoenn region shines with the\nbeauty of its waterways and verdant\lnature.\pIt makes me realize that it's just as\nlovely a place as home in the Kanto\lregion!$"
# 319 "data/maps/LilycoveCity/scripts.pory"

# 320 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaBeenTrainingWailmer:
# 321 "data/maps/LilycoveCity/scripts.pory"
	.string "Team Aqua's been training their\nWailmer in the cove.\pWe Sailors can't get our boats out\nto sea with them in the way!$"
# 322 "data/maps/LilycoveCity/scripts.pory"

# 323 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeonePuntedTeamAquaOut:
# 324 "data/maps/LilycoveCity/scripts.pory"
	.string "Ahoy, did you know?\p"
# 325 "data/maps/LilycoveCity/scripts.pory"
	.string "Someone punted Team Aqua out of\n"
# 326 "data/maps/LilycoveCity/scripts.pory"
	.string "the way for us!\p"
# 327 "data/maps/LilycoveCity/scripts.pory"
	.string "That got the Wailmer out of the cove,\n"
# 328 "data/maps/LilycoveCity/scripts.pory"
	.string "so we can get our boats out again.$"
# 329 "data/maps/LilycoveCity/scripts.pory"

# 330 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeoneStoleMyPokemon:
# 331 "data/maps/LilycoveCity/scripts.pory"
	.string "I was at the seaside inn, enjoying\na relaxing snooze to the sound of\lwaves…\pWhen someone stole my Pokémon!\nWho's the abductor?!\lTeam Aqua? Is it Team Aqua?!$"
# 332 "data/maps/LilycoveCity/scripts.pory"

# 333 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MissingPokemonCameBack:
# 334 "data/maps/LilycoveCity/scripts.pory"
	.string "My missing Pokémon…\n"
# 335 "data/maps/LilycoveCity/scripts.pory"
	.string "It came back without me noticing!$"
# 336 "data/maps/LilycoveCity/scripts.pory"

# 337 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImArtDealer:
# 338 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm an Art Dealer.\nI buy and sell fine art, especially\lpaintings.\pI've heard that the museum here has\nsome magnificent works on exhibit…$"
# 339 "data/maps/LilycoveCity/scripts.pory"

# 340 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SeaRemainsForeverYoung:
# 341 "data/maps/LilycoveCity/scripts.pory"
	.string "Even as we grow old and wrinkled,\nthe sea remains forever young with\lthe vivid brilliance of life…\pFwohoho fwohohohoho…$"
# 342 "data/maps/LilycoveCity/scripts.pory"

# 343 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SixtyYearsAgoHusbandProposed:
# 344 "data/maps/LilycoveCity/scripts.pory"
	.string "It was 60 years ago that my husband\nproposed to me here.\lThe sea remains as beautiful as ever.\pMufufufu mufufufufu…$"
# 345 "data/maps/LilycoveCity/scripts.pory"

# 346 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaRenovatedCavern:
# 347 "data/maps/LilycoveCity/scripts.pory"
	.string "Hmm, you know of the peculiar cavern in\nthis cove?\pIt was a natural formation, but then\nthat Team Aqua lot came along and\lmade their renovations.\pThey say they're “Team Aqua, for\nhumanity,” but to us they're just a\lbig pain!$"
# 348 "data/maps/LilycoveCity/scripts.pory"

# 349 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaLotGoneForGood:
# 350 "data/maps/LilycoveCity/scripts.pory"
	.string "That cave in the cove…\p"
# 351 "data/maps/LilycoveCity/scripts.pory"
	.string "I didn't notice it right away,\n"
# 352 "data/maps/LilycoveCity/scripts.pory"
	.string "but it's completely empty now.\p"
# 353 "data/maps/LilycoveCity/scripts.pory"
	.string "That Team Aqua lot, they must\n"
# 354 "data/maps/LilycoveCity/scripts.pory"
	.string "have gone away for good.$"
# 355 "data/maps/LilycoveCity/scripts.pory"

# 356 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_CitySign:
# 357 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove City\p"
# 358 "data/maps/LilycoveCity/scripts.pory"
	.string "“Where the land ends and the\n"
# 359 "data/maps/LilycoveCity/scripts.pory"
	.string "sea begins.”$"
# 360 "data/maps/LilycoveCity/scripts.pory"

# 361 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallSign:
# 362 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokémon Contest Hall\n"
# 363 "data/maps/LilycoveCity/scripts.pory"
	.string "“The gathering place for Trainers!”$"
# 364 "data/maps/LilycoveCity/scripts.pory"

# 365 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MotelSign:
# 366 "data/maps/LilycoveCity/scripts.pory"
	.string "Cove Lily Motel\p"
# 367 "data/maps/LilycoveCity/scripts.pory"
	.string "“Remember us as Cove Lily of\n"
# 368 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove.”$"
# 369 "data/maps/LilycoveCity/scripts.pory"

# 370 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSign:
# 371 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove Museum\p"
# 372 "data/maps/LilycoveCity/scripts.pory"
	.string "“Pokémon Masterpiece Collection\n"
# 373 "data/maps/LilycoveCity/scripts.pory"
	.string "on exhibit!”$"
# 374 "data/maps/LilycoveCity/scripts.pory"

# 375 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSignPlayersExhibit:
# 376 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove Museum\p"
# 377 "data/maps/LilycoveCity/scripts.pory"
	.string "“{PLAYER}'s Pokémon Collection\n"
# 378 "data/maps/LilycoveCity/scripts.pory"
	.string "on exhibit!”$"
# 379 "data/maps/LilycoveCity/scripts.pory"

# 380 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSignUnderConstruction:
# 381 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove City Harbor\p"
# 382 "data/maps/LilycoveCity/scripts.pory"
	.string "“The ferry S.S. Tidal is under\n"
# 383 "data/maps/LilycoveCity/scripts.pory"
	.string "construction in Slateport City.\p"
# 384 "data/maps/LilycoveCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 385 "data/maps/LilycoveCity/scripts.pory"
	.string "shortly.”$"
# 386 "data/maps/LilycoveCity/scripts.pory"

# 387 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSign:
# 388 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove City Harbor\p"
# 389 "data/maps/LilycoveCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 390 "data/maps/LilycoveCity/scripts.pory"
	.string "the ferry S.S. Tidal.”$"
# 391 "data/maps/LilycoveCity/scripts.pory"

# 392 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TrainerFanClubSign:
# 393 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokémon Trainer Fan Club\p"
# 394 "data/maps/LilycoveCity/scripts.pory"
	.string "The names of Trainers are scribbled\n"
# 395 "data/maps/LilycoveCity/scripts.pory"
	.string "all over the sign…$"
# 396 "data/maps/LilycoveCity/scripts.pory"

# 397 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DepartmentStoreSign:
# 398 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove Department Store\p"
# 399 "data/maps/LilycoveCity/scripts.pory"
	.string "“Overflowing with great merchandise\n"
# 400 "data/maps/LilycoveCity/scripts.pory"
	.string "and excitement!\p"
# 401 "data/maps/LilycoveCity/scripts.pory"
	.string "“A great place to find that something\n"
# 402 "data/maps/LilycoveCity/scripts.pory"
	.string "you need!”$"
# 403 "data/maps/LilycoveCity/scripts.pory"

# 404 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MoveDeletersHouseSign:
# 405 "data/maps/LilycoveCity/scripts.pory"
	.string "Move Deleter's House\p"
# 406 "data/maps/LilycoveCity/scripts.pory"
	.string "“Unwanted Pokémon moves deleted.”$"
# 407 "data/maps/LilycoveCity/scripts.pory"

# 408 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DoYouKnowAboutBerryBlender:
# 409 "data/maps/LilycoveCity/scripts.pory"
	.string "Do you know about the machine\n"
# 410 "data/maps/LilycoveCity/scripts.pory"
	.string "Berry Blender?$"
# 411 "data/maps/LilycoveCity/scripts.pory"

# 412 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_FasterSpinBetterPokeblocks:
# 413 "data/maps/LilycoveCity/scripts.pory"
	.string "People have to work together to get it\n"
# 414 "data/maps/LilycoveCity/scripts.pory"
	.string "to spin faster.\p"
# 415 "data/maps/LilycoveCity/scripts.pory"
	.string "The faster you can make it spin, the\n"
# 416 "data/maps/LilycoveCity/scripts.pory"
	.string "better {POKEBLOCK}s you can get, I've heard.$"
# 417 "data/maps/LilycoveCity/scripts.pory"

# 418 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ExplainBerryBlender:
# 419 "data/maps/LilycoveCity/scripts.pory"
	.string "It's used for making a kind of candy\n"
# 420 "data/maps/LilycoveCity/scripts.pory"
	.string "called a {POKEBLOCK}.\p"
# 421 "data/maps/LilycoveCity/scripts.pory"
	.string "If you give a good {POKEBLOCK} to a Pokémon,\n"
# 422 "data/maps/LilycoveCity/scripts.pory"
	.string "its condition will improve by a lot.$"
# 423 "data/maps/LilycoveCity/scripts.pory"

# 424 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HeardTowerCalledSkyPillar:
# 425 "data/maps/LilycoveCity/scripts.pory"
	.string "I heard there's a tower somewhere out\non the sea routes.\pIt's called the Sky Pillar, I hear.$"
# 426 "data/maps/LilycoveCity/scripts.pory"

# 427 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SawTallTowerOnRoute131:
# 428 "data/maps/LilycoveCity/scripts.pory"
	.string "I saw this tall tower somewhere\naround Route 131.\pCould that possibly be…?$"
# 429 "data/maps/LilycoveCity/scripts.pory"

# 430 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_JustArrivedAndSawRarePokemon:
# 431 "data/maps/LilycoveCity/scripts.pory"
	.string "We just arrived here on our honeymoon\nvacation.\pWe happened to see a Dragon-type\nPokémon flying way up in the sky.\pDo cool Pokémon like that live in the\nHoenn region?$"
# 432 "data/maps/LilycoveCity/scripts.pory"

# 433 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HoneymoonVowToSeeRarePokemon:
# 434 "data/maps/LilycoveCity/scripts.pory"
	.string "On our honeymoon, we vowed to see as\nmany rare Pokémon as we can.\pSo we were delighted to see a rare\nPokémon as soon as we arrived.\pI mean, we are totally happy!$"

LilycoveCity_EventScript_Rival::
# 440 "data/maps/LilycoveCity/scripts.pory"
	lock
# 441 "data/maps/LilycoveCity/scripts.pory"
	delay 8
# 442 "data/maps/LilycoveCity/scripts.pory"
	opendoor 27, 6
# 443 "data/maps/LilycoveCity/scripts.pory"
	waitdooranim
# 444 "data/maps/LilycoveCity/scripts.pory"
	addobject LOCALID_RIVAL
# 445 "data/maps/LilycoveCity/scripts.pory"
	delay 8
# 446 "data/maps/LilycoveCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 447 "data/maps/LilycoveCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 448 "data/maps/LilycoveCity/scripts.pory"
	playse SE_PIN
# 449 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 450 "data/maps/LilycoveCity/scripts.pory"
	waitmovement LOCALID_RIVAL
# 451 "data/maps/LilycoveCity/scripts.pory"
	waitse
# 452 "data/maps/LilycoveCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_Movement_PlayerStepBack
# 453 "data/maps/LilycoveCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 454 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkDown
# 455 "data/maps/LilycoveCity/scripts.pory"
	waitmovement LOCALID_RIVAL
# 456 "data/maps/LilycoveCity/scripts.pory"
	closedoor 27, 6
# 457 "data/maps/LilycoveCity/scripts.pory"
	waitdooranim
# 458 "data/maps/LilycoveCity/scripts.pory"
	delay 16
# 459 "data/maps/LilycoveCity/scripts.pory"
	checkplayergender
# 460 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LilycoveCity_EventScript_Rival_2
# 464 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 465 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_Rival_Text_1
LilycoveCity_EventScript_Rival_1:
# 467 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 468 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceUp
# 469 "data/maps/LilycoveCity/scripts.pory"
	waitmovement LOCALID_RIVAL
# 470 "data/maps/LilycoveCity/scripts.pory"
	checkplayergender
# 471 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LilycoveCity_EventScript_Rival_6
# 474 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_Rival_Text_3
LilycoveCity_EventScript_Rival_5:
# 476 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 477 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceDown
# 478 "data/maps/LilycoveCity/scripts.pory"
	waitmovement LOCALID_RIVAL
# 479 "data/maps/LilycoveCity/scripts.pory"
	checkplayergender
# 480 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LilycoveCity_EventScript_Rival_10
# 494 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_Rival_Text_8
# 495 "data/maps/LilycoveCity/scripts.pory"
	delay 16
# 496 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_Rival_Text_9
LilycoveCity_EventScript_Rival_9:
# 498 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 499 "data/maps/LilycoveCity/scripts.pory"
	checkplayergender
# 500 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LilycoveCity_EventScript_Rival_14
# 521 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 522 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_Rival_24
# 523 "data/maps/LilycoveCity/scripts.pory"
	case 1, LilycoveCity_EventScript_Rival_25
# 524 "data/maps/LilycoveCity/scripts.pory"
	case 2, LilycoveCity_EventScript_Rival_26
LilycoveCity_EventScript_Rival_22:
# 526 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_Rival_Text_15, MSGBOX_YESNO
# 527 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LilycoveCity_EventScript_Rival_31
# 530 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_Rival_Text_17
LilycoveCity_EventScript_Rival_30:
# 532 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 533 "data/maps/LilycoveCity/scripts.pory"
	delay 8
# 534 "data/maps/LilycoveCity/scripts.pory"
	dofieldeffectsparkle 27, 8, 0
# 535 "data/maps/LilycoveCity/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 536 "data/maps/LilycoveCity/scripts.pory"
	delay 16
# 537 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_Rival_Text_18
# 538 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 539 "data/maps/LilycoveCity/scripts.pory"
	delay 24
# 540 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_Rival_Text_19
LilycoveCity_EventScript_Rival_13:
# 542 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 543 "data/maps/LilycoveCity/scripts.pory"
	delay 8
# 544 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceDown
# 545 "data/maps/LilycoveCity/scripts.pory"
	waitmovement LOCALID_RIVAL
# 546 "data/maps/LilycoveCity/scripts.pory"
	delay 48
# 547 "data/maps/LilycoveCity/scripts.pory"
	setfieldeffectargument 0, 1
# 548 "data/maps/LilycoveCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 549 "data/maps/LilycoveCity/scripts.pory"
	delay 16
# 550 "data/maps/LilycoveCity/scripts.pory"
	removeobject LOCALID_RIVAL
# 551 "data/maps/LilycoveCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 552 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 553 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 554 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 555 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_TEMP_2, 1
# 556 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_HIDE_ROUTE_122_AQUA_GRUNT
# 557 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_LEVEL_CAP_VARIABLE, 60
# 558 "data/maps/LilycoveCity/scripts.pory"
	release
	end

LilycoveCity_EventScript_Rival_2:
# 461 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 462 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_Rival_Text_0
	goto LilycoveCity_EventScript_Rival_1

LilycoveCity_EventScript_Rival_6:
# 472 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_Rival_Text_2
	goto LilycoveCity_EventScript_Rival_5

LilycoveCity_EventScript_Rival_10:
# 481 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_Rival_Text_4
# 482 "data/maps/LilycoveCity/scripts.pory"
	delay 16
# 483 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_Rival_Text_5
# 484 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 485 "data/maps/LilycoveCity/scripts.pory"
	delay 8
# 486 "data/maps/LilycoveCity/scripts.pory"
	playse SE_PIN
# 487 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 488 "data/maps/LilycoveCity/scripts.pory"
	waitmovement LOCALID_RIVAL
# 489 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_Rival_Text_6
# 490 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 491 "data/maps/LilycoveCity/scripts.pory"
	delay 24
# 492 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_Rival_Text_7
	goto LilycoveCity_EventScript_Rival_9

LilycoveCity_EventScript_Rival_14:
# 501 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 502 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_Rival_19
# 503 "data/maps/LilycoveCity/scripts.pory"
	case 1, LilycoveCity_EventScript_Rival_20
# 504 "data/maps/LilycoveCity/scripts.pory"
	case 2, LilycoveCity_EventScript_Rival_21
LilycoveCity_EventScript_Rival_17:
# 506 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_Rival_Text_10
# 507 "data/maps/LilycoveCity/scripts.pory"
	delay 16
# 508 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_Rival_Text_11
# 509 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 510 "data/maps/LilycoveCity/scripts.pory"
	delay 8
# 511 "data/maps/LilycoveCity/scripts.pory"
	dofieldeffectsparkle 27, 8, 0
# 512 "data/maps/LilycoveCity/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 513 "data/maps/LilycoveCity/scripts.pory"
	delay 24
# 514 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_Rival_Text_12, MSGBOX_YESNO
# 515 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LilycoveCity_EventScript_Rival_27
# 518 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_Rival_Text_14
	goto LilycoveCity_EventScript_Rival_13

LilycoveCity_EventScript_Rival_19:
# 502 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TREECKO, LilycoveCity_Text_MayDefeat
	goto LilycoveCity_EventScript_Rival_17

LilycoveCity_EventScript_Rival_20:
# 503 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TORCHIC, LilycoveCity_Text_MayDefeat
	goto LilycoveCity_EventScript_Rival_17

LilycoveCity_EventScript_Rival_21:
# 504 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_MUDKIP, LilycoveCity_Text_MayDefeat
	goto LilycoveCity_EventScript_Rival_17

LilycoveCity_EventScript_Rival_24:
# 522 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TREECKO, LilycoveCity_Text_BrendanDefeat
	goto LilycoveCity_EventScript_Rival_22

LilycoveCity_EventScript_Rival_25:
# 523 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TORCHIC, LilycoveCity_Text_BrendanDefeat
	goto LilycoveCity_EventScript_Rival_22

LilycoveCity_EventScript_Rival_26:
# 524 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_MUDKIP, LilycoveCity_Text_BrendanDefeat
	goto LilycoveCity_EventScript_Rival_22

LilycoveCity_EventScript_Rival_27:
# 516 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_Rival_Text_13
	goto LilycoveCity_EventScript_Rival_13

LilycoveCity_EventScript_Rival_31:
# 528 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_Rival_Text_16
	goto LilycoveCity_EventScript_Rival_30


# 562 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Movement_PlayerStepBack:
# 563 "data/maps/LilycoveCity/scripts.pory"
	lock_facing_direction
# 564 "data/maps/LilycoveCity/scripts.pory"
	walk_down
# 565 "data/maps/LilycoveCity/scripts.pory"
	walk_in_place_up
# 566 "data/maps/LilycoveCity/scripts.pory"
	unlock_facing_direction
	step_end

LilycoveCity_EventScript_Collector::
# 578 "data/maps/LilycoveCity/scripts.pory"
	lock
# 579 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 580 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_ALTARIANITE, LilycoveCity_EventScript_Collector_2
# 586 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_Collector_Text_1
# 587 "data/maps/LilycoveCity/scripts.pory"
	special ChoosePartyMon
# 588 "data/maps/LilycoveCity/scripts.pory"
	waitstate
# 589 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq LilycoveCity_EventScript_Collector_5
# 594 "data/maps/LilycoveCity/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 595 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, SPECIES_ALTARIA
	goto_if_ne LilycoveCity_EventScript_Collector_8
# 601 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_RECEIVED_ALTARIANITE
# 602 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_Collector_Text_3
# 603 "data/maps/LilycoveCity/scripts.pory"
	giveitem ITEM_ALTARIANITE, 1
# 604 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_Collector_Text_4
# 605 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 606 "data/maps/LilycoveCity/scripts.pory"
	release
	end

LilycoveCity_EventScript_Collector_2:
# 581 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_Collector_Text_0
# 582 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 583 "data/maps/LilycoveCity/scripts.pory"
	release
	end

LilycoveCity_EventScript_Collector_5:
# 590 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 591 "data/maps/LilycoveCity/scripts.pory"
	release
	end

LilycoveCity_EventScript_Collector_8:
# 596 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_Collector_Text_2
# 597 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 598 "data/maps/LilycoveCity/scripts.pory"
	release
	end


LilycoveCity_EventScript_Rival_Text_0:
# 462 "data/maps/LilycoveCity/scripts.pory"
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Heeey! {PLAYER}!\nDon't tell me…\pAre you here for the shopping, too,\n{PLAYER}?$"

LilycoveCity_EventScript_Rival_Text_1:
# 465 "data/maps/LilycoveCity/scripts.pory"
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: Hey, if it isn't {PLAYER}!\nDid you come to do some shopping, too?$"

LilycoveCity_EventScript_Rival_Text_2:
# 472 "data/maps/LilycoveCity/scripts.pory"
	.string "We're right in front of the famous\nLilycove Department Store, after all!\pWhen I saw you, I figured maybe you'd\ncome here to do some shopping, same\las me.$"

LilycoveCity_EventScript_Rival_Text_3:
# 474 "data/maps/LilycoveCity/scripts.pory"
	.string "You know what I'm talking about…\nThe Lilycove Department Store!\pMy dad asked me to pick him up a few\nthings here.$"

LilycoveCity_EventScript_Rival_Text_4:
# 481 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm afraid I already bought up tons of\nstuff!\pLike Pokémon Dolls…and posters…and…$"

LilycoveCity_EventScript_Rival_Text_5:
# 483 "data/maps/LilycoveCity/scripts.pory"
	.string "B-but--That's not all I've been doing, of\ncourse!\pI've also caught tons of different\nPokémon, and I've been raising them\lwell, too!$"

LilycoveCity_EventScript_Rival_Text_6:
# 489 "data/maps/LilycoveCity/scripts.pory"
	.string "Aughhh!\nYou think I'm lying, don't you!\pThat little hum totally said you think\nI'm lying!$"

LilycoveCity_EventScript_Rival_Text_7:
# 492 "data/maps/LilycoveCity/scripts.pory"
	.string "I think the bigger question here is\nwhether you're raising your Pokémon\lright, not me!\pS-so that settles it!\nLet's have a battle!\pLet's test my team and see how\nthey stack up against your passion\lfor Pokémon, {PLAYER}!$"

LilycoveCity_EventScript_Rival_Text_8:
# 494 "data/maps/LilycoveCity/scripts.pory"
	.string "It's not like I'm here to buy Dolls or\nsomething, r-right!$"

LilycoveCity_EventScript_Rival_Text_9:
# 496 "data/maps/LilycoveCity/scripts.pory"
	.string "A-anyway, it feels like it's been ages\nsince we last ran into each other.\pHow about I battle you so you can\nsee which one of us is doing a better\ljob raising our Pokémon?\pThough I think you and I both know who\nthe winner is gonna be, {PLAYER}!$"

LilycoveCity_EventScript_Rival_Text_10:
# 506 "data/maps/LilycoveCity/scripts.pory"
	.string "Ahhh, this reminds me of the battle I\nhad with you back on Route 103!\pYou were able to become this strong\nbecause you battled me back then,\lright, {PLAYER}?$"

LilycoveCity_EventScript_Rival_Text_11:
# 508 "data/maps/LilycoveCity/scripts.pory"
	.string "…What would you think if I said\nsomething like that? Hee hee…\pI'm actually thinking that it's\nabout time I went back to Littleroot,\lthough.\pI've caught a lot of different Pokémon,\nand my Pokédex is pretty complete, so\lI think I should go show it to my dad.$"

LilycoveCity_EventScript_Rival_Text_12:
# 514 "data/maps/LilycoveCity/scripts.pory"
	.string "…Huh?\pDid something just…sparkle in your\nBag?\pIt was like the light from that\nMeteorite…\p…Oh, nothing!\pSorry!\nJust forget it!\lI'm probably imagining things!\p{PLAYER}, what are you going to do?\pYou going to collect all the Gym\nBadges and take on the Pokémon\lLeague challenge?$"

LilycoveCity_EventScript_Rival_Text_13:
# 516 "data/maps/LilycoveCity/scripts.pory"
	.string "Typical, {PLAYER}!\pThen while you're collecting your\nBadges, I guess I'll go and complete\lmy Pokédex!\pI guess I'll be off then!$"

LilycoveCity_EventScript_Rival_Text_14:
# 518 "data/maps/LilycoveCity/scripts.pory"
	.string "What, really?\pWell, now you've got me curious!\pIf you aren't focusing on the League,\nthen what else are you hoping to\lachieve?\lI can't wait to see what you'll do!\pBut let's definitely meet up again\nsomewhere!$"

LilycoveCity_EventScript_Rival_Text_15:
# 526 "data/maps/LilycoveCity/scripts.pory"
	.string "Boy, that stings a bit…\pI had a head start on you as a Pokémon\nTrainer, but still…\pI, uh…\pI'm planning on going home to\nLittleroot.\pYou know how I've been helping out my\ndad with the Pokédex, and it's been\lcoming together pretty decently.\pSo…I ought to go back home and how it\nto him.\p{PLAYER}, what are you gonna do?\pYou still thinking of collecting all the\nGym Badges and taking on the Pokémon\lLeague challenge?$"

LilycoveCity_EventScript_Rival_Text_16:
# 528 "data/maps/LilycoveCity/scripts.pory"
	.string "Yeah?\nI guess I'm not surprised.\pDo your best.\nYou know I'm behind you.$"

LilycoveCity_EventScript_Rival_Text_17:
# 530 "data/maps/LilycoveCity/scripts.pory"
	.string "Huh? Really?\nI've gotta say, I always kind of\lthought that you'd go all the way and\laim to be Champion.$"

LilycoveCity_EventScript_Rival_Text_18:
# 537 "data/maps/LilycoveCity/scripts.pory"
	.string "…Uhhh. Huh? Did you…\n{PLAYER}, I think there's something…\lThere's something, like, sparkling in\lyour Bag…\pIt's the same kinda light as that\nMeteorite had, the one you showed me\lin Lavaridge…$"

LilycoveCity_EventScript_Rival_Text_19:
# 540 "data/maps/LilycoveCity/scripts.pory"
	.string "Ahhh, never mind!\pJust…\nGood luck out there!$"

LilycoveCity_EventScript_Collector_Text_0:
# 581 "data/maps/LilycoveCity/scripts.pory"
	.string "This is where fans of Pokémon\nbattles hold passionate discussions\levery day!$"

LilycoveCity_EventScript_Collector_Text_1:
# 586 "data/maps/LilycoveCity/scripts.pory"
	.string "This is where fans of Pokémon\nbattles hold passionate discussions\levery day!\pTo commemorate our first meeting, how\nabout a quiz?\pWhat Pokémon does Winona the\nGym Leader always have with her?\lTry and show me!$"

LilycoveCity_EventScript_Collector_Text_2:
# 596 "data/maps/LilycoveCity/scripts.pory"
	.string "Too bad! A miss!$"

LilycoveCity_EventScript_Collector_Text_3:
# 602 "data/maps/LilycoveCity/scripts.pory"
	.string "I expected nothing less from you!\pYour Altaria looks pretty amazing, too,\ndoesn't it?\lYou can make it, can't you?$"

LilycoveCity_EventScript_Collector_Text_4:
# 604 "data/maps/LilycoveCity/scripts.pory"
	.string "Yeah, yeah, hang in there!$"

LilycoveCity_Text_MayDefeat::
# 569 "data/maps/LilycoveCity/scripts.pory"
	.string "…$"

LilycoveCity_Text_BrendanDefeat::
# 573 "data/maps/LilycoveCity/scripts.pory"
	.string "Hmm…\nYou've raised your team quite a bit.$"
