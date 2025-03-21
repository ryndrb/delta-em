# 1 "data/maps/DewfordTown_Gym/scripts.pory"

# 2 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_MapScripts::
# 3 "data/maps/DewfordTown_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_Gym_OnTransition
# 4 "data/maps/DewfordTown_Gym/scripts.pory"
	.byte 0
# 5 "data/maps/DewfordTown_Gym/scripts.pory"

# 6 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_OnTransition:
# 7 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 8 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 9 "data/maps/DewfordTown_Gym/scripts.pory"

# 10 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel::
# 11 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_defeated TRAINER_BRAWLY_1, DewfordTown_Gym_EventScript_SetLightsOn
# 12 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 13 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 14 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 0, DewfordTown_Gym_EventScript_SetFlashLevel7
# 15 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_SetFlashLevel6
# 16 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_SetFlashLevel5
# 17 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_SetFlashLevel4
# 18 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_SetFlashLevel3
# 19 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_SetFlashLevel2
# 20 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetFlashLevel1
# 21 "data/maps/DewfordTown_Gym/scripts.pory"

# 22 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetLightsOn::
# 23 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 0
# 24 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 25 "data/maps/DewfordTown_Gym/scripts.pory"

# 26 "data/maps/DewfordTown_Gym/scripts.pory"
@ Brightest
# 27 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel1::
# 28 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 1
# 29 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 30 "data/maps/DewfordTown_Gym/scripts.pory"

# 31 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel2::
# 32 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 2
# 33 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 34 "data/maps/DewfordTown_Gym/scripts.pory"

# 35 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel3::
# 36 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 3
# 37 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 38 "data/maps/DewfordTown_Gym/scripts.pory"

# 39 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel4::
# 40 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 4
# 41 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 42 "data/maps/DewfordTown_Gym/scripts.pory"

# 43 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel5::
# 44 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 5
# 45 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 46 "data/maps/DewfordTown_Gym/scripts.pory"

# 47 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel6::
# 48 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 6
# 49 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 50 "data/maps/DewfordTown_Gym/scripts.pory"

# 51 "data/maps/DewfordTown_Gym/scripts.pory"
@ Darkest
# 52 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel7::
# 53 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 7
# 54 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 55 "data/maps/DewfordTown_Gym/scripts.pory"

# 56 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrightenRoom::
# 57 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 58 "data/maps/DewfordTown_Gym/scripts.pory"
	nop1
# 59 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, VAR_0x8001, DewfordTown_Gym_EventScript_NoLightChange
# 60 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 61 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_AnimateFlash1Trainer
# 62 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_AnimateFlash2Trainers
# 63 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_AnimateFlash3Trainers
# 64 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_AnimateFlash4Trainers
# 65 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_AnimateFlash5Trainers
# 66 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 6, DewfordTown_Gym_EventScript_AnimateFlash6Trainers
# 67 "data/maps/DewfordTown_Gym/scripts.pory"

# 68 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_NoLightChange::
# 69 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 70 "data/maps/DewfordTown_Gym/scripts.pory"

# 71 "data/maps/DewfordTown_Gym/scripts.pory"
@ NOTE: A little confusingly, a larger animateflash param value is a smaller flash radius
# 72 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash1Trainer::
# 73 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 74 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 6
# 75 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 76 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 77 "data/maps/DewfordTown_Gym/scripts.pory"

# 78 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash2Trainers::
# 79 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 80 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 5
# 81 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 82 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 83 "data/maps/DewfordTown_Gym/scripts.pory"

# 84 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash3Trainers::
# 85 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 86 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 4
# 87 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 88 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 89 "data/maps/DewfordTown_Gym/scripts.pory"

# 90 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash4Trainers::
# 91 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 92 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 3
# 93 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 94 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 95 "data/maps/DewfordTown_Gym/scripts.pory"

# 96 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash5Trainers::
# 97 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 98 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 2
# 99 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 100 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 101 "data/maps/DewfordTown_Gym/scripts.pory"

