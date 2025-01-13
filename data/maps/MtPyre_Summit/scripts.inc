# 1 "data/maps/MtPyre_Summit/scripts.pory"

# 2 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_OLD_MAN, 1
# 3 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_ARCHIE, 2
# 4 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_OLD_LADY, 3
# 5 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_MATT, 4
# 6 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_GRUNT_2, 5
# 7 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_GRUNT_3, 6
# 8 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_GRUNT_4, 7
# 9 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_MAXIE, 8
# 10 "data/maps/MtPyre_Summit/scripts.pory"

# 11 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_MapScripts::
# 12 "data/maps/MtPyre_Summit/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtPyre_Summit_OnTransition
# 13 "data/maps/MtPyre_Summit/scripts.pory"
	.byte 0
# 14 "data/maps/MtPyre_Summit/scripts.pory"

# 15 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_OnTransition:
# 16 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_MT_PYRE_STATE, 0, MtPyre_Summit_EventScript_SetOldPeoplePositions
# 17 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_MT_PYRE_STATE, 2, MtPyre_Summit_EventScript_SetArchieMaxiePositions
# 18 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 19 "data/maps/MtPyre_Summit/scripts.pory"

# 20 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_SetOldPeoplePositions::
# 21 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectxyperm LOCALID_OLD_MAN, 21, 5
# 22 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectxyperm LOCALID_OLD_LADY, 21, 6
# 23 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectmovementtype LOCALID_OLD_MAN, MOVEMENT_TYPE_FACE_DOWN
# 24 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectmovementtype LOCALID_OLD_LADY, MOVEMENT_TYPE_FACE_UP
# 25 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 26 "data/maps/MtPyre_Summit/scripts.pory"

# 27 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_SetArchieMaxiePositions::
# 28 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectxyperm LOCALID_MAXIE, 23, 6
# 29 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 22, 6
# 30 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 31 "data/maps/MtPyre_Summit/scripts.pory"

# 32 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldMan::
# 33 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 34 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 35 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, MtPyre_Summit_EventScript_OldManAfterRayquaza
# 36 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WillYouHearOutMyTale, MSGBOX_YESNO
# 37 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManTale
# 38 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
# 39 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 40 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 41 "data/maps/MtPyre_Summit/scripts.pory"

# 42 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManAfterRayquaza::
# 43 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HearTheNewLegendOfHoenn, MSGBOX_YESNO
# 44 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManNewTale
# 45 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
# 46 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 47 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 48 "data/maps/MtPyre_Summit/scripts.pory"

# 49 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManTale::
# 50 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreTale, MSGBOX_DEFAULT
# 51 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 52 "data/maps/MtPyre_Summit/scripts.pory"

# 53 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_DeclineOldManTale::
# 54 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WellThatTooIsFine, MSGBOX_DEFAULT
# 55 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 56 "data/maps/MtPyre_Summit/scripts.pory"

# 57 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManNewTale::
# 58 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HoennTrioTale, MSGBOX_DEFAULT
# 59 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 60 "data/maps/MtPyre_Summit/scripts.pory"

# 61 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLady::
# 62 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 63 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 64 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_RETURNED_RED_OR_BLUE_ORB, MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned
# 65 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_ge VAR_MT_PYRE_STATE, 3, MtPyre_Summit_EventScript_OldLadyOrbsReturned
# 66 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, MtPyre_Summit_EventScript_OldLadyLegendariesAwake
# 67 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_OrbsHaveBeenTaken, MSGBOX_DEFAULT
# 68 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 69 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 70 "data/maps/MtPyre_Summit/scripts.pory"

# 71 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyOrbsReturned::
# 72 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs, MSGBOX_DEFAULT
# 73 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_TakeTheseOrbs, MSGBOX_DEFAULT
# 74 "data/maps/MtPyre_Summit/scripts.pory"
	delay 8
# 75 "data/maps/MtPyre_Summit/scripts.pory"
	giveitem ITEM_RED_ORB, 1
# 76 "data/maps/MtPyre_Summit/scripts.pory"
	giveitem ITEM_BLUE_ORB, 1
# 77 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_MayTheOrbsGuideYou, MSGBOX_DEFAULT
# 78 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 79 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RETURNED_RED_OR_BLUE_ORB
# 80 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 81 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 82 "data/maps/MtPyre_Summit/scripts.pory"

