# 1 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 2 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
.set LOCALID_STEVEN, 1
# 3 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
.set LOCALID_BELDUM_BALL, 2
# 4 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 5 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_MapScripts::
# 6 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_StevensHouse_OnLoad
# 7 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_StevensHouse_OnTransition
# 8 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_StevensHouse_OnFrame
# 9 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.byte 0
# 10 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 11 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_OnLoad:
# 12 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call_if_unset FLAG_SYS_GAME_CLEAR, MossdeepCity_StevensHouse_EventScript_HideStevensNote
# 13 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 14 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 15 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_HideStevensNote::
# 16 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setmetatile 6, 4, METATILE_GenericBuilding_TableEdge, TRUE
# 17 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	return
# 18 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 19 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_OnTransition:
# 20 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
    call_if_eq VAR_STEVENS_HOUSE_STATE, 1, MossdeepCity_StevensHouse_EventScript_SetStevenPos1
# 21 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call_if_eq VAR_STEVENS_HOUSE_STATE, 2, MossdeepCity_StevensHouse_EventScript_SetStevenPos2
# 22 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 23 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 24 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_SetStevenPos1::
# 25 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
    setobjectxyperm LOCALID_STEVEN, 3, 4
# 26 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setobjectmovementtype LOCALID_STEVEN, MOVEMENT_TYPE_FACE_UP
# 27 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	return
# 28 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 29 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_SetStevenPos2::
# 30 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setobjectxyperm LOCALID_STEVEN, 6, 5
# 31 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setobjectmovementtype LOCALID_STEVEN, MOVEMENT_TYPE_FACE_UP
# 32 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	return
# 33 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 34 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_OnFrame:
# 35 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script_2 VAR_STEVENS_HOUSE_STATE, 1, MossdeepCity_StevensHouse_EventScript_StevenGivesDive
# 36 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.2byte 0
# 37 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 38 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_BeldumPokeball::
# 39 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	lockall
# 40 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_TakeBallContainingBeldum, MSGBOX_YESNO
# 41 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_StevensHouse_EventScript_LeaveBeldum
# 42 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_GiveBeldum
# 43 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 44 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 45 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_LeaveBeldum::
# 46 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_LeftPokeBallWhereItWas, MSGBOX_DEFAULT
# 47 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
# 48 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 49 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 50 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_GiveBeldum::
# 51 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_BELDUM
# 52 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	givemon SPECIES_BELDUM, 5
# 53 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MossdeepCity_StevensHouse_EventScript_SendBeldumParty
# 54 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MossdeepCity_StevensHouse_EventScript_SendBeldumPC
# 55 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 56 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 57 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 58 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_SendBeldumParty::
# 59 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call MossdeepCity_StevensHouse_EventScript_ReceivedBeldumFanfare
# 60 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 61 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_StevensHouse_EventScript_ReceivedBeldum
# 62 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 63 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 64 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_ReceivedBeldum
# 65 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 66 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 67 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_SendBeldumPC::
# 68 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call MossdeepCity_StevensHouse_EventScript_ReceivedBeldumFanfare
# 69 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 70 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_StevensHouse_EventScript_BeldumTransferredToPC
# 71 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 72 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_BeldumTransferredToPC
# 73 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 74 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 75 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_BeldumTransferredToPC::
# 76 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 77 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_ReceivedBeldum
# 78 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 79 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 80 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_ReceivedBeldumFanfare::
# 81 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_BELDUM
# 82 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	removeobject LOCALID_BELDUM_BALL
# 83 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 84 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	message MossdeepCity_StevensHouse_Text_ObtainedBeldum
# 85 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmessage
# 86 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitfanfare
# 87 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BELDUM
# 88 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	return
# 89 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 90 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_ReceivedBeldum::
# 91 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_BELDUM_POKEBALL
# 92 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_RECEIVED_BELDUM
# 93 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
# 94 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 95 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 96 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_RockDisplay::
# 97 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_CollectionOfRareRocks, MSGBOX_SIGN
# 98 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 99 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 100 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_Steven::
# 101 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_UnderwateCavernBetweenMossdeepSootopolis, MSGBOX_NPC
# 102 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 103 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 104 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_Letter::
# 105 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	lockall
# 106 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_LetterFromSteven, MSGBOX_DEFAULT
# 107 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
# 108 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 109 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 110 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_UnderwateCavernBetweenMossdeepSootopolis:
# 111 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: If you were to use {COLOR BLUE}Dive{COLOR DARK_GRAY}\nin the {COLOR BLUE}correct stretch of water along\lRoute 128{COLOR DARK_GRAY}…\pI believe you should be able to reach\nthe entrance to the {COLOR BLUE}Seafloor Cavern{COLOR DARK_GRAY}.\pI will join you when I finish my\nduties.\pPlease do what you can to stop Team\nAqua and Team Magma until then.\pI am trusting you to do this for me!$"
# 112 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 113 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_TakeBallContainingBeldum:
# 114 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{PLAYER} checked the Poké Ball.\p"
# 115 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "It contained the Pokémon\n"
# 116 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Beldum.\p"
# 117 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Take the Poké Ball?$"
# 118 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 119 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_ObtainedBeldum:
# 120 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{PLAYER} obtained a Beldum.$"
# 121 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 122 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_NoSpaceForAnotherMon:
# 123 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "There is no space for another Pokémon.$"
# 124 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 125 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_LeftPokeBallWhereItWas:
# 126 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{PLAYER} left the Poké Ball where\n"
# 127 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "it was.$"
# 128 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 129 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_LetterFromSteven:
# 130 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "It's a letter.\p"
# 131 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "… … … … … …\p"
# 132 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "To {PLAYER}{KUN}…\p"
# 133 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "I've decided to do a little soul-\n"
# 134 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "searching and train on the road.\p"
# 135 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "I don't plan to return home for some\n"
# 136 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "time.\p"
# 137 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "I have a favor to ask of you.\p"
# 138 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "I want you to take the Poké Ball on\n"
# 139 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "the desk.\p"
# 140 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Inside it is a Beldum, my favorite\n"
# 141 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Pokémon.\p"
# 142 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "I'm counting on you.\p"
# 143 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "May our paths cross someday.\p"
# 144 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Steven Stone$"
# 145 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 146 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_CollectionOfRareRocks:
# 147 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "It's a collection of rare rocks and\n"
# 148 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "stones assembled by Steven.$"