# 102 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlash6Trainers::
# 103 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 104 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 1
# 105 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 106 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 107 "data/maps/DewfordTown_Gym/scripts.pory"

# 108 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_AnimateFlashFullBrightness::
# 109 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 110 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 0
# 111 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 112 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 113 "data/maps/DewfordTown_Gym/scripts.pory"

# 114 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CountTrainersDefeated::
# 115 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8000, 0
# 116 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_TAKAO, DewfordTown_Gym_EventScript_CheckJocelyn
# 117 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 118 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckJocelyn::
# 119 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JOCELYN, DewfordTown_Gym_EventScript_CheckLaura
# 120 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 121 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLaura::
# 122 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LAURA, DewfordTown_Gym_EventScript_CheckBrenden
# 123 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 124 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckBrenden::
# 125 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BRENDEN, DewfordTown_Gym_EventScript_CheckCristian
# 126 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 127 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckCristian::
# 128 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_CRISTIAN, DewfordTown_Gym_EventScript_CheckLilith
# 129 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 130 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CheckLilith::
# 131 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LILITH, DewfordTown_Gym_EventScript_StopCountingTrainers
# 132 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 133 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_StopCountingTrainers::
# 134 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 135 "data/maps/DewfordTown_Gym/scripts.pory"

# 136 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly::
# 137 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
# 138 "data/maps/DewfordTown_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 139 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_Gym_EventScript_BrawlyRematch
# 140 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, DewfordTown_Gym_EventScript_GiveBulkUp2
# 141 "data/maps/DewfordTown_Gym/scripts.pory"
    goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, DewfordTown_Gym_EventScript_BrawlyBeenGraniteCave
# 142 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 143 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 144 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 145 "data/maps/DewfordTown_Gym/scripts.pory"

# 146 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated::	
# 147 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_AnimateFlashFullBrightness
# 148 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 149 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 150 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 151 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 152 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 153 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 154 "data/maps/DewfordTown_Gym/scripts.pory"
    setflag FLAG_HIDE_GRANITE_CAVE_ENTHUSIASTS
# 155 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 156 "data/maps/DewfordTown_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 157 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 158 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 159 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_GiveBulkUp
# 160 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 161 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 162 "data/maps/DewfordTown_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 163 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
# 164 "data/maps/DewfordTown_Gym/scripts.pory"
	waitfanfare
# 165 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 166 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 167 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
# 168 "data/maps/DewfordTown_Gym/scripts.pory"
    setvar VAR_TEMP_0, 1
# 169 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 0
# 170 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 171 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP_VARIABLE, 27
# 172 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 173 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 174 "data/maps/DewfordTown_Gym/scripts.pory"

# 175 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp::
# 176 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 177 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
# 178 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 179 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 180 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 181 "data/maps/DewfordTown_Gym/scripts.pory"

# 182 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp2:
# 183 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 184 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 185 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 186 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 187 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 188 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 189 "data/maps/DewfordTown_Gym/scripts.pory"

# 190 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyRematch::
# 191 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
# 192 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
# 193 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 194 "data/maps/DewfordTown_Gym/scripts.pory"

# 195 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Takao::
# 196 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat, DewfordTown_Gym_EventScript_TakaoBrightenRoom
# 197 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 198 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 199 "data/maps/DewfordTown_Gym/scripts.pory"

# 200 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_TakaoBrightenRoom::
# 201 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 202 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 203 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 204 "data/maps/DewfordTown_Gym/scripts.pory"

# 205 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Jocelyn::
# 206 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat, DewfordTown_Gym_EventScript_JocelynBrightenRoom
# 207 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 208 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 209 "data/maps/DewfordTown_Gym/scripts.pory"

# 210 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_JocelynBrightenRoom::
# 211 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 212 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 213 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 214 "data/maps/DewfordTown_Gym/scripts.pory"

# 215 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Laura::
# 216 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat, DewfordTown_Gym_EventScript_LauraBrightenRoom
# 217 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 218 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 219 "data/maps/DewfordTown_Gym/scripts.pory"

# 220 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LauraBrightenRoom::
# 221 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 222 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 223 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 224 "data/maps/DewfordTown_Gym/scripts.pory"

