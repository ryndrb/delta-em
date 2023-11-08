LilycoveCity_House2_MapScripts::
	.byte 0

LilycoveCity_House2_EventScript_FatMan::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM_REST, LilycoveCity_House2_EventScript_FatMan_2
	msgbox LilycoveCity_House2_EventScript_FatMan_Text_2
	giveitem ITEM_TM_REST
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_House2_EventScript_FatMan_5
LilycoveCity_House2_EventScript_FatMan_4:
	setflag FLAG_RECEIVED_TM_REST
	release
	end

LilycoveCity_House2_EventScript_FatMan_2:
	goto_if_set FLAG_RECEIVED_TM_SLEEP_TALK, LilycoveCity_House2_EventScript_FatMan_8
	msgbox LilycoveCity_House2_EventScript_FatMan_Text_1
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_House2_EventScript_FatMan_11
LilycoveCity_House2_EventScript_FatMan_10:
	setflag FLAG_RECEIVED_TM_SLEEP_TALK
	release
	end

LilycoveCity_House2_EventScript_FatMan_5:
	goto Common_EventScript_ShowBagIsFull
	goto LilycoveCity_House2_EventScript_FatMan_4

LilycoveCity_House2_EventScript_FatMan_8:
	msgbox LilycoveCity_House2_EventScript_FatMan_Text_0
	closemessage
	release
	end

LilycoveCity_House2_EventScript_FatMan_11:
	goto Common_EventScript_ShowBagIsFull
	goto LilycoveCity_House2_EventScript_FatMan_10


LilycoveCity_House2_EventScript_BlackBelt::
	msgbox LilycoveCity_House2_EventScript_BlackBelt_Text_0, MSGBOX_NPC
	end


LilycoveCity_House2_EventScript_FatMan_Text_0:
	.string "Zzz…\pSleep is essential for good health…\nYou've gotta rest to…stay…healthy…\land attack…while…asleep… Zzz…$"

LilycoveCity_House2_EventScript_FatMan_Text_1:
	.string "Zzz… Hm?\nTake this, too?$"

LilycoveCity_House2_EventScript_FatMan_Text_2:
	.string "Zzz…\nHm? Wha--?\pLemme be… I'm still half-asleep…\nHere… Just take this…$"

LilycoveCity_House2_EventScript_BlackBelt_Text_0:
	.string "What I heard is that in some regions,\nthey wake up Pokémon with a flute.$"
