# 1 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 2 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 3 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Chairman::
# 4 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 5 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 6 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_unset FLAG_ENTERED_CONTEST, SlateportCity_PokemonFanClub_EventScript_ChairmanNotEnteredContest
# 7 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN, SlateportCity_PokemonFanClub_EventScript_MeetChairman
# 8 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	switch VAR_SLATEPORT_FAN_CLUB_STATE
# 9 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 0, SlateportCity_PokemonFanClub_EventScript_ChairmanFirstAssessment
# 10 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 1, SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon
# 11 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 2, SlateportCity_PokemonFanClub_EventScript_NoMoreScarves
# 12 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 13 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 14 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 15 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanFirstAssessment::
# 16 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_SLATEPORT_FAN_CLUB_STATE, 1
# 17 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_AllowMeToExamineYourPokemon, MSGBOX_DEFAULT
# 18 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon
# 19 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 20 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 21 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon::
# 22 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_2, 0
# 23 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_set FLAG_RECEIVED_YELLOW_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 24 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_set FLAG_RECEIVED_GREEN_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 25 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_set FLAG_RECEIVED_PINK_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 26 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_set FLAG_RECEIVED_BLUE_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 27 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_set FLAG_RECEIVED_RED_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
# 28 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_TEMP_2, CONTEST_CATEGORIES_COUNT, SlateportCity_PokemonFanClub_EventScript_ReceivedAllScarves
# 29 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_SLATEPORT_FAN_CLUB_STATE, 2, SlateportCity_PokemonFanClub_EventScript_NoMoreScarves
# 30 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_HowIsYourPokemonGrowing, MSGBOX_DEFAULT
# 31 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon
# 32 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 33 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 34 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_NoMoreScarves::
# 35 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_NothingElseToGiveYou, MSGBOX_DEFAULT
# 36 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 37 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 38 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 39 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon::
# 40 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_HmHmISee, MSGBOX_DEFAULT
# 41 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 0
# 42 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_RECEIVED_YELLOW_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonTough
# 43 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_RECEIVED_GREEN_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonSmart
# 44 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_RECEIVED_PINK_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonCute
# 45 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_RECEIVED_BLUE_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonBeauty
# 46 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_unset FLAG_RECEIVED_RED_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonCool
# 47 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 48 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	switch VAR_TEMP_1
# 49 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 0, SlateportCity_PokemonFanClub_EventScript_NoHighConditions
# 50 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 1, SlateportCity_PokemonFanClub_EventScript_GiveRedScarf
# 51 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 2, SlateportCity_PokemonFanClub_EventScript_GiveBlueScarf
# 52 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 3, SlateportCity_PokemonFanClub_EventScript_GivePinkScarf
# 53 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 4, SlateportCity_PokemonFanClub_EventScript_GiveGreenScarf
# 54 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 5, SlateportCity_PokemonFanClub_EventScript_GiveYellowScarf
# 55 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 56 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 57 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 58 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ReceivedAllScarves::
# 59 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_SLATEPORT_FAN_CLUB_STATE, 2
# 60 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 61 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 62 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf::
# 63 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	addvar VAR_TEMP_2, 1
# 64 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 65 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 66 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_NoHighConditions::
# 67 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_GiveMonMorePokeblocks, MSGBOX_DEFAULT
# 68 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 69 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 70 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 71 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveRedScarf::
# 72 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_RED_SCARF
# 73 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 74 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 75 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_RED_SCARF
# 76 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_RED_SCARF
# 77 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainRedScarf, MSGBOX_DEFAULT
# 78 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 79 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 80 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 81 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveBlueScarf::
# 82 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_BLUE_SCARF
# 83 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 84 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 85 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_BLUE_SCARF
# 86 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_BLUE_SCARF
# 87 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainBlueScarf, MSGBOX_DEFAULT
# 88 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 89 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 90 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 91 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GivePinkScarf::
# 92 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_PINK_SCARF
# 93 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 94 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 95 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_PINK_SCARF
# 96 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_PINK_SCARF
# 97 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainPinkScarf, MSGBOX_DEFAULT
# 98 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 99 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 100 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 101 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveGreenScarf::
# 102 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_GREEN_SCARF
# 103 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 104 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 105 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_GREEN_SCARF
# 106 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_GREEN_SCARF
# 107 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainGreenScarf, MSGBOX_DEFAULT
# 108 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 109 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 110 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 111 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveYellowScarf::
# 112 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkitemspace ITEM_YELLOW_SCARF
# 113 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
# 114 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 115 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_YELLOW_SCARF
# 116 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_YELLOW_SCARF
# 117 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainYellowScarf, MSGBOX_DEFAULT
# 118 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 119 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 120 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 121 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf::
# 122 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_NoSpaceForReward, MSGBOX_DEFAULT
# 123 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 124 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 125 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 126 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonCool::
# 127 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonCool
# 128 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonCool
# 129 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 130 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 131 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonCool::
# 132 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 1
# 133 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 134 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 135 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonBeauty::
# 136 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonBeauty
# 137 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonBeauty
# 138 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 139 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 140 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonBeauty::
# 141 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 2
# 142 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 143 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 144 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonCute::
# 145 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonCute
# 146 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonCute
# 147 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 148 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 149 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonCute::
# 150 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 3
# 151 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 152 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 153 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonSmart::
# 154 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonSmart
# 155 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonSmart
# 156 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 157 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 158 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonSmart::
# 159 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 4
# 160 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 161 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 162 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_CheckMonTough::
# 163 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonTough
# 164 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonTough
# 165 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 166 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 167 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SetMonTough::
# 168 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 5
# 169 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 170 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 171 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanNotEnteredContest::
# 172 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN, SlateportCity_PokemonFanClub_EventScript_ChairmanEnterContest
# 173 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MeetChairman, MSGBOX_DEFAULT
# 174 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN
# 175 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 176 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 177 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 178 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ChairmanEnterContest::
# 179 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_LikeToSeeEnteredContestPokemon, MSGBOX_DEFAULT
# 180 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 181 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 182 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 183 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_MeetChairman::
# 184 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MeetChairman, MSGBOX_DEFAULT
# 185 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN
# 186 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	return
# 187 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 188 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_SootheBellWoman::
# 189 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 190 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 191 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_RECEIVED_SOOTHE_BELL, SlateportCity_PokemonFanClub_EventScript_ReceivedSootheBell
# 192 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ShowMePokemonThatLoveYou, MSGBOX_DEFAULT
# 193 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 194 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_ge VAR_RESULT, FRIENDSHIP_150_TO_199, SlateportCity_PokemonFanClub_EventScript_GiveSootheBell
# 195 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 196 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 197 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 198 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_GiveSootheBell::
# 199 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playse SE_PIN
# 200 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 201 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement 0
# 202 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_Delay48
# 203 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement 0
# 204 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_PokemonAdoresYou, MSGBOX_DEFAULT
# 205 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 206 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 207 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_SOOTHE_BELL
# 208 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 209 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 210 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 211 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_ReceivedSootheBell::
# 212 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_TreatPokemonWithLove, MSGBOX_DEFAULT
# 213 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 214 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 215 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 216 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Man::
# 217 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_PokemonDontLikeFainting, MSGBOX_NPC
# 218 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 219 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 220 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Twin::
# 221 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonEnjoyedProtein, MSGBOX_NPC
# 222 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 223 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 224 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Skitty::
# 225 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 226 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 227 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitse
# 228 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 229 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_Skitty, MSGBOX_DEFAULT
# 230 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmoncry
# 231 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 232 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 233 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 234 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Zigzagoon::
# 235 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 236 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 237 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitse
# 238 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 239 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_Zigzagoon, MSGBOX_DEFAULT
# 240 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmoncry
# 241 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 242 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 243 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 244 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Azumarill::
# 245 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 246 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 247 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitse
# 248 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 249 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_Azumarill, MSGBOX_DEFAULT
# 250 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmoncry
# 251 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
# 252 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	end
# 253 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 254 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_MeetChairman:
# 255 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Er-hem! I am the chairman of the\nPokémon Fan Club!\pBeing the Chairman, I am naturally\nthe most important!\pNo one could best me when it comes\nto raising Pokémon.\lNo one!\pIn any contest, my victory is a\nforegone conclusion!\pBut that would deprive others of\ntheir enjoyment.\pSo I now while away my time\nexamining the Pokémon of others.\pIt is marvelous to witness how others\nhave raised Pokémon.\pThe contented faces of properly\nraised Pokémon…\pThe kind and loving gazes of their\nTrainers…\pMy heart is overwhelmed-there is so\nmuch happiness.$"
# 256 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 257 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_LikeToSeeEnteredContestPokemon:
# 258 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "The Pokémon of a Trainer who has\n"
# 259 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "entered a Pokémon Contest…\l"
# 260 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "That, I would like to see.$"
# 261 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 262 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_AllowMeToExamineYourPokemon:
# 263 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Er-hem! I am the chairman of the\nPokémon Fan Club!\pBeing the Chairman, I am naturally\nthe most important!\pNo one could best me when it comes\nto raising Pokémon.\lNo one!\pIn any contest, my victory is a\nforegone conclusion!\pBut that would deprive others of\ntheir enjoyment.\pSo I now while away my time\nexamining the Pokémon of others.\pIt is marvelous to witness how others\nhave raised Pokémon.\pThe contented faces of properly\nraised Pokémon…\pThe kind and loving gazes of their\nTrainers…\pMy heart is overwhelmed-there is so\nmuch happiness.\pOh my!\nExcuse me!\lI seem to have nattered on far too\llong!\pPlease, do allow me to examine your\nPokémon and see how it's grown.\pHmmhm…\nI see…\pHmmm… It's not bad, but it's not\ngood, either.\pYou, the Trainer, must put more\neffort into raising this Pokémon!\pFor instance, may I suggest that\nyou give it more Pokéblocks?$"
# 264 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 265 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_HowIsYourPokemonGrowing:
# 266 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "How is your Pokémon growing?\n"
# 267 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Allow me to examine it.$"
# 268 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 269 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_HmHmISee:
# 270 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Hmmhm…\n"
# 271 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "I see…$"
# 272 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 273 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_GiveMonMorePokeblocks:
# 274 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Hmmm… It's not bad, but it's not\ngood, either.\pYou, the Trainer, must put more\neffort into raising this Pokémon!\pFor instance, may I suggest that\nyou give it more Pokéblocks?$"
# 275 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 276 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_NoSpaceForReward:
# 277 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Oh, my…\p"
# 278 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Your Pokémon is growing quite well,\n"
# 279 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "so you deserve a reward.\p"
# 280 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Unfortunately, you have no space for\n"
# 281 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "this in your Bag.$"
# 282 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 283 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis:
# 284 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Your {STR_VAR_1}, it is growing in\n"
# 285 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "a most impressive manner!\l"
# 286 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "It is one fine specimen!\p"
# 287 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "But! If you were to give it this,\n"
# 288 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "it would grow even better! Indeed!$"
# 289 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 290 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ExplainRedScarf:
# 291 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Let a Pokémon hold that Red Scarf.\p"
# 292 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Everyone will recognize the coolness\n"
# 293 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "of that Pokémon!$"
# 294 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 295 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ExplainBlueScarf:
# 296 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Let a Pokémon hold that Blue Scarf.\p"
# 297 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Its beauty will be accentuated much\n"
# 298 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "more than now!$"
# 299 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 300 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ExplainPinkScarf:
# 301 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Let a Pokémon hold that Pink Scarf.\p"
# 302 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "It will draw out the cuteness of\n"
# 303 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "the Pokémon some more!$"
# 304 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 305 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ExplainGreenScarf:
# 306 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Let a Pokémon hold that Green Scarf.\p"
# 307 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "That will enhance the\n"
# 308 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "smartness of Pokémon!$"
# 309 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 310 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ExplainYellowScarf:
# 311 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Let a Pokémon hold that Yellow Scarf.\p"
# 312 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "It will bolster your Pokémon's\n"
# 313 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "toughness so much more!$"
# 314 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 315 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_NothingElseToGiveYou:
# 316 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "I'm sorry, but I've nothing else to\n"
# 317 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "give you! None at all!\p"
# 318 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "After all, you're blessed with the gift\n"
# 319 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "of raising Pokémon without resorting\l"
# 320 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "to any items!$"
# 321 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 322 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_ShowMePokemonThatLoveYou:
# 323 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "I love seeing Pokémon that are very\nfriendly toward their Trainers.\pPokémon are very sensitive to the\nfeelings of their Trainers.\pIf you treat your Pokémon with love\nand care, they'll become friendly.\pWhen you Pokémon become friendly,\nplease come show me.$"
# 324 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 325 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_PokemonAdoresYou:
# 326 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Your Pokémon really adores you.\p"
# 327 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "For you, a most compassionate\n"
# 328 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Trainer, a gift from the Fan Club!$"
# 329 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 330 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_TreatPokemonWithLove:
# 331 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Pokémon are very sensitive to\n"
# 332 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "the feelings of their Trainers.\p"
# 333 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "If you treat your Pokémon with love\n"
# 334 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "and care, they'll love you back.$"
# 335 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 336 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_PokemonDontLikeFainting:
# 337 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "If you keep letting a Pokémon\nfaint in battle, it'll start feeling\lsorry for itself.\pSoon, it will become less trusting of\nits Trainer.\pIt other words, it certainly won't\nbecome friendly toward you.$"
# 338 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 339 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_MonEnjoyedProtein:
# 340 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Do Pokémon enjoy having items used\n"
# 341 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "on them?\p"
# 342 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Mine acted really happy when I gave\n"
# 343 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "it some Protein.$"
# 344 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 345 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_Skitty:
# 346 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Fffnyaaaah…$"
# 347 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 348 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_Zigzagoon:
# 349 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Kyuuu…$"
# 350 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"

