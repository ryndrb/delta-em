# 1 "data/maps/VictoryRoad_1F/scripts.pory"

# 2 "data/maps/VictoryRoad_1F/scripts.pory"

# 3 "data/maps/VictoryRoad_1F/scripts.pory"
.set LOCALID_WALLY, 8
# 4 "data/maps/VictoryRoad_1F/scripts.pory"

# 5 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_MapScripts::
# 6 "data/maps/VictoryRoad_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VictoryRoad_1F_OnTransition
# 7 "data/maps/VictoryRoad_1F/scripts.pory"
	.byte 0
# 8 "data/maps/VictoryRoad_1F/scripts.pory"

# 9 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_OnTransition:
# 10 "data/maps/VictoryRoad_1F/scripts.pory"
	call_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VictoryRoad_1F_EventScript_WallyDefeatedPos
# 11 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 12 "data/maps/VictoryRoad_1F/scripts.pory"

# 13 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyDefeatedPos::
# 14 "data/maps/VictoryRoad_1F/scripts.pory"
    setobjectxyperm LOCALID_WALLY, 31, 8
# 15 "data/maps/VictoryRoad_1F/scripts.pory"
    setobjectmovementtype LOCALID_WALLY, MOVEMENT_TYPE_WANDER_AROUND
# 16 "data/maps/VictoryRoad_1F/scripts.pory"
    return
# 17 "data/maps/VictoryRoad_1F/scripts.pory"

# 18 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Edgar::
# 19 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_EDGAR, VictoryRoad_1F_Text_EdgarIntro, VictoryRoad_1F_Text_EdgarDefeat
# 20 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
# 21 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 22 "data/maps/VictoryRoad_1F/scripts.pory"

# 23 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Albert::
# 24 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_ALBERT, VictoryRoad_1F_Text_AlbertIntro, VictoryRoad_1F_Text_AlbertDefeat
# 25 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_AlbertPostBattle, MSGBOX_AUTOCLOSE
# 26 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 27 "data/maps/VictoryRoad_1F/scripts.pory"

# 28 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Hope::
# 29 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_HOPE, VictoryRoad_1F_Text_HopeIntro, VictoryRoad_1F_Text_HopeDefeat
# 30 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_HopePostBattle, MSGBOX_AUTOCLOSE
# 31 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 32 "data/maps/VictoryRoad_1F/scripts.pory"

# 33 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Quincy::
# 34 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_QUINCY, VictoryRoad_1F_Text_QuincyIntro, VictoryRoad_1F_Text_QuincyDefeat
# 35 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_QuincyPostBattle, MSGBOX_AUTOCLOSE
# 36 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 37 "data/maps/VictoryRoad_1F/scripts.pory"

# 38 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Katelynn::
# 39 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_KATELYNN, VictoryRoad_1F_Text_KatelynnIntro, VictoryRoad_1F_Text_KatelynnDefeat
# 40 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_KatelynnPostBattle, MSGBOX_AUTOCLOSE
# 41 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 42 "data/maps/VictoryRoad_1F/scripts.pory"

# 43 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarIntro:
# 44 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I've made it this far a couple times,\n"
# 45 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "but the last stretch is so long…$"
# 46 "data/maps/VictoryRoad_1F/scripts.pory"

# 47 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarDefeat:
# 48 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "My dream ends here again…$"
# 49 "data/maps/VictoryRoad_1F/scripts.pory"

# 50 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_EdgarPostBattle:
# 51 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "You've made it this far. Keep the\n"
# 52 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "momentum going and become the\l"
# 53 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Champion! If anyone can, it's you!$"
# 54 "data/maps/VictoryRoad_1F/scripts.pory"

# 55 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertIntro:
# 56 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I didn't come all this way to lose now.\n"
# 57 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "That possibility doesn't exist!$"
# 58 "data/maps/VictoryRoad_1F/scripts.pory"

# 59 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertDefeat:
# 60 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Impossible…\n"
# 61 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I lost?$"
# 62 "data/maps/VictoryRoad_1F/scripts.pory"

# 63 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_AlbertPostBattle:
# 64 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I lost here…\p"
# 65 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "That means I lack the qualifications\n"
# 66 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "to become the Champion…$"
# 67 "data/maps/VictoryRoad_1F/scripts.pory"

# 68 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopeIntro:
# 69 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "This seemingly infinite and harsh road\n"
# 70 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "lives up to its name of Victory.$"
# 71 "data/maps/VictoryRoad_1F/scripts.pory"

# 72 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopeDefeat:
# 73 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Your battle style is fantastic…$"
# 74 "data/maps/VictoryRoad_1F/scripts.pory"

# 75 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_HopePostBattle:
# 76 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "You seem to have the potential for\n"
# 77 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "becoming the Champion.$"
# 78 "data/maps/VictoryRoad_1F/scripts.pory"

