# 1 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 2 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_MapScripts::
# 3 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.byte 0
# 4 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 5 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_Wally::
# 6 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 7 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 8 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_WALLY_SPEECH, VerdanturfTown_WandasHouse_EventScript_WallyShortSpeech
# 9 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_StrongerSpeech, MSGBOX_DEFAULT
# 10 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	setflag FLAG_WALLY_SPEECH
# 11 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 12 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 13 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 14 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallyShortSpeech::
# 15 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_StrongerSpeechShort, MSGBOX_DEFAULT
# 16 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 17 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 18 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 19 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysUncle::
# 20 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 21 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 22 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysUncleEverGrande
# 23 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WallysUncleSlippedOff
# 24 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallysGoneAway, MSGBOX_DEFAULT
# 25 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 26 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 27 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 28 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysUncleSlippedOff::
# 29 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallySlippedOff, MSGBOX_DEFAULT
# 30 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 31 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 32 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 33 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysUncleEverGrande::
# 34 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallyGoneThatFar, MSGBOX_DEFAULT
# 35 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 36 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 37 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 38 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WandasBoyfriend::
# 39 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_CanSeeGirlfriendEveryDay, MSGBOX_NPC
# 40 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 41 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 42 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_MeetWanda::
# 43 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_MeetWanda, MSGBOX_DEFAULT
# 44 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 45 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 46 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 47 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WandaDontWorry::
# 48 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DontWorryAboutWally, MSGBOX_DEFAULT
# 49 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 50 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 51 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 52 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAunt::
# 53 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 54 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 55 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysAuntEverGrande
# 56 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WallysAuntAnythingHappened
# 57 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_WandasHouse_EventScript_WallysAuntTunnelOpen
# 58 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendDriven, MSGBOX_DEFAULT
# 59 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 60 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 61 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 62 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAuntTunnelOpen::
# 63 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendWasDigging, MSGBOX_DEFAULT
# 64 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 65 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 66 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 67 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAuntAnythingHappened::
# 68 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_IfAnythingHappenedToWally, MSGBOX_DEFAULT
# 69 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 70 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 71 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 72 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAuntEverGrande::
# 73 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallyWasInEverGrande, MSGBOX_DEFAULT
# 74 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 75 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 76 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 77 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_StrongerSpeech:
# 78 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Wally: I lost to you, {PLAYER}, but I'm\n"
# 79 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "not feeling down anymore.\p"
# 80 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Because I have a new purpose in life.\n"
# 81 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Together with my Ralts, I'm going\l"
# 82 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "to challenge Pokémon Gyms and become\l"
# 83 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "a great Trainer.\p"
# 84 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Please watch me, {PLAYER}.\n"
# 85 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "I'm going to be stronger than you.\p"
# 86 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "When I do, I'm going to challenge you\n"
# 87 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "to another battle.$"
# 88 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 89 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_StrongerSpeechShort:
# 90 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Wally: Please watch me, {PLAYER}.\n"
# 91 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "I'm going to get stronger than you.\p"
# 92 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "When I do, I'm going to challenge you\n"
# 93 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "to another battle.$"
# 94 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 95 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_WallysGoneAway:
# 96 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "{COLOR RED}Uncle{COLOR DARK_GRAY}: Oh!\nSo you did come visit!\pIf you're looking for Wally, though, I'm\nafraid he's gone.\pAfter he lost to you in Mauville, he said\nhe had to train more, and we haven't\lseen him since.\pIt must be his Pokémon that have lit\nsuch a fire in that boy and given him\lso much hope to live for…$"
# 97 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 98 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_WallySlippedOff:
# 99 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Wally's gone away…\n"
# 100 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "He slipped off on his own…$"
# 101 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 102 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_WallyGoneThatFar:
# 103 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Uncle: Is that right?\n"
# 104 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Wally's gone away that far all by\l"
# 105 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "himself…\p"
# 106 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Well, I have to give him credit--he is\n"
# 107 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "my little brother's son.$"
# 108 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 109 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_MeetWanda:
# 110 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "{COLOR RED}Wanda{COLOR DARK_GRAY}: Oh!\nYou're the {PLAYER} who Wally was\ltelling me about.\pI'm Wally's cousin, Wanda!$"
# 111 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 112 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_DontWorryAboutWally:
# 113 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "{COLOR RED}Wanda{COLOR DARK_GRAY}: Don't you worry about Wally.\nHe'll be just fine, I'm sure.\pI know my little cousin, and he has his\nPokémon with him, too!$"
# 114 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 115 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_CanSeeGirlfriendEveryDay:
# 116 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Thanks to you, I can see my girlfriend\n"
# 117 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "every day.\l"
# 118 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Happy? You bet I am!$"
# 119 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 120 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendDriven:
# 121 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "My daughter's boyfriend is a very\n"
# 122 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "driven and passionate sort of person.\p"
# 123 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "He's been digging a tunnel nonstop\n"
# 124 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "just so he can see my daughter.\p"
# 125 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "My daughter's a little concerned,\n"
# 126 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "so she goes out to the tunnel a lot.$"
# 127 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 128 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendWasDigging:
# 129 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "It's amazing.\nMy daughter's boyfriend was digging\lthe tunnel by hand!\lIt's so incredible!$"
# 130 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 131 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_IfAnythingHappenedToWally:
# 132 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "If anything were to happen to Wally,\n"
# 133 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "I would never be able to look his\l"
# 134 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "parents in Petalburg in the eye…$"
# 135 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 136 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_WallyWasInEverGrande:
# 137 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Wally was in Ever Grande?\p"
# 138 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "His parents in Petalburg would be\n"
# 139 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "astonished to hear that!$"

