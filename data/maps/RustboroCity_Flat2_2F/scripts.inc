# 1 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 2 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_MapScripts::
# 3 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 5 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_EventScript_OldMan::
# 6 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	msgbox RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays, MSGBOX_NPC
# 7 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	end
# 8 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 9 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_EventScript_NinjaBoy::
# 10 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	lock
# 11 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	faceplayer
# 12 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_PREMIER_BALL_RUSTBORO, RustboroCity_Flat2_2F_EventScript_GavePremierBall
# 13 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	msgbox RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt, MSGBOX_DEFAULT
# 14 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	giveitem ITEM_PREMIER_BALL
# 15 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 16 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	setflag FLAG_RECEIVED_PREMIER_BALL_RUSTBORO
# 17 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	release
# 18 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	end
# 19 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 20 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_EventScript_GavePremierBall::
# 21 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	msgbox RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo, MSGBOX_DEFAULT
# 22 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	release
# 23 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	end
# 24 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 25 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays:
# 26 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "Way back in the old days, Devon was just\na teeny-tiny company.$"
# 27 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 28 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt:
# 29 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "My daddy works at Devon.\pThis here's something he made!\nI can't use it, so you can have it!$"
# 30 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 31 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo:
# 32 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "My daddy works at Devon.\pWhen I grow up, I'm gonna go work\nthere, too!$"

RustboroCity_Flat2_2F_EventScript_BlondeBoy::
# 38 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	lock
# 39 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	faceplayer
# 40 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_FLOAT_STONE, RustboroCity_Flat2_2F_EventScript_BlondeBoy_2
RustboroCity_Flat2_2F_EventScript_BlondeBoy_1:
# 45 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	msgbox RustboroCity_Flat2_2F_EventScript_BlondeBoy_Text_1
# 46 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	closemessage
# 47 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	setflag FLAG_RECEIVED_FLOAT_STONE
# 48 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	release
	end

RustboroCity_Flat2_2F_EventScript_BlondeBoy_2:
# 41 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	msgbox RustboroCity_Flat2_2F_EventScript_BlondeBoy_Text_0
# 42 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	delay 8
# 43 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	giveitem ITEM_FLOAT_STONE, 1
	goto RustboroCity_Flat2_2F_EventScript_BlondeBoy_1


RustboroCity_Flat2_2F_EventScript_BlondeBoy_Text_0:
# 41 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "My dad's a real ace in the Devon\nCorporation, I'll have you know!\lIt's no wonder I'm an ace myself!\pHere. I'll give you something that an\nAce Trainer like me uses!$"

RustboroCity_Flat2_2F_EventScript_BlondeBoy_Text_1:
# 45 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "If you have a Pokémon hold a Float\nStone, its weight will be halved.\pAlthough it looks like it'll be a\nwhile before you can use something\llike this as well as I can.$"