MossdeepCity_StevensHouse_EventScript_StevenGivesDive::
# 154 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	lock
# 155 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	delay 16
# 156 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_EventScript_StevenGivesDive_Text_0
# 157 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_EventScript_StevenGivesDive_Text_1
# 158 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_EventScript_StevenGivesDive_Text_2
# 159 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	closemessage
# 160 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	delay 24
# 161 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_EventScript_StevenGivesDive_Text_3
# 162 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	giveitem ITEM_HM_DIVE
# 163 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_DIVE
# 164 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_OMIT_DIVE_FROM_STEVEN_LETTER
# 165 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_EventScript_StevenGivesDive_Text_4
# 166 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	closemessage
# 167 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
# 168 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ENTRANCE_AQUA_GRUNT
# 169 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 170 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	release
	end


MossdeepCity_StevensHouse_EventScript_StevenGivesDive_Text_0:
# 156 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{COLOR RED}Steve{COLOR DARK_GRAY}: Ah…\nYes…\pI suppose I should welcome you to my\nhome.\pPlease forgive the rather sparse\ndecor…\lNow, where to begin…$"

MossdeepCity_StevensHouse_EventScript_StevenGivesDive_Text_1:
# 157 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Let us take a moment to understand\nwhat is happening to our world right\lnow.\pThat rumbling that shook the earth\njust now…\pThe eardrum-rupturing explosion we\nheard…\pThey are proof that a seal, which was\nlong hidden deep undersea, has been\lundone at last.\pThe super-ancient Pokémon that has\nbeen sealed deep beneath Route 128\lsince ancient times…\pIt slept until now in the Seafloor\nCavern.\pThe entrance to that cavern was sealed\nby the power of a certain Pokémon, all\lin effort to keep any human or\lPokémon from ever breaching it.$"

MossdeepCity_StevensHouse_EventScript_StevenGivesDive_Text_2:
# 158 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "But now it appears that the scheming\nof that terrible team has undone the\lseal.\pThere is no doubt that they intent to\nrevive the super-ancient Pokémon.\pAnd once they do so, it seems they hope\nto make its power their own.$"

MossdeepCity_StevensHouse_EventScript_StevenGivesDive_Text_3:
# 161 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{PLAYER}…\pIf that team obtains the power of the\nsuper-ancient Pokémon, it will upset\lthe balance of nature in this world.\pA crisis unlike any other before it\nwill befall every living thing on this\lplanet.\pI plan to do everything in my power to\nquell this situation. That is my duty.\pBut there is a limit to what I can do\nwith my power alone…\pThat is why I'm asking for your help.\nI have great faith in your abilities.\pLend me your strength to help put a\nhalt to these Teams' mad ambitions!\pWith you and I and our Pokémon all\nworking together, we will overcome\lthis disastrous turn of events.\pI don't think it is out of the\nquestion.\pI will entrust you with this.$"

MossdeepCity_StevensHouse_EventScript_StevenGivesDive_Text_4:
# 165 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "If you use Dive, you will be able to dive\nto the ocean floor with your Pokémon.\pIf you were to use {COLOR BLUE}Dive{COLOR DARK_GRAY} in the {COLOR BLUE}correct\nstretch of water along Route 128{COLOR DARK_GRAY}…\pI believe you should be able to reach\nthe entrance to the {COLOR BLUE}Seafloor Cavern{COLOR DARK_GRAY}.\pI will join you when I finish my\nduties.\pPlease do what you can to stop Team\nAqua and Team Magma until then.\pI am trusting you to do this for me!$"
