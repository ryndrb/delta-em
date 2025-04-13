# 1 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_MapScripts::
# 5 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_PokemonCenter_1F_OnTransition
# 6 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_OnTransition:
# 10 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_OLDALE_TOWN
# 11 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 12 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 16 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 20 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Gentleman::
# 23 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC, MSGBOX_NPC
# 24 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 25 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 26 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Boy::
# 27 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat, MSGBOX_NPC
# 28 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 29 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 30 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_Girl::
# 31 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 32 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 33 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable
# 34 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable, MSGBOX_DEFAULT
# 35 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 36 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 37 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 38 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable::
# 39 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub, MSGBOX_DEFAULT
# 40 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
# 41 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	end
# 42 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 43 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC:
# 44 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "That PC in the corner there is\n"
# 45 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "for any Pokémon Trainer to use.\p"
# 46 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Naturally, that means you're welcome\n"
# 47 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "to use it, too.$"
# 48 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 49 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat:
# 50 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Pokémon Centers are great!\p"
# 51 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You can use their services as much\n"
# 52 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "as you like, and it's all for free.\l"
# 53 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "You never have to worry!$"
# 54 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 55 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable:
# 56 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The Pokémon Wireless Club on\n"
# 57 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "the second floor was built recently.\p"
# 58 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "But they say they're still making\n"
# 59 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "adjustments.$"
# 60 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"

# 61 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub:
# 62 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "The Pokémon Wireless Club on\n"
# 63 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "the second floor was built recently.\p"
# 64 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "I traded Pokémon right away.$"

PokemonCenter_1F_OldManUtility::
# 70 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 71 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_TALKED_TO_MOVE_TUTOR, PokemonCenter_1F_OldManUtility_2
# 77 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, PokemonCenter_1F_OldManUtility_5
# 83 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_1F_OldManUtility_Text_2
# 84 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, PokemonCenter_1F_OldManUtility_8
# 97 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, PokemonCenter_1F_OldManUtility_9
# 109 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PokemonCenter_1F_OldManUtility_10
# 120 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, PokemonCenter_1F_OldManUtility_11
# 130 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, PokemonCenter_1F_OldManUtility_12
# 139 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, PokemonCenter_1F_OldManUtility_13
# 147 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, PokemonCenter_1F_OldManUtility_14
PokemonCenter_1F_OldManUtility_7:
# 155 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_1F_OldManUtility_Text_10
# 156 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 157 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

PokemonCenter_1F_OldManUtility_2:
# 72 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_1F_OldManUtility_Text_0
# 73 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_TALKED_TO_MOVE_TUTOR
# 74 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
	end

PokemonCenter_1F_OldManUtility_5:
# 78 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_1F_OldManUtility_Text_1
# 79 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 80 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

PokemonCenter_1F_OldManUtility_8:
# 85 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, PokemonCenter_1F_OldManUtility_Text_3, PokemonCenter_1F_OldManUtility_Text_4, PokemonCenter_1F_OldManUtility_Text_5, PokemonCenter_1F_OldManUtility_Text_6, PokemonCenter_1F_OldManUtility_Text_7, PokemonCenter_1F_OldManUtility_Text_8, PokemonCenter_1F_OldManUtility_Text_9
# 88 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 89 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 0, PokemonCenter_1F_OldManUtility_23
# 90 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 1, PokemonCenter_1F_OldManUtility_24
# 91 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 2, PokemonCenter_1F_OldManUtility_25
# 92 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 3, PokemonCenter_1F_OldManUtility_26
# 93 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 4, PokemonCenter_1F_OldManUtility_27
# 94 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 5, PokemonCenter_1F_OldManUtility_28
# 95 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 6, PokemonCenter_1F_OldManUtility_29
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_9:
# 98 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, PokemonCenter_1F_OldManUtility_Text_3, PokemonCenter_1F_OldManUtility_Text_4, PokemonCenter_1F_OldManUtility_Text_5, PokemonCenter_1F_OldManUtility_Text_6, PokemonCenter_1F_OldManUtility_Text_7, PokemonCenter_1F_OldManUtility_Text_8
# 101 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 102 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 0, PokemonCenter_1F_OldManUtility_31
# 103 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 1, PokemonCenter_1F_OldManUtility_32
# 104 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 2, PokemonCenter_1F_OldManUtility_33
# 105 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 3, PokemonCenter_1F_OldManUtility_34
# 106 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 4, PokemonCenter_1F_OldManUtility_35
# 107 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 5, PokemonCenter_1F_OldManUtility_36
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_10:
# 110 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, PokemonCenter_1F_OldManUtility_Text_3, PokemonCenter_1F_OldManUtility_Text_4, PokemonCenter_1F_OldManUtility_Text_5, PokemonCenter_1F_OldManUtility_Text_6, PokemonCenter_1F_OldManUtility_Text_7
# 113 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 114 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 0, PokemonCenter_1F_OldManUtility_38
# 115 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 1, PokemonCenter_1F_OldManUtility_39
# 116 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 2, PokemonCenter_1F_OldManUtility_40
# 117 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 3, PokemonCenter_1F_OldManUtility_41
# 118 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 4, PokemonCenter_1F_OldManUtility_42
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_11:
# 121 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, PokemonCenter_1F_OldManUtility_Text_3, PokemonCenter_1F_OldManUtility_Text_4, PokemonCenter_1F_OldManUtility_Text_5, PokemonCenter_1F_OldManUtility_Text_6
# 124 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 125 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 0, PokemonCenter_1F_OldManUtility_44
# 126 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 1, PokemonCenter_1F_OldManUtility_45
# 127 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 2, PokemonCenter_1F_OldManUtility_46
# 128 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 3, PokemonCenter_1F_OldManUtility_47
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_12:
# 131 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, PokemonCenter_1F_OldManUtility_Text_3, PokemonCenter_1F_OldManUtility_Text_4, PokemonCenter_1F_OldManUtility_Text_5
# 134 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 135 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 0, PokemonCenter_1F_OldManUtility_49
# 136 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 1, PokemonCenter_1F_OldManUtility_50
# 137 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 2, PokemonCenter_1F_OldManUtility_51
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_13:
# 140 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, PokemonCenter_1F_OldManUtility_Text_3, PokemonCenter_1F_OldManUtility_Text_4
# 143 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 144 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 0, PokemonCenter_1F_OldManUtility_53
# 145 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 1, PokemonCenter_1F_OldManUtility_54
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_14:
# 148 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, PokemonCenter_1F_OldManUtility_Text_3
# 151 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 152 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 0, PokemonCenter_1F_OldManUtility_56
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_23:
# 89 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_1
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_24:
# 90 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_2
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_25:
# 91 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_3
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_26:
# 92 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_4
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_27:
# 93 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_5
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_28:
# 94 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_6
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_29:
# 95 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_7
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_31:
# 102 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_1
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_32:
# 103 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_2
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_33:
# 104 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_3
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_34:
# 105 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_4
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_35:
# 106 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_5
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_36:
# 107 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_6
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_38:
# 114 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_1
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_39:
# 115 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_2
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_40:
# 116 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_3
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_41:
# 117 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_4
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_42:
# 118 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_5
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_44:
# 125 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_1
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_45:
# 126 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_2
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_46:
# 127 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_3
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_47:
# 128 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_4
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_49:
# 135 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_1
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_50:
# 136 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_2
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_51:
# 137 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_3
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_53:
# 144 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_1
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_54:
# 145 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_2
	goto PokemonCenter_1F_OldManUtility_7

PokemonCenter_1F_OldManUtility_56:
# 152 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_1
	goto PokemonCenter_1F_OldManUtility_7


OldaleTown_PokemonCenter_1F_Tutor_1::
# 162 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Tutor_1_Text_0
# 163 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_PokemonCenter_1F_Tutor_1_Text_1, OldaleTown_PokemonCenter_1F_Tutor_1_Text_2, OldaleTown_PokemonCenter_1F_Tutor_1_Text_3, OldaleTown_PokemonCenter_1F_Tutor_1_Text_4, OldaleTown_PokemonCenter_1F_Tutor_1_Text_5, OldaleTown_PokemonCenter_1F_Tutor_1_Text_6, OldaleTown_PokemonCenter_1F_Tutor_1_Text_7, OldaleTown_PokemonCenter_1F_Tutor_1_Text_8, OldaleTown_PokemonCenter_1F_Tutor_1_Text_9, OldaleTown_PokemonCenter_1F_Tutor_1_Text_10, OldaleTown_PokemonCenter_1F_Tutor_1_Text_11, OldaleTown_PokemonCenter_1F_Tutor_1_Text_12, OldaleTown_PokemonCenter_1F_Tutor_1_Text_13, OldaleTown_PokemonCenter_1F_Tutor_1_Text_14, OldaleTown_PokemonCenter_1F_Tutor_1_Text_15, OldaleTown_PokemonCenter_1F_Tutor_1_Text_16, OldaleTown_PokemonCenter_1F_Tutor_1_Text_17, OldaleTown_PokemonCenter_1F_Tutor_1_Text_18, OldaleTown_PokemonCenter_1F_Tutor_1_Text_19, OldaleTown_PokemonCenter_1F_Tutor_1_Text_20
# 167 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 168 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 0, OldaleTown_PokemonCenter_1F_Tutor_1_3
# 169 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 1, OldaleTown_PokemonCenter_1F_Tutor_1_4
# 170 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 2, OldaleTown_PokemonCenter_1F_Tutor_1_5
# 171 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 3, OldaleTown_PokemonCenter_1F_Tutor_1_6
# 172 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 4, OldaleTown_PokemonCenter_1F_Tutor_1_7
# 173 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 5, OldaleTown_PokemonCenter_1F_Tutor_1_8
# 174 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 6, OldaleTown_PokemonCenter_1F_Tutor_1_9
# 175 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 7, OldaleTown_PokemonCenter_1F_Tutor_1_10
# 176 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 8, OldaleTown_PokemonCenter_1F_Tutor_1_11
# 177 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 9, OldaleTown_PokemonCenter_1F_Tutor_1_12
# 178 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 10, OldaleTown_PokemonCenter_1F_Tutor_1_13
# 179 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 11, OldaleTown_PokemonCenter_1F_Tutor_1_14
# 180 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 12, OldaleTown_PokemonCenter_1F_Tutor_1_15
# 181 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 13, OldaleTown_PokemonCenter_1F_Tutor_1_16
# 182 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 14, OldaleTown_PokemonCenter_1F_Tutor_1_17
# 183 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 15, OldaleTown_PokemonCenter_1F_Tutor_1_18
# 184 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 16, OldaleTown_PokemonCenter_1F_Tutor_1_19
# 185 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 17, OldaleTown_PokemonCenter_1F_Tutor_1_20
# 186 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 18, OldaleTown_PokemonCenter_1F_Tutor_1_21
# 187 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 19, OldaleTown_PokemonCenter_1F_Tutor_1_22
# 188 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 127, OldaleTown_PokemonCenter_1F_Tutor_1_23
OldaleTown_PokemonCenter_1F_Tutor_1_1:
# 190 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 191 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu_Delta
# 192 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleTown_PokemonCenter_1F_Tutor_1_25
OldaleTown_PokemonCenter_1F_Tutor_1_24:
# 195 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 196 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldaleTown_PokemonCenter_1F_Tutor_1_3:
# 168 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_AIR_CUTTER
	goto OldaleTown_PokemonCenter_1F_Tutor_1_1

