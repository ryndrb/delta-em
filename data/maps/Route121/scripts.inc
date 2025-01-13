# 1 "data/maps/Route121/scripts.pory"

# 2 "data/maps/Route121/scripts.pory"
.set LOCALID_GRUNT_1, 12
# 3 "data/maps/Route121/scripts.pory"
.set LOCALID_GRUNT_2, 13
# 4 "data/maps/Route121/scripts.pory"
.set LOCALID_GRUNT_3, 14
# 5 "data/maps/Route121/scripts.pory"

# 6 "data/maps/Route121/scripts.pory"
Route121_MapScripts::
# 7 "data/maps/Route121/scripts.pory"
	.byte 0
# 8 "data/maps/Route121/scripts.pory"

# 9 "data/maps/Route121/scripts.pory"
Route121_EventScript_Woman::
# 10 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_AheadLoomsMtPyre, MSGBOX_NPC
# 11 "data/maps/Route121/scripts.pory"
	end
# 12 "data/maps/Route121/scripts.pory"

# 13 "data/maps/Route121/scripts.pory"
Route121_EventScript_MtPyrePierSign::
# 14 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MtPyrePierSign, MSGBOX_SIGN
# 15 "data/maps/Route121/scripts.pory"
	end
# 16 "data/maps/Route121/scripts.pory"

# 17 "data/maps/Route121/scripts.pory"
Route121_EventScript_SafariZoneSign::
# 18 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_SafariZoneSign, MSGBOX_SIGN
# 19 "data/maps/Route121/scripts.pory"
	end
# 20 "data/maps/Route121/scripts.pory"

# 21 "data/maps/Route121/scripts.pory"
Route121_EventScript_AquaGruntsMoveOut::
# 22 "data/maps/Route121/scripts.pory"
	lockall
# 23 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceRight
# 24 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 25 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_OkayMoveOutToMtPyre, MSGBOX_DEFAULT
# 26 "data/maps/Route121/scripts.pory"
	closemessage
# 27 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_1, Route121_Movement_Grunt1Exit
# 28 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_2, Route121_Movement_Grunt2Exit
# 29 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_3, Route121_Movement_Grunt3Exit
# 30 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 31 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 32 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 33 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 34 "data/maps/Route121/scripts.pory"
	setvar VAR_ROUTE121_STATE, 1
# 35 "data/maps/Route121/scripts.pory"
	releaseall
# 36 "data/maps/Route121/scripts.pory"
	end
# 37 "data/maps/Route121/scripts.pory"

# 38 "data/maps/Route121/scripts.pory"
Route121_Movement_Grunt1Exit:
# 39 "data/maps/Route121/scripts.pory"
	walk_down
# 40 "data/maps/Route121/scripts.pory"
	walk_down
# 41 "data/maps/Route121/scripts.pory"
	walk_down
# 42 "data/maps/Route121/scripts.pory"
	walk_down
# 43 "data/maps/Route121/scripts.pory"
	walk_down
# 44 "data/maps/Route121/scripts.pory"
	walk_down
# 45 "data/maps/Route121/scripts.pory"
	walk_down
# 46 "data/maps/Route121/scripts.pory"
	walk_down
# 47 "data/maps/Route121/scripts.pory"
	step_end
# 48 "data/maps/Route121/scripts.pory"

# 49 "data/maps/Route121/scripts.pory"
Route121_Movement_Grunt2Exit:
# 50 "data/maps/Route121/scripts.pory"
	walk_down
# 51 "data/maps/Route121/scripts.pory"
	walk_down
# 52 "data/maps/Route121/scripts.pory"
	walk_down
# 53 "data/maps/Route121/scripts.pory"
	walk_down
# 54 "data/maps/Route121/scripts.pory"
	walk_down
# 55 "data/maps/Route121/scripts.pory"
	walk_down
# 56 "data/maps/Route121/scripts.pory"
	walk_down
# 57 "data/maps/Route121/scripts.pory"
	walk_down