# 83 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyLegendariesAwake::
# 84 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreAwakened, MSGBOX_DEFAULT
# 85 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 86 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 87 "data/maps/MtPyre_Summit/scripts.pory"

# 88 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned::
# 89 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_SuperAncientPokemonTaughtUs, MSGBOX_DEFAULT
# 90 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 91 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 92 "data/maps/MtPyre_Summit/scripts.pory"

# 93 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger0::
# 94 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 95 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 96 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 97 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 98 "data/maps/MtPyre_Summit/scripts.pory"

# 99 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger1::
# 100 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 101 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 102 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 103 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 104 "data/maps/MtPyre_Summit/scripts.pory"

# 105 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger2::
# 106 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 107 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 108 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 109 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 110 "data/maps/MtPyre_Summit/scripts.pory"

# 111 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs::
# 112 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 113 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 114 "data/maps/MtPyre_Summit/scripts.pory"
	delay 64
# 115 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieMaxieBeginExit0
# 116 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieMaxieBeginExit1
# 117 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieMaxieBeginExit2
# 118 "data/maps/MtPyre_Summit/scripts.pory"
	playse SE_PIN
# 119 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 120 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 121 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 122 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 123 "data/maps/MtPyre_Summit/scripts.pory"
	delay 32
# 124 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachPlayer0
# 125 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachPlayer1
# 126 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachPlayer2
# 127 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_MaxieSilence, MSGBOX_DEFAULT
# 128 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 129 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachArchie0
# 130 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachArchie1
# 131 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachArchie2
# 132 "data/maps/MtPyre_Summit/scripts.pory"
	delay 32
# 133 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 134 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 135 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 136 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_ARCHIE
# 137 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MAXIE
# 138 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 3
# 139 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
# 140 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 141 "data/maps/MtPyre_Summit/scripts.pory"

# 142 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit0::
# 143 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0
# 144 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 145 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 146 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 147 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 148 "data/maps/MtPyre_Summit/scripts.pory"

# 149 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit1::
# 150 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1
# 151 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 152 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 153 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 154 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 155 "data/maps/MtPyre_Summit/scripts.pory"

# 156 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit2::
# 157 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2
# 158 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 159 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 160 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 161 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 162 "data/maps/MtPyre_Summit/scripts.pory"

# 163 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer0::
# 164 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie0
# 165 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 166 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer0
# 167 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 168 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 169 "data/maps/MtPyre_Summit/scripts.pory"

# 170 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer1::
# 171 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
# 172 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 173 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer1
# 174 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 175 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 176 "data/maps/MtPyre_Summit/scripts.pory"

# 177 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer2::
# 178 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
# 179 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 180 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer2
# 181 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 182 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 183 "data/maps/MtPyre_Summit/scripts.pory"

# 184 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie0::
# 185 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 186 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie0
# 187 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 188 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 189 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 190 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 191 "data/maps/MtPyre_Summit/scripts.pory"

# 192 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie1::
# 193 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 194 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie1
# 195 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 196 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 197 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 198 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 199 "data/maps/MtPyre_Summit/scripts.pory"

# 200 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie2::
# 201 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 202 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie2
# 203 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 204 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 205 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 206 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 207 "data/maps/MtPyre_Summit/scripts.pory"

# 208 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceMaxie0:
# 209 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 210 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 211 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 212 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 213 "data/maps/MtPyre_Summit/scripts.pory"

# 214 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceMaxie:
# 215 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 216 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 217 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 218 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 219 "data/maps/MtPyre_Summit/scripts.pory"

# 220 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieExit:
# 221 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 222 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 223 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 224 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 225 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 226 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 227 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 228 "data/maps/MtPyre_Summit/scripts.pory"

# 229 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieExit:
# 230 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 231 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 232 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 233 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 234 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 235 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 236 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 237 "data/maps/MtPyre_Summit/scripts.pory"

# 238 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0:
# 239 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 240 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 241 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 242 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 243 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 244 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 245 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 246 "data/maps/MtPyre_Summit/scripts.pory"

# 247 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1:
# 248 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 249 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 250 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 251 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 252 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 253 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 254 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 255 "data/maps/MtPyre_Summit/scripts.pory"

