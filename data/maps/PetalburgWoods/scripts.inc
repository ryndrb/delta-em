# 1 "data/maps/PetalburgWoods/scripts.pory"

# 2 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_GRUNT, 3
# 3 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 4
# 4 "data/maps/PetalburgWoods/scripts.pory"

# 5 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_MapScripts::
# 6 "data/maps/PetalburgWoods/scripts.pory"
	.byte 0
# 7 "data/maps/PetalburgWoods/scripts.pory"

# 8 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft::
# 9 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 10 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 11 "data/maps/PetalburgWoods/scripts.pory"
    applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceDown
# 12 "data/maps/PetalburgWoods/scripts.pory"
    waitmovement LOCALID_DEVON_EMPLOYEE
# 13 "data/maps/PetalburgWoods/scripts.pory"
    delay 8
# 14 "data/maps/PetalburgWoods/scripts.pory"
    playse SE_PIN
# 15 "data/maps/PetalburgWoods/scripts.pory"
    applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 16 "data/maps/PetalburgWoods/scripts.pory"
    waitmovement LOCALID_DEVON_EMPLOYEE
# 17 "data/maps/PetalburgWoods/scripts.pory"
    delay 8
# 18 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
# 19 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 20 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 21 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 22 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 23 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 24 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 25 "data/maps/PetalburgWoods/scripts.pory"
    delay 8
# 26 "data/maps/PetalburgWoods/scripts.pory"
    applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceUp
# 27 "data/maps/PetalburgWoods/scripts.pory"
    waitmovement LOCALID_DEVON_EMPLOYEE
# 28 "data/maps/PetalburgWoods/scripts.pory"
    delay 8
# 29 "data/maps/PetalburgWoods/scripts.pory"
    playse SE_PIN
# 30 "data/maps/PetalburgWoods/scripts.pory"
    applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 31 "data/maps/PetalburgWoods/scripts.pory"
    waitmovement LOCALID_DEVON_EMPLOYEE
# 32 "data/maps/PetalburgWoods/scripts.pory"
    delay 8
# 33 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 34 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 35 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
# 36 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 37 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceUp
# 38 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 39 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 40 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 41 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
# 42 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 43 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 44 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 45 "data/maps/PetalburgWoods/scripts.pory"
    delay 8
# 46 "data/maps/PetalburgWoods/scripts.pory"
    playse SE_PIN
# 47 "data/maps/PetalburgWoods/scripts.pory"
    applymovement LOCALID_GRUNT, Common_Movement_QuestionMark
# 48 "data/maps/PetalburgWoods/scripts.pory"
    waitmovement LOCALID_GRUNT
# 49 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 50 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 51 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 52 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 53 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 54 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 55 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 56 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 57 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 58 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 59 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 60 "data/maps/PetalburgWoods/scripts.pory"
	end
# 61 "data/maps/PetalburgWoods/scripts.pory"

# 62 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight::
# 63 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 64 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 65 "data/maps/PetalburgWoods/scripts.pory"
    applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceDown
# 66 "data/maps/PetalburgWoods/scripts.pory"
    waitmovement LOCALID_DEVON_EMPLOYEE
# 67 "data/maps/PetalburgWoods/scripts.pory"
    delay 8
# 68 "data/maps/PetalburgWoods/scripts.pory"
    playse SE_PIN
# 69 "data/maps/PetalburgWoods/scripts.pory"
    applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 70 "data/maps/PetalburgWoods/scripts.pory"
    waitmovement LOCALID_DEVON_EMPLOYEE
# 71 "data/maps/PetalburgWoods/scripts.pory"
    delay 8
# 72 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
# 73 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 74 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 75 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 76 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 77 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 78 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 79 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 80 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 81 "data/maps/PetalburgWoods/scripts.pory"
    delay 8
# 82 "data/maps/PetalburgWoods/scripts.pory"
    applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceUp
# 83 "data/maps/PetalburgWoods/scripts.pory"
    waitmovement LOCALID_DEVON_EMPLOYEE
# 84 "data/maps/PetalburgWoods/scripts.pory"
    applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 85 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 86 "data/maps/PetalburgWoods/scripts.pory"
    delay 8
