Route113_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Route113_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, Route113_OnTransition
	.byte 0

Route113_OnResume:
	setstepcallback STEP_CB_ASH
	end

Route113_OnTransition:
    call Common_EventScript_SetupRivalGfxId
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
	call Route113_EventScript_CheckSetAshWeather
	end

Route113_EventScript_CheckSetAshWeather::
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	goto_if_lt VAR_TEMP_0, 19, Route113_EventScript_DontSetAshWeather
	goto_if_gt VAR_TEMP_0, 84, Route113_EventScript_DontSetAshWeather
	setweather WEATHER_VOLCANIC_ASH
	return

Route113_EventScript_DontSetAshWeather::
	return

Route113_EventScript_Gentleman::
	msgbox Route113_Text_AshCanBeFashionedIntoGlass, MSGBOX_NPC
	end

Route113_EventScript_NinjaBoy::
	msgbox Route113_Text_FunWalkingThroughAsh, MSGBOX_NPC
	end

Route113_EventScript_RouteSign111::
	msgbox Route113_Text_RouteSign111, MSGBOX_SIGN
	end

Route113_EventScript_RouteSignFallarbor::
	msgbox Route113_Text_RouteSignFallarbor, MSGBOX_SIGN
	end

Route113_EventScript_GlassWorkshopSign::
	msgbox Route113_Text_GlassWorkshopSign, MSGBOX_SIGN
	end

Route113_EventScript_TrainerTipsRegisterKeyItems::
	msgbox Route113_Text_TrainerTipsRegisterKeyItems, MSGBOX_SIGN
	end

Route113_EventScript_Jaylen::
	trainerbattle_single TRAINER_JAYLEN, Route113_Text_JaylenIntro, Route113_Text_JaylenDefeat
	msgbox Route113_Text_JaylenPostBattle, MSGBOX_AUTOCLOSE
	end

Route113_EventScript_Dillon::
	trainerbattle_single TRAINER_DILLON, Route113_Text_DillonIntro, Route113_Text_DillonDefeat
	msgbox Route113_Text_DillonPostBattle, MSGBOX_AUTOCLOSE
	end

Route113_EventScript_Madeline::
	trainerbattle_single TRAINER_MADELINE_1, Route113_Text_MadelineIntro, Route113_Text_MadelineDefeat, Route113_EventScript_RegisterMadeline
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route113_EventScript_RematchMadeline
	msgbox Route113_Text_MadelinePostBattle, MSGBOX_DEFAULT
	release
	end

Route113_EventScript_RegisterMadeline::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route113_Text_MadelineRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_MADELINE_1
	release
	end

Route113_EventScript_RematchMadeline::
	trainerbattle_rematch TRAINER_MADELINE_1, Route113_Text_MadelineRematchIntro, Route113_Text_MadelineRematchDefeat
	msgbox Route113_Text_MadelinePostRematch, MSGBOX_AUTOCLOSE
	end

Route113_EventScript_Lao::
	trainerbattle_single TRAINER_LAO_1, Route113_Text_LaoIntro, Route113_Text_LaoDefeat, Route113_EventScript_RegisterLao
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route113_EventScript_RematchLao
	msgbox Route113_Text_LaoPostBattle, MSGBOX_DEFAULT
	release
	end

Route113_EventScript_RegisterLao::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route113_Text_LaoRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_LAO_1
	release
	end

Route113_EventScript_RematchLao::
	trainerbattle_rematch TRAINER_LAO_1, Route113_Text_LaoRematchIntro, Route113_Text_LaoRematchDefeat
	msgbox Route113_Text_LaoPostRematch, MSGBOX_AUTOCLOSE
	end

Route113_EventScript_Lung::
	trainerbattle_single TRAINER_LUNG, Route113_Text_LungIntro, Route113_Text_LungDefeat
	msgbox Route113_Text_LungPostBattle, MSGBOX_AUTOCLOSE
	end

Route113_EventScript_Tori::
	trainerbattle_double TRAINER_TORI_AND_TIA, Route113_Text_ToriIntro, Route113_Text_ToriDefeat, Route113_Text_ToriNotEnoughMons
	msgbox Route113_Text_ToriPostBattle, MSGBOX_AUTOCLOSE
	end

