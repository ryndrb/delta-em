# 1 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 2 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_MapScripts::
# 3 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route123_BerryMastersHouse_OnTransition
# 4 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.byte 0
# 5 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 6 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_OnTransition:
# 7 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_LANDMARK_BERRY_MASTERS_HOUSE
# 8 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 9 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 10 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_BerryMaster::
# 11 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	lock
# 12 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	faceplayer
# 13 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	dotimebasedevents
# 14 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_DAILY_BERRY_MASTER_RECEIVED_BERRY, Route123_BerryMastersHouse_EventScript_ReceivedBerryToday
# 15 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_YoureDeservingOfBerry, MSGBOX_DEFAULT
# 16 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giverandomberry BERRY_ID_POMEG, BERRY_ID_NOMEL
# 17 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 18 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_DAILY_BERRY_MASTER_RECEIVED_BERRY
# 19 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_WhyBeStingyTakeAnother, MSGBOX_DEFAULT
# 20 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giverandomberry BERRY_ID_POMEG, BERRY_ID_NOMEL
# 21 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 22 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_VisitPrettyPetalFlowerShop, MSGBOX_DEFAULT
# 23 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
# 24 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 25 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 26 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_ReceivedBerryToday::
# 27 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_DoneForToday, MSGBOX_DEFAULT
# 28 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
# 29 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 30 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 31 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_BerryMastersWife::
# 32 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	lock
# 33 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	faceplayer
# 34 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	dotimebasedevents
# 35 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_DAILY_BERRY_MASTERS_WIFE, Route123_BerryMastersHouse_EventScript_ReceivedWifeBerryToday
# 36 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_HeardAGoodSayingLately, MSGBOX_DEFAULT
# 37 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_GOOD_SAYING
# 38 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	call Common_ShowEasyChatScreen
# 39 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	lock
# 40 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	faceplayer
# 41 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route123_BerryMastersHouse_EventScript_GavePhrase
# 42 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route123_BerryMastersHouse_EventScript_CancelPhrase
# 43 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 44 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 45 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_CancelPhrase::
# 46 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_Ah, MSGBOX_DEFAULT
# 47 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife, MSGBOX_DEFAULT
# 48 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
# 49 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 50 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 51 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GavePhrase::
# 52 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, NOT_SPECIAL_PHRASE, Route123_BerryMastersHouse_EventScript_GiveNormalBerry
# 53 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PHRASE_GREAT_BATTLE, Route123_BerryMastersHouse_EventScript_GiveSpelonBerry
# 54 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PHRASE_CHALLENGE_CONTEST, Route123_BerryMastersHouse_EventScript_GivePamtreBerry
# 55 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PHRASE_OVERWHELMING_LATIAS, Route123_BerryMastersHouse_EventScript_GiveWatmelBerry
# 56 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PHRASE_COOL_LATIOS, Route123_BerryMastersHouse_EventScript_GiveDurinBerry
# 57 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PHRASE_SUPER_HUSTLE, Route123_BerryMastersHouse_EventScript_GiveBelueBerry
# 58 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 59 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 60 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveNormalBerry::
# 61 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_GoodSayingTakeThis, MSGBOX_DEFAULT
# 62 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giverandomberry BERRY_ID_CHERI, BERRY_ID_SITRUS
# 63 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 64 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
# 65 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
# 66 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 67 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 68 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveSpelonBerry::
# 69 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_SPELON_BERRY, Route123_BerryMastersHouse_EventScript_GiveNormalBerry
# 70 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_InspirationalTakeThis, MSGBOX_DEFAULT
# 71 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giveitem ITEM_SPELON_BERRY
# 72 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 73 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_RECEIVED_SPELON_BERRY
# 74 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
# 75 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 76 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 77 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GivePamtreBerry::
# 78 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_PAMTRE_BERRY, Route123_BerryMastersHouse_EventScript_GiveNormalBerry
# 79 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_InspirationalTakeThis, MSGBOX_DEFAULT
# 80 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giveitem ITEM_PAMTRE_BERRY
# 81 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 82 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_RECEIVED_PAMTRE_BERRY
# 83 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
# 84 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 85 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 86 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveWatmelBerry::
# 87 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_WATMEL_BERRY, Route123_BerryMastersHouse_EventScript_GiveNormalBerry
# 88 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_InspirationalTakeThis, MSGBOX_DEFAULT
# 89 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giveitem ITEM_WATMEL_BERRY
# 90 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 91 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_RECEIVED_WATMEL_BERRY
# 92 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
# 93 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 94 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 95 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveDurinBerry::
# 96 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_DURIN_BERRY, Route123_BerryMastersHouse_EventScript_GiveNormalBerry
# 97 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_InspirationalTakeThis, MSGBOX_DEFAULT
# 98 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giveitem ITEM_DURIN_BERRY
# 99 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 100 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_RECEIVED_DURIN_BERRY
# 101 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
# 102 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 103 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 104 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveBelueBerry::
# 105 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_BELUE_BERRY, Route123_BerryMastersHouse_EventScript_GiveNormalBerry
# 106 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_InspirationalTakeThis, MSGBOX_DEFAULT
# 107 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giveitem ITEM_BELUE_BERRY
# 108 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 109 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_RECEIVED_BELUE_BERRY
# 110 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
# 111 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 112 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 113 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_ReceivedWifeBerryToday::
# 114 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife, MSGBOX_DEFAULT
# 115 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
# 116 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 117 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 118 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GaveBerry::
# 119 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_DAILY_BERRY_MASTERS_WIFE
# 120 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife, MSGBOX_DEFAULT
# 121 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
# 122 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end