# 87 "data/maps/PetalburgWoods/scripts.pory"
    playse SE_PIN
# 88 "data/maps/PetalburgWoods/scripts.pory"
    applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 89 "data/maps/PetalburgWoods/scripts.pory"
    waitmovement LOCALID_DEVON_EMPLOYEE
# 90 "data/maps/PetalburgWoods/scripts.pory"
    delay 8
# 91 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 92 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 93 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
# 94 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 95 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceUp
# 96 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 97 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 98 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 99 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
# 100 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 101 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 102 "data/maps/PetalburgWoods/scripts.pory"
    closemessage
# 103 "data/maps/PetalburgWoods/scripts.pory"
    delay 8
# 104 "data/maps/PetalburgWoods/scripts.pory"
    playse SE_PIN
# 105 "data/maps/PetalburgWoods/scripts.pory"
    applymovement LOCALID_GRUNT, Common_Movement_QuestionMark
# 106 "data/maps/PetalburgWoods/scripts.pory"
    waitmovement LOCALID_GRUNT
# 107 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 108 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 109 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 110 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 111 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_LEVEL_CAP_VARIABLE, 16
# 112 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 113 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 114 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
# 115 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 116 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 117 "data/maps/PetalburgWoods/scripts.pory"
	end
# 118 "data/maps/PetalburgWoods/scripts.pory"

# 119 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherIntro::
# 120 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 121 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 122 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 123 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 124 "data/maps/PetalburgWoods/scripts.pory"
	return
# 125 "data/maps/PetalburgWoods/scripts.pory"

# 126 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle::
# 127 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
# 128 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 129 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaRunAway
# 130 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 131 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_GRUNT
# 132 "data/maps/PetalburgWoods/scripts.pory"
    delay 8
# 133 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 134 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 135 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
# 136 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 137 "data/maps/PetalburgWoods/scripts.pory"
    goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
# 138 "data/maps/PetalburgWoods/scripts.pory"
    msgbox PetalburgWoods_Text_ExplainExpShare, MSGBOX_DEFAULT
# 139 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 140 "data/maps/PetalburgWoods/scripts.pory"
    fadescreenswapbuffers FADE_TO_BLACK
# 141 "data/maps/PetalburgWoods/scripts.pory"
    special HealPlayerParty
# 142 "data/maps/PetalburgWoods/scripts.pory"
    playfanfare MUS_HEAL
# 143 "data/maps/PetalburgWoods/scripts.pory"
    waitfanfare
# 144 "data/maps/PetalburgWoods/scripts.pory"
    fadescreenswapbuffers FADE_FROM_BLACK
# 145 "data/maps/PetalburgWoods/scripts.pory"
    msgbox PetalburgWoods_Text_PokemonHealed, MSGBOX_DEFAULT
# 146 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 147 "data/maps/PetalburgWoods/scripts.pory"
	end
# 148 "data/maps/PetalburgWoods/scripts.pory"

# 149 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_BagFull::
# 150 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 151 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 152 "data/maps/PetalburgWoods/scripts.pory"
	end
# 153 "data/maps/PetalburgWoods/scripts.pory"

# 154 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherFinish::
# 155 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 156 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 157 "data/maps/PetalburgWoods/scripts.pory"
	return
# 158 "data/maps/PetalburgWoods/scripts.pory"

# 159 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RemoveDevonResearcher::
# 160 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 161 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 162 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
# 163 "data/maps/PetalburgWoods/scripts.pory"
	end
# 164 "data/maps/PetalburgWoods/scripts.pory"

# 165 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 166 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_up
# 167 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 168 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 169 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_right
# 170 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 171 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 172 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_left
# 173 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 174 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 175 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_up
# 176 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 177 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 178 "data/maps/PetalburgWoods/scripts.pory"

# 179 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitLeft:
# 180 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 181 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 182 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 183 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 184 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 185 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 186 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 187 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 188 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 189 "data/maps/PetalburgWoods/scripts.pory"

# 190 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
# 191 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 192 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 193 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 194 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 195 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 196 "data/maps/PetalburgWoods/scripts.pory"

