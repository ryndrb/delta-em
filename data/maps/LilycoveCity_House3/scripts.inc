# 1 "data/maps/LilycoveCity_House3/scripts.pory"

# 2 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_MapScripts::
# 3 "data/maps/LilycoveCity_House3/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_House3/scripts.pory"

# 5 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_PokefanF::
# 6 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 7 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 8 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_LearnFromMasterOfPokeblocks, MSGBOX_YESNO
# 9 "data/maps/LilycoveCity_House3/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_House3_EventScript_DeclinePokeblockLearn
# 10 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_ExplainPokeblocks, MSGBOX_DEFAULT
# 11 "data/maps/LilycoveCity_House3/scripts.pory"
	closemessage
# 12 "data/maps/LilycoveCity_House3/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 13 "data/maps/LilycoveCity_House3/scripts.pory"
	waitmovement 0
# 14 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 15 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 16 "data/maps/LilycoveCity_House3/scripts.pory"

# 17 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_DeclinePokeblockLearn::
# 18 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_OhAreYouSure, MSGBOX_DEFAULT
# 19 "data/maps/LilycoveCity_House3/scripts.pory"
	closemessage
# 20 "data/maps/LilycoveCity_House3/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 21 "data/maps/LilycoveCity_House3/scripts.pory"
	waitmovement 0
# 22 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 23 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 24 "data/maps/LilycoveCity_House3/scripts.pory"

# 25 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_Man::
# 26 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 27 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 28 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_HappyToHaveQuadruplets, MSGBOX_DEFAULT
# 29 "data/maps/LilycoveCity_House3/scripts.pory"
	closemessage
# 30 "data/maps/LilycoveCity_House3/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 31 "data/maps/LilycoveCity_House3/scripts.pory"
	waitmovement 0
# 32 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 33 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 34 "data/maps/LilycoveCity_House3/scripts.pory"

# 35 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid1::
# 36 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 37 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 38 "data/maps/LilycoveCity_House3/scripts.pory"
    random 4
# 39 "data/maps/LilycoveCity_House3/scripts.pory"
	switch VAR_RESULT
# 40 "data/maps/LilycoveCity_House3/scripts.pory"
	case 0, LilycoveCity_House3_EventScript_WereDoingMultiBattle
# 41 "data/maps/LilycoveCity_House3/scripts.pory"
	case 1, LilycoveCity_House3_EventScript_WereMixingRecords
# 42 "data/maps/LilycoveCity_House3/scripts.pory"
	case 2, LilycoveCity_House3_EventScript_WereBlendingBerries
# 43 "data/maps/LilycoveCity_House3/scripts.pory"
	case 3, LilycoveCity_House3_EventScript_WereDoingContest
# 44 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 45 "data/maps/LilycoveCity_House3/scripts.pory"

# 46 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid2::
# 47 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 48 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 49 "data/maps/LilycoveCity_House3/scripts.pory"
    random 4
# 50 "data/maps/LilycoveCity_House3/scripts.pory"
	switch VAR_RESULT
# 51 "data/maps/LilycoveCity_House3/scripts.pory"
	case 0, LilycoveCity_House3_EventScript_WereDoingMultiBattle
# 52 "data/maps/LilycoveCity_House3/scripts.pory"
	case 1, LilycoveCity_House3_EventScript_WereMixingRecords
# 53 "data/maps/LilycoveCity_House3/scripts.pory"
	case 2, LilycoveCity_House3_EventScript_WereBlendingBerries
# 54 "data/maps/LilycoveCity_House3/scripts.pory"
	case 3, LilycoveCity_House3_EventScript_WereDoingContest
# 55 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 56 "data/maps/LilycoveCity_House3/scripts.pory"

# 57 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid3::
# 58 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 59 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 60 "data/maps/LilycoveCity_House3/scripts.pory"
    random 4
# 61 "data/maps/LilycoveCity_House3/scripts.pory"
	switch VAR_RESULT
# 62 "data/maps/LilycoveCity_House3/scripts.pory"
	case 0, LilycoveCity_House3_EventScript_WereDoingMultiBattle
# 63 "data/maps/LilycoveCity_House3/scripts.pory"
	case 1, LilycoveCity_House3_EventScript_WereMixingRecords
# 64 "data/maps/LilycoveCity_House3/scripts.pory"
	case 2, LilycoveCity_House3_EventScript_WereBlendingBerries
# 65 "data/maps/LilycoveCity_House3/scripts.pory"
	case 3, LilycoveCity_House3_EventScript_WereDoingContest
# 66 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 67 "data/maps/LilycoveCity_House3/scripts.pory"

# 68 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_GameBoyKid4::
# 69 "data/maps/LilycoveCity_House3/scripts.pory"
	lock
# 70 "data/maps/LilycoveCity_House3/scripts.pory"
	faceplayer
# 71 "data/maps/LilycoveCity_House3/scripts.pory"
    random 4
# 72 "data/maps/LilycoveCity_House3/scripts.pory"
	switch VAR_RESULT
# 73 "data/maps/LilycoveCity_House3/scripts.pory"
	case 0, LilycoveCity_House3_EventScript_WereDoingMultiBattle
# 74 "data/maps/LilycoveCity_House3/scripts.pory"
	case 1, LilycoveCity_House3_EventScript_WereMixingRecords