OldaleTown_PokemonCenter_1F_Tutor_1_4:
# 169 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_BLOCK
	goto OldaleTown_PokemonCenter_1F_Tutor_1_1

OldaleTown_PokemonCenter_1F_Tutor_1_5:
# 170 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_BRUTAL_SWING
	goto OldaleTown_PokemonCenter_1F_Tutor_1_1

OldaleTown_PokemonCenter_1F_Tutor_1_6:
# 171 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_BUG_BITE
	goto OldaleTown_PokemonCenter_1F_Tutor_1_1

OldaleTown_PokemonCenter_1F_Tutor_1_7:
# 172 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_FURY_CUTTER
	goto OldaleTown_PokemonCenter_1F_Tutor_1_1

OldaleTown_PokemonCenter_1F_Tutor_1_8:
# 173 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_HONE_CLAWS
	goto OldaleTown_PokemonCenter_1F_Tutor_1_1

OldaleTown_PokemonCenter_1F_Tutor_1_9:
# 174 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_INFESTATION
	goto OldaleTown_PokemonCenter_1F_Tutor_1_1

OldaleTown_PokemonCenter_1F_Tutor_1_10:
# 175 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_HELPING_HAND
	goto OldaleTown_PokemonCenter_1F_Tutor_1_1

OldaleTown_PokemonCenter_1F_Tutor_1_11:
# 176 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_LOW_SWEEP
	goto OldaleTown_PokemonCenter_1F_Tutor_1_1

OldaleTown_PokemonCenter_1F_Tutor_1_12:
# 177 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_MEGA_DRAIN
	goto OldaleTown_PokemonCenter_1F_Tutor_1_1

OldaleTown_PokemonCenter_1F_Tutor_1_13:
# 178 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_METRONOME
	goto OldaleTown_PokemonCenter_1F_Tutor_1_1

OldaleTown_PokemonCenter_1F_Tutor_1_14:
# 179 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_OMINOUS_WIND
	goto OldaleTown_PokemonCenter_1F_Tutor_1_1

OldaleTown_PokemonCenter_1F_Tutor_1_15:
# 180 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCH_UP
	goto OldaleTown_PokemonCenter_1F_Tutor_1_1

OldaleTown_PokemonCenter_1F_Tutor_1_16:
# 181 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_ROLLOUT
	goto OldaleTown_PokemonCenter_1F_Tutor_1_1

OldaleTown_PokemonCenter_1F_Tutor_1_17:
# 182 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_SEISMIC_TOSS
	goto OldaleTown_PokemonCenter_1F_Tutor_1_1

OldaleTown_PokemonCenter_1F_Tutor_1_18:
# 183 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_SILVER_WIND
	goto OldaleTown_PokemonCenter_1F_Tutor_1_1

OldaleTown_PokemonCenter_1F_Tutor_1_19:
# 184 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_SPITE
	goto OldaleTown_PokemonCenter_1F_Tutor_1_1

OldaleTown_PokemonCenter_1F_Tutor_1_20:
# 185 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_STRUGGLE_BUG
	goto OldaleTown_PokemonCenter_1F_Tutor_1_1

OldaleTown_PokemonCenter_1F_Tutor_1_21:
# 186 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_TWISTER
	goto OldaleTown_PokemonCenter_1F_Tutor_1_1

OldaleTown_PokemonCenter_1F_Tutor_1_22:
# 187 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_VACUUM_WAVE
	goto OldaleTown_PokemonCenter_1F_Tutor_1_1

OldaleTown_PokemonCenter_1F_Tutor_1_23:
# 188 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto PokemonCenter_1F_OldManUtility
	goto OldaleTown_PokemonCenter_1F_Tutor_1_1

OldaleTown_PokemonCenter_1F_Tutor_1_25:
# 193 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_1
	goto OldaleTown_PokemonCenter_1F_Tutor_1_24


OldaleTown_PokemonCenter_1F_Tutor_2::
# 200 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Tutor_1_Text_0
# 201 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_PokemonCenter_1F_Tutor_2_Text_0, OldaleTown_PokemonCenter_1F_Tutor_2_Text_1, OldaleTown_PokemonCenter_1F_Tutor_2_Text_2, OldaleTown_PokemonCenter_1F_Tutor_2_Text_3, OldaleTown_PokemonCenter_1F_Tutor_2_Text_4, OldaleTown_PokemonCenter_1F_Tutor_2_Text_5, OldaleTown_PokemonCenter_1F_Tutor_2_Text_6, OldaleTown_PokemonCenter_1F_Tutor_2_Text_7, OldaleTown_PokemonCenter_1F_Tutor_2_Text_8, OldaleTown_PokemonCenter_1F_Tutor_2_Text_9, OldaleTown_PokemonCenter_1F_Tutor_2_Text_10, OldaleTown_PokemonCenter_1F_Tutor_2_Text_11, OldaleTown_PokemonCenter_1F_Tutor_2_Text_12, OldaleTown_PokemonCenter_1F_Tutor_2_Text_13, OldaleTown_PokemonCenter_1F_Tutor_2_Text_14, OldaleTown_PokemonCenter_1F_Tutor_2_Text_15, OldaleTown_PokemonCenter_1F_Tutor_2_Text_16, OldaleTown_PokemonCenter_1F_Tutor_2_Text_17, OldaleTown_PokemonCenter_1F_Tutor_2_Text_18, OldaleTown_PokemonCenter_1F_Tutor_2_Text_19
# 205 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 206 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 0, OldaleTown_PokemonCenter_1F_Tutor_2_3
# 207 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 1, OldaleTown_PokemonCenter_1F_Tutor_2_4
# 208 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 2, OldaleTown_PokemonCenter_1F_Tutor_2_5
# 209 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 3, OldaleTown_PokemonCenter_1F_Tutor_2_6
# 210 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 4, OldaleTown_PokemonCenter_1F_Tutor_2_7
# 211 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 5, OldaleTown_PokemonCenter_1F_Tutor_2_8
# 212 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 6, OldaleTown_PokemonCenter_1F_Tutor_2_9
# 213 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 7, OldaleTown_PokemonCenter_1F_Tutor_2_10
# 214 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 8, OldaleTown_PokemonCenter_1F_Tutor_2_11
# 215 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 9, OldaleTown_PokemonCenter_1F_Tutor_2_12
# 216 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 10, OldaleTown_PokemonCenter_1F_Tutor_2_13
# 217 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 11, OldaleTown_PokemonCenter_1F_Tutor_2_14
# 218 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 12, OldaleTown_PokemonCenter_1F_Tutor_2_15
# 219 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 13, OldaleTown_PokemonCenter_1F_Tutor_2_16
# 220 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 14, OldaleTown_PokemonCenter_1F_Tutor_2_17
# 221 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 15, OldaleTown_PokemonCenter_1F_Tutor_2_18
# 222 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 16, OldaleTown_PokemonCenter_1F_Tutor_2_19
# 223 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 17, OldaleTown_PokemonCenter_1F_Tutor_2_20
# 224 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 18, OldaleTown_PokemonCenter_1F_Tutor_2_21
# 225 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 19, OldaleTown_PokemonCenter_1F_Tutor_2_22
# 226 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 127, OldaleTown_PokemonCenter_1F_Tutor_2_23
OldaleTown_PokemonCenter_1F_Tutor_2_1:
# 228 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu_Delta
# 229 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleTown_PokemonCenter_1F_Tutor_2_25
OldaleTown_PokemonCenter_1F_Tutor_2_24:
# 232 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 233 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldaleTown_PokemonCenter_1F_Tutor_2_3:
# 206 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_AGILITY
	goto OldaleTown_PokemonCenter_1F_Tutor_2_1

OldaleTown_PokemonCenter_1F_Tutor_2_4:
# 207 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_CHILLING_WATER
	goto OldaleTown_PokemonCenter_1F_Tutor_2_1

OldaleTown_PokemonCenter_1F_Tutor_2_5:
# 208 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_DEFOG
	goto OldaleTown_PokemonCenter_1F_Tutor_2_1

OldaleTown_PokemonCenter_1F_Tutor_2_6:
# 209 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_ELECTROWEB
	goto OldaleTown_PokemonCenter_1F_Tutor_2_1

OldaleTown_PokemonCenter_1F_Tutor_2_7:
# 210 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_GASTRO_ACID
	goto OldaleTown_PokemonCenter_1F_Tutor_2_1

OldaleTown_PokemonCenter_1F_Tutor_2_8:
# 211 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_INCINERATE
	goto OldaleTown_PokemonCenter_1F_Tutor_2_1

OldaleTown_PokemonCenter_1F_Tutor_2_9:
# 212 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_HEX
	goto OldaleTown_PokemonCenter_1F_Tutor_2_1

OldaleTown_PokemonCenter_1F_Tutor_2_10:
# 213 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_IRON_DEFENSE
	goto OldaleTown_PokemonCenter_1F_Tutor_2_1

OldaleTown_PokemonCenter_1F_Tutor_2_11:
# 214 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_MAGIC_COAT
	goto OldaleTown_PokemonCenter_1F_Tutor_2_1

OldaleTown_PokemonCenter_1F_Tutor_2_12:
# 215 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_PAIN_SPLIT
	goto OldaleTown_PokemonCenter_1F_Tutor_2_1

OldaleTown_PokemonCenter_1F_Tutor_2_13:
# 216 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_PLUCK
	goto OldaleTown_PokemonCenter_1F_Tutor_2_1

OldaleTown_PokemonCenter_1F_Tutor_2_14:
# 217 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_POUNCE
	goto OldaleTown_PokemonCenter_1F_Tutor_2_1

