Route116_TunnelersRestHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_TunnelersRestHouse_OnTransition
	.byte 0

Route116_TunnelersRestHouse_OnTransition:
	setflag FLAG_LANDMARK_TUNNELERS_REST_HOUSE
	end

Route116_TunnelersRestHouse_EventScript_Tunneler1::
	msgbox Route116_TunnelersRestHouse_Text_WeHadToStopBoring, MSGBOX_NPC
	end

Route116_TunnelersRestHouse_EventScript_Tunneler2::
	msgbox Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf, MSGBOX_NPC
	end

Route116_TunnelersRestHouse_EventScript_Tunneler3::
	lock
	faceplayer
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, Route116_TunnelersRestHouse_EventScript_TunnelOpened
	msgbox Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel, MSGBOX_DEFAULT
	release
	end

Route116_TunnelersRestHouse_EventScript_TunnelOpened::
	msgbox Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough, MSGBOX_DEFAULT
	release
	end

Route116_TunnelersRestHouse_Text_WeHadToStopBoring:
	.string "That Rusturf Tunnel there…\pAt first, we had a huge crew working\non boring through the rock with the\llatest machinery.\lBut we had to stop.\pTurns out we would have had a\nnegative effect on wild Pokémon in\lthe area.\pSo we're left lazing around here\ndoing nothing!$"

Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf:
	.string "There's a man who dug his way to\nVerdanturf all by his lonesome.\lHe was desperate to get through.\pHe said that if you dig little by\nlittle without using machines, you\lwon't disturb Pokémon, and you'll\lavoid harming the natural\lenvironment.$"

Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel:
	.string "To get to Verdanturf without using\n"
	.string "this tunnel, you'd have to cross the\l"
	.string "sea to Dewford, sail on to Slateport,\l"
	.string "and then travel through Mauville.$"

Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough:
	.string "Did you hear? The Tunnel to Verdanturf\n"
	.string "has gone through!\p"
	.string "Sometimes, if you hope strongly enough,\n"
	.string "dreams do come true.$"

