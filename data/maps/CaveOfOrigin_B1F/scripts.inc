.set LOCALID_WALLACE, 1

CaveOfOrigin_B1F_MapScripts::
	.byte 0

CaveOfOrigin_B1F_EventScript_Wallace::
	lock
	faceplayer
	msgbox CaveOfOrigin_B1F_Text_WallaceStory, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceUp
	waitmovement 0
	delay 64
	playse SE_PIN
	applymovement LOCALID_WALLACE, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_WALLACE, Common_Movement_Delay48
	waitmovement 0
	delay 32
	applymovement LOCALID_WALLACE, Common_Movement_FacePlayer
	waitmovement 0
	message CaveOfOrigin_B1F_Text_WhereIsRayquaza
	waitmessage
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza

CaveOfOrigin_B1F_EventScript_WheresRayquaza::
	multichoice 0, 0, MULTI_WHERES_RAYQUAZA, FALSE
	switch VAR_RESULT
	case 0, CaveOfOrigin_B1F_EventScript_AtCaveOfOrigin
	case 1, CaveOfOrigin_B1F_EventScript_AtMtPyre
	case 2, CaveOfOrigin_B1F_EventScript_AtSkyPillar
	case 3, CaveOfOrigin_B1F_EventScript_DontRemember
	goto CaveOfOrigin_B1F_EventScript_DontRemember
	end

CaveOfOrigin_B1F_EventScript_AtCaveOfOrigin::
	message CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin
	waitmessage
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza

CaveOfOrigin_B1F_EventScript_AtMtPyre::
	message CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat
	waitmessage
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza

CaveOfOrigin_B1F_EventScript_DontRemember::
	message CaveOfOrigin_B1F_Text_CantYouRememberSomehow
	waitmessage
	goto CaveOfOrigin_B1F_EventScript_WheresRayquaza

CaveOfOrigin_B1F_EventScript_AtSkyPillar::
	msgbox CaveOfOrigin_B1F_Text_WellHeadToSkyPillar, MSGBOX_DEFAULT
	closemessage
	playse SE_EXIT
	fadescreenspeed FADE_TO_BLACK, 4
	setflag FLAG_WALLACE_GOES_TO_SKY_PILLAR
	setvar VAR_SOOTOPOLIS_CITY_STATE, 3
	removeobject LOCALID_WALLACE
	clearflag FLAG_HIDE_SKY_PILLAR_WALLACE
	fadescreen FADE_FROM_BLACK
	release
	end

CaveOfOrigin_B1F_Text_WallaceStory:
	.string "{COLOR RED}Wallace{COLOR DARK_GRAY}: My name is Wallace.\nI'm this town's Gym Leader.\pI've also been entrusted the\nprotection of the Cave of Origin.\p… … … … …\n… … … … …\pGroudon and Kyogre, the two Pokémon\nwreaking havoc, are considered to be\lsuper-ancient Pokémon.\pBut there aren't just two\nsuper-ancient Pokémon.\pThere is another one somewhere.\pThat Pokémon's name is Rayquaza.\pIt is said that it was Rayquaza that\nbecalmed Groudon and Kyogre in the\ldistant past.\pBut even I have no clue as to\nRayquaza's whereabouts…$"

CaveOfOrigin_B1F_Text_WhereIsRayquaza:
	.string "Trainer, do you perhaps know where\nRayquaza is now?\pIf you do, please tell me.$"

CaveOfOrigin_B1F_Text_ButWereInCaveOfOrigin:
	.string "The Cave of Origin?\pBut that's right here!\nI need you to do better than that!\pPlease, I need you to think about where\nRayquaza might be right now.$"

CaveOfOrigin_B1F_Text_OldLadyDidntMentionThat:
	.string "Mt. Pyre?\pBut when I met the old lady there\nearlier, she made no mention of it.\pI very much doubt that the old lady\nwould try to hide something from me…\p{PLAYER}, could you think about this more\ncarefully for me?$"

CaveOfOrigin_B1F_Text_CantYouRememberSomehow:
	.string "You don't remember?\pHmm…\nThat's a problem…\pCan't you remember somehow?$"

CaveOfOrigin_B1F_Text_WellHeadToSkyPillar:
	.string "The Sky Pillar?\pThat's it!\nIt must be the Sky Pillar!\pTrainer, there's not a moment to\nlose!\pWe'll head to the Sky Pillar right away!$"