# 197 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
# 198 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 199 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 200 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 201 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 202 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 203 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_right
# 204 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 205 "data/maps/PetalburgWoods/scripts.pory"

# 206 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitRight:
# 207 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 208 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 209 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 210 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 211 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 212 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 213 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 214 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 215 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 216 "data/maps/PetalburgWoods/scripts.pory"

# 217 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_WatchResearcherLeave:
# 218 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 219 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 220 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_up
# 221 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 222 "data/maps/PetalburgWoods/scripts.pory"

# 223 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
# 224 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 225 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 226 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 227 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 228 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_up
# 229 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 230 "data/maps/PetalburgWoods/scripts.pory"

# 231 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
# 232 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 233 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 234 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_up
# 235 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 236 "data/maps/PetalburgWoods/scripts.pory"

# 237 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherLeft:
# 238 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 239 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 240 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 241 "data/maps/PetalburgWoods/scripts.pory"

# 242 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaBackOff:
# 243 "data/maps/PetalburgWoods/scripts.pory"
	lock_facing_direction
# 244 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 245 "data/maps/PetalburgWoods/scripts.pory"
	unlock_facing_direction
# 246 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 247 "data/maps/PetalburgWoods/scripts.pory"

# 248 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaRunAway:
# 249 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 250 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 251 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 252 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 253 "data/maps/PetalburgWoods/scripts.pory"
    walk_fast_up
# 254 "data/maps/PetalburgWoods/scripts.pory"
    delay_8
# 255 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 256 "data/maps/PetalburgWoods/scripts.pory"

# 257 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherRight:
# 258 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 259 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 260 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 261 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 262 "data/maps/PetalburgWoods/scripts.pory"

# 263 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaEntrance:
# 264 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 265 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 266 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 267 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 268 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 269 "data/maps/PetalburgWoods/scripts.pory"

# 270 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachPlayer:
# 271 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 272 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 273 "data/maps/PetalburgWoods/scripts.pory"

# 274 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy1::
# 275 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
# 276 "data/maps/PetalburgWoods/scripts.pory"
	end
# 277 "data/maps/PetalburgWoods/scripts.pory"

# 278 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy2::
# 279 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
# 280 "data/maps/PetalburgWoods/scripts.pory"
	end
# 281 "data/maps/PetalburgWoods/scripts.pory"

# 282 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl::
# 283 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 284 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 285 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_ExplainMiracleSeed
# 286 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
# 287 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 288 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 289 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
# 290 "data/maps/PetalburgWoods/scripts.pory"
	release
# 291 "data/maps/PetalburgWoods/scripts.pory"
	end
# 292 "data/maps/PetalburgWoods/scripts.pory"

# 293 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_ExplainMiracleSeed::
# 294 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
# 295 "data/maps/PetalburgWoods/scripts.pory"
	release
# 296 "data/maps/PetalburgWoods/scripts.pory"
	end
# 297 "data/maps/PetalburgWoods/scripts.pory"

# 298 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign1::
# 299 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
# 300 "data/maps/PetalburgWoods/scripts.pory"
	end
# 301 "data/maps/PetalburgWoods/scripts.pory"

# 302 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign2::
# 303 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
# 304 "data/maps/PetalburgWoods/scripts.pory"
	end
# 305 "data/maps/PetalburgWoods/scripts.pory"

# 306 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Lyle::
# 307 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 308 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 309 "data/maps/PetalburgWoods/scripts.pory"
	end
# 310 "data/maps/PetalburgWoods/scripts.pory"

# 311 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James::
# 312 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
# 313 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 314 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgWoods_EventScript_JamesRematch
# 315 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8004, TRAINER_JAMES_1
# 316 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 317 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_TryRegisterJames2
# 318 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 319 "data/maps/PetalburgWoods/scripts.pory"
	release
# 320 "data/maps/PetalburgWoods/scripts.pory"
	end
# 321 "data/maps/PetalburgWoods/scripts.pory"

# 322 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames::
# 323 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 324 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 325 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
# 326 "data/maps/PetalburgWoods/scripts.pory"
	release
