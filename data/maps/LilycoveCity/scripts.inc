.set LOCALID_RIVAL, 17
.set LOCALID_WOMAN_1, 19
.set LOCALID_MAN_1, 20

LilycoveCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, LilycoveCity_OnLoad
	.byte 0

LilycoveCity_OnTransition:
	setflag FLAG_VISITED_LILYCOVE_CITY
	setvar VAR_CONTEST_HALL_STATE, 0
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
    call_if_set FLAG_MET_RIVAL_LILYCOVE, LilycoveCity_EventScript_RivalSceneDone
	call Common_EventScript_SetupRivalGfxId
	end

LilycoveCity_EventScript_RivalSceneDone::
    setvar VAR_TEMP_2, 1
    return

LilycoveCity_OnLoad:
	call_if_unset FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_SetWailmerMetatiles
	end

LilycoveCity_EventScript_SetWailmerMetatiles::
	setmetatile 76, 12, METATILE_Lilycove_Wailmer0, TRUE
	setmetatile 77, 12, METATILE_Lilycove_Wailmer1, TRUE
	setmetatile 76, 13, METATILE_Lilycove_Wailmer2, TRUE
	setmetatile 77, 13, METATILE_Lilycove_Wailmer3, TRUE
	setmetatile 76, 14, METATILE_Lilycove_Wailmer0_Alt, TRUE
	setmetatile 77, 14, METATILE_Lilycove_Wailmer1_Alt, TRUE
	setmetatile 76, 15, METATILE_Lilycove_Wailmer2, TRUE
	setmetatile 77, 15, METATILE_Lilycove_Wailmer3, TRUE
	setmetatile 77, 16, METATILE_Lilycove_Wailmer0_Alt, TRUE
	setmetatile 78, 16, METATILE_Lilycove_Wailmer1_Alt, TRUE
	setmetatile 77, 17, METATILE_Lilycove_Wailmer2, TRUE
	setmetatile 78, 17, METATILE_Lilycove_Wailmer3, TRUE
	return

LilycoveCity_EventScript_BerryGentleman::
	lock
	faceplayer
	dotimebasedevents
	goto_if_set FLAG_DAILY_LILYCOVE_RECEIVED_BERRY, LilycoveCity_EventScript_ReceivedBerry
	msgbox LilycoveCity_Text_BerrySuitsYou, MSGBOX_DEFAULT
	random 10
	addvar VAR_RESULT, FIRST_BERRY_INDEX
	giveitem VAR_RESULT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_DAILY_LILYCOVE_RECEIVED_BERRY
	msgbox LilycoveCity_Text_BecauseYoureTrainer, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_ReceivedBerry::
	msgbox LilycoveCity_Text_PokeblocksSuitPokemon, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_Man3::
	msgbox LilycoveCity_Text_ContestHallInTown, MSGBOX_NPC
	end

LilycoveCity_EventScript_Girl::
	lock
	faceplayer
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_GirlAquaGone
	msgbox LilycoveCity_Text_StrangeCaveInCove, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_GirlAquaGone::
	msgbox LilycoveCity_Text_GoingToMoveDeleterForHMs, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_RichBoy::
	msgbox LilycoveCity_Text_ImFromKanto, MSGBOX_NPC
	end

LilycoveCity_EventScript_Sailor2::
	lock
	faceplayer
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Sailor2AquaGone
	msgbox LilycoveCity_Text_TeamAquaBeenTrainingWailmer, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_Sailor2AquaGone::
	msgbox LilycoveCity_Text_SomeonePuntedTeamAquaOut, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_Woman2::
	lock
	faceplayer
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Woman2AquaGone
	msgbox LilycoveCity_Text_SomeoneStoleMyPokemon, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_Woman2AquaGone::
	msgbox LilycoveCity_Text_MissingPokemonCameBack, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_Man2::
	msgbox LilycoveCity_Text_ImArtDealer, MSGBOX_NPC
	end

LilycoveCity_EventScript_ExpertM1::
	msgbox LilycoveCity_Text_SeaRemainsForeverYoung, MSGBOX_SIGN
	end

