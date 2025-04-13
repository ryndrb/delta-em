# 1 "data/maps/Route123/scripts.pory"

# 2 "data/maps/Route123/scripts.pory"
Route123_MapScripts::
# 3 "data/maps/Route123/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route123_OnTransition
# 4 "data/maps/Route123/scripts.pory"
	.byte 0
# 5 "data/maps/Route123/scripts.pory"

# 6 "data/maps/Route123/scripts.pory"
Route123_OnTransition:
# 7 "data/maps/Route123/scripts.pory"
	special SetRoute123Weather
# 8 "data/maps/Route123/scripts.pory"
	end
# 9 "data/maps/Route123/scripts.pory"

# 10 "data/maps/Route123/scripts.pory"
Route123_EventScript_GigaDrainGirl::
# 11 "data/maps/Route123/scripts.pory"
	lock
# 12 "data/maps/Route123/scripts.pory"
	faceplayer
# 13 "data/maps/Route123/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_GIGA_DRAIN, Route123_EventScript_ReceivedGigaDrain
# 14 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_LoveGrassMonsHaveAny, MSGBOX_DEFAULT
# 15 "data/maps/Route123/scripts.pory"
	special IsGrassTypeInParty
# 16 "data/maps/Route123/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route123_EventScript_NoGrassMons
# 17 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_YouLikeGrassMonsTooHaveThis, MSGBOX_DEFAULT
# 18 "data/maps/Route123/scripts.pory"
	giveitem ITEM_TM_GIGA_DRAIN, 1
# 19 "data/maps/Route123/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 20 "data/maps/Route123/scripts.pory"
	setflag FLAG_RECEIVED_TM_GIGA_DRAIN
# 21 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CheckTreesWithMyGrassMon, MSGBOX_DEFAULT
# 22 "data/maps/Route123/scripts.pory"
	release
# 23 "data/maps/Route123/scripts.pory"
	end
# 24 "data/maps/Route123/scripts.pory"

# 25 "data/maps/Route123/scripts.pory"
Route123_EventScript_NoGrassMons::
# 26 "data/maps/Route123/scripts.pory"
    msgbox Route123_Text_NoGrassMons, MSGBOX_DEFAULT
# 27 "data/maps/Route123/scripts.pory"
    closemessage
# 28 "data/maps/Route123/scripts.pory"
	release
# 29 "data/maps/Route123/scripts.pory"
	end
# 30 "data/maps/Route123/scripts.pory"

# 31 "data/maps/Route123/scripts.pory"
Route123_EventScript_ReceivedGigaDrain::
# 32 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CheckTreesWithMyGrassMon, MSGBOX_DEFAULT
# 33 "data/maps/Route123/scripts.pory"
	release
# 34 "data/maps/Route123/scripts.pory"
	end
# 35 "data/maps/Route123/scripts.pory"

# 36 "data/maps/Route123/scripts.pory"
Route123_EventScript_RouteSign::
# 37 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_RouteSign, MSGBOX_SIGN
# 38 "data/maps/Route123/scripts.pory"
	end
# 39 "data/maps/Route123/scripts.pory"

# 40 "data/maps/Route123/scripts.pory"
Route123_EventScript_RouteSignMtPyre::
# 41 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_RouteSignMtPyre, MSGBOX_SIGN
# 42 "data/maps/Route123/scripts.pory"
	end
# 43 "data/maps/Route123/scripts.pory"

# 44 "data/maps/Route123/scripts.pory"
Route123_EventScript_BerryMastersHouseSign::
# 45 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_BerryMastersHouse, MSGBOX_SIGN
# 46 "data/maps/Route123/scripts.pory"
	end
# 47 "data/maps/Route123/scripts.pory"

# 48 "data/maps/Route123/scripts.pory"
Route123_EventScript_Wendy::
# 49 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_WENDY, Route123_Text_WendyIntro, Route123_Text_WendyDefeat
# 50 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_WendyPostBattle, MSGBOX_AUTOCLOSE
# 51 "data/maps/Route123/scripts.pory"
	end
# 52 "data/maps/Route123/scripts.pory"

# 53 "data/maps/Route123/scripts.pory"
Route123_EventScript_Braxton::
# 54 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_BRAXTON, Route123_Text_BraxtonIntro, Route123_Text_BraxtonDefeat
# 55 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_BraxtonPostBattle, MSGBOX_AUTOCLOSE
# 56 "data/maps/Route123/scripts.pory"
	end
# 57 "data/maps/Route123/scripts.pory"

# 58 "data/maps/Route123/scripts.pory"
Route123_EventScript_Violet::
# 59 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_VIOLET, Route123_Text_VioletIntro, Route123_Text_VioletDefeat
# 60 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_VioletPostBattle, MSGBOX_AUTOCLOSE
# 61 "data/maps/Route123/scripts.pory"
	end
# 62 "data/maps/Route123/scripts.pory"

