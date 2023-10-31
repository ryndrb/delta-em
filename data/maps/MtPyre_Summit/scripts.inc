.set LOCALID_OLD_MAN, 1
.set LOCALID_ARCHIE, 2
.set LOCALID_OLD_LADY, 3
.set LOCALID_MATT, 4
.set LOCALID_GRUNT_2, 5
.set LOCALID_GRUNT_3, 6
.set LOCALID_GRUNT_4, 7
.set LOCALID_MAXIE, 8

MtPyre_Summit_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtPyre_Summit_OnTransition
	.byte 0

MtPyre_Summit_OnTransition:
	call_if_eq VAR_MT_PYRE_STATE, 0, MtPyre_Summit_EventScript_SetOldPeoplePositions
	call_if_eq VAR_MT_PYRE_STATE, 2, MtPyre_Summit_EventScript_SetArchieMaxiePositions
	end

MtPyre_Summit_EventScript_SetOldPeoplePositions::
	setobjectxyperm LOCALID_OLD_MAN, 21, 5
	setobjectxyperm LOCALID_OLD_LADY, 21, 6
	setobjectmovementtype LOCALID_OLD_MAN, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype LOCALID_OLD_LADY, MOVEMENT_TYPE_FACE_UP
	end

MtPyre_Summit_EventScript_SetArchieMaxiePositions::
	setobjectxyperm LOCALID_MAXIE, 23, 6
	setobjectxyperm LOCALID_ARCHIE, 22, 6
	end

MtPyre_Summit_EventScript_OldMan::
	lock
	faceplayer
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, MtPyre_Summit_EventScript_OldManAfterRayquaza
	msgbox MtPyre_Summit_Text_WillYouHearOutMyTale, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManTale
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
	release
	end

MtPyre_Summit_EventScript_OldManAfterRayquaza::
	msgbox MtPyre_Summit_Text_HearTheNewLegendOfHoenn, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManNewTale
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
	release
	end

MtPyre_Summit_EventScript_OldManTale::
	msgbox MtPyre_Summit_Text_GroudonKyogreTale, MSGBOX_DEFAULT
	return

MtPyre_Summit_EventScript_DeclineOldManTale::
	msgbox MtPyre_Summit_Text_WellThatTooIsFine, MSGBOX_DEFAULT
	return

MtPyre_Summit_EventScript_OldManNewTale::
	msgbox MtPyre_Summit_Text_HoennTrioTale, MSGBOX_DEFAULT
	return

MtPyre_Summit_EventScript_OldLady::
	lock
	faceplayer
	goto_if_set FLAG_RETURNED_RED_OR_BLUE_ORB, MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned
	call_if_ge VAR_MT_PYRE_STATE, 3, MtPyre_Summit_EventScript_OldLadyOrbsReturned
	goto_if_set FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, MtPyre_Summit_EventScript_OldLadyLegendariesAwake
	msgbox MtPyre_Summit_Text_OrbsHaveBeenTaken, MSGBOX_DEFAULT
	release
	end

MtPyre_Summit_EventScript_OldLadyOrbsReturned::
	msgbox MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs, MSGBOX_DEFAULT
	setflag FLAG_RETURNED_RED_OR_BLUE_ORB
	release
	end

MtPyre_Summit_EventScript_OldLadyLegendariesAwake::
	msgbox MtPyre_Summit_Text_GroudonKyogreAwakened, MSGBOX_DEFAULT
	release
	end

MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned::
	msgbox MtPyre_Summit_Text_SuperAncientPokemonTaughtUs, MSGBOX_DEFAULT
	release
	end

MtPyre_Summit_EventScript_ArchieMaxieTrigger0::
	lockall
	setvar VAR_0x8008, 0
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
	end

MtPyre_Summit_EventScript_ArchieMaxieTrigger1::
	lockall
	setvar VAR_0x8008, 1
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
	end