LilycoveCity_EventScript_ExpertF::
	msgbox LilycoveCity_Text_SixtyYearsAgoHusbandProposed, MSGBOX_SIGN
	end

LilycoveCity_EventScript_ExpertM2::
	lock
	faceplayer
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_ExpertM2AquaGone
	msgbox LilycoveCity_Text_TeamAquaRenovatedCavern, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_ExpertM2AquaGone::
	msgbox LilycoveCity_Text_TeamAquaLotGoneForGood, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_Sailor1::
	msgbox LilycoveCity_Text_HeardTowerCalledSkyPillar, MSGBOX_NPC
	end

LilycoveCity_EventScript_FatMan::
	msgbox LilycoveCity_Text_SawTallTowerOnRoute131, MSGBOX_NPC
	end

LilycoveCity_EventScript_Man1::
	lockall
	msgbox LilycoveCity_Text_JustArrivedAndSawRarePokemon, MSGBOX_NPC
	applymovement LOCALID_MAN_1, Common_Movement_FaceOriginalDirection
	end

LilycoveCity_EventScript_Woman1::
	lockall
	msgbox LilycoveCity_Text_HoneymoonVowToSeeRarePokemon, MSGBOX_NPC
	applymovement LOCALID_WOMAN_1, Common_Movement_FaceOriginalDirection
	end

LilycoveCity_EventScript_CitySign::
	msgbox LilycoveCity_Text_CitySign, MSGBOX_SIGN
	end

LilycoveCity_EventScript_ContestHallSign::
	msgbox LilycoveCity_Text_ContestHallSign, MSGBOX_SIGN
	end

LilycoveCity_EventScript_MotelSign::
	msgbox LilycoveCity_Text_MotelSign, MSGBOX_SIGN
	end

LilycoveCity_EventScript_MuseumSign::
	lockall
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
	switch VAR_0x8004
	case 0, LilycoveCity_EventScript_MuseumSignNoPaintings
	msgbox LilycoveCity_Text_MuseumSignPlayersExhibit, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_EventScript_MuseumSignNoPaintings::
	msgbox LilycoveCity_Text_MuseumSign, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_EventScript_HarborSign::
	lockall
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_HarborSignFerryReady
	msgbox LilycoveCity_Text_HarborSignUnderConstruction, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_EventScript_HarborSignFerryReady::
	msgbox LilycoveCity_Text_HarborSign, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_EventScript_TrainerFanClubSign::
	msgbox LilycoveCity_Text_TrainerFanClubSign, MSGBOX_SIGN
	end

LilycoveCity_EventScript_DepartmentStoreSign::
	msgbox LilycoveCity_Text_DepartmentStoreSign, MSGBOX_SIGN
	end

LilycoveCity_EventScript_MoveDeletersHouseSign::
	msgbox LilycoveCity_Text_MoveDeletersHouseSign, MSGBOX_SIGN
	end

LilycoveCity_EventScript_WailmerTrainerGrunt::
	lockall
	goto_if_set FLAG_MET_WAILMER_TRAINER, LilycoveCity_EventScript_MetWailmerTrainer
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	msgbox LilycoveCity_Text_GetLostMessingUpTraining, MSGBOX_DEFAULT
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceRight
	waitmovement 0
	setflag FLAG_MET_WAILMER_TRAINER
	releaseall
	end

LilycoveCity_EventScript_MetWailmerTrainer::
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_EventScript_AquaGrunt1::
	lock
	msgbox LilycoveCity_Text_MovedLootIntoHideoutToday, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement 13, Common_Movement_ExclamationMark
	waitmovement 13
	delay 8
	faceplayer
	msgbox LilycoveCity_Text_AquaGruntNoticePlayer, MSGBOX_DEFAULT
	closemessage
	applymovement 13, Common_Movement_WalkInPlaceLeft
	waitmovement 13
	release
	end
	end