# 79 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyIntro:
# 80 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "What is the Victory Road?\n"
# 81 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I'll tell you if you win!$"
# 82 "data/maps/VictoryRoad_1F/scripts.pory"

# 83 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyDefeat:
# 84 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Okay!\n"
# 85 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Well done!$"
# 86 "data/maps/VictoryRoad_1F/scripts.pory"

# 87 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_QuincyPostBattle:
# 88 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Getting through here safely--that's\n"
# 89 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "the final test for any Trainer aiming\l"
# 90 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "to become the Pokémon Champion.\p"
# 91 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "That's why it's called the Victory\n"
# 92 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Road.$"
# 93 "data/maps/VictoryRoad_1F/scripts.pory"

# 94 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnIntro:
# 95 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I have nothing to say to anyone\n"
# 96 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "that's come this far. Come on!$"
# 97 "data/maps/VictoryRoad_1F/scripts.pory"

# 98 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnDefeat:
# 99 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "This is a disgrace…$"
# 100 "data/maps/VictoryRoad_1F/scripts.pory"

# 101 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_KatelynnPostBattle:
# 102 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Humph, go right on ahead.\n"
# 103 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "See if I care.$"

VictoryRoad_1F_EventScript_WallyTrigger1::
# 108 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 109 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_WallyBattle
	return


VictoryRoad_1F_EventScript_WallyTrigger2::
# 113 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_TEMP_1, 2
# 114 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_WallyBattle
	return


VictoryRoad_1F_EventScript_WallyTrigger3::
# 118 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_TEMP_1, 3
# 119 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_WallyBattle
	return


VictoryRoad_1F_EventScript_WallyBattle::
# 123 "data/maps/VictoryRoad_1F/scripts.pory"
	lock
# 124 "data/maps/VictoryRoad_1F/scripts.pory"
	delay 16
# 125 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceDown
# 126 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement LOCALID_WALLY
# 127 "data/maps/VictoryRoad_1F/scripts.pory"
	playse SE_PIN
# 128 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark
# 129 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement LOCALID_WALLY
# 130 "data/maps/VictoryRoad_1F/scripts.pory"
	waitse
# 131 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_EventScript_WallyBattle_Text_0
# 132 "data/maps/VictoryRoad_1F/scripts.pory"
	closemessage
# 133 "data/maps/VictoryRoad_1F/scripts.pory"
	switch VAR_TEMP_1
# 134 "data/maps/VictoryRoad_1F/scripts.pory"
	case 1, VictoryRoad_1F_EventScript_WallyBattle_3
# 138 "data/maps/VictoryRoad_1F/scripts.pory"
	case 2, VictoryRoad_1F_EventScript_WallyBattle_4
# 141 "data/maps/VictoryRoad_1F/scripts.pory"
	case 3, VictoryRoad_1F_EventScript_WallyBattle_5
VictoryRoad_1F_EventScript_WallyBattle_1:
# 146 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 147 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_EventScript_WallyBattle_Text_1
# 148 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_EventScript_WallyBattle_Text_2
# 149 "data/maps/VictoryRoad_1F/scripts.pory"
	closemessage
# 150 "data/maps/VictoryRoad_1F/scripts.pory"
	delay 32
# 151 "data/maps/VictoryRoad_1F/scripts.pory"
	playbgm MUS_WALLY_BATTLE, FALSE
# 152 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_EventScript_WallyBattle_Text_3
# 153 "data/maps/VictoryRoad_1F/scripts.pory"
	closemessage
# 154 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_VR_1, VictoryRoad_1F_EventScript_WallyBattle_Text_4
# 155 "data/maps/VictoryRoad_1F/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 156 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_EventScript_WallyBattle_Text_5
# 157 "data/maps/VictoryRoad_1F/scripts.pory"
	closemessage
# 158 "data/maps/VictoryRoad_1F/scripts.pory"
	delay 24
# 159 "data/maps/VictoryRoad_1F/scripts.pory"
	playbgm MUS_WALLY_THEME, FALSE
# 160 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_EventScript_WallyBattle_Text_6
# 161 "data/maps/VictoryRoad_1F/scripts.pory"
	closemessage
# 162 "data/maps/VictoryRoad_1F/scripts.pory"
	delay 8
# 163 "data/maps/VictoryRoad_1F/scripts.pory"
	playse SE_PIN
# 164 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark
# 165 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement LOCALID_WALLY
# 166 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_EventScript_WallyBattle_Text_7
# 167 "data/maps/VictoryRoad_1F/scripts.pory"
	delay 8
# 168 "data/maps/VictoryRoad_1F/scripts.pory"
	giveitem ITEM_DAWN_STONE, 1
# 169 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_EventScript_WallyBattle_Text_8
# 170 "data/maps/VictoryRoad_1F/scripts.pory"
	closemessage
