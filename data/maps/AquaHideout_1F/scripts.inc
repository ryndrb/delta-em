# 1 "data/maps/AquaHideout_1F/scripts.pory"

# 2 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_MapScripts::
# 3 "data/maps/AquaHideout_1F/scripts.pory"
	.byte 0
# 4 "data/maps/AquaHideout_1F/scripts.pory"

# 5 "data/maps/AquaHideout_1F/scripts.pory"
@ The below two entrance guards give hints about what to do to progress the story
# 6 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_HideoutEntranceGrunt1::
# 7 "data/maps/AquaHideout_1F/scripts.pory"
	lock
# 8 "data/maps/AquaHideout_1F/scripts.pory"
	faceplayer
# 9 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_SlateportHint1
# 10 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_MagmaHideoutHint1
# 11 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_OurBossIsSnatchingSomething, MSGBOX_DEFAULT
# 12 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 13 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 14 "data/maps/AquaHideout_1F/scripts.pory"

# 15 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_MagmaHideoutHint1::
# 16 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_WhereMightMagmaHideoutBe, MSGBOX_DEFAULT
# 17 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 18 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 19 "data/maps/AquaHideout_1F/scripts.pory"

# 20 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_SlateportHint1::
# 21 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossWentToJackASubmarine, MSGBOX_DEFAULT
# 22 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 23 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 24 "data/maps/AquaHideout_1F/scripts.pory"

# 25 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_HideoutEntranceGrunt2::
# 26 "data/maps/AquaHideout_1F/scripts.pory"
	lock
# 27 "data/maps/AquaHideout_1F/scripts.pory"
	faceplayer
# 28 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_SlateportHint2
# 29 "data/maps/AquaHideout_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_MagmaHideoutHint2
# 30 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossIsOnRoute122, MSGBOX_DEFAULT
# 31 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 32 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 33 "data/maps/AquaHideout_1F/scripts.pory"

# 34 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_MagmaHideoutHint2::
# 35 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_TeamMagmaAtMtChimney, MSGBOX_DEFAULT
# 36 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 37 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 38 "data/maps/AquaHideout_1F/scripts.pory"

# 39 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_SlateportHint2::
# 40 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_BossIsInSlateportCity, MSGBOX_DEFAULT
# 41 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 42 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 43 "data/maps/AquaHideout_1F/scripts.pory"

# 44 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_Grunt1::
# 45 "data/maps/AquaHideout_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, AquaHideout_1F_Text_Grunt1Intro, AquaHideout_1F_Text_Grunt1Defeat, AquaHideout_1F_EventScript_Grunt1Defeated
# 46 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 48 "data/maps/AquaHideout_1F/scripts.pory"

# 49 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_EventScript_Grunt1Defeated::
# 50 "data/maps/AquaHideout_1F/scripts.pory"
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_DEFAULT
# 51 "data/maps/AquaHideout_1F/scripts.pory"
	release
# 52 "data/maps/AquaHideout_1F/scripts.pory"
	end
# 53 "data/maps/AquaHideout_1F/scripts.pory"

# 54 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_OurBossIsSnatchingSomething:
# 55 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with\nTeam Aqua?\pOur Boss isn't here! He's gone off to\nsnatch something important!\p…\n“Where did he go?”\pWahaha! Do you really think I'd tell you\nsomething that crucial?$"
# 56 "data/maps/AquaHideout_1F/scripts.pory"

# 57 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_WhereMightMagmaHideoutBe:
# 58 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What?\nAre you a Team Magma grunt?\pI hear that Team Magma is trying to\nawaken an awesome Pokémon at their\lHideout.\pBut where might their Hideout be?$"
# 59 "data/maps/AquaHideout_1F/scripts.pory"

# 60 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_BossWentToJackASubmarine:
# 61 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with\nTeam Aqua?\pOur Boss isn't here!\nHe's gone off to steal a submarine!\p…\n“Where did he go?”\pWahaha! Do you really think I'd tell you\nsomething that crucial?$"
# 62 "data/maps/AquaHideout_1F/scripts.pory"

# 63 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_BossIsOnRoute122:
# 64 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with\nTeam Aqua?\pOur Boss isn't here! He's on his way to\nMt. Pyre on Route 122!\p…\n“Why did he go?”\pWahaha! Do you really think I'd tell you\nsomething that crucial?$"
# 65 "data/maps/AquaHideout_1F/scripts.pory"

# 66 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_TeamMagmaAtMtChimney:
# 67 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What?\nAre you a Team Magma grunt?\pI hear that Team Magma is after an\nawesome Pokémon at Mt. Chimney.\pBut what is that Pokémon like?$"
# 68 "data/maps/AquaHideout_1F/scripts.pory"

# 69 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_BossIsInSlateportCity:
# 70 "data/maps/AquaHideout_1F/scripts.pory"
	.string "What? What? What do you want with\nTeam Aqua?\pOur Boss isn't here!\nHe's on his way to Slateport City!\p…\n“Why did he go?”\pWahaha! Do you really think I'd tell you\nsomething that crucial?$"
# 71 "data/maps/AquaHideout_1F/scripts.pory"

# 72 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_Grunt1Intro:
# 73 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Ayiyiyi!\n"
# 74 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Suspicious character spotted!$"
# 75 "data/maps/AquaHideout_1F/scripts.pory"

# 76 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_Grunt1Defeat:
# 77 "data/maps/AquaHideout_1F/scripts.pory"
	.string "Grrrrr…\n"
# 78 "data/maps/AquaHideout_1F/scripts.pory"
	.string "I lost it!$"
# 79 "data/maps/AquaHideout_1F/scripts.pory"

# 80 "data/maps/AquaHideout_1F/scripts.pory"
AquaHideout_1F_Text_Grunt1PostBattle:
# 81 "data/maps/AquaHideout_1F/scripts.pory"
	.string "I took the loss for the Team,\n"
# 82 "data/maps/AquaHideout_1F/scripts.pory"
	.string "but I did my job…$"