# 256 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2:
# 257 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 258 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 259 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 260 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 261 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 262 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 263 "data/maps/MtPyre_Summit/scripts.pory"

# 264 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer0:
# 265 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 266 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 267 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 268 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 269 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 270 "data/maps/MtPyre_Summit/scripts.pory"

# 271 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer1:
# 272 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 273 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 274 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 275 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 276 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 277 "data/maps/MtPyre_Summit/scripts.pory"

# 278 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer2:
# 279 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 280 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 281 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 282 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 283 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 284 "data/maps/MtPyre_Summit/scripts.pory"

# 285 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieWatchMaxie:
# 286 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 287 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_up
# 288 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 289 "data/maps/MtPyre_Summit/scripts.pory"

# 290 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchMaxie:
# 291 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 292 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 293 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 294 "data/maps/MtPyre_Summit/scripts.pory"

# 295 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie0:
# 296 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 297 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 298 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 299 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 300 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 301 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 302 "data/maps/MtPyre_Summit/scripts.pory"

# 303 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie1:
# 304 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 305 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 306 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 307 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 308 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 309 "data/maps/MtPyre_Summit/scripts.pory"

# 310 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie2:
# 311 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 312 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 313 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 314 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 315 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 316 "data/maps/MtPyre_Summit/scripts.pory"

# 317 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt2::
# 318 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, MtPyre_Summit_Text_Grunt2Intro, MtPyre_Summit_Text_Grunt2Defeat
# 319 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 320 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 321 "data/maps/MtPyre_Summit/scripts.pory"

# 322 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt3::
# 323 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_3, MtPyre_Summit_Text_Grunt3Intro, MtPyre_Summit_Text_Grunt3Defeat
# 324 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 325 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 326 "data/maps/MtPyre_Summit/scripts.pory"

# 327 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt4::
# 328 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_4, MtPyre_Summit_Text_Grunt4Intro, MtPyre_Summit_Text_Grunt4Defeat
# 329 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 330 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 331 "data/maps/MtPyre_Summit/scripts.pory"

# 332 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2Intro:
# 333 "data/maps/MtPyre_Summit/scripts.pory"
	.string "What's up with you, brat?\nWhat does a single kid expect to do?$"
# 334 "data/maps/MtPyre_Summit/scripts.pory"

# 335 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2Defeat:
# 336 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Wow, you're remarkably strong.$"
# 337 "data/maps/MtPyre_Summit/scripts.pory"

# 338 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2PostBattle:
# 339 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You don't know anything!\n"
# 340 "data/maps/MtPyre_Summit/scripts.pory"
	.string "So why are you messing with us?$"
# 341 "data/maps/MtPyre_Summit/scripts.pory"

# 342 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3Intro:
# 343 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Hey, I remember you from Mt. Chimney!\pYou don't belong to either Team, so why\nwould you be here?$"
# 344 "data/maps/MtPyre_Summit/scripts.pory"

# 345 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3Defeat:
# 346 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Urgggh…\nBeaten by some kid--again!$"
# 347 "data/maps/MtPyre_Summit/scripts.pory"

# 348 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3PostBattle:
# 349 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Heh, it doesn't matter!\n"
# 350 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We bought ourselves some time!\p"
# 351 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Boss should have snatched what\n"
# 352 "data/maps/MtPyre_Summit/scripts.pory"
	.string "he was after!$"
# 353 "data/maps/MtPyre_Summit/scripts.pory"

# 354 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4Intro:
# 355 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I'll show exactly how scary Team Aqua\ncan be!$"
# 356 "data/maps/MtPyre_Summit/scripts.pory"

# 357 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4Defeat:
# 358 "data/maps/MtPyre_Summit/scripts.pory"
	.string "So you think you can pick a fight with\nTeam Aqua all by your lonesome…$"
# 359 "data/maps/MtPyre_Summit/scripts.pory"

# 360 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4PostBattle:
# 361 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We have a great combination going\n"
# 362 "data/maps/MtPyre_Summit/scripts.pory"
	.string "with us members and our leader.$"
# 363 "data/maps/MtPyre_Summit/scripts.pory"

