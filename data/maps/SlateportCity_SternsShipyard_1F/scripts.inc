# 1 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 2 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_MapScripts::
# 3 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.byte 0
# 4 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 5 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Dock::
# 6 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	lockall
# 7 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_SternsShipyard_1F_EventScript_FerryReady
# 8 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_SternsShipyard_1F_EventScript_BrineyJoined
# 9 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto_if_set FLAG_DELIVERED_DEVON_GOODS, SlateportCity_SternsShipyard_1F_EventScript_NeedVeteran
# 10 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_SternsShipyard_1F_EventScript_GoFindStern
# 11 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_CantMakeHeadsOrTails, MSGBOX_DEFAULT
# 12 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
    closemessage
# 13 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
    delay 16
# 14 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
    playse SE_PIN
# 15 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
    applymovement LOCALID_DOCK, Common_Movement_QuestionMark
# 16 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
    waitmovement LOCALID_DOCK
# 17 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 18 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 19 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
    delay 8
# 20 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_MeetDockDeliverToStern, MSGBOX_DEFAULT
# 21 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	closemessage
# 22 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_WalkInPlaceDown
# 23 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 24 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	setflag FLAG_DOCK_REJECTED_DEVON_GOODS
# 25 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_TEAM_AQUA
# 26 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 27 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 28 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 29 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_FerryReady::
# 30 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 31 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 32 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_FerryIsReady, MSGBOX_DEFAULT
# 33 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 34 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 35 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 36 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_BrineyJoined::
# 37 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 38 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 39 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_BrineyJoinedUs, MSGBOX_DEFAULT
# 40 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 41 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 42 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 43 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_GoFindStern::
# 44 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 45 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 46 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_CouldYouFindStern, MSGBOX_DEFAULT
# 47 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	closemessage
# 48 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_WalkInPlaceDown
# 49 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 50 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 51 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 52 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 53 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_NeedVeteran::
# 54 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
# 55 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 0
# 56 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_CouldUseAdviceFromVeteran, MSGBOX_DEFAULT
# 57 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	releaseall
# 58 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 59 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 60 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Scientist1::
# 61 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_SeaIsLikeLivingThing, MSGBOX_NPC
# 62 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 63 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 64 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Scientist2::
# 65 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_GetSeasickEasily, MSGBOX_NPC
# 66 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 67 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 68 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_EventScript_Briney::
# 69 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_Text_DecidedToHelpDock, MSGBOX_NPC
# 70 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	end
# 71 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 72 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_CantMakeHeadsOrTails:
# 73 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Umm…\nIf this goes here, and that goes over\lthere…\pThen where does thing go?\nAnd about the that doohickey?\pAaargh!\nI can't make heads or tails of this!$"
# 74 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 75 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_MeetDockDeliverToStern:
# 76 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Hm?\nYou…\pOh, sorry.\nI'm {COLOR RED}Dock{COLOR DARK_GRAY}.\pCaptain Stern commissioned me to draw\nup designs for ferry.\pOh! Those parts you have…\nThose are the Devon Parts!\pBut…hmmm…\nThis won't do…\pI guess Captain Stern is probably off\nat the Oceanic Museum again.\pSorry, but could I ask you to find the\ncaptain and give the parts to him?$"
# 77 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 78 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_CouldYouFindStern:
# 79 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "{COLOR RED}Dock{COLOR DARK_GRAY}: I guess Captain Stern is\nprobably off at the Oceanic Museum\lagain.\pSorry, but find the captain and\ndeliver the parts directly to him!$"
# 80 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 81 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_CouldUseAdviceFromVeteran:
# 82 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "{COLOR RED}Dock{COLOR DARK_GRAY}: Shipbuilding is an art.\pA lot of things can't be figured out\nby calculations on paper.\pI really could use some advice from a\nveteran sailor who knows the seas…$"
# 83 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 84 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_BrineyJoinedUs:
# 85 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "{COLOR RED}Dock{COLOR DARK_GRAY}: Hey!\pMr. Briney agreed to join us and lend us\nhis knowledge and expertise.\pThe help of a legendary sailor\nmeans ferry plans are really coming\ltogether!$"
# 86 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 87 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_FerryIsReady:
# 88 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Dock: The ferry is finally ready!\p"
# 89 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "The new S.S. Tidal is truly a marvel\n"
# 90 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "of technology!\p"
# 91 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "But, I get the feeling that we can\n"
# 92 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "make something even better.\p"
# 93 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "You know, there's never an end to\n"
# 94 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "technology's march.$"
# 95 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 96 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_DecidedToHelpDock:
# 97 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Mr. Briney: Ah, {PLAYER}{KUN}!\n"
# 98 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "It's been too long!\p"
# 99 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Aye, since I met you, this old sea dog's\n"
# 100 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "been feeling frisky!\p"
# 101 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "So I've decided to help Dock make\n"
# 102 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "a ferry.\p"
# 103 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "Aye, after all, a ferry would be able\n"
# 104 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "to carry a lot of people.\p"
# 105 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "But, you know, that Dock is really\n"
# 106 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "something special.\p"
# 107 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "With his knack for technology and\n"
# 108 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "my experience, I'm sure that we can\l"
# 109 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "build one great ship, aye!$"
# 110 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 111 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_SeaIsLikeLivingThing:
# 112 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "The seasons, the weather, where\n"
# 113 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "the moon sits in the sky…\p"
# 114 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "These and other conditions make\n"
# 115 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "the sea change its expression.\p"
# 116 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "That's right!\n"
# 117 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "The sea is like a living thing!$"
# 118 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"

# 119 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
SlateportCity_SternsShipyard_1F_Text_GetSeasickEasily:
# 120 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "I get seasick real easily.\n"
# 121 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "So I get to help out here instead.$"

SlateportCity_SternsShipyard_1F_EventScript_Scientist3::
# 126 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	msgbox SlateportCity_SternsShipyard_1F_EventScript_Scientist3_Text_0, MSGBOX_NPC
# 127 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	closemessage
# 128 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	applymovement 5, Common_Movement_WalkInPlaceUp
# 129 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	waitmovement 5
	end


SlateportCity_SternsShipyard_1F_EventScript_Scientist3_Text_0:
# 126 "data/maps/SlateportCity_SternsShipyard_1F/scripts.pory"
	.string "I'm working here.$"
