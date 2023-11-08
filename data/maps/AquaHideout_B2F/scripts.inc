.set LOCALID_MATT, 1
.set LOCALID_SUBMARINE, 4

AquaHideout_B2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AquaHideout_B2F_OnTransition
	.byte 0

AquaHideout_B2F_OnTransition:
	call_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, AquaHideout_B2F_EventScript_PreventMattNoticing
	end

AquaHideout_B2F_EventScript_PreventMattNoticing::
	setvar VAR_TEMP_1, 1
	return

AquaHideout_B2F_EventScript_Grunt4::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, AquaHideout_B2F_Text_Grunt4Intro, AquaHideout_B2F_Text_Grunt4Defeat, AquaHideout_B2F_EventScript_Grunt4Defeated
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end

AquaHideout_B2F_EventScript_Grunt4Defeated::
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_DEFAULT
	release
	end

AquaHideout_B2F_EventScript_Grunt6::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_6, AquaHideout_B2F_Text_Grunt6Intro, AquaHideout_B2F_Text_Grunt6Defeat
	msgbox AquaHideout_B2F_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
	end

AquaHideout_B2F_EventScript_Grunt8::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_8, AquaHideout_B2F_Text_Grunt8Intro, AquaHideout_B2F_Text_Grunt8Defeat
	msgbox AquaHideout_B2F_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
	end

AquaHideout_B2F_Text_Grunt4Intro:
	.string "Wahahah, I grew weary of waiting!\n"
	.string "You owe me a battle, too!$"

AquaHideout_B2F_Text_Grunt4Defeat:
	.string "Tired of waiting…\n"
	.string "Lost and dazed…$"

AquaHideout_B2F_Text_Grunt4PostBattle:
	.string "Boss…\n"
	.string "Is this good enough?$"

AquaHideout_B2F_Text_Grunt6Intro:
	.string "Warp panels, the Hideout's pride\n"
	.string "and joy!\p"
	.string "You're clueless about where you are,\n"
	.string "aren't you?\p"
	.string "Fluster and tire out the enemy, then\n"
	.string "lower the boom! That's our plan!$"

AquaHideout_B2F_Text_Grunt6Defeat:
	.string "What's wrong with you?\n"
	.string "You're not tired at all!$"

AquaHideout_B2F_Text_Grunt6PostBattle:
	.string "That reminds me… I can't remember\n"
	.string "where I put the Master Ball.\p"
	.string "If I fail to guard it, our Boss will\n"
	.string "chew me out…$"

AquaHideout_B2F_Text_Grunt8Intro:
	.string "When I joined Team Aqua, the first\n"
	.string "thing I had to learn was how these\l"
	.string "warp panels connected.$"

AquaHideout_B2F_Text_Grunt8Defeat:
	.string "I was too occupied thinking about\n"
	.string "the warp panels…$"

AquaHideout_B2F_Text_Grunt8PostBattle:
	.string "I'll have to learn about how I can\n"
	.string "battle more effectively…$"

AquaHideout_B2F_EventScript_MattNoticePlayer::
	lock
	delay 8
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceRight
	waitmovement LOCALID_MATT
	playse SE_PIN
	applymovement LOCALID_MATT, Common_Movement_ExclamationMark
	waitmovement LOCALID_MATT
	waitse
	msgbox AquaHideout_B2F_EventScript_MattNoticePlayer_Text_0
	closemessage
	setvar VAR_TEMP_1, 1
	release
	end


AquaHideout_B2F_EventScript_SubmarineEscape::
	lock
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, AquaHideout_B2F_EventScript_SubmarineEscape_2
	delay 8
	faceplayer
	msgbox AquaHideout_B2F_EventScript_SubmarineEscape_Text_1
	closemessage
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceLeft
	waitmovement LOCALID_MATT
	delay 16
	msgbox AquaHideout_B2F_EventScript_SubmarineEscape_Text_2
	closemessage
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceRight
	waitmovement LOCALID_MATT
	msgbox AquaHideout_B2F_EventScript_SubmarineEscape_Text_3
	closemessage
	delay 24
	msgbox AquaHideout_B2F_EventScript_SubmarineEscape_Text_4
	closemessage
	trainerbattle_no_intro TRAINER_MATT, AquaHideout_B2F_EventScript_SubmarineEscape_Text_5
	delay 32
	msgbox AquaHideout_B2F_EventScript_SubmarineEscape_Text_6
	closemessage
	delay 8
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceLeft
	waitmovement LOCALID_MATT
	delay 16
	applymovement LOCALID_SUBMARINE, AquaHideout_B2F_Movement_SumbarineDepartLeft
	waitmovement LOCALID_SUBMARINE
	removeobject LOCALID_SUBMARINE
	delay 48
	msgbox AquaHideout_B2F_EventScript_SubmarineEscape_Text_7
	closemessage
	delay 32
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceRight
	waitmovement LOCALID_MATT
	msgbox AquaHideout_B2F_EventScript_SubmarineEscape_Text_8
	closemessage
	setflag FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE
	setflag FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS
	release
	end