# 364 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_OrbsHaveBeenTaken:
# 365 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Blue Orb and Red Orb taken by\nthose sinister men…\pHaving the two separated can only lead\nto disaster…\pI fear something terrible will happen…$"
# 366 "data/maps/MtPyre_Summit/scripts.pory"

# 367 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreAwakened:
# 368 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, my goodness…\pYou say that both Groudon and Kyogre\nhave been awakened?\pIt is said that the Blue Orb and the\nRed Orb quelled the rage of the two\lPokémon…\pIt is also said that the true owner of\nthe Orbs still exists.\pHowever, no one knows who, or what\nexactly, the Orbs belong to.\pIt could be a human, or perhaps a\nPokémon, but no one knows.$"
# 369 "data/maps/MtPyre_Summit/scripts.pory"

# 370 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs:
# 371 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The two men who took the Orbs came\nback to return them on their own.\pThose men…\nPerhaps they are not so evil after all…$"
# 372 "data/maps/MtPyre_Summit/scripts.pory"

# 373 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_TakeTheseOrbs:
# 374 "data/maps/MtPyre_Summit/scripts.pory"
	.string "In gratitude for your role in calming\nGroudon and Kyogre, and for the safe\lreturn of the orbs, I feel compelled\lto reward you, young trainer.\pTake these orbs.\nThey may prove crucial in your journey.$"
# 375 "data/maps/MtPyre_Summit/scripts.pory"

# 376 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_MayTheOrbsGuideYou:
# 377 "data/maps/MtPyre_Summit/scripts.pory"
	.string "May they guide you towards a future of\nbalance and harmony.$"
# 378 "data/maps/MtPyre_Summit/scripts.pory"

# 379 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_SuperAncientPokemonTaughtUs:
# 380 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The embodiments of the land, sea, and\nthe sky…\pThat is said to be the identities of\nthe super-ancient Pokémon…\pIn the same way that we humans\nand Pokémon have life, our world, too,\lis alive…\pThe super-ancient Pokémon have taught\nus that…$"
# 381 "data/maps/MtPyre_Summit/scripts.pory"

# 382 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WillYouHearOutMyTale:
# 383 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Mt. Pyre exists to soothe the spirits\nof Pokémon that have passed on…\pFrom so high up, we can look down upon\nHoenn.\pSuch a view must bring peace even to\nthose lost Pokémon…\pIs it coincidence that you are here?\pWill you hear my tale? A tale long told\nin the Hoenn region?$"
# 384 "data/maps/MtPyre_Summit/scripts.pory"

# 385 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreTale:
# 386 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long, ago…\pThe world was wracked by an unceasing\nbattle between Groudon, the Pokémon\lof the land, and Kyogre, the Pokémon\lof the sea…\pGroudon raising mountains and creating\ncontinents…\pKyogre raising huge waves and carving\nout oceans…\pTheir fierce duel rage without end.\pThe world was assaulted by merciless\nheat and vicious rains in turn.\pOnly one power was great enough to\nquell this terrible outpouring.\lThat of the Red Orb and the Blue Orb.\pThe light which swelled from the Blue\nOrb quieted Groudon in its rage.\pThe light which poured from the Red Orb\nclamed Kyogre in its fury.\pThe two, now docile, dove deep into the\nsea and disappeared from human eyes…$"
# 387 "data/maps/MtPyre_Summit/scripts.pory"

# 388 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WellThatTooIsFine:
# 389 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I see…\nWell, that, too, is fine…$"
# 390 "data/maps/MtPyre_Summit/scripts.pory"

# 391 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_MaxieSilence:
# 392 "data/maps/MtPyre_Summit/scripts.pory"
	.string "{COLOR RED}Maxie{COLOR DARK_GRAY}: …\p… … … … … …\n… … … … … …$"
# 393 "data/maps/MtPyre_Summit/scripts.pory"

# 394 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HearTheNewLegendOfHoenn:
# 395 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is my role to pass on the legends\n"
# 396 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of Hoenn to future generations.\p"
# 397 "data/maps/MtPyre_Summit/scripts.pory"
	.string "And the crisis that just ended in\n"
# 398 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Sootopolis rewrote a legend…\p"
# 399 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Have you the time to hear the new\n"
# 400 "data/maps/MtPyre_Summit/scripts.pory"
	.string "legend of Hoenn?$"