# 327 "data/maps/PetalburgWoods/scripts.pory"
	end
# 328 "data/maps/PetalburgWoods/scripts.pory"

# 329 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames::
# 330 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 331 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 332 "data/maps/PetalburgWoods/scripts.pory"
	release
# 333 "data/maps/PetalburgWoods/scripts.pory"
	end
# 334 "data/maps/PetalburgWoods/scripts.pory"

# 335 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2::
# 336 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
# 337 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 338 "data/maps/PetalburgWoods/scripts.pory"
	release
# 339 "data/maps/PetalburgWoods/scripts.pory"
	end
# 340 "data/maps/PetalburgWoods/scripts.pory"

# 341 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames2::
# 342 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 343 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 344 "data/maps/PetalburgWoods/scripts.pory"
	release
# 345 "data/maps/PetalburgWoods/scripts.pory"
	end
# 346 "data/maps/PetalburgWoods/scripts.pory"

# 347 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesRematch::
# 348 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 349 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
# 350 "data/maps/PetalburgWoods/scripts.pory"
	end
# 351 "data/maps/PetalburgWoods/scripts.pory"

# 352 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NotAOneToBeFound:
# 353 "data/maps/PetalburgWoods/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Hmmm…\nNot a one to be found…$"
# 354 "data/maps/PetalburgWoods/scripts.pory"

# 355 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HaveYouSeenShroomish:
# 356 "data/maps/PetalburgWoods/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Hello, have you seen any Pokémon\ncalled Shroomish around here?\pI really love that Pokémon.$"
# 357 "data/maps/PetalburgWoods/scripts.pory"

# 358 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWasGoingToAmbushYou:
# 359 "data/maps/PetalburgWoods/scripts.pory"
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: I was going to ambush you, but\nyou had to dawdle in Petalburg Woods\lforever, didn't you?\pI got sick of waiting, so here I am!$"
# 360 "data/maps/PetalburgWoods/scripts.pory"

# 361 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HandOverThosePapers:
# 362 "data/maps/PetalburgWoods/scripts.pory"
	.string "You!\nDevon Researcher!\pHand over those papers!$"
# 363 "data/maps/PetalburgWoods/scripts.pory"

# 364 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouHaveToHelpMe:
# 365 "data/maps/PetalburgWoods/scripts.pory"
	.string "{COLOR RED}Researcher{COLOR DARK_GRAY}: Aiyeeeh!\pYou're a Pokémon Trainer, aren't you?\nYou've got to help me, please!$"
# 366 "data/maps/PetalburgWoods/scripts.pory"

# 367 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NoOneCrossesTeamAqua:
# 368 "data/maps/PetalburgWoods/scripts.pory"
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: Huh?\nWhat do you think you're doing?\pWhat, you're going to protect him?\pNo one who crosses Team Aqua gets\nany mercy, not even a kid!\pCome on and battle me!$"
# 369 "data/maps/PetalburgWoods/scripts.pory"

# 370 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureKiddingMe:
# 371 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're so strong!$"
# 372 "data/maps/PetalburgWoods/scripts.pory"

# 373 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouveGotSomeNerve:
# 374 "data/maps/PetalburgWoods/scripts.pory"
	.string "Grrr… You've got some nerve meddling\nwith Team Aqua!\lCome on and battle me again!\pI wish I could say that, but I'm out of\nPokémon…\pAnd, hey, we of Team Aqua are also\nafter something in Rustboro.\pI'll let you go for today!$"
# 375 "data/maps/PetalburgWoods/scripts.pory"

# 376 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ThatWasAwfullyClose:
# 377 "data/maps/PetalburgWoods/scripts.pory"
	.string "{COLOR RED}Researcher{COLOR DARK_GRAY}: Whew…\nThat was awfully close!\pThanks to you, he didn't rob me of\nthese important papers.\pI know!\nI'll give you this as my thanks!$"
# 378 "data/maps/PetalburgWoods/scripts.pory"