AquaHideout_B2F_EventScript_SubmarineEscape_2:
	msgbox AquaHideout_B2F_EventScript_SubmarineEscape_Text_0, MSGBOX_NPC
	end


AquaHideout_B2F_Movement_SumbarineDepartLeft:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

AquaHideout_B2F_EventScript_MattNoticePlayer_Text_0:
	.string "{COLOR RED}Matt{COLOR DARK_GRAY}: Oh! I knew you'd come!$"

AquaHideout_B2F_EventScript_SubmarineEscape_Text_0:
	.string "You took me out, so I'll give you an\nidea of what the world will be like if\lmy bro has his way.\pMy bro Archie is headed for the\nbig blue sea that stretches out from\lLilycove City.\pDeep beneath the surface is the\nSeafloor Cavern.\pThat's where the world my bro hopes to\ncreate…\pWhere the beginnings of the primordial\nworld will be felt…\pRegular people and Pokémon can't make\nit there, though.\pHow could you get there?\pWhy don't you look around in towns by\nthe sea and use your own thick head\lto think about it?$"

AquaHideout_B2F_EventScript_SubmarineEscape_Text_1:
	.string "{COLOR RED}Matt{COLOR DARK_GRAY}: You're the first punk ever\nto sneak into this hideout and make\lit this far!\pI expected nothing less from a crumb\nlike you!\pBut I've got some bad news for you!\pWe already finished upgrading the ship!$"

AquaHideout_B2F_EventScript_SubmarineEscape_Text_2:
	.string "Look at that drill!\pAs long as we've got that thing, we\ncould KO the seal over the Seafloor\lCavern with one punch!\pMy bro Archie's in the ship!\pCome at me!\nIf you take me out fast, you might be\lable to catch up to him!$"

AquaHideout_B2F_EventScript_SubmarineEscape_Text_3:
	.string "Before you do, though…\pWe need to settle once and for all who's\nstronger, you and your sorry Pokémon,\lor me and my not-so-sorry Pokémon!\p…Hoo!\p…Haaahh!\pI'm…\pHeating up!$"

AquaHideout_B2F_EventScript_SubmarineEscape_Text_4:
	.string "Hooah! Full on!\nI'm burning up!\pMe! You! Pokémon!\nMixing it up! Dueling!\pWell! Welll! Wellllll!\pLet's battle it out until we've got\nnothing left!$"

AquaHideout_B2F_EventScript_SubmarineEscape_Text_5:
	.string "Oho! That hurt just about exactly as\nmuch as I figured!$"

AquaHideout_B2F_EventScript_SubmarineEscape_Text_6:
	.string "Hah…\nHah… Hah…\pBro!\pIt's all…on you…now…$"

AquaHideout_B2F_EventScript_SubmarineEscape_Text_7:
	.string "While we were battling it out…\pMy bro Archie finished getting ready…\p…\pI have only one hope…\pFor my bro Archie to finish doing what\nhe set out to do…\pThat's all…\pMy bro Archie is everything to me…\pI live to serve my bro…$"

AquaHideout_B2F_EventScript_SubmarineEscape_Text_8:
	.string "…All right, then.\pYou took me out, so I'll give you an\nidea of what the world will be like if\lmy bro has his way.\pMy bro Archie is headed for the\nbig blue sea that stretches out from\lLilycove City.\pDeep beneath the surface is the\nSeafloor Cavern.\pThat's where the world my bro hopes to\ncreate…\pWhere the beginnings of the primordial\nworld will be felt…\pRegular people and Pokémon can't make\nit there, though.\pHow could you get there?\pWhy don't you look around in towns by\nthe sea and use your own thick head\lto think about it?$"
