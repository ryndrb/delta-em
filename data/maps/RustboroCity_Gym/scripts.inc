# 1 "data/maps/RustboroCity_Gym/scripts.pory"

# 2 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Roxanne::
# 3 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
# 4 "data/maps/RustboroCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 5 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Gym_EventScript_RoxanneRematch
# 6 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_GiveRockTomb
# 7 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 8 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 9 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 10 "data/maps/RustboroCity_Gym/scripts.pory"

# 11 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDefeated::
# 12 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxanneGiveTM, MSGBOX_DEFAULT
# 13 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 14 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 15 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 16 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 17 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 18 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 19 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 20 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 21 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 22 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_LEVEL_CAP_VARIABLE, 24
# 23 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 24 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 25 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
# 26 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 27 "data/maps/RustboroCity_Gym/scripts.pory"

# 28 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveRockTomb::
# 29 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM39
# 30 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 31 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 33 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 34 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 35 "data/maps/RustboroCity_Gym/scripts.pory"

# 36 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematch::
# 37 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
# 38 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 39 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 40 "data/maps/RustboroCity_Gym/scripts.pory"

# 41 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 42 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 43 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 45 "data/maps/RustboroCity_Gym/scripts.pory"

# 46 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 47 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 48 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 50 "data/maps/RustboroCity_Gym/scripts.pory"

# 51 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 52 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 53 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 55 "data/maps/RustboroCity_Gym/scripts.pory"

# 56 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 57 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 58 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 59 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 60 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 61 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 62 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 63 "data/maps/RustboroCity_Gym/scripts.pory"

# 64 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 65 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 66 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 67 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 68 "data/maps/RustboroCity_Gym/scripts.pory"

# 69 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 70 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 71 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 72 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 73 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 74 "data/maps/RustboroCity_Gym/scripts.pory"

# 75 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 76 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 77 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 78 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 79 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 80 "data/maps/RustboroCity_Gym/scripts.pory"

# 81 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 82 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 83 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 84 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 85 "data/maps/RustboroCity_Gym/scripts.pory"

# 86 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 87 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 88 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 89 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 90 "data/maps/RustboroCity_Gym/scripts.pory"

# 91 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RegisterRoxanne::
# 92 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 93 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 94 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 95 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 96 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 97 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 98 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 99 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 100 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 101 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 102 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 103 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 104 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 105 "data/maps/RustboroCity_Gym/scripts.pory"

# 106 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice:
# 107 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{COLOR RED}Guide{COLOR DARK_GRAY}: Yo, how's it going?\p"
# 108 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Listen, my friend!\n"
# 109 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you like to become the Champion?\p"
# 110 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm no Trainer, not me, but I can\n"
# 111 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "sure give you winning advice.\p"
# 112 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's settled, then! We'll aim for the\n"
# 113 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon Championship together!\p"
# 114 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It's your job as a Trainer to collect\n"
# 115 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Gym Badges, am I right?\p"
# 116 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "But Gym Leaders aren't pushovers!\p"
# 117 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "And that's where I come in!\n"
# 118 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm here to provide expert advice!\p"
# 119 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne, the Gym Leader, is a user\n"
# 120 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "of Rock-type Pokémon.\p"
# 121 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Rock type is very durable, but\n"
# 122 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "it can't stand Water-type and\l"
# 123 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grass-type moves.\p"
# 124 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Come see me afterwards, if you beat\n"
# 125 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the Gym Leader.\p"
# 126 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, go for it!$"
# 127 "data/maps/RustboroCity_Gym/scripts.pory"

# 128 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory:
# 129 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\n"
# 130 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My cheering must've worked!\p"
# 131 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Great!\n"
# 132 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Check your Trainer Card.\p"
# 133 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Stone Badge you got should be\n"
# 134 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "properly recorded on it.\p"
# 135 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "In other words…\p"
# 136 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You've climbed the first step on\n"
# 137 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the stairs to the Championship!\p"
# 138 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's got to feel awesome!$"
# 139 "data/maps/RustboroCity_Gym/scripts.pory"

# 140 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro:
# 141 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Don't take us Gym Trainers lightly!\n"
# 142 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'll show you why we're better!$"
# 143 "data/maps/RustboroCity_Gym/scripts.pory"

# 144 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat:
# 145 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You were too good for me…$"
# 146 "data/maps/RustboroCity_Gym/scripts.pory"