# 58 "data/maps/Route121/scripts.pory"
	step_end
# 59 "data/maps/Route121/scripts.pory"

# 60 "data/maps/Route121/scripts.pory"
Route121_Movement_Grunt3Exit:
# 61 "data/maps/Route121/scripts.pory"
	walk_down
# 62 "data/maps/Route121/scripts.pory"
	walk_down
# 63 "data/maps/Route121/scripts.pory"
	walk_down
# 64 "data/maps/Route121/scripts.pory"
	walk_down
# 65 "data/maps/Route121/scripts.pory"
	walk_down
# 66 "data/maps/Route121/scripts.pory"
	walk_down
# 67 "data/maps/Route121/scripts.pory"
	walk_down
# 68 "data/maps/Route121/scripts.pory"
	walk_down
# 69 "data/maps/Route121/scripts.pory"
	step_end
# 70 "data/maps/Route121/scripts.pory"

# 71 "data/maps/Route121/scripts.pory"
Route121_EventScript_Vanessa::
# 72 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_VANESSA, Route121_Text_VanessaIntro, Route121_Text_VanessaDefeat
# 73 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_VanessaPostBattle, MSGBOX_AUTOCLOSE
# 74 "data/maps/Route121/scripts.pory"
	end
# 75 "data/maps/Route121/scripts.pory"

# 76 "data/maps/Route121/scripts.pory"
Route121_EventScript_Walter::
# 77 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_WALTER_1, Route121_Text_WalterIntro, Route121_Text_WalterDefeat, Route121_EventScript_RegisterWalter
# 78 "data/maps/Route121/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 79 "data/maps/Route121/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route121_EventScript_RematchWalter
# 80 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterPostBattle, MSGBOX_DEFAULT
# 81 "data/maps/Route121/scripts.pory"
	release
# 82 "data/maps/Route121/scripts.pory"
	end
# 83 "data/maps/Route121/scripts.pory"

# 84 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterWalter::
# 85 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 86 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 87 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterRegister, MSGBOX_DEFAULT
# 88 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_WALTER_1
# 89 "data/maps/Route121/scripts.pory"
	release
# 90 "data/maps/Route121/scripts.pory"
	end
# 91 "data/maps/Route121/scripts.pory"

# 92 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchWalter::
# 93 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_WALTER_1, Route121_Text_WalterRematchIntro, Route121_Text_WalterRematchDefeat
# 94 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterPostRematch, MSGBOX_AUTOCLOSE
# 95 "data/maps/Route121/scripts.pory"
	end
# 96 "data/maps/Route121/scripts.pory"

# 97 "data/maps/Route121/scripts.pory"
Route121_EventScript_Tammy::
# 98 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_TAMMY, Route121_Text_TammyIntro, Route121_Text_TammyDefeat
# 99 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_TammyPostBattle, MSGBOX_AUTOCLOSE
# 100 "data/maps/Route121/scripts.pory"
	end
# 101 "data/maps/Route121/scripts.pory"

# 102 "data/maps/Route121/scripts.pory"
Route121_EventScript_Kate::
# 103 "data/maps/Route121/scripts.pory"
	trainerbattle_double TRAINER_KATE_AND_JOY, Route121_Text_KateIntro, Route121_Text_KateDefeat, Route121_Text_KateNotEnoughMons
# 104 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_KatePostBattle, MSGBOX_AUTOCLOSE
# 105 "data/maps/Route121/scripts.pory"
	end
# 106 "data/maps/Route121/scripts.pory"

# 107 "data/maps/Route121/scripts.pory"
Route121_EventScript_Joy::
# 108 "data/maps/Route121/scripts.pory"
	trainerbattle_double TRAINER_KATE_AND_JOY, Route121_Text_JoyIntro, Route121_Text_JoyDefeat, Route121_Text_JoyNotEnoughMons
# 109 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JoyPostBattle, MSGBOX_AUTOCLOSE
# 110 "data/maps/Route121/scripts.pory"
	end
