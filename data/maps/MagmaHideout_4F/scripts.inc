# 1 "data/maps/MagmaHideout_4F/scripts.pory"

# 2 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GROUDON, 1
# 3 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GRUNT_1, 2
# 4 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GRUNT_2, 3
# 5 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GRUNT_3, 4
# 6 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_TABITHA, 5
# 7 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_MAXIE, 6
# 8 "data/maps/MagmaHideout_4F/scripts.pory"
.set LOCALID_GROUDON_SLEEPING, 7
# 9 "data/maps/MagmaHideout_4F/scripts.pory"

# 10 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_MapScripts::
# 11 "data/maps/MagmaHideout_4F/scripts.pory"
	.byte 0
# 12 "data/maps/MagmaHideout_4F/scripts.pory"

# 13 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt11::
# 14 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_11, MagmaHideout_4F_Text_Grunt11Intro, MagmaHideout_4F_Text_Grunt11Defeat
# 15 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt11PostBattle, MSGBOX_AUTOCLOSE
# 16 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 17 "data/maps/MagmaHideout_4F/scripts.pory"

# 18 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt12::
# 19 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_12, MagmaHideout_4F_Text_Grunt12Intro, MagmaHideout_4F_Text_Grunt12Defeat
# 20 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt12PostBattle, MSGBOX_AUTOCLOSE
# 21 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 22 "data/maps/MagmaHideout_4F/scripts.pory"

# 23 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Grunt13::
# 24 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_13, MagmaHideout_4F_Text_Grunt13Intro, MagmaHideout_4F_Text_Grunt13Defeat
# 25 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt13PostBattle, MSGBOX_AUTOCLOSE
# 26 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 27 "data/maps/MagmaHideout_4F/scripts.pory"

# 28 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11Intro:
# 29 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I want to see Groudon, too, but they\n"
# 30 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "won't let me see even its tail…\p"
# 31 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "It's got me feeling really frustrated.\p"
# 32 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Oh, no!\n"
# 33 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I blabbed about Groudon!$"
# 34 "data/maps/MagmaHideout_4F/scripts.pory"

# 35 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11Defeat:
# 36 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I guess it's impossible to win if one\n"
# 37 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "doesn't have a calm mind…$"
# 38 "data/maps/MagmaHideout_4F/scripts.pory"

# 39 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt11PostBattle:
# 40 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I wonder if Groudon even has a tail?$"
# 41 "data/maps/MagmaHideout_4F/scripts.pory"

# 42 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12Intro:
# 43 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Fuhahaha!\n"
# 44 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Soon! Very soon!\l"
# 45 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Our grand objective will be achieved!$"
# 46 "data/maps/MagmaHideout_4F/scripts.pory"

# 47 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12Defeat:
# 48 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Grrr…\n"
# 49 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I've come so far, but now this?$"
# 50 "data/maps/MagmaHideout_4F/scripts.pory"

# 51 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt12PostBattle:
# 52 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Maxie, sir!\n"
# 53 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "An intruder is headed your way!$"
# 54 "data/maps/MagmaHideout_4F/scripts.pory"

# 55 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13Intro:
# 56 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You're not finished yet!\n"
# 57 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You're not getting by me easily!$"
# 58 "data/maps/MagmaHideout_4F/scripts.pory"

# 59 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13Defeat:
# 60 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Was I that easy to knock down?$"
# 61 "data/maps/MagmaHideout_4F/scripts.pory"

# 62 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Text_Grunt13PostBattle:
# 63 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "C-come on, one more match…$"

