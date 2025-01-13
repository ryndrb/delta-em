SlateportCity_OceanicMuseum_2F_MapScripts::
	.byte 0


SlateportCity_OceanicMuseum_2F_EventScript_CaptStern::
# 11 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 12 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 32
# 13 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playse SE_PIN
# 14 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 15 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 1
# 16 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 16
# 17 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	faceplayer
# 18 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 16
# 19 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_0
# 20 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 21 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 16
# 22 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playse SE_EXIT
# 23 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject 3
# 24 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitse
# 25 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 26 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter
# 27 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 28 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playse SE_EXIT
# 29 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject 4
# 30 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitse
# 31 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter
# 32 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 33 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach
# 34 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach
# 35 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 36 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_2
# 36 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_2
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_1:
# 39 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_ne SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_7
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_6:
# 42 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 43 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playse SE_PIN
# 44 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 45 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 1
# 46 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 16
# 47 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_1
# 48 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_2
# 49 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 50 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
# 51 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 52 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_10
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_9:
# 55 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_13
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_12:
# 58 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 59 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_3
# 60 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 61 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MUSEUM_1, SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_4
# 62 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 8
# 63 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
# 64 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 65 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_5
# 66 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 67 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 16
# 68 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 69 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 70 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_6
# 71 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 72 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
# 73 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 74 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MUSEUM_2, SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_7
# 75 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
# 76 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 77 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 8
# 78 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_8
# 79 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 80 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 81 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 82 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_9
# 83 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 84 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceUp
# 85 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 86 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_10
# 87 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 88 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 32
# 89 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playse SE_EXIT
# 90 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject 2
# 91 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitse
# 92 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 16
# 93 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playse SE_PIN
# 94 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 95 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 96 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 4
# 97 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 16
# 98 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 99 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 100 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 4
# 101 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 2, SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter
# 102 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie
# 103 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 104 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceDown
# 105 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 3
# 106 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_11
# 107 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 108 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 2, SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer
# 109 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 110 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	checkplayergender
# 111 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_16
# 114 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_13
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_15:
# 116 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_14
# 117 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 118 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 48
# 119 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_15
# 120 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 121 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 16
# 122 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_16
# 123 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 124 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	savebgm MUS_DUMMY
# 125 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadedefaultbgm
# 126 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 127 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 16
# 128 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playse SE_EXIT
# 129 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject 2
# 130 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitse
# 131 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playse SE_EXIT
# 132 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject 3
# 133 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitse
# 134 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playse SE_EXIT
# 135 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject 4
# 136 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitse
# 137 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 138 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 32
# 139 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
# 140 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 141 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 142 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	checkplayergender
# 143 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_20
# 146 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_18
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_19:
# 148 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 149 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 8
# 150 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 151 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	message SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_19
# 152 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmessage
# 153 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitfanfare
# 154 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeitem ITEM_DEVON_PARTS
# 155 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 8
# 156 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playse SE_PIN
# 157 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 158 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 1
# 159 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_20
# 160 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 161 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerWatchSternLeave
# 162 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 1, SlateportCity_OceanicMuseum_2F_Movement_SternLeavesRoom
# 163 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 1
# 164 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject 1
# 165 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playse SE_EXIT
# 166 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitse
# 167 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_REGISTER_BIRCH_STATE, 0
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_24
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_23:
# 170 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_DELIVERED_DEVON_GOODS
# 171 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_DEVON_EMPLOYEE
# 172 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 173 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1
# 174 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_LEVEL_CAP_VARIABLE, 31
# 175 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
	end

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_2:
# 37 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_1

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_7:
# 40 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_6

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_10:
# 53 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_9

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_13:
# 56 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_12

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_16:
# 112 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_12
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_15

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_20:
# 144 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_17
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_19

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_24:
# 168 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 1
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_23


# 179 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth:
# 180 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 181 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 182 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_left
	step_end

# 185 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest:
# 186 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 187 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 187 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 188 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 189 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_left
	step_end

# 192 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer:
# 193 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 196 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter:
# 197 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 197 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 197 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 197 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 197 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 198 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 198 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 198 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 198 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 201 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle:
# 202 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 205 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter:
# 206 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 207 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 208 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_down
	step_end

# 211 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach:
# 212 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 212 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 212 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 213 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 213 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 213 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 216 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated:
# 217 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock_facing_direction
# 218 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 219 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	unlock_facing_direction
	step_end

# 222 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter:
# 223 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
	step_end

