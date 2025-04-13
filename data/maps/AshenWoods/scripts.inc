AshenWoods_MapScripts::
# 2 "data/maps/AshenWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AshenWoods_OnResume
	.byte 0


AshenWoods_OnResume::
# 6 "data/maps/AshenWoods/scripts.pory"
	setstepcallback STEP_CB_ASH
	return


AshenWoods_EventScript_AuspiciousArmorTraderOldMan::
# 10 "data/maps/AshenWoods/scripts.pory"
	lock
# 11 "data/maps/AshenWoods/scripts.pory"
	faceplayer
# 12 "data/maps/AshenWoods/scripts.pory"
	checkitem ITEM_YELLOW_SHARD, 10
# 13 "data/maps/AshenWoods/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AshenWoods_EventScript_AuspiciousArmorTraderOldMan_2
# 19 "data/maps/AshenWoods/scripts.pory"
	msgbox AshenWoods_EventScript_AuspiciousArmorTraderOldMan_Text_0, MSGBOX_YESNO
# 20 "data/maps/AshenWoods/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq AshenWoods_EventScript_AuspiciousArmorTraderOldMan_5
# 25 "data/maps/AshenWoods/scripts.pory"
	removeitem ITEM_YELLOW_SHARD, 10
# 26 "data/maps/AshenWoods/scripts.pory"
	msgbox AshenWoods_EventScript_AuspiciousArmorTraderOldMan_Text_1
# 27 "data/maps/AshenWoods/scripts.pory"
	delay 8
# 28 "data/maps/AshenWoods/scripts.pory"
	giveitem ITEM_AUSPICIOUS_ARMOR, 1
# 29 "data/maps/AshenWoods/scripts.pory"
	closemessage
# 30 "data/maps/AshenWoods/scripts.pory"
	release
	end

AshenWoods_EventScript_AuspiciousArmorTraderOldMan_2:
# 14 "data/maps/AshenWoods/scripts.pory"
	msgbox AshenWoods_EventScript_AuspiciousArmorTraderOldMan_Text_0
# 15 "data/maps/AshenWoods/scripts.pory"
	closemessage
# 16 "data/maps/AshenWoods/scripts.pory"
	release
	end

AshenWoods_EventScript_AuspiciousArmorTraderOldMan_5:
# 21 "data/maps/AshenWoods/scripts.pory"
	closemessage
# 22 "data/maps/AshenWoods/scripts.pory"
	release
	end


AshenWoods_EventScript_MaliciousArmorTraderOldWoman::
# 35 "data/maps/AshenWoods/scripts.pory"
	lock
# 36 "data/maps/AshenWoods/scripts.pory"
	faceplayer
# 37 "data/maps/AshenWoods/scripts.pory"
	checkitem ITEM_BLUE_SHARD, 10
# 38 "data/maps/AshenWoods/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AshenWoods_EventScript_MaliciousArmorTraderOldWoman_2
# 44 "data/maps/AshenWoods/scripts.pory"
	msgbox AshenWoods_EventScript_MaliciousArmorTraderOldWoman_Text_0, MSGBOX_YESNO
# 45 "data/maps/AshenWoods/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq AshenWoods_EventScript_MaliciousArmorTraderOldWoman_5
# 50 "data/maps/AshenWoods/scripts.pory"
	removeitem ITEM_BLUE_SHARD, 10
# 51 "data/maps/AshenWoods/scripts.pory"
	msgbox AshenWoods_EventScript_MaliciousArmorTraderOldWoman_Text_1
# 52 "data/maps/AshenWoods/scripts.pory"
	delay 8
# 53 "data/maps/AshenWoods/scripts.pory"
	giveitem ITEM_MALICIOUS_ARMOR, 1
# 54 "data/maps/AshenWoods/scripts.pory"
	closemessage
# 55 "data/maps/AshenWoods/scripts.pory"
	release
	end

AshenWoods_EventScript_MaliciousArmorTraderOldWoman_2:
# 39 "data/maps/AshenWoods/scripts.pory"
	msgbox AshenWoods_EventScript_MaliciousArmorTraderOldWoman_Text_0
# 40 "data/maps/AshenWoods/scripts.pory"
	closemessage
# 41 "data/maps/AshenWoods/scripts.pory"
	release
	end

AshenWoods_EventScript_MaliciousArmorTraderOldWoman_5:
# 46 "data/maps/AshenWoods/scripts.pory"
	closemessage
# 47 "data/maps/AshenWoods/scripts.pory"
	release
	end


AshenWoods_EventScript_AuspiciousArmorTraderOldMan_Text_0:
# 14 "data/maps/AshenWoods/scripts.pory"
	.string "Hoho!\nHello there, child!\pI am a collector of curiosities and a\ngreat lover of shards.\pI've auspicious curios to offer--if\nyou'll trade me {COLOR RED}10{COLOR DARK_GRAY} Yellow Shards for one.$"

AshenWoods_EventScript_AuspiciousArmorTraderOldMan_Text_1:
# 26 "data/maps/AshenWoods/scripts.pory"
	.string "Hoho!\nVery good, very good.\pI feel closer than ever in surpassing\nmy wife now!\pHere's a curio I promised you.\pTake good care of it--it's laden with\nblessings.$"

AshenWoods_EventScript_MaliciousArmorTraderOldWoman_Text_0:
# 39 "data/maps/AshenWoods/scripts.pory"
	.string "Ehehe!\nHello there, child!\pI am a collector of curiosities and a\ngreat lover of shards.\pI've curios with a…dark past, shall we\nsay.\pI'll trade you one for {COLOR RED}10{COLOR DARK_GRAY} Blue Shards.$"

AshenWoods_EventScript_MaliciousArmorTraderOldWoman_Text_1:
# 51 "data/maps/AshenWoods/scripts.pory"
	.string "Ehehe!\nThat will do nicely.\pI feel better about my chances against\nmy husband now!\pHere's a curio I promised you.\pCareful with it--it's steeped in a\npotent malice.$"