# 147 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle:
# 148 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You haven't seen anything of the Rock\n"
# 149 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "type's terrifying power!$"
# 150 "data/maps/RustboroCity_Gym/scripts.pory"

# 151 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyIntro:
# 152 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you can't beat me, you won't stand\n"
# 153 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a chance against Roxanne!$"
# 154 "data/maps/RustboroCity_Gym/scripts.pory"

# 155 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyDefeat:
# 156 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wow! You've got some potential!$"
# 157 "data/maps/RustboroCity_Gym/scripts.pory"

# 158 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyPostBattle:
# 159 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne is several times stronger\nthan me.\pYou'd better be on your guard!$"
# 160 "data/maps/RustboroCity_Gym/scripts.pory"

# 161 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro:
# 162 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "We might be in the middle of town,\n"
# 163 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "but so what?\p"
# 164 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My Rock Pokémon need room to\n"
# 165 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rampage!$"
# 166 "data/maps/RustboroCity_Gym/scripts.pory"

# 167 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat:
# 168 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, man oh man!\n"
# 169 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Our challenger is one feisty customer!$"
# 170 "data/maps/RustboroCity_Gym/scripts.pory"

# 171 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle:
# 172 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have to hand it to our Leader.\p"
# 173 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It took smarts and sense for her to\n"
# 174 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "pick the Rock type at her young age.$"
# 175 "data/maps/RustboroCity_Gym/scripts.pory"

# 176 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneIntro:
# 177 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{COLOR RED}Roxanne{COLOR DARK_GRAY}: Just as I expected…\pI knew you and your Pokémon would be\nable to go this far.\pNow, would you kindly demonstrate how\nyou battle with your Pokémon?$"
# 178 "data/maps/RustboroCity_Gym/scripts.pory"

# 179 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneDefeat:
# 180 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "So…I lost…\pIt seems that I still have much more\nto learn…$"
# 181 "data/maps/RustboroCity_Gym/scripts.pory"

# 182 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneGiveTM:
# 183 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I understand.\pThe Pokémon League's rules state that\nTrainers receive this if they defeat\la Gym Leader.\pPlease accept the official Pokémon\nLeague Stone Badge.$"
# 184 "data/maps/RustboroCity_Gym/scripts.pory"

# 185 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge:
# 186 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the {COLOR RED}Stone Badge{COLOR DARK_GRAY}\n"
# 187 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "from Roxanne.$"
# 188 "data/maps/RustboroCity_Gym/scripts.pory"

# 189 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
# 190 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Stone Badge enables Pokémon\nto use the HM move Cut outside of\lbattle.\pAll Pokémon up to Level 20, even those\nyou get in trades, will obey you.\pAnd…\nPlease take this with you, too.$"
# 191 "data/maps/RustboroCity_Gym/scripts.pory"

# 192 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainRockTomb:
# 193 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The move Rock Tomb not only inflicts\ndamage by dropping rocks, it also\llower's the target's Speed.\pIf you use a TM, it instantly teaches\nthe move to a Pokémon.\pYou can use a TM as many times as you\nwant, so please try it out!$"
# 194 "data/maps/RustboroCity_Gym/scripts.pory"

# 195 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostBattle:
# 196 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{COLOR RED}Roxanne{COLOR DARK_GRAY}: Since you are so strong, you\nshould challenge other Gym Leaders.\pBy battling many Trainers, you should\nlearn many things.$"
# 197 "data/maps/RustboroCity_Gym/scripts.pory"

# 198 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue:
# 199 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Rustboro City Pokémon Gym$"
# 200 "data/maps/RustboroCity_Gym/scripts.pory"

# 201 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified:
# 202 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Rustboro City Pokémon Gym\p"
# 203 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne's certified Trainers:\n"
# 204 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 205 "data/maps/RustboroCity_Gym/scripts.pory"

# 206 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRegisterCall:
# 207 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 208 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Beep!\p"
# 209 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: Oh, hello, {PLAYER}?\n"
# 210 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This is Roxanne of Rustboro City.\p"
# 211 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I heard from Brawly that you're\n"
# 212 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "moving up through the ranks of\l"
# 213 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Trainers at an incredible clip.\p"
# 214 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, I'd rather not think that\n"
# 215 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I can't beat you.\p"
# 216 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I promise, I will shape up my Gym\n"
# 217 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so that you may challenge us again.\p"
# 218 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I hope you'll be looking forward to\n"
# 219 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that occasion as much as me!\p"
# 220 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 221 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Click!$"
# 222 "data/maps/RustboroCity_Gym/scripts.pory"

