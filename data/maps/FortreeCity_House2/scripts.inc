FortreeCity_House2_MapScripts::
	.byte 0

FortreeCity_House2_EventScript_HiddenPowerGiver::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM_HIDDEN_POWER, FortreeCity_House2_EventScript_ExplainHiddenPower
	call_if_unset FLAG_MET_HIDDEN_POWER_GIVER, FortreeCity_House2_EventScript_Greeting
	msgbox FortreeCity_House2_Text_CoinInWhichHand, MSGBOX_DEFAULT
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
	switch VAR_RESULT
	case 1, FortreeCity_House2_EventScript_WrongGuess
	msgbox FortreeCity_House2_Text_CorrectTryAgainWhichHand, MSGBOX_DEFAULT
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
	switch VAR_RESULT
	case 1, FortreeCity_House2_EventScript_WrongGuess
	msgbox FortreeCity_House2_Text_CorrectTryAgainWhichHand2, MSGBOX_DEFAULT
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
	switch VAR_RESULT
	case 0, FortreeCity_House2_EventScript_WrongGuess
	msgbox FortreeCity_House2_Text_YourHiddenPowerHasAwoken, MSGBOX_DEFAULT
	giveitem ITEM_TM_HIDDEN_POWER
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM_HIDDEN_POWER
	msgbox FortreeCity_House2_Text_ExplainHiddenPower, MSGBOX_DEFAULT
	release
	end

FortreeCity_House2_EventScript_Greeting::
	msgbox FortreeCity_House2_Text_HiddenPowersArousedByNature, MSGBOX_DEFAULT
	setflag FLAG_MET_HIDDEN_POWER_GIVER
	return

FortreeCity_House2_EventScript_ExplainHiddenPower::
	msgbox FortreeCity_House2_Text_ExplainHiddenPower, MSGBOX_DEFAULT
	release
	end

FortreeCity_House2_EventScript_WrongGuess::
	msgbox FortreeCity_House2_Text_YouGuessedWrong, MSGBOX_DEFAULT
	release
	end

FortreeCity_House2_Text_HiddenPowersArousedByNature:
	.string "People… Pokémon…\pTheir hidden powers are awakened by\nliving in natural environments…$"

FortreeCity_House2_Text_CoinInWhichHand:
	.string "Let this old woman see if your hidden\npower has awakened.\pLet's see…\pI hold a coin in my hand.\pNow tell me, which hand holds the coin,\nthe right hand or the left?$"

FortreeCity_House2_Text_CorrectTryAgainWhichHand:
	.string "You are correct!\pLet us try again.\pI hold a coin in my hand.\pNow tell me, which hand holds the coin\nthe right or the left?$"

FortreeCity_House2_Text_CorrectTryAgainWhichHand2:
	.string "Yes, correct again!\pWe shall try once more.\pI hold a coin in my hand.\pNow tell me, which hand holds the coin\nthe right or the left?$"

FortreeCity_House2_Text_YourHiddenPowerHasAwoken:
	.string "Splendid!\nYour hidden power has awakened!\pHere, take this and awaken the hidden\npower of your Pokémon.$"

FortreeCity_House2_Text_ExplainHiddenPower:
	.string "Hidden Power varies in type depending\non the Pokémon using it.$"

FortreeCity_House2_Text_YouGuessedWrong:
	.string "No, too bad.\nYou guessed wrong.$"
