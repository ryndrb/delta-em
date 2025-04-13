# 1 "data/maps/VerdanturfTown/scripts.pory"

# 2 "data/maps/VerdanturfTown/scripts.pory"
.set LOCALID_TWIN, 2
# 3 "data/maps/VerdanturfTown/scripts.pory"

# 4 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_MapScripts::
# 5 "data/maps/VerdanturfTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_OnTransition
# 6 "data/maps/VerdanturfTown/scripts.pory"
	.byte 0
# 7 "data/maps/VerdanturfTown/scripts.pory"

# 8 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_OnTransition:
# 9 "data/maps/VerdanturfTown/scripts.pory"
	setflag FLAG_VISITED_VERDANTURF_TOWN
# 10 "data/maps/VerdanturfTown/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 11 "data/maps/VerdanturfTown/scripts.pory"
    call_if_set FLAG_RECEIVED_INTRUIGING_STONE, VerdanturfTown_EventScript_AzurillNextToGirl
# 12 "data/maps/VerdanturfTown/scripts.pory"
	end
# 13 "data/maps/VerdanturfTown/scripts.pory"

# 14 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Twin::
# 15 "data/maps/VerdanturfTown/scripts.pory"
	lock
# 16 "data/maps/VerdanturfTown/scripts.pory"
	faceplayer
# 17 "data/maps/VerdanturfTown/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_TwinTunnelOpen
# 18 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_ManTryingToDigTunnel, MSGBOX_DEFAULT
# 19 "data/maps/VerdanturfTown/scripts.pory"
    closemessage
# 20 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceLeft
# 21 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
# 22 "data/maps/VerdanturfTown/scripts.pory"
	release
# 23 "data/maps/VerdanturfTown/scripts.pory"
	end
# 24 "data/maps/VerdanturfTown/scripts.pory"

# 25 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_TwinTunnelOpen::
# 26 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_ManDugTunnelForLove, MSGBOX_DEFAULT
# 27 "data/maps/VerdanturfTown/scripts.pory"
    closemessage
# 28 "data/maps/VerdanturfTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceLeft
# 29 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 0
# 30 "data/maps/VerdanturfTown/scripts.pory"
	release
# 31 "data/maps/VerdanturfTown/scripts.pory"
	end
# 32 "data/maps/VerdanturfTown/scripts.pory"

# 33 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Man::
# 34 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_AirCleanHere, MSGBOX_NPC
# 35 "data/maps/VerdanturfTown/scripts.pory"
	end
# 36 "data/maps/VerdanturfTown/scripts.pory"

# 37 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Camper::
# 38 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_MakeBattleTentDebut, MSGBOX_NPC
# 39 "data/maps/VerdanturfTown/scripts.pory"
	end
# 40 "data/maps/VerdanturfTown/scripts.pory"

# 41 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_Boy::
# 42 "data/maps/VerdanturfTown/scripts.pory"
	lock
# 43 "data/maps/VerdanturfTown/scripts.pory"
	faceplayer
# 44 "data/maps/VerdanturfTown/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_BoyTunnelOpen
# 45 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_GuyTryingToBustThroughCave, MSGBOX_DEFAULT
# 46 "data/maps/VerdanturfTown/scripts.pory"
	release
# 47 "data/maps/VerdanturfTown/scripts.pory"
	end
# 48 "data/maps/VerdanturfTown/scripts.pory"

# 49 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_BoyTunnelOpen::
# 50 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_EasyToGetToRustboroNow, MSGBOX_DEFAULT
# 51 "data/maps/VerdanturfTown/scripts.pory"
	release
# 52 "data/maps/VerdanturfTown/scripts.pory"
	end
# 53 "data/maps/VerdanturfTown/scripts.pory"

# 54 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_WandasHouseSign::
# 55 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_WandasHouse, MSGBOX_SIGN
# 56 "data/maps/VerdanturfTown/scripts.pory"
	end
# 57 "data/maps/VerdanturfTown/scripts.pory"

# 58 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_BattleTentSign::
# 59 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_BattleTentSign, MSGBOX_SIGN
# 60 "data/maps/VerdanturfTown/scripts.pory"
	end
# 61 "data/maps/VerdanturfTown/scripts.pory"

