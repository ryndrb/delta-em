RustboroCity_Gym_EventScript_Roxanne::
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Gym_EventScript_RoxanneRematch
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_GiveRockTomb
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
	release
	end

RustboroCity_Gym_EventScript_RoxanneDefeated::
	msgbox RustboroCity_Gym_Text_RoxanneGiveTM, MSGBOX_DEFAULT
	message RustboroCity_Gym_Text_ReceivedStoneBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_RUSTBORO_GYM
	setflag FLAG_BADGE01_GET
	setvar VAR_RUSTBORO_CITY_STATE, 1
	addvar VAR_PETALBURG_GYM_STATE, 1
	setvar VAR_0x8008, 1
	call Common_EventScript_SetGymTrainers
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
	goto RustboroCity_Gym_EventScript_GiveRockTomb
	end

RustboroCity_Gym_EventScript_GiveRockTomb::
	giveitem ITEM_TM_ROCK_TOMB
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
	release
	end

RustboroCity_Gym_EventScript_RoxanneRematch::
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_Josh::
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_Tommy::
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_Marc::
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

RustboroCity_Gym_EventScript_GymGuidePostVictory::
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

RustboroCity_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
	goto RustboroCity_Gym_EventScript_GymStatue
	end

RustboroCity_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
	goto RustboroCity_Gym_EventScript_GymStatue
	end

RustboroCity_Gym_EventScript_GymStatueCertified::
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

RustboroCity_Gym_EventScript_GymStatue::
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

RustboroCity_Gym_EventScript_RegisterRoxanne::
	lockall
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
	waitmessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
	releaseall
	end

RustboroCity_Gym_Text_GymGuideAdvice:
	.string "{COLOR RED}Guide{COLOR DARK_GRAY}: Yo, how's it going?\p"
	.string "Listen, my friend!\n"
	.string "Would you like to become the Champion?\p"
	.string "I'm no Trainer, not me, but I can\n"
	.string "sure give you winning advice.\p"
	.string "That's settled, then! We'll aim for the\n"
	.string "Pokémon Championship together!\p"
	.string "It's your job as a Trainer to collect\n"
	.string "Gym Badges, am I right?\p"
	.string "But Gym Leaders aren't pushovers!\p"
	.string "And that's where I come in!\n"
	.string "I'm here to provide expert advice!\p"
	.string "Roxanne, the Gym Leader, is a user\n"
	.string "of Rock-type Pokémon.\p"
	.string "The Rock type is very durable, but\n"
	.string "it can't stand Water-type and\l"
	.string "Grass-type moves.\p"
	.string "Come see me afterwards, if you beat\n"
	.string "the Gym Leader.\p"
	.string "Well, go for it!$"

RustboroCity_Gym_Text_GymGuidePostVictory:
	.string "Whoa! What a breathtaking victory!\n"
	.string "My cheering must've worked!\p"
	.string "Great!\n"
	.string "Check your Trainer Card.\p"
	.string "The Stone Badge you got should be\n"
	.string "properly recorded on it.\p"
	.string "In other words…\p"
	.string "You've climbed the first step on\n"
	.string "the stairs to the Championship!\p"
	.string "That's got to feel awesome!$"

RustboroCity_Gym_Text_JoshIntro:
	.string "Don't take us Gym Trainers lightly!\n"
	.string "I'll show you why we're better!$"

RustboroCity_Gym_Text_JoshDefeat:
	.string "You were too good for me…$"

RustboroCity_Gym_Text_JoshPostBattle:
	.string "You haven't seen anything of the Rock\n"
	.string "type's terrifying power!$"

RustboroCity_Gym_Text_TommyIntro:
	.string "If you can't beat me, you won't stand\n"
	.string "a chance against Roxanne!$"

RustboroCity_Gym_Text_TommyDefeat:
	.string "Wow! You've got some potential!$"

RustboroCity_Gym_Text_TommyPostBattle:
	.string "Roxanne is several times stronger\nthan me.\pYou'd better be on your guard!$"

RustboroCity_Gym_Text_MarcIntro:
	.string "We might be in the middle of town,\n"
	.string "but so what?\p"
	.string "My Rock Pokémon need room to\n"
	.string "rampage!$"

RustboroCity_Gym_Text_MarcDefeat:
	.string "Oh, man oh man!\n"
	.string "Our challenger is one feisty customer!$"

RustboroCity_Gym_Text_MarcPostBattle:
	.string "I have to hand it to our Leader.\p"
	.string "It took smarts and sense for her to\n"
	.string "pick the Rock type at her young age.$"

RustboroCity_Gym_Text_RoxanneIntro:
	.string "{COLOR RED}Roxanne{COLOR DARK_GRAY}: Just as I expected…\pI knew you and your Pokémon would\nbe able to go this far.\pNow, would you kindly demonstrate\nhow you battle with your Pokémon?$"

RustboroCity_Gym_Text_RoxanneDefeat:
	.string "So…I lost…\pIt seems that I still have much more\nto learn…$"

RustboroCity_Gym_Text_RoxanneGiveTM:
	.string "I understand.\pThe Pokémon League's rules state\nthat Trainers receive this if they\ldefeat a Gym Leader.\pPlease accept the official\nPokémon League Stone Badge.$"

RustboroCity_Gym_Text_ReceivedStoneBadge:
	.string "{PLAYER} received the {COLOR RED}Stone Badge{COLOR DARK_GRAY}\n"
	.string "from Roxanne.$"

RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
	.string "The Stone Badge enables Pokémon\nto use the HM move Cut outside of\lbattle.\pAll Pokémon up to Level 20, even\nthose you get in trades, will obey\lyou.\pAnd…\nPlease take this with you, too.$"

RustboroCity_Gym_Text_ExplainRockTomb:
	.string "The move Rock Tomb not only inflicts\ndamage by dropping rocks, it also\llower's the target's Speed.\pIf you use a TM, it instantly teaches\nthe move to a Pokémon.\pYou can use a TM as many times as\nyou want, so please try it out!$"

RustboroCity_Gym_Text_RoxannePostBattle:
	.string "{COLOR RED}Roxanne{COLOR DARK_GRAY}: Since you are so\nstrong, you should challenge other\lGym Leaders.\pBy battling many Trainers, you should\nlearn many things.$"

RustboroCity_Gym_Text_GymStatue:
	.string "Rustboro City Pokémon Gym$"

RustboroCity_Gym_Text_GymStatueCertified:
	.string "Rustboro City Pokémon Gym\p"
	.string "Roxanne's certified Trainers:\n"
	.string "{PLAYER}$"

RustboroCity_Gym_Text_RoxanneRegisterCall:
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "Roxanne: Oh, hello, {PLAYER}?\n"
	.string "This is Roxanne of Rustboro City.\p"
	.string "I heard from Brawly that you're\n"
	.string "moving up through the ranks of\l"
	.string "Trainers at an incredible clip.\p"
	.string "Well, I'd rather not think that\n"
	.string "I can't beat you.\p"
	.string "I promise, I will shape up my Gym\n"
	.string "so that you may challenge us again.\p"
	.string "I hope you'll be looking forward to\n"
	.string "that occasion as much as me!\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"

RustboroCity_Gym_Text_RegisteredRoxanne:
	.string "Registered Gym Leader Roxanne\n"
	.string "in the Pokénav.$"

RustboroCity_Gym_Text_RoxannePreRematch:
	.string "Roxanne: I'm so glad to see you again.\n"
	.string "I'm Roxanne, the Gym Leader here.\p"
	.string "I'm sure we've both experienced many\n"
	.string "battles since we last met.\p"
	.string "I would like to see how much better\n"
	.string "we've become. Let us battle!$"

RustboroCity_Gym_Text_RoxanneRematchDefeat:
	.string "Grr…\n"
	.string "Again, I have lost…$"

RustboroCity_Gym_Text_RoxannePostRematch:
	.string "Roxanne: I still have much to learn\n"
	.string "when it comes to battling Pokémon.\p"
	.string "That awareness makes me love battling\n"
	.string "all that much more!$"

RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
	.string "Roxanne: I'm so glad to see you again.\n"
	.string "I'm Roxanne, the Gym Leader here.\p"
	.string "I'm sure we've both experienced many\n"
	.string "battles since we last met.\p"
	.string "I would like to see how much better\n"
	.string "we've become…\p"
	.string "Oh, no…\n"
	.string "You only have one Pokémon with you?\p"
	.string "Please return with at least one more\n"
	.string "Pokémon.$"

RustboroCity_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_Gym_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

RustboroCity_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_RUSTBORO_GYM_STATE, 0, RustboroCity_Gym_EventScript_WelcomeToGym
	.2byte 0


RustboroCity_Gym_OnTransition::
	compare VAR_RUSTBORO_GYM_STATE, 0
	goto_if_eq RustboroCity_Gym_OnTransition_2
RustboroCity_Gym_OnTransition_1:
	end

RustboroCity_Gym_OnTransition_2:
	setobjectxyperm 1, 5, 17
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	goto RustboroCity_Gym_OnTransition_1


RustboroCity_Gym_EventScript_WelcomeToGym::
	lock
	delay 16
	applymovement 1, Common_Movement_WalkInPlaceDown
	delay 4
	applymovement 4, Common_Movement_WalkInPlaceRight
	waitmovement 4
	msgbox RustboroCity_Gym_EventScript_WelcomeToGym_Text_0
	closemessage
	delay 16
	applymovement 1, RustboroCity_Gym_Movement_RoxanneHeadsBack
	fadescreenswapbuffers FADE_TO_BLACK
	delay 16
	waitmovement 1
	fadescreenswapbuffers FADE_FROM_BLACK
	setobjectxy 1, 5, 2
	turnobject 1, DIR_SOUTH
	applymovement 4, Common_Movement_WalkInPlaceDown
	waitmovement 4
	setvar VAR_RUSTBORO_GYM_STATE, 1
	release
	end


RustboroCity_Gym_Movement_RoxanneHeadsBack:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

RustboroCity_Gym_EventScript_WelcomeToGym_Text_0:
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Hello.\pYou must be a new challenger.\pI am {COLOR RED}Roxanne{COLOR DARK_GRAY}, the Rustboro City\nPokémon Gym Leader.\pI became a Gym Leader so that\nI may apply in battle all that I've\llearned at the Pokémon Trainers'\lSchool.\pIf you defeat me in a Pokémon\nbattle, I'll present you with a Gym\lBadge as proof of your strength as\la Trainer.\pPlease take up the challenge.\pI look forward to seeing you as a\nchallenger.\pUntil then, farewell.$"