# 379 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ExplainExpShare:
# 380 "data/maps/PetalburgWoods/scripts.pory"
    .string "The Exp. Share is a super high-tech\ndevice.\pI had to strain every fiber of my brain\nand body to develop this device.\pTurn the switch on, and battle\nexperience will be shared by all party\lPokémon!\lPlease give it a try!\pAnd with this, I'll restore your\nPokémon's health.\pIt's another technical advance that\nI'm proud of!$"
# 381 "data/maps/PetalburgWoods/scripts.pory"

# 382 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_PokemonHealed:
# 383 "data/maps/PetalburgWoods/scripts.pory"
    .string "You had your Pokémon's HP restored!$"
# 384 "data/maps/PetalburgWoods/scripts.pory"

# 385 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
# 386 "data/maps/PetalburgWoods/scripts.pory"
	.string "…Ah!\pDidn't that Team Aqua thug say they\nwere after something in Rustboro,\ltoo?\pUh-oh!\nIt's a crisis!\lI can't be wasting time!$"
# 387 "data/maps/PetalburgWoods/scripts.pory"

# 388 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureLoadedWithItems:
# 389 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're loaded with items.\n"
# 390 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't give you this Great Ball.$"
# 391 "data/maps/PetalburgWoods/scripts.pory"

# 392 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_GoBugPokemonTeam:
# 393 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a whole bunch of Pokémon!\p"
# 394 "data/maps/PetalburgWoods/scripts.pory"
	.string "Go, go, go!\n"
# 395 "data/maps/PetalburgWoods/scripts.pory"
	.string "My Bug Pokémon team!$"
# 396 "data/maps/PetalburgWoods/scripts.pory"

# 397 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICouldntWin:
# 398 "data/maps/PetalburgWoods/scripts.pory"
	.string "I have all these Pokémon,\n"
# 399 "data/maps/PetalburgWoods/scripts.pory"
	.string "but I couldn't win…$"
# 400 "data/maps/PetalburgWoods/scripts.pory"

# 401 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ImOutOfPokeBalls:
# 402 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a bunch of Pokémon.\n"
# 403 "data/maps/PetalburgWoods/scripts.pory"
	.string "Now I'm out of Poké Balls.$"
# 404 "data/maps/PetalburgWoods/scripts.pory"

# 405 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
# 406 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you take Bug Pokémon to school,\n"
# 407 "data/maps/PetalburgWoods/scripts.pory"
	.string "you get to be instantly popular!$"
# 408 "data/maps/PetalburgWoods/scripts.pory"

# 409 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfILose:
# 410 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 411 "data/maps/PetalburgWoods/scripts.pory"

# 412 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_PeopleRespectYou:
# 413 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you have a big Bug Pokémon,\n"
# 414 "data/maps/PetalburgWoods/scripts.pory"
	.string "people respect you for it.$"
# 415 "data/maps/PetalburgWoods/scripts.pory"

# 416 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch1:
# 417 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my Bug\n"
# 418 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pokémon grow up!\p"
# 419 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my Pokénav!$"
# 420 "data/maps/PetalburgWoods/scripts.pory"

# 421 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch2:
# 422 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my Bug \n"
# 423 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pokémon grow up!\p"
# 424 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my Pokénav!$"
# 425 "data/maps/PetalburgWoods/scripts.pory"

# 426 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MyPokemonHaveGrown:
# 427 "data/maps/PetalburgWoods/scripts.pory"
	.string "My Bug Pokémon have grown.\n"
# 428 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll be popular again.$"
# 429 "data/maps/PetalburgWoods/scripts.pory"

# 430 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfLose:
# 431 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 432 "data/maps/PetalburgWoods/scripts.pory"

# 433 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IveBeenTrainingHard:
# 434 "data/maps/PetalburgWoods/scripts.pory"
	.string "You get to be popular if you have\n"
# 435 "data/maps/PetalburgWoods/scripts.pory"
	.string "strong Pokémon, right?\l"
# 436 "data/maps/PetalburgWoods/scripts.pory"
	.string "So, I've been training hard.$"
# 437 "data/maps/PetalburgWoods/scripts.pory"

# 438 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_StayOutOfTallGrass:
# 439 "data/maps/PetalburgWoods/scripts.pory"
	.string "Yo, there!\n"
