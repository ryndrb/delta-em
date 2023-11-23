SootopolisCity_Gym_1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_Gym_1F_OnFrame
	map_script MAP_SCRIPT_ON_RESUME, SootopolisCity_Gym_1F_OnResume
	map_script MAP_SCRIPT_ON_LOAD, SootopolisCity_Gym_1F_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_Gym_1F_OnTransition
	.byte 0

SootopolisCity_Gym_1F_OnTransition:
	setvar VAR_ICE_STEP_COUNT, 1
	end

SootopolisCity_Gym_1F_OnResume:
	setstepcallback STEP_CB_SOOTOPOLIS_ICE
	end

SootopolisCity_Gym_1F_OnLoad:
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
	special SetSootopolisGymCrackedIceMetatiles
	end

SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles::
	goto_if_lt VAR_ICE_STEP_COUNT, 8, SootopolisCity_Gym_1F_EventScript_StopCheckingStairs  @ All stairs ice
	goto_if_lt VAR_ICE_STEP_COUNT, 28, SootopolisCity_Gym_1F_EventScript_OpenFirstStairs
	goto_if_lt VAR_ICE_STEP_COUNT, 67, SootopolisCity_Gym_1F_EventScript_OpenFirstAndSecondStairs
	setmetatile 8, 4, METATILE_SootopolisGym_Stairs, FALSE
	setmetatile 8, 5, METATILE_SootopolisGym_Stairs, FALSE
SootopolisCity_Gym_1F_EventScript_OpenFirstAndSecondStairs::
	setmetatile 8, 10, METATILE_SootopolisGym_Stairs, FALSE
	setmetatile 8, 11, METATILE_SootopolisGym_Stairs, FALSE
SootopolisCity_Gym_1F_EventScript_OpenFirstStairs::
	setmetatile 8, 15, METATILE_SootopolisGym_Stairs, FALSE
	setmetatile 8, 16, METATILE_SootopolisGym_Stairs, FALSE
SootopolisCity_Gym_1F_EventScript_StopCheckingStairs::
	return

SootopolisCity_Gym_1F_OnFrame:
	map_script_2 VAR_ICE_STEP_COUNT, 8, SootopolisCity_Gym_1F_EventScript_UnlockFirstStairs
	map_script_2 VAR_ICE_STEP_COUNT, 28, SootopolisCity_Gym_1F_EventScript_UnlockSecondStairs
	map_script_2 VAR_ICE_STEP_COUNT, 67, SootopolisCity_Gym_1F_EventScript_UnlockThirdStairs
	map_script_2 VAR_ICE_STEP_COUNT, 0, SootopolisCity_Gym_1F_EventScript_FallThroughIce
	.2byte 0

SootopolisCity_Gym_1F_EventScript_UnlockFirstStairs::
	addvar VAR_ICE_STEP_COUNT, 1
	delay 40
	playse SE_ICE_STAIRS
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
	special DrawWholeMapView
	end

SootopolisCity_Gym_1F_EventScript_UnlockSecondStairs::
	addvar VAR_ICE_STEP_COUNT, 1
	delay 40
	playse SE_ICE_STAIRS
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
	special DrawWholeMapView
	end

SootopolisCity_Gym_1F_EventScript_UnlockThirdStairs::
	addvar VAR_ICE_STEP_COUNT, 1
	delay 40
	playse SE_ICE_STAIRS
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
	special DrawWholeMapView
	end

SootopolisCity_Gym_1F_EventScript_FallThroughIce::
	lockall
	delay 20
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Gym_1F_Movement_FallThroughIce
	waitmovement 0
	playse SE_FALL
	delay 60
	warphole MAP_SOOTOPOLIS_CITY_GYM_B1F
	waitstate
	end

SootopolisCity_Gym_1F_Movement_FallThroughIce:
	set_invisible
	step_end

