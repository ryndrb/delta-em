# 1 "data/maps/AquaHideout_B2F/scripts.pory"

# 2 "data/maps/AquaHideout_B2F/scripts.pory"
.set LOCALID_MATT, 1
# 3 "data/maps/AquaHideout_B2F/scripts.pory"
.set LOCALID_SUBMARINE, 4
# 4 "data/maps/AquaHideout_B2F/scripts.pory"

# 5 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_MapScripts::
# 6 "data/maps/AquaHideout_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AquaHideout_B2F_OnTransition
# 7 "data/maps/AquaHideout_B2F/scripts.pory"
	.byte 0
# 8 "data/maps/AquaHideout_B2F/scripts.pory"

# 9 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_OnTransition:
# 10 "data/maps/AquaHideout_B2F/scripts.pory"
	call_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, AquaHideout_B2F_EventScript_PreventMattNoticing
# 11 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 12 "data/maps/AquaHideout_B2F/scripts.pory"

# 13 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_PreventMattNoticing::
# 14 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 15 "data/maps/AquaHideout_B2F/scripts.pory"
	return
# 16 "data/maps/AquaHideout_B2F/scripts.pory"

# 17 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4::
# 18 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, AquaHideout_B2F_Text_Grunt4Intro, AquaHideout_B2F_Text_Grunt4Defeat, AquaHideout_B2F_EventScript_Grunt4Defeated
# 19 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 20 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 21 "data/maps/AquaHideout_B2F/scripts.pory"

# 22 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt4Defeated::
# 23 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt4PostBattle, MSGBOX_DEFAULT
# 24 "data/maps/AquaHideout_B2F/scripts.pory"
	release
# 25 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 26 "data/maps/AquaHideout_B2F/scripts.pory"

# 27 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt6::
# 28 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_6, AquaHideout_B2F_Text_Grunt6Intro, AquaHideout_B2F_Text_Grunt6Defeat
# 29 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
# 30 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 31 "data/maps/AquaHideout_B2F/scripts.pory"

# 32 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_EventScript_Grunt8::
# 33 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_8, AquaHideout_B2F_Text_Grunt8Intro, AquaHideout_B2F_Text_Grunt8Defeat
# 34 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
# 35 "data/maps/AquaHideout_B2F/scripts.pory"
	end
# 36 "data/maps/AquaHideout_B2F/scripts.pory"

# 37 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4Intro:
# 38 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Wahahah, I grew weary of waiting!\n"
# 39 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You owe me a battle, too!$"
# 40 "data/maps/AquaHideout_B2F/scripts.pory"

# 41 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4Defeat:
# 42 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Tired of waiting…\n"
# 43 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Lost and dazed…$"
# 44 "data/maps/AquaHideout_B2F/scripts.pory"

# 45 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt4PostBattle:
# 46 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Boss…\n"
# 47 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Is this good enough?$"
# 48 "data/maps/AquaHideout_B2F/scripts.pory"

# 49 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6Intro:
# 50 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Warp panels, the Hideout's pride\n"
# 51 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "and joy!\p"
# 52 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You're clueless about where you are,\n"
# 53 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "aren't you?\p"
# 54 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Fluster and tire out the enemy, then\n"
# 55 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "lower the boom! That's our plan!$"
# 56 "data/maps/AquaHideout_B2F/scripts.pory"

# 57 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6Defeat:
# 58 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "What's wrong with you?\n"
# 59 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You're not tired at all!$"
# 60 "data/maps/AquaHideout_B2F/scripts.pory"

# 61 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt6PostBattle:
# 62 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "That reminds me… I can't remember\n"
# 63 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "where I put the Master Ball.\p"
# 64 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "If I fail to guard it, our Boss will\n"
# 65 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "chew me out…$"
# 66 "data/maps/AquaHideout_B2F/scripts.pory"

# 67 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8Intro:
# 68 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "When I joined Team Aqua, the first\n"
# 69 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "thing I had to learn was how these\l"
# 70 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "warp panels connected.$"
# 71 "data/maps/AquaHideout_B2F/scripts.pory"

# 72 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8Defeat:
# 73 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I was too occupied thinking about\n"
# 74 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "the warp panels…$"
# 75 "data/maps/AquaHideout_B2F/scripts.pory"

# 76 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Text_Grunt8PostBattle:
# 77 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "I'll have to learn about how I can\n"
# 78 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "battle more effectively…$"

AquaHideout_B2F_EventScript_MattNoticePlayer::
# 83 "data/maps/AquaHideout_B2F/scripts.pory"
	lock
# 84 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 8
# 85 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceRight
# 86 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement LOCALID_MATT
# 87 "data/maps/AquaHideout_B2F/scripts.pory"
	playse SE_PIN
# 88 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_ExclamationMark
# 89 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement LOCALID_MATT
# 90 "data/maps/AquaHideout_B2F/scripts.pory"
	waitse
# 91 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_EventScript_MattNoticePlayer_Text_0
# 92 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 93 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 94 "data/maps/AquaHideout_B2F/scripts.pory"
	release
	end


AquaHideout_B2F_EventScript_SubmarineEscape::
# 99 "data/maps/AquaHideout_B2F/scripts.pory"
	lock
# 100 "data/maps/AquaHideout_B2F/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, AquaHideout_B2F_EventScript_SubmarineEscape_2
# 104 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 8
# 105 "data/maps/AquaHideout_B2F/scripts.pory"
	faceplayer
