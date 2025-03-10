# 1 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 2 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_KYOGRE, 1
# 3 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_ARCHIE, 2
# 4 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_MAXIE, 3
# 5 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_GRUNT_1, 4
# 6 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_SHELLY, 5
# 7 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_KYOGRE_SLEEPING, 7
# 8 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 9 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_MapScripts::
# 10 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.byte 0

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogreTrigger1::
# 15 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_TEMP_1, 1
# 16 "data/maps/SeafloorCavern_Room9/scripts.pory"
	goto SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre
	return


SeafloorCavern_Room9_EventScript_ArchieAwakenKyogreTrigger2::
# 20 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_TEMP_1, 2
# 21 "data/maps/SeafloorCavern_Room9/scripts.pory"
	goto SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre
	return


SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre::
# 25 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock
# 26 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 16
# 27 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 28 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 29 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 30 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitse
# 31 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_0
# 32 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_1
# 33 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_2
# 34 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 35 "data/maps/SeafloorCavern_Room9/scripts.pory"
	fadescreen FADE_TO_BLACK
# 36 "data/maps/SeafloorCavern_Room9/scripts.pory"
	switch VAR_TEMP_1
# 37 "data/maps/SeafloorCavern_Room9/scripts.pory"
	case 1, SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_3
# 38 "data/maps/SeafloorCavern_Room9/scripts.pory"
	case 2, SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_4
SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_1:
# 40 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 41 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 24
# 42 "data/maps/SeafloorCavern_Room9/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 43 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 16
# 44 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_3
# 45 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 46 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceDown
# 47 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement LOCALID_ARCHIE
# 48 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 16
# 49 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_4
# 50 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 51 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceUp
# 52 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement LOCALID_ARCHIE
# 53 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_5
# 54 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 55 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceDown
# 56 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement LOCALID_ARCHIE
# 57 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_6
# 58 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_7
# 59 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 60 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceUp
# 61 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement LOCALID_ARCHIE
# 62 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_8
# 63 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 64 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 24
# 65 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_9
# 66 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 67 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceDown
# 68 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement LOCALID_ARCHIE
# 69 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_10
# 70 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 71 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 24
# 72 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_11
# 73 "data/maps/SeafloorCavern_Room9/scripts.pory"
	trainerbattle_no_intro TRAINER_ARCHIE, SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_12
# 74 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 16
# 75 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_13
# 76 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 77 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceUp
# 78 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement LOCALID_ARCHIE
# 79 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_14
# 80 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 81 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 16
# 82 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_15
# 83 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 24
# 84 "data/maps/SeafloorCavern_Room9/scripts.pory"
	fadenewbgm MUS_DUMMY
# 85 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_16
# 86 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 87 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceLeft
# 88 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement LOCALID_ARCHIE
# 89 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 90 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_ExclamationMark
# 91 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 8
# 92 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 93 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 94 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_SHELLY
# 95 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, SeafloorCavern_Room9_Movement_ShellyApproachArchie
# 96 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MAXIE, SeafloorCavern_Room9_Movement_MaxieMakeWay
# 97 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement LOCALID_SHELLY
# 98 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 16
# 99 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_17
# 100 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_18
# 101 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 102 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 24
# 103 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_19
# 104 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 105 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special SpawnCameraObject
# 106 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 107 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceUp
# 108 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement LOCALID_ARCHIE
# 109 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_20
# 110 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 111 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 16
# 112 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceUp
# 113 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 8
# 114 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 115 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 116 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setweather WEATHER_NONE
# 117 "data/maps/SeafloorCavern_Room9/scripts.pory"
	doweather
# 118 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special Script_FadeOutMapMusic
# 119 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 120 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_21
# 121 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 122 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 16
# 123 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special WaitWeather
# 124 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 125 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 0
# 126 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_M_DETECT
# 127 "data/maps/SeafloorCavern_Room9/scripts.pory"
	dofieldeffectsparkle 17, 42, 0
