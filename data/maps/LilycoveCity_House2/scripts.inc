# 1 "data/maps/LilycoveCity_House2/scripts.pory"

# 2 "data/maps/LilycoveCity_House2/scripts.pory"
LilycoveCity_House2_MapScripts::
# 3 "data/maps/LilycoveCity_House2/scripts.pory"
	.byte 0

LilycoveCity_House2_EventScript_FatMan::
# 8 "data/maps/LilycoveCity_House2/scripts.pory"
	lock
# 9 "data/maps/LilycoveCity_House2/scripts.pory"
	faceplayer
# 10 "data/maps/LilycoveCity_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_REST, LilycoveCity_House2_EventScript_FatMan_2
# 26 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_House2_EventScript_FatMan_Text_2
# 27 "data/maps/LilycoveCity_House2/scripts.pory"
	giveitem ITEM_TM_REST
# 28 "data/maps/LilycoveCity_House2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_House2_EventScript_FatMan_5
LilycoveCity_House2_EventScript_FatMan_4:
# 31 "data/maps/LilycoveCity_House2/scripts.pory"
	setflag FLAG_RECEIVED_TM_REST
# 32 "data/maps/LilycoveCity_House2/scripts.pory"
	release
	end

LilycoveCity_House2_EventScript_FatMan_2:
# 11 "data/maps/LilycoveCity_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_SLEEP_TALK, LilycoveCity_House2_EventScript_FatMan_8
# 17 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_House2_EventScript_FatMan_Text_1
# 18 "data/maps/LilycoveCity_House2/scripts.pory"
	giveitem ITEM_TM_SLEEP_TALK
# 19 "data/maps/LilycoveCity_House2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_House2_EventScript_FatMan_11
LilycoveCity_House2_EventScript_FatMan_10:
# 22 "data/maps/LilycoveCity_House2/scripts.pory"
	setflag FLAG_RECEIVED_TM_SLEEP_TALK
# 23 "data/maps/LilycoveCity_House2/scripts.pory"
	release
	end

LilycoveCity_House2_EventScript_FatMan_5:
# 29 "data/maps/LilycoveCity_House2/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto LilycoveCity_House2_EventScript_FatMan_4

LilycoveCity_House2_EventScript_FatMan_8:
# 12 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_House2_EventScript_FatMan_Text_0
# 13 "data/maps/LilycoveCity_House2/scripts.pory"
	closemessage
# 14 "data/maps/LilycoveCity_House2/scripts.pory"
	release
	end

LilycoveCity_House2_EventScript_FatMan_11:
# 20 "data/maps/LilycoveCity_House2/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto LilycoveCity_House2_EventScript_FatMan_10


LilycoveCity_House2_EventScript_BlackBelt::
# 37 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_House2_EventScript_BlackBelt_Text_0, MSGBOX_NPC
	end


LilycoveCity_House2_EventScript_FatMan_Text_0:
# 12 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "Zzz…\pSleep is essential for good health…\nYou've gotta rest to…stay…healthy…\land attack…while…asleep… Zzz…$"

LilycoveCity_House2_EventScript_FatMan_Text_1:
# 17 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "Zzz… Hm?\nTake this, too?$"

LilycoveCity_House2_EventScript_FatMan_Text_2:
# 26 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "Zzz…\nHm? Wha--?\pLemme be… I'm still half-asleep…\nHere… Just take this…$"

LilycoveCity_House2_EventScript_BlackBelt_Text_0:
# 37 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "What I heard is that in some regions,\nthey wake up Pokémon with a flute.$"
