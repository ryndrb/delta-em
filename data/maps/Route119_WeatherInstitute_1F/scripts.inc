.set LOCALID_LITTLE_BOY, 5

Route119_WeatherInstitute_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_1F_OnTransition
	.byte 0

Route119_WeatherInstitute_1F_OnTransition:
	call_if_ge VAR_WEATHER_INSTITUTE_STATE, 2, Route119_WeatherInstitute_1F_EventScript_SetLittleBoyPos
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 0, Route119_WeatherInstitute_1F_EventScript_SetInstituteMusic
	end

Route119_WeatherInstitute_1F_EventScript_SetLittleBoyPos::
	setobjectxyperm LOCALID_LITTLE_BOY, 15, 11
	setobjectmovementtype LOCALID_LITTLE_BOY, MOVEMENT_TYPE_WANDER_AROUND
	return

Route119_WeatherInstitute_1F_EventScript_SetInstituteMusic::
	playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
	return

Route119_WeatherInstitute_1F_EventScript_LittleBoy::
	lock
	faceplayer
	special GetPlayerBigGuyGirlString
	goto_if_eq VAR_WEATHER_INSTITUTE_STATE, 0, Route119_WeatherInstitute_1F_EventScript_LittleBoyTeamAquaHere
	msgbox Route119_WeatherInstitute_1F_Text_WowYoureStrong, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_1F_EventScript_LittleBoyTeamAquaHere::
	msgbox Route119_WeatherInstitute_1F_Text_EveryoneWentUpstairs, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_1F_EventScript_InstituteWorker1::
	msgbox Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo, MSGBOX_NPC
	end

Route119_WeatherInstitute_1F_EventScript_Bed::
	lockall
	msgbox Route119_WeatherInstitute_1F_Text_TakeRestInBed, MSGBOX_DEFAULT
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	releaseall
	end

Route119_WeatherInstitute_1F_EventScript_Grunt1::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_1, Route119_WeatherInstitute_1F_Text_Grunt1Intro, Route119_WeatherInstitute_1F_Text_Grunt1Defeat
	msgbox Route119_WeatherInstitute_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

Route119_WeatherInstitute_1F_EventScript_Grunt4::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_4, Route119_WeatherInstitute_1F_Text_Grunt4Intro, Route119_WeatherInstitute_1F_Text_Grunt4Defeat
	msgbox Route119_WeatherInstitute_1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end

Route119_WeatherInstitute_1F_Text_Grunt1Intro:
	.string "I came here because I heard that\nthe Institute is investigating the\lrelationship between super-ancient\lPokémon and the weather!$"

Route119_WeatherInstitute_1F_Text_Grunt1Defeat:
	.string "Our plan's being spoiled by a kid?$"

Route119_WeatherInstitute_1F_Text_Grunt1PostBattle:
	.string "The overwhelming power of a super-\nancient Pokémon to even control the\lweather freely…!\lWe, Team Aqua, definitely need it!$"

Route119_WeatherInstitute_1F_Text_Grunt4Intro:
	.string "The Boss got interested in the\nresearch they have going here, so he\lsent us out.\pQuit your meddling!$"

Route119_WeatherInstitute_1F_Text_Grunt4Defeat:
	.string "Blast it…\nBlasted by a kid…$"

Route119_WeatherInstitute_1F_Text_Grunt4PostBattle:
	.string "Our Boss knows everything.\pBut I'm just a Grunt.\pWhat would I know about what he's\nthinking?\pI wonder if Shelly can tell how clueless\nI am…$"

Route119_WeatherInstitute_1F_Text_EveryoneWentUpstairs:
	.string "While I was sleeping, everyone went\nupstairs!$"

Route119_WeatherInstitute_1F_Text_WowYoureStrong:
	.string "Wow, you're really strong!\pI want to be a Pokémon Trainer like you!$"

Route119_WeatherInstitute_1F_Text_ProfStudyingRain:
	.string "The professor loves rain.\nThat's a fact.\pBut if it keeps raining, people will be in\ntrouble. That's another fact.\pThus, the professor is studying if the\nrain can be put to good use.$"

Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo:
	.string "Hello!\nWe've been saved by your actions!\pWhat I don't understand is what on\nearth Team Aqua was up to.$"