# 106 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_EventScript_SubmarineEscape_Text_1
# 107 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 108 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceLeft
# 109 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement LOCALID_MATT
# 110 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 16
# 111 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_EventScript_SubmarineEscape_Text_2
# 112 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 113 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceRight
# 114 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement LOCALID_MATT
# 115 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_EventScript_SubmarineEscape_Text_3
# 116 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 117 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 24
# 118 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_EventScript_SubmarineEscape_Text_4
# 119 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 120 "data/maps/AquaHideout_B2F/scripts.pory"
	trainerbattle_no_intro TRAINER_MATT, AquaHideout_B2F_EventScript_SubmarineEscape_Text_5
# 121 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 32
# 122 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_EventScript_SubmarineEscape_Text_6
# 123 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 124 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 8
# 125 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceLeft
# 126 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement LOCALID_MATT
# 127 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 16
# 128 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement LOCALID_SUBMARINE, AquaHideout_B2F_Movement_SumbarineDepartLeft
# 129 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement LOCALID_SUBMARINE
# 130 "data/maps/AquaHideout_B2F/scripts.pory"
	removeobject LOCALID_SUBMARINE
# 131 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 48
# 132 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_EventScript_SubmarineEscape_Text_7
# 133 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 134 "data/maps/AquaHideout_B2F/scripts.pory"
	delay 32
# 135 "data/maps/AquaHideout_B2F/scripts.pory"
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceRight
# 136 "data/maps/AquaHideout_B2F/scripts.pory"
	waitmovement LOCALID_MATT
# 137 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_EventScript_SubmarineEscape_Text_8
# 138 "data/maps/AquaHideout_B2F/scripts.pory"
	closemessage
# 139 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE
# 140 "data/maps/AquaHideout_B2F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS
# 141 "data/maps/AquaHideout_B2F/scripts.pory"
	setvar VAR_LEVEL_CAP_VARIABLE, 67
# 142 "data/maps/AquaHideout_B2F/scripts.pory"
	release
	end

AquaHideout_B2F_EventScript_SubmarineEscape_2:
# 101 "data/maps/AquaHideout_B2F/scripts.pory"
	msgbox AquaHideout_B2F_EventScript_SubmarineEscape_Text_0, MSGBOX_NPC
	end


# 146 "data/maps/AquaHideout_B2F/scripts.pory"
AquaHideout_B2F_Movement_SumbarineDepartLeft:
# 147 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 147 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 147 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 147 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
# 147 "data/maps/AquaHideout_B2F/scripts.pory"
	walk_left
	step_end

AquaHideout_B2F_EventScript_MattNoticePlayer_Text_0:
# 91 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "{COLOR RED}Matt{COLOR DARK_GRAY}: Oh! I knew you'd come!$"

AquaHideout_B2F_EventScript_SubmarineEscape_Text_0:
# 101 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "You took me out, so I'll give you an\nidea of what the world will be like if\lmy bro has his way.\pMy bro Archie is headed for the\nbig blue sea that stretches out from\lLilycove City.\pDeep beneath the surface is the\nSeafloor Cavern.\pThat's where the world my bro hopes to\ncreate…\pWhere the beginnings of the primordial\nworld will be felt…\pRegular people and Pokémon can't make\nit there, though.\pHow could you get there?\pWhy don't you look around in towns by\nthe sea and use your own thick head\lto think about it?$"

AquaHideout_B2F_EventScript_SubmarineEscape_Text_1:
# 106 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "{COLOR RED}Matt{COLOR DARK_GRAY}: You're the first punk ever\nto sneak into this hideout and make\lit this far!\pI expected nothing less from a crumb\nlike you!\pBut I've got some bad news for you!\pWe already finished upgrading the ship!$"

AquaHideout_B2F_EventScript_SubmarineEscape_Text_2:
# 111 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Look at that drill!\pAs long as we've got that thing, we\ncould KO the seal over the Seafloor\lCavern with one punch!\pMy bro Archie's in the ship!\pCome at me!\nIf you take me out fast, you might be\lable to catch up to him!$"

AquaHideout_B2F_EventScript_SubmarineEscape_Text_3:
# 115 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Before you do, though…\pWe need to settle once and for all who's\nstronger, you and your sorry Pokémon,\lor me and my not-so-sorry Pokémon!\p…Hoo!\p…Haaahh!\pI'm…\pHeating up!$"

AquaHideout_B2F_EventScript_SubmarineEscape_Text_4:
# 118 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hooah! Full on!\nI'm burning up!\pMe! You! Pokémon!\nMixing it up! Dueling!\pWell! Welll! Wellllll!\pLet's battle it out until we've got\nnothing left!$"

AquaHideout_B2F_EventScript_SubmarineEscape_Text_5:
# 120 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Oho! That hurt just about exactly as\nmuch as I figured!$"

AquaHideout_B2F_EventScript_SubmarineEscape_Text_6:
# 122 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "Hah…\nHah… Hah…\pBro!\pIt's all…on you…now…$"

AquaHideout_B2F_EventScript_SubmarineEscape_Text_7:
# 132 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "While we were battling it out…\pMy bro Archie finished getting ready…\p…\pI have only one hope…\pFor my bro Archie to finish doing what\nhe set out to do…\pThat's all…\pMy bro Archie is everything to me…\pI live to serve my bro…$"

AquaHideout_B2F_EventScript_SubmarineEscape_Text_8:
# 137 "data/maps/AquaHideout_B2F/scripts.pory"
	.string "…All right, then.\pYou took me out, so I'll give you an\nidea of what the world will be like if\lmy bro has his way.\pMy bro Archie is headed for the\nbig blue sea that stretches out from\lLilycove City.\pDeep beneath the surface is the\nSeafloor Cavern.\pThat's where the world my bro hopes to\ncreate…\pWhere the beginnings of the primordial\nworld will be felt…\pRegular people and Pokémon can't make\nit there, though.\pHow could you get there?\pWhy don't you look around in towns by\nthe sea and use your own thick head\lto think about it?$"
