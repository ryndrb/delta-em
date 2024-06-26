DewfordTown_House1_MapScripts::
	.byte 0

DewfordTown_House1_EventScript_Man::
	msgbox DewfordTown_House1_Text_LotToBeSaidForLivingOnIsland, MSGBOX_NPC
	end

DewfordTown_House1_EventScript_Woman::
	msgbox DewfordTown_House1_Text_LifeGoesSlowlyOnIsland, MSGBOX_NPC
	end

DewfordTown_House1_EventScript_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox DewfordTown_House1_Text_Zigzagoon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

DewfordTown_House1_Text_LotToBeSaidForLivingOnIsland:
	.string "There's a lot to be said for living on\n"
	.string "a small island like this in harmony with\l"
	.string "my Pokémon and family.$"

DewfordTown_House1_Text_LifeGoesSlowlyOnIsland:
	.string "When I married my husband, I moved\nhere from the large port city of\lSlateport.\pLife goes by slowly on this little\nisland.\pBut being surrounded by the\nbeautiful sea- that's a kind of\lhappiness, too.$"

DewfordTown_House1_Text_Zigzagoon:
	.string "Zig-guuuh!$"