# 225 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brenden::
# 226 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenIntro, DewfordTown_Gym_Text_BrendenDefeat, DewfordTown_Gym_EventScript_BrendenBrightenRoom
# 227 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
# 228 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 229 "data/maps/DewfordTown_Gym/scripts.pory"

# 230 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrendenBrightenRoom::
# 231 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 232 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 233 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 234 "data/maps/DewfordTown_Gym/scripts.pory"

# 235 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Cristian::
# 236 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat, DewfordTown_Gym_EventScript_CristianBrightenRoom
# 237 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 238 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 239 "data/maps/DewfordTown_Gym/scripts.pory"

# 240 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_CristianBrightenRoom::
# 241 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 242 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 243 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 244 "data/maps/DewfordTown_Gym/scripts.pory"

# 245 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Lilith::
# 246 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LILITH, DewfordTown_Gym_Text_LilithIntro, DewfordTown_Gym_Text_LilithDefeat, DewfordTown_Gym_EventScript_LilithBrightenRoom
# 247 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
# 248 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 249 "data/maps/DewfordTown_Gym/scripts.pory"

# 250 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LilithBrightenRoom::
# 251 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
# 252 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 253 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 254 "data/maps/DewfordTown_Gym/scripts.pory"

# 255 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide::
# 256 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 257 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 258 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
# 259 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 260 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 261 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 262 "data/maps/DewfordTown_Gym/scripts.pory"

# 263 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuidePostVictory::
# 264 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 265 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 266 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 267 "data/maps/DewfordTown_Gym/scripts.pory"

# 268 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LeftGymStatue::
# 269 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 270 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 271 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 272 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 273 "data/maps/DewfordTown_Gym/scripts.pory"

# 274 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RightGymStatue::
# 275 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 276 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 277 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 278 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 279 "data/maps/DewfordTown_Gym/scripts.pory"

# 280 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatueCertified::
# 281 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 282 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 283 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 284 "data/maps/DewfordTown_Gym/scripts.pory"

# 285 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatue::
# 286 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 287 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 288 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 289 "data/maps/DewfordTown_Gym/scripts.pory"

# 290 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuideAdvice:
# 291 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{COLOR RED}Guide{COLOR DARK_GRAY}: Yo, how's it going,\nChamp-to-be {PLAYER}?\pDewford's Gym Leader, Brawly,\ncommands Fighting-type Pokémon.\pGoing against him with Normal-type\nPokémon is asking for trouble.\pFighting-type Pokémon will lay a\nserious smackdown on Normal-type\lPokémon, so stay on your toes!\pWhat's worse, this Gym is as dark as\na the ocean floor.\pBut it will get brighter after\ndefeating the Trainers in your way.\pHey, OK, go for it!$"
# 292 "data/maps/DewfordTown_Gym/scripts.pory"

# 293 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuidePostVictory:
# 294 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{COLOR RED}Guide{COLOR DARK_GRAY}: Whoa!\nIt's turned too bright in here!\pYour future is bright, too!$"
# 295 "data/maps/DewfordTown_Gym/scripts.pory"

# 296 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoIntro:
# 297 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Might is right!\n"
# 298 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Come on!$"
# 299 "data/maps/DewfordTown_Gym/scripts.pory"

# 300 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoDefeat:
# 301 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Not enough power…$"
# 302 "data/maps/DewfordTown_Gym/scripts.pory"

# 303 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoPostBattle:
# 304 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your skill overcame my strength!\n"
# 305 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your technique is commendable!$"
# 306 "data/maps/DewfordTown_Gym/scripts.pory"

# 307 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynIntro:
# 308 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "There's no need for Brawly to be\n"
# 309 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "involved!\p"
# 310 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll crush you!$"
# 311 "data/maps/DewfordTown_Gym/scripts.pory"

# 312 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynDefeat:
# 313 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But… How?\n"
# 314 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How could I lose so easily?$"
# 315 "data/maps/DewfordTown_Gym/scripts.pory"

