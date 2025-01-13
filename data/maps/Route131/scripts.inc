# 1 "data/maps/Route131/scripts.pory"

# 2 "data/maps/Route131/scripts.pory"
Route131_MapScripts::
# 3 "data/maps/Route131/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route131_OnTransition
# 4 "data/maps/Route131/scripts.pory"
	.byte 0
# 5 "data/maps/Route131/scripts.pory"

# 6 "data/maps/Route131/scripts.pory"
Route131_OnTransition:
# 7 "data/maps/Route131/scripts.pory"
	call_if_ge VAR_SOOTOPOLIS_CITY_STATE, 4, Route131_EventScript_CheckSetAbnormalWeather
# 8 "data/maps/Route131/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route131_EventScript_CaveLadyGone
# 9 "data/maps/Route131/scripts.pory"
	call Route131_EventScript_SetLayout
# 10 "data/maps/Route131/scripts.pory"
	end
# 11 "data/maps/Route131/scripts.pory"

# 12 "data/maps/Route131/scripts.pory"
Route131_EventScript_SetLayout::
# 13 "data/maps/Route131/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE131_SKY_PILLAR
# 14 "data/maps/Route131/scripts.pory"
	return
# 15 "data/maps/Route131/scripts.pory"

# 16 "data/maps/Route131/scripts.pory"
Route131_EventScript_CheckSetAbnormalWeather::
# 17 "data/maps/Route131/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 18 "data/maps/Route131/scripts.pory"
	return
# 19 "data/maps/Route131/scripts.pory"

# 20 "data/maps/Route131/scripts.pory"
Route131_EventScript_CaveLadyGone::
# 21 "data/maps/Route131/scripts.pory"
	setflag FLAG_HIDE_ROUTE_131_LADY
# 22 "data/maps/Route131/scripts.pory"
	return
# 23 "data/maps/Route131/scripts.pory"

# 24 "data/maps/Route131/scripts.pory"
Route131_EventScript_Richard::
# 25 "data/maps/Route131/scripts.pory"
	trainerbattle_single TRAINER_RICHARD, Route131_Text_RichardIntro, Route131_Text_RichardDefeat
# 26 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_RichardPostBattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/Route131/scripts.pory"
	end
# 28 "data/maps/Route131/scripts.pory"

# 29 "data/maps/Route131/scripts.pory"
Route131_EventScript_Herman::
# 30 "data/maps/Route131/scripts.pory"
	trainerbattle_single TRAINER_HERMAN, Route131_Text_HermanIntro, Route131_Text_HermanDefeat
# 31 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_HermanPostBattle, MSGBOX_AUTOCLOSE
# 32 "data/maps/Route131/scripts.pory"
	end
# 33 "data/maps/Route131/scripts.pory"

# 34 "data/maps/Route131/scripts.pory"
Route131_EventScript_Susie::
# 35 "data/maps/Route131/scripts.pory"
	trainerbattle_single TRAINER_SUSIE, Route131_Text_SusieIntro, Route131_Text_SusieDefeat
# 36 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_SusiePostBattle, MSGBOX_AUTOCLOSE
# 37 "data/maps/Route131/scripts.pory"
	end
# 38 "data/maps/Route131/scripts.pory"

# 39 "data/maps/Route131/scripts.pory"
Route131_EventScript_Kara::
# 40 "data/maps/Route131/scripts.pory"
	trainerbattle_single TRAINER_KARA, Route131_Text_KaraIntro, Route131_Text_KaraDefeat
# 41 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_KaraPostBattle, MSGBOX_AUTOCLOSE
# 42 "data/maps/Route131/scripts.pory"
	end
# 43 "data/maps/Route131/scripts.pory"

# 44 "data/maps/Route131/scripts.pory"
Route131_EventScript_Reli::
# 45 "data/maps/Route131/scripts.pory"
	trainerbattle_double TRAINER_RELI_AND_IAN, Route131_Text_ReliIntro, Route131_Text_ReliDefeat, Route131_Text_ReliNotEnoughMons
# 46 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_ReliPostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/Route131/scripts.pory"
	end
# 48 "data/maps/Route131/scripts.pory"

# 49 "data/maps/Route131/scripts.pory"
Route131_EventScript_Ian::
# 50 "data/maps/Route131/scripts.pory"
	trainerbattle_double TRAINER_RELI_AND_IAN, Route131_Text_IanIntro, Route131_Text_IanDefeat, Route131_Text_IanNotEnoughMons
# 51 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_IanPostBattle, MSGBOX_AUTOCLOSE
# 52 "data/maps/Route131/scripts.pory"
	end
# 53 "data/maps/Route131/scripts.pory"

# 54 "data/maps/Route131/scripts.pory"
Route131_EventScript_Talia::
# 55 "data/maps/Route131/scripts.pory"
	trainerbattle_single TRAINER_TALIA, Route131_Text_TaliaIntro, Route131_Text_TaliaDefeat
# 56 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_TaliaPostBattle, MSGBOX_AUTOCLOSE
# 57 "data/maps/Route131/scripts.pory"
	end
# 58 "data/maps/Route131/scripts.pory"

# 59 "data/maps/Route131/scripts.pory"
Route131_EventScript_Kevin::
# 60 "data/maps/Route131/scripts.pory"
	trainerbattle_single TRAINER_KEVIN, Route131_Text_KevinIntro, Route131_Text_KevinDefeat
# 61 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_KevinPostBattle, MSGBOX_AUTOCLOSE
# 62 "data/maps/Route131/scripts.pory"
	end

Route131_EventScript_CaveLady::
# 68 "data/maps/Route131/scripts.pory"
	lock
# 69 "data/maps/Route131/scripts.pory"
	faceplayer
# 70 "data/maps/Route131/scripts.pory"
	msgbox Route131_EventScript_CaveLady_Text_0
# 71 "data/maps/Route131/scripts.pory"
	closemessage
# 72 "data/maps/Route131/scripts.pory"
	applymovement 9, Common_Movement_WalkInPlaceDown
# 73 "data/maps/Route131/scripts.pory"
	waitmovement 9
# 74 "data/maps/Route131/scripts.pory"
	release
	end


Route131_EventScript_CaveLady_Text_0:
# 70 "data/maps/Route131/scripts.pory"
	.string "Only those who have been\nrecognized as being worthy can go\lbeyond this point…$"
