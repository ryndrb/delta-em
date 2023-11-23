PacifidlogTown_House4_MapScripts::
	.byte 0

PacifidlogTown_House4_EventScript_LittleGirl::
	msgbox PacifidlogTown_House4_Text_SkyPokemon, MSGBOX_NPC
	end

PacifidlogTown_House4_EventScript_Woman::
	msgbox PacifidlogTown_House4_Text_PeopleSawHighFlyingPokemon, MSGBOX_NPC
	end

PacifidlogTown_House4_EventScript_Boy::
	lock
	faceplayer
	msgbox PacifidlogTown_House4_Text_WhereDidYouComeFrom, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PacifidlogTown_House4_EventScript_Yes
	goto_if_eq VAR_RESULT, NO, PacifidlogTown_House4_EventScript_No
	end

PacifidlogTown_House4_EventScript_Yes::
	msgbox PacifidlogTown_House4_Text_YesTown, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House4_EventScript_No::
	msgbox PacifidlogTown_House4_Text_YouHaveToComeFromSomewhere, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House4_Text_PeopleSawHighFlyingPokemon:
	.string "People say they've seen a Pokémon\nflying high in the sky above Hoenn.\pIs it flying around all the time?\nDoesn't it need to rest somewhere?$"

PacifidlogTown_House4_Text_SkyPokemon:
	.string "A sky Pokémon!\n"
	.string "A sky Pokémon!$"

PacifidlogTown_House4_Text_WhereDidYouComeFrom:
	.string "Where did you come from?$"

PacifidlogTown_House4_Text_YesTown:
	.string "Yes?\n"
	.string "Yes Town?\p"
	.string "I've never heard of a place like that.$"

PacifidlogTown_House4_Text_YouHaveToComeFromSomewhere:
	.string "No?\nThat doesn't make any sense.\lYou have to come from somewhere.\pOh!\nWait!\pYou're not going to say you were born\nat the bottom of the sea?$"

