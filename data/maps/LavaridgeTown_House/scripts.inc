# 1 "data/maps/LavaridgeTown_House/scripts.pory"

# 2 "data/maps/LavaridgeTown_House/scripts.pory"
LavaridgeTown_House_MapScripts::
# 3 "data/maps/LavaridgeTown_House/scripts.pory"
	.byte 0
# 4 "data/maps/LavaridgeTown_House/scripts.pory"

# 5 "data/maps/LavaridgeTown_House/scripts.pory"
LavaridgeTown_House_EventScript_OldMan::
# 6 "data/maps/LavaridgeTown_House/scripts.pory"
	msgbox LavaridgeTown_House_Text_WifeWarmingEggInHotSprings, MSGBOX_NPC
# 7 "data/maps/LavaridgeTown_House/scripts.pory"
	end
# 8 "data/maps/LavaridgeTown_House/scripts.pory"

# 9 "data/maps/LavaridgeTown_House/scripts.pory"
LavaridgeTown_House_EventScript_Zigzagoon::
# 10 "data/maps/LavaridgeTown_House/scripts.pory"
	lock
# 11 "data/maps/LavaridgeTown_House/scripts.pory"
	faceplayer
# 12 "data/maps/LavaridgeTown_House/scripts.pory"
	waitse
# 13 "data/maps/LavaridgeTown_House/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 14 "data/maps/LavaridgeTown_House/scripts.pory"
	msgbox LavaridgeTown_House_Text_Zigzagoon, MSGBOX_DEFAULT
# 15 "data/maps/LavaridgeTown_House/scripts.pory"
	waitmoncry
# 16 "data/maps/LavaridgeTown_House/scripts.pory"
	release
# 17 "data/maps/LavaridgeTown_House/scripts.pory"
	end
# 18 "data/maps/LavaridgeTown_House/scripts.pory"

# 19 "data/maps/LavaridgeTown_House/scripts.pory"
LavaridgeTown_House_Text_WifeWarmingEggInHotSprings:
# 20 "data/maps/LavaridgeTown_House/scripts.pory"
	.string "I heard that an Egg was found when two\nPokémon were left at the Day Care.\pThat's great.\nI'm envious.\lWish I could lay an Egg…$"
# 21 "data/maps/LavaridgeTown_House/scripts.pory"

# 22 "data/maps/LavaridgeTown_House/scripts.pory"
LavaridgeTown_House_Text_Zigzagoon:
# 23 "data/maps/LavaridgeTown_House/scripts.pory"
	.string "Pssshhhhh!$"

LavaridgeTown_House_EventScript_MimicKid::
# 28 "data/maps/LavaridgeTown_House/scripts.pory"
	lock
# 29 "data/maps/LavaridgeTown_House/scripts.pory"
	faceplayer
# 30 "data/maps/LavaridgeTown_House/scripts.pory"
	msgbox LavaridgeTown_House_EventScript_MimicKid_Text_0
# 31 "data/maps/LavaridgeTown_House/scripts.pory"
	closemessage
# 32 "data/maps/LavaridgeTown_House/scripts.pory"
	release
	end


LavaridgeTown_House_EventScript_MimicKid_Text_0:
# 30 "data/maps/LavaridgeTown_House/scripts.pory"
	.string "Ah, young one!\pI am also a young one, but I mimic\nthe styles and speech of the elderly\lfolks of this town.$"