MtPyre_Summit_EventScript_ArchieMaxieTrigger2::
	lockall
	setvar VAR_0x8008, 2
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
	end

MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	delay 60
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieMaxieBeginExit0
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieMaxieBeginExit1
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieMaxieBeginExit2
	playse SE_PIN
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
	waitmovement 0
	delay 30
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachPlayer0
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachPlayer1
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachPlayer2
	msgbox MtPyre_Summit_Text_MaxieSilence, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachArchie0
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachArchie1
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachArchie2
	delay 30
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
	waitmovement 0
	removeobject LOCALID_ARCHIE
	removeobject LOCALID_MAXIE
	setvar VAR_MT_PYRE_STATE, 3
	releaseall
	end

MtPyre_Summit_EventScript_ArchieMaxieBeginExit0::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
	waitmovement 0
	return

MtPyre_Summit_EventScript_ArchieMaxieBeginExit1::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
	waitmovement 0
	return

MtPyre_Summit_EventScript_ArchieMaxieBeginExit2::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
	waitmovement 0
	return

MtPyre_Summit_EventScript_MaxieApproachPlayer0::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie0
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer0
	waitmovement 0
	return

MtPyre_Summit_EventScript_MaxieApproachPlayer1::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer1
	waitmovement 0
	return

MtPyre_Summit_EventScript_MaxieApproachPlayer2::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer2
	waitmovement 0
	return

MtPyre_Summit_EventScript_MaxieApproachArchie0::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie0
	waitmovement 0
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

MtPyre_Summit_EventScript_MaxieApproachArchie1::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie1
	waitmovement 0
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

MtPyre_Summit_EventScript_MaxieApproachArchie2::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie2
	waitmovement 0
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

MtPyre_Summit_Movement_PlayerFaceMaxie0:
	delay_16
	delay_16
	walk_in_place_faster_right
	step_end

MtPyre_Summit_Movement_PlayerFaceMaxie:
	delay_16
	delay_16
	walk_in_place_faster_left
	step_end

MtPyre_Summit_Movement_ArchieExit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtPyre_Summit_Movement_MaxieExit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0:
	delay_16
	delay_8
	walk_left
	walk_in_place_faster_right
	delay_16
	walk_in_place_faster_down
	step_end

MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1:
	delay_16
	delay_8
	walk_right
	walk_in_place_faster_left
	delay_16
	walk_in_place_faster_down
	step_end

MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2:
	delay_16
	delay_8
	walk_in_place_faster_left
	delay_16
	walk_in_place_faster_down
	step_end

MtPyre_Summit_Movement_MaxieApproachPlayer0:
	walk_up
	walk_up
	walk_up
	walk_left
	step_end

MtPyre_Summit_Movement_MaxieApproachPlayer1:
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_right
	step_end

MtPyre_Summit_Movement_MaxieApproachPlayer2:
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_right
	step_end

MtPyre_Summit_Movement_ArchieWatchMaxie:
	delay_16
	walk_in_place_faster_up
	step_end

MtPyre_Summit_Movement_PlayerWatchMaxie:
	delay_16
	walk_in_place_faster_down
	step_end

MtPyre_Summit_Movement_MaxieApproachArchie0:
	walk_down
	walk_right
	walk_down
	walk_down
	walk_in_place_faster_left
	step_end

MtPyre_Summit_Movement_MaxieApproachArchie1:
	walk_down
	walk_down
	walk_down
	walk_in_place_faster_left
	step_end

MtPyre_Summit_Movement_MaxieApproachArchie2:
	walk_down
	walk_down
	walk_down
	walk_in_place_faster_left
	step_end

MtPyre_Summit_EventScript_Grunt2::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, MtPyre_Summit_Text_Grunt2Intro, MtPyre_Summit_Text_Grunt2Defeat
	msgbox MtPyre_Summit_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_Summit_EventScript_Grunt3::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_3, MtPyre_Summit_Text_Grunt3Intro, MtPyre_Summit_Text_Grunt3Defeat
	msgbox MtPyre_Summit_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_Summit_EventScript_Grunt4::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_4, MtPyre_Summit_Text_Grunt4Intro, MtPyre_Summit_Text_Grunt4Defeat
	msgbox MtPyre_Summit_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_Summit_Text_Grunt2Intro:
	.string "What's up with you, brat?\nWhat does a single kid expect to do?$"