# 401 "data/maps/MtPyre_Summit/scripts.pory"

# 402 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HoennTrioTale:
# 403 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 404 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 405 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the Pokémon of the land\l"
# 406 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the Pokémon of the sea…\p"
# 407 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the land raised\n"
# 408 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 409 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the sea raised huge\n"
# 410 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 411 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 412 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 413 "data/maps/MtPyre_Summit/scripts.pory"
	.string "fires and vicious storms.\p"
# 414 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It was then that the Pokémon of\n"
# 415 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sky descended from a storm.\p"
# 416 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon, shining a vivid green,\n"
# 417 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the two enraged Pokémon.\p"
# 418 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Then, its duty done, the green Pokémon\n"
# 419 "data/maps/MtPyre_Summit/scripts.pory"
	.string "flew off into the wild blue yonder…$"

MtPyre_Summit_EventScript_TeamAquaTrigger1::
# 425 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_TEMP_0, 1
# 426 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
	end


MtPyre_Summit_EventScript_TeamAquaTrigger2::
# 431 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_TEMP_0, 2
# 432 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
	end


MtPyre_Summit_EventScript_TeamAquaTrigger3::
# 437 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_TEMP_0, 3
# 438 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
	end


MtPyre_Summit_EventScript_TeamAquaExits::
# 443 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 444 "data/maps/MtPyre_Summit/scripts.pory"
	delay 48
# 445 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_OLD_MAN, Common_Movement_WalkInPlaceRight
# 446 "data/maps/MtPyre_Summit/scripts.pory"
	delay 8
# 447 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_OLD_LADY, Common_Movement_WalkInPlaceRight
# 448 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement LOCALID_OLD_LADY
# 449 "data/maps/MtPyre_Summit/scripts.pory"
	delay 16
# 450 "data/maps/MtPyre_Summit/scripts.pory"
	special SpawnCameraObject
# 451 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
# 452 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkUp
# 453 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement LOCALID_ARCHIE
# 454 "data/maps/MtPyre_Summit/scripts.pory"
	special RemoveCameraObject
# 455 "data/maps/MtPyre_Summit/scripts.pory"
	delay 48
# 456 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreen FADE_TO_BLACK
# 457 "data/maps/MtPyre_Summit/scripts.pory"
	delay 24
# 458 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 459 "data/maps/MtPyre_Summit/scripts.pory"
	delay 24
# 460 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceDown
# 461 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement LOCALID_ARCHIE
# 462 "data/maps/MtPyre_Summit/scripts.pory"
	delay 8
# 463 "data/maps/MtPyre_Summit/scripts.pory"
	playse SE_PIN
# 464 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_ExclamationMark
# 465 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement LOCALID_ARCHIE
# 466 "data/maps/MtPyre_Summit/scripts.pory"
	waitse
# 467 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkDown
# 468 "data/maps/MtPyre_Summit/scripts.pory"
	delay 8
# 469 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceDown
# 470 "data/maps/MtPyre_Summit/scripts.pory"
	switch VAR_TEMP_0
# 471 "data/maps/MtPyre_Summit/scripts.pory"
	case 1, MtPyre_Summit_EventScript_TeamAquaExits_3
# 472 "data/maps/MtPyre_Summit/scripts.pory"
	case 2, MtPyre_Summit_EventScript_TeamAquaExits_4
# 473 "data/maps/MtPyre_Summit/scripts.pory"
	case 3, MtPyre_Summit_EventScript_TeamAquaExits_5
MtPyre_Summit_EventScript_TeamAquaExits_1:
# 475 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 476 "data/maps/MtPyre_Summit/scripts.pory"
	delay 32
# 477 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_EventScript_TeamAquaExits_Text_0
# 478 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 479 "data/maps/MtPyre_Summit/scripts.pory"
	delay 24
# 480 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_EventScript_TeamAquaExits_Text_1
# 481 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 482 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceUp
# 483 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement LOCALID_MATT
# 484 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_EventScript_TeamAquaExits_Text_2
# 485 "data/maps/MtPyre_Summit/scripts.pory"
	checkplayergender