# 316 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynPostBattle:
# 317 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm not going to waste this loss.\n"
# 318 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll use it to motivate me to train!\p"
# 319 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "One day I'll become a Gym Leader…\p"
# 320 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "No, I'll become the Pokémon League\n"
# 321 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Champion!$"
# 322 "data/maps/DewfordTown_Gym/scripts.pory"

# 323 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraIntro:
# 324 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Don't you dare brush me off!\n"
# 325 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not my fault if you cry!$"
# 326 "data/maps/DewfordTown_Gym/scripts.pory"

# 327 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraDefeat:
# 328 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Waaaaaaah!\n"
# 329 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I lost!$"
# 330 "data/maps/DewfordTown_Gym/scripts.pory"

# 331 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraPostBattle:
# 332 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I battle in the dark to make my heart\n"
# 333 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "stronger.\p"
# 334 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But because it's so dark, I can never\n"
# 335 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "see Brawly's face…$"
# 336 "data/maps/DewfordTown_Gym/scripts.pory"

# 337 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithIntro:
# 338 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ufufu…\n"
# 339 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Are you stumbling around in the dark?$"
# 340 "data/maps/DewfordTown_Gym/scripts.pory"

# 341 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithDefeat:
# 342 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, you…\n"
# 343 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I don't want to know you!$"
# 344 "data/maps/DewfordTown_Gym/scripts.pory"

# 345 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithPostBattle:
# 346 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You deserve to stay lost and end up\n"
# 347 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "back at the entrance again!$"
# 348 "data/maps/DewfordTown_Gym/scripts.pory"

# 349 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenIntro:
# 350 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll show you the gumption of\n"
# 351 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "a sailing man!$"
# 352 "data/maps/DewfordTown_Gym/scripts.pory"

# 353 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenDefeat:
# 354 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How'd this happen?\n"
# 355 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not like me to lose this way!$"
# 356 "data/maps/DewfordTown_Gym/scripts.pory"

# 357 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenPostBattle:
# 358 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, aye! You're worthy of seeing\n"
# 359 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "our Gym Leader.$"
# 360 "data/maps/DewfordTown_Gym/scripts.pory"

# 361 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianIntro:
# 362 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you mean to pass, it has to be\n"
# 363 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "through me!$"
# 364 "data/maps/DewfordTown_Gym/scripts.pory"

# 365 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianDefeat:
# 366 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Grrrrr!\n"
# 367 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Vastly overpowered!$"
# 368 "data/maps/DewfordTown_Gym/scripts.pory"

# 369 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianPostBattle:
# 370 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You win!\n"
# 371 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Go after that Badge!$"
# 372 "data/maps/DewfordTown_Gym/scripts.pory"

# 373 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyIntro:
# 374 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{COLOR RED}Brawly{COLOR DARK_GRAY}: I'm Brawly!\nDewford's Gym Leader!\pI've been churned in the rough waves\nof these parts…\pAnd I've grown tough using the cave\nat the outskirts of this town as my\ltrainer ground, as well as using the\lequipment in this Gym.\pSo you want to challenge me?\pLet me see what you're made of!$"
# 375 "data/maps/DewfordTown_Gym/scripts.pory"

# 376 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyDefeat:
# 377 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoa, wow!\pYou made a much bigger splash than\nI expected!$"
# 378 "data/maps/DewfordTown_Gym/scripts.pory"

# 379 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ReceivedKnuckleBadge:
# 380 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "OK, you've got me.\nTake this Gym Badge!\p{PLAYER} received the {COLOR RED}Knuckle Badge{COLOR DARK_GRAY}\nfrom Brawly.$"
# 381 "data/maps/DewfordTown_Gym/scripts.pory"

# 382 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis:
# 383 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "The Knuckle Badge makes all Pokémon up\nto Level 30, even those you get in\ltrades, obey without question.\pHmmm…\nYou know what?\pI think you can make full use of this,\ntoo.\pI'm sure this will help your Pokémon\nbulk up muscle!$"
# 384 "data/maps/DewfordTown_Gym/scripts.pory"