LilycoveCity_EventScript_AquaGrunt2::
	lock
	msgbox LilycoveCity_Text_ChanceToDoBigThings, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement 14, Common_Movement_ExclamationMark
	waitmovement 14
	delay 8
	faceplayer
	msgbox LilycoveCity_Text_AquaGruntNoticePlayer, MSGBOX_DEFAULT
	closemessage
	applymovement 14, Common_Movement_WalkInPlaceRight
	waitmovement 14
	release
	end

LilycoveCity_EventScript_AquaGrunt3::
	msgbox LilycoveCity_Text_DontGoNearCaveInCove, MSGBOX_NPC
	end

LilycoveCity_EventScript_AquaGrunt4::
	msgbox LilycoveCity_Text_IfWorldBecomesOurs, MSGBOX_NPC
	end

LilycoveCity_EventScript_SchoolKidM::
	lock
	faceplayer
	msgbox LilycoveCity_Text_DoYouKnowAboutBerryBlender, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, LilycoveCity_EventScript_KnowAboutBerryBlender
	call_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DontKnowAboutBerryBlender
	release
	end

LilycoveCity_EventScript_KnowAboutBerryBlender::
	msgbox LilycoveCity_Text_FasterSpinBetterPokeblocks, MSGBOX_DEFAULT
	return

LilycoveCity_EventScript_DontKnowAboutBerryBlender::
	msgbox LilycoveCity_Text_ExplainBerryBlender, MSGBOX_DEFAULT
	return

LilycoveCity_Text_MovedLootIntoHideoutToday:
	.string "Fufufu…\pWe've finished moving more loot into\nour secret hideout today.$"

LilycoveCity_Text_ChanceToDoBigThings:
	.string "I'm just a Grunt, so I have no idea what\nthe Boss is thinking…\lThat's OK with me, though!\pIf I just stay on Team Aqua, someday\nI'll be able to do something awesome!\lSomeday I'll be big time!$"

LilycoveCity_Text_AquaGruntNoticePlayer:
	.string "Who-who are you?!\nI was just talking to myself!$"

LilycoveCity_Text_DontGoNearCaveInCove:
	.string "Hey, you!\p"
	.string "Don't go near the cave in the cove!\p"
	.string "Why? You don't need a reason why!\n"
	.string "I'm an adult, so you just listen to me!$"

LilycoveCity_Text_IfWorldBecomesOurs:
	.string "If this whole wide world becomes ours,\nTeam Aqua's, then the 101 Skitty at\lmy parents' house and Wailmer that\llive with me should be happier, too!$"

LilycoveCity_Text_WailmerLeapOutOfWater:
	.string "There, Wailmer!\nNow leap out of the water and turn!$"

LilycoveCity_Text_GetLostMessingUpTraining:
	.string "Huh?\nWhat do you want?\pYou're messing with out trainer, so can\nyou, like, get lost?$"

LilycoveCity_Text_ContestHallInTown:
	.string "A great variety of Pokémon have\ngathered to show off how cute or\ltough they are in the Contest Hall!\pMe, I love a great variety of\nPokémon, so my heart is pounding with\lanticipation!$"

LilycoveCity_Text_StrangeCaveInCove:
	.string "Have you seen that strange cave in\nthe cove at the edge of town?$"

LilycoveCity_Text_GoingToMoveDeleterForHMs:
	.string "I'm going to teach my Pokémon some new\n"
	.string "moves for entering a Contest.\p"
	.string "So, I'm going to see the Move Deleter\n"
	.string "and make it forget HM moves.$"

LilycoveCity_Text_ImFromKanto:
	.string "The Hoenn region shines with the\nbeauty of its waterways and verdant\lnature.\pIt makes me realize that it's just as\nlovely a place as home in the Kanto\lregion!$"

LilycoveCity_Text_TeamAquaBeenTrainingWailmer:
	.string "Team Aqua's been training their\nWailmer in the cove.\pWe Sailors can't get our boats out\nto sea with them in the way!$"

LilycoveCity_Text_SomeonePuntedTeamAquaOut:
	.string "Ahoy, did you know?\p"
	.string "Someone punted Team Aqua out of\n"
	.string "the way for us!\p"
	.string "That got the Wailmer out of the cove,\n"
	.string "so we can get our boats out again.$"