MtPyre_Summit_Text_Grunt2Defeat:
	.string "Wow, you're remarkably strong.$"

MtPyre_Summit_Text_Grunt2PostBattle:
	.string "You don't know anything!\n"
	.string "So why are you messing with us?$"

MtPyre_Summit_Text_Grunt3Intro:
	.string "Hey, I remember you from Mt. Chimney!\pYou don't belong to either Team, so why\nwould you be here?$"

MtPyre_Summit_Text_Grunt3Defeat:
	.string "Urgggh…\nBeaten by some kid--again!$"

MtPyre_Summit_Text_Grunt3PostBattle:
	.string "Heh, it doesn't matter!\n"
	.string "We bought ourselves some time!\p"
	.string "The Boss should have snatched what\n"
	.string "he was after!$"

MtPyre_Summit_Text_Grunt4Intro:
	.string "I'll show exactly how scary Team Aqua\ncan be!$"

MtPyre_Summit_Text_Grunt4Defeat:
	.string "So you think you can pick a fight with\nTeam Aqua all by your lonesome…$"

MtPyre_Summit_Text_Grunt4PostBattle:
	.string "We have a great combination going\n"
	.string "with us members and our leader.$"

MtPyre_Summit_Text_OrbsHaveBeenTaken:
	.string "The Blue Orb and Red Orb taken by\nthose sinister men…\pHaving the two separated can only lead\nto disaster…\pI fear something terrible will happen…$"

MtPyre_Summit_Text_GroudonKyogreAwakened:
	.string "Oh, my goodness…\p"
	.string "You say that both Groudon and Kyogre\n"
	.string "have been awakened?\p"
	.string "It is said that the Blue Orb and\n"
	.string "the Red Orb quelled the rage of\l"
	.string "the two Pokémon…\p"
	.string "It is also said that the true owner\n"
	.string "of the Orbs still exists.\p"
	.string "However, no one knows who, or what\n"
	.string "exactly, the Orbs belong to.\p"
	.string "It could be a human, or perhaps\n"
	.string "a Pokémon, but no one knows.$"

MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs:
	.string "The two men who took the Orbs came\n"
	.string "back to return them on their own.\p"
	.string "Those men…\n"
	.string "Perhaps they are not so evil after all…$"

MtPyre_Summit_Text_SuperAncientPokemonTaughtUs:
	.string "The embodiments of the land, sea,\n"
	.string "and the sky…\p"
	.string "That is said to be the identities of\n"
	.string "the super-ancient Pokémon…\p"
	.string "In the same way that we humans and\n"
	.string "Pokémon have life, our world, too,\l"
	.string "is alive…\p"
	.string "The super-ancient Pokémon have\n"
	.string "taught us that…$"

MtPyre_Summit_Text_WillYouHearOutMyTale:
	.string "Mt. Pyre exists to soothe the spirits\nof Pokémon that have passed on…\pFrom so high up, we can look down upon\nHoenn.\pSuch a view must bring peace even to\nthose lost Pokémon…\pIs it coincidence that you are here?\pWill you hear my tale? A tale long told\nin the Hoenn region?$"

MtPyre_Summit_Text_GroudonKyogreTale:
	.string "It happened long, long, ago…\pThe world was wracked by an unceasing\nbattle between Groudon, the Pokémon\lof the land, and Kyogre, the Pokémon\lof the sea…\pGroudon raising mountains and creating\ncontinents…\pKyogre raising huge waves and carving\nout oceans…\pTheir fierce duel rage without end.\pThe world was assaulted by merciless\nheat and vicious rains in turn.\pOnly one power was great enough to\nquell this terrible outpouring.\lThat of the Red Orb and the Blue Orb.\pThe light which swelled from the Blue\nOrb quieted Groudon in its rage.\pThe light which poured from the Red Orb\nclamed Kyogre in its fury.\pThe two, now docile, dove deep into the\nsea and disappeared from human eyes…$"

