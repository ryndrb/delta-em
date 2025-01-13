# 1 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 2 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
.set LOCALID_LITTLE_BOY, 5
# 3 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 4 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_MapScripts::
# 5 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_1F_OnTransition
# 6 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.byte 0
# 7 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 8 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_OnTransition:
# 9 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call_if_ge VAR_WEATHER_INSTITUTE_STATE, 2, Route119_WeatherInstitute_1F_EventScript_SetLittleBoyPos
# 10 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 0, Route119_WeatherInstitute_1F_EventScript_SetInstituteMusic
# 11 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 12 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 13 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_SetLittleBoyPos::
# 14 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setobjectxyperm LOCALID_LITTLE_BOY, 15, 11
# 15 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setobjectmovementtype LOCALID_LITTLE_BOY, MOVEMENT_TYPE_WANDER_AROUND
# 16 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	return
# 17 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 18 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_SetInstituteMusic::
# 19 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 20 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	return
# 21 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 22 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_LittleBoy::
# 23 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lock
# 24 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	faceplayer
# 25 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	special GetPlayerBigGuyGirlString
# 26 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_eq VAR_WEATHER_INSTITUTE_STATE, 0, Route119_WeatherInstitute_1F_EventScript_LittleBoyTeamAquaHere
# 27 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_WowYoureStrong, MSGBOX_DEFAULT
# 28 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
# 29 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 30 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 31 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_LittleBoyTeamAquaHere::
# 32 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_EveryoneWentUpstairs, MSGBOX_DEFAULT
# 33 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
# 34 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 35 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 36 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_InstituteWorker1::
# 37 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo, MSGBOX_NPC
# 38 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 39 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 40 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_Bed::
# 41 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lockall
# 42 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_TakeRestInBed, MSGBOX_DEFAULT
# 43 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	closemessage
# 44 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 45 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	releaseall
# 46 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 47 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 48 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_Grunt1::
# 49 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_1, Route119_WeatherInstitute_1F_Text_Grunt1Intro, Route119_WeatherInstitute_1F_Text_Grunt1Defeat
# 50 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 51 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 52 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 53 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_Grunt4::
# 54 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_4, Route119_WeatherInstitute_1F_Text_Grunt4Intro, Route119_WeatherInstitute_1F_Text_Grunt4Defeat
# 55 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 56 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 57 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 58 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt1Intro:
# 59 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "I came here because I heard that\nthe Institute is investigating the\lrelationship between super-ancient\lPokémon and the weather!$"
# 60 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 61 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt1Defeat:
# 62 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Our plan's being spoiled by a kid?$"
# 63 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 64 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt1PostBattle:
# 65 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "The overwhelming power of a super-\nancient Pokémon to even control the\lweather freely…!\lWe, Team Aqua, definitely need it!$"
# 66 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 67 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt4Intro:
# 68 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "The Boss got interested in the\nresearch they have going here, so he\lsent us out.\pQuit your meddling!$"
# 69 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 70 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt4Defeat:
# 71 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Blast it…\nBlasted by a kid…$"
# 72 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 73 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt4PostBattle:
# 74 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Our Boss knows everything.\pBut I'm just a Grunt.\pWhat would I know about what he's\nthinking?\pI wonder if Shelly can tell how clueless\nI am…$"
# 75 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 76 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_EveryoneWentUpstairs:
# 77 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "While I was sleeping, everyone went\nupstairs!$"
# 78 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 79 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_WowYoureStrong:
# 80 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Wow, you're really strong!\pI want to be a Pokémon Trainer like you!$"
# 81 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 82 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_ProfStudyingRain:
# 83 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "The professor loves rain.\nThat's a fact.\pBut if it keeps raining, people will be in\ntrouble. That's another fact.\pThus, the professor is studying if the\nrain can be put to good use.$"
# 84 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 85 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo:
# 86 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Hello!\nWe've been saved by your actions!\pWhat I don't understand is what on\nearth Team Aqua was up to.$"
# 87 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 88 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_TakeRestInBed:
# 89 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "There's a bed…\n"
# 90 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Let's take a rest.$"