# 486 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MtPyre_Summit_EventScript_TeamAquaExits_7
# 489 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_EventScript_TeamAquaExits_Text_4
MtPyre_Summit_EventScript_TeamAquaExits_6:
# 491 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_EventScript_TeamAquaExits_Text_5
# 492 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 493 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieBeginExit
# 494 "data/maps/MtPyre_Summit/scripts.pory"
	delay 8
# 495 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceDown
# 496 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreen FADE_TO_BLACK
# 497 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
# 498 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement LOCALID_ARCHIE
# 499 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_ARCHIE
# 500 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 501 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 502 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_GRUNT_4
# 503 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
# 504 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA
# 505 "data/maps/MtPyre_Summit/scripts.pory"
	delay 32
# 506 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 507 "data/maps/MtPyre_Summit/scripts.pory"
	delay 32
# 508 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MATT, MtPyre_Summit_Movement_MattFacePlayer
# 509 "data/maps/MtPyre_Summit/scripts.pory"
	delay 8
# 510 "data/maps/MtPyre_Summit/scripts.pory"
	special SpawnCameraObject
# 511 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
# 512 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
# 513 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement LOCALID_MATT
# 514 "data/maps/MtPyre_Summit/scripts.pory"
	special RemoveCameraObject
# 515 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_EventScript_TeamAquaExits_Text_6
# 516 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_no_intro TRAINER_MATT_MT_PYRE, MtPyre_Summit_EventScript_TeamAquaExits_Text_7
# 517 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_EventScript_TeamAquaExits_Text_8
# 518 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 519 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MATT, MtPyre_Summit_Movement_MattExit
# 520 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMattExit
# 521 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement LOCALID_MATT
# 522 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MATT
# 523 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 1
# 524 "data/maps/MtPyre_Summit/scripts.pory"
	delay 24
# 525 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_OLD_LADY, MtPyre_Summit_Movement_OldLadyGoSeeOrb
# 526 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_OLD_MAN, MtPyre_Summit_Movement_OldManGoSeeOrb
# 527 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerApproachOldLady
# 528 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 529 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_EventScript_TeamAquaExits_Text_9
# 530 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_EventScript_TeamAquaExits_Text_10
# 531 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 532 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_OLD_LADY, Common_Movement_WalkInPlaceDown
# 533 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement LOCALID_OLD_LADY
# 534 "data/maps/MtPyre_Summit/scripts.pory"
	delay 8
# 535 "data/maps/MtPyre_Summit/scripts.pory"
	playse SE_PIN
# 536 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_OLD_LADY, Common_Movement_ExclamationMark
# 537 "data/maps/MtPyre_Summit/scripts.pory"
	delay 8
# 538 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_OLD_MAN, Common_Movement_WalkInPlaceDown
# 539 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement LOCALID_OLD_LADY
# 540 "data/maps/MtPyre_Summit/scripts.pory"
	delay 16
# 541 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_EventScript_TeamAquaExits_Text_11
# 542 "data/maps/MtPyre_Summit/scripts.pory"
	giveitem ITEM_MAGMA_EMBLEM
# 543 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 544 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RECEIVED_RED_OR_BLUE_ORB
# 545 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
# 546 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_LEVEL_CAP_VARIABLE, 63
# 547 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
	end

MtPyre_Summit_EventScript_TeamAquaExits_3:
# 471 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceArchie1
	goto MtPyre_Summit_EventScript_TeamAquaExits_1

MtPyre_Summit_EventScript_TeamAquaExits_4:
# 472 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto MtPyre_Summit_EventScript_TeamAquaExits_1

MtPyre_Summit_EventScript_TeamAquaExits_5:
# 473 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceArchie3
	goto MtPyre_Summit_EventScript_TeamAquaExits_1

MtPyre_Summit_EventScript_TeamAquaExits_7:
# 487 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_EventScript_TeamAquaExits_Text_3
	goto MtPyre_Summit_EventScript_TeamAquaExits_6


# 551 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceArchie1:
# 552 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 553 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_up
	step_end

# 556 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceArchie3:
# 557 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 558 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_up
	step_end

# 561 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieBeginExit:
# 562 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 563 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 564 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
	step_end

# 567 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MattFacePlayer:
# 568 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 569 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_down
	step_end

# 572 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MattExit:
# 573 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 574 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 574 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 574 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 574 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 574 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 574 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 574 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 574 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
	step_end