Route123_BerryMastersHouse_EventScript_Man::
# 128 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_EventScript_Man_Text_0, MSGBOX_NPC
	end


Route123_BerryMastersHouse_EventScript_PlayRoughTM::
# 133 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	lock
# 134 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	faceplayer
# 135 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	checkitem ITEM_TM_PLAY_ROUGH, 1
# 136 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route123_BerryMastersHouse_EventScript_PlayRoughTM_2
# 142 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_EventScript_PlayRoughTM_Text_0, MSGBOX_YESNO
# 143 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route123_BerryMastersHouse_EventScript_PlayRoughTM_4
# 149 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_EventScript_PlayRoughTM_Text_2
# 150 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	delay 8
# 151 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giveitem ITEM_TM_PLAY_ROUGH
# 152 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_HavePlayRough
# 153 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	closemessage
# 154 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
	end

Route123_BerryMastersHouse_EventScript_PlayRoughTM_2:
# 137 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_HavePlayRough
# 138 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	closemessage
# 139 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
	end

Route123_BerryMastersHouse_EventScript_PlayRoughTM_4:
# 144 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_EventScript_PlayRoughTM_Text_1
# 145 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	closemessage
# 146 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
	end


Route123_BerryMastersHouse_EventScript_Man_Text_0:
# 128 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Do you know Gracidea?\pIn the Sinnoh region, people give\nyou a bouquet of Gracidea to convey\ltheir gratitude!\pIt's very old custom!$"

Route123_BerryMastersHouse_EventScript_PlayRoughTM_Text_0:
# 142 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Well, well, what do we have here?\pYou've got a certain spark about you…\nI bet you know how to handle yourself\lin battle.\pHow about I give you something to\nreally get your hands dirty…?$"

Route123_BerryMastersHouse_EventScript_PlayRoughTM_Text_1:
# 144 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Oh, playing it safe, huh?\pDon't be shy--it's all in good fun!$"

Route123_BerryMastersHouse_EventScript_PlayRoughTM_Text_2:
# 149 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "That's the spirit! I knew you'd be up\nfor a little mischief.$"

Route123_BerryMastersHouse_Text_HavePlayRough::
# 159 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "TM Play Rough!\nOooh, don't let the name fool you…\pThis move's all about getting up close\nand personal…\pJust make sure your Pokémon don't get\ncarried away when they use it.\pHave fun, but keep it… under control,\nalright?$"