# 63 "data/maps/Route123/scripts.pory"
Route123_EventScript_Cameron::
# 64 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_CAMERON_1, Route123_Text_CameronIntro, Route123_Text_CameronDefeat, Route123_EventScript_RegisterCameron
# 65 "data/maps/Route123/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 66 "data/maps/Route123/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route123_EventScript_RematchCameron
# 67 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronPostBattle, MSGBOX_DEFAULT
# 68 "data/maps/Route123/scripts.pory"
	release
# 69 "data/maps/Route123/scripts.pory"
	end
# 70 "data/maps/Route123/scripts.pory"

# 71 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterCameron::
# 72 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 73 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 74 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronRegister, MSGBOX_DEFAULT
# 75 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_CAMERON_1
# 76 "data/maps/Route123/scripts.pory"
	release
# 77 "data/maps/Route123/scripts.pory"
	end
# 78 "data/maps/Route123/scripts.pory"

# 79 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchCameron::
# 80 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_CAMERON_1, Route123_Text_CameronRematchIntro, Route123_Text_CameronRematchDefeat
# 81 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronPostRematch, MSGBOX_AUTOCLOSE
# 82 "data/maps/Route123/scripts.pory"
	end
# 83 "data/maps/Route123/scripts.pory"

# 84 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jacki::
# 85 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JACKI_1, Route123_Text_JackiIntro, Route123_Text_JackiDefeat, Route123_EventScript_RegisterJacki
# 86 "data/maps/Route123/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 87 "data/maps/Route123/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route123_EventScript_RematchJacki
# 88 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiPostBattle, MSGBOX_DEFAULT
# 89 "data/maps/Route123/scripts.pory"
	release
# 90 "data/maps/Route123/scripts.pory"
	end
# 91 "data/maps/Route123/scripts.pory"

# 92 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterJacki::
# 93 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 94 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 95 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiRegister, MSGBOX_DEFAULT
# 96 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_JACKI_1
# 97 "data/maps/Route123/scripts.pory"
	release
# 98 "data/maps/Route123/scripts.pory"
	end
# 99 "data/maps/Route123/scripts.pory"

# 100 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchJacki::
# 101 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_JACKI_1, Route123_Text_JackiRematchIntro, Route123_Text_JackiRematchDefeat
# 102 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiPostRematch, MSGBOX_AUTOCLOSE
# 103 "data/maps/Route123/scripts.pory"
	end
# 104 "data/maps/Route123/scripts.pory"

# 105 "data/maps/Route123/scripts.pory"
Route123_EventScript_Miu::
# 106 "data/maps/Route123/scripts.pory"
	trainerbattle_double TRAINER_MIU_AND_YUKI, Route123_Text_MiuIntro, Route123_Text_MiuDefeat, Route123_Text_MiuNotEnoughMons
# 107 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_MiuPostBattle, MSGBOX_AUTOCLOSE
# 108 "data/maps/Route123/scripts.pory"
	end
# 109 "data/maps/Route123/scripts.pory"

# 110 "data/maps/Route123/scripts.pory"
Route123_EventScript_Yuki::
# 111 "data/maps/Route123/scripts.pory"
	trainerbattle_double TRAINER_MIU_AND_YUKI, Route123_Text_YukiIntro, Route123_Text_YukiDefeat, Route123_Text_YukiNotEnoughMons
# 112 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_YukiPostBattle, MSGBOX_AUTOCLOSE
# 113 "data/maps/Route123/scripts.pory"
	end
# 114 "data/maps/Route123/scripts.pory"

# 115 "data/maps/Route123/scripts.pory"
Route123_EventScript_Kindra::
# 116 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_KINDRA, Route123_Text_KindraIntro, Route123_Text_KindraDefeat
# 117 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_KindraPostBattle, MSGBOX_AUTOCLOSE
# 118 "data/maps/Route123/scripts.pory"
	end
# 119 "data/maps/Route123/scripts.pory"

# 120 "data/maps/Route123/scripts.pory"
Route123_EventScript_Frederick::
# 121 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_FREDRICK, Route123_Text_FrederickIntro, Route123_Text_FrederickDefeat
# 122 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FrederickPostBattle, MSGBOX_AUTOCLOSE
# 123 "data/maps/Route123/scripts.pory"
	end
# 124 "data/maps/Route123/scripts.pory"

# 125 "data/maps/Route123/scripts.pory"
Route123_EventScript_Alberto::
# 126 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_ALBERTO, Route123_Text_AlbertoIntro, Route123_Text_AlbertoDefeat
# 127 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_AlbertoPostBattle, MSGBOX_AUTOCLOSE
# 128 "data/maps/Route123/scripts.pory"
	end
# 129 "data/maps/Route123/scripts.pory"

# 130 "data/maps/Route123/scripts.pory"
Route123_EventScript_Ed::
# 131 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_ED, Route123_Text_EdIntro, Route123_Text_EdDefeat
# 132 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_EdPostBattle, MSGBOX_AUTOCLOSE
# 133 "data/maps/Route123/scripts.pory"
	end
# 134 "data/maps/Route123/scripts.pory"