# 351 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_Text_Azumarill:
# 352 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Marimari?$"

SlateportCity_PokemonFanClub_MapScripts::
# 357 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SlateportCity_PokemonFanClub_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 359 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	map_script_2 VAR_TEMP_3, 0, SlateportCity_PokemonFanClub_EventScript_Diancite
	.2byte 0


SlateportCity_PokemonFanClub_EventScript_SwaggerMan::
# 364 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_EventScript_SwaggerMan_Text_0
# 365 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	closemessage
# 366 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
	end


Fufrou_Haircut_Main::
# 374 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 375 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	faceplayer
# 376 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox Fufrou_Haircut_Main_Text_0, MSGBOX_YESNO
# 377 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Fufrou_Haircut_Main_2
Fufrou_Haircut_Main_1:
# 380 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call Furfrou_CheckIfFurfrouInParty
# 381 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox Fufrou_Haircut_Main_Text_1
# 382 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	special ChoosePartyMon
# 383 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitstate
# 384 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Fufrou_Haircut_Main_5
Fufrou_Haircut_Main_4:
# 387 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 388 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq Fufrou_Haircut_Main_8
# 394 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call Furfrou_CheckIfSelectedMonIsFurfrou
# 395 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto Furfrou_ChooseWhichStyle
	return

