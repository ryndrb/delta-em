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
Route121_Movement_Grunt1Exit:
# 22 "data/maps/Route121/scripts.pory"
	walk_down
# 23 "data/maps/Route121/scripts.pory"
	walk_down
# 24 "data/maps/Route121/scripts.pory"
	walk_down
# 25 "data/maps/Route121/scripts.pory"
	walk_down
# 26 "data/maps/Route121/scripts.pory"
	walk_down
# 27 "data/maps/Route121/scripts.pory"
	walk_down
# 28 "data/maps/Route121/scripts.pory"
	walk_down
# 29 "data/maps/Route121/scripts.pory"
	walk_down
# 30 "data/maps/Route121/scripts.pory"
	step_end
# 31 "data/maps/Route121/scripts.pory"

# 32 "data/maps/Route121/scripts.pory"
Route121_Movement_Grunt2Exit:
# 33 "data/maps/Route121/scripts.pory"
	walk_down
# 34 "data/maps/Route121/scripts.pory"
	walk_down
# 35 "data/maps/Route121/scripts.pory"
	walk_down
# 36 "data/maps/Route121/scripts.pory"
	walk_down
# 37 "data/maps/Route121/scripts.pory"
	walk_down
# 38 "data/maps/Route121/scripts.pory"
	walk_down
# 39 "data/maps/Route121/scripts.pory"
	walk_down
# 40 "data/maps/Route121/scripts.pory"
	walk_down
# 41 "data/maps/Route121/scripts.pory"
	step_end
# 42 "data/maps/Route121/scripts.pory"

# 43 "data/maps/Route121/scripts.pory"
Route121_Movement_Grunt3Exit:
# 44 "data/maps/Route121/scripts.pory"
	walk_down
# 45 "data/maps/Route121/scripts.pory"
	walk_down
# 46 "data/maps/Route121/scripts.pory"
	walk_down
# 47 "data/maps/Route121/scripts.pory"
	walk_down
# 48 "data/maps/Route121/scripts.pory"
	walk_down
# 49 "data/maps/Route121/scripts.pory"
	walk_down
# 50 "data/maps/Route121/scripts.pory"
	walk_down
# 51 "data/maps/Route121/scripts.pory"
	walk_down
# 52 "data/maps/Route121/scripts.pory"
	step_end
# 53 "data/maps/Route121/scripts.pory"

# 54 "data/maps/Route121/scripts.pory"
Route121_EventScript_Vanessa::
# 55 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_VANESSA, Route121_Text_VanessaIntro, Route121_Text_VanessaDefeat
# 56 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_VanessaPostBattle, MSGBOX_AUTOCLOSE
# 57 "data/maps/Route121/scripts.pory"
	end
# 58 "data/maps/Route121/scripts.pory"

# 59 "data/maps/Route121/scripts.pory"
Route121_EventScript_Walter::
# 60 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_WALTER_1, Route121_Text_WalterIntro, Route121_Text_WalterDefeat, Route121_EventScript_RegisterWalter
# 61 "data/maps/Route121/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 62 "data/maps/Route121/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route121_EventScript_RematchWalter
# 63 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterPostBattle, MSGBOX_DEFAULT
# 64 "data/maps/Route121/scripts.pory"
	release
# 65 "data/maps/Route121/scripts.pory"
	end
# 66 "data/maps/Route121/scripts.pory"

# 67 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterWalter::
# 68 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 69 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 70 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterRegister, MSGBOX_DEFAULT
# 71 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_WALTER_1
# 72 "data/maps/Route121/scripts.pory"
	release
# 73 "data/maps/Route121/scripts.pory"
	end
# 74 "data/maps/Route121/scripts.pory"

# 75 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchWalter::
# 76 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_WALTER_1, Route121_Text_WalterRematchIntro, Route121_Text_WalterRematchDefeat
# 77 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterPostRematch, MSGBOX_AUTOCLOSE
# 78 "data/maps/Route121/scripts.pory"
	end
# 79 "data/maps/Route121/scripts.pory"