# 128 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 129 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 1
# 130 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 131 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_ORB
# 132 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special DoOrbEffect
# 133 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 160
# 134 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_KYOGRE_SLEEPING
# 135 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_KYOGRE
# 136 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 137 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 64
# 138 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special FadeOutOrbEffect
# 139 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 140 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 1
# 141 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 1
# 142 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8
# 143 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5
# 144 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 145 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 146 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
# 147 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement LOCALID_KYOGRE
# 148 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_KYOGRE
# 149 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 4
# 150 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 2
# 151 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 2
# 152 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8
# 153 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5
# 154 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 155 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 156 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 64
# 157 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 158 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceDown
# 159 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 8
# 160 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceRight
# 161 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 8
# 162 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceRight
# 163 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement LOCALID_MAXIE
# 164 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special RemoveCameraObject
# 165 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_22
# 166 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 16
# 167 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_23
# 168 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 169 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 8
# 170 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_BIKE_BELL
# 171 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitse
# 172 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 173 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_ExclamationMark
# 174 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement LOCALID_ARCHIE
# 175 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitse
# 176 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceRight
# 177 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement LOCALID_ARCHIE
# 178 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_24
# 179 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 180 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceUp
# 181 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement LOCALID_ARCHIE
# 182 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_25
# 183 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 184 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 185 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_ExclamationMark
# 186 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement LOCALID_ARCHIE
# 187 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitse
# 188 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_26
# 189 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 190 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkRight
# 191 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement LOCALID_SHELLY
# 192 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_27
# 193 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 194 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 24
# 195 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_28
# 196 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 197 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 24
# 198 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceLeft
# 199 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement LOCALID_MAXIE
# 200 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_29
# 201 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 202 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceLeft
# 203 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement LOCALID_ARCHIE
# 204 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 205 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_ExclamationMark
# 206 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 8
# 207 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceLeft
# 208 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement LOCALID_SHELLY
# 209 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitse
# 210 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_30
# 211 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_31
# 212 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 16
# 213 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_32
# 214 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 215 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceDown
# 216 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement LOCALID_SHELLY
# 217 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_33
# 218 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 219 "data/maps/SeafloorCavern_Room9/scripts.pory"
	fadescreen FADE_TO_BLACK
# 220 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 221 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_ROUTE128_STATE, 1
# 222 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 1
# 223 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 224 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 225 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 226 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 227 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
# 228 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
# 229 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 230 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 231 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_ARCHIE
# 232 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_MAXIE
# 233 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_SYS_WEATHER_CTRL
# 234 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
# 235 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 236 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 237 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SEAFLOOR_CAVERN_STATE, 1
# 238 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
# 239 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
# 240 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
# 241 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
# 242 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS
# 243 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 244 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_LEVEL_CAP_VARIABLE, 72
# 245 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 32
# 246 "data/maps/SeafloorCavern_Room9/scripts.pory"
	warpsilent MAP_ROUTE128, 38, 22
# 247 "data/maps/SeafloorCavern_Room9/scripts.pory"
	release
	end

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_3:
# 37 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_Room9_Movement_PlayerGoInFront1
	goto SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_1

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_4:
# 38 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_Room9_Movement_PlayerGoInFront2
	goto SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_1


# 251 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_PlayerGoInFront1:
# 252 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 253 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 253 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 253 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 254 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_in_place_up
	step_end

# 257 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_PlayerGoInFront2:
# 258 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 258 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 258 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 259 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_in_place_up
	step_end

# 262 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ShellyApproachArchie:
# 263 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 263 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 263 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 263 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 263 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 264 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 265 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
	step_end

# 269 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieMakeWay:
# 270 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 270 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 270 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 270 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 271 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 272 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_in_place_up
	step_end

