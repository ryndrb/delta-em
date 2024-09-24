Route123_BerryMastersHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route123_BerryMastersHouse_OnTransition
	.byte 0

Route123_BerryMastersHouse_OnTransition:
	setflag FLAG_LANDMARK_BERRY_MASTERS_HOUSE
	end

Route123_BerryMastersHouse_EventScript_BerryMaster::
	lock
	faceplayer
	dotimebasedevents
	goto_if_set FLAG_DAILY_BERRY_MASTER_RECEIVED_BERRY, Route123_BerryMastersHouse_EventScript_ReceivedBerryToday
	msgbox Route123_BerryMastersHouse_Text_YoureDeservingOfBerry, MSGBOX_DEFAULT
	random NUM_BERRY_MASTER_BERRIES
	addvar VAR_RESULT, NUM_BERRY_MASTER_BERRIES_SKIPPED
	addvar VAR_RESULT, FIRST_BERRY_INDEX
	giveitem VAR_RESULT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_DAILY_BERRY_MASTER_RECEIVED_BERRY
	msgbox Route123_BerryMastersHouse_Text_WhyBeStingyTakeAnother, MSGBOX_DEFAULT
	random NUM_BERRY_MASTER_BERRIES
	addvar VAR_RESULT, NUM_BERRY_MASTER_BERRIES_SKIPPED
	addvar VAR_RESULT, FIRST_BERRY_INDEX
	giveitem VAR_RESULT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox Route123_BerryMastersHouse_Text_VisitPrettyPetalFlowerShop, MSGBOX_DEFAULT
	release
	end

Route123_BerryMastersHouse_EventScript_ReceivedBerryToday::
	msgbox Route123_BerryMastersHouse_Text_DoneForToday, MSGBOX_DEFAULT
	release
	end

Route123_BerryMastersHouse_EventScript_BerryMastersWife::
	lock
	faceplayer
	dotimebasedevents
	goto_if_set FLAG_DAILY_BERRY_MASTERS_WIFE, Route123_BerryMastersHouse_EventScript_ReceivedWifeBerryToday
	msgbox Route123_BerryMastersHouse_Text_HeardAGoodSayingLately, MSGBOX_DEFAULT
	setvar VAR_0x8004, EASY_CHAT_TYPE_GOOD_SAYING
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	goto_if_eq VAR_RESULT, TRUE, Route123_BerryMastersHouse_EventScript_GavePhrase
	goto_if_eq VAR_RESULT, FALSE, Route123_BerryMastersHouse_EventScript_CancelPhrase
	end

Route123_BerryMastersHouse_EventScript_CancelPhrase::
	msgbox Route123_BerryMastersHouse_Text_Ah, MSGBOX_DEFAULT
	msgbox Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife, MSGBOX_DEFAULT
	release
	end

Route123_BerryMastersHouse_EventScript_GavePhrase::
	goto_if_eq VAR_0x8004, NOT_SPECIAL_PHRASE, Route123_BerryMastersHouse_EventScript_GiveNormalBerry
	goto_if_eq VAR_0x8004, PHRASE_GREAT_BATTLE, Route123_BerryMastersHouse_EventScript_GiveSpelonBerry
	goto_if_eq VAR_0x8004, PHRASE_CHALLENGE_CONTEST, Route123_BerryMastersHouse_EventScript_GivePamtreBerry
	goto_if_eq VAR_0x8004, PHRASE_OVERWHELMING_LATIAS, Route123_BerryMastersHouse_EventScript_GiveWatmelBerry
	goto_if_eq VAR_0x8004, PHRASE_COOL_LATIOS, Route123_BerryMastersHouse_EventScript_GiveDurinBerry
	goto_if_eq VAR_0x8004, PHRASE_SUPER_HUSTLE, Route123_BerryMastersHouse_EventScript_GiveBelueBerry
	end

Route123_BerryMastersHouse_EventScript_GiveNormalBerry::
	msgbox Route123_BerryMastersHouse_Text_GoodSayingTakeThis, MSGBOX_DEFAULT
	random NUM_BERRY_MASTER_WIFE_BERRIES
	addvar VAR_RESULT, FIRST_BERRY_INDEX
	giveitem VAR_RESULT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
	release
	end

Route123_BerryMastersHouse_EventScript_GiveSpelonBerry::
	goto_if_set FLAG_RECEIVED_SPELON_BERRY, Route123_BerryMastersHouse_EventScript_GiveNormalBerry
	msgbox Route123_BerryMastersHouse_Text_InspirationalTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_SPELON_BERRY
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_SPELON_BERRY
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
	end