# 80 "data/maps/Route121/scripts.pory"
Route121_EventScript_Tammy::
# 81 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_TAMMY, Route121_Text_TammyIntro, Route121_Text_TammyDefeat
# 82 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_TammyPostBattle, MSGBOX_AUTOCLOSE
# 83 "data/maps/Route121/scripts.pory"
	end
# 84 "data/maps/Route121/scripts.pory"

# 85 "data/maps/Route121/scripts.pory"
Route121_EventScript_Kate::
# 86 "data/maps/Route121/scripts.pory"
	trainerbattle_double TRAINER_KATE_AND_JOY, Route121_Text_KateIntro, Route121_Text_KateDefeat, Route121_Text_KateNotEnoughMons
# 87 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_KatePostBattle, MSGBOX_AUTOCLOSE
# 88 "data/maps/Route121/scripts.pory"
	end
# 89 "data/maps/Route121/scripts.pory"

# 90 "data/maps/Route121/scripts.pory"
Route121_EventScript_Joy::
# 91 "data/maps/Route121/scripts.pory"
	trainerbattle_double TRAINER_KATE_AND_JOY, Route121_Text_JoyIntro, Route121_Text_JoyDefeat, Route121_Text_JoyNotEnoughMons
# 92 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JoyPostBattle, MSGBOX_AUTOCLOSE
# 93 "data/maps/Route121/scripts.pory"
	end
# 94 "data/maps/Route121/scripts.pory"

# 95 "data/maps/Route121/scripts.pory"
Route121_EventScript_Jessica::
# 96 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_JESSICA_1, Route121_Text_JessicaIntro, Route121_Text_JessicaDefeat, Route121_EventScript_RegisterJessica
# 97 "data/maps/Route121/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 98 "data/maps/Route121/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route121_EventScript_RematchJessica
# 99 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaPostBattle, MSGBOX_DEFAULT
# 100 "data/maps/Route121/scripts.pory"
	release
# 101 "data/maps/Route121/scripts.pory"
	end
# 102 "data/maps/Route121/scripts.pory"

# 103 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterJessica::
# 104 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 105 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 106 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaRegister, MSGBOX_DEFAULT
# 107 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_JESSICA_1
# 108 "data/maps/Route121/scripts.pory"
	release
# 109 "data/maps/Route121/scripts.pory"
	end
# 110 "data/maps/Route121/scripts.pory"

# 111 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchJessica::
# 112 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_JESSICA_1, Route121_Text_JessicaRematchIntro, Route121_Text_JessicaRematchDefeat
# 113 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaPostRematch, MSGBOX_AUTOCLOSE
# 114 "data/maps/Route121/scripts.pory"
	end
# 115 "data/maps/Route121/scripts.pory"

# 116 "data/maps/Route121/scripts.pory"
Route121_EventScript_Cale::
# 117 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_CALE, Route121_Text_CaleIntro, Route121_Text_CaleDefeat
# 118 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CalePostBattle, MSGBOX_AUTOCLOSE
# 119 "data/maps/Route121/scripts.pory"
	end
# 120 "data/maps/Route121/scripts.pory"

# 121 "data/maps/Route121/scripts.pory"
Route121_EventScript_Myles::
# 122 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_MYLES, Route121_Text_MylesIntro, Route121_Text_MylesDefeat
# 123 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MylesPostBattle, MSGBOX_AUTOCLOSE
# 124 "data/maps/Route121/scripts.pory"
	end
# 125 "data/maps/Route121/scripts.pory"

# 126 "data/maps/Route121/scripts.pory"
Route121_EventScript_Pat::
# 127 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_PAT, Route121_Text_PatIntro, Route121_Text_PatDefeat
# 128 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_PatPostBattle, MSGBOX_AUTOCLOSE
# 129 "data/maps/Route121/scripts.pory"
	end
# 130 "data/maps/Route121/scripts.pory"

