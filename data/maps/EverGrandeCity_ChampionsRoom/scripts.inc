.set LOCALID_STEVEN, 1
.set LOCALID_RIVAL, 2
.set LOCALID_BIRCH, 3

EverGrandeCity_ChampionsRoom_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_ChampionsRoom_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_ChampionsRoom_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_ChampionsRoom_OnFrame
	.byte 0

EverGrandeCity_ChampionsRoom_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	end

EverGrandeCity_ChampionsRoom_OnWarp:
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth
	.2byte 0

EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

EverGrandeCity_ChampionsRoom_OnFrame:
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_EnterRoom
	.2byte 0

EverGrandeCity_ChampionsRoom_EventScript_EnterRoom::
	lockall
	delay 24
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp4
	waitmovement 0
	delay 96
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_STEVEN
	delay 32
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerApproachSteven
	waitmovement 0
	setvar VAR_TEMP_1, 1
	goto EverGrandeCity_ChampionsRoom_EventScript_Steven
	releaseall
	end

EverGrandeCity_ChampionsRoom_Movement_PlayerApproachSteven:
	walk_up
	walk_up
	step_end

EverGrandeCity_ChampionsRoom_EventScript_Steven::
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_0
	closemessage
	delay 32
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_1
	delay 24
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_2
	closemessage
	delay 24
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_3
	closemessage
	delay 32
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_4
	closemessage
	trainerbattle_no_intro TRAINER_STEVEN, EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_5
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_6
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_7
	closemessage
	delay 24
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_8
	closemessage
	playse SE_DOOR
	delay 16
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_Steven_2
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
EverGrandeCity_ChampionsRoom_EventScript_Steven_1:
	addobject LOCALID_RIVAL
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer
	waitmovement LOCALID_RIVAL
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	waitmovement OBJ_EVENT_ID_PLAYER
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_Steven_6
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_10
EverGrandeCity_ChampionsRoom_EventScript_Steven_5:
	closemessage
	delay 8
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement LOCALID_RIVAL
	delay 16
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth
	waitmovement LOCALID_RIVAL
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_Steven_10
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_12
EverGrandeCity_ChampionsRoom_EventScript_Steven_9:
	closemessage
	playse SE_DOOR
	addobject LOCALID_BIRCH
	applymovement LOCALID_BIRCH, EverGrandeCity_ChampionsRoom_Movement_BirchArrives
	waitmovement LOCALID_BIRCH
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_13
	closemessage
	delay 24
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_14
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_15
	closemessage
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceUp
	waitmovement LOCALID_STEVEN
	delay 16
	playse SE_DOOR
	setmetatile 6, 1, METATILE_EliteFour_OpenDoorChampion_Frame, FALSE
	setmetatile 6, 2, METATILE_EliteFour_OpenDoorChampion_Opening, FALSE
	special DrawWholeMapView
	delay 32
	applymovement LOCALID_STEVEN, EverGrandeCity_ChampionsRoom_Movement_StevenExitStart
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceUp
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalFollows
	waitmovement 0
	delay 24
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_16
	delay 16
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_Steven_14
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_19
	closemessage
	delay 32
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_20
EverGrandeCity_ChampionsRoom_EventScript_Steven_13:
	closemessage
	delay 16
	applymovement LOCALID_STEVEN, EverGrandeCity_ChampionsRoom_Movement_WallaceExit
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExit
	waitmovement OBJ_EVENT_ID_PLAYER
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
	warp MAP_EVER_GRANDE_CITY_HALL_OF_FAME, 7, 16
	waitstate
	releaseall
	end

EverGrandeCity_ChampionsRoom_EventScript_Steven_2:
	playbgm MUS_ENCOUNTER_MAY, FALSE
	goto EverGrandeCity_ChampionsRoom_EventScript_Steven_1

EverGrandeCity_ChampionsRoom_EventScript_Steven_6:
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_9
	goto EverGrandeCity_ChampionsRoom_EventScript_Steven_5

EverGrandeCity_ChampionsRoom_EventScript_Steven_10:
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_11
	goto EverGrandeCity_ChampionsRoom_EventScript_Steven_9

EverGrandeCity_ChampionsRoom_EventScript_Steven_14:
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_17
	closemessage
	delay 32
	msgbox EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_18
	goto EverGrandeCity_ChampionsRoom_EventScript_Steven_13


EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_up
	walk_in_place_right
	step_end

EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth:
	walk_in_place_up
	delay_16
	walk_in_place_right
	delay_16
	walk_in_place_up
	delay_16
	walk_in_place_right
	delay_16
	step_end

EverGrandeCity_ChampionsRoom_Movement_BirchArrives:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_up
	walk_in_place_left
	step_end

EverGrandeCity_ChampionsRoom_Movement_StevenExitStart:
	walk_up
	walk_up
	walk_in_place_down
	step_end

EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart:
	walk_up
	walk_up
	step_end

EverGrandeCity_ChampionsRoom_Movement_RivalFollows:
	walk_right
	walk_up
	step_end

EverGrandeCity_ChampionsRoom_Movement_WallaceExit:
	walk_up
	delay_8
	set_invisible
	step_end

EverGrandeCity_ChampionsRoom_Movement_PlayerExit:
	walk_up
	delay_16
	walk_up
	delay_8
	set_invisible
	step_end

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_0:
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: Welcome, {PLAYER}.$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_1:
	.string "I was hoping I would get to see you\nmake it here one day.$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_2:
	.string "Tell me…\pWhat have you seen on your journey\nwith your Pokémon?\pWhat have you felt, meeting so many\nother Trainers out there?$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_3:
	.string "Traveling this rich land of Hoenn…\nHas it awoken something inside you?\pI want you to come at me with all that\nyou've learned.\pMy Pokémon and I will respond in turn\nwith all that we know!$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_4:
	.string "Let it begin!$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_5:
	.string "So I, the Champion, fall in defeat…$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_6:
	.string "Just as I have come to expect.\p{PLAYER}, you are truly an excellent\nPokémon Trainer.\pCongratulations to you!\pAnd thank you…\pI had wanted to learn how you feel\nabout this world, what kind of ideals\lyou have developed with your Pokémon…\pI feel I was able to find the answer in\nour battle.$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_7:
	.string "The feelings you have for your\nPokémon…\pAnd the way that your Pokémon\ngave their all in battle in response\lto those feelings…\pThose two together created a great\npower.\pThat is how you seized victory today.$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_8:
	.string "I felt a thrill of excitement in my\nchest when we first met, and now I\lknow for sure that feeling was not\lmisplaced!\pYou are rightfully the Hoenn region's\nnew…$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_9:
	.string "{COLOR RED}May{COLOR DARK_GRAY}: {PLAYER}, wait!\pI've got some advice you've got to hear\nbefore you challenge the Champion…$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_10:
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: {PLAYER}!\pBefore you go challenge the Champion,\nI've got one last thing you've got to$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_11:
	.string "Huh?\nWait--what? What?\p{PLAYER}…\nCould it be that…\lIt's already over?$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_12:
	.string "{PLAYER}…\nYou didn't…\lNo, you couldn't have…\pDid you already beat the Champion?!$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_13:
	.string "{COLOR RED}Prof. Birch{COLOR DARK_GRAY}: See?\nWhat did I say, {RIVAL}?\pDidn't I tell you that {PLAYER}\nwould be just fine.$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_14:
	.string "{PLAYER}, you've finally done it.\pWhen I heard that you defeated your\nown father at the Petalburg Gym, I\lthought perhaps you had a chance…\pBut to think you've actually become\nthe Champion!\pBut congratulations on today's\nvictory!\pNow go in there with your head held\nhigh!$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_15:
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: {PLAYER}…\pNo, I should call you the Hoenn's\nregion's new Pokémon League Champion…\pCome with me, Champion.$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_16:
	.string "{COLOR RED}Steven{COLOR DARK_GRAY}: I'm very sorry…\pBut only a Trainer who has successfully\nbecome the Champion may go beyond\lthis point.\pYou'll need to wait outside with the\nprofessor.$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_17:
	.string "{COLOR RED}May{COLOR DARK_GRAY}: No waaay!$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_18:
	.string "Just joking!\nIt's OK! It's fine!\pRules are rules, right?\p{PLAYER}!\nHonestly, congratulations!$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_19:
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: What--…$"

EverGrandeCity_ChampionsRoom_EventScript_Steven_Text_20:
	.string "Can't be helped, I guess.\pThem's the rules, right?\pThat's awesome, {PLAYER}.\pCongratulations…really!$"