Route119_WeatherInstitute_2F_EventScript_Scientist::
# 96 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lock
# 97 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	faceplayer
# 98 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_ROCKY_HELMET, Route119_WeatherInstitute_2F_EventScript_Scientist_2
# 107 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_Scientist_5
# 137 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Scientist_Text_5
# 138 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	closemessage
# 139 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
	end

Route119_WeatherInstitute_2F_EventScript_Scientist_2:
# 99 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Scientist_Text_0
# 100 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	giveitem ITEM_ROCKY_HELMET, 1
# 101 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Scientist_Text_1
# 102 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	closemessage
# 103 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setflag FLAG_RECEIVED_ROCKY_HELMET
# 104 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
	end

Route119_WeatherInstitute_2F_EventScript_Scientist_5:
# 108 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setvar VAR_0x8004, 0
# 109 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_2F_EventScript_Scientist_8
Route119_WeatherInstitute_2F_EventScript_Scientist_7:
# 112 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_2F_EventScript_Scientist_11
Route119_WeatherInstitute_2F_EventScript_Scientist_10:
# 115 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	compare VAR_0x8004, 2
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_Scientist_14
# 121 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, Route119_WeatherInstitute_2F_EventScript_Scientist_17
Route119_WeatherInstitute_2F_EventScript_Scientist_16:
# 125 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	specialvar VAR_RESULT, GetAbnormalWeatherMapNameAndType
# 126 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_Scientist_20
# 132 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Scientist_Text_4
# 133 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	closemessage
# 134 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
	end

Route119_WeatherInstitute_2F_EventScript_Scientist_8:
# 110 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	addvar VAR_0x8004, 1
	goto Route119_WeatherInstitute_2F_EventScript_Scientist_7

Route119_WeatherInstitute_2F_EventScript_Scientist_11:
# 113 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	addvar VAR_0x8004, 1
	goto Route119_WeatherInstitute_2F_EventScript_Scientist_10

Route119_WeatherInstitute_2F_EventScript_Scientist_14:
# 116 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Scientist_Text_2
# 117 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	closemessage
# 118 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
	end

Route119_WeatherInstitute_2F_EventScript_Scientist_17:
# 122 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	special CreateAbnormalWeatherEvent
# 123 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setflag FLAG_TEMP_2
	goto Route119_WeatherInstitute_2F_EventScript_Scientist_16

Route119_WeatherInstitute_2F_EventScript_Scientist_20:
# 127 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_Scientist_Text_3
# 128 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	closemessage
# 129 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
	end


Route119_WeatherInstitute_2F_EventScript_Scientist_Text_0:
# 99 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Oh, you came by as you promised!\pGreat!\nPlease take this, then!\pHere it is.$"

Route119_WeatherInstitute_2F_EventScript_Scientist_Text_1:
# 101 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "A Rocky Helmet damages the attacker\nupon contact when the holder takes\ldamage.\pAt that time, I dared to take a slap.\nAnd that was totally on purpose.$"

Route119_WeatherInstitute_2F_EventScript_Scientist_Text_2:
# 116 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Abnormal weather conditions are no\nlonger being reported.\pThe occasional rainfall is a blessing,\nreally.$"

Route119_WeatherInstitute_2F_EventScript_Scientist_Text_3:
# 127 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "I track weather patterns over the\nHoenn region.\pPresently, heavy rainfall has been\nrecorded over {STR_VAR_1}.\pCould that mean, somewhere near\n{STR_VAR_1}…$"

Route119_WeatherInstitute_2F_EventScript_Scientist_Text_4:
# 132 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "I track weather patterns over the\nHoenn region.\pPresently, a drought has been recorded\nin {STR_VAR_1}.\pCould that mean, somewhere near\n{STR_VAR_1}…$"

Route119_WeatherInstitute_2F_EventScript_Scientist_Text_5:
# 137 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "The professor loves rain.\nThat's a fact.\pBut if it keeps raining, people will be in\ntrouble. That's another fact.\pThus, the professor is studying if the\nrain can be put to good use.$"