Fufrou_Haircut_Main_2:
# 378 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto Furfrou_Exit
	goto Fufrou_Haircut_Main_1

Fufrou_Haircut_Main_5:
# 385 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto Furfrou_Exit
	goto Fufrou_Haircut_Main_4

Fufrou_Haircut_Main_8:
# 389 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox Fufrou_Haircut_Main_Text_2
# 390 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	closemessage
# 391 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
	end


Furfrou_CheckIfFurfrouInParty::
# 399 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkspecies SPECIES_FURFROU, NO_PARTY_SCREEN
# 400 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Furfrou_CheckIfFurfrouInParty_2
# 403 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkspecies SPECIES_FURFROU_NATURAL, NO_PARTY_SCREEN
# 404 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Furfrou_CheckIfFurfrouInParty_5
# 407 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkspecies SPECIES_FURFROU_HEART, NO_PARTY_SCREEN
# 408 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Furfrou_CheckIfFurfrouInParty_8
# 411 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkspecies SPECIES_FURFROU_STAR, NO_PARTY_SCREEN
# 412 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Furfrou_CheckIfFurfrouInParty_11
# 415 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkspecies SPECIES_FURFROU_DIAMOND, NO_PARTY_SCREEN
# 416 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Furfrou_CheckIfFurfrouInParty_14
# 419 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkspecies SPECIES_FURFROU_DEBUTANTE, NO_PARTY_SCREEN
# 420 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Furfrou_CheckIfFurfrouInParty_17
# 423 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkspecies SPECIES_FURFROU_MATRON, NO_PARTY_SCREEN
# 424 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Furfrou_CheckIfFurfrouInParty_20
# 427 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkspecies SPECIES_FURFROU_DANDY, NO_PARTY_SCREEN
# 428 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Furfrou_CheckIfFurfrouInParty_23
# 431 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkspecies SPECIES_FURFROU_LA_REINE, NO_PARTY_SCREEN
# 432 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Furfrou_CheckIfFurfrouInParty_26
# 435 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkspecies SPECIES_FURFROU_KABUKI, NO_PARTY_SCREEN
# 436 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Furfrou_CheckIfFurfrouInParty_29
# 439 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkspecies SPECIES_FURFROU_PHARAOH, NO_PARTY_SCREEN
# 440 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Furfrou_CheckIfFurfrouInParty_32
# 443 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto Furfrou_NoFurfrouInParty
	return