MtPyre_Summit_Text_WellThatTooIsFine:
	.string "I see…\nWell, that, too, is fine…$"

MtPyre_Summit_Text_MaxieSilence:
	.string "Maxie: {PLAYER}…\p"
	.string "… … … … … …\n"
	.string "… … … … … …$"

MtPyre_Summit_Text_HearTheNewLegendOfHoenn:
	.string "It is my role to pass on the legends\n"
	.string "of Hoenn to future generations.\p"
	.string "And the crisis that just ended in\n"
	.string "Sootopolis rewrote a legend…\p"
	.string "Have you the time to hear the new\n"
	.string "legend of Hoenn?$"

MtPyre_Summit_Text_HoennTrioTale:
	.string "It happened long, long ago…\p"
	.string "The world was wracked by a ferocious\n"
	.string "clash between the Pokémon of the land\l"
	.string "and the Pokémon of the sea…\p"
	.string "The Pokémon of the land raised\n"
	.string "mountains and created continents…\p"
	.string "The Pokémon of the sea raised huge\n"
	.string "waves and carved out oceans…\p"
	.string "Their fierce duel raged without end.\p"
	.string "The world was engulfed in massive\n"
	.string "fires and vicious storms.\p"
	.string "It was then that the Pokémon of\n"
	.string "the sky descended from a storm.\p"
	.string "The Pokémon, shining a vivid green,\n"
	.string "becalmed the two enraged Pokémon.\p"
	.string "Then, its duty done, the green Pokémon\n"
	.string "flew off into the wild blue yonder…$"

MtPyre_Summit_EventScript_TeamAquaTrigger1::
	setvar VAR_TEMP_0, 1
	goto MtPyre_Summit_EventScript_TeamAquaExits
	end


MtPyre_Summit_EventScript_TeamAquaTrigger2::
	setvar VAR_TEMP_0, 2
	goto MtPyre_Summit_EventScript_TeamAquaExits
	end


MtPyre_Summit_EventScript_TeamAquaTrigger3::
	setvar VAR_TEMP_0, 3
	goto MtPyre_Summit_EventScript_TeamAquaExits
	end


MtPyre_Summit_EventScript_TeamAquaExits::
	lockall
	delay 48
	applymovement LOCALID_OLD_MAN, Common_Movement_WalkInPlaceRight
	delay 8
	applymovement LOCALID_OLD_LADY, Common_Movement_WalkInPlaceRight
	waitmovement LOCALID_OLD_LADY
	delay 16
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
	applymovement LOCALID_ARCHIE, Common_Movement_WalkUp
	waitmovement LOCALID_ARCHIE
	special RemoveCameraObject
	delay 48
	fadescreen FADE_TO_BLACK
	delay 24
	fadescreen FADE_FROM_BLACK
	delay 24
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_ARCHIE
	delay 8
	playse SE_PIN
	applymovement LOCALID_ARCHIE, Common_Movement_ExclamationMark
	waitmovement LOCALID_ARCHIE
	waitse
	applymovement LOCALID_ARCHIE, Common_Movement_WalkDown
	delay 8
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceDown
	switch VAR_TEMP_0
	case 1, MtPyre_Summit_EventScript_TeamAquaExits_3
	case 2, MtPyre_Summit_EventScript_TeamAquaExits_4
	case 3, MtPyre_Summit_EventScript_TeamAquaExits_5