# 577 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchMattExit:
# 578 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 578 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 579 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_left
# 580 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 581 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_down
	step_end

# 584 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldManGoSeeOrb:
# 585 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 585 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 586 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
	step_end

# 589 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyGoSeeOrb:
# 590 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 590 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 591 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
	step_end

# 594 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerApproachOldLady:
# 595 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 596 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 596 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
	step_end

MtPyre_Summit_EventScript_TeamAquaExits_Text_0:
# 477 "data/maps/MtPyre_Summit/scripts.pory"
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: I thought something was a\nbit noisy and who is it but the usual\lscamp!\pSorry, scampo, but I'm afraid I just\ndon't have time to play with you right\lnow.\pMaxie got ahead of us but we also got\nwhat we wanted.\pThe Blue Orb that's long been enshrined\nhere at Mt. Pyre…\lIt belongs to Team Aqua now!$"

MtPyre_Summit_EventScript_TeamAquaExits_Text_1:
# 480 "data/maps/MtPyre_Summit/scripts.pory"
	.string "…Ma-a-att!$"

MtPyre_Summit_EventScript_TeamAquaExits_Text_2:
# 484 "data/maps/MtPyre_Summit/scripts.pory"
	.string "{COLOR RED}Matt{COLOR DARK_GRAY}: Oh! Boss!$"

MtPyre_Summit_EventScript_TeamAquaExits_Text_3:
# 487 "data/maps/MtPyre_Summit/scripts.pory"
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: How about you do a favor for\nour lively little visitor, and keep him\lentertained?$"

MtPyre_Summit_EventScript_TeamAquaExits_Text_4:
# 489 "data/maps/MtPyre_Summit/scripts.pory"
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: How about you do a favor for\nour lively little visitor, and keep her\lentertained?$"

MtPyre_Summit_EventScript_TeamAquaExits_Text_5:
# 491 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You'd better use your full strength,\ntoo, so you don't offend our honored\lguest!\pBwahahahaha!\pWith this Blue Orb in my hands, I won't\neven need the power of the Meteorite\lto awaken the beast from the deep!\pAll I need now is a way to get to the\nplace where it sleeps…\pAll I have to do is get that {COLOR BLUE}submarine{COLOR DARK_GRAY}\nthey're making in Slateport!\pCome on, boys!\nWe're for {COLOR BLUE}Slateport City{COLOR DARK_GRAY}!$"

MtPyre_Summit_EventScript_TeamAquaExits_Text_6:
# 515 "data/maps/MtPyre_Summit/scripts.pory"
	.string "{COLOR RED}Matt{COLOR DARK_GRAY}: All right then, until the\nBoss makes his getaway, I'll be your\lopponent!\pOohh…\nHa! Ha! Hah!$"

MtPyre_Summit_EventScript_TeamAquaExits_Text_7:
# 516 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Muwuhahaha! That battle was fun even\nthough I lost!$"

MtPyre_Summit_EventScript_TeamAquaExits_Text_8:
# 517 "data/maps/MtPyre_Summit/scripts.pory"
	.string "That was fun!\pI knew you'd show me a good time!\pI look forward to facing you again\nsomeday!$"

MtPyre_Summit_EventScript_TeamAquaExits_Text_9:
# 529 "data/maps/MtPyre_Summit/scripts.pory"
	.string "{COLOR RED}Old Man{COLOR DARK_GRAY}: Aye, me, what disaster…\pThe Blue Orb and Red Orb…stolen from\nour safekeeping…$"

MtPyre_Summit_EventScript_TeamAquaExits_Text_10:
# 530 "data/maps/MtPyre_Summit/scripts.pory"
	.string "{COLOR RED}Old Lady{COLOR DARK_GRAY}: The Blue Orb and Red Orb must\nnever be separated.\lThey belong together…\pWhat are those men trying to do with\nthe two Orbs?\pHmm…$"

MtPyre_Summit_EventScript_TeamAquaExits_Text_11:
# 541 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Young one, I beg you… Chase after\nthose thieves and take the orbs!\pThose wretched leader of theirs…\pWas it Team Magma who came and took\nthe Red Orb first?\pWell, in their haste, they left this\nbehind.\pI couldn't imagine what exactly it\ncould be.\pI would like you to have it.\nPerhaps it will be useful in some way.$"