OldaleTown_PokemonCenter_1F_Tutor_2_15:
# 218 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_ROLE_PLAY
	goto OldaleTown_PokemonCenter_1F_Tutor_2_1

OldaleTown_PokemonCenter_1F_Tutor_2_16:
# 219 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_SHOCK_WAVE
	goto OldaleTown_PokemonCenter_1F_Tutor_2_1

OldaleTown_PokemonCenter_1F_Tutor_2_17:
# 220 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
	goto OldaleTown_PokemonCenter_1F_Tutor_2_1

OldaleTown_PokemonCenter_1F_Tutor_2_18:
# 221 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_SYNTHESIS
	goto OldaleTown_PokemonCenter_1F_Tutor_2_1

OldaleTown_PokemonCenter_1F_Tutor_2_19:
# 222 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_TRAILBLAZE
	goto OldaleTown_PokemonCenter_1F_Tutor_2_1

OldaleTown_PokemonCenter_1F_Tutor_2_20:
# 223 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_UPROAR
	goto OldaleTown_PokemonCenter_1F_Tutor_2_1

OldaleTown_PokemonCenter_1F_Tutor_2_21:
# 224 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_WATER_PULSE
	goto OldaleTown_PokemonCenter_1F_Tutor_2_1

OldaleTown_PokemonCenter_1F_Tutor_2_22:
# 225 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_WORRY_SEED
	goto OldaleTown_PokemonCenter_1F_Tutor_2_1

OldaleTown_PokemonCenter_1F_Tutor_2_23:
# 226 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto PokemonCenter_1F_OldManUtility
	goto OldaleTown_PokemonCenter_1F_Tutor_2_1

OldaleTown_PokemonCenter_1F_Tutor_2_25:
# 230 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_2
	goto OldaleTown_PokemonCenter_1F_Tutor_2_24


OldaleTown_PokemonCenter_1F_Tutor_3::
# 237 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Tutor_1_Text_0
# 238 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_PokemonCenter_1F_Tutor_3_Text_0, OldaleTown_PokemonCenter_1F_Tutor_3_Text_1, OldaleTown_PokemonCenter_1F_Tutor_3_Text_2, OldaleTown_PokemonCenter_1F_Tutor_3_Text_3, OldaleTown_PokemonCenter_1F_Tutor_3_Text_4, OldaleTown_PokemonCenter_1F_Tutor_3_Text_5, OldaleTown_PokemonCenter_1F_Tutor_3_Text_6, OldaleTown_PokemonCenter_1F_Tutor_3_Text_7, OldaleTown_PokemonCenter_1F_Tutor_3_Text_8, OldaleTown_PokemonCenter_1F_Tutor_3_Text_9, OldaleTown_PokemonCenter_1F_Tutor_3_Text_10, OldaleTown_PokemonCenter_1F_Tutor_3_Text_11, OldaleTown_PokemonCenter_1F_Tutor_3_Text_12, OldaleTown_PokemonCenter_1F_Tutor_3_Text_13, OldaleTown_PokemonCenter_1F_Tutor_3_Text_14, OldaleTown_PokemonCenter_1F_Tutor_3_Text_15, OldaleTown_PokemonCenter_1F_Tutor_3_Text_16, OldaleTown_PokemonCenter_1F_Tutor_3_Text_17, OldaleTown_PokemonCenter_1F_Tutor_3_Text_18, OldaleTown_PokemonCenter_1F_Tutor_3_Text_19
# 242 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 243 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 0, OldaleTown_PokemonCenter_1F_Tutor_3_3
# 244 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 1, OldaleTown_PokemonCenter_1F_Tutor_3_4
# 245 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 2, OldaleTown_PokemonCenter_1F_Tutor_3_5
# 246 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 3, OldaleTown_PokemonCenter_1F_Tutor_3_6
# 247 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 4, OldaleTown_PokemonCenter_1F_Tutor_3_7
# 248 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 5, OldaleTown_PokemonCenter_1F_Tutor_3_8
# 249 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 6, OldaleTown_PokemonCenter_1F_Tutor_3_9
# 250 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 7, OldaleTown_PokemonCenter_1F_Tutor_3_10
# 251 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 8, OldaleTown_PokemonCenter_1F_Tutor_3_11
# 252 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 9, OldaleTown_PokemonCenter_1F_Tutor_3_12
# 253 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 10, OldaleTown_PokemonCenter_1F_Tutor_3_13
# 254 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 11, OldaleTown_PokemonCenter_1F_Tutor_3_14
# 255 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 12, OldaleTown_PokemonCenter_1F_Tutor_3_15
# 256 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 13, OldaleTown_PokemonCenter_1F_Tutor_3_16
# 257 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 14, OldaleTown_PokemonCenter_1F_Tutor_3_17
# 258 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 15, OldaleTown_PokemonCenter_1F_Tutor_3_18
# 259 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 16, OldaleTown_PokemonCenter_1F_Tutor_3_19
# 260 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 17, OldaleTown_PokemonCenter_1F_Tutor_3_20
# 261 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 18, OldaleTown_PokemonCenter_1F_Tutor_3_21
# 262 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 19, OldaleTown_PokemonCenter_1F_Tutor_3_22
# 263 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 127, OldaleTown_PokemonCenter_1F_Tutor_3_23
OldaleTown_PokemonCenter_1F_Tutor_3_1:
# 265 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu_Delta
# 266 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleTown_PokemonCenter_1F_Tutor_3_25
OldaleTown_PokemonCenter_1F_Tutor_3_24:
# 269 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 270 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldaleTown_PokemonCenter_1F_Tutor_3_3:
# 243 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_ACID_SPRAY
	goto OldaleTown_PokemonCenter_1F_Tutor_3_1

OldaleTown_PokemonCenter_1F_Tutor_3_4:
# 244 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_AURORA_BEAM
	goto OldaleTown_PokemonCenter_1F_Tutor_3_1

OldaleTown_PokemonCenter_1F_Tutor_3_5:
# 245 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_BREAKING_SWIPE
	goto OldaleTown_PokemonCenter_1F_Tutor_3_1

OldaleTown_PokemonCenter_1F_Tutor_3_6:
# 246 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_BRINE
	goto OldaleTown_PokemonCenter_1F_Tutor_3_1

OldaleTown_PokemonCenter_1F_Tutor_3_7:
# 247 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_CONFIDE
	goto OldaleTown_PokemonCenter_1F_Tutor_3_1

OldaleTown_PokemonCenter_1F_Tutor_3_8:
# 248 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_DISABLE
	goto OldaleTown_PokemonCenter_1F_Tutor_3_1

OldaleTown_PokemonCenter_1F_Tutor_3_9:
# 249 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_FANG
	goto OldaleTown_PokemonCenter_1F_Tutor_3_1

OldaleTown_PokemonCenter_1F_Tutor_3_10:
# 250 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_GRAVITY
	goto OldaleTown_PokemonCenter_1F_Tutor_3_1

OldaleTown_PokemonCenter_1F_Tutor_3_11:
# 251 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_ICE_FANG
	goto OldaleTown_PokemonCenter_1F_Tutor_3_1

OldaleTown_PokemonCenter_1F_Tutor_3_12:
# 252 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_LASH_OUT
	goto OldaleTown_PokemonCenter_1F_Tutor_3_1

OldaleTown_PokemonCenter_1F_Tutor_3_13:
# 253 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_MAGNET_RISE
	goto OldaleTown_PokemonCenter_1F_Tutor_3_1

OldaleTown_PokemonCenter_1F_Tutor_3_14:
# 254 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_RECYCLE
	goto OldaleTown_PokemonCenter_1F_Tutor_3_1

OldaleTown_PokemonCenter_1F_Tutor_3_15:
# 255 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_REVENGE
	goto OldaleTown_PokemonCenter_1F_Tutor_3_1

OldaleTown_PokemonCenter_1F_Tutor_3_16:
# 256 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_ROCK_BLAST
	goto OldaleTown_PokemonCenter_1F_Tutor_3_1

OldaleTown_PokemonCenter_1F_Tutor_3_17:
# 257 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_SIGNAL_BEAM
	goto OldaleTown_PokemonCenter_1F_Tutor_3_1

OldaleTown_PokemonCenter_1F_Tutor_3_18:
# 258 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_SMART_STRIKE
	goto OldaleTown_PokemonCenter_1F_Tutor_3_1

OldaleTown_PokemonCenter_1F_Tutor_3_19:
# 259 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_SOFT_BOILED
	goto OldaleTown_PokemonCenter_1F_Tutor_3_1

OldaleTown_PokemonCenter_1F_Tutor_3_20:
# 260 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_THUNDER_FANG
	goto OldaleTown_PokemonCenter_1F_Tutor_3_1

OldaleTown_PokemonCenter_1F_Tutor_3_21:
# 261 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_TRICK
	goto OldaleTown_PokemonCenter_1F_Tutor_3_1

OldaleTown_PokemonCenter_1F_Tutor_3_22:
# 262 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_WAKE_UP_SLAP
	goto OldaleTown_PokemonCenter_1F_Tutor_3_1

OldaleTown_PokemonCenter_1F_Tutor_3_23:
# 263 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto PokemonCenter_1F_OldManUtility
	goto OldaleTown_PokemonCenter_1F_Tutor_3_1

OldaleTown_PokemonCenter_1F_Tutor_3_25:
# 267 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_3
	goto OldaleTown_PokemonCenter_1F_Tutor_3_24


