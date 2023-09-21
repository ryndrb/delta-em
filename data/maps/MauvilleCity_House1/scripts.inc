MauvilleCity_House1_MapScripts::
	.byte 0

MauvilleCity_House1_EventScript_WinceDude::
	lock
	faceplayer
	msgbox MauvilleCity_House1_Text_WinceDude, MSGBOX_DEFAULT
	release
	end

MauvilleCity_House1_Text_WinceDude:
	.string "Hey there, fellow Trainer!\pSo, like, have you ever, um,\nwondered about, uh, Pokémon types\land stuff?\pI mean, they're, like, super cool,\nright?\pWater-types are, like, totally\nrad against Fire-types, but, like,\lElectric-types can be, you know,\l{PAUSE 32}shocking!\pBut like, anyway, catch you on the\nPokéflip side!\lWoohoo!$"
