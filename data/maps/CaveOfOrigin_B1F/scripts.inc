# 1 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 2 "data/maps/CaveOfOrigin_B1F/scripts.pory"
.set LOCALID_WALLACE, 1
# 3 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 4 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_MapScripts::
# 5 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.byte 0
# 6 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 7 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_Wallace::
# 8 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	lock
# 9 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	faceplayer
# 10 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_Text_WallaceStory, MSGBOX_DEFAULT
# 11 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 12 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceUp
# 13 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 14 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	delay 64
# 15 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	playse SE_PIN
# 16 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_ExclamationMark
# 17 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 18 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_Delay48
# 19 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 20 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	delay 32
# 21 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_FacePlayer
# 22 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmovement 0
# 23 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_WhereIsRayquaza
# 24 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 25 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 26 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 27 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_WheresRayquaza::
# 28 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	multichoice 0, 0, MULTI_WHERES_RAYQUAZA, FALSE
# 29 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	switch VAR_RESULT
# 30 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 0, CaveOfOrigin_B1F_EventScript_AtCaveOfOrigin
# 31 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 1, CaveOfOrigin_B1F_EventScript_AtMtPyre
# 32 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 2, CaveOfOrigin_B1F_EventScript_AtSkyPillar
# 33 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	case 3, CaveOfOrigin_B1F_EventScript_DontRemember
# 34 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_DontRemember
# 35 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	end
# 36 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 37 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_AtCaveOfOrigin::
# 38 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin
# 39 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 40 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 41 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 42 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_AtMtPyre::
# 43 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat
# 44 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 45 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 46 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 47 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_DontRemember::
# 48 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	message CaveOfOrigin_B1F_Text_CantYouRememberSomehow
# 49 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	waitmessage
# 50 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza
# 51 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 52 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_EventScript_AtSkyPillar::
# 53 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	msgbox CaveOfOrigin_B1F_Text_WellHeadToSkyPillar, MSGBOX_DEFAULT
# 54 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	closemessage
# 55 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	playse SE_EXIT
# 56 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 4
# 57 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setflag FLAG_WALLACE_GOES_TO_SKY_PILLAR
# 58 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 3
# 59 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	removeobject LOCALID_WALLACE
# 60 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	clearflag FLAG_HIDE_SKY_PILLAR_WALLACE
# 61 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 62 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	release
# 63 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	end
# 64 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 65 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_WallaceStory:
# 66 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "{COLOR RED}Wallace{COLOR DARK_GRAY}: My name is Wallace.\nI'm this town's Gym Leader.\pI've also been entrusted the\nprotection of the Cave of Origin.\p… … … … …\n… … … … …\pGroudon and Kyogre, the two Pokémon\nwreaking havoc, are considered to be\lsuper-ancient Pokémon.\pBut there aren't just two\nsuper-ancient Pokémon.\pThere is another one somewhere.\pThat Pokémon's name is Rayquaza.\pIt is said that it was Rayquaza that\nbecalmed Groudon and Kyogre in the\ldistant past.\pBut even I have no clue as to\nRayquaza's whereabouts…$"
# 67 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 68 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_WhereIsRayquaza:
# 69 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Trainer, do you perhaps know where\nRayquaza is now?\pIf you do, please tell me.$"
# 70 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 71 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin:
# 72 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "The Cave of Origin?\pBut that's right here!\nI need you to do better than that!\pPlease, I need you to think about where\nRayquaza might be right now.$"
# 73 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 74 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat:
# 75 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "Mt. Pyre?\pBut when I met the old lady there\nearlier, she made no mention of it.\pI very much doubt that the old lady\nwould try to hide something from me…\p{PLAYER}, could you think about this more\ncarefully for me?$"
# 76 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 77 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_CantYouRememberSomehow:
# 78 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "You don't remember?\pHmm…\nThat's a problem…\pCan't you remember somehow?$"
# 79 "data/maps/CaveOfOrigin_B1F/scripts.pory"

# 80 "data/maps/CaveOfOrigin_B1F/scripts.pory"
CaveOfOrigin_B1F_Text_WellHeadToSkyPillar:
# 81 "data/maps/CaveOfOrigin_B1F/scripts.pory"
	.string "The Sky Pillar?\pThat's it!\nIt must be the Sky Pillar!\pTrainer, there's not a moment to\nlose!\pWe'll head to the Sky Pillar right away!$"