OldaleTown_PokemonCenter_1F_Tutor_4::
# 274 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Tutor_1_Text_0
# 275 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_PokemonCenter_1F_Tutor_4_Text_0, OldaleTown_PokemonCenter_1F_Tutor_4_Text_1, OldaleTown_PokemonCenter_1F_Tutor_4_Text_2, OldaleTown_PokemonCenter_1F_Tutor_4_Text_3, OldaleTown_PokemonCenter_1F_Tutor_4_Text_4, OldaleTown_PokemonCenter_1F_Tutor_4_Text_5, OldaleTown_PokemonCenter_1F_Tutor_4_Text_6, OldaleTown_PokemonCenter_1F_Tutor_4_Text_7, OldaleTown_PokemonCenter_1F_Tutor_4_Text_8, OldaleTown_PokemonCenter_1F_Tutor_4_Text_9, OldaleTown_PokemonCenter_1F_Tutor_4_Text_10, OldaleTown_PokemonCenter_1F_Tutor_4_Text_11, OldaleTown_PokemonCenter_1F_Tutor_4_Text_12, OldaleTown_PokemonCenter_1F_Tutor_4_Text_13, OldaleTown_PokemonCenter_1F_Tutor_4_Text_14, OldaleTown_PokemonCenter_1F_Tutor_4_Text_15, OldaleTown_PokemonCenter_1F_Tutor_4_Text_16, OldaleTown_PokemonCenter_1F_Tutor_4_Text_17, OldaleTown_PokemonCenter_1F_Tutor_4_Text_18, OldaleTown_PokemonCenter_1F_Tutor_4_Text_19
# 279 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 280 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 0, OldaleTown_PokemonCenter_1F_Tutor_4_3
# 281 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 1, OldaleTown_PokemonCenter_1F_Tutor_4_4
# 282 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 2, OldaleTown_PokemonCenter_1F_Tutor_4_5
# 283 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 3, OldaleTown_PokemonCenter_1F_Tutor_4_6
# 284 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 4, OldaleTown_PokemonCenter_1F_Tutor_4_7
# 285 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 5, OldaleTown_PokemonCenter_1F_Tutor_4_8
# 286 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 6, OldaleTown_PokemonCenter_1F_Tutor_4_9
# 287 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 7, OldaleTown_PokemonCenter_1F_Tutor_4_10
# 288 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 8, OldaleTown_PokemonCenter_1F_Tutor_4_11
# 289 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 9, OldaleTown_PokemonCenter_1F_Tutor_4_12
# 290 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 10, OldaleTown_PokemonCenter_1F_Tutor_4_13
# 291 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 11, OldaleTown_PokemonCenter_1F_Tutor_4_14
# 292 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 12, OldaleTown_PokemonCenter_1F_Tutor_4_15
# 293 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 13, OldaleTown_PokemonCenter_1F_Tutor_4_16
# 294 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 14, OldaleTown_PokemonCenter_1F_Tutor_4_17
# 295 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 15, OldaleTown_PokemonCenter_1F_Tutor_4_18
# 296 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 16, OldaleTown_PokemonCenter_1F_Tutor_4_19
# 297 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 17, OldaleTown_PokemonCenter_1F_Tutor_4_20
# 298 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 18, OldaleTown_PokemonCenter_1F_Tutor_4_21
# 299 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 19, OldaleTown_PokemonCenter_1F_Tutor_4_22
# 300 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 127, OldaleTown_PokemonCenter_1F_Tutor_4_23
OldaleTown_PokemonCenter_1F_Tutor_4_1:
# 302 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu_Delta
# 303 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleTown_PokemonCenter_1F_Tutor_4_25
OldaleTown_PokemonCenter_1F_Tutor_4_24:
# 306 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 307 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldaleTown_PokemonCenter_1F_Tutor_4_3:
# 280 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_BLAZE_KICK
	goto OldaleTown_PokemonCenter_1F_Tutor_4_1

OldaleTown_PokemonCenter_1F_Tutor_4_4:
# 281 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_BODY_SLAM
	goto OldaleTown_PokemonCenter_1F_Tutor_4_1

OldaleTown_PokemonCenter_1F_Tutor_4_5:
# 282 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_CHARM
	goto OldaleTown_PokemonCenter_1F_Tutor_4_1

OldaleTown_PokemonCenter_1F_Tutor_4_6:
# 283 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_CROSS_POISON
	goto OldaleTown_PokemonCenter_1F_Tutor_4_1

OldaleTown_PokemonCenter_1F_Tutor_4_7:
# 284 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_CURSE
	goto OldaleTown_PokemonCenter_1F_Tutor_4_1

OldaleTown_PokemonCenter_1F_Tutor_4_8:
# 285 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_DRILL_RUN
	goto OldaleTown_PokemonCenter_1F_Tutor_4_1

OldaleTown_PokemonCenter_1F_Tutor_4_9:
# 286 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_EERIE_IMPULSE
	goto OldaleTown_PokemonCenter_1F_Tutor_4_1

OldaleTown_PokemonCenter_1F_Tutor_4_10:
# 287 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_ENDEAVOR
	goto OldaleTown_PokemonCenter_1F_Tutor_4_1

OldaleTown_PokemonCenter_1F_Tutor_4_11:
# 288 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_PUNCH
	goto OldaleTown_PokemonCenter_1F_Tutor_4_1

OldaleTown_PokemonCenter_1F_Tutor_4_12:
# 289 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_HEAL_BELL
	goto OldaleTown_PokemonCenter_1F_Tutor_4_1

OldaleTown_PokemonCenter_1F_Tutor_4_13:
# 290 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_ICE_PUNCH
	goto OldaleTown_PokemonCenter_1F_Tutor_4_1

OldaleTown_PokemonCenter_1F_Tutor_4_14:
# 291 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_LEAF_BLADE
	goto OldaleTown_PokemonCenter_1F_Tutor_4_1

OldaleTown_PokemonCenter_1F_Tutor_4_15:
# 292 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCHO_CUT
	goto OldaleTown_PokemonCenter_1F_Tutor_4_1

OldaleTown_PokemonCenter_1F_Tutor_4_16:
# 293 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_RAZOR_SHELL
	goto OldaleTown_PokemonCenter_1F_Tutor_4_1

OldaleTown_PokemonCenter_1F_Tutor_4_17:
# 294 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_SKITTER_SMACK
	goto OldaleTown_PokemonCenter_1F_Tutor_4_1

OldaleTown_PokemonCenter_1F_Tutor_4_18:
# 295 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_TAILWIND
	goto OldaleTown_PokemonCenter_1F_Tutor_4_1

OldaleTown_PokemonCenter_1F_Tutor_4_19:
# 296 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_TRI_ATTACK
	goto OldaleTown_PokemonCenter_1F_Tutor_4_1

OldaleTown_PokemonCenter_1F_Tutor_4_20:
# 297 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_THUNDER_PUNCH
	goto OldaleTown_PokemonCenter_1F_Tutor_4_1

OldaleTown_PokemonCenter_1F_Tutor_4_21:
# 298 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_WEATHER_BALL
	goto OldaleTown_PokemonCenter_1F_Tutor_4_1

OldaleTown_PokemonCenter_1F_Tutor_4_22:
# 299 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_ZEN_HEADBUTT
	goto OldaleTown_PokemonCenter_1F_Tutor_4_1

OldaleTown_PokemonCenter_1F_Tutor_4_23:
# 300 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto PokemonCenter_1F_OldManUtility
	goto OldaleTown_PokemonCenter_1F_Tutor_4_1

OldaleTown_PokemonCenter_1F_Tutor_4_25:
# 304 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_4
	goto OldaleTown_PokemonCenter_1F_Tutor_4_24


OldaleTown_PokemonCenter_1F_Tutor_5::
# 311 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Tutor_1_Text_0
# 312 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_PokemonCenter_1F_Tutor_5_Text_0, OldaleTown_PokemonCenter_1F_Tutor_5_Text_1, OldaleTown_PokemonCenter_1F_Tutor_5_Text_2, OldaleTown_PokemonCenter_1F_Tutor_5_Text_3, OldaleTown_PokemonCenter_1F_Tutor_5_Text_4, OldaleTown_PokemonCenter_1F_Tutor_5_Text_5, OldaleTown_PokemonCenter_1F_Tutor_5_Text_6, OldaleTown_PokemonCenter_1F_Tutor_5_Text_7, OldaleTown_PokemonCenter_1F_Tutor_5_Text_8, OldaleTown_PokemonCenter_1F_Tutor_5_Text_9, OldaleTown_PokemonCenter_1F_Tutor_5_Text_10, OldaleTown_PokemonCenter_1F_Tutor_5_Text_11, OldaleTown_PokemonCenter_1F_Tutor_5_Text_12, OldaleTown_PokemonCenter_1F_Tutor_5_Text_13, OldaleTown_PokemonCenter_1F_Tutor_5_Text_14, OldaleTown_PokemonCenter_1F_Tutor_5_Text_15, OldaleTown_PokemonCenter_1F_Tutor_5_Text_16, OldaleTown_PokemonCenter_1F_Tutor_5_Text_17, OldaleTown_PokemonCenter_1F_Tutor_5_Text_18, OldaleTown_PokemonCenter_1F_Tutor_5_Text_19
# 316 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 317 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 0, OldaleTown_PokemonCenter_1F_Tutor_5_3
# 318 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 1, OldaleTown_PokemonCenter_1F_Tutor_5_4
# 319 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 2, OldaleTown_PokemonCenter_1F_Tutor_5_5
# 320 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 3, OldaleTown_PokemonCenter_1F_Tutor_5_6
# 321 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 4, OldaleTown_PokemonCenter_1F_Tutor_5_7
# 322 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 5, OldaleTown_PokemonCenter_1F_Tutor_5_8
# 323 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 6, OldaleTown_PokemonCenter_1F_Tutor_5_9
# 324 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 7, OldaleTown_PokemonCenter_1F_Tutor_5_10
# 325 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 8, OldaleTown_PokemonCenter_1F_Tutor_5_11
# 326 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 9, OldaleTown_PokemonCenter_1F_Tutor_5_12
# 327 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 10, OldaleTown_PokemonCenter_1F_Tutor_5_13
# 328 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 11, OldaleTown_PokemonCenter_1F_Tutor_5_14
# 329 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 12, OldaleTown_PokemonCenter_1F_Tutor_5_15
# 330 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 13, OldaleTown_PokemonCenter_1F_Tutor_5_16
# 331 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 14, OldaleTown_PokemonCenter_1F_Tutor_5_17
# 332 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 15, OldaleTown_PokemonCenter_1F_Tutor_5_18
# 333 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 16, OldaleTown_PokemonCenter_1F_Tutor_5_19
# 334 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 17, OldaleTown_PokemonCenter_1F_Tutor_5_20
# 335 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 18, OldaleTown_PokemonCenter_1F_Tutor_5_21
# 336 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 19, OldaleTown_PokemonCenter_1F_Tutor_5_22
# 337 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 127, OldaleTown_PokemonCenter_1F_Tutor_5_23
OldaleTown_PokemonCenter_1F_Tutor_5_1:
# 339 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu_Delta
# 340 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleTown_PokemonCenter_1F_Tutor_5_25
OldaleTown_PokemonCenter_1F_Tutor_5_24:
# 343 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 344 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldaleTown_PokemonCenter_1F_Tutor_5_3:
# 317 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_AMNESIA
	goto OldaleTown_PokemonCenter_1F_Tutor_5_1

OldaleTown_PokemonCenter_1F_Tutor_5_4:
# 318 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_AQUA_TAIL
	goto OldaleTown_PokemonCenter_1F_Tutor_5_1