Route113_EventScript_Tia::
	trainerbattle_double TRAINER_TORI_AND_TIA, Route113_Text_TiaIntro, Route113_Text_TiaDefeat, Route113_Text_TiaNotEnoughMons
	msgbox Route113_Text_TiaPostBattle, MSGBOX_AUTOCLOSE
	end

Route113_EventScript_Sophie::
	trainerbattle_single TRAINER_SOPHIE, Route113_Text_SophieIntro, Route113_Text_SophieDefeat
	msgbox Route113_Text_SophiePostBattle, MSGBOX_AUTOCLOSE
	end

Route113_EventScript_Coby::
	trainerbattle_single TRAINER_COBY, Route113_Text_CobyIntro, Route113_Text_CobyDefeat
	msgbox Route113_Text_CobyPostBattle, MSGBOX_AUTOCLOSE
	end

Route113_EventScript_Lawrence::
	trainerbattle_single TRAINER_LAWRENCE, Route113_Text_LawrenceIntro, Route113_Text_LawrenceDefeat
	msgbox Route113_Text_LawrencePostBattle, MSGBOX_AUTOCLOSE
	end

Route113_EventScript_Wyatt::
	trainerbattle_single TRAINER_WYATT, Route113_Text_WyattIntro, Route113_Text_WyattDefeat
	msgbox Route113_Text_WyattPostBattle, MSGBOX_AUTOCLOSE
	end

Route113_Text_AshCanBeFashionedIntoGlass:
	.string "Wahahaha!\pToday's technology is a wondrous\nthing!\pTake this volcanic ash here.\nIt can be fashioned into glass.$"

Route113_Text_FunWalkingThroughAsh:
	.string "It's fun walking through the volcano's\nashes on the ground and grass.\pYou can see where you walked--it's\nreally neat!$"

Route113_Text_RouteSign111:
	.string "Route 113\n"
	.string "{RIGHT_ARROW} Route 111$"

Route113_Text_RouteSignFallarbor:
	.string "Route 113\n"
	.string "{LEFT_ARROW} Fallarbor Town$"

Route113_Text_TrainerTipsRegisterKeyItems:
	.string "Trainer Tips\pYou may register one of the Key Items\nin your Bag as Select.\pSimply press Select to use the\nregistered item conveniently.$"

Route113_Text_GlassWorkshopSign:
	.string "Glass Workshop\n"
	.string "“Turning Volcanic Ash into Glass Items”$"

Route113_EventScript_RivalTrigger1::
	setvar VAR_TEMP_0, 1
	goto Route113_EventScript_Rival
	return


Route113_EventScript_RivalTrigger2::
	setvar VAR_TEMP_0, 2
	goto Route113_EventScript_Rival
	return


Route113_EventScript_RivalTrigger3::
	setvar VAR_TEMP_0, 3
	goto Route113_EventScript_Rival
	return


Route113_EventScript_Rival::
	lock
	delay 8
	applymovement 17, Common_Movement_WalkInPlaceRight
	waitmovement 17
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Route113_EventScript_Rival_2
	msgbox Route113_EventScript_Rival_Text_1
Route113_EventScript_Rival_1:
	closemessage
	switch VAR_TEMP_0
	case 1, Route113_EventScript_Rival_7
	case 2, Route113_EventScript_Rival_8
	case 3, Route113_EventScript_Rival_9
Route113_EventScript_Rival_5:
	waitmovement 17
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Route113_EventScript_Rival_11
	msgbox Route113_EventScript_Rival_Text_3
Route113_EventScript_Rival_10:
	closemessage
	delay 8
	playse SE_PIN
	applymovement 17, Common_Movement_ExclamationMark
	waitmovement 17
	waitse
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Route113_EventScript_Rival_15
	msgbox Route113_EventScript_Rival_Text_5
Route113_EventScript_Rival_14:
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	playse SE_USE_ITEM
	special HealPlayerParty
	waitse
	delay 8
	fadescreenswapbuffers FADE_FROM_BLACK
	msgbox Route113_EventScript_Rival_Text_6
	delay 8
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Route113_EventScript_Rival_19
	msgbox Route113_EventScript_Rival_Text_8
