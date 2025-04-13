# 1 "data/maps/Route114_LanettesHouse/scripts.pory"

# 2 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_MapScripts::
# 3 "data/maps/Route114_LanettesHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_LanettesHouse_OnTransition
# 4 "data/maps/Route114_LanettesHouse/scripts.pory"
	.byte 0
# 5 "data/maps/Route114_LanettesHouse/scripts.pory"

# 6 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_OnTransition:
# 7 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_LANDMARK_LANETTES_HOUSE
# 8 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 9 "data/maps/Route114_LanettesHouse/scripts.pory"

# 10 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_Notebook::
# 11 "data/maps/Route114_LanettesHouse/scripts.pory"
	lockall
# 12 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage1, MSGBOX_YESNO
# 13 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route114_LanettesHouse_EventScript_NotebookPage2
# 14 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ClosedTheNotebook, MSGBOX_DEFAULT
# 15 "data/maps/Route114_LanettesHouse/scripts.pory"
	releaseall
# 16 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 17 "data/maps/Route114_LanettesHouse/scripts.pory"

# 18 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_NotebookPage2::
# 19 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage2, MSGBOX_YESNO
# 20 "data/maps/Route114_LanettesHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route114_LanettesHouse_EventScript_NotebookPage3
# 21 "data/maps/Route114_LanettesHouse/scripts.pory"
	releaseall
# 22 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 23 "data/maps/Route114_LanettesHouse/scripts.pory"

# 24 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_NotebookPage3::
# 25 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage3, MSGBOX_DEFAULT
# 26 "data/maps/Route114_LanettesHouse/scripts.pory"
	return
# 27 "data/maps/Route114_LanettesHouse/scripts.pory"

# 28 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_PC::
# 29 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_EmailFromBill, MSGBOX_SIGN
# 30 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 31 "data/maps/Route114_LanettesHouse/scripts.pory"

# 32 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ResearchNotesPage1:
# 33 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "It's Lanette's research notes.\n"
# 34 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "There's information about Boxes.\p"
# 35 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Design Boxes to hold 30 Pokémon each.\p"
# 36 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Each Trainer should be able to store\n"
# 37 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "420 Pokémon on the PC system.\p"
# 38 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Keep reading?$"
# 39 "data/maps/Route114_LanettesHouse/scripts.pory"

# 40 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ResearchNotesPage2:
# 41 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "A marking system should be added to\n"
# 42 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "make Pokémon easier to organize.\p"
# 43 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "The name and wallpaper design of each\n"
# 44 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Box will be made changeable to please\l"
# 45 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "the stored Pokémon.\p"
# 46 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Keep reading?$"
# 47 "data/maps/Route114_LanettesHouse/scripts.pory"

# 48 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ResearchNotesPage3:
# 49 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "When storing a Pokémon, it should be\n"
# 50 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "sent to the Box inspected last.\p"
# 51 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "If that Box is full, the received\n"
# 52 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Pokémon is stored in the next Box.\p"
# 53 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "In other words, when a Box is examined,\n"
# 54 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "it is automatically selected as the Box\l"
# 55 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "to which Pokémon are sent.$"
# 56 "data/maps/Route114_LanettesHouse/scripts.pory"

# 57 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ClosedTheNotebook:
# 58 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "{PLAYER} closed the notebook.$"
# 59 "data/maps/Route114_LanettesHouse/scripts.pory"

# 60 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_EmailFromBill:
# 61 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "There's an e-mail from someone on the\nPC.\p“… … … … … …\p“Your Pokémon Storage System offers\nmore convenience than mine.\p“It has a lot of user-friendly features\nthat make it fun and useful, too.\p“It makes me proud that I played a part\nin its development.\p“Here's hoping that you'll continue\ncollaborating with me.\p“- Bill\pP.S. I hope you're taking breaks and not\nworking too hard.\pDon't forget to eat--I know how you get\nwhen you're lost in your research.\pTake care of yourself, Lanette.\p… … … … …”$"

Route114_LanettesHouse_EventScript_Lanette::
# 67 "data/maps/Route114_LanettesHouse/scripts.pory"
	lock
# 68 "data/maps/Route114_LanettesHouse/scripts.pory"
	faceplayer
# 69 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_ROTOM_CATALOG, Route114_LanettesHouse_EventScript_Lanette_2
# 75 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_SYS_PC_LANETTE
# 76 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_EventScript_Lanette_Text_1
# 77 "data/maps/Route114_LanettesHouse/scripts.pory"
	closemessage
# 78 "data/maps/Route114_LanettesHouse/scripts.pory"
	delay 16
# 79 "data/maps/Route114_LanettesHouse/scripts.pory"
	giveitem ITEM_ROTOM_CATALOG
# 80 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_EventScript_Lanette_Text_2
# 81 "data/maps/Route114_LanettesHouse/scripts.pory"
	closemessage
# 82 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_RECEIVED_ROTOM_CATALOG
# 83 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
	end

Route114_LanettesHouse_EventScript_Lanette_2:
# 70 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_EventScript_Lanette_Text_0
# 71 "data/maps/Route114_LanettesHouse/scripts.pory"
	closemessage
# 72 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
	end


Route114_LanettesHouse_EventScript_Lanette_Text_0:
# 70 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "{COLOR RED}Lanette{COLOR DARK_GRAY}: If you ever meet Bill, don't\ntell him how messy my house is, okay?\pHe'd never let me hear the end of it!$"

Route114_LanettesHouse_EventScript_Lanette_Text_1:
# 76 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "{COLOR RED}Lanette{COLOR DARK_GRAY}: Oh! {PLAYER}!\pI'm sorry everything so cluttered…\pWhen I get engrossed in research,\nthings end up this way…\pBut I'm so glad you're here!\pI've been working on something special\nwith a colleague of mine from Kanto.\lYou might know him--Bill?\pHe's the one who pioneered the Pokémon\nStorage System.\pWe've been collaborating on a project\nto expand the capabilities of certain\lPokémon, like Rotom.\pSpeaking of which…\n{PLAYER}, I want you to have this.$"

Route114_LanettesHouse_EventScript_Lanette_Text_2:
# 80 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "{COLOR RED}Lanette{COLOR DARK_GRAY}: It's called a Rotom Catalog.\pIt allows Rotom to change forms and\nunlock new potential!\pBill and I thought trainers like\nyou would appreciate the chance\lto explore new possibilities with\lyour Pokémon.\pConsider it a token of our gratitude\nfor using the Storage System.\pOh, and… if you ever meet Bill, don't tell\nhim how messy my house is, okay?\pHe'd never let me hear the end of it!$"