# 223 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RegisteredRoxanne:
# 224 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Registered Gym Leader Roxanne\n"
# 225 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "in the Pokénav.$"
# 226 "data/maps/RustboroCity_Gym/scripts.pory"

# 227 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePreRematch:
# 228 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: I'm so glad to see you again.\n"
# 229 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm Roxanne, the Gym Leader here.\p"
# 230 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 231 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 232 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 233 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become. Let us battle!$"
# 234 "data/maps/RustboroCity_Gym/scripts.pory"

# 235 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchDefeat:
# 236 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
# 237 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Again, I have lost…$"
# 238 "data/maps/RustboroCity_Gym/scripts.pory"

# 239 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostRematch:
# 240 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: I still have much to learn\n"
# 241 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "when it comes to battling Pokémon.\p"
# 242 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That awareness makes me love battling\n"
# 243 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "all that much more!$"
# 244 "data/maps/RustboroCity_Gym/scripts.pory"

# 245 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
# 246 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: I'm so glad to see you again.\n"
# 247 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm Roxanne, the Gym Leader here.\p"
# 248 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 249 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 250 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 251 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become…\p"
# 252 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, no…\n"
# 253 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You only have one Pokémon with you?\p"
# 254 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please return with at least one more\n"
# 255 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon.$"

RustboroCity_Gym_MapScripts::
# 266 "data/maps/RustboroCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_Gym_OnTransition
# 263 "data/maps/RustboroCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

RustboroCity_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 264 "data/maps/RustboroCity_Gym/scripts.pory"
	map_script_2 VAR_RUSTBORO_GYM_STATE, 0, RustboroCity_Gym_EventScript_WelcomeToGym
	.2byte 0


RustboroCity_Gym_OnTransition::
# 270 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_RUSTBORO_GYM_STATE, 0
	goto_if_eq RustboroCity_Gym_OnTransition_2
RustboroCity_Gym_OnTransition_1:
	end

RustboroCity_Gym_OnTransition_2:
# 271 "data/maps/RustboroCity_Gym/scripts.pory"
	setobjectxyperm 1, 5, 17
# 272 "data/maps/RustboroCity_Gym/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	goto RustboroCity_Gym_OnTransition_1


RustboroCity_Gym_EventScript_WelcomeToGym::
# 278 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 279 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 16
# 280 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 281 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 4
# 282 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceRight
# 283 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 4
# 284 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_EventScript_WelcomeToGym_Text_0
# 285 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 286 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 16
# 287 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement 1, RustboroCity_Gym_Movement_RoxanneHeadsBack
# 288 "data/maps/RustboroCity_Gym/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 289 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 16
# 290 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 1
# 291 "data/maps/RustboroCity_Gym/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 292 "data/maps/RustboroCity_Gym/scripts.pory"
	setobjectxy 1, 5, 2
# 293 "data/maps/RustboroCity_Gym/scripts.pory"
	turnobject 1, DIR_SOUTH
# 294 "data/maps/RustboroCity_Gym/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceDown
# 295 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmovement 4
# 296 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_GYM_STATE, 1
# 297 "data/maps/RustboroCity_Gym/scripts.pory"
	release
	end


# 301 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Movement_RoxanneHeadsBack:
# 302 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_up
# 302 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_up
# 302 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_up
# 302 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_up
# 302 "data/maps/RustboroCity_Gym/scripts.pory"
	walk_up
	step_end

RustboroCity_Gym_EventScript_WelcomeToGym_Text_0:
# 284 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Hello.\pYou must be a new challenger.\pI am {COLOR RED}Roxanne{COLOR DARK_GRAY}, the Rustboro City\nPokémon Gym Leader.\pI became a Gym Leader so that I may\napply in battle all that I've learned\lat the Pokémon Trainers' School.\pIf you defeat me in a Pokémon battle,\nI'll present you with a Gym Badge as\lproof of your strength as a Trainer.\pPlease take up the challenge.\pI look forward to seeing you as a\nchallenger.\pUntil then, farewell.$"