Furfrou_CheckIfFurfrouInParty_2:
	return

Furfrou_CheckIfFurfrouInParty_5:
	return

Furfrou_CheckIfFurfrouInParty_8:
	return

Furfrou_CheckIfFurfrouInParty_11:
	return

Furfrou_CheckIfFurfrouInParty_14:
	return

Furfrou_CheckIfFurfrouInParty_17:
	return

Furfrou_CheckIfFurfrouInParty_20:
	return

Furfrou_CheckIfFurfrouInParty_23:
	return

Furfrou_CheckIfFurfrouInParty_26:
	return

Furfrou_CheckIfFurfrouInParty_29:
	return

Furfrou_CheckIfFurfrouInParty_32:
	return


Furfrou_CheckIfSelectedMonIsFurfrou::
# 447 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	copyvar VAR_0x8006, VAR_RESULT
# 448 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	switch VAR_RESULT
# 449 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case SPECIES_FURFROU, Furfrou_CheckIfSelectedMonIsFurfrou_3
# 451 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case SPECIES_FURFROU_NATURAL, Furfrou_CheckIfSelectedMonIsFurfrou_4
# 453 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case SPECIES_FURFROU_HEART, Furfrou_CheckIfSelectedMonIsFurfrou_5
# 455 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case SPECIES_FURFROU_STAR, Furfrou_CheckIfSelectedMonIsFurfrou_6
# 457 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case SPECIES_FURFROU_DIAMOND, Furfrou_CheckIfSelectedMonIsFurfrou_7
# 459 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case SPECIES_FURFROU_DEBUTANTE, Furfrou_CheckIfSelectedMonIsFurfrou_8
# 461 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case SPECIES_FURFROU_MATRON, Furfrou_CheckIfSelectedMonIsFurfrou_9
# 463 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case SPECIES_FURFROU_DANDY, Furfrou_CheckIfSelectedMonIsFurfrou_10
# 465 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case SPECIES_FURFROU_LA_REINE, Furfrou_CheckIfSelectedMonIsFurfrou_11
# 467 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case SPECIES_FURFROU_KABUKI, Furfrou_CheckIfSelectedMonIsFurfrou_12
# 469 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case SPECIES_FURFROU_PHARAOH, Furfrou_CheckIfSelectedMonIsFurfrou_13
# 471 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case MULTI_B_PRESSED, Furfrou_CheckIfSelectedMonIsFurfrou_14
Furfrou_CheckIfSelectedMonIsFurfrou_1:
# 474 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox Furfrou_CheckIfSelectedMonIsFurfrou_Text_0
# 475 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	closemessage
# 476 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
	end