# 135 "data/maps/Route123/scripts.pory"
Route123_EventScript_Kayley::
# 136 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_KAYLEY, Route123_Text_KayleyIntro, Route123_Text_KayleyDefeat
# 137 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_KayleyPostBattle, MSGBOX_AUTOCLOSE
# 138 "data/maps/Route123/scripts.pory"
	end
# 139 "data/maps/Route123/scripts.pory"

# 140 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jonas::
# 141 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JONAS, Route123_Text_JonasIntro, Route123_Text_JonasDefeat
# 142 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JonasPostBattle, MSGBOX_AUTOCLOSE
# 143 "data/maps/Route123/scripts.pory"
	end
# 144 "data/maps/Route123/scripts.pory"

# 145 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jazmyn::
# 146 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JAZMYN, Route123_Text_JazmynIntro, Route123_Text_JazmynDefeat
# 147 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JazmynPostBattle, MSGBOX_AUTOCLOSE
# 148 "data/maps/Route123/scripts.pory"
	end
# 149 "data/maps/Route123/scripts.pory"

# 150 "data/maps/Route123/scripts.pory"
Route123_EventScript_Davis::
# 151 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_DAVIS, Route123_Text_DavisIntro, Route123_Text_DavisDefeat
# 152 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_DavisPostBattle, MSGBOX_AUTOCLOSE
# 153 "data/maps/Route123/scripts.pory"
	end
# 154 "data/maps/Route123/scripts.pory"

# 155 "data/maps/Route123/scripts.pory"
Route123_EventScript_Fernando::
# 156 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_FERNANDO_1, Route123_Text_FernandoIntro, Route123_Text_FernandoDefeat, Route123_EventScript_RegisterFernando
# 157 "data/maps/Route123/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 158 "data/maps/Route123/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route123_EventScript_RematchFernando
# 159 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoPostBattle, MSGBOX_DEFAULT
# 160 "data/maps/Route123/scripts.pory"
	release
# 161 "data/maps/Route123/scripts.pory"
	end
# 162 "data/maps/Route123/scripts.pory"

# 163 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterFernando::
# 164 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 165 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 166 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoRegister, MSGBOX_DEFAULT
# 167 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_FERNANDO_1
# 168 "data/maps/Route123/scripts.pory"
	release
# 169 "data/maps/Route123/scripts.pory"
	end
# 170 "data/maps/Route123/scripts.pory"

# 171 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchFernando::
# 172 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_FERNANDO_1, Route123_Text_FernandoRematchIntro, Route123_Text_FernandoRematchDefeat
# 173 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoPostRematch, MSGBOX_AUTOCLOSE
# 174 "data/maps/Route123/scripts.pory"
	end
# 175 "data/maps/Route123/scripts.pory"

# 176 "data/maps/Route123/scripts.pory"
Route123_Text_LoveGrassMonsHaveAny:
# 177 "data/maps/Route123/scripts.pory"
	.string "I love Grass-type Pokémon!\pHow about you?$"
# 178 "data/maps/Route123/scripts.pory"

# 179 "data/maps/Route123/scripts.pory"
Route123_Text_NoGrassMons:
# 180 "data/maps/Route123/scripts.pory"
    .string "Oh…\pYou don't travel with any Grass-type\nPokémon…$"
# 181 "data/maps/Route123/scripts.pory"

# 182 "data/maps/Route123/scripts.pory"
Route123_Text_YouLikeGrassMonsTooHaveThis:
# 183 "data/maps/Route123/scripts.pory"
	.string "Oh?\pYou also love Grass-type Pokémon, eh?\pI'm so happy that I want to give you\nthis!\pIt'll be a token of our friendship!$"
# 184 "data/maps/Route123/scripts.pory"

# 185 "data/maps/Route123/scripts.pory"
Route123_Text_CheckTreesWithMyGrassMon:
# 186 "data/maps/Route123/scripts.pory"
	.string "I check on the health of the\ntrees around here with my Grass-type\lPokémon.\pI guess you could say I'm a tree\ndoctor!$"
# 187 "data/maps/Route123/scripts.pory"

# 188 "data/maps/Route123/scripts.pory"
Route123_Text_RouteSign:
# 189 "data/maps/Route123/scripts.pory"
	.string "{RIGHT_ARROW} Route 123\n"
# 190 "data/maps/Route123/scripts.pory"
	.string "{LEFT_ARROW} Route 118$"
# 191 "data/maps/Route123/scripts.pory"

# 192 "data/maps/Route123/scripts.pory"
Route123_Text_RouteSignMtPyre:
# 193 "data/maps/Route123/scripts.pory"
	.string "{UP_ARROW} Mt. Pyre\n"
# 194 "data/maps/Route123/scripts.pory"
	.string "“Forbidden to the faint of heart.”$"
# 195 "data/maps/Route123/scripts.pory"

# 196 "data/maps/Route123/scripts.pory"
Route123_Text_BerryMastersHouse:
# 197 "data/maps/Route123/scripts.pory"
	.string "Berry Master's House$"
