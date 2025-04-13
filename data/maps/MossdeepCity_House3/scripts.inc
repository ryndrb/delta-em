# 1 "data/maps/MossdeepCity_House3/scripts.pory"

# 2 "data/maps/MossdeepCity_House3/scripts.pory"
MossdeepCity_House3_MapScripts::
# 3 "data/maps/MossdeepCity_House3/scripts.pory"
	.byte 0

MossdeepCity_House3_EventScript_RetiredFisherman::
# 8 "data/maps/MossdeepCity_House3/scripts.pory"
	lock
# 9 "data/maps/MossdeepCity_House3/scripts.pory"
	faceplayer
# 10 "data/maps/MossdeepCity_House3/scripts.pory"
	goto_if_set FLAG_TEMP_1, MossdeepCity_House3_EventScript_RetiredFisherman_2
# 13 "data/maps/MossdeepCity_House3/scripts.pory"
	msgbox MossdeepCity_House3_EventScript_RetiredFisherman_Text_1
# 14 "data/maps/MossdeepCity_House3/scripts.pory"
	msgbox MossdeepCity_House3_EventScript_RetiredFisherman_Text_0
# 15 "data/maps/MossdeepCity_House3/scripts.pory"
	setflag FLAG_TEMP_1
MossdeepCity_House3_EventScript_RetiredFisherman_1:
# 17 "data/maps/MossdeepCity_House3/scripts.pory"
	closemessage
# 18 "data/maps/MossdeepCity_House3/scripts.pory"
	release
	end

MossdeepCity_House3_EventScript_RetiredFisherman_2:
# 11 "data/maps/MossdeepCity_House3/scripts.pory"
	msgbox MossdeepCity_House3_EventScript_RetiredFisherman_Text_0
	goto MossdeepCity_House3_EventScript_RetiredFisherman_1


MossdeepCity_House3_EventScript_RetiredFisherman_Text_0:
# 11 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "And who knows? Maybe I'll even take up\na new hobby in me retirement.\pBut for now, I'll be content just\nwatching the waves and reminiscing\labout all the good times I've 'ad.$"

MossdeepCity_House3_EventScript_RetiredFisherman_Text_1:
# 13 "data/maps/MossdeepCity_House3/scripts.pory"
	.string "Ahoy there, lad!\pI'm a fisherman here in good ol' Hoenn,\nand I've spent me entire life on the\lwater.\pBut alas, it's time for me to retire and\nhang up me trusty ol' fishing rod.\pDon't get me wrong, I still love fishing\nas much as the day I started.\lIt's a way of life, you know?\pLike a tune that never ends, a dance\nthat goes on forever.\pAnd I've caught some real whoppers in\nme time, let me tell 'ya!\pFrom the depths of the sea to the\nwinding rivers, I've seen it all!\pBut there's one thing I've always\nwanted to see, and that's a truly\lmassive Magikarp.\pSo 'ere's a request to you, my young\nfriend.\pIf you happen to catch a big one with\nthat trusty ol' fishing rod of yours,\lI'd love to see it.\pIt'd be a fitting end to me career\nas a fisherman, to see a Magikarp\lthat's truly legendary.\pI'll be hanging up me boots soon, but\nI'll never forget the joy that fishing\lhas brought me.$"