Furfrou_CheckIfSelectedMonIsFurfrou_3:
	return

Furfrou_CheckIfSelectedMonIsFurfrou_4:
	return

Furfrou_CheckIfSelectedMonIsFurfrou_5:
	return

Furfrou_CheckIfSelectedMonIsFurfrou_6:
	return

Furfrou_CheckIfSelectedMonIsFurfrou_7:
	return

Furfrou_CheckIfSelectedMonIsFurfrou_8:
	return

Furfrou_CheckIfSelectedMonIsFurfrou_9:
	return

Furfrou_CheckIfSelectedMonIsFurfrou_10:
	return

Furfrou_CheckIfSelectedMonIsFurfrou_11:
	return

Furfrou_CheckIfSelectedMonIsFurfrou_12:
	return

Furfrou_CheckIfSelectedMonIsFurfrou_13:
	return

Furfrou_CheckIfSelectedMonIsFurfrou_14:
# 472 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto Furfrou_Exit
	goto Furfrou_CheckIfSelectedMonIsFurfrou_1


Furfrou_ChooseWhichStyle::
# 481 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox Furfrou_ChooseWhichStyle_Text_0
# 482 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, Furfrou_ChooseWhichStyle_Text_1, Furfrou_ChooseWhichStyle_Text_2, Furfrou_ChooseWhichStyle_Text_3, Furfrou_ChooseWhichStyle_Text_4, Furfrou_ChooseWhichStyle_Text_5, Furfrou_ChooseWhichStyle_Text_6, Furfrou_ChooseWhichStyle_Text_7, Furfrou_ChooseWhichStyle_Text_8, Furfrou_ChooseWhichStyle_Text_9, Furfrou_ChooseWhichStyle_Text_10
# 485 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	switch VAR_RESULT
# 486 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 0, Furfrou_ChooseWhichStyle_3
# 487 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 1, Furfrou_ChooseWhichStyle_4
# 488 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 2, Furfrou_ChooseWhichStyle_5
# 489 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 3, Furfrou_ChooseWhichStyle_6
# 490 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 4, Furfrou_ChooseWhichStyle_7
# 491 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 5, Furfrou_ChooseWhichStyle_8
# 492 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 6, Furfrou_ChooseWhichStyle_9
# 493 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 7, Furfrou_ChooseWhichStyle_10
# 494 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 8, Furfrou_ChooseWhichStyle_11
# 495 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 9, Furfrou_ChooseWhichStyle_12
# 496 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 127, Furfrou_ChooseWhichStyle_13
Furfrou_ChooseWhichStyle_1:
# 498 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto Furfrou_DoTrimming
	return

Furfrou_ChooseWhichStyle_3:
# 486 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_0x8005, SPECIES_FURFROU
	goto Furfrou_ChooseWhichStyle_1

Furfrou_ChooseWhichStyle_4:
# 487 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_0x8005, SPECIES_FURFROU_HEART
	goto Furfrou_ChooseWhichStyle_1

Furfrou_ChooseWhichStyle_5:
# 488 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_0x8005, SPECIES_FURFROU_STAR
	goto Furfrou_ChooseWhichStyle_1

Furfrou_ChooseWhichStyle_6:
# 489 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_0x8005, SPECIES_FURFROU_DIAMOND
	goto Furfrou_ChooseWhichStyle_1

Furfrou_ChooseWhichStyle_7:
# 490 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_0x8005, SPECIES_FURFROU_DEBUTANTE
	goto Furfrou_ChooseWhichStyle_1

Furfrou_ChooseWhichStyle_8:
# 491 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_0x8005, SPECIES_FURFROU_MATRON
	goto Furfrou_ChooseWhichStyle_1

Furfrou_ChooseWhichStyle_9:
# 492 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_0x8005, SPECIES_FURFROU_DANDY
	goto Furfrou_ChooseWhichStyle_1

Furfrou_ChooseWhichStyle_10:
# 493 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_0x8005, SPECIES_FURFROU_LA_REINE
	goto Furfrou_ChooseWhichStyle_1

Furfrou_ChooseWhichStyle_11:
# 494 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_0x8005, SPECIES_FURFROU_KABUKI
	goto Furfrou_ChooseWhichStyle_1

Furfrou_ChooseWhichStyle_12:
# 495 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_0x8005, SPECIES_FURFROU_PHARAOH
	goto Furfrou_ChooseWhichStyle_1

Furfrou_ChooseWhichStyle_13:
# 496 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto Furfrou_Exit
	goto Furfrou_ChooseWhichStyle_1


Furfrou_DoTrimming::
# 502 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_0x8005, VAR_0x8006
	goto_if_eq Furfrou_DoTrimming_2