# 440 "data/maps/PetalburgWoods/scripts.pory"
	.string "Your Pokémon doing okay?\p"
# 441 "data/maps/PetalburgWoods/scripts.pory"
	.string "If your Pokémon are weak and you want\n"
# 442 "data/maps/PetalburgWoods/scripts.pory"
	.string "to avoid battles, you should stay out\l"
# 443 "data/maps/PetalburgWoods/scripts.pory"
	.string "of tall grass.$"
# 444 "data/maps/PetalburgWoods/scripts.pory"

# 445 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HiddenItemsExplanation:
# 446 "data/maps/PetalburgWoods/scripts.pory"
	.string "Sometimes, there are things on the\n"
# 447 "data/maps/PetalburgWoods/scripts.pory"
	.string "ground even if you can't see them.\p"
# 448 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's why I always check where I'm\n"
# 449 "data/maps/PetalburgWoods/scripts.pory"
	.string "walking.$"
# 450 "data/maps/PetalburgWoods/scripts.pory"

# 451 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TryUsingThisItem:
# 452 "data/maps/PetalburgWoods/scripts.pory"
	.string "Oh, neat!\n"
# 453 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's the Badge from Rustboro Gym!\p"
# 454 "data/maps/PetalburgWoods/scripts.pory"
	.string "You must be a Trainer.\n"
# 455 "data/maps/PetalburgWoods/scripts.pory"
	.string "You should try using this item.$"
# 456 "data/maps/PetalburgWoods/scripts.pory"

# 457 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MiracleSeedExplanation:
# 458 "data/maps/PetalburgWoods/scripts.pory"
	.string "It's a Miracle Seed.\n"
# 459 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a Pokémon holds that item, its\l"
# 460 "data/maps/PetalburgWoods/scripts.pory"
	.string "Grass-type moves become stronger.\p"
# 461 "data/maps/PetalburgWoods/scripts.pory"
	.string "Besides Miracle Seed, I think there are\n"
# 462 "data/maps/PetalburgWoods/scripts.pory"
	.string "other convenient items for Pokémon\l"
# 463 "data/maps/PetalburgWoods/scripts.pory"
	.string "to hold.$"
# 464 "data/maps/PetalburgWoods/scripts.pory"

# 465 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsExperience:
# 466 "data/maps/PetalburgWoods/scripts.pory"
	.string "Trainer Tips\p"
# 467 "data/maps/PetalburgWoods/scripts.pory"
	.string "Any Pokémon that appears even once\n"
# 468 "data/maps/PetalburgWoods/scripts.pory"
	.string "in a battle is awarded Exp. Points.\p"
# 469 "data/maps/PetalburgWoods/scripts.pory"
	.string "To raise a weak Pokémon, put it at the\n"
# 470 "data/maps/PetalburgWoods/scripts.pory"
	.string "left of the team list.\p"
# 471 "data/maps/PetalburgWoods/scripts.pory"
	.string "As soon as a battle starts, switch it\n"
# 472 "data/maps/PetalburgWoods/scripts.pory"
	.string "out. It will earn Exp. Points without\l"
# 473 "data/maps/PetalburgWoods/scripts.pory"
	.string "being exposed to any harm.$"
# 474 "data/maps/PetalburgWoods/scripts.pory"

# 475 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsPP:
# 476 "data/maps/PetalburgWoods/scripts.pory"
	.string "Trainer Tips\p"
# 477 "data/maps/PetalburgWoods/scripts.pory"
	.string "In addition to Hit Points (HP), Pokémon\n"
# 478 "data/maps/PetalburgWoods/scripts.pory"
	.string "have Power Points (PP) that are used to\l"
# 479 "data/maps/PetalburgWoods/scripts.pory"
	.string "make moves during battle.\p"
# 480 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a Pokémon runs out of PP, it must be\n"
# 481 "data/maps/PetalburgWoods/scripts.pory"
	.string "taken to a Pokémon Center.$"

PetalburgWoods_EventScript_ZiniaLeft::
# 488 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_PlayerGoneToRoute104
# 489 "data/maps/PetalburgWoods/scripts.pory"
	playse SE_EXIT