# 75 "data/maps/LilycoveCity_House3/scripts.pory"
	case 2, LilycoveCity_House3_EventScript_WereBlendingBerries
# 76 "data/maps/LilycoveCity_House3/scripts.pory"
	case 3, LilycoveCity_House3_EventScript_WereDoingContest
# 77 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 78 "data/maps/LilycoveCity_House3/scripts.pory"

# 79 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_WereDoingMultiBattle::
# 80 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_GoingToWinMultiBattles, MSGBOX_DEFAULT
# 81 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 82 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 83 "data/maps/LilycoveCity_House3/scripts.pory"

# 84 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_WereMixingRecords::
# 85 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_LikeMixingAtRecordCorner, MSGBOX_DEFAULT
# 86 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 87 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 88 "data/maps/LilycoveCity_House3/scripts.pory"

# 89 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_WereBlendingBerries::
# 90 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_MakePokeblocksWithBerryBlender, MSGBOX_DEFAULT
# 91 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 92 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 93 "data/maps/LilycoveCity_House3/scripts.pory"

# 94 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_EventScript_WereDoingContest::
# 95 "data/maps/LilycoveCity_House3/scripts.pory"
	msgbox LilycoveCity_House3_Text_GoingToEnterContest, MSGBOX_DEFAULT
# 96 "data/maps/LilycoveCity_House3/scripts.pory"
	release
# 97 "data/maps/LilycoveCity_House3/scripts.pory"
	end
# 98 "data/maps/LilycoveCity_House3/scripts.pory"

# 99 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_LearnFromMasterOfPokeblocks:
# 100 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Oh, my, my! Are you traveling alone?\nBut you're so young! Good for you!\pI'm sure my kids could learn a thing or\ntwo from you!\pMe?\nI'm a Pokéblock Master.\pIf I get just a little serious, why, I\ncan conconct great Pokéblocks.\pWould you like to learn from me, a\nPokéblock Master?$"
# 101 "data/maps/LilycoveCity_House3/scripts.pory"

# 102 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_OhAreYouSure:
# 103 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Oh?\nAre you sure?\pYou shouldn't always try to do\neverything by yourself, dear!$"
# 104 "data/maps/LilycoveCity_House3/scripts.pory"

# 105 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_ExplainPokeblocks:
# 106 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Oh, good! You're a smart soul!\n"
# 107 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "This is a bit long, so listen up!\p"
# 108 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Are you ready?\p"
# 109 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "If you look at {POKEBLOCK}s, you should see\n"
# 110 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "that they are rated on how they feel.\p"
# 111 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "The lower the feel rating,\n"
# 112 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "the better it is. Don't forget this!\p"
# 113 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "A good {POKEBLOCK} has a low feel\n"
# 114 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "rating and a high level.\p"
# 115 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "A Pokémon can eat more good\n"
# 116 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "{POKEBLOCK}s than ordinary ones, too.\p"
# 117 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "And this is important.\p"
# 118 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "If you want to make smooth {POKEBLOCK}s,\n"
# 119 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "use different kinds of Berries.\p"
# 120 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Don't be stingy--the kinds of Berries\n"
# 121 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "affect the smoothness of {POKEBLOCK}s.\p"
# 122 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "And another thing.\p"
# 123 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "The more people blending Berries,\n"
# 124 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "the smoother the {POKEBLOCK}s.\p"
# 125 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "That's why you should talk to other\n"
# 126 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "people and make {POKEBLOCK}s together.\p"
# 127 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "That's about all you need to know to\n"
# 128 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "make good {POKEBLOCK}s.\p"
# 129 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "If everyone had Pokémon they love,\n"
# 130 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "smooth {POKEBLOCK}s, and a loving family,\l"
# 131 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "the world would be a happier place.\p"
# 132 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Don't give up, dear!$"
# 133 "data/maps/LilycoveCity_House3/scripts.pory"

# 134 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_HappyToHaveQuadruplets:
# 135 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "When my wife gave birth to quadruplets,\n"
# 136 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "you bet I was shocked.\p"
# 137 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "But, now, seeing them play together,\n"
# 138 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "it makes me happy.$"
# 139 "data/maps/LilycoveCity_House3/scripts.pory"

# 140 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_GoingToWinMultiBattles:
# 141 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "We're having Multi Battles, but I know\n"
# 142 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "I'm going to win.$"
# 143 "data/maps/LilycoveCity_House3/scripts.pory"

# 144 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_LikeMixingAtRecordCorner:
# 145 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "We like mixing stuff at\n"
# 146 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "the Record Corner.\p"
# 147 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "But what gets mixed up?$"
# 148 "data/maps/LilycoveCity_House3/scripts.pory"

# 149 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_MakePokeblocksWithBerryBlender:
# 150 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "We're going to make super {POKEBLOCK}s\n"
# 151 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "with a Berry Blender!$"
# 152 "data/maps/LilycoveCity_House3/scripts.pory"

# 153 "data/maps/LilycoveCity_House3/scripts.pory"
LilycoveCity_House3_Text_GoingToEnterContest:
# 154 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "I want to brag about how tough my\n"
# 155 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "Pokémon is, so we're going to enter\l"
# 156 "data/maps/LilycoveCity_House3/scripts.pory"
	.string "a Contest together.$"
