# 1 "data/maps/PacifidlogTown_House5/scripts.pory"

# 2 "data/maps/PacifidlogTown_House5/scripts.pory"
PacifidlogTown_House5_MapScripts::
# 3 "data/maps/PacifidlogTown_House5/scripts.pory"
	.byte 0
# 4 "data/maps/PacifidlogTown_House5/scripts.pory"

# 5 "data/maps/PacifidlogTown_House5/scripts.pory"
PacifidlogTown_House5_EventScript_MirageIslandWatcher::
# 6 "data/maps/PacifidlogTown_House5/scripts.pory"
	lock
# 7 "data/maps/PacifidlogTown_House5/scripts.pory"
	faceplayer
# 8 "data/maps/PacifidlogTown_House5/scripts.pory"
	specialvar VAR_RESULT, IsMirageIslandPresent
# 9 "data/maps/PacifidlogTown_House5/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PacifidlogTown_House5_EventScript_MirageIslandPresent
# 10 "data/maps/PacifidlogTown_House5/scripts.pory"
	msgbox PacifidlogTown_House5_Text_AppearDisappear, MSGBOX_DEFAULT
# 11 "data/maps/PacifidlogTown_House5/scripts.pory"
	release
# 12 "data/maps/PacifidlogTown_House5/scripts.pory"
	end
# 13 "data/maps/PacifidlogTown_House5/scripts.pory"

# 14 "data/maps/PacifidlogTown_House5/scripts.pory"
PacifidlogTown_House5_EventScript_MirageIslandPresent::
# 15 "data/maps/PacifidlogTown_House5/scripts.pory"
	msgbox PacifidlogTown_House5_Text_CanSeeMirageIslandToday, MSGBOX_DEFAULT
# 16 "data/maps/PacifidlogTown_House5/scripts.pory"
	release
# 17 "data/maps/PacifidlogTown_House5/scripts.pory"
	end
# 18 "data/maps/PacifidlogTown_House5/scripts.pory"

# 19 "data/maps/PacifidlogTown_House5/scripts.pory"
PacifidlogTown_House5_Text_AppearDisappear:
# 20 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "They say, here in Hoenn, there are\nplaces called Mirage Spots.\pOne does not simply walk into a Mirage\nspot.\pNot to mention that these places also\nappear and disappear mysteriously.$"
# 21 "data/maps/PacifidlogTown_House5/scripts.pory"

# 22 "data/maps/PacifidlogTown_House5/scripts.pory"
PacifidlogTown_House5_Text_CanSeeMirageIslandToday:
# 23 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "Oh!\nOh my!\lI can see a Mirage Spot today!$"

PacifidlogTown_House5_EventScript_Gentleman::
# 29 "data/maps/PacifidlogTown_House5/scripts.pory"
	lock
# 30 "data/maps/PacifidlogTown_House5/scripts.pory"
	faceplayer
# 31 "data/maps/PacifidlogTown_House5/scripts.pory"
	checkitem ITEM_TM_PSYSHOCK, 1
# 32 "data/maps/PacifidlogTown_House5/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PacifidlogTown_House5_EventScript_Gentleman_2
PacifidlogTown_House5_EventScript_Gentleman_1:
# 37 "data/maps/PacifidlogTown_House5/scripts.pory"
	msgbox PacifidlogTown_House5_EventScript_Gentleman_Text_1
# 38 "data/maps/PacifidlogTown_House5/scripts.pory"
	closemessage
# 39 "data/maps/PacifidlogTown_House5/scripts.pory"
	release
	end

PacifidlogTown_House5_EventScript_Gentleman_2:
# 33 "data/maps/PacifidlogTown_House5/scripts.pory"
	msgbox PacifidlogTown_House5_EventScript_Gentleman_Text_0
# 34 "data/maps/PacifidlogTown_House5/scripts.pory"
	delay 8
# 35 "data/maps/PacifidlogTown_House5/scripts.pory"
	giveitem ITEM_TM_PSYSHOCK
	goto PacifidlogTown_House5_EventScript_Gentleman_1


PacifidlogTown_House5_EventScript_Gentleman_Text_0:
# 33 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "I've been to a Mirage Spot…\nI'm sure of it. But I forgot where it is.\pI used to be very good at remembering\nthings…\pI'm so shocked that I can't remember…$"

PacifidlogTown_House5_EventScript_Gentleman_Text_1:
# 37 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "Mirage Spots…\pIt must be the weather conditions\nthat seem to make them visible at\lsome times and not others.\pOr are they truly appearing and\ndisappearing?$"
