# 1 "data/maps/Route122/scripts.pory"

# 2 "data/maps/Route122/scripts.pory"
Route122_MapScripts::
# 3 "data/maps/Route122/scripts.pory"
	.byte 0

Route122_EventScript_TeamAquaGrunt::
# 9 "data/maps/Route122/scripts.pory"
	lock
# 10 "data/maps/Route122/scripts.pory"
	faceplayer
# 11 "data/maps/Route122/scripts.pory"
	msgbox Route122_EventScript_TeamAquaGrunt_Text_0
# 12 "data/maps/Route122/scripts.pory"
	closemessage
# 13 "data/maps/Route122/scripts.pory"
	release
	end


Route122_EventScript_TeamAquaGrunt_Text_0:
# 11 "data/maps/Route122/scripts.pory"
	.string "NOPE, you're not getting\nthrough--boss's orders, and I'm not\labout to mess that up!\pGo run to Lilycove or something,\nmaybe cry to your little Pokémon\lwhile you're at it!$"
