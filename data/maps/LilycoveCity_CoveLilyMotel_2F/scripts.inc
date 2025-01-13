# 1 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 2 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_MapScripts::
# 3 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 5 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner::
# 6 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	lock
# 7 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	faceplayer
# 8 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	call_if_unset FLAG_TEMP_2, LilycoveCity_CoveLilyMotel_2F_EventScript_ShowMeCompletedDex
# 9 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	call_if_set FLAG_TEMP_2, LilycoveCity_CoveLilyMotel_2F_EventScript_ShowDiploma
# 10 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	specialvar VAR_RESULT, HasAllHoennMons
# 11 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_CoveLilyMotel_2F_EventScript_AllHoennMonsFanfare
# 12 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	release
# 13 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 14 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 15 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_ShowMeCompletedDex::
# 16 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ShowMeCompletedDex, MSGBOX_DEFAULT
# 17 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	return
# 18 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 19 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_AllHoennMonsFanfare::
# 20 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 21 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 22 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	waitfanfare
# 23 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto LilycoveCity_CoveLilyMotel_2F_EventScript_ShowDiploma
# 24 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 25 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 26 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_ShowDiploma::
# 27 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	message LilycoveCity_CoveLilyMotel_2F_Text_FilledPokedexGiveYouThis
# 28 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	waitmessage
# 29 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 30 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	special Special_ShowDiploma
# 31 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	waitstate
# 32 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	release
# 33 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 34 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 35 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_Programmer::
# 36 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ImTheProgrammer, MSGBOX_NPC
# 37 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 38 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 39 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_GraphicArtist::
# 40 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ImTheGraphicArtist, MSGBOX_NPC
# 41 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 42 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 43 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_FatMan::
# 44 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_GirlsAreCute, MSGBOX_NPC
# 45 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 46 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 47 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_Woman::
# 48 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_SeaBreezeTicklesHeart, MSGBOX_NPC
# 49 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 50 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 51 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_GameBoyKid::
# 52 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_NeverLeaveWithoutGameBoy, MSGBOX_NPC
# 53 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 54 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 55 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_Scott::
# 56 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	lock
# 57 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	faceplayer
# 58 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_IN_LILYCOVE, LilycoveCity_CoveLilyMotel_2F_EventScript_MetScott
# 59 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_SnoozingPreferBattles, MSGBOX_DEFAULT
# 60 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 61 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	setflag FLAG_MET_SCOTT_IN_LILYCOVE
# 62 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	release
# 63 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 64 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 65 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_EventScript_MetScott::
# 66 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ContestsDoTakeStrategy, MSGBOX_DEFAULT
# 67 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	release
# 68 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	end
# 69 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 70 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_ShowMeCompletedDex:
# 71 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "I'm the Game Designer.\pOh, is that right?\nYou're working on a Pokédex?\pIt's tough trying to complete it, but\ndon't give up.\pIf you do complete it, please come show\nme.$"
# 72 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 73 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_FilledPokedexGiveYouThis:
# 74 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Wow!\nThat's awesome!\lYep, it's totally awesome!\pThis Pokédex is completely filled!\nYou really must love Pokémon!\pI'm so impressed!\pLet me give you something in\nrecognition of your feat!$"
# 75 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 76 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_ImTheProgrammer:
# 77 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "Me?\nYou're talking to me?\lI'm the Programmer.\pI wonder what the Slots are like here.$"
# 78 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 79 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_ImTheGraphicArtist:
# 80 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "I'm the Graphic Artist!\pAren't the Pokémon of Hoenn\ninteresting?$"
# 81 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 82 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_GirlsAreCute:
# 83 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "The girl Tubers, they're cute, hey?\nTo battle against a cute Tuber…\pWhoop, it's so awesome!\pAnd the Twins!\nAren't they cute?\lA 2-on-2 battle with Twins…\pWhoop, it's unbearably fun!$"
# 84 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 85 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_SeaBreezeTicklesHeart:
# 86 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "The sea breeze tickles my heart.\nIt feels wonderful here!$"
# 87 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 88 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_NeverLeaveWithoutGameBoy:
# 89 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "You never know when and where people\nwill challenge you.\pThat's why I never leave home without\nmy Game Boy Advance.$"
# 90 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 91 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_SnoozingPreferBattles:
# 92 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "{COLOR RED}Scott{COLOR DARK_GRAY}: Zzz…\pHuh?!\nOh, sorry, sorry!\lI was snoozing!\pI came to check out this Pokémon\nContest thing.\pI have to admit, it does look quite\nentertaining, but…\pConsider me a purist--I prefer battles\nand tough Trainers.\pBut that's just me.\p{PLAYER}, I hope you'll enjoy everything\nlike the Gyms, Contests, Battle Tent,\lthe whole works!$"
# 93 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"

# 94 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
LilycoveCity_CoveLilyMotel_2F_Text_ContestsDoTakeStrategy:
# 95 "data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.pory"
	.string "{COLOR RED}Scott{COLOR DARK_GRAY}: I think it does take strategy\nto win a Contest.\pDevising Contest strategies is one way\nof becoming a better Trainer, I'd say.$"