# 131 "data/maps/Route121/scripts.pory"
Route121_EventScript_Marcel::
# 132 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_MARCEL, Route121_Text_MarcelIntro, Route121_Text_MarcelDefeat
# 133 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MarcelPostBattle, MSGBOX_AUTOCLOSE
# 134 "data/maps/Route121/scripts.pory"
	end
# 135 "data/maps/Route121/scripts.pory"

# 136 "data/maps/Route121/scripts.pory"
Route121_EventScript_Cristin::
# 137 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_CRISTIN_1, Route121_Text_CristinIntro, Route121_Text_CristinDefeat, Route121_EventScript_RegisterCristin
# 138 "data/maps/Route121/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 139 "data/maps/Route121/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route121_EventScript_RematchCristin
# 140 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinPostBattle, MSGBOX_DEFAULT
# 141 "data/maps/Route121/scripts.pory"
	release
# 142 "data/maps/Route121/scripts.pory"
	end
# 143 "data/maps/Route121/scripts.pory"

# 144 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterCristin::
# 145 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 146 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 147 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinRegister, MSGBOX_DEFAULT
# 148 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_CRISTIN_1
# 149 "data/maps/Route121/scripts.pory"
	release
# 150 "data/maps/Route121/scripts.pory"
	end
# 151 "data/maps/Route121/scripts.pory"

# 152 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchCristin::
# 153 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_CRISTIN_1, Route121_Text_CristinRematchIntro, Route121_Text_CristinRematchDefeat
# 154 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinPostRematch, MSGBOX_AUTOCLOSE
# 155 "data/maps/Route121/scripts.pory"
	end
# 156 "data/maps/Route121/scripts.pory"

# 157 "data/maps/Route121/scripts.pory"
Route121_Text_OkayMoveOutToMtPyre:
# 158 "data/maps/Route121/scripts.pory"
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: OK!\nWe've moving out of Mt. Pyre!\pWe're getting our hands on that orb\nbefore Team Magma does!$"
# 159 "data/maps/Route121/scripts.pory"

# 160 "data/maps/Route121/scripts.pory"
Route121_Text_AheadLoomsMtPyre:
# 161 "data/maps/Route121/scripts.pory"
	.string "Ahead looms Mt. Pyre…\p"
# 162 "data/maps/Route121/scripts.pory"
	.string "It is a natural monument to the spirits \n"
# 163 "data/maps/Route121/scripts.pory"
	.string "of departed Pokémon…$"
# 164 "data/maps/Route121/scripts.pory"

# 165 "data/maps/Route121/scripts.pory"
Route121_Text_MtPyrePierSign:
# 166 "data/maps/Route121/scripts.pory"
	.string "Mt. Pyre Pier\p"
# 167 "data/maps/Route121/scripts.pory"
	.string "…The sign is old and worn out.\n"
# 168 "data/maps/Route121/scripts.pory"
	.string "The words are barely legible…$"
# 169 "data/maps/Route121/scripts.pory"

# 170 "data/maps/Route121/scripts.pory"
Route121_Text_SafariZoneSign:
# 171 "data/maps/Route121/scripts.pory"
	.string "“Filled with rare Pokémon!”\n"
# 172 "data/maps/Route121/scripts.pory"
	.string "Safari Zone$"

Route121_EventScript_AquaGruntsMoveOut::
# 178 "data/maps/Route121/scripts.pory"
	lockall
# 179 "data/maps/Route121/scripts.pory"
	delay 16
# 180 "data/maps/Route121/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, Route121_EventScript_AquaGruntsMoveOut_2
# 197 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_WalkInPlaceUp
# 198 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 199 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_OkayMoveOutToMtPyre, MSGBOX_DEFAULT
# 200 "data/maps/Route121/scripts.pory"
	closemessage
# 201 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_1, Route121_Movement_Grunt1Exit
# 202 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_2, Route121_Movement_Grunt2Exit
# 203 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_3, Route121_Movement_Grunt3Exit
# 204 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 205 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 206 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 207 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 208 "data/maps/Route121/scripts.pory"
	setvar VAR_ROUTE121_STATE, 1
# 209 "data/maps/Route121/scripts.pory"
	releaseall
	end