# 385 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ExplainBulkUp:
# 386 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Bulk Up temporarily enhances the\nPokémon's muscle power.\pThe move boosts both Attack and\nDefense of the Pokémon.$"
# 387 "data/maps/DewfordTown_Gym/scripts.pory"

# 388 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RegisteredBrawly:
# 389 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Registered Gym Leader Brawly\n"
# 390 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the Pokénav.$"
# 391 "data/maps/DewfordTown_Gym/scripts.pory"

# 392 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostBattle:
# 393 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I can see your talent becoming a\ngiant wave that causes a storm of\lastonishment with Trainers one day!\pI look forward to the day when I can\nsurf your giant wave!$"
# 394 "data/maps/DewfordTown_Gym/scripts.pory"

# 395 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatue:
# 396 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Dewford Town Pokémon Gym$"
# 397 "data/maps/DewfordTown_Gym/scripts.pory"

# 398 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatueCertified:
# 399 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Dewford Town Pokémon Gym\p"
# 400 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Brawly's certified Trainers:\n"
# 401 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER}$"
# 402 "data/maps/DewfordTown_Gym/scripts.pory"

# 403 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPreRematch:
# 404 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Brawly: A wave may draw back, but it\n"
# 405 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 406 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 407 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 408 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Show me how much higher\n"
# 409 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "you've gone!$"
# 410 "data/maps/DewfordTown_Gym/scripts.pory"

# 411 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchDefeat:
# 412 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow!\n"
# 413 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Swamped again!$"
# 414 "data/maps/DewfordTown_Gym/scripts.pory"

# 415 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostRematch:
# 416 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Brawly: Battling is vast and it's deep.\n"
# 417 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You can't see the bottom.\l"
# 418 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's just like the sea of Hoenn!$"
# 419 "data/maps/DewfordTown_Gym/scripts.pory"

# 420 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons:
# 421 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Brawly: A wave may draw back, but it\n"
# 422 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 423 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 424 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 425 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh? You only have one Pokémon\n"
# 426 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "that can battle.\p"
# 427 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm sorry, but I'd like you to come back\n"
# 428 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "with at least two Pokémon.$"

DewfordTown_Gym_EventScript_BrawlyBeenGraniteCave::
# 433 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_TEMP_0, 1
	goto_if_eq DewfordTown_Gym_EventScript_BrawlyBeenGraniteCave_2
# 437 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_EventScript_BrawlyBeenGraniteCave_Text_1
DewfordTown_Gym_EventScript_BrawlyBeenGraniteCave_1:
# 439 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 440 "data/maps/DewfordTown_Gym/scripts.pory"
	release
	end

DewfordTown_Gym_EventScript_BrawlyBeenGraniteCave_2:
# 434 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_EventScript_BrawlyBeenGraniteCave_Text_0
# 435 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_TEMP_0, 0
	goto DewfordTown_Gym_EventScript_BrawlyBeenGraniteCave_1


DewfordTown_Gym_EventScript_BrawlyBeenGraniteCave_Text_0:
# 434 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I can see your talent becoming a\ngiant wave that causes a storm of\lastonishment with Trainers one day!\pI look forward to the day when I can\nsurf your giant wave!\pBy the way, have you been to\n{COLOR BLUE}Granite Cave{COLOR DARK_GRAY}?\pIt's located to the north of this\ntown.\pIt's full of fascinating stuff like rare\nstones and wall paintings thousands\lyears of old.\pMy friend {COLOR RED}Steven{COLOR DARK_GRAY} rushed to the cave\nafter I told him about it.$"

DewfordTown_Gym_EventScript_BrawlyBeenGraniteCave_Text_1:
# 437 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "By the way, have you been to\n{COLOR BLUE}Granite Cave{COLOR DARK_GRAY}?\pIt's located to the north of this\ntown.\pIt's full of fascinating stuff like rare\nstones and wall paintings thousands\lyears of old.\pMy friend {COLOR RED}Steven{COLOR DARK_GRAY} rushed to the cave\nafter I told him about it.$"