SootopolisCity_Gym_1F_EventScript_Wallace::
	trainerbattle_single TRAINER_WALLACE, SootopolisCity_Gym_1F_Text_WallaceIntro, SootopolisCity_Gym_1F_Text_WallaceDefeat, SootopolisCity_Gym_1F_EventScript_WallaceDefeated, NO_MUSIC
	//specialvar VAR_RESULT, ShouldTryRematchBattle
	//goto_if_eq VAR_RESULT, TRUE, SootopolisCity_Gym_1F_EventScript_WallaceRematch
	goto_if_unset FLAG_RECEIVED_TM_WATERFALL, SootopolisCity_Gym_1F_EventScript_GiveWaterfall2
	goto_if_unset FLAG_BADGE06_GET, SootopolisCity_Gym_1F_EventScript_GoGetFortreeBadge
	msgbox SootopolisCity_Gym_1F_Text_WallacePostBattle, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Gym_1F_EventScript_WallaceDefeated::
    msgbox SootopolisCity_Gym_1F_Text_WallaceAfterBattle, MSGBOX_DEFAULT
	message SootopolisCity_Gym_1F_Text_ReceivedRainBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox SootopolisCity_Gym_1F_Text_TakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
	setflag FLAG_BADGE08_GET
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
	setvar VAR_SOOTOPOLIS_CITY_STATE, 7
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
	setvar VAR_0x8008, 8
	call Common_EventScript_SetGymTrainers
	call SootopolisCity_Gym_1F_EventScript_GiveWaterfall
    msgbox SootopolisCity_Gym_1F_Text_WallacePostBattle, MSGBOX_DEFAULT
	closemessage
	delay 32
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox SootopolisCity_Gym_1F_Text_RegisteredWallace, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 32
	// setflag FLAG_REMATCH_WALLACE
	release
	end

SootopolisCity_Gym_1F_EventScript_GiveWaterfall::
	giveitem ITEM_HM_WATERFALL
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	msgbox SootopolisCity_Gym_1F_Text_ExplainWaterfall, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_WATERFALL
	return

SootopolisCity_Gym_1F_EventScript_GiveWaterfall2::
	giveitem ITEM_HM_WATERFALL
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox SootopolisCity_Gym_1F_Text_ExplainWaterfall, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_WATERFALL
	release
	end

SootopolisCity_Gym_1F_EventScript_GoGetFortreeBadge::
	msgbox SootopolisCity_Gym_1F_Text_GoGetFortreeBadge, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Gym_1F_EventScript_WallaceRematch::
	trainerbattle_rematch_double TRAINER_WALLACE, SootopolisCity_Gym_1F_Text_WallacePreRematch, SootopolisCity_Gym_1F_Text_WallaceRematchDefeat, SootopolisCity_Gym_1F_Text_WallaceRematchNeedTwoMons
	msgbox SootopolisCity_Gym_1F_Text_WallacePostRematch, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_1F_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_SOOTOPOLIS_GYM, SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory
	msgbox SootopolisCity_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory::
	msgbox SootopolisCity_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Gym_1F_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_GymStatueCertified
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
	end

SootopolisCity_Gym_1F_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_GymStatueCertified
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
	end

SootopolisCity_Gym_1F_EventScript_GymStatueCertified::
	msgbox SootopolisCity_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

SootopolisCity_Gym_1F_EventScript_GymStatue::
	msgbox SootopolisCity_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

SootopolisCity_Gym_1F_Text_GymGuideAdvice:
	.string "{COLOR RED}Guide{COLOR DARK_GRAY}: Yo, how's it going, Champ-to-be\n{PLAYER}?\pSootopolis's Gym Leader Wallace is\na master of Water-type Pokémon.\pAs you make your way to Wallace, the\nicy floor will hamper your progress.\pJust between you and me…\pWalk on each floor panel just once.\nThat's the trick!\lBe careful, and go for it!$"

SootopolisCity_Gym_1F_Text_GymGuidePostVictory:
	.string "{COLOR RED}Guide{COLOR DARK_GRAY}: Yow!\pYou've beaten Wallace, who was\nsupposedly the best in all of Hoenn!\pOK!\nCheck out your Trainer Card!\pIf you've gotten all the Badges, you're\nset for the Pokémon League challenge!$"

SootopolisCity_Gym_1F_Text_WallaceIntro:
	.string "{COLOR RED}Wallace{COLOR DARK_GRAY}: Allow me to formally introduce\nmyself.\pI am Wallace.\nThe Gym Leader of Sootopolis City.\pThere's something about you…\nA difference in your demeanor…\pI think I sense that in you.\pOur upcoming battle will make that all\nclear.\pNow, show me. Show me the power you\nwield with your Pokémon.\pAnd I, in turn, shall present you…\pwith a performance of illusions in\nwater…\pby me and my Pokémon!$"