Furfrou_DoTrimming_1:
# 506 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkmoney 500, 0
# 507 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Furfrou_DoTrimming_5
# 513 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	removemoney 500, 0
# 514 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox Furfrou_DoTrimming_Text_2
# 515 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	delay 8
# 516 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_FURFROU, CRY_MODE_NORMAL
# 517 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmoncry
# 518 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	delay 8
# 519 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	fadescreen FADE_TO_BLACK
# 520 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox Furfrou_DoTrimming_Text_3
# 521 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	closemessage
# 522 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	delay 16
# 523 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 524 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox Furfrou_DoTrimming_Text_4
# 525 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	showmonpic VAR_0x8005, 10, 3
# 526 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	delay 8
# 527 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_FURFROU, CRY_MODE_NORMAL
# 528 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmoncry
# 529 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitbuttonpress
# 530 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	hidemonpic
# 531 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox Furfrou_DoTrimming_Text_5
# 532 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	closemessage
# 533 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
	end

Furfrou_DoTrimming_2:
# 503 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox Furfrou_DoTrimming_Text_0
# 504 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto Furfrou_ChooseWhichStyle
	goto Furfrou_DoTrimming_1

Furfrou_DoTrimming_5:
# 508 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox Furfrou_DoTrimming_Text_1
# 509 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	closemessage
# 510 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
	end


Furfrou_NoFurfrouInParty::
# 538 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox Furfrou_NoFurfrouInParty_Text_0
# 539 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	closemessage
# 540 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
	end


Furfrou_Exit::
# 545 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	releaseall
	end


SlateportCity_PokemonFanClub_EventScript_Diancite::
# 555 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	checkspecies SPECIES_DIANCIE, NO_PARTY_SCREEN
# 556 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_Diancite_2
# 556 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_RECEIVED_DIANCITE, SlateportCity_PokemonFanClub_EventScript_Diancite_2
# 561 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock
# 562 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	delay 16
# 563 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 564 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 565 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	delay 8
# 566 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	fadescreen FADE_TO_BLACK
# 567 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_0
# 568 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 569 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 570 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	delay 16
# 571 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	addobject 11
# 572 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playse SE_DOOR
# 573 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	delay 24
# 574 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	addobject 12
# 575 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playse SE_DOOR
# 576 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	delay 8
# 577 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_EventScript_Diancite_Text_0
# 578 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	closemessage
# 579 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playse SE_PIN
# 580 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 581 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 582 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	delay 16
# 583 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 584 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement 11, SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_1
# 585 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement 12, SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_2
# 586 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement 12
# 587 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	delay 8
# 588 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_EventScript_Diancite_Text_1
# 589 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	closemessage
# 590 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement 11, SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_3
# 591 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement 11
# 592 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_EventScript_Diancite_Text_2
# 593 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	closemessage
# 594 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement 12, SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_3
# 595 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement 12
# 596 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_EventScript_Diancite_Text_3
# 597 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	closemessage
# 598 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement 11, SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_3
# 599 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement 11
# 600 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_EventScript_Diancite_Text_4
# 601 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	closemessage
# 602 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement 12, SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_3
# 603 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement 12
# 604 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_EventScript_Diancite_Text_5, MSGBOX_YESNO
# 605 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_Diancite_7
# 619 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement 11, SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_3
# 620 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement 11
# 621 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_EventScript_Diancite_Text_8
# 622 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	closemessage
SlateportCity_PokemonFanClub_EventScript_Diancite_6:
# 624 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	delay 8
# 625 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	addobject 13
# 626 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playse SE_DOOR
# 627 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	delay 16
# 628 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_EventScript_Diancite_Text_9
# 629 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	closemessage
# 630 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	delay 4
# 631 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playse SE_PIN
# 632 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 633 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 634 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement 12
# 635 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	delay 8
# 636 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement 11, SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_4
# 637 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement 12, SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_4
# 638 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement 12
# 639 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_EventScript_Diancite_Text_10
# 640 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	closemessage
# 641 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	delay 16
# 642 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement 11, SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_5
# 643 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement 12, SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_6
# 644 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement 13, SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_7
# 645 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement 11
# 646 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_EventScript_Diancite_Text_11
# 647 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	closemessage
# 648 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	delay 16
# 649 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement 11, SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_8
# 650 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement 12, SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_9
# 651 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement 13, SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_4
# 652 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement 12
# 653 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_EventScript_Diancite_Text_12
# 654 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	closemessage
# 655 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement 11, SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_6
# 656 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement 12, SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_10
# 657 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement 13, SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_3
# 658 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement 11
# 659 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_EventScript_Diancite_Text_13
# 660 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_DIANCITE, 1
# 661 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_EventScript_Diancite_Text_14
# 662 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	closemessage
# 663 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement 13, SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_4
# 664 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement 13
# 665 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_EventScript_Diancite_Text_15
# 666 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	closemessage
# 667 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement 11, SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_11
# 668 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement 11
# 669 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_EventScript_Diancite_Text_16
# 670 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	closemessage
# 671 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	delay 16
# 672 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement 13, SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_12
# 673 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement 13
# 674 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playse SE_EXIT
# 675 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	removeobject 13
# 676 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	delay 8
# 677 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement 12, SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_12
# 678 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement 12
# 679 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playse SE_EXIT
# 680 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	removeobject 12
# 681 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	delay 8
# 682 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement 11, SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_13
# 683 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement 11
# 684 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playse SE_EXIT
# 685 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	removeobject 11
# 686 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_3, 1
# 687 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_HIDE_POKEMON_FANCLUB_NPCS
# 688 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_DIANCITE
# 689 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
	end