OldaleTown_PokemonCenter_1F_Tutor_5_5:
# 319 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_BOUNCE
	goto OldaleTown_PokemonCenter_1F_Tutor_5_1

OldaleTown_PokemonCenter_1F_Tutor_5_6:
# 320 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_BUG_BUZZ
	goto OldaleTown_PokemonCenter_1F_Tutor_5_1

OldaleTown_PokemonCenter_1F_Tutor_5_7:
# 321 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_CRUNCH
	goto OldaleTown_PokemonCenter_1F_Tutor_5_1

OldaleTown_PokemonCenter_1F_Tutor_5_8:
# 322 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_DOUBLE_EDGE
	goto OldaleTown_PokemonCenter_1F_Tutor_5_1

OldaleTown_PokemonCenter_1F_Tutor_5_9:
# 323 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_DUAL_CHOP
	goto OldaleTown_PokemonCenter_1F_Tutor_5_1

OldaleTown_PokemonCenter_1F_Tutor_5_10:
# 324 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_DYNAMIC_PUNCH
	goto OldaleTown_PokemonCenter_1F_Tutor_5_1

OldaleTown_PokemonCenter_1F_Tutor_5_11:
# 325 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_ELECTRIC_TERRAIN
	goto OldaleTown_PokemonCenter_1F_Tutor_5_1

OldaleTown_PokemonCenter_1F_Tutor_5_12:
# 326 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_GRASSY_TERRAIN
	goto OldaleTown_PokemonCenter_1F_Tutor_5_1

OldaleTown_PokemonCenter_1F_Tutor_5_13:
# 327 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_HAZE
	goto OldaleTown_PokemonCenter_1F_Tutor_5_1

OldaleTown_PokemonCenter_1F_Tutor_5_14:
# 328 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_MISTY_TERRAIN
	goto OldaleTown_PokemonCenter_1F_Tutor_5_1

OldaleTown_PokemonCenter_1F_Tutor_5_15:
# 329 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_MUDDY_WATER
	goto OldaleTown_PokemonCenter_1F_Tutor_5_1

OldaleTown_PokemonCenter_1F_Tutor_5_16:
# 330 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_MYSTICAL_FIRE
	goto OldaleTown_PokemonCenter_1F_Tutor_5_1

OldaleTown_PokemonCenter_1F_Tutor_5_17:
# 331 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_POWER_GEM
	goto OldaleTown_PokemonCenter_1F_Tutor_5_1

OldaleTown_PokemonCenter_1F_Tutor_5_18:
# 332 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCHIC_FANGS
	goto OldaleTown_PokemonCenter_1F_Tutor_5_1

OldaleTown_PokemonCenter_1F_Tutor_5_19:
# 333 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCHIC_TERRAIN
	goto OldaleTown_PokemonCenter_1F_Tutor_5_1

OldaleTown_PokemonCenter_1F_Tutor_5_20:
# 334 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_SCORCHING_SANDS
	goto OldaleTown_PokemonCenter_1F_Tutor_5_1

OldaleTown_PokemonCenter_1F_Tutor_5_21:
# 335 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_STORED_POWER
	goto OldaleTown_PokemonCenter_1F_Tutor_5_1

OldaleTown_PokemonCenter_1F_Tutor_5_22:
# 336 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_TELEPORT
	goto OldaleTown_PokemonCenter_1F_Tutor_5_1

OldaleTown_PokemonCenter_1F_Tutor_5_23:
# 337 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto PokemonCenter_1F_OldManUtility
	goto OldaleTown_PokemonCenter_1F_Tutor_5_1

OldaleTown_PokemonCenter_1F_Tutor_5_25:
# 341 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_5
	goto OldaleTown_PokemonCenter_1F_Tutor_5_24


OldaleTown_PokemonCenter_1F_Tutor_6::
# 348 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Tutor_1_Text_0
# 349 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_PokemonCenter_1F_Tutor_6_Text_0, OldaleTown_PokemonCenter_1F_Tutor_6_Text_1, OldaleTown_PokemonCenter_1F_Tutor_6_Text_2, OldaleTown_PokemonCenter_1F_Tutor_6_Text_3, OldaleTown_PokemonCenter_1F_Tutor_6_Text_4, OldaleTown_PokemonCenter_1F_Tutor_6_Text_5, OldaleTown_PokemonCenter_1F_Tutor_6_Text_6, OldaleTown_PokemonCenter_1F_Tutor_6_Text_7, OldaleTown_PokemonCenter_1F_Tutor_6_Text_8, OldaleTown_PokemonCenter_1F_Tutor_6_Text_9, OldaleTown_PokemonCenter_1F_Tutor_6_Text_10, OldaleTown_PokemonCenter_1F_Tutor_6_Text_11, OldaleTown_PokemonCenter_1F_Tutor_6_Text_12, OldaleTown_PokemonCenter_1F_Tutor_6_Text_13, OldaleTown_PokemonCenter_1F_Tutor_6_Text_14, OldaleTown_PokemonCenter_1F_Tutor_6_Text_15, OldaleTown_PokemonCenter_1F_Tutor_6_Text_16, OldaleTown_PokemonCenter_1F_Tutor_6_Text_17, OldaleTown_PokemonCenter_1F_Tutor_6_Text_18, OldaleTown_PokemonCenter_1F_Tutor_6_Text_19
# 353 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 354 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 0, OldaleTown_PokemonCenter_1F_Tutor_6_3
# 355 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 1, OldaleTown_PokemonCenter_1F_Tutor_6_4
# 356 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 2, OldaleTown_PokemonCenter_1F_Tutor_6_5
# 357 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 3, OldaleTown_PokemonCenter_1F_Tutor_6_6
# 358 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 4, OldaleTown_PokemonCenter_1F_Tutor_6_7
# 359 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 5, OldaleTown_PokemonCenter_1F_Tutor_6_8
# 360 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 6, OldaleTown_PokemonCenter_1F_Tutor_6_9
# 361 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 7, OldaleTown_PokemonCenter_1F_Tutor_6_10
# 362 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 8, OldaleTown_PokemonCenter_1F_Tutor_6_11
# 363 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 9, OldaleTown_PokemonCenter_1F_Tutor_6_12
# 364 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 10, OldaleTown_PokemonCenter_1F_Tutor_6_13
# 365 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 11, OldaleTown_PokemonCenter_1F_Tutor_6_14
# 366 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 12, OldaleTown_PokemonCenter_1F_Tutor_6_15
# 367 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 13, OldaleTown_PokemonCenter_1F_Tutor_6_16
# 368 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 14, OldaleTown_PokemonCenter_1F_Tutor_6_17
# 369 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 15, OldaleTown_PokemonCenter_1F_Tutor_6_18
# 370 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 16, OldaleTown_PokemonCenter_1F_Tutor_6_19
# 371 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 17, OldaleTown_PokemonCenter_1F_Tutor_6_20
# 372 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 18, OldaleTown_PokemonCenter_1F_Tutor_6_21
# 373 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 19, OldaleTown_PokemonCenter_1F_Tutor_6_22
# 374 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 127, OldaleTown_PokemonCenter_1F_Tutor_6_23
OldaleTown_PokemonCenter_1F_Tutor_6_1:
# 376 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu_Delta
# 377 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleTown_PokemonCenter_1F_Tutor_6_25
OldaleTown_PokemonCenter_1F_Tutor_6_24:
# 380 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 381 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldaleTown_PokemonCenter_1F_Tutor_6_3:
# 354 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_ANCIENT_POWER
	goto OldaleTown_PokemonCenter_1F_Tutor_6_1

OldaleTown_PokemonCenter_1F_Tutor_6_4:
# 355 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_BATON_PASS
	goto OldaleTown_PokemonCenter_1F_Tutor_6_1

OldaleTown_PokemonCenter_1F_Tutor_6_5:
# 356 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_ENCORE
	goto OldaleTown_PokemonCenter_1F_Tutor_6_1

OldaleTown_PokemonCenter_1F_Tutor_6_6:
# 357 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_PLEDGE
	goto OldaleTown_PokemonCenter_1F_Tutor_6_1

OldaleTown_PokemonCenter_1F_Tutor_6_7:
# 358 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_FOUL_PLAY
	goto OldaleTown_PokemonCenter_1F_Tutor_6_1

OldaleTown_PokemonCenter_1F_Tutor_6_8:
# 359 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_GRASS_PLEDGE
	goto OldaleTown_PokemonCenter_1F_Tutor_6_1

OldaleTown_PokemonCenter_1F_Tutor_6_9:
# 360 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_HEAL_BLOCK
	goto OldaleTown_PokemonCenter_1F_Tutor_6_1

OldaleTown_PokemonCenter_1F_Tutor_6_10:
# 361 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_MEGAHORN
	goto OldaleTown_PokemonCenter_1F_Tutor_6_1

OldaleTown_PokemonCenter_1F_Tutor_6_11:
# 362 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_METEOR_MASH
	goto OldaleTown_PokemonCenter_1F_Tutor_6_1

OldaleTown_PokemonCenter_1F_Tutor_6_12:
# 363 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_MOONBLAST
	goto OldaleTown_PokemonCenter_1F_Tutor_6_1

OldaleTown_PokemonCenter_1F_Tutor_6_13:
# 364 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_PHANTOM_FORCE
	goto OldaleTown_PokemonCenter_1F_Tutor_6_1

OldaleTown_PokemonCenter_1F_Tutor_6_14:
# 365 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_POLLEN_PUFF
	goto OldaleTown_PokemonCenter_1F_Tutor_6_1

OldaleTown_PokemonCenter_1F_Tutor_6_15:
# 366 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_SNATCH
	goto OldaleTown_PokemonCenter_1F_Tutor_6_1

OldaleTown_PokemonCenter_1F_Tutor_6_16:
# 367 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_SOLAR_BLADE
	goto OldaleTown_PokemonCenter_1F_Tutor_6_1

OldaleTown_PokemonCenter_1F_Tutor_6_17:
# 368 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_SPIKES
	goto OldaleTown_PokemonCenter_1F_Tutor_6_1

OldaleTown_PokemonCenter_1F_Tutor_6_18:
# 369 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_SUCKER_PUNCH
	goto OldaleTown_PokemonCenter_1F_Tutor_6_1

OldaleTown_PokemonCenter_1F_Tutor_6_19:
# 370 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_SUPER_FANG
	goto OldaleTown_PokemonCenter_1F_Tutor_6_1

OldaleTown_PokemonCenter_1F_Tutor_6_20:
# 371 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_THROAT_CHOP
	goto OldaleTown_PokemonCenter_1F_Tutor_6_1