# 62 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_EventScript_RusturfTunnelSign::
# 63 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_RusturfTunnelSign, MSGBOX_SIGN
# 64 "data/maps/VerdanturfTown/scripts.pory"
	end
# 65 "data/maps/VerdanturfTown/scripts.pory"

# 66 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_ManTryingToDigTunnel:
# 67 "data/maps/VerdanturfTown/scripts.pory"
	.string "My papa told me this tunnel is full of\ntimid Pokémon that get all scared of\lloud noises and make a big uproar!\pSo they had to stop the big\ntunnel project, but there's one man\lwho's still trying to dig the tunnel\lby himself!$"
# 68 "data/maps/VerdanturfTown/scripts.pory"

# 69 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_ManDugTunnelForLove:
# 70 "data/maps/VerdanturfTown/scripts.pory"
	.string "There was a man who dug a tunnel for\na lady he loved.\pThat's really kinds of amazing!$"
# 71 "data/maps/VerdanturfTown/scripts.pory"

# 72 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_AirCleanHere:
# 73 "data/maps/VerdanturfTown/scripts.pory"
	.string "With the way the winds blow, volcanic\nash is never blown in this direction.\pThat means that the air is clean and\ndelicious here!\pIt could surely do wonders for the\nfrail and sickly.$"
# 74 "data/maps/VerdanturfTown/scripts.pory"

# 75 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_MakeBattleTentDebut:
# 76 "data/maps/VerdanturfTown/scripts.pory"
	.string "My Pokémon and I, we've been riding\n"
# 77 "data/maps/VerdanturfTown/scripts.pory"
	.string "a hot winning streak.\p"
# 78 "data/maps/VerdanturfTown/scripts.pory"
	.string "So I decided to make my Battle Tent\n"
# 79 "data/maps/VerdanturfTown/scripts.pory"
	.string "debut in this town!$"
# 80 "data/maps/VerdanturfTown/scripts.pory"

# 81 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_GuyTryingToBustThroughCave:
# 82 "data/maps/VerdanturfTown/scripts.pory"
	.string "See that cave by the Poké Mart?\pThere's a guy in there trying to bust\nup boulders so he can bust through\lto the other side.\pIt'd be great if we could get\nthrough…\pThen it'd be real easy to visit\nRustboro!$"
# 83 "data/maps/VerdanturfTown/scripts.pory"

# 84 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_EasyToGetToRustboroNow:
# 85 "data/maps/VerdanturfTown/scripts.pory"
	.string "We can finally pass through that\ntunnel next to the Poké Mart!\pIt's great!\nIt's easy to go shop for new Devon\lproducts in Rustboro now!$"
# 86 "data/maps/VerdanturfTown/scripts.pory"

# 87 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_TownSign:
# 88 "data/maps/VerdanturfTown/scripts.pory"
	.string "Verdanturf Town\p"
# 89 "data/maps/VerdanturfTown/scripts.pory"
	.string "“The windswept highlands with the\n"
# 90 "data/maps/VerdanturfTown/scripts.pory"
	.string "sweet fragrance of grass.”$"
# 91 "data/maps/VerdanturfTown/scripts.pory"

# 92 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_WandasHouse:
# 93 "data/maps/VerdanturfTown/scripts.pory"
	.string "Wanda's House$"
# 94 "data/maps/VerdanturfTown/scripts.pory"

# 95 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_BattleTentSign:
# 96 "data/maps/VerdanturfTown/scripts.pory"
	.string "Battle Tent Verdanturf Site\n"
# 97 "data/maps/VerdanturfTown/scripts.pory"
	.string "“Feast Your Eyes on Battles!”$"
# 98 "data/maps/VerdanturfTown/scripts.pory"

# 99 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Text_RusturfTunnelSign:
# 100 "data/maps/VerdanturfTown/scripts.pory"
	.string "Rusturf Tunnel\n"
# 101 "data/maps/VerdanturfTown/scripts.pory"
	.string "“Linking Rustboro and Verdanturf\p"
# 102 "data/maps/VerdanturfTown/scripts.pory"
	.string "“The tunnel project has been\n"
# 103 "data/maps/VerdanturfTown/scripts.pory"
	.string "canceled.”$"