Route119_WeatherInstitute_1F_Text_TakeRestInBed:
	.string "There's a bed…\n"
	.string "Let's take a rest.$"

Route119_WeatherInstitute_2F_EventScript_Scientist::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_ROCKY_HELMET, Route119_WeatherInstitute_2F_EventScript_Scientist_2
	goto_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_Scientist_5
	msgbox Route119_WeatherInstitute_2F_EventScript_Scientist_Text_5
	closemessage
	release
	end

Route119_WeatherInstitute_2F_EventScript_Scientist_2:
	msgbox Route119_WeatherInstitute_2F_EventScript_Scientist_Text_0
	giveitem ITEM_ROCKY_HELMET, 1
	msgbox Route119_WeatherInstitute_2F_EventScript_Scientist_Text_1
	closemessage
	setflag FLAG_RECEIVED_ROCKY_HELMET
	release
	end

Route119_WeatherInstitute_2F_EventScript_Scientist_5:
	setvar VAR_0x8004, 0
	goto_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_2F_EventScript_Scientist_8
Route119_WeatherInstitute_2F_EventScript_Scientist_7:
	goto_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_2F_EventScript_Scientist_11
Route119_WeatherInstitute_2F_EventScript_Scientist_10:
	compare VAR_0x8004, 2
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_Scientist_14
	goto_if_unset FLAG_TEMP_2, Route119_WeatherInstitute_2F_EventScript_Scientist_17
Route119_WeatherInstitute_2F_EventScript_Scientist_16:
	specialvar VAR_RESULT, GetAbnormalWeatherMapNameAndType
	compare VAR_RESULT, 1
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_Scientist_20
	msgbox Route119_WeatherInstitute_2F_EventScript_Scientist_Text_4
	closemessage
	release
	end

Route119_WeatherInstitute_2F_EventScript_Scientist_8:
	addvar VAR_0x8004, 1
	goto Route119_WeatherInstitute_2F_EventScript_Scientist_7

Route119_WeatherInstitute_2F_EventScript_Scientist_11:
	addvar VAR_0x8004, 1
	goto Route119_WeatherInstitute_2F_EventScript_Scientist_10

Route119_WeatherInstitute_2F_EventScript_Scientist_14:
	msgbox Route119_WeatherInstitute_2F_EventScript_Scientist_Text_2
	closemessage
	release
	end

Route119_WeatherInstitute_2F_EventScript_Scientist_17:
	special CreateAbnormalWeatherEvent
	setflag FLAG_TEMP_2
	goto Route119_WeatherInstitute_2F_EventScript_Scientist_16

Route119_WeatherInstitute_2F_EventScript_Scientist_20:
	msgbox Route119_WeatherInstitute_2F_EventScript_Scientist_Text_3
	closemessage
	release
	end


Route119_WeatherInstitute_2F_EventScript_Scientist_Text_0:
	.string "Oh, you came by as you promised!\pGreat!\nPlease take this, then!\pHere it is.$"

Route119_WeatherInstitute_2F_EventScript_Scientist_Text_1:
	.string "A Rocky Helmet damages the attacker\nupon contact when the holder takes\ldamage.\pAt that time, I dared to take a slap.\nAnd that was totally on purpose.$"

Route119_WeatherInstitute_2F_EventScript_Scientist_Text_2:
	.string "Abnormal weather conditions are no\nlonger being reported.\pThe occasional rainfall is a blessing,\nreally.$"

Route119_WeatherInstitute_2F_EventScript_Scientist_Text_3:
	.string "I track weather patterns over the\nHoenn region.\pPresently, heavy rainfall has been\nrecorded over {STR_VAR_1}.\pCould that mean, somewhere near\n{STR_VAR_1}…$"

Route119_WeatherInstitute_2F_EventScript_Scientist_Text_4:
	.string "I track weather patterns over the\nHoenn region.\pPresently, a drought has been recorded\nin {STR_VAR_1}.\pCould that mean, somewhere near\n{STR_VAR_1}…$"

Route119_WeatherInstitute_2F_EventScript_Scientist_Text_5:
	.string "The professor loves rain.\nThat's a fact.\pBut if it keeps raining, people will be in\ntrouble. That's another fact.\pThus, the professor is studying if the\nrain can be put to good use.$"