MagmaHideout_4F_EventScript_Maxie::
# 69 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 70 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 24
# 71 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceLeft
# 72 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement LOCALID_MAXIE
# 73 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Maxie_Text_0
# 74 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Maxie_Text_1
# 75 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 76 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceUp
# 77 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement LOCALID_MAXIE
# 78 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 16
# 79 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Maxie_Text_2
# 80 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 81 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceLeft
# 82 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement LOCALID_MAXIE
# 83 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Maxie_Text_3
# 84 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 85 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 8
# 86 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceUp
# 87 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement LOCALID_MAXIE
# 88 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 32
# 89 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Maxie_Text_4
# 90 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 91 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 16
# 92 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_BANG
# 93 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Maxie_Text_5
# 94 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 95 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceLeft
# 96 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement LOCALID_MAXIE
# 97 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Maxie_Text_6
# 98 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 99 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 24
# 100 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Maxie_Text_7
# 101 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MAGMA_HIDEOUT, MagmaHideout_4F_EventScript_Maxie_Text_8
# 102 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Maxie_Text_9
# 103 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 104 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 16
# 105 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Maxie_Text_10
# 106 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 107 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceUp
# 108 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement LOCALID_MAXIE
# 109 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Maxie_Text_11
# 110 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 16
# 111 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Maxie_Text_12
# 112 "data/maps/MagmaHideout_4F/scripts.pory"
	fadenewbgm MUS_DUMMY
# 113 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 24
# 114 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Maxie_Text_13
# 115 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 116 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 16
# 117 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceLeft
# 118 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement LOCALID_MAXIE
# 119 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 8
# 120 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_PIN
# 121 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 122 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 8
# 123 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 124 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 125 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_TABITHA
# 126 "data/maps/MagmaHideout_4F/scripts.pory"
	setobjectxy LOCALID_TABITHA, 7, 21
# 127 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, MagmaHideout_4F_Movement_TabithaApproachMaxie
# 128 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Movement_PlayerMoveAside
# 129 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement LOCALID_TABITHA
# 130 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Maxie_Text_14
# 131 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Maxie_Text_15
# 132 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 133 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 32
# 134 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Maxie_Text_16
# 135 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 136 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceUp
# 137 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement LOCALID_MAXIE
# 138 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 16
# 139 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Maxie_Text_17
# 140 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 141 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 8
# 142 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceUp
# 143 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 144 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 145 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 64
# 146 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 147 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_M_DETECT
# 148 "data/maps/MagmaHideout_4F/scripts.pory"
	dofieldeffectsparkle 18, 42, 0
# 149 "data/maps/MagmaHideout_4F/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 150 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 0
# 151 "data/maps/MagmaHideout_4F/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 152 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_ORB
# 153 "data/maps/MagmaHideout_4F/scripts.pory"
	special DoOrbEffect
# 154 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 160
# 155 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GROUDON_SLEEPING
# 156 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_GROUDON
# 157 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 158 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 64
# 159 "data/maps/MagmaHideout_4F/scripts.pory"
	special FadeOutOrbEffect
# 160 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 161 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 1
# 162 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 1
# 163 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8
# 164 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5
# 165 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 166 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 167 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonExit
# 168 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement LOCALID_GROUDON
# 169 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GROUDON
# 170 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 8
# 171 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 2
# 172 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 2
# 173 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8
# 174 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5
# 175 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 176 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 177 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 32
# 178 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceLeft
# 179 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 8
# 180 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceRight
# 181 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement LOCALID_TABITHA
# 182 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 183 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 184 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 185 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 186 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Maxie_Text_18
# 187 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 16
# 188 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Maxie_Text_19
# 189 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 190 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 8
# 191 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_BIKE_BELL
# 192 "data/maps/MagmaHideout_4F/scripts.pory"
	waitse
# 193 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_PIN
# 194 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 195 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement LOCALID_MAXIE
# 196 "data/maps/MagmaHideout_4F/scripts.pory"
	waitse
# 197 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Maxie_Text_20
# 198 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 199 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceRight
# 200 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement LOCALID_MAXIE
# 201 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Maxie_Text_21
# 202 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 203 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_PIN
# 204 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 205 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement LOCALID_MAXIE
# 206 "data/maps/MagmaHideout_4F/scripts.pory"
	waitse
