SlateportCity_OceanicMuseum_2F_MapScripts::
	.byte 0


SlateportCity_OceanicMuseum_2F_EventScript_CaptStern::
	lock
	delay 32
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 1
	delay 16
	faceplayer
	delay 16
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_0
	closemessage
	delay 16
	playse SE_EXIT
	addobject 3
	waitse
	playbgm MUS_ENCOUNTER_AQUA, TRUE
	applymovement 3, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter
	waitmovement 0
	playse SE_EXIT
	addobject 4
	waitse
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter
	waitmovement 0
	applymovement 3, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach
	waitmovement 0
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_2
	compare VAR_FACING, DIR_EAST
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_2
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_1:
	compare VAR_FACING, DIR_EAST
	goto_if_ne SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_7
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_6:
	waitmovement 0
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 1
	delay 16
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_1
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_2
	closemessage
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
	waitmovement 0
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_10
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_9:
	compare VAR_FACING, DIR_WEST
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_13
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_12:
	waitmovement 0
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_3
	closemessage
	trainerbattle_no_intro TRAINER_GRUNT_MUSEUM_1, SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_4
	delay 8
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
	waitmovement 0
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_5
	closemessage
	delay 16
	applymovement 3, Common_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_6
	closemessage
	applymovement 3, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
	waitmovement 0
	trainerbattle_no_intro TRAINER_GRUNT_MUSEUM_2, SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_7
	applymovement 3, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
	waitmovement 0
	delay 8
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_8
	closemessage
	applymovement 3, Common_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_9
	closemessage
	applymovement 4, Common_Movement_WalkInPlaceUp
	waitmovement 0
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_10
	closemessage
	delay 32
	playse SE_EXIT
	addobject 2
	waitse
	delay 16
	playse SE_PIN
	applymovement 3, Common_Movement_ExclamationMark
	applymovement 4, Common_Movement_ExclamationMark
	waitmovement 4
	delay 16
	applymovement 3, Common_Movement_WalkInPlaceLeft
	applymovement 4, Common_Movement_WalkInPlaceLeft
	waitmovement 4
	applymovement 2, SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter
	applymovement 4, SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie
	waitmovement 0
	applymovement 3, Common_Movement_WalkInPlaceDown
	waitmovement 3
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_11
	closemessage
	applymovement 2, SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer
	waitmovement 0
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_16
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_13
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_15:
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_14
	closemessage
	delay 48
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_15
	closemessage
	delay 16
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_16
	closemessage
	savebgm MUS_DUMMY
	fadedefaultbgm
	fadescreen FADE_TO_BLACK
	delay 16
	playse SE_EXIT
	removeobject 2
	waitse
	playse SE_EXIT
	removeobject 3
	waitse
	playse SE_EXIT
	removeobject 4
	waitse
	fadescreen FADE_FROM_BLACK
	delay 32
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement 0
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_20
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_18
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_19:
	closemessage
	delay 8
	playfanfare MUS_OBTAIN_TMHM
	message SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_19
	waitmessage
	waitfanfare
	removeitem ITEM_DEVON_PARTS
	delay 8
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 1
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_20
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerWatchSternLeave
	applymovement 1, SlateportCity_OceanicMuseum_2F_Movement_SternLeavesRoom
	waitmovement 1
	removeobject 1
	playse SE_EXIT
	waitse
	compare VAR_REGISTER_BIRCH_STATE, 0
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_24
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_23:
	setflag FLAG_DELIVERED_DEVON_GOODS
	clearflag FLAG_HIDE_ROUTE_116_DEVON_EMPLOYEE
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1
	release
	end

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_2:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_1

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_7:
	applymovement 1, Common_Movement_WalkInPlaceLeft
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_6

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_10:
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_9

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_13:
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_12

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_16:
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_12
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_15

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_20:
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_17
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_19

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_24:
	setvar VAR_REGISTER_BIRCH_STATE, 1
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_23


SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth:
	walk_left
	walk_down
	walk_in_place_left
	step_end

SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest:
	walk_up
	walk_left
	walk_left
	walk_down
	walk_in_place_left
	step_end

SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer:
	walk_right
	step_end

SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle:
	walk_right
	step_end

SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter:
	walk_down
	walk_right
	walk_in_place_down
	step_end

SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated:
	lock_facing_direction
	walk_left
	unlock_facing_direction
	step_end

SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter:
	walk_down
	step_end

SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie:
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_8
	walk_fast_down
	walk_in_place_up
	step_end

SlateportCity_OceanicMuseum_2F_Movement_PlayerWatchSternLeave:
	delay_16
	walk_in_place_up
	delay_16
	delay_16
	delay_16
	walk_in_place_left
	step_end

SlateportCity_OceanicMuseum_2F_Movement_SternLeavesRoom:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	set_invisible
	step_end

SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2::
	lock
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2_Text_0
	release
	end


SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron3::
	lock
	faceplayer
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron3_Text_0, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end


SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron1::
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron1_Text_0, MSGBOX_NPC
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceDown
	waitmovement VAR_LAST_TALKED
	end


SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample1::
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample1_Text_0, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample2::
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample2_Text_0, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_2F_EventScript_PressureExperiment::
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_PressureExperiment_Text_0, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_2F_EventScript_HoennModel::
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_HoennModel_Text_0, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_2F_EventScript_DeepSeawaterDisplay::
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_DeepSeawaterDisplay_Text_0, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_2F_EventScript_SurfaceSeawaterDisplay::
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_SurfaceSeawaterDisplay_Text_0, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_2F_EventScript_SSTidalReplica::
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_SSTidalReplica_Text_0, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_2F_EventScript_SubmarineReplica::
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_SubmarineReplica_Text_0, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_2F_EventScript_SubmersibleReplica::
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_SubmersibleReplica_Text_0, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_2F_EventScript_SSAnneReplica::
	msgbox SlateportCity_OceanicMuseum_2F_EventScript_SSAnneReplica_Text_0, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_0:
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Yes?\pIf you're looking for Stern, that\nwould be me.\pAh!\nThose must be the parts I ordered\lfrom Mr. Stone at Devon.\pThank you for bringing the case all\nthis way.\pNow we can prepare for our\nexpedition at last.$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_1:
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: Heh heh heh heh…\pJust a moment!\nWe'll be taking those!$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_2:
	.string "{COLOR RED}Stern{COLOR DARK_GRAY}: Wh-what was that!?\nWho are you people!?$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_3:
	.string "{COLOR RED}Grunt{COLOR DARK_GRAY}: We're Team Aqua!\pOur boss wants the parts in that\ncase, so shut your nap and fork it\lover!$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_4:
	.string "Whoa!$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_5:
	.string "Awaaaughhh!\nI got beat by a little brat?\pOh, man, what a disaster…\nThe boss is gonna be furious…$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_6:
	.string "Hmph!\nSniveling wimp!\pStand back and watch me,\nthe 27th-strongest member of\lTeam Aqua, take care of this kid!$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_7:
	.string "What!?$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_8:
	.string "This kid beat the 27th-strongest Grunt\nin Team Aqua?$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_9:
	.string "N-now what?\nIf we don't get that case, we're in\lfor it!$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_10:
	.string "Arrgh!\nI never thought we'd be stopped by\lsome meddling kid!$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_11:
	.string "{COLOR RED}???{COLOR DARK_GRAY}: What do we have here?\pI came to see what was taking\nso long just to steal a few parts,\land I find you simps getting beat\lby this kid?$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_12:
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Heh!\pThat's quite a fierce expression for\nsuch a wee little scamp.\pThat face tells me you're not just\nanother mindless Trainer brat.\pThe name is {COLOR RED}Archie{COLOR DARK_GRAY}.\pThe rough-looking lot you see here are\nmembers of my team--Team Aqua.\pSo tell me, boyo…\pDo you know that Pokémon, people, and\nall life in this world depend on the\lsea for life?\pThat's right.\pThe sea is an irreplaceable treasure\nfor every living thing on this planet.\pBut with our selfish extravagance,\nhumanity dirties the great ocean,\ldestroying this source of all life…$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_13:
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Heh!\pThat's quite a fierce expression for\nsuch a wee little scamp.\pThat face tells me you're not just\nanother mindless Trainer brat.\pThe name is {COLOR RED}Archie{COLOR DARK_GRAY}.\pThe rough-looking lot you see here are\nmembers of my team--Team Aqua.\pSo tell me, girlie…\pDo you know that Pokémon, people, and\nall life in this world depend on the\lsea for life?\pThat's right.\pThe sea is an irreplaceable treasure\nfor every living thing on this planet.\pBut with our selfish extravagance,\nhumanity dirties the great ocean,\ldestroying this source of all life…$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_14:
	.string "Day by day, we're all destroying our\nmost precious resource!\pIf we humans suffer from our actions,\nwell, maybe we'll end up getting what\lwe deserve.\pBut what about the Pokémon in our\nworld?\pThe Pokémon that no longer have a\nplace to live because we stole and\lsoiled their seas?\pThe Pokémon that won't have a place\nto raise their young and watch them\lgrow?\pWe are creating a world in which\ninnocent Pokémon suffer as a result\lof our actions…\pAnd that is something I can't\nforgive!\pThat's why I came to a decision, see?\pThe foolish actions of my fellow\nhumans, the seas we have blighted,\lnature itself…\pI will return everything to its\nunspoiled beginnings!$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_15:
	.string "…\pHeh!\pIt's not like me to talk so much.\pNever mind, little scamp…\nI'll withdraw for now and leave you be.\lBut understand this…\pGet in my way again, and you won't walk\naway unscathed next time.\pRemember that, at least!$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_16:
	.string "We're moving out, lads!$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_17:
	.string "{COLOR RED}Stern{COLOR DARK_GRAY}: Young man…\pAh, {PLAYER}, is it?\pThat was quite a tense situation!\nThank you for helping me out!\pOh, yes, I almost forgot that you\nbrought the parts from Devon!$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_18:
	.string "{COLOR RED}Stern{COLOR DARK_GRAY}: Young lady…\pAh, {PLAYER}, is it?\pThat was quite a tense situation!\nThank you for helping me out!\pOh, yes, I almost forgot that you\nbrought the parts from Devon!$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_19:
	.string "{PLAYER} handed over the Devon Parts\nto Captain Stern.$"

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Text_20:
	.string "This is it!\nI can't be standing around here!\pIt's finally time for us to set out on\nour ocean-floor expedition!\pThanks for this, and excuse me!$"

SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2_Text_0:
	.string "Don't run around inside the museum!$"

SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron3_Text_0:
	.string "Wow, the submarine's awesome!\nI want to go for a ride!$"

SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron1_Text_0:
	.string "Looking at this model of a ship\nhere reminds me of Mr. Briney on\lRoute 104.$"

SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample1_Text_0:
	.string "“Kalos Water Quality Sample,”\nthe label says.\pThe hardness of Kalos's water often\nexceeds 300 ppm.\pThat's characteristics of the water\nin Kalos.$"

SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample2_Text_0:
	.string "“Unova Water Quality Sample,”\nthe label says.\pWater hardness is a measure of the\namount of calcium and magnesium it\lcontains.$"

SlateportCity_OceanicMuseum_2F_EventScript_PressureExperiment_Text_0:
	.string "A video is playing of a guy with a\nwacky hairstyle, who could be a\lscientist conducting experiment\lwith some sort of machine…\p“Because of this…\nwhen you dive into the sea,\lyou fell discomfort in your ears…”$"

SlateportCity_OceanicMuseum_2F_EventScript_HoennModel_Text_0:
	.string "“Model of the Hoenn Region”\pIt's a miniature diorama of the\nHoenn Region.\pWhere is Littleroot Town on this?$"

SlateportCity_OceanicMuseum_2F_EventScript_DeepSeawaterDisplay_Text_0:
	.string "It's a display on the flow of\nseawater.\p“Near the bottom of the sea,\nwater flows due to differences in\lsuch factors as temperature and\lsalinity”$"

SlateportCity_OceanicMuseum_2F_EventScript_SurfaceSeawaterDisplay_Text_0:
	.string "It's a display on the flow of\nseawater.\p“Toward the surface, seawater flows\nas currents driven by the winds.”$"

SlateportCity_OceanicMuseum_2F_EventScript_SSTidalReplica_Text_0:
	.string "“The Ferry S.S. Tidal”\pA scale replica of the ship under\nconstruction at Stern's Shipyard.$"

SlateportCity_OceanicMuseum_2F_EventScript_SubmarineReplica_Text_0:
	.string "“Prototype Submarine Explorer 0”\pA replica of the high-performance\nsubmarine for ocean-floor\lexploration.$"

SlateportCity_OceanicMuseum_2F_EventScript_SubmersibleReplica_Text_0:
	.string "“Submersible Pod”\pA replica of a compact, unmanned pod\nfor seafloor exploration.$"

SlateportCity_OceanicMuseum_2F_EventScript_SSAnneReplica_Text_0:
	.string "“The S.S. Anne”\pA replica of the luxury liner that\ncircles the globe.$"
