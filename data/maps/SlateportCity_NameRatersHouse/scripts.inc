# 1 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 2 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_MapScripts::
# 3 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.byte 0
# 4 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 5 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_NameRater::
# 6 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	lock
# 7 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	faceplayer
# 8 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_PleasedToRateMonNickname, MSGBOX_YESNO
# 9 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_NameRatersHouse_EventScript_ChooseMonToRate
# 10 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_NameRatersHouse_EventScript_DeclineNameRate
# 11 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 12 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 13 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_ChooseMonToRate::
# 14 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_CritiqueWhichMonNickname, MSGBOX_DEFAULT
# 15 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special ChoosePartyMon
# 16 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	waitstate
# 17 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_ne VAR_0x8004, PARTY_NOTHING_CHOSEN, SlateportCity_NameRatersHouse_EventScript_RateMonNickname
# 18 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SlateportCity_NameRatersHouse_EventScript_DeclineNameRate
# 19 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 20 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 21 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_DeclineNameRate::
# 22 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_DoVisitAgain, MSGBOX_DEFAULT
# 23 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 24 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 25 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 26 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_RateMonNickname::
# 27 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 28 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, SlateportCity_NameRatersHouse_EventScript_CantRateEgg
# 29 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special BufferMonNickname
# 30 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special IsMonOTIDNotPlayers
# 31 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT
# 32 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	specialvar VAR_RESULT, MonOTNameNotPlayer
# 33 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special BufferMonNickname
# 34 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT
# 35 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_FineNameSuggestBetterOne, MSGBOX_YESNO
# 36 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_NameRatersHouse_EventScript_ChangeNickname
# 37 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_NameRatersHouse_EventScript_DeclineNameRate
# 38 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 39 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 40 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_CantRateEgg::
# 41 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_ThatIsMerelyAnEgg, MSGBOX_DEFAULT
# 42 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 43 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 44 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 45 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT::
# 46 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_MagnificentName, MSGBOX_DEFAULT
# 47 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 48 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 49 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 50 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_ChangeNickname::
# 51 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_WhatShallNewNameBe, MSGBOX_DEFAULT
# 52 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 53 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
# 54 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special BufferMonNickname
# 55 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_NameRatersHouse_EventScript_NewNameDifferent
# 56 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_NameNoDifferentYetSuperior, MSGBOX_DEFAULT
# 57 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 58 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 59 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 60 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_EventScript_NewNameDifferent::
# 61 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_MonShallBeKnownAsName, MSGBOX_DEFAULT
# 62 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	release
# 63 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	end
# 64 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 65 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_PleasedToRateMonNickname:
# 66 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Hello, hello!\nI am the official Name Rater!\pI can more or less tell your Pokémon's\nfortune by its name.\pWant me to rate the nicknames of your\nPokémon?$"
# 67 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 68 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_CritiqueWhichMonNickname:
# 69 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Which Pokémon's nickname should I\nrate for you?$"
# 70 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 71 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_FineNameSuggestBetterOne:
# 72 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Hmmm. {STR_VAR_1}, is it?\pYou picked quite a find nickname.\pBut I think we could give it something\neven better. What do you say?$"
# 73 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 74 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_WhatShallNewNameBe:
# 75 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "I see! What would you like the new\nnickname to be?$"
# 76 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 77 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_MonShallBeKnownAsName:
# 78 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Done! From now on, this Pokémon will\nbe known as {STR_VAR_1}!\pYou're right, that does seem to fit\nit better. Nicely done!$"
# 79 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 80 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_DoVisitAgain:
# 81 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "OK! Come see me again if you change\nyour mind.$"
# 82 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 83 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_NameNoDifferentYetSuperior:
# 84 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Done! From now on, this Pokémon will\nbe known as {STR_VAR_1}!\pIt looks no different from before,\nbut we both know this name is vastly\lsuperior! How fortunate for you!$"
# 85 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 86 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_MagnificentName:
# 87 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Hmmm… {STR_VAR_1} it is!\p"
# 88 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "This is a magnificent nickname!\n"
# 89 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "It is impeccably beyond reproach!\p"
# 90 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "You'll do well to cherish your\n"
# 91 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "{STR_VAR_1} now and beyond.$"
# 92 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"

# 93 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
SlateportCity_NameRatersHouse_Text_ThatIsMerelyAnEgg:
# 94 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Now, now.\n"
# 95 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "That is merely an Egg!$"
