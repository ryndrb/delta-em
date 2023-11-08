AquaHideout_1F_MapScripts::
	.byte 0

@ The below two entrance guards give hints about what to do to progress the story
AquaHideout_1F_EventScript_HideoutEntranceGrunt1::
	lock
	faceplayer
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_SlateportHint1
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_MagmaHideoutHint1
	msgbox AquaHideout_1F_Text_OurBossIsSnatchingSomething, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_MagmaHideoutHint1::
	msgbox AquaHideout_1F_Text_WhereMightMagmaHideoutBe, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_SlateportHint1::
	msgbox AquaHideout_1F_Text_BossWentToJackASubmarine, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_HideoutEntranceGrunt2::
	lock
	faceplayer
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_SlateportHint2
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_MagmaHideoutHint2
	msgbox AquaHideout_1F_Text_BossIsOnRoute122, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_MagmaHideoutHint2::
	msgbox AquaHideout_1F_Text_TeamMagmaAtMtChimney, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_SlateportHint2::
	msgbox AquaHideout_1F_Text_BossIsInSlateportCity, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_Grunt1::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, AquaHideout_1F_Text_Grunt1Intro, AquaHideout_1F_Text_Grunt1Defeat, AquaHideout_1F_EventScript_Grunt1Defeated
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

AquaHideout_1F_EventScript_Grunt1Defeated::
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_Text_OurBossIsSnatchingSomething:
	.string "What? What? What do you want with\nTeam Aqua?\pOur Boss isn't here! He's gone off to\nsnatch something important!\p…\n“Where did he go?”\pWahaha! Do you really think I'd tell you\nsomething that crucial?$"

AquaHideout_1F_Text_WhereMightMagmaHideoutBe:
	.string "What? What?\nAre you a Team Magma grunt?\pI hear that Team Magma is trying to\nawaken an awesome Pokémon at their\lHideout.\pBut where might their Hideout be?$"

AquaHideout_1F_Text_BossWentToJackASubmarine:
	.string "What? What? What do you want with\nTeam Aqua?\pOur Boss isn't here!\nHe's gone off to steal a submarine!\p…\n“Where did he go?”\pWahaha! Do you really think I'd tell you\nsomething that crucial?$"

AquaHideout_1F_Text_BossIsOnRoute122:
	.string "What? What? What do you want with\nTeam Aqua?\pOur Boss isn't here! He's on his way to\nMt. Pyre on Route 122!\p…\n“Why did he go?”\pWahaha! Do you really think I'd tell you\nsomething that crucial?$"

AquaHideout_1F_Text_TeamMagmaAtMtChimney:
	.string "What? What?\nAre you a Team Magma grunt?\pI hear that Team Magma is after an\nawesome Pokémon at Mt. Chimney.\pBut what is that Pokémon like?$"

AquaHideout_1F_Text_BossIsInSlateportCity:
	.string "What? What? What do you want with\nTeam Aqua?\pOur Boss isn't here!\nHe's on his way to Slateport City!\p…\n“Why did he go?”\pWahaha! Do you really think I'd tell you\nsomething that crucial?$"

AquaHideout_1F_Text_Grunt1Intro:
	.string "Ayiyiyi!\n"
	.string "Suspicious character spotted!$"

AquaHideout_1F_Text_Grunt1Defeat:
	.string "Grrrrr…\n"
	.string "I lost it!$"

AquaHideout_1F_Text_Grunt1PostBattle:
	.string "I took the loss for the Team,\n"
	.string "but I did my job…$"