OldaleTown_PokemonCenter_1F_Tutor_6_21:
# 372 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_TOXIC_SPIKES
	goto OldaleTown_PokemonCenter_1F_Tutor_6_1

OldaleTown_PokemonCenter_1F_Tutor_6_22:
# 373 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_WATER_PLEDGE
	goto OldaleTown_PokemonCenter_1F_Tutor_6_1

OldaleTown_PokemonCenter_1F_Tutor_6_23:
# 374 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto PokemonCenter_1F_OldManUtility
	goto OldaleTown_PokemonCenter_1F_Tutor_6_1

OldaleTown_PokemonCenter_1F_Tutor_6_25:
# 378 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_6
	goto OldaleTown_PokemonCenter_1F_Tutor_6_24


OldaleTown_PokemonCenter_1F_Tutor_7::
# 385 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Tutor_1_Text_0
# 386 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, OldaleTown_PokemonCenter_1F_Tutor_7_Text_0, OldaleTown_PokemonCenter_1F_Tutor_7_Text_1, OldaleTown_PokemonCenter_1F_Tutor_7_Text_2, OldaleTown_PokemonCenter_1F_Tutor_7_Text_3, OldaleTown_PokemonCenter_1F_Tutor_7_Text_4, OldaleTown_PokemonCenter_1F_Tutor_7_Text_5, OldaleTown_PokemonCenter_1F_Tutor_7_Text_6, OldaleTown_PokemonCenter_1F_Tutor_7_Text_7, OldaleTown_PokemonCenter_1F_Tutor_7_Text_8, OldaleTown_PokemonCenter_1F_Tutor_7_Text_9, OldaleTown_PokemonCenter_1F_Tutor_7_Text_10, OldaleTown_PokemonCenter_1F_Tutor_7_Text_11, OldaleTown_PokemonCenter_1F_Tutor_7_Text_12, OldaleTown_PokemonCenter_1F_Tutor_7_Text_13, OldaleTown_PokemonCenter_1F_Tutor_7_Text_14, OldaleTown_PokemonCenter_1F_Tutor_7_Text_15, OldaleTown_PokemonCenter_1F_Tutor_7_Text_16, OldaleTown_PokemonCenter_1F_Tutor_7_Text_17, OldaleTown_PokemonCenter_1F_Tutor_7_Text_18, OldaleTown_PokemonCenter_1F_Tutor_7_Text_19
# 390 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	switch VAR_RESULT
# 391 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 0, OldaleTown_PokemonCenter_1F_Tutor_7_3
# 392 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 1, OldaleTown_PokemonCenter_1F_Tutor_7_4
# 393 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 2, OldaleTown_PokemonCenter_1F_Tutor_7_5
# 394 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 3, OldaleTown_PokemonCenter_1F_Tutor_7_6
# 395 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 4, OldaleTown_PokemonCenter_1F_Tutor_7_7
# 396 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 5, OldaleTown_PokemonCenter_1F_Tutor_7_8
# 397 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 6, OldaleTown_PokemonCenter_1F_Tutor_7_9
# 398 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 7, OldaleTown_PokemonCenter_1F_Tutor_7_10
# 399 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 8, OldaleTown_PokemonCenter_1F_Tutor_7_11
# 400 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 9, OldaleTown_PokemonCenter_1F_Tutor_7_12
# 401 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 10, OldaleTown_PokemonCenter_1F_Tutor_7_13
# 402 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 11, OldaleTown_PokemonCenter_1F_Tutor_7_14
# 403 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 12, OldaleTown_PokemonCenter_1F_Tutor_7_15
# 404 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 13, OldaleTown_PokemonCenter_1F_Tutor_7_16
# 405 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 14, OldaleTown_PokemonCenter_1F_Tutor_7_17
# 406 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 15, OldaleTown_PokemonCenter_1F_Tutor_7_18
# 407 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 16, OldaleTown_PokemonCenter_1F_Tutor_7_19
# 408 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 17, OldaleTown_PokemonCenter_1F_Tutor_7_20
# 409 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 18, OldaleTown_PokemonCenter_1F_Tutor_7_21
# 410 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 19, OldaleTown_PokemonCenter_1F_Tutor_7_22
# 411 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	case 127, OldaleTown_PokemonCenter_1F_Tutor_7_23
OldaleTown_PokemonCenter_1F_Tutor_7_1:
# 413 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu_Delta
# 414 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleTown_PokemonCenter_1F_Tutor_7_25
OldaleTown_PokemonCenter_1F_Tutor_7_24:
# 417 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 418 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

OldaleTown_PokemonCenter_1F_Tutor_7_3:
# 391 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_AURORA_VEIL
	goto OldaleTown_PokemonCenter_1F_Tutor_7_1

OldaleTown_PokemonCenter_1F_Tutor_7_4:
# 392 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_BRAVE_BIRD
	goto OldaleTown_PokemonCenter_1F_Tutor_7_1

OldaleTown_PokemonCenter_1F_Tutor_7_5:
# 393 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_DRAGON_DANCE
	goto OldaleTown_PokemonCenter_1F_Tutor_7_1

OldaleTown_PokemonCenter_1F_Tutor_7_6:
# 394 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_FLARE_BLITZ
	goto OldaleTown_PokemonCenter_1F_Tutor_7_1

OldaleTown_PokemonCenter_1F_Tutor_7_7:
# 395 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_FOCUS_PUNCH
	goto OldaleTown_PokemonCenter_1F_Tutor_7_1

OldaleTown_PokemonCenter_1F_Tutor_7_8:
# 396 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_HEAT_CRASH
	goto OldaleTown_PokemonCenter_1F_Tutor_7_1

OldaleTown_PokemonCenter_1F_Tutor_7_9:
# 397 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_HEAVY_SLAM
	goto OldaleTown_PokemonCenter_1F_Tutor_7_1

OldaleTown_PokemonCenter_1F_Tutor_7_10:
# 398 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_LAST_RESORT
	goto OldaleTown_PokemonCenter_1F_Tutor_7_1

OldaleTown_PokemonCenter_1F_Tutor_7_11:
# 399 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_LEAF_STORM
	goto OldaleTown_PokemonCenter_1F_Tutor_7_1

OldaleTown_PokemonCenter_1F_Tutor_7_12:
# 400 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_METEOR_BEAM
	goto OldaleTown_PokemonCenter_1F_Tutor_7_1

OldaleTown_PokemonCenter_1F_Tutor_7_13:
# 401 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_NASTY_PLOT
	goto OldaleTown_PokemonCenter_1F_Tutor_7_1

OldaleTown_PokemonCenter_1F_Tutor_7_14:
# 402 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_OUTRAGE
	goto OldaleTown_PokemonCenter_1F_Tutor_7_1

OldaleTown_PokemonCenter_1F_Tutor_7_15:
# 403 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_POLTERGEIST
	goto OldaleTown_PokemonCenter_1F_Tutor_7_1

OldaleTown_PokemonCenter_1F_Tutor_7_16:
# 404 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_POWER_WHIP
	goto OldaleTown_PokemonCenter_1F_Tutor_7_1

OldaleTown_PokemonCenter_1F_Tutor_7_17:
# 405 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_QUIVER_DANCE
	goto OldaleTown_PokemonCenter_1F_Tutor_7_1

OldaleTown_PokemonCenter_1F_Tutor_7_18:
# 406 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_SELF_DESTRUCT
	goto OldaleTown_PokemonCenter_1F_Tutor_7_1

OldaleTown_PokemonCenter_1F_Tutor_7_19:
# 407 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_SKY_ATTACK
	goto OldaleTown_PokemonCenter_1F_Tutor_7_1

OldaleTown_PokemonCenter_1F_Tutor_7_20:
# 408 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_SUPERPOWER
	goto OldaleTown_PokemonCenter_1F_Tutor_7_1

OldaleTown_PokemonCenter_1F_Tutor_7_21:
# 409 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_TRIPLE_AXEL
	goto OldaleTown_PokemonCenter_1F_Tutor_7_1

OldaleTown_PokemonCenter_1F_Tutor_7_22:
# 410 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_WAVE_CRASH
	goto OldaleTown_PokemonCenter_1F_Tutor_7_1

OldaleTown_PokemonCenter_1F_Tutor_7_23:
# 411 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto PokemonCenter_1F_OldManUtility
	goto OldaleTown_PokemonCenter_1F_Tutor_7_1

OldaleTown_PokemonCenter_1F_Tutor_7_25:
# 415 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto OldaleTown_PokemonCenter_1F_Tutor_7
	goto OldaleTown_PokemonCenter_1F_Tutor_7_24


MoveTutor_EventScript_OpenPartyMenu_Delta::
# 423 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	special ChooseMonForMoveTutor
# 424 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitstate
# 425 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 426 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
	return


Mart_EventScript_PokeCenter_GeneralClerk::
# 432 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	lock
# 433 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 434 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	message gText_HowMayIServeYou
# 435 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 436 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, Mart_EventScript_PokeCenter_GeneralClerk_2
# 438 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Mart_EventScript_PokeCenter_GeneralClerk_3
# 440 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, Mart_EventScript_PokeCenter_GeneralClerk_4
# 442 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, Mart_EventScript_PokeCenter_GeneralClerk_5
# 444 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Mart_EventScript_PokeCenter_GeneralClerk_6
# 446 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Mart_EventScript_PokeCenter_GeneralClerk_7
# 448 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_VISITED_RUSTBORO_CITY, Mart_EventScript_PokeCenter_GeneralClerk_8
# 450 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, Mart_EventScript_PokeCenter_GeneralClerk_9
Mart_EventScript_PokeCenter_GeneralClerk_1:
# 453 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 454 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	release
	end

Mart_EventScript_PokeCenter_GeneralClerk_2:
# 437 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	pokemart Mart_PokeCenter_6thBadge
	goto Mart_EventScript_PokeCenter_GeneralClerk_1

Mart_EventScript_PokeCenter_GeneralClerk_3:
# 439 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	pokemart Mart_PokeCenter_5thBadge
	goto Mart_EventScript_PokeCenter_GeneralClerk_1

Mart_EventScript_PokeCenter_GeneralClerk_4:
# 441 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	pokemart Mart_PokeCenter_4thBadge
	goto Mart_EventScript_PokeCenter_GeneralClerk_1

Mart_EventScript_PokeCenter_GeneralClerk_5:
# 443 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	pokemart Mart_PokeCenter_3rdBadge
	goto Mart_EventScript_PokeCenter_GeneralClerk_1

Mart_EventScript_PokeCenter_GeneralClerk_6:
# 445 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	pokemart Mart_PokeCenter_2ndBadge
	goto Mart_EventScript_PokeCenter_GeneralClerk_1