MtPyre_Summit_EventScript_TeamAquaExits_1:
	waitmovement OBJ_EVENT_ID_PLAYER
	delay 32
	msgbox MtPyre_Summit_EventScript_TeamAquaExits_Text_0
	closemessage
	delay 24
	msgbox MtPyre_Summit_EventScript_TeamAquaExits_Text_1
	closemessage
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceUp
	waitmovement LOCALID_MATT
	msgbox MtPyre_Summit_EventScript_TeamAquaExits_Text_2
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq MtPyre_Summit_EventScript_TeamAquaExits_7
	msgbox MtPyre_Summit_EventScript_TeamAquaExits_Text_4
MtPyre_Summit_EventScript_TeamAquaExits_6:
	msgbox MtPyre_Summit_EventScript_TeamAquaExits_Text_5
	closemessage
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieBeginExit
	delay 8
	applymovement LOCALID_MATT, Common_Movement_WalkInPlaceDown
	fadescreen FADE_TO_BLACK
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_ARCHIE
	removeobject LOCALID_ARCHIE
	removeobject LOCALID_GRUNT_2
	removeobject LOCALID_GRUNT_3
	removeobject LOCALID_GRUNT_4
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA
	delay 32
	fadescreen FADE_FROM_BLACK
	delay 32
	applymovement LOCALID_MATT, MtPyre_Summit_Movement_MattFacePlayer
	delay 8
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement LOCALID_MATT
	special RemoveCameraObject
	msgbox MtPyre_Summit_EventScript_TeamAquaExits_Text_6
	trainerbattle_no_intro TRAINER_MATT_MT_PYRE, MtPyre_Summit_EventScript_TeamAquaExits_Text_7
	msgbox MtPyre_Summit_EventScript_TeamAquaExits_Text_8
	closemessage
	applymovement LOCALID_MATT, MtPyre_Summit_Movement_MattExit
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMattExit
	waitmovement LOCALID_MATT
	removeobject LOCALID_MATT
	setvar VAR_MT_PYRE_STATE, 1
	delay 24
	applymovement LOCALID_OLD_LADY, MtPyre_Summit_Movement_OldLadyGoSeeOrb
	applymovement LOCALID_OLD_MAN, MtPyre_Summit_Movement_OldManGoSeeOrb
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerApproachOldLady
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox MtPyre_Summit_EventScript_TeamAquaExits_Text_9
	msgbox MtPyre_Summit_EventScript_TeamAquaExits_Text_10
	closemessage
	applymovement LOCALID_OLD_LADY, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_OLD_LADY
	delay 8
	playse SE_PIN
	applymovement LOCALID_OLD_LADY, Common_Movement_ExclamationMark
	delay 8
	applymovement LOCALID_OLD_MAN, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_OLD_LADY
	delay 16
	msgbox MtPyre_Summit_EventScript_TeamAquaExits_Text_11
	giveitem ITEM_MAGMA_EMBLEM
	closemessage
	setflag FLAG_RECEIVED_RED_OR_BLUE_ORB
	setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
	releaseall
	end

MtPyre_Summit_EventScript_TeamAquaExits_3:
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceArchie1
	goto MtPyre_Summit_EventScript_TeamAquaExits_1

MtPyre_Summit_EventScript_TeamAquaExits_4:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto MtPyre_Summit_EventScript_TeamAquaExits_1

MtPyre_Summit_EventScript_TeamAquaExits_5:
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceArchie3
	goto MtPyre_Summit_EventScript_TeamAquaExits_1

MtPyre_Summit_EventScript_TeamAquaExits_7:
	msgbox MtPyre_Summit_EventScript_TeamAquaExits_Text_3
	goto MtPyre_Summit_EventScript_TeamAquaExits_6


MtPyre_Summit_Movement_PlayerFaceArchie1:
	walk_right
	walk_in_place_up
	step_end

MtPyre_Summit_Movement_PlayerFaceArchie3:
	walk_left
	walk_in_place_up
	step_end

MtPyre_Summit_Movement_ArchieBeginExit:
	walk_down
	walk_left
	walk_down
	step_end

MtPyre_Summit_Movement_MattFacePlayer:
	walk_left
	walk_in_place_down
	step_end

