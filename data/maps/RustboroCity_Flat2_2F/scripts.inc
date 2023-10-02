RustboroCity_Flat2_2F_MapScripts::
	.byte 0

RustboroCity_Flat2_2F_EventScript_OldMan::
	msgbox RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays, MSGBOX_NPC
	end

RustboroCity_Flat2_2F_EventScript_NinjaBoy::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_PREMIER_BALL_RUSTBORO, RustboroCity_Flat2_2F_EventScript_GavePremierBall
	msgbox RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt, MSGBOX_DEFAULT
	giveitem ITEM_PREMIER_BALL
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_PREMIER_BALL_RUSTBORO
	release
	end

RustboroCity_Flat2_2F_EventScript_GavePremierBall::
	msgbox RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays:
	.string "Way back in the old days, Devon was just\na teeny-tiny company.$"

RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt:
	.string "My daddy works at Devon.\pThis here's something he made!\nI can't use it, so you can have it!$"

RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo:
	.string "My daddy works at Devon.\pWhen I grow up, I'm gonna go work\nthere, too!$"

RustboroCity_Flat2_2F_EventScript_BlondeBoy::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_FLOAT_STONE, RustboroCity_Flat2_2F_EventScript_BlondeBoy_2
RustboroCity_Flat2_2F_EventScript_BlondeBoy_1:
	msgbox RustboroCity_Flat2_2F_EventScript_BlondeBoy_Text_1
	closemessage
	setflag FLAG_RECEIVED_FLOAT_STONE
	release
	end

RustboroCity_Flat2_2F_EventScript_BlondeBoy_2:
	msgbox RustboroCity_Flat2_2F_EventScript_BlondeBoy_Text_0
	delay 8
	giveitem ITEM_FLOAT_STONE, 1
	goto RustboroCity_Flat2_2F_EventScript_BlondeBoy_1


RustboroCity_Flat2_2F_EventScript_BlondeBoy_Text_0:
	.string "My dad's a real ace in the Devon\nCorporation, I'll have you know!\lIt's no wonder I'm an ace myself!\pHere. I'll give you something that an\nAce Trainer like me uses!$"

RustboroCity_Flat2_2F_EventScript_BlondeBoy_Text_1:
	.string "If you have a Pokémon hold a Float\nStone, its weight will be halved.\pAlthough it looks like it'll be a while\nbefore you can use something like\lthis as well as I can.$"
