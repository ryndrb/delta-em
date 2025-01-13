# 1 "data/maps/MauvilleCity_House1/scripts.pory"

# 2 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_MapScripts::
# 3 "data/maps/MauvilleCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_House1/scripts.pory"

# 5 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_WinceDude::
# 6 "data/maps/MauvilleCity_House1/scripts.pory"
	lock
# 7 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 8 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_WinceDude, MSGBOX_DEFAULT
# 9 "data/maps/MauvilleCity_House1/scripts.pory"
	release
# 10 "data/maps/MauvilleCity_House1/scripts.pory"
	end
# 11 "data/maps/MauvilleCity_House1/scripts.pory"

# 12 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_WinceDude:
# 13 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Hey there, fellow Trainer!\pSo, like, have you ever, um,\nwondered about, uh, Pokémon types\land stuff?\pI mean, they're, like, super cool,\nright?\pWater-types are, like, totally\nrad against Fire-types, but, like,\lElectric-types can be, you know,\l{PAUSE 32}shocking!\pBut like, anyway, catch you on the\nPokéflip side!\lWoohoo!$"