VerdanturfTown_EventScript_AzurillNextToGirl::
# 110 "data/maps/VerdanturfTown/scripts.pory"
	setobjectxyperm 6, 6, 14
# 111 "data/maps/VerdanturfTown/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
	return


VerdanturfTown_EventScript_GirlAzurillLost::
# 116 "data/maps/VerdanturfTown/scripts.pory"
	goto_if_unset FLAG_RECEIVED_INTRUIGING_STONE, VerdanturfTown_EventScript_GirlAzurillLost_2
# 122 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_EventScript_GirlAzurillLost_Text_1, MSGBOX_NPC
	end

VerdanturfTown_EventScript_GirlAzurillLost_2:
# 117 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_EventScript_GirlAzurillLost_Text_0, MSGBOX_NPC
# 118 "data/maps/VerdanturfTown/scripts.pory"
	setflag FLAG_VERDANTURF_MISSING_AZURILL
# 119 "data/maps/VerdanturfTown/scripts.pory"
	release
	end


VerdanturfTown_EventScript_Azurill::
# 127 "data/maps/VerdanturfTown/scripts.pory"
	lock
# 128 "data/maps/VerdanturfTown/scripts.pory"
	faceplayer
# 129 "data/maps/VerdanturfTown/scripts.pory"
	waitse
# 130 "data/maps/VerdanturfTown/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 131 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_EventScript_Azurill_Text_0
# 132 "data/maps/VerdanturfTown/scripts.pory"
	waitmoncry
# 133 "data/maps/VerdanturfTown/scripts.pory"
	release
	end


VerdanturfTown_EventScript_TownSign::
# 138 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_Text_TownSign, MSGBOX_SIGN
# 139 "data/maps/VerdanturfTown/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 140 "data/maps/VerdanturfTown/scripts.pory"
	goto_if_set FLAG_VERDANTURF_MISSING_AZURILL, VerdanturfTown_EventScript_TownSign_4
VerdanturfTown_EventScript_TownSign_1:
	end

VerdanturfTown_EventScript_TownSign_2:
# 141 "data/maps/VerdanturfTown/scripts.pory"
	delay 32
# 142 "data/maps/VerdanturfTown/scripts.pory"
	closemessage
# 143 "data/maps/VerdanturfTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 144 "data/maps/VerdanturfTown/scripts.pory"
	delay 16
# 145 "data/maps/VerdanturfTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 146 "data/maps/VerdanturfTown/scripts.pory"
	addobject 6
# 147 "data/maps/VerdanturfTown/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_AZURILL
# 148 "data/maps/VerdanturfTown/scripts.pory"
	delay 32
# 149 "data/maps/VerdanturfTown/scripts.pory"
	playse SE_PIN
# 150 "data/maps/VerdanturfTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 151 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 152 "data/maps/VerdanturfTown/scripts.pory"
	waitse
# 153 "data/maps/VerdanturfTown/scripts.pory"
	applymovement 6, VerdanturfTown_Movement_AzurillLookAround
# 154 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 6
# 155 "data/maps/VerdanturfTown/scripts.pory"
	playse SE_PIN
# 156 "data/maps/VerdanturfTown/scripts.pory"
	applymovement 6, Common_Movement_QuestionMark
# 157 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 6
# 158 "data/maps/VerdanturfTown/scripts.pory"
	waitse
# 159 "data/maps/VerdanturfTown/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 160 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_EventScript_TownSign_Text_0
# 161 "data/maps/VerdanturfTown/scripts.pory"
	waitmoncry
# 162 "data/maps/VerdanturfTown/scripts.pory"
	closemessage
# 163 "data/maps/VerdanturfTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 164 "data/maps/VerdanturfTown/scripts.pory"
	turnobject 5, DIR_SOUTH
# 165 "data/maps/VerdanturfTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VerdanturfTown_Movement_PlayerToGirl
# 166 "data/maps/VerdanturfTown/scripts.pory"
	applymovement 6, VerdanturfTown_Movement_AzurillToGirl
# 167 "data/maps/VerdanturfTown/scripts.pory"
	waitmovement 6
# 168 "data/maps/VerdanturfTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 169 "data/maps/VerdanturfTown/scripts.pory"
	delay 32