Route121_EventScript_AquaGruntsMoveOut_2:
# 181 "data/maps/Route121/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 182 "data/maps/Route121/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 183 "data/maps/Route121/scripts.pory"
	delay 8
# 184 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceRight
# 185 "data/maps/Route121/scripts.pory"
	waitmovement LOCALID_GRUNT_2
# 186 "data/maps/Route121/scripts.pory"
	msgbox Route121_EventScript_AquaGruntsMoveOut_Text_0
# 187 "data/maps/Route121/scripts.pory"
	closemessage
# 188 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_3, Common_Movement_WalkInPlaceLeft
# 189 "data/maps/Route121/scripts.pory"
	waitmovement LOCALID_GRUNT_3
# 190 "data/maps/Route121/scripts.pory"
	msgbox Route121_EventScript_AquaGruntsMoveOut_Text_1
# 191 "data/maps/Route121/scripts.pory"
	closemessage
# 192 "data/maps/Route121/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route121_EventScript_AquaGruntsMoveOut_Movement_0
# 193 "data/maps/Route121/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 194 "data/maps/Route121/scripts.pory"
	releaseall
	end


Route121_EventScript_Nurse::
# 214 "data/maps/Route121/scripts.pory"
	lock
# 215 "data/maps/Route121/scripts.pory"
	msgbox Route121_EventScript_Nurse_Text_0
# 216 "data/maps/Route121/scripts.pory"
	closemessage
# 217 "data/maps/Route121/scripts.pory"
	fadescreen FADE_TO_BLACK
# 218 "data/maps/Route121/scripts.pory"
	playse SE_USE_ITEM
# 219 "data/maps/Route121/scripts.pory"
	special HealPlayerParty
# 220 "data/maps/Route121/scripts.pory"
	waitse
# 221 "data/maps/Route121/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 222 "data/maps/Route121/scripts.pory"
	delay 8
# 223 "data/maps/Route121/scripts.pory"
	msgbox Route121_EventScript_Nurse_Text_1
# 224 "data/maps/Route121/scripts.pory"
	closemessage
# 225 "data/maps/Route121/scripts.pory"
	release
	end


Route121_EventScript_Skitty::
# 230 "data/maps/Route121/scripts.pory"
	lock
# 231 "data/maps/Route121/scripts.pory"
	waitse
# 232 "data/maps/Route121/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 233 "data/maps/Route121/scripts.pory"
	msgbox Route121_EventScript_Skitty_Text_0
# 234 "data/maps/Route121/scripts.pory"
	waitmoncry
# 235 "data/maps/Route121/scripts.pory"
	closemessage
# 236 "data/maps/Route121/scripts.pory"
	release
	end


# 192 "data/maps/Route121/scripts.pory"
Route121_EventScript_AquaGruntsMoveOut_Movement_0:
# 192 "data/maps/Route121/scripts.pory"
	walk_left
	step_end

Route121_EventScript_AquaGruntsMoveOut_Text_0:
# 186 "data/maps/Route121/scripts.pory"
	.string "GRRAAH! Why are we just standing around\nhere?\pI wanna get my hands on that orb\nalready!$"

Route121_EventScript_AquaGruntsMoveOut_Text_1:
# 190 "data/maps/Route121/scripts.pory"
	.string "Tch… Change of plans.\nBoss says to hold position here.\pWe'll move to Mt. Pyre later, just gotta\nwait for the signal.$"

Route121_EventScript_Nurse_Text_0:
# 215 "data/maps/Route121/scripts.pory"
	.string "{COLOR RED}Nurse{COLOR DARK_GRAY}: I am a wandering Pokémon Center\nemployee.\pWhy don't I take care of your Pokémon's\nills in a flash?$"

Route121_EventScript_Nurse_Text_1:
# 223 "data/maps/Route121/scripts.pory"
	.string "I took care of all that ailed your\nPokémon in a flash!$"

Route121_EventScript_Skitty_Text_0:
# 233 "data/maps/Route121/scripts.pory"
	.string "Meenya?$"