# 275 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreExit:
# 276 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 276 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
	step_end

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_0:
# 31 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "{COLOR RED}Maxie{COLOR DARK_GRAY}: Urk…$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_1:
# 32 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: Bwahahaha!\pYou're looking pretty pathetic now,\naren't you? The great Maxie!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_2:
# 33 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "{COLOR RED}Maxie{COLOR DARK_GRAY}: Ugh…\pA-Archie…you…$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_3:
# 44 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: Bwahahaha!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_4:
# 49 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Y-you, child…\pWell, if it isn't my little adversary!\nI can't even find the words to praise\lyou as you deserve.\pSometimes it's best to keep things\nsimple.\pAll I'll say is you met my expectations,\nscamp!\pAnd I'm not just talking about\ntoday, but everything you've done up\ltill now.\pAnd that's why you'll get the honor of\nmeeting my new partner before anyone\lelse living in this world!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_5:
# 53 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The super-ancient Pokémon…{PAUSE 16}KYOGRE!!!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_6:
# 57 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "How 'bout that?!\pThat beautiful form so long resting at\npeace within the azure sea!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_7:
# 58 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "{COLOR RED}Maxie{COLOR DARK_GRAY}: …$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_8:
# 62 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: I've been waiting so long for\nthis day to come.\pWe humans have disregarded Pokémon\nand nature both in our endless\lpursuit of own desires and needs…\pAnd in the process, we've created this\nbroken and disordered world…\pBut this is the day when I finally\nobtain the power to return\leverything how it once was--to return\lto our beginnings!\pNow that I can release the ancient\npower!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_9:
# 65 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The ancient power of Primal Kyogre!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_10:
# 69 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "And now, you are the last token\nresistance that's trying to ruin my\lday.\pI'll use everything my team and I have\nto crush you once and for all!\pLet me show you now what I didn't get\nto show you all this time…\pThis is the true power of my team!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_11:
# 72 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "GRAAAAAAAAAHHHHHH!!!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_12:
# 73 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Like I figured…$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_13:
# 75 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hah…\nHah… Ahh…\p…\nAh.\lAha…\pAhahahaha…\pBwahahahahahaha!\nBwaha! AHAHAHAHAHAHA!\pPerfect! You're just as great as any\nlittle hero trying to save the world\loughta be!\pBut it changes nothing!\pI can't give up now!\nI can't!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_14:
# 79 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I WILL use the power of this Blue Orb\nto awaken Kyogre at last!\pThen I'll return everything in this\nworld to its original, pure state!!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_15:
# 82 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Now!\nAWAKEN, KYOGRE!\pRETURN EVERYTHING TO THE WAY IT WAS!!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_16:
# 85 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Archie!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_17:
# 99 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: Shelly?$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_18:
# 100 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "{COLOR RED}Shelly{COLOR DARK_GRAY}: That's enough!\pCan't you see that the world you\ndream of and the world that Kyogre\lwill create are two completely\ldifferent places?!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_19:
# 103 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: Shelly…\pI always believed that you at least\nwould understand my dreams…$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_20:
# 109 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But no!\nIn the end, the only one I can depend\lon is you, Kyogre!\pAbsorb all the power resting in this\nBlue Orb, and reclaim yourself!\lRevert to your primal form!\pThis is the time to take back\nthe great Evolution you lost in the\lancient past!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_21:
# 120 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "{COLOR RED}Maxie{COLOR DARK_GRAY}: No… That…$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_22:
# 165 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: Bwahahahaha!\nAt last…\pAT LAST!\nI've finally done it!!!\pIt hasn't even finished reversion, and\nit still has this much power!!!\pWith this I can return everything to\nits natural beginning!\pIt's time at last!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_23:
# 167 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "{COLOR RED}Shelly{COLOR DARK_GRAY}: What…have you done…$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_24:
# 178 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: Is that the crew outside?$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_25:
# 182 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What is it…?\pOh?\nSo the great deluge has begun…\pBwahahahaha!\nBut of course it has!\lThat is exactly what I have--$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_26:
# 188 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What…?\pWhat do you mean far more than we\nthought?!\pIt can't be…\nThen if it completes its Primal\lReversion…\pN-never mind that!\nJust keep an eye on it!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_27:
# 192 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "{COLOR RED}Shelly{COLOR DARK_GRAY}: Archie!\pWhat's going on outside?!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_28:
# 195 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: All that matters is…\pThat I have used the Blue Orb to\nawaken Kyogre…\pAnd now…\pI will return this world to its natural\nstate…\pThe state that is best for Pokémon!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_29:
# 200 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "{COLOR RED}Maxie{COLOR DARK_GRAY}: Archie.\pIt appears you also made a grave error\nregarding Kyogre's powers.$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_30:
# 210 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: What…did you say?$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_31:
# 211 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "{COLOR RED}Maxie{COLOR DARK_GRAY}: The “beginning” that Primal\nKyogre and Groudon brings about…\lThe way that they reset the world…\pThey will start by driving every living\nthing on this planet to death first!\pThis path leads only to an inescapable\ndespair that cannot be withstood.\lThat is all we have brought us.\pThis is what comes of the madness\nof thinking we could ever control the\lsuper-ancient Pokémon's power.$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_32:
# 213 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "{COLOR RED}Shelly{COLOR DARK_GRAY}: I knew it.\p…\pWe just need to get out of here!\nStanding around complaining isn't\lgoing to solve anything!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_33:
# 217 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "You, too!\nWell, hurry up!$"