MtPyre_Summit_Movement_MattExit:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtPyre_Summit_Movement_PlayerWatchMattExit:
	delay_16
	delay_16
	walk_in_place_left
	delay_16
	walk_in_place_down
	step_end

MtPyre_Summit_Movement_OldManGoSeeOrb:
	delay_16
	delay_16
	walk_right
	step_end

MtPyre_Summit_Movement_OldLadyGoSeeOrb:
	walk_right
	walk_right
	walk_up
	step_end

MtPyre_Summit_Movement_PlayerApproachOldLady:
	delay_16
	walk_up
	walk_up
	step_end

MtPyre_Summit_EventScript_TeamAquaExits_Text_0:
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: I thought something was a\nbit noisy and who is it but the usual\lscamp!\pSorry, scampo, but I'm afraid I just\ndon't have time to play with you right\lnow.\pMaxie got ahead of us but we also got\nwhat we wanted.\pThe Blue Orb that's long been enshrined\nhere at Mt. Pyre…\lIt belongs to Team Aqua now!$"

MtPyre_Summit_EventScript_TeamAquaExits_Text_1:
	.string "…Ma-a-att!$"

MtPyre_Summit_EventScript_TeamAquaExits_Text_2:
	.string "{COLOR RED}Matt{COLOR DARK_GRAY}: Oh! Boss!$"

MtPyre_Summit_EventScript_TeamAquaExits_Text_3:
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: How about you do a favor for\nour lively little visitor, and keep him\lentertained?$"

MtPyre_Summit_EventScript_TeamAquaExits_Text_4:
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: How about you do a favor for\nour lively little visitor, and keep her\lentertained?$"

MtPyre_Summit_EventScript_TeamAquaExits_Text_5:
	.string "You'd better use your full strength,\ntoo, so you don't offend our honored\lguest!\pBwahahahaha!\pWith this Blue Orb in my hands, I won't\neven need the power of the Meteorite\lto awaken the beast from the deep!\pAll I need now is a way to get to the\nplace where it sleeps…\pAll I have to do is get that {COLOR BLUE}submarine{COLOR DARK_GRAY}\nthey're making in Slateport!\pCome on, boys!\nWe're for {COLOR BLUE}Slateport City{COLOR DARK_GRAY}!$"

MtPyre_Summit_EventScript_TeamAquaExits_Text_6:
	.string "{COLOR RED}Matt{COLOR DARK_GRAY}: All right then, until the\nBoss makes his getaway, I'll be your\lopponent!\pOohh…\nHa! Ha! Hah!$"

MtPyre_Summit_EventScript_TeamAquaExits_Text_7:
	.string "Muwuhahaha! That battle was fun even\nthough I lost!$"

MtPyre_Summit_EventScript_TeamAquaExits_Text_8:
	.string "That was fun!\pI knew you'd show me a good time!\pI look forward to facing you again\nsomeday!$"

MtPyre_Summit_EventScript_TeamAquaExits_Text_9:
	.string "{COLOR RED}Old Man{COLOR DARK_GRAY}: Aye, me, what disaster…\pThe Blue Orb and Red Orb…stolen from\nour safekeeping…$"

MtPyre_Summit_EventScript_TeamAquaExits_Text_10:
	.string "{COLOR RED}Old Lady{COLOR DARK_GRAY}: The Blue Orb and Red Orb must\nnever be separated.\lThey belong together…\pWhat are those men trying to do with\nthe two Orbs?\pHmm…$"

MtPyre_Summit_EventScript_TeamAquaExits_Text_11:
	.string "Young one, I beg you… Chase after\nthose thieves and take the orbs!\pThose wretched leader of theirs…\pWas it Team Magma who came and took\nthe Red Orb first?\pWell, in their haste, they left this\nbehind.\pI couldn't imagine what exactly it\ncould be.\pI would like you to have it.\nPerhaps it will be useful in some way.$"
