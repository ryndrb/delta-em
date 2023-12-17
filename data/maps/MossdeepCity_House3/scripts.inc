MossdeepCity_House3_MapScripts::
	.byte 0

MossdeepCity_House3_EventScript_RetiredFisherman::
	lock
	faceplayer
	msgbox MossdeepCity_House3_EventScript_RetiredFisherman_Text_0
	msgbox MossdeepCity_House3_EventScript_RetiredFisherman_Text_1
	closemessage
	release
	end


MossdeepCity_House3_EventScript_RetiredFisherman_Text_0:
	.string "Ahoy there, lad!\pI'm a fisherman here in good ol' Hoenn,\nand I've spent me entire life on the\lwater.\pBut alas, it's time for me to retire and\nhang up me trusty ol' fishing rod.\pDon't get me wrong, I still love fishing\nas much as the day I started.\lIt's a way of life, you know?\pLike a tune that never ends, a dance\nthat goes on forever.\pAnd I've caught some real whoppers in\nme time, let me tell 'ya!\pFrom the depths of the sea to the\nwinding rivers, I've seen it all!\pBut there's one thing I've always\nwanted to see, and that's a truly\lmassive Magikarp.\pSo 'ere's a request to you, my young\nfriend.\pIf you happen to catch a big one with\nthat trusty ol' fishing rod of yours,\lI'd love to see it.\pIt'd be a fitting end to me career\nas a fisherman, to see a Magikarp\lthat's truly legendary.\pI'll be hanging up me boots soon, but\nI'll never forget the joy that fishing\lhas brought me.$"

MossdeepCity_House3_EventScript_RetiredFisherman_Text_1:
	.string "And who knows? Maybe I'll even take up\na new hobby in me retirement.\pBut for now, I'll be content just\nwatching the waves and reminiscing\labout all the good times I've 'ad.$"