Route123_BerryMastersHouse_EventScript_GivePamtreBerry::
	goto_if_set FLAG_RECEIVED_PAMTRE_BERRY, Route123_BerryMastersHouse_EventScript_GiveNormalBerry
	msgbox Route123_BerryMastersHouse_Text_InspirationalTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_PAMTRE_BERRY
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_PAMTRE_BERRY
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
	end

Route123_BerryMastersHouse_EventScript_GiveWatmelBerry::
	goto_if_set FLAG_RECEIVED_WATMEL_BERRY, Route123_BerryMastersHouse_EventScript_GiveNormalBerry
	msgbox Route123_BerryMastersHouse_Text_InspirationalTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_WATMEL_BERRY
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_WATMEL_BERRY
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
	end

Route123_BerryMastersHouse_EventScript_GiveDurinBerry::
	goto_if_set FLAG_RECEIVED_DURIN_BERRY, Route123_BerryMastersHouse_EventScript_GiveNormalBerry
	msgbox Route123_BerryMastersHouse_Text_InspirationalTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_DURIN_BERRY
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_DURIN_BERRY
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
	end

Route123_BerryMastersHouse_EventScript_GiveBelueBerry::
	goto_if_set FLAG_RECEIVED_BELUE_BERRY, Route123_BerryMastersHouse_EventScript_GiveNormalBerry
	msgbox Route123_BerryMastersHouse_Text_InspirationalTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_BELUE_BERRY
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_BELUE_BERRY
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
	end

Route123_BerryMastersHouse_EventScript_ReceivedWifeBerryToday::
	msgbox Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife, MSGBOX_DEFAULT
	release
	end

Route123_BerryMastersHouse_EventScript_GaveBerry::
	setflag FLAG_DAILY_BERRY_MASTERS_WIFE
	msgbox Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife, MSGBOX_DEFAULT
	release
	end

Route123_BerryMastersHouse_EventScript_Man::
	msgbox Route123_BerryMastersHouse_EventScript_Man_Text_0, MSGBOX_NPC
	end


Route123_BerryMastersHouse_EventScript_PlayRoughTM::
	lock
	faceplayer
	checkitem ITEM_TM_PLAY_ROUGH, 1
	compare VAR_RESULT, 1
	goto_if_eq Route123_BerryMastersHouse_EventScript_PlayRoughTM_2
	msgbox Route123_BerryMastersHouse_EventScript_PlayRoughTM_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Route123_BerryMastersHouse_EventScript_PlayRoughTM_4
	msgbox Route123_BerryMastersHouse_EventScript_PlayRoughTM_Text_2
	delay 8
	giveitem ITEM_TM_PLAY_ROUGH
	msgbox Route123_BerryMastersHouse_Text_HavePlayRough
	closemessage
	release
	end

Route123_BerryMastersHouse_EventScript_PlayRoughTM_2:
	msgbox Route123_BerryMastersHouse_Text_HavePlayRough
	closemessage
	release
	end

Route123_BerryMastersHouse_EventScript_PlayRoughTM_4:
	msgbox Route123_BerryMastersHouse_EventScript_PlayRoughTM_Text_1
	closemessage
	release
	end


Route123_BerryMastersHouse_EventScript_Man_Text_0:
	.string "Do you know Gracidea?\pIn the Sinnoh region, people give\nyou a bouquet of Gracidea to convey\ltheir gratitude!\pIt's very old custom!$"

Route123_BerryMastersHouse_EventScript_PlayRoughTM_Text_0:
	.string "Well, well, what do we have here?\pYou've got a certain spark about you…\nI bet you know how to handle yourself\lin battle.\pHow about I give you something to\nreally get your hands dirty…?$"

Route123_BerryMastersHouse_EventScript_PlayRoughTM_Text_1:
	.string "Oh, playing it safe, huh?\pDon't be shy--it's all in good fun!$"

Route123_BerryMastersHouse_EventScript_PlayRoughTM_Text_2:
	.string "That's the spirit! I knew you'd be up\nfor a little mischief.$"

Route123_BerryMastersHouse_Text_HavePlayRough::
	.string "TM Play Rough!\nOooh, don't let the name fool you…\pThis move's all about getting up close\nand personal…\pJust make sure your Pokémon don't get\ncarried away when they use it.\pHave fun, but keep it… under control,\nalright?$"