Route113_EventScript_Rival_18:
	closemessage
	delay 8
	applymovement 17, Common_Movement_WalkInPlaceLeft
	delay 64
	applymovement 17, Common_Movement_WalkInPlaceRight
	waitmovement 17
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Route113_EventScript_Rival_23
	msgbox Route113_EventScript_Rival_Text_10
Route113_EventScript_Rival_22:
	closemessage
	applymovement 17, Route113_Movement_RivalExit
	waitmovement 17
	removeobject 17
	setvar VAR_ROUTE113_STATE, 1
	release
	end

Route113_EventScript_Rival_2:
	msgbox Route113_EventScript_Rival_Text_0
	goto Route113_EventScript_Rival_1

Route113_EventScript_Rival_7:
	applymovement 17, Route113_Movement_RivalGotoPlayer1
	goto Route113_EventScript_Rival_5

Route113_EventScript_Rival_8:
	applymovement 17, Route113_Movement_RivalGotoPlayer2
	goto Route113_EventScript_Rival_5

Route113_EventScript_Rival_9:
	applymovement 17, Route113_Movement_RivalGotoPlayer3
	goto Route113_EventScript_Rival_5

Route113_EventScript_Rival_11:
	msgbox Route113_EventScript_Rival_Text_2
	goto Route113_EventScript_Rival_10

Route113_EventScript_Rival_15:
	msgbox Route113_EventScript_Rival_Text_4
	goto Route113_EventScript_Rival_14

Route113_EventScript_Rival_19:
	msgbox Route113_EventScript_Rival_Text_7
	goto Route113_EventScript_Rival_18

Route113_EventScript_Rival_23:
	msgbox Route113_EventScript_Rival_Text_9
	goto Route113_EventScript_Rival_22


Route113_Movement_RivalGotoPlayer1:
	walk_right
	walk_right
	walk_right
	step_end

Route113_Movement_RivalGotoPlayer2:
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

Route113_Movement_RivalGotoPlayer3:
	walk_down
	walk_right
	walk_right
	walk_down
	walk_right
	step_end

Route113_Movement_RivalExit:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Route113_EventScript_Rival_Text_0:
	.string "{COLOR RED}May{COLOR DARK_GRAY}: Hey!$"

Route113_EventScript_Rival_Text_1:
	.string "{COLOR RED}Brendan{COLOR DARK_GRAY}: Phew…$"

Route113_EventScript_Rival_Text_2:
	.string "The road here is pretty long, huh?\pI got tired enough that I had to take a\nlittle break.$"

Route113_EventScript_Rival_Text_3:
	.string "It took a long time to make it this\nfar.\pEven I felt like I needed a little\nbreak.$"

Route113_EventScript_Rival_Text_4:
	.string "{PLAYER}, your Pokémon look tired\nthemselves.\lLet me take care of them for a sec.$"

Route113_EventScript_Rival_Text_5:
	.string "Looks like your team could use one, too,\n{PLAYER}.\lLemme patch them up for you.$"

Route113_EventScript_Rival_Text_6:
	.string "Your team's health was restored!$"

Route113_EventScript_Rival_Text_7:
	.string "…There!\nThat's all better.\pI'm on my way to pay a visit to\nProfessor Cozmo.\pHe's famous for his research on\nMeteorites.\pHe was working on a project with my\ndad--um, I mean, Professor Birch--on\lhow Meteorites might affect Pokémon.$"

Route113_EventScript_Rival_Text_8:
	.string "…There.\nThat's them sorted.\pI'm on my way to meet this Professor\nCozmo fellow, right?\pHe's super famous for his research on\nMeteorites.\pHe even worked with my dad--I mean,\nwith Professor Birch--on figuring out\lif Meteorites could have any effect\lon Pokémon.$"

Route113_EventScript_Rival_Text_9:
	.string "Enough dawdling!\pI think it's not much farther to\nFallarbor.\lLet's give it one last push!$"

Route113_EventScript_Rival_Text_10:
	.string "OK!\nTime to get moving again!\lI think Fallarbor's pretty close now.\pLet's both give it one last push!$"
