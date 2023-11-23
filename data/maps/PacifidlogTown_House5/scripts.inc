PacifidlogTown_House5_MapScripts::
	.byte 0

PacifidlogTown_House5_EventScript_MirageIslandWatcher::
	lock
	faceplayer
	specialvar VAR_RESULT, IsMirageIslandPresent
	goto_if_eq VAR_RESULT, TRUE, PacifidlogTown_House5_EventScript_MirageIslandPresent
	msgbox PacifidlogTown_House5_Text_AppearDisappear, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House5_EventScript_MirageIslandPresent::
	msgbox PacifidlogTown_House5_Text_CanSeeMirageIslandToday, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House5_Text_AppearDisappear:
	.string "They say, here in Hoenn, there are\nplaces called Mirage Spots.\pOne does not simply walk into a Mirage\nspot.\pNot to mention that these places also\nappear and disappear mysteriously.$"

PacifidlogTown_House5_Text_CanSeeMirageIslandToday:
	.string "Oh!\nOh my!\lI can see a Mirage Spot today!$"

PacifidlogTown_House5_EventScript_Gentleman::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_TM_PSYSHOCK, PacifidlogTown_House5_EventScript_Gentleman_2
PacifidlogTown_House5_EventScript_Gentleman_1:
	msgbox PacifidlogTown_House5_EventScript_Gentleman_Text_1
	closemessage
	release
	end

PacifidlogTown_House5_EventScript_Gentleman_2:
	msgbox PacifidlogTown_House5_EventScript_Gentleman_Text_0
	delay 8
	setflag FLAG_RECEIVED_TM_PSYSHOCK
	goto PacifidlogTown_House5_EventScript_Gentleman_1


PacifidlogTown_House5_EventScript_Gentleman_Text_0:
	.string "I've been to a Mirage Spot…\nI'm sure of it. But I forgot where it is.\pI used to be very good at remembering\nthings…\pI'm so shocked that I can't remember…$"

PacifidlogTown_House5_EventScript_Gentleman_Text_1:
	.string "Mirage Spots…\pIt must be the weather conditions\nthat seem to make them visible at\lsome times and not others.\pOr are they truly appearing and\ndisappearing?$"