SlateportCity_PokemonFanClub_EventScript_Diancite_2:
# 557 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_3, 1
# 558 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	release
	end

SlateportCity_PokemonFanClub_EventScript_Diancite_7:
# 606 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_EventScript_Diancite_Text_6, MSGBOX_YESNO
# 607 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_Diancite_10
# 613 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement 11, SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_3
# 614 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement 11
# 615 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_EventScript_Diancite_Text_8
# 616 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	closemessage
	goto SlateportCity_PokemonFanClub_EventScript_Diancite_6

SlateportCity_PokemonFanClub_EventScript_Diancite_10:
# 608 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement 11, SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_3
# 609 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement 11
# 610 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_EventScript_Diancite_Text_7
# 611 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	closemessage
	goto SlateportCity_PokemonFanClub_EventScript_Diancite_6


# 567 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_0:
# 567 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	walk_up
# 567 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	walk_up
	step_end

# 584 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_1:
# 584 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	delay_8
# 584 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	walk_up
	step_end

# 585 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_2:
# 585 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	delay_16
# 585 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	walk_up
	step_end

# 590 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_3:
# 590 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	walk_in_place_up
	step_end

# 636 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_4:
# 636 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	walk_in_place_down
	step_end

# 642 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_5:
# 642 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	walk_left
# 642 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	walk_in_place_up
	step_end

# 643 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_6:
# 643 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	delay_16
# 643 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	walk_in_place_up
	step_end

# 644 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_7:
# 644 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	walk_up
	step_end

# 649 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_8:
# 649 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	delay_8
# 649 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	walk_in_place_right
	step_end

# 650 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_9:
# 650 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	delay_16
# 650 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	walk_in_place_left
	step_end

# 656 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_10:
# 656 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	delay_8
# 656 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	walk_in_place_up
	step_end

# 667 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_11:
# 667 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	walk_in_place_right
	step_end

# 672 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_12:
# 672 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	walk_down
# 672 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	walk_in_place_down
	step_end

# 682 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
SlateportCity_PokemonFanClub_EventScript_Diancite_Movement_13:
# 682 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	walk_down
# 682 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	walk_right
# 682 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	walk_in_place_down
	step_end

SlateportCity_PokemonFanClub_EventScript_SwaggerMan_Text_0:
# 364 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Heh! My Pokémon totally rules!\nIt's cooler that any Pokémon!\pI was lipping off with a swagger\nin my step like that when Chairman\lchewed me out.\pThat took the swagger out my step…$"

Fufrou_Haircut_Main_Text_0:
# 376 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Do you know the Pokémon Furfrou?\nThey are very rare here in Hoenn.\pFurfrou's fur can be styled in\ndifferent ways, but it needs regular\ltrimming to stay elegant.\pIf you have one with you, I can give it\na trim it for ¥500.$"

Fufrou_Haircut_Main_Text_1:
# 381 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "All right.\nWhich Furfrou will I trim today?$"

Fufrou_Haircut_Main_Text_2:
# 389 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Oh, dear.\nI can't trim an Egg!$"

Furfrou_CheckIfSelectedMonIsFurfrou_Text_0:
# 474 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Oh, I'm sorry, but…\nI can't trim any Pokémon but Furfrou.$"

Furfrou_ChooseWhichStyle_Text_0:
# 481 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "What kind of style would you like it to\nhave?$"

Furfrou_ChooseWhichStyle_Text_1:
# 483 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Natural$"

Furfrou_ChooseWhichStyle_Text_2:
# 483 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Heart$"

Furfrou_ChooseWhichStyle_Text_3:
# 483 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Star$"

Furfrou_ChooseWhichStyle_Text_4:
# 483 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Diamond$"

Furfrou_ChooseWhichStyle_Text_5:
# 483 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Debutante$"

Furfrou_ChooseWhichStyle_Text_6:
# 483 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Matron$"

Furfrou_ChooseWhichStyle_Text_7:
# 483 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Dandy$"

Furfrou_ChooseWhichStyle_Text_8:
# 483 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "La Reine$"

Furfrou_ChooseWhichStyle_Text_9:
# 483 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Kabuki$"

Furfrou_ChooseWhichStyle_Text_10:
# 483 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Pharaoh$"

Furfrou_DoTrimming_Text_0:
# 503 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Oh? But your Furfrou already has this\nstyle.$"

Furfrou_DoTrimming_Text_1:
# 508 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Oh, dear.\nYou don't seem to have ¥500.$"