Mart_EventScript_PokeCenter_GeneralClerk_7:
# 447 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	pokemart Mart_PokeCenter_1stBadge
	goto Mart_EventScript_PokeCenter_GeneralClerk_1

Mart_EventScript_PokeCenter_GeneralClerk_8:
# 449 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	pokemart Mart_PokeCenter_VisitedRustboro
	goto Mart_EventScript_PokeCenter_GeneralClerk_1

Mart_EventScript_PokeCenter_GeneralClerk_9:
# 451 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	pokemart Mart_PokeCenter_ObtainedPokedex
	goto Mart_EventScript_PokeCenter_GeneralClerk_1


	.align 2
# 458 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
Mart_PokeCenter_ObtainedPokedex:
# 459 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 460 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POTION
# 461 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 462 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 463 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 464 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 465 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

	.align 2
# 468 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
Mart_PokeCenter_VisitedRustboro:
# 469 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 470 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POTION
# 471 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 472 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 473 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 474 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 475 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 476 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

	.align 2
# 479 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
Mart_PokeCenter_1stBadge:
# 480 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 481 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 482 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POTION
# 483 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 484 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 485 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 486 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 487 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 488 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_AWAKENING
# 489 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

	.align 2
# 492 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
Mart_PokeCenter_2ndBadge:
# 493 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 494 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 495 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_DREAM_BALL
# 496 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POTION
# 497 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 498 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 499 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_REVIVE
# 500 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 501 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 502 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 503 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 504 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_AWAKENING
# 505 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_REPEL
# 506 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 507 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
	.2byte ITEM_NONE

	.align 2
# 510 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
Mart_PokeCenter_3rdBadge:
# 511 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 512 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 513 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 514 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_DREAM_BALL
# 515 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POTION
# 516 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 517 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 518 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_REVIVE
# 519 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 520 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 521 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 522 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 523 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_AWAKENING
# 524 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 525 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_REPEL
# 526 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 527 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 528 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
	.2byte ITEM_NONE

	.align 2
# 531 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
Mart_PokeCenter_4thBadge:
# 532 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 533 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 534 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 535 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_DREAM_BALL
# 536 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POTION
# 537 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 538 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 539 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_MAX_POTION
# 540 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_REVIVE
# 541 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 542 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 543 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 544 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 545 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 546 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_AWAKENING
# 547 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 548 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ETHER
# 549 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_REPEL
# 550 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 551 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 552 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 553 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

	.align 2
# 556 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
Mart_PokeCenter_5thBadge:
# 557 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 558 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 559 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 560 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_DREAM_BALL
# 561 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POTION
# 562 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 563 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 564 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_MAX_POTION
# 565 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 566 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_REVIVE
# 567 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 568 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 569 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 570 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 571 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 572 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_AWAKENING
# 573 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 574 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ETHER
# 575 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_PP_UP
# 576 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_REPEL
# 577 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 578 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 579 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 580 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

	.align 2
# 583 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
Mart_PokeCenter_6thBadge:
# 584 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 585 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 586 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 587 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_DREAM_BALL
# 588 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_POTION
# 589 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 590 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 591 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_MAX_POTION
# 592 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 593 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_REVIVE
# 594 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 595 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 596 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 597 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 598 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 599 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_AWAKENING
# 600 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 601 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ETHER
# 602 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_MAX_ETHER
# 603 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_PP_UP
# 604 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_PP_MAX
# 605 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_REPEL
# 606 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 607 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 608 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 609 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

PokemonCenter_1F_OldManUtility_Text_0:
# 72 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR RED}Tutor{COLOR DARK_GRAY}: Eh? Who's there?\pAh, a Trainer! I can teach your Pokémon\nsome special moves… moves they can't\llearn anywhere else, not in my day.\pDon't worry, no charge! But… let's\nsee, you'll only get a few moves to\lstart with…\pHmm, yes, yes.\nEarn more Gym Badges, and I might\lremember some new moves for you.\pHah!\nMy memory ain't what it used to be.\lCome back often!$"

PokemonCenter_1F_OldManUtility_Text_1:
# 78 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR RED}Tutor{COLOR DARK_GRAY}: Oh dear… it seems I don't have\nany moves I can teach you right now.\pMaybe once you get a Gym Badge or two,\nI'll remember something…\pYes, yes, come back later!$"

PokemonCenter_1F_OldManUtility_Text_2:
# 83 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR RED}Tutor{COLOR DARK_GRAY}: Which set of moves would you\nlike to choose from?$"

PokemonCenter_1F_OldManUtility_Text_3:
# 86 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Badge: Stone$"

PokemonCenter_1F_OldManUtility_Text_4:
# 86 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Badge: Knuckle$"

PokemonCenter_1F_OldManUtility_Text_5:
# 86 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Badge: Dynamo$"

PokemonCenter_1F_OldManUtility_Text_6:
# 86 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Badge: Heat$"

PokemonCenter_1F_OldManUtility_Text_7:
# 86 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Badge: Balance$"

PokemonCenter_1F_OldManUtility_Text_8:
# 86 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Badge: Feather$"

PokemonCenter_1F_OldManUtility_Text_9:
# 86 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Badge: Mind$"

PokemonCenter_1F_OldManUtility_Text_10:
# 155 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR RED}Tutor{COLOR DARK_GRAY}: Ah, off you go then!$"

OldaleTown_PokemonCenter_1F_Tutor_1_Text_0:
# 162 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "{COLOR RED}Tutor{COLOR DARK_GRAY}: Hmm… let me see now…\nWhich move do you want again?$"

OldaleTown_PokemonCenter_1F_Tutor_1_Text_1:
# 164 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Air Cutter$"

OldaleTown_PokemonCenter_1F_Tutor_1_Text_2:
# 164 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Block$"

OldaleTown_PokemonCenter_1F_Tutor_1_Text_3:
# 164 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Brutal Swing$"

OldaleTown_PokemonCenter_1F_Tutor_1_Text_4:
# 164 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Bug Bite$"

OldaleTown_PokemonCenter_1F_Tutor_1_Text_5:
# 164 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Fury Cutter$"

OldaleTown_PokemonCenter_1F_Tutor_1_Text_6:
# 164 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Hone Claws$"

OldaleTown_PokemonCenter_1F_Tutor_1_Text_7:
# 164 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Infestation$"

OldaleTown_PokemonCenter_1F_Tutor_1_Text_8:
# 164 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Helping Hand$"

OldaleTown_PokemonCenter_1F_Tutor_1_Text_9:
# 164 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Low Sweep$"

OldaleTown_PokemonCenter_1F_Tutor_1_Text_10:
# 164 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Mega Drain$"

OldaleTown_PokemonCenter_1F_Tutor_1_Text_11:
# 165 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Metronome$"

OldaleTown_PokemonCenter_1F_Tutor_1_Text_12:
# 165 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Ominous Wind$"

OldaleTown_PokemonCenter_1F_Tutor_1_Text_13:
# 165 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Psych Up$"

OldaleTown_PokemonCenter_1F_Tutor_1_Text_14:
# 165 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Rollout$"

OldaleTown_PokemonCenter_1F_Tutor_1_Text_15:
# 165 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Seismic Toss$"

OldaleTown_PokemonCenter_1F_Tutor_1_Text_16:
# 165 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Silver Wind$"

OldaleTown_PokemonCenter_1F_Tutor_1_Text_17:
# 165 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Spite$"

OldaleTown_PokemonCenter_1F_Tutor_1_Text_18:
# 165 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Struggle Bug$"

OldaleTown_PokemonCenter_1F_Tutor_1_Text_19:
# 165 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Twister$"

OldaleTown_PokemonCenter_1F_Tutor_1_Text_20:
# 165 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Vacuum Wave$"

OldaleTown_PokemonCenter_1F_Tutor_2_Text_0:
# 202 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Agility$"

OldaleTown_PokemonCenter_1F_Tutor_2_Text_1:
# 202 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Chilling Water$"

OldaleTown_PokemonCenter_1F_Tutor_2_Text_2:
# 202 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Defog$"

OldaleTown_PokemonCenter_1F_Tutor_2_Text_3:
# 202 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Electroweb$"

OldaleTown_PokemonCenter_1F_Tutor_2_Text_4:
# 202 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Gastro Acid$"

OldaleTown_PokemonCenter_1F_Tutor_2_Text_5:
# 202 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Incinerate$"

OldaleTown_PokemonCenter_1F_Tutor_2_Text_6:
# 202 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Hex$"

OldaleTown_PokemonCenter_1F_Tutor_2_Text_7:
# 202 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Iron Defense$"

OldaleTown_PokemonCenter_1F_Tutor_2_Text_8:
# 202 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Magic Coat$"

OldaleTown_PokemonCenter_1F_Tutor_2_Text_9:
# 202 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Pain Split$"

OldaleTown_PokemonCenter_1F_Tutor_2_Text_10:
# 203 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Pluck$"

OldaleTown_PokemonCenter_1F_Tutor_2_Text_11:
# 203 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Pounce$"

OldaleTown_PokemonCenter_1F_Tutor_2_Text_12:
# 203 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Role Play$"

OldaleTown_PokemonCenter_1F_Tutor_2_Text_13:
# 203 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Shock Wave$"

OldaleTown_PokemonCenter_1F_Tutor_2_Text_14:
# 203 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Swagger$"

OldaleTown_PokemonCenter_1F_Tutor_2_Text_15:
# 203 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Synthesis$"

OldaleTown_PokemonCenter_1F_Tutor_2_Text_16:
# 203 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Trailblaze$"

OldaleTown_PokemonCenter_1F_Tutor_2_Text_17:
# 203 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Uproar$"

OldaleTown_PokemonCenter_1F_Tutor_2_Text_18:
# 203 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Water Pulse$"

OldaleTown_PokemonCenter_1F_Tutor_2_Text_19:
# 203 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Worry Seed$"

OldaleTown_PokemonCenter_1F_Tutor_3_Text_0:
# 239 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Acid Spray$"

OldaleTown_PokemonCenter_1F_Tutor_3_Text_1:
# 239 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Aurora Beam$"

OldaleTown_PokemonCenter_1F_Tutor_3_Text_2:
# 239 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Breaking Swipe$"

OldaleTown_PokemonCenter_1F_Tutor_3_Text_3:
# 239 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Brine$"

OldaleTown_PokemonCenter_1F_Tutor_3_Text_4:
# 239 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Confide$"

OldaleTown_PokemonCenter_1F_Tutor_3_Text_5:
# 239 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Disable$"