# 171 "data/maps/VictoryRoad_1F/scripts.pory"
	fadedefaultbgm
# 172 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkRight
# 173 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement LOCALID_WALLY
# 174 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceDown
# 175 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement LOCALID_WALLY
# 176 "data/maps/VictoryRoad_1F/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_VICTORY_ROAD
# 177 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_VICTORY_ROAD_1F_STATE, 1
# 178 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_LEVEL_CAP_VARIABLE, 76
# 179 "data/maps/VictoryRoad_1F/scripts.pory"
	release
	end

VictoryRoad_1F_EventScript_WallyBattle_3:
# 135 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VictoryRoad_1F_Movement_PlayerGotoWally1
# 136 "data/maps/VictoryRoad_1F/scripts.pory"
	delay 24
# 137 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkDown
	goto VictoryRoad_1F_EventScript_WallyBattle_1

VictoryRoad_1F_EventScript_WallyBattle_4:
# 139 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VictoryRoad_1F_Movement_PlayerGotoWally2
# 140 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkDown
	goto VictoryRoad_1F_EventScript_WallyBattle_1

VictoryRoad_1F_EventScript_WallyBattle_5:
# 142 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VictoryRoad_1F_Movement_PlayerGotoWally3
# 143 "data/maps/VictoryRoad_1F/scripts.pory"
	delay 24
# 144 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkDown
	goto VictoryRoad_1F_EventScript_WallyBattle_1


# 183 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Movement_PlayerGotoWally1:
# 184 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 185 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_right
# 186 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_in_place_up
	step_end

# 189 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Movement_PlayerGotoWally2:
# 190 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
	step_end

# 193 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Movement_PlayerGotoWally3:
# 194 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
# 195 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 196 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_in_place_up
	step_end

VictoryRoad_1F_EventScript_Wally::
# 200 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_EventScript_Wally_Text_0, MSGBOX_NPC
	end


VictoryRoad_1F_EventScript_WallyBattle_Text_0:
# 131 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: Ah! {PLAYER}!$"

VictoryRoad_1F_EventScript_WallyBattle_Text_1:
# 147 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I bet you must be surprised to see me\nin a place like this!\pThat promise that we made back then…\nThank you for keeping the end of it.\pIt was really all thanks to you that I\ncould make it this far, {PLAYER}.\pIt was only because I lost to you\nback then that I could become even\lstronger.\pI'm sure that you and your Pokémon\nmust have had to overcome a lot, too…\pTo make it all the way here.\nRight, {PLAYER}?$"

VictoryRoad_1F_EventScript_WallyBattle_Text_2:
# 148 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Everyone's grown so much…\pAnd now we'll finally get to see just\nwhat we all can do.\pStanding here facing you again gives\nme chills…$"

VictoryRoad_1F_EventScript_WallyBattle_Text_3:
# 152 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "…But I won't give up!\pI won't lose anymore.\pMy Pokémon have given me the courage\nand strength to fight.\pI have to win for their sake!\pSo get ready… Here I come!$"

VictoryRoad_1F_EventScript_WallyBattle_Text_4:
# 154 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "…\pI've lost…$"

VictoryRoad_1F_EventScript_WallyBattle_Text_5:
# 156 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "…\p…\pArghhh!!!\p…\p…\p…Hah.$"

VictoryRoad_1F_EventScript_WallyBattle_Text_6:
# 160 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{PLAYER}, you…\nAnd your Pokémon, too…\pThank you for not holding back when\nyou battled against us…\pFor not holding back when you beat\nus…\pAnd…\pGallade… Everyone…\pThank you so much…\pI feel like I've been able to take\nanother step forward thanks to you!$"

VictoryRoad_1F_EventScript_WallyBattle_Text_7:
# 166 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Oh!\nI know!\lI'll give you this to keep.\pI hope it will always remind you of\nyour battle with me…and with Gallade\land the rest of my team.$"

VictoryRoad_1F_EventScript_WallyBattle_Text_8:
# 169 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "If you have a male Kirlia as one of\nyour partners, {PLAYER}, I hope that\lyou might use that Dawn Stone on it\lfor me.\pI couldn't beat you this time,\n{PLAYER}.\pBut I'll stay here and continue\ntraining.\pAnd one day… Look out!\nI swear I'll catch up to you one day!\pWhen I do, promise we'll battle again!\nThat's a promise I intend to live up to!$"

VictoryRoad_1F_EventScript_Wally_Text_0:
# 200 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "{COLOR RED}Wally{COLOR DARK_GRAY}: I couldn't beat you this time,\n{PLAYER}.\pBut I'll stay here and continue\ntraining.\pAnd one day… Look out!\nI swear I'll catch up to you one day!\pWhen I do, promise we'll battle again!\nThat's a promise I intend to live up to!$"