Furfrou_DoTrimming_Text_2:
# 514 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Then let's start.\nPlease stay calm, Furfrou.$"

Furfrou_DoTrimming_Text_3:
# 520 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Snip… {PAUSE 32}\nSnippity-snip… {PAUSE 32}\lSnip-snip… Snip!$"

Furfrou_DoTrimming_Text_4:
# 524 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Thank you for your patience!\pIt's all done.\nYour Furfrou looks elegant!$"

Furfrou_DoTrimming_Text_5:
# 531 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "If you ever wish to try out a new style,\ncome back again!$"

Furfrou_NoFurfrouInParty_Text_0:
# 538 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "It seems you don't have a Furfrou with\nyou.$"

SlateportCity_PokemonFanClub_EventScript_Diancite_Text_0:
# 577 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Please, just wait a moment, mon chou!\nI need you to attendez!$"

SlateportCity_PokemonFanClub_EventScript_Diancite_Text_1:
# 588 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Do forgive us, young master, for\nspeaking without an introduction.\pThere is a matter of great import that\nwe must discuss.\pIs it true that you have somehow\nobtained the Mythical Pokémon\lDiancie?$"

SlateportCity_PokemonFanClub_EventScript_Diancite_Text_2:
# 592 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Diancie…\pThe inexplicable mutation arising from\nthe Pokémon we know as Carbink…\pWhen and where it originates from, and\nthe mecanisme of its formation…\pIt is indeed a mysterieuse existence,\none of des plus grand mysteres!$"

SlateportCity_PokemonFanClub_EventScript_Diancite_Text_3:
# 596 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Diancie is the epitome of beauty among\nPokémon.\pThe divine symmetry of its\nbody enables it to absorb light\land display a radiance beyond the\lawareness of this realm.\pIt is said that, upon Mega Evolving,\nMega Diancie emanates a beauty that\lsurpasses all know beauty.$"

SlateportCity_PokemonFanClub_EventScript_Diancite_Text_4:
# 600 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "That beauty… It is so dazzling\nto behold that people call it the\l“Royal Pink Princess.”\pOur jeune maitre--young master--has\nbeen searching for Diancie in order\lto see this beauty fantastique.\pAnd we two have managed to obtain\nthe Diancite that is necessaire for\lits Mega Evolution.\pWe have been the most ardent to\ndiscover a Diancie that we might\ltake back to our young master, to\lshow to him this fame beaute ultime.\pYet we have proved unsuitable\nto the task, unable to secure the\lindispensable Diancie!$"

SlateportCity_PokemonFanClub_EventScript_Diancite_Text_5:
# 604 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Please allow me to ask you directly…\pWill you agree to relinquish your\nDiancie to us?$"

SlateportCity_PokemonFanClub_EventScript_Diancite_Text_6:
# 606 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Is there no way we can persuade you?$"

SlateportCity_PokemonFanClub_EventScript_Diancite_Text_7:
# 610 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Mon chou, please…\nIf you could only…$"

SlateportCity_PokemonFanClub_EventScript_Diancite_Text_8:
# 615 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Vraiment? You will?\pOh, what a relief to have met with a\nTrainer so understanding!\pThen…$"

SlateportCity_PokemonFanClub_EventScript_Diancite_Text_9:
# 628 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "…Wait.$"

SlateportCity_PokemonFanClub_EventScript_Diancite_Text_10:
# 639 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "M-master?$"

SlateportCity_PokemonFanClub_EventScript_Diancite_Text_11:
# 646 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Hey, I'm sorry they've been bugging you.$"

SlateportCity_PokemonFanClub_EventScript_Diancite_Text_12:
# 653 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Um, you guys…\pI'm really glad you tried so hard to find\na Diancie for me. Truly.\pBut… Well, I think you might be on the\nwrong track.\pI'm not even that into finding a\nDiancie anymore, you know.\pWhat I really want now is a big, tough\nPokémon--you know?$"

SlateportCity_PokemonFanClub_EventScript_Diancite_Text_13:
# 659 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "So, you've got a Diancie, right?\pHow about we give you the Diancite we\nfound?\pIt'd be a crazy waste to have\na rare Pokémon like that and never\leven Mega Evolve it. You know?$"

SlateportCity_PokemonFanClub_EventScript_Diancite_Text_14:
# 661 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "That's what you gotta do, am I right?\pMega Evolve them like bam! And then…\nPow! Pow! And end that battle in a\lflash!\pEven if folks do call it a royal\npink whatever, I bet a Mega Evolved\lDiancie would be crazy strong!\lWho knows?\pYou keep rolling your way\nthrough battles and strolling away\lwith victories!\lThat's what I wanna see, you know!$"

SlateportCity_PokemonFanClub_EventScript_Diancite_Text_15:
# 665 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "OK, you two!\pNow let's shoot for a big, tough\nPokémon!$"

SlateportCity_PokemonFanClub_EventScript_Diancite_Text_16:
# 669 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Ohoho…\nMon jeune maitre…$"