# 111 "data/maps/Route121/scripts.pory"

# 112 "data/maps/Route121/scripts.pory"
Route121_EventScript_Jessica::
# 113 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_JESSICA_1, Route121_Text_JessicaIntro, Route121_Text_JessicaDefeat, Route121_EventScript_RegisterJessica
# 114 "data/maps/Route121/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 115 "data/maps/Route121/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route121_EventScript_RematchJessica
# 116 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaPostBattle, MSGBOX_DEFAULT
# 117 "data/maps/Route121/scripts.pory"
	release
# 118 "data/maps/Route121/scripts.pory"
	end
# 119 "data/maps/Route121/scripts.pory"

# 120 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterJessica::
# 121 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 122 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 123 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaRegister, MSGBOX_DEFAULT
# 124 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_JESSICA_1
# 125 "data/maps/Route121/scripts.pory"
	release
# 126 "data/maps/Route121/scripts.pory"
	end
# 127 "data/maps/Route121/scripts.pory"

# 128 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchJessica::
# 129 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_JESSICA_1, Route121_Text_JessicaRematchIntro, Route121_Text_JessicaRematchDefeat
# 130 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaPostRematch, MSGBOX_AUTOCLOSE
# 131 "data/maps/Route121/scripts.pory"
	end
# 132 "data/maps/Route121/scripts.pory"

# 133 "data/maps/Route121/scripts.pory"
Route121_EventScript_Cale::
# 134 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_CALE, Route121_Text_CaleIntro, Route121_Text_CaleDefeat
# 135 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CalePostBattle, MSGBOX_AUTOCLOSE
# 136 "data/maps/Route121/scripts.pory"
	end
# 137 "data/maps/Route121/scripts.pory"

# 138 "data/maps/Route121/scripts.pory"
Route121_EventScript_Myles::
# 139 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_MYLES, Route121_Text_MylesIntro, Route121_Text_MylesDefeat
# 140 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MylesPostBattle, MSGBOX_AUTOCLOSE
# 141 "data/maps/Route121/scripts.pory"
	end
# 142 "data/maps/Route121/scripts.pory"

# 143 "data/maps/Route121/scripts.pory"
Route121_EventScript_Pat::
# 144 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_PAT, Route121_Text_PatIntro, Route121_Text_PatDefeat
# 145 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_PatPostBattle, MSGBOX_AUTOCLOSE
# 146 "data/maps/Route121/scripts.pory"
	end
# 147 "data/maps/Route121/scripts.pory"

# 148 "data/maps/Route121/scripts.pory"
Route121_EventScript_Marcel::
# 149 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_MARCEL, Route121_Text_MarcelIntro, Route121_Text_MarcelDefeat
# 150 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MarcelPostBattle, MSGBOX_AUTOCLOSE
# 151 "data/maps/Route121/scripts.pory"
	end
# 152 "data/maps/Route121/scripts.pory"

# 153 "data/maps/Route121/scripts.pory"
Route121_EventScript_Cristin::
# 154 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_CRISTIN_1, Route121_Text_CristinIntro, Route121_Text_CristinDefeat, Route121_EventScript_RegisterCristin
# 155 "data/maps/Route121/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 156 "data/maps/Route121/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route121_EventScript_RematchCristin
# 157 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinPostBattle, MSGBOX_DEFAULT
# 158 "data/maps/Route121/scripts.pory"
	release
# 159 "data/maps/Route121/scripts.pory"
	end
# 160 "data/maps/Route121/scripts.pory"

# 161 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterCristin::
# 162 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 163 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 164 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinRegister, MSGBOX_DEFAULT
# 165 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_CRISTIN_1
# 166 "data/maps/Route121/scripts.pory"
	release
# 167 "data/maps/Route121/scripts.pory"
	end
# 168 "data/maps/Route121/scripts.pory"

