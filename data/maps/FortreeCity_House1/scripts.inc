# 1 "data/maps/FortreeCity_House1/scripts.pory"

# 2 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_MapScripts::
# 3 "data/maps/FortreeCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/FortreeCity_House1/scripts.pory"

# 5 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_EventScript_Trader::
# 6 "data/maps/FortreeCity_House1/scripts.pory"
	lock
# 7 "data/maps/FortreeCity_House1/scripts.pory"
	faceplayer
# 8 "data/maps/FortreeCity_House1/scripts.pory"
	goto_if_set FLAG_FORTREE_NPC_TRADE_COMPLETED, FortreeCity_House1_EventScript_TradeCompleted
# 9 "data/maps/FortreeCity_House1/scripts.pory"
	ingame_trade INGAME_TRADE_PLUSLE, FortreeCity_House1_Text_YouWillTradeWontYou, FortreeCity_House1_EventScript_DeclineTrade, FortreeCity_House1_EventScript_NotRequestedMon, FortreeCity_House1_Text_MonYouTakeCare
# 10 "data/maps/FortreeCity_House1/scripts.pory"
	setflag FLAG_FORTREE_NPC_TRADE_COMPLETED
# 11 "data/maps/FortreeCity_House1/scripts.pory"
	release
# 12 "data/maps/FortreeCity_House1/scripts.pory"
	end
# 13 "data/maps/FortreeCity_House1/scripts.pory"

# 14 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_EventScript_DeclineTrade::
# 15 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_YouWontTradeMe, MSGBOX_DEFAULT
# 16 "data/maps/FortreeCity_House1/scripts.pory"
	release
# 17 "data/maps/FortreeCity_House1/scripts.pory"
	end
# 18 "data/maps/FortreeCity_House1/scripts.pory"

# 19 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_EventScript_NotRequestedMon::
# 20 "data/maps/FortreeCity_House1/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 21 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_ThisIsntAMon, MSGBOX_DEFAULT
# 22 "data/maps/FortreeCity_House1/scripts.pory"
	release
# 23 "data/maps/FortreeCity_House1/scripts.pory"
	end
# 24 "data/maps/FortreeCity_House1/scripts.pory"

# 25 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_EventScript_TradeCompleted::
# 26 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_GoingToMakeVolbeatStrong, MSGBOX_DEFAULT
# 27 "data/maps/FortreeCity_House1/scripts.pory"
	release
# 28 "data/maps/FortreeCity_House1/scripts.pory"
	end
# 29 "data/maps/FortreeCity_House1/scripts.pory"

# 30 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_EventScript_ExpertF::
# 31 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_TradingMemoriesWithOthers, MSGBOX_NPC
# 32 "data/maps/FortreeCity_House1/scripts.pory"
	end
# 33 "data/maps/FortreeCity_House1/scripts.pory"

# 34 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_EventScript_Zigzagoon::
# 35 "data/maps/FortreeCity_House1/scripts.pory"
	lock
# 36 "data/maps/FortreeCity_House1/scripts.pory"
	faceplayer
# 37 "data/maps/FortreeCity_House1/scripts.pory"
	waitse
# 38 "data/maps/FortreeCity_House1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 39 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_Zigzagoon, MSGBOX_DEFAULT
# 40 "data/maps/FortreeCity_House1/scripts.pory"
	waitmoncry
# 41 "data/maps/FortreeCity_House1/scripts.pory"
	release
# 42 "data/maps/FortreeCity_House1/scripts.pory"
	end
# 43 "data/maps/FortreeCity_House1/scripts.pory"

# 44 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_YouWillTradeWontYou:
# 45 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Hi.\nThere's this Pokémon I'm looking for.\pI want a {STR_VAR_1}.\nDo you have one?\pWould you trade it for my {STR_VAR_2}?$"
# 46 "data/maps/FortreeCity_House1/scripts.pory"

# 47 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_MonYouTakeCare:
# 48 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Oh, yeah, right on!\p"
# 49 "data/maps/FortreeCity_House1/scripts.pory"
	.string "{STR_VAR_1}, welcome!\n"
# 50 "data/maps/FortreeCity_House1/scripts.pory"
	.string "{STR_VAR_2}, you take care!$"
# 51 "data/maps/FortreeCity_House1/scripts.pory"

# 52 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_ThisIsntAMon:
# 53 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Wait!\nThat Pokémon isn't a {STR_VAR_1}.\pI guess you don't want to trade with\nme.$"
# 54 "data/maps/FortreeCity_House1/scripts.pory"

# 55 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_YouWontTradeMe:
# 56 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Oh, OK. If you change your mind, please\ncome me.\pI'll be waiting!$"
# 57 "data/maps/FortreeCity_House1/scripts.pory"

# 58 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_GoingToMakeVolbeatStrong:
# 59 "data/maps/FortreeCity_House1/scripts.pory"
	.string "I'm going to make Volbeat super\n"
# 60 "data/maps/FortreeCity_House1/scripts.pory"
	.string "strong from this moment on!\p"
# 61 "data/maps/FortreeCity_House1/scripts.pory"
	.string "I hope you do the same with Plusle!$"
# 62 "data/maps/FortreeCity_House1/scripts.pory"

# 63 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_TradingMemoriesWithOthers:
# 64 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Trading Pokémon with others…\p"
# 65 "data/maps/FortreeCity_House1/scripts.pory"
	.string "It's as if you're trading your own\n"
# 66 "data/maps/FortreeCity_House1/scripts.pory"
	.string "memories with other people.$"
# 67 "data/maps/FortreeCity_House1/scripts.pory"

# 68 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_Text_Zigzagoon:
# 69 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Gumomoh?$"