# 490 "data/maps/PetalburgWoods/scripts.pory"
	special SpawnCameraObject
# 491 "data/maps/PetalburgWoods/scripts.pory"
	delay 8
# 492 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PetalburgWoods_Movement_PanToZiniaLeft
# 493 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 494 "data/maps/PetalburgWoods/scripts.pory"
	special RemoveCameraObject
# 495 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_ZiniaReport
	return


PetalburgWoods_EventScript_ZiniaRight::
# 499 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_PlayerGoneToRoute104
# 500 "data/maps/PetalburgWoods/scripts.pory"
	playse SE_EXIT
# 501 "data/maps/PetalburgWoods/scripts.pory"
	special SpawnCameraObject
# 502 "data/maps/PetalburgWoods/scripts.pory"
	delay 8
# 503 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PetalburgWoods_Movement_PanToZiniaRight
# 504 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 505 "data/maps/PetalburgWoods/scripts.pory"
	special RemoveCameraObject
# 506 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_ZiniaReport
	return


PetalburgWoods_EventScript_ZiniaReport::
# 510 "data/maps/PetalburgWoods/scripts.pory"
	delay 8
# 511 "data/maps/PetalburgWoods/scripts.pory"
	applymovement 14, PetalburgWoods_Movement_ZiniaMoveLeft
# 512 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 14
# 513 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_ZiniaReport_Text_0
# 514 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 515 "data/maps/PetalburgWoods/scripts.pory"
	delay 24
# 516 "data/maps/PetalburgWoods/scripts.pory"
	applymovement 14, PetalburgWoods_Movement_ZiniaLookAround
# 517 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 14
# 518 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_ZiniaReport_Text_1
# 519 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 520 "data/maps/PetalburgWoods/scripts.pory"
	applymovement 14, Common_Movement_WalkInPlaceLeft
# 521 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 14
# 522 "data/maps/PetalburgWoods/scripts.pory"
	delay 32
# 523 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_WOODS_ZINIA
# 524 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 2
# 525 "data/maps/PetalburgWoods/scripts.pory"
	warpsilent MAP_ROUTE104, 10, 30
# 526 "data/maps/PetalburgWoods/scripts.pory"
	release
	end


# 530 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_PanToZiniaLeft:
# 531 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 531 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 532 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 532 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 532 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 532 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 532 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 532 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 532 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 532 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 532 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 532 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 532 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 533 "data/maps/PetalburgWoods/scripts.pory"
	walk_diag_southeast
# 533 "data/maps/PetalburgWoods/scripts.pory"
	walk_diag_southeast
	step_end

# 536 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_PanToZiniaRight:
# 537 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 537 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 538 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 538 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 538 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 538 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 538 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 538 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 538 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 538 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 538 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 538 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 539 "data/maps/PetalburgWoods/scripts.pory"
	walk_diag_southeast
# 539 "data/maps/PetalburgWoods/scripts.pory"
	walk_diag_southeast
	step_end

# 542 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_ZiniaMoveLeft:
# 543 "data/maps/PetalburgWoods/scripts.pory"
	walk_left
# 543 "data/maps/PetalburgWoods/scripts.pory"
	walk_left
	step_end

# 546 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_ZiniaLookAround:
# 547 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_right
# 548 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 549 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 550 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_down
# 551 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
	step_end

# 554 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_PlayerGoneToRoute104:
# 555 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 555 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 555 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 555 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 555 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 555 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
	step_end

PetalburgWoods_EventScript_ZiniaReport_Text_0:
# 513 "data/maps/PetalburgWoods/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: …This is the Petalburg recon\nteam checking in.\pI'm afraid I have to begin with an\napology, Ms. Shelly…\lIt's not good news…\pThe mission is a no-go…\pA little something cropped up and got\nin the way…\p…Roger that.\p…Got it.\nWill do.\pI'll continue investigating that energy\nwe detected.$"

PetalburgWoods_EventScript_ZiniaReport_Text_1:
# 518 "data/maps/PetalburgWoods/scripts.pory"
	.string "…\p…Phew!\pBut that kid sure had some promise as\na Trainer, I'd say.\p…$"