# 170 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_EventScript_TownSign_Text_1
# 171 "data/maps/VerdanturfTown/scripts.pory"
	delay 8
# 172 "data/maps/VerdanturfTown/scripts.pory"
	giveitem ITEM_INTRIGUING_STONE, 1
# 173 "data/maps/VerdanturfTown/scripts.pory"
	closemessage
# 174 "data/maps/VerdanturfTown/scripts.pory"
	setflag FLAG_RECEIVED_INTRUIGING_STONE
	goto VerdanturfTown_EventScript_TownSign_1

VerdanturfTown_EventScript_TownSign_3:
# 140 "data/maps/VerdanturfTown/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_ne VerdanturfTown_EventScript_TownSign_7
	goto VerdanturfTown_EventScript_TownSign_1

VerdanturfTown_EventScript_TownSign_4:
# 140 "data/maps/VerdanturfTown/scripts.pory"
	goto_if_unset FLAG_RECEIVED_INTRUIGING_STONE, VerdanturfTown_EventScript_TownSign_3
	goto VerdanturfTown_EventScript_TownSign_1

VerdanturfTown_EventScript_TownSign_7:
# 140 "data/maps/VerdanturfTown/scripts.pory"
	compare VAR_TEMP_1, 7
	goto_if_ne VerdanturfTown_EventScript_TownSign_2
	goto VerdanturfTown_EventScript_TownSign_1


# 179 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Movement_AzurillLookAround:
# 180 "data/maps/VerdanturfTown/scripts.pory"
	walk_in_place_left
# 181 "data/maps/VerdanturfTown/scripts.pory"
	walk_in_place_right
# 182 "data/maps/VerdanturfTown/scripts.pory"
	walk_in_place_left
# 183 "data/maps/VerdanturfTown/scripts.pory"
	walk_in_place_right
# 184 "data/maps/VerdanturfTown/scripts.pory"
	walk_in_place_left
# 185 "data/maps/VerdanturfTown/scripts.pory"
	delay_16
# 186 "data/maps/VerdanturfTown/scripts.pory"
	walk_in_place_down
	step_end

# 189 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Movement_PlayerToGirl:
# 190 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_down
# 190 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_down
# 190 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_down
# 190 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_down
# 190 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_down
# 190 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_down
# 190 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_down
# 191 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_left
# 191 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_left
# 191 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_left
# 191 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_left
# 191 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_left
# 191 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_left
# 191 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_left
# 191 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_left
# 191 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_left
# 192 "data/maps/VerdanturfTown/scripts.pory"
	walk_in_place_up
	step_end

# 195 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_Movement_AzurillToGirl:
# 196 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_down
# 196 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_down
# 196 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_down
# 196 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_down
# 196 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_down
# 196 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_down
# 196 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_down
# 196 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_down
# 197 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_left
# 197 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_left
# 197 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_left
# 197 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_left
# 197 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_left
# 197 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_left
# 197 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_left
# 197 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_left
# 197 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_left
# 198 "data/maps/VerdanturfTown/scripts.pory"
	walk_faster_up
# 199 "data/maps/VerdanturfTown/scripts.pory"
	walk_in_place_down
	step_end

VerdanturfTown_EventScript_GirlAzurillLost_Text_0:
# 117 "data/maps/VerdanturfTown/scripts.pory"
	.string "My Azurill got lost…\pIt disappeared around the sign.\nWhere did it go?$"

VerdanturfTown_EventScript_GirlAzurillLost_Text_1:
# 122 "data/maps/VerdanturfTown/scripts.pory"
	.string "Thank you for finding my Azurill!$"

VerdanturfTown_EventScript_Azurill_Text_0:
# 131 "data/maps/VerdanturfTown/scripts.pory"
	.string "Shu!$"

VerdanturfTown_EventScript_TownSign_Text_0:
# 160 "data/maps/VerdanturfTown/scripts.pory"
	.string "Sh…\pShuu…?$"

VerdanturfTown_EventScript_TownSign_Text_1:
# 170 "data/maps/VerdanturfTown/scripts.pory"
	.string "Ah!\nAshu!\pThank you for finding my Azurill!\pI'll give you this.\nI just found it.\lIt has a strange shape and it looks\lamazing.$"