# 226 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach:
# 227 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 227 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 227 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 227 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 228 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 228 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 228 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 228 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 231 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie:
# 232 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 232 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 232 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 232 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 232 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 232 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 232 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 232 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 233 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_8
# 234 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_fast_down
# 235 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_up
	step_end

# 238 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerWatchSternLeave:
# 239 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 240 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_up
# 241 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 241 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 241 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 242 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_left
	step_end

# 245 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SternLeavesRoom:
# 246 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 247 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 247 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 247 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 247 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 248 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 248 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 249 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 249 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 249 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 250 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 250 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 251 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	set_invisible
	step_end

SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2::
# 255 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 256 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2_Text_0
# 257 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
	end


SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron3::
# 262 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 263 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	faceplayer
# 264 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron3_Text_0, MSGBOX_DEFAULT
# 265 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 266 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 267 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 268 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
	end


SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron1::
# 273 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron1_Text_0, MSGBOX_NPC
# 274 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceDown
# 275 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement VAR_LAST_TALKED
	end


SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample1::
# 280 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample1_Text_0, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample2::
# 285 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample2_Text_0, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_2F_EventScript_PressureExperiment::
# 290 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_PressureExperiment_Text_0, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_2F_EventScript_HoennModel::
# 295 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_HoennModel_Text_0, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_2F_EventScript_DeepSeawaterDisplay::
# 300 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_DeepSeawaterDisplay_Text_0, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_2F_EventScript_SurfaceSeawaterDisplay::
# 305 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_SurfaceSeawaterDisplay_Text_0, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_2F_EventScript_SSTidalReplica::
# 310 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_SSTidalReplica_Text_0, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_2F_EventScript_SubmarineReplica::
# 315 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_SubmarineReplica_Text_0, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_2F_EventScript_SubmersibleReplica::
# 320 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_SubmersibleReplica_Text_0, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_2F_EventScript_SSAnneReplica::
# 325 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_SSAnneReplica_Text_0, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_0:
# 19 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Yes?\pIf you're looking for Stern, that\nwould be me.\pAh!\nThose must be the parts I ordered\lfrom Mr. Stone at Devon.\pThank you for bringing the case all\nthis way.\pNow we can prepare for our\nexpedition at last.$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_1:
# 47 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: Heh heh heh heh…\pJust a moment!\nWe'll be taking those!$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_2:
# 48 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "{COLOR RED}Stern{COLOR DARK_GRAY}: Wh-what was that!?\nWho are you people!?$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_3:
# 59 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: We're Team Aqua!\pOur boss wants the parts in that\ncase, so shut your nap and fork it\lover!$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_4:
# 61 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Whoa!$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_5:
# 65 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Awaaaughhh!\nI got beat by a little brat?\pOh, man, what a disaster…\nThe boss is gonna be furious…$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_6:
# 70 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Hmph!\nSniveling wimp!\pStand back and watch me,\nthe 27th-strongest member of\lTeam Aqua, take care of this kid!$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_7:
# 74 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "What!?$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_8:
# 78 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "This kid beat the 27th-strongest Grunt\nin Team Aqua?$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_9:
# 82 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "N-now what?\nIf we don't get that case, we're in\lfor it!$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_10:
# 86 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Arrgh!\nI never thought we'd be stopped by\lsome meddling kid!$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_11:
# 106 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: What do we have here?\pI came to see what was taking\nso long just to steal a few parts,\land I find you simps getting beat\lby this kid?$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_12:
# 112 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Heh!\pThat's quite a fierce expression for\nsuch a wee little scamp.\pThat face tells me you're not just\nanother mindless Trainer brat.\pThe name is {COLOR RED}Archie{COLOR DARK_GRAY}.\pThe rough-looking lot you see here are\nmembers of my team--Team Aqua.\pSo tell me, boyo…\pDo you know that Pokémon, people, and\nall life in this world depend on the\lsea for life?\pThat's right.\pThe sea is an irreplaceable treasure\nfor every living thing on this planet.\pBut with our selfish extravagance,\nhumanity dirties the great ocean,\ldestroying this source of all life…$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_13:
# 114 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Heh!\pThat's quite a fierce expression for\nsuch a wee little scamp.\pThat face tells me you're not just\nanother mindless Trainer brat.\pThe name is {COLOR RED}Archie{COLOR DARK_GRAY}.\pThe rough-looking lot you see here are\nmembers of my team--Team Aqua.\pSo tell me, girlie…\pDo you know that Pokémon, people, and\nall life in this world depend on the\lsea for life?\pThat's right.\pThe sea is an irreplaceable treasure\nfor every living thing on this planet.\pBut with our selfish extravagance,\nhumanity dirties the great ocean,\ldestroying this source of all life…$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_14:
# 116 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Day by day, we're all destroying our\nmost precious resource!\pIf we humans suffer from our actions,\nwell, maybe we'll end up getting what\lwe deserve.\pBut what about the Pokémon in our\nworld?\pThe Pokémon that no longer have a\nplace to live because we stole and\lsoiled their seas?\pThe Pokémon that won't have a place\nto raise their young and watch them\lgrow?\pWe are creating a world in which\ninnocent Pokémon suffer as a result\lof our actions…\pAnd that is something I can't\nforgive!\pThat's why I came to a decision, see?\pThe foolish actions of my fellow\nhumans, the seas we have blighted,\lnature itself…\pI will return everything to its\nunspoiled beginnings!$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_15:
# 119 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "…\pHeh!\pIt's not like me to talk so much.\pNever mind, little scamp…\nI'll withdraw for now and leave you be.\lBut understand this…\pGet in my way again, and you won't walk\naway unscathed next time.\pRemember that, at least!$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_16:
# 122 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We're moving out, lads!$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_17:
# 144 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "{COLOR RED}Stern{COLOR DARK_GRAY}: Young man…\pAh, {PLAYER}, is it?\pThat was quite a tense situation!\nThank you for helping me out!\pOh, yes, I almost forgot that you\nbrought the parts from Devon!$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_18:
# 146 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "{COLOR RED}Stern{COLOR DARK_GRAY}: Young lady…\pAh, {PLAYER}, is it?\pThat was quite a tense situation!\nThank you for helping me out!\pOh, yes, I almost forgot that you\nbrought the parts from Devon!$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_19:
# 151 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "{PLAYER} handed over the Devon Parts\nto Captain Stern.$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_20:
# 159 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "This is it!\nI can't be standing around here!\pIt's finally time for us to set out on\nour ocean-floor expedition!\pThanks for this, and excuse me!$"

SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2_Text_0:
# 256 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Don't run around inside the museum!$"

SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron3_Text_0:
# 264 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Wow, the submarine's awesome!\nI want to go for a ride!$"

SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron1_Text_0:
# 273 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Looking at this model of a ship\nhere reminds me of Mr. Briney on\lRoute 104.$"

SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample1_Text_0:
# 280 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Kalos Water Quality Sample,”\nthe label says.\pThe hardness of Kalos's water often\nexceeds 300 ppm.\pThat's characteristics of the water\nin Kalos.$"

SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample2_Text_0:
# 285 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Unova Water Quality Sample,”\nthe label says.\pWater hardness is a measure of the\namount of calcium and magnesium it\lcontains.$"

SlateportCity_OceanicMuseum_2F_EventScript_PressureExperiment_Text_0:
# 290 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "A video is playing of a guy with a\nwacky hairstyle, who could be a\lscientist conducting experiment\lwith some sort of machine…\p“Because of this…\nwhen you dive into the sea,\lyou fell discomfort in your ears…”$"

SlateportCity_OceanicMuseum_2F_EventScript_HoennModel_Text_0:
# 295 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Model of the Hoenn Region”\pIt's a miniature diorama of the\nHoenn Region.\pWhere is Littleroot Town on this?$"

SlateportCity_OceanicMuseum_2F_EventScript_DeepSeawaterDisplay_Text_0:
# 300 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It's a display on the flow of\nseawater.\p“Near the bottom of the sea,\nwater flows due to differences in\lsuch factors as temperature and\lsalinity”$"

SlateportCity_OceanicMuseum_2F_EventScript_SurfaceSeawaterDisplay_Text_0:
# 305 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It's a display on the flow of\nseawater.\p“Toward the surface, seawater flows\nas currents driven by the winds.”$"

SlateportCity_OceanicMuseum_2F_EventScript_SSTidalReplica_Text_0:
# 310 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“The Ferry S.S. Tidal”\pA scale replica of the ship under\nconstruction at Stern's Shipyard.$"

SlateportCity_OceanicMuseum_2F_EventScript_SubmarineReplica_Text_0:
# 315 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Prototype Submarine Explorer 0”\pA replica of the high-performance\nsubmarine for ocean-floor\lexploration.$"

SlateportCity_OceanicMuseum_2F_EventScript_SubmersibleReplica_Text_0:
# 320 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Submersible Pod”\pA replica of a compact, unmanned pod\nfor seafloor exploration.$"

SlateportCity_OceanicMuseum_2F_EventScript_SSAnneReplica_Text_0:
# 325 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“The S.S. Anne”\pA replica of the luxury liner that\ncircles the globe.$"