@ NOTE: This defeat text actually causes a buffer overflow. It's about 50 bytes too long for
@ the gDisplayedStringBattle buffer that it's put into, and it stomps all over the gBattleTextBuffs
@ after, as well as the otherwise unused array after that. One wonders if that's the reason for
@ the existence of that unused array of ints.
SootopolisCity_Gym_1F_Text_WallaceDefeat:
	.string "Bravo!$"

SootopolisCity_Gym_1F_Text_WallaceAfterBattle:
    .string "I realize now your authenticity and\nmagnificence as a Pokémon Trainer.\pI find much joy in having met you and\nyour Pokémon.\pYou have proven yourself worth of the\nRain Badge.\pAccept it.\pHaving that Badge assures you\nfull obedience of all your Pokémon to\levery command you make.$"

SootopolisCity_Gym_1F_Text_ReceivedRainBadge:
	.string "{PLAYER} received the Rain Badge\n"
	.string "from Wallace.$"

SootopolisCity_Gym_1F_Text_TakeThis:
	.string "And so you never forget the battle we\nshared…\pHere…$"

SootopolisCity_Gym_1F_Text_ExplainWaterfall:
	.string "The HM I gave you contains Waterfall.\pIt allows you to smash into an\nopponent with the force required to\lclimb a waterfall itself.\lYes, it is a mighty move…\pAnd yet it also has a certain\nelegance and can sometimes cause\lopponents to flinch.\pNow, with the power of the\nRain Badge, you will become able to\luse this HM move, Waterfall, to scale\lwalls of cascading water.$"

SootopolisCity_Gym_1F_Text_RegisteredWallace:
	.string "Registered Gym Leader Wallace\n"
	.string "in the Pokénav.$"

SootopolisCity_Gym_1F_Text_WallacePostBattle:
	.string "{COLOR RED}Wallace{COLOR DARK_GRAY}: Many paths are open to you\nnow.\pOne path would take you to the Pokémon\nLeague.\pIt is the goal that all Trainers in\nHoenn aspire to reach after\lobtaining all eight Gym Badges.\pIf that is the path you chose, then\nyou must find your way to the island\lsaid to be the most remote in Hoenn:\l{COLOR BLUE}Ever Grande{COLOR DARK_GRAY}.\p…I will hope that a bright future\nwaits for you, whatever path it is you\lchoose.$"

SootopolisCity_Gym_1F_Text_GoGetFortreeBadge:
	.string "There remains but one Badge to\n"
	.string "obtain in Hoenn.\p"
	.string "If you wish to challenge the Pokémon\n"
	.string "League, you must obtain the last\l"
	.string "Badge from the Gym in Fortree.$"

SootopolisCity_Gym_1F_Text_GymStatue:
	.string "Sootopolis City Pokémon Gym$"

SootopolisCity_Gym_1F_Text_GymStatueCertified:
	.string "Sootopolis City Pokémon Gym\p"
	.string "Wallace's certified Trainers:\n"
	.string "{PLAYER}$"

SootopolisCity_Gym_1F_Text_WallacePreRematch:
	.string "Wallace: Ah, this Gym had returned to its\n"
	.string "usual state of serenity…\p"
	.string "But our young typhoon has returned\n"
	.string "to put us to the test again!\p"
	.string "Well, my friend, most certainly!\p"
	.string "I shall be delighted to dance with you\n"
	.string "as often as you wish!$"

SootopolisCity_Gym_1F_Text_WallaceRematchDefeat:
	.string "Ahahaha, you are the winner!\n"
	.string "You have defeated me again!$"

SootopolisCity_Gym_1F_Text_WallacePostRematch:
	.string "Wallace: If I told you to become my\n"
	.string "apprentice, you will refuse, I am sure.\p"
	.string "I would like to make a gift of my coat\n"
	.string "to you.\p"
	.string "But again, you will refuse.\n"
	.string "I imagine that to be so.\p"
	.string "And that, my friend, is a certain sign\n"
	.string "of nobility!$"

SootopolisCity_Gym_1F_Text_WallaceRematchNeedTwoMons:
	.string "Wallace: Ah, this Gym had returned to its\n"
	.string "usual state of serenity…\p"
	.string "But our young typhoon has returned\n"
	.string "to put us to the test again!\p"
	.string "Well, my friend, most certainly!\n"
	.string "I shall be delighted to dance with you…\p"
	.string "Ah, no, no, no.\n"
	.string "You have with you but one Pokémon.\p"
	.string "I wish that you would return with\n"
	.string "two, perhaps more, Pokémon, please.$"