# 207 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Maxie_Text_22
# 208 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 209 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkRight
# 210 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement LOCALID_TABITHA
# 211 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Maxie_Text_23
# 212 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 213 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceUp
# 214 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement LOCALID_MAXIE
# 215 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 32
# 216 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Maxie_Text_24
# 217 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 218 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceLeft
# 219 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement LOCALID_MAXIE
# 220 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_EventScript_Maxie_Text_25
# 221 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 222 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
# 223 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY
# 224 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 1
# 225 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT
# 226 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_SLATEPORT_HARBOR_STATE, 1
# 227 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 228 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAXIE
# 229 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 230 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 231 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 232 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_TABITHA
# 233 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
# 234 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_LEVEL_CAP_VARIABLE, 65
# 235 "data/maps/MagmaHideout_4F/scripts.pory"
	fadedefaultbgm
# 236 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 32
# 237 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 238 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
	end


# 242 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_TabithaApproachMaxie:
# 243 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 243 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 243 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 243 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 243 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 243 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
# 244 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 245 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 246 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_right
	step_end

# 249 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_PlayerMoveAside:
# 250 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 250 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 250 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 250 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 250 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 251 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_down
# 252 "data/maps/MagmaHideout_4F/scripts.pory"
	walk_in_place_up
	step_end

# 255 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_GroudonExit:
# 256 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
# 256 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
	step_end

MagmaHideout_4F_EventScript_Maxie_Text_0:
# 73 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "{COLOR RED}Maxie{COLOR DARK_GRAY}: Fuhahaha!\nJust as I predicted.\pEven I, the great Maxie, have\nfound myself wishing for something I\lcannot justify.\pAnd the illogical desire that I\nharbored was to have you present\lhere at this moment.\pHahaha…\nAnd that fool's wish has come true.\pFantastic!\nNothing could please me more!$"

MagmaHideout_4F_EventScript_Maxie_Text_1:
# 74 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I suppose I should make introductions…\pI present to you my incomparable\npartner, who will assist Team Magma in\ldriving humanity forward to its next\llevel!$"

MagmaHideout_4F_EventScript_Maxie_Text_2:
# 79 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "The super-ancient Pokémon…{PAUSE 24}Groudon!$"

MagmaHideout_4F_EventScript_Maxie_Text_3:
# 83 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Behold!\pThis great form slumbering in\ndefiance of even the broiling lava\lsurrounding it!$"

MagmaHideout_4F_EventScript_Maxie_Text_4:
# 89 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "So long have I waited for this day…\pImmeasurably long!\pThis foolish world has held back\nhumanity's progress out of misguided\lidealism regarding the coexistence\lof humans and Pokémon.\pBut this ancient creature can bring\nthat to its rightful end, creating a\lnew land upon which humanity may\lstride freely forward.$"

MagmaHideout_4F_EventScript_Maxie_Text_5:
# 93 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Now that I have at last obtained the\npower of {COLOR RED}Primal Groudon{COLOR DARK_GRAY}!$"

MagmaHideout_4F_EventScript_Maxie_Text_6:
# 97 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "And now, you are the final obstacle\nremaining between me and my goals.\pIt behooves me to use every tool at my\ndisposal to eliminate you.\pI must apologize for making you wait\nthrough our encounter at Mt. Chimney\lwithout treating you this sight.\pBrace yourself for my ultimate attack!$"

MagmaHideout_4F_EventScript_Maxie_Text_7:
# 100 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Fuhahaha!$"

MagmaHideout_4F_EventScript_Maxie_Text_8:
# 101 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You've really done it, child.\pYou've shown a power that exceeds that\nof the great Maxie!$"

MagmaHideout_4F_EventScript_Maxie_Text_9:
# 102 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hah…\nHah… Hahhh…\p…\nAh.\lAha…\pFuhahaha…\pHahahahaha!\nGAHAHAHAHAHAHA!$"

