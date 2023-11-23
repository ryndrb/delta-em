PacifidlogTown_House1_MapScripts::
	.byte 0

PacifidlogTown_House1_EventScript_Man::
	msgbox PacifidlogTown_House1_Text_RegiStory, MSGBOX_NPC
	end

PacifidlogTown_House1_EventScript_Woman::
	msgbox PacifidlogTown_House1_Text_SixDotsOpenThreeDoors, MSGBOX_NPC
	end

PacifidlogTown_House1_Text_RegiStory:
	.string "In the Hoenn region, there are three\nPokémon that represent the power of\lrock, ice, and steel.\pEach is said to hide away deep inside\na cave.\pThat's the story I heard when I was\njust a little kid.$"

PacifidlogTown_House1_Text_SixDotsOpenThreeDoors:
	.string "“Six dots open three doors.”\p"
	.string "Grandpa used to say that, but I don't\n"
	.string "know what he meant.$"