LilycoveCity_Text_SomeoneStoleMyPokemon:
	.string "I was at the seaside inn, enjoying\na relaxing snooze to the sound of\lwaves…\pWhen someone stole my Pokémon!\nWho's the abductor?!\lTeam Aqua? Is it Team Aqua?!$"

LilycoveCity_Text_MissingPokemonCameBack:
	.string "My missing Pokémon…\n"
	.string "It came back without me noticing!$"

LilycoveCity_Text_ImArtDealer:
	.string "I'm an Art Dealer.\p"
	.string "I am a buyer and seller of fine art,\n"
	.string "especially paintings.\p"
	.string "I've heard that the Museum here has\n"
	.string "magnificent works on exhibit…$"

LilycoveCity_Text_SeaRemainsForeverYoung:
	.string "Even as we grow old and wrinkled,\nthe sea remains forever young with\lthe vivid brilliance of life…\pFwohoho fwohohohoho…$"

LilycoveCity_Text_SixtyYearsAgoHusbandProposed:
	.string "It was 60 years ago that my husband\nproposed to me here.\lThe sea remains as beautiful as ever.\pMufufufu mufufufufu…$"

LilycoveCity_Text_TeamAquaRenovatedCavern:
	.string "Hmm, you know of the peculiar cavern in\nthis cove?\pIt was a natural formation, but then\nthat Team Aqua lot came along and\lmade their renovations.\pThey say they're “Team Aqua, for\nhumanity,” but to us they're just a\lbig pain!$"

LilycoveCity_Text_TeamAquaLotGoneForGood:
	.string "That cave in the cove…\p"
	.string "I didn't notice it right away,\n"
	.string "but it's completely empty now.\p"
	.string "That Team Aqua lot, they must\n"
	.string "have gone away for good.$"

LilycoveCity_Text_CitySign:
	.string "Lilycove City\p"
	.string "“Where the land ends and the\n"
	.string "sea begins.”$"

LilycoveCity_Text_ContestHallSign:
	.string "Pokémon Contest Hall\n"
	.string "“The gathering place for Trainers!”$"

LilycoveCity_Text_MotelSign:
	.string "Cove Lily Motel\p"
	.string "“Remember us as Cove Lily of\n"
	.string "Lilycove.”$"

LilycoveCity_Text_MuseumSign:
	.string "Lilycove Museum\p"
	.string "“Pokémon Masterpiece Collection\n"
	.string "on exhibit!”$"

LilycoveCity_Text_MuseumSignPlayersExhibit:
	.string "Lilycove Museum\p"
	.string "“{PLAYER}'s Pokémon Collection\n"
	.string "on exhibit!”$"

LilycoveCity_Text_HarborSignUnderConstruction:
	.string "Lilycove City Harbor\p"
	.string "“The ferry S.S. Tidal is under\n"
	.string "construction in Slateport City.\p"
	.string "“Service is scheduled to begin\n"
	.string "shortly.”$"

LilycoveCity_Text_HarborSign:
	.string "Lilycove City Harbor\p"
	.string "“Enjoy a delightful cruise on\n"
	.string "the ferry S.S. Tidal.”$"

LilycoveCity_Text_TrainerFanClubSign:
	.string "Pokémon Trainer Fan Club\p"
	.string "The names of Trainers are scribbled\n"
	.string "all over the sign…$"

LilycoveCity_Text_DepartmentStoreSign:
	.string "Lilycove Department Store\p"
	.string "“Overflowing with great merchandise\n"
	.string "and excitement!\p"
	.string "“A great place to find that something\n"
	.string "you need!”$"

LilycoveCity_Text_MoveDeletersHouseSign:
	.string "Move Deleter's House\p"
	.string "“Unwanted Pokémon moves deleted.”$"

LilycoveCity_Text_DoYouKnowAboutBerryBlender:
	.string "Do you know about the machine\n"
	.string "Berry Blender?$"