# 169 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchCristin::
# 170 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_CRISTIN_1, Route121_Text_CristinRematchIntro, Route121_Text_CristinRematchDefeat
# 171 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinPostRematch, MSGBOX_AUTOCLOSE
# 172 "data/maps/Route121/scripts.pory"
	end
# 173 "data/maps/Route121/scripts.pory"

# 174 "data/maps/Route121/scripts.pory"
Route121_Text_OkayMoveOutToMtPyre:
# 175 "data/maps/Route121/scripts.pory"
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: OK!\nWe've moving out of Mt. Pyre!\pWe're getting our hands on that orb\nbefore Team Magma does!$"
# 176 "data/maps/Route121/scripts.pory"

# 177 "data/maps/Route121/scripts.pory"
Route121_Text_AheadLoomsMtPyre:
# 178 "data/maps/Route121/scripts.pory"
	.string "Ahead looms Mt. Pyre…\p"
# 179 "data/maps/Route121/scripts.pory"
	.string "It is a natural monument to the spirits \n"
# 180 "data/maps/Route121/scripts.pory"
	.string "of departed Pokémon…$"
# 181 "data/maps/Route121/scripts.pory"

# 182 "data/maps/Route121/scripts.pory"
Route121_Text_MtPyrePierSign:
# 183 "data/maps/Route121/scripts.pory"
	.string "Mt. Pyre Pier\p"
# 184 "data/maps/Route121/scripts.pory"
	.string "…The sign is old and worn out.\n"
# 185 "data/maps/Route121/scripts.pory"
	.string "The words are barely legible…$"
# 186 "data/maps/Route121/scripts.pory"

# 187 "data/maps/Route121/scripts.pory"
Route121_Text_SafariZoneSign:
# 188 "data/maps/Route121/scripts.pory"
	.string "“Filled with rare Pokémon!”\n"
# 189 "data/maps/Route121/scripts.pory"
	.string "Safari Zone$"

Route121_EventScript_Nurse::
# 195 "data/maps/Route121/scripts.pory"
	lock
# 196 "data/maps/Route121/scripts.pory"
	msgbox Route121_EventScript_Nurse_Text_0
# 197 "data/maps/Route121/scripts.pory"
	closemessage
# 198 "data/maps/Route121/scripts.pory"
	fadescreen FADE_TO_BLACK
# 199 "data/maps/Route121/scripts.pory"
	playse SE_USE_ITEM
# 200 "data/maps/Route121/scripts.pory"
	special HealPlayerParty
# 201 "data/maps/Route121/scripts.pory"
	waitse
# 202 "data/maps/Route121/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 203 "data/maps/Route121/scripts.pory"
	delay 8
# 204 "data/maps/Route121/scripts.pory"
	msgbox Route121_EventScript_Nurse_Text_1
# 205 "data/maps/Route121/scripts.pory"
	closemessage
# 206 "data/maps/Route121/scripts.pory"
	release
	end


Route121_EventScript_Skitty::
# 211 "data/maps/Route121/scripts.pory"
	lock
# 212 "data/maps/Route121/scripts.pory"
	waitse
# 213 "data/maps/Route121/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 214 "data/maps/Route121/scripts.pory"
	msgbox Route121_EventScript_Skitty_Text_0
# 215 "data/maps/Route121/scripts.pory"
	waitmoncry
# 216 "data/maps/Route121/scripts.pory"
	closemessage
# 217 "data/maps/Route121/scripts.pory"
	release
	end


Route121_EventScript_Nurse_Text_0:
# 196 "data/maps/Route121/scripts.pory"
	.string "{COLOR RED}Nurse{COLOR DARK_GRAY}: I am a wandering Pokémon Center\nemployee.\pWhy don't I take care of your Pokémon's\nills in a flash?$"

Route121_EventScript_Nurse_Text_1:
# 204 "data/maps/Route121/scripts.pory"
	.string "I took care of all that ailed your\nPokémon in a flash!$"

Route121_EventScript_Skitty_Text_0:
# 214 "data/maps/Route121/scripts.pory"
	.string "Meenya?$"