VerdanturfTown_WandasHouse_EventScript_Wanda::
# 144 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 145 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 146 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_GARDEVOIRITE, VerdanturfTown_WandasHouse_EventScript_Wanda_2
VerdanturfTown_WandasHouse_EventScript_Wanda_1:
# 158 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_Wanda_5
VerdanturfTown_WandasHouse_EventScript_Wanda_4:
# 161 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_MAUVILLE, VerdanturfTown_WandasHouse_EventScript_Wanda_10
VerdanturfTown_WandasHouse_EventScript_Wanda_9:
# 164 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DontWorryAboutWally
# 165 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
	end

VerdanturfTown_WandasHouse_EventScript_Wanda_2:
# 147 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	checkitem ITEM_MEGA_RING
# 148 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq VerdanturfTown_WandasHouse_EventScript_Wanda_7
	goto VerdanturfTown_WandasHouse_EventScript_Wanda_1

VerdanturfTown_WandasHouse_EventScript_Wanda_5:
# 159 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto VerdanturfTown_WandasHouse_EventScript_WandaDontWorry
	goto VerdanturfTown_WandasHouse_EventScript_Wanda_4

VerdanturfTown_WandasHouse_EventScript_Wanda_7:
# 149 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_EventScript_Wanda_Text_0
# 150 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	giveitem ITEM_GARDEVOIRITE, 1
# 151 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_EventScript_Wanda_Text_1
# 152 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	closemessage
# 153 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	setflag FLAG_RECEIVED_GARDEVOIRITE
# 154 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
	end

VerdanturfTown_WandasHouse_EventScript_Wanda_10:
# 162 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto VerdanturfTown_WandasHouse_EventScript_MeetWanda
	goto VerdanturfTown_WandasHouse_EventScript_Wanda_9


VerdanturfTown_WandasHouse_EventScript_Wanda_Text_0:
# 149 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "{COLOR RED}Wanda{COLOR DARK_GRAY}: Why, it feels like it's been ages\nsince we saw you last!\pWhat wonderful timing! I was thinking\nthat I wanted to give this to you…$"

VerdanturfTown_WandasHouse_EventScript_Wanda_Text_1:
# 151 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "I didn't really thank you properly\nwhen you helped smash those rocks in\lthe tunnel.\pI found it in the yard some time ago.\pActually, I found two, and I gave the\nother to Wally.\pIt's a pretty stone, and I'm sure your\nPokémon would be delighted if you let\lone of them hold it!$"