LilycoveCity_Text_FasterSpinBetterPokeblocks:
	.string "People have to work together to get it\n"
	.string "to spin faster.\p"
	.string "The faster you can make it spin, the\n"
	.string "better {POKEBLOCK}s you can get, I've heard.$"

LilycoveCity_Text_ExplainBerryBlender:
	.string "It's used for making a kind of candy\n"
	.string "called a {POKEBLOCK}.\p"
	.string "If you give a good {POKEBLOCK} to a Pokémon,\n"
	.string "its condition will improve by a lot.$"

LilycoveCity_Text_HeardTowerCalledSkyPillar:
	.string "I heard there's a tower somewhere out\non the sea routes.\pIt's called the Sky Pillar, I hear.$"

LilycoveCity_Text_SawTallTowerOnRoute131:
	.string "I saw this tall tower somewhere\naround Route 131.\pCould that possibly be…?$"

LilycoveCity_Text_JustArrivedAndSawRarePokemon:
	.string "We just arrived here on our honeymoon\nvacation.\pWe happened to see a Dragon-type\nPokémon flying way up in the sky.\pDo cool Pokémon like that live in the\nHoenn region?$"

LilycoveCity_Text_HoneymoonVowToSeeRarePokemon:
	.string "On our honeymoon, we vowed to see as\nmany rare Pokémon as we can.\pSo we were delighted to see a rare\nPokémon as soon as we arrived.\pI mean, we are totally happy!$"

LilycoveCity_EventScript_Rival::
	lock
	delay 8
	opendoor 27, 6
	waitdooranim
	addobject LOCALID_RIVAL
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement OBJ_EVENT_ID_PLAYER
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement LOCALID_RIVAL
	waitse
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_Movement_PlayerStepBack
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement LOCALID_RIVAL, Common_Movement_WalkDown
	waitmovement LOCALID_RIVAL
	closedoor 27, 6
	waitdooranim
	delay 16
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq LilycoveCity_EventScript_Rival_2
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	msgbox LilycoveCity_EventScript_Rival_Text_1
LilycoveCity_EventScript_Rival_1:
	closemessage
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceUp
	waitmovement LOCALID_RIVAL
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq LilycoveCity_EventScript_Rival_6
	msgbox LilycoveCity_EventScript_Rival_Text_3
LilycoveCity_EventScript_Rival_5:
	closemessage
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_RIVAL
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq LilycoveCity_EventScript_Rival_10
	msgbox LilycoveCity_EventScript_Rival_Text_8
	delay 16
	msgbox LilycoveCity_EventScript_Rival_Text_9
LilycoveCity_EventScript_Rival_9:
	closemessage
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq LilycoveCity_EventScript_Rival_14
	switch VAR_STARTER_MON
	case 0, LilycoveCity_EventScript_Rival_24
	case 1, LilycoveCity_EventScript_Rival_25
	case 2, LilycoveCity_EventScript_Rival_26
LilycoveCity_EventScript_Rival_22:
	msgbox LilycoveCity_EventScript_Rival_Text_15, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LilycoveCity_EventScript_Rival_31
	msgbox LilycoveCity_EventScript_Rival_Text_17
LilycoveCity_EventScript_Rival_30:
	delay 16
	msgbox LilycoveCity_EventScript_Rival_Text_18
	closemessage
	delay 24
	msgbox LilycoveCity_EventScript_Rival_Text_19
LilycoveCity_EventScript_Rival_13:
	closemessage
	delay 8
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_RIVAL
	delay 48
	setfieldeffectargument 0, 1
	dofieldeffect FLDEFF_NPCFLY_OUT
	delay 16
	removeobject LOCALID_RIVAL
	waitfieldeffect FLDEFF_NPCFLY_OUT
	savebgm MUS_DUMMY
	fadedefaultbgm
	setflag FLAG_MET_RIVAL_LILYCOVE
	setvar VAR_TEMP_2, 1
	release
	end

LilycoveCity_EventScript_Rival_2:
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	msgbox LilycoveCity_EventScript_Rival_Text_0
	goto LilycoveCity_EventScript_Rival_1