MagmaHideout_4F_EventScript_Maxie_Text_10:
# 105 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Splendid.\pJust splendid, my young Trainer.\pNo, it is more than that!\pI should be calling you my young hero!\pBelieving until the very end that\na world where humanity and Pokémon\lcoexist must be the best…\pRejecting my ideals without a second\nthought…\pYes, watching you struggle\ndesperately to halt the beginning of\lthe world's end…\lYou are undoubtedly a hero!$"

MagmaHideout_4F_EventScript_Maxie_Text_11:
# 109 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "So noble…\pAnd yet.\pI will not yield!\nI will not bend!\lMy ideals will not be shaken!\pMy dream for the world's next step will\nnever change!$"

MagmaHideout_4F_EventScript_Maxie_Text_12:
# 111 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I will use the Red Orb to awaken\nGroudon, revert it to its primal form,\land put an end to all else!$"

MagmaHideout_4F_EventScript_Maxie_Text_13:
# 114 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Wait! Maxie!$"

MagmaHideout_4F_EventScript_Maxie_Text_14:
# 130 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "{COLOR RED}Maxie{COLOR DARK_GRAY}: Buh?! Tabitha?!$"

MagmaHideout_4F_EventScript_Maxie_Text_15:
# 131 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "{COLOR RED}Tabitha{COLOR DARK_GRAY}: Do stop that now… Please!\nMaxie!\pYou just don't understand!\pWhat Groudon will bring upon\nawakening is an end to the world!$"

MagmaHideout_4F_EventScript_Maxie_Text_16:
# 134 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "{COLOR RED}Maxie{COLOR DARK_GRAY}: Humph.\pDid you think I had not noticed?\nThat I had somehow failed to realized\lyou were after my spot?\pSuch a sad development indeed.\nTo be betrayed by my number two…$"

MagmaHideout_4F_EventScript_Maxie_Text_17:
# 139 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "In the end, there is only one being\nupon which I can depend!\lNow, Groudon!\pAbsorb all of the power resting in this\nRed Orb, and reclaim yourself!\pRevert to your primal form!\pThis is the time to take back\nthe great Evolution you lost in the\lancient past!\lReclaim the possibility you once held!$"

MagmaHideout_4F_EventScript_Maxie_Text_18:
# 186 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "{COLOR RED}Maxie{COLOR DARK_GRAY}: Gahahahaha!\nAt last…\pAT LAST!\nI've finally done it!!!\pA new world for human evolution will be\nborn!!!\pWe shall stride forward!!!$"

MagmaHideout_4F_EventScript_Maxie_Text_19:
# 188 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "{COLOR RED}Tabitha{COLOR DARK_GRAY}: Ohh… What have you done…\nBoss… What…$"

MagmaHideout_4F_EventScript_Maxie_Text_20:
# 197 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "{COLOR RED}Maxie{COLOR DARK_GRAY}: …Hm?\nA message from our members outside?$"

MagmaHideout_4F_EventScript_Maxie_Text_21:
# 201 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "What is it?\p…\pI should expect so.\nThat is what I have long--\lNo, what WE have long wished for.$"

MagmaHideout_4F_EventScript_Maxie_Text_22:
# 207 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "What?! It is greater than simulations\npredicted?\pIt will be a risk to our safety of it\ncontinues?!\pThat cannot be…\pIt has only just awoken…\nWhere is it getting so much power from?\pAnd how much more will it gain when it\ndoes undergo Primal Reversion…\pC-continue your readings!\nThen report back!$"

MagmaHideout_4F_EventScript_Maxie_Text_23:
# 211 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "{COLOR RED}Tabitha{COLOR DARK_GRAY}: Boss?! Maxie?!\nJust what is happening?!$"

MagmaHideout_4F_EventScript_Maxie_Text_24:
# 216 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "{COLOR RED}Maxie{COLOR DARK_GRAY}: All that matter is…\pThat I have used the Red Orb to awaken\nGroudon.\pAnd now…\pI will transform this planet to a land\nideal for humanity.$"

MagmaHideout_4F_EventScript_Maxie_Text_25:
# 220 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I am going after Groudon, so this is\nwhere we part, young Trainer.$"
