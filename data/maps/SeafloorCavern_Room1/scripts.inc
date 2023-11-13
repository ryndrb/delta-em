SeafloorCavern_Room1_MapScripts::
	.byte 0

SeafloorCavern_Room1_EventScript_Grunt1::
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, SeafloorCavern_Room1_Text_Grunt1Intro, SeafloorCavern_Room1_Text_Grunt1Defeat
	msgbox SeafloorCavern_Room1_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

SeafloorCavern_Room1_EventScript_Grunt2::
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, SeafloorCavern_Room1_Text_Grunt2Intro, SeafloorCavern_Room1_Text_Grunt2Defeat
	msgbox SeafloorCavern_Room1_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

SeafloorCavern_Room1_Text_Grunt1Intro:
	.string "I have no time for children.\nRun along home now!$"

SeafloorCavern_Room1_Text_Grunt1Defeat:
	.string "I wanna go home…$"

SeafloorCavern_Room1_Text_Grunt1PostBattle:
	.string "I want to get a promotion so I can\nboss around the Grunts…$"

SeafloorCavern_Room1_Text_Grunt2Intro:
	.string "That submarine… It's tiny inside.\nI'm sore all over!$"

SeafloorCavern_Room1_Text_Grunt2Defeat:
	.string "Losing makes me sore!$"

SeafloorCavern_Room1_Text_Grunt2PostBattle:
	.string "That submarine we jacked, man, it's\nbrutal as a ride.\lIt's way too tight in there!$"