LilycoveCity_EventScript_Rival_6:
	msgbox LilycoveCity_EventScript_Rival_Text_2
	goto LilycoveCity_EventScript_Rival_5

LilycoveCity_EventScript_Rival_10:
	msgbox LilycoveCity_EventScript_Rival_Text_4
	delay 16
	msgbox LilycoveCity_EventScript_Rival_Text_5
	closemessage
	delay 8
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement LOCALID_RIVAL
	msgbox LilycoveCity_EventScript_Rival_Text_6
	closemessage
	delay 24
	msgbox LilycoveCity_EventScript_Rival_Text_7
	goto LilycoveCity_EventScript_Rival_9

LilycoveCity_EventScript_Rival_14:
	switch VAR_STARTER_MON
	case 0, LilycoveCity_EventScript_Rival_19
	case 1, LilycoveCity_EventScript_Rival_20
	case 2, LilycoveCity_EventScript_Rival_21
LilycoveCity_EventScript_Rival_17:
	msgbox LilycoveCity_EventScript_Rival_Text_10
	delay 16
	msgbox LilycoveCity_EventScript_Rival_Text_11
	delay 24
	msgbox LilycoveCity_EventScript_Rival_Text_12, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LilycoveCity_EventScript_Rival_27
	msgbox LilycoveCity_EventScript_Rival_Text_14
	goto LilycoveCity_EventScript_Rival_13

LilycoveCity_EventScript_Rival_19:
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TREECKO, LilycoveCity_Text_MayDefeat
	goto LilycoveCity_EventScript_Rival_17

LilycoveCity_EventScript_Rival_20:
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TORCHIC, LilycoveCity_Text_MayDefeat
	goto LilycoveCity_EventScript_Rival_17

LilycoveCity_EventScript_Rival_21:
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_MUDKIP, LilycoveCity_Text_MayDefeat
	goto LilycoveCity_EventScript_Rival_17

LilycoveCity_EventScript_Rival_24:
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TREECKO, LilycoveCity_Text_BrendanDefeat
	goto LilycoveCity_EventScript_Rival_22

LilycoveCity_EventScript_Rival_25:
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TORCHIC, LilycoveCity_Text_BrendanDefeat
	goto LilycoveCity_EventScript_Rival_22

LilycoveCity_EventScript_Rival_26:
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_MUDKIP, LilycoveCity_Text_BrendanDefeat
	goto LilycoveCity_EventScript_Rival_22

LilycoveCity_EventScript_Rival_27:
	msgbox LilycoveCity_EventScript_Rival_Text_13
	goto LilycoveCity_EventScript_Rival_13

LilycoveCity_EventScript_Rival_31:
	msgbox LilycoveCity_EventScript_Rival_Text_16
	goto LilycoveCity_EventScript_Rival_30


LilycoveCity_Movement_PlayerStepBack:
	lock_facing_direction
	walk_down
	walk_in_place_up
	unlock_facing_direction
	step_end

LilycoveCity_EventScript_Rival_Text_0:
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Heeey! {PLAYER}!\nDon't tell me…\pAre you here for the shopping, too,\n{PLAYER}?$"

LilycoveCity_EventScript_Rival_Text_1:
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: Hey, if it isn't {PLAYER}!\nDid you come to do some shopping, too?$"

LilycoveCity_EventScript_Rival_Text_2:
	.string "We're right in front of the famous\nLilycove Department Store, after all!\pWhen I saw you, I figured maybe you'd\ncome here to do some shopping, same\las me.$"

LilycoveCity_EventScript_Rival_Text_3:
	.string "You know what I'm talking about…\nThe Lilycove Department Store!\pMy dad asked me to pick him up a few\nthings here.$"

LilycoveCity_EventScript_Rival_Text_4:
	.string "I'm afraid I already bought up tons of\nstuff!\pLike Pokémon Dolls…and posters…and…$"

LilycoveCity_EventScript_Rival_Text_5:
	.string "B-but--That's not all I've been doing, of\ncourse!\pI've also caught tons of different\nPokémon, and I've been raising them\lwell, too!$"