OldaleTown_PokemonCenter_1F_Tutor_3_Text_6:
# 239 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Fire Fang$"

OldaleTown_PokemonCenter_1F_Tutor_3_Text_7:
# 239 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Gravity$"

OldaleTown_PokemonCenter_1F_Tutor_3_Text_8:
# 239 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Ice Fang$"

OldaleTown_PokemonCenter_1F_Tutor_3_Text_9:
# 239 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Lash Out$"

OldaleTown_PokemonCenter_1F_Tutor_3_Text_10:
# 240 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Magnet Rise$"

OldaleTown_PokemonCenter_1F_Tutor_3_Text_11:
# 240 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Recycle$"

OldaleTown_PokemonCenter_1F_Tutor_3_Text_12:
# 240 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Revenge$"

OldaleTown_PokemonCenter_1F_Tutor_3_Text_13:
# 240 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Rock Blast$"

OldaleTown_PokemonCenter_1F_Tutor_3_Text_14:
# 240 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Signal Beam$"

OldaleTown_PokemonCenter_1F_Tutor_3_Text_15:
# 240 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Smart Strike$"

OldaleTown_PokemonCenter_1F_Tutor_3_Text_16:
# 240 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Soft Boiled$"

OldaleTown_PokemonCenter_1F_Tutor_3_Text_17:
# 240 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Thunder Fang$"

OldaleTown_PokemonCenter_1F_Tutor_3_Text_18:
# 240 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Trick$"

OldaleTown_PokemonCenter_1F_Tutor_3_Text_19:
# 240 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Wake Up Slap$"

OldaleTown_PokemonCenter_1F_Tutor_4_Text_0:
# 276 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Blaze Kick$"

OldaleTown_PokemonCenter_1F_Tutor_4_Text_1:
# 276 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Body Slam$"

OldaleTown_PokemonCenter_1F_Tutor_4_Text_2:
# 276 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Charm$"

OldaleTown_PokemonCenter_1F_Tutor_4_Text_3:
# 276 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Cross Poison$"

OldaleTown_PokemonCenter_1F_Tutor_4_Text_4:
# 276 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Curse$"

OldaleTown_PokemonCenter_1F_Tutor_4_Text_5:
# 276 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Drill Run$"

OldaleTown_PokemonCenter_1F_Tutor_4_Text_6:
# 276 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Eerie Impulse$"

OldaleTown_PokemonCenter_1F_Tutor_4_Text_7:
# 276 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Endeavor$"

OldaleTown_PokemonCenter_1F_Tutor_4_Text_8:
# 276 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Fire Punch$"

OldaleTown_PokemonCenter_1F_Tutor_4_Text_9:
# 276 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Heal Bell$"

OldaleTown_PokemonCenter_1F_Tutor_4_Text_10:
# 277 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Ice Punch$"

OldaleTown_PokemonCenter_1F_Tutor_4_Text_11:
# 277 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Leaf Blade$"

OldaleTown_PokemonCenter_1F_Tutor_4_Text_12:
# 277 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Psycho Cut$"

OldaleTown_PokemonCenter_1F_Tutor_4_Text_13:
# 277 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Razor Shell$"

OldaleTown_PokemonCenter_1F_Tutor_4_Text_14:
# 277 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Skitter Smack$"

OldaleTown_PokemonCenter_1F_Tutor_4_Text_15:
# 277 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Tailwind$"

OldaleTown_PokemonCenter_1F_Tutor_4_Text_16:
# 277 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Tri Attack$"

OldaleTown_PokemonCenter_1F_Tutor_4_Text_17:
# 277 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Thunder Punch$"

OldaleTown_PokemonCenter_1F_Tutor_4_Text_18:
# 277 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Weather Ball$"

OldaleTown_PokemonCenter_1F_Tutor_4_Text_19:
# 277 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Zen Headbutt$"

OldaleTown_PokemonCenter_1F_Tutor_5_Text_0:
# 313 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Amnesia$"

OldaleTown_PokemonCenter_1F_Tutor_5_Text_1:
# 313 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Aqua Tail$"

OldaleTown_PokemonCenter_1F_Tutor_5_Text_2:
# 313 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Bounce$"

OldaleTown_PokemonCenter_1F_Tutor_5_Text_3:
# 313 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Bug Buzz$"

OldaleTown_PokemonCenter_1F_Tutor_5_Text_4:
# 313 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Crunch$"

OldaleTown_PokemonCenter_1F_Tutor_5_Text_5:
# 313 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Double Edge$"

OldaleTown_PokemonCenter_1F_Tutor_5_Text_6:
# 313 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Dual Chop$"

OldaleTown_PokemonCenter_1F_Tutor_5_Text_7:
# 313 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Dynamic Punch$"

OldaleTown_PokemonCenter_1F_Tutor_5_Text_8:
# 313 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Electric Terrain$"

OldaleTown_PokemonCenter_1F_Tutor_5_Text_9:
# 313 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Grassy Terrain$"

OldaleTown_PokemonCenter_1F_Tutor_5_Text_10:
# 314 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Haze$"

OldaleTown_PokemonCenter_1F_Tutor_5_Text_11:
# 314 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Misty Terrain$"

OldaleTown_PokemonCenter_1F_Tutor_5_Text_12:
# 314 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Muddy Water$"

OldaleTown_PokemonCenter_1F_Tutor_5_Text_13:
# 314 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Mystical Fire$"

OldaleTown_PokemonCenter_1F_Tutor_5_Text_14:
# 314 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Power Gem$"

OldaleTown_PokemonCenter_1F_Tutor_5_Text_15:
# 314 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Psychic Fangs$"

OldaleTown_PokemonCenter_1F_Tutor_5_Text_16:
# 314 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Psychic Terrain$"

OldaleTown_PokemonCenter_1F_Tutor_5_Text_17:
# 314 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Scorching Sands$"

OldaleTown_PokemonCenter_1F_Tutor_5_Text_18:
# 314 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Stored Power$"

OldaleTown_PokemonCenter_1F_Tutor_5_Text_19:
# 314 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Teleport$"

OldaleTown_PokemonCenter_1F_Tutor_6_Text_0:
# 350 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Ancient Power$"

OldaleTown_PokemonCenter_1F_Tutor_6_Text_1:
# 350 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Baton Pass$"

OldaleTown_PokemonCenter_1F_Tutor_6_Text_2:
# 350 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Encore$"

OldaleTown_PokemonCenter_1F_Tutor_6_Text_3:
# 350 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Fire Pledge$"

OldaleTown_PokemonCenter_1F_Tutor_6_Text_4:
# 350 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Foul Play$"

OldaleTown_PokemonCenter_1F_Tutor_6_Text_5:
# 350 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Grass Pledge$"

OldaleTown_PokemonCenter_1F_Tutor_6_Text_6:
# 350 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Heal Block$"

OldaleTown_PokemonCenter_1F_Tutor_6_Text_7:
# 350 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Megahorn$"

OldaleTown_PokemonCenter_1F_Tutor_6_Text_8:
# 350 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Meteor Mash$"

OldaleTown_PokemonCenter_1F_Tutor_6_Text_9:
# 350 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Moonblast$"

OldaleTown_PokemonCenter_1F_Tutor_6_Text_10:
# 351 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Phantom Force$"

OldaleTown_PokemonCenter_1F_Tutor_6_Text_11:
# 351 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Pollen Puff$"

OldaleTown_PokemonCenter_1F_Tutor_6_Text_12:
# 351 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Snatch$"

OldaleTown_PokemonCenter_1F_Tutor_6_Text_13:
# 351 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Solar Blade$"

OldaleTown_PokemonCenter_1F_Tutor_6_Text_14:
# 351 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Spikes$"

OldaleTown_PokemonCenter_1F_Tutor_6_Text_15:
# 351 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Sucker Punch$"

OldaleTown_PokemonCenter_1F_Tutor_6_Text_16:
# 351 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Super Fang$"

OldaleTown_PokemonCenter_1F_Tutor_6_Text_17:
# 351 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Throat Chop$"

OldaleTown_PokemonCenter_1F_Tutor_6_Text_18:
# 351 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Toxic Spikes$"

OldaleTown_PokemonCenter_1F_Tutor_6_Text_19:
# 351 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Water Pledge$"

OldaleTown_PokemonCenter_1F_Tutor_7_Text_0:
# 387 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Aurora Veil$"

OldaleTown_PokemonCenter_1F_Tutor_7_Text_1:
# 387 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Brave Bird$"

OldaleTown_PokemonCenter_1F_Tutor_7_Text_2:
# 387 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Dragon Dance$"

OldaleTown_PokemonCenter_1F_Tutor_7_Text_3:
# 387 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Double-Edge$"

OldaleTown_PokemonCenter_1F_Tutor_7_Text_4:
# 387 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Flare Blitz$"

OldaleTown_PokemonCenter_1F_Tutor_7_Text_5:
# 387 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Focus Punch$"

OldaleTown_PokemonCenter_1F_Tutor_7_Text_6:
# 387 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Heat Crash$"

OldaleTown_PokemonCenter_1F_Tutor_7_Text_7:
# 387 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Heavy Slam$"

OldaleTown_PokemonCenter_1F_Tutor_7_Text_8:
# 387 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Leaf Storm$"

OldaleTown_PokemonCenter_1F_Tutor_7_Text_9:
# 387 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Meteor Beam$"

OldaleTown_PokemonCenter_1F_Tutor_7_Text_10:
# 388 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Nasty Plot$"

OldaleTown_PokemonCenter_1F_Tutor_7_Text_11:
# 388 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Outrage$"

OldaleTown_PokemonCenter_1F_Tutor_7_Text_12:
# 388 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Poltergeist$"

OldaleTown_PokemonCenter_1F_Tutor_7_Text_13:
# 388 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Power Whip$"

OldaleTown_PokemonCenter_1F_Tutor_7_Text_14:
# 388 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Quiver Dance$"

OldaleTown_PokemonCenter_1F_Tutor_7_Text_15:
# 388 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Self Destruct$"

OldaleTown_PokemonCenter_1F_Tutor_7_Text_16:
# 388 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Sky Attack$"

OldaleTown_PokemonCenter_1F_Tutor_7_Text_17:
# 388 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Superpower$"

OldaleTown_PokemonCenter_1F_Tutor_7_Text_18:
# 388 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Triple Axel$"

OldaleTown_PokemonCenter_1F_Tutor_7_Text_19:
# 388 "data/maps/OldaleTown_PokemonCenter_1F/scripts.pory"
	.string "Wave Crash$"