LilycoveCity_EventScript_Rival_Text_6:
	.string "Aughhh!\nYou think I'm lying, don't you!\pThat little hum totally said you think\nI'm lying!$"

LilycoveCity_EventScript_Rival_Text_7:
	.string "I think the bigger question here is\nwhether you're raising your Pokémon\lright, not me!\pS-so that settles it!\nLet's have a battle!\pLet's test my team and see how\nthey stack up against your passion\lfor Pokémon, {PLAYER}!$"

LilycoveCity_EventScript_Rival_Text_8:
	.string "It's not like I'm here to buy Dolls or\nsomething, r-right!$"

LilycoveCity_EventScript_Rival_Text_9:
	.string "A-anyway, it feels like it's been ages\nsince we last ran into each other.\pHow about I battle you so you can\nsee which one of us is doing a better\ljob raising our Pokémon?\pThough I think you and I both know who\nthe winner is gonna be, {PLAYER}!$"

LilycoveCity_EventScript_Rival_Text_10:
	.string "Ahhh, this reminds me of the battle I\nhad with you back on Route 103!\pYou were able to become this strong\nbecause you battled me back then,\lright, {PLAYER}?$"

LilycoveCity_EventScript_Rival_Text_11:
	.string "…What would you think if I said\nsomething like that? Hee hee…\pI'm actually thinking that it's\nabout time I went back to Littleroot,\lthough.\pI've caught a lot of different Pokémon,\nand my Pokédex is pretty complete, so\lI think I should go show it to my dad.$"

LilycoveCity_EventScript_Rival_Text_12:
	.string "…Huh?\pDid something just…sparkle in your\nBag?\pIt was like the light from that\nMeteorite…\p…Oh, nothing!\pSorry!\nJust forget it!\lI'm probably imagining things!\p{PLAYER}, what are you going to do?\pYou going to collect all the Gym\nBadges and take on the Pokémon\lLeague challenge?$"

LilycoveCity_EventScript_Rival_Text_13:
	.string "Typical, {PLAYER}!\pThen while you're collecting your\nBadges, I guess I'll go and complete\lmy Pokédex!\pI guess I'll be off then!$"

LilycoveCity_EventScript_Rival_Text_14:
	.string "What, really?\pWell, now you've got me curious!\pIf you aren't focusing on the League,\nthen what else are you hoping to\lachieve?\lI can't wait to see what you'll do!\pBut let's definitely meet up again\nsomewhere!$"

LilycoveCity_EventScript_Rival_Text_15:
	.string "Boy, that stings a bit…\pI had a head start on you as a Pokémon\nTrainer, but still…\pI, uh…\pI'm planning on going home to\nLittleroot.\pYou know how I've been helping out my\ndad with the Pokédex, and it's been\lcoming together pretty decently.\pSo…I ought to go back home and how it\nto him.\p{PLAYER}, what are you gonna do?\pYou still thinking of collecting all the\nGym Badges and taking on the Pokémon\lLeague challenge?$"

LilycoveCity_EventScript_Rival_Text_16:
	.string "Yeah?\nI guess I'm not surprised.\pDo your best.\nYou know I'm behind you.$"

LilycoveCity_EventScript_Rival_Text_17:
	.string "Huh? Really?\nI've gotta say, I always kind of\lthought that you'd go all the way and\laim to be Champion.$"

LilycoveCity_EventScript_Rival_Text_18:
	.string "…Uhhh. Huh? Did you…\n{PLAYER}, I think there's something…\lThere's something, like, sparkling in\lyour Bag…\pIt's the same kinda light as that\nMeteorite had, the one you showed me\lin Lavaridge…$"

LilycoveCity_EventScript_Rival_Text_19:
	.string "Ahhh, never mind!\pJust…\nGood luck out there!$"

LilycoveCity_Text_MayDefeat::
	.string "…$"

LilycoveCity_Text_BrendanDefeat::
	.string "Hmm…\nYou've raised your team quite a bit.$"
