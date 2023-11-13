.set LOCALID_KYOGRE, 1
.set LOCALID_ARCHIE, 2
.set LOCALID_MAXIE, 3
.set LOCALID_GRUNT_1, 4
.set LOCALID_SHELLY, 5
.set LOCALID_KYOGRE_SLEEPING, 7

SeafloorCavern_Room9_MapScripts::
	.byte 0

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogreTrigger1::
	setvar VAR_TEMP_1, 1
	goto SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre
	return


SeafloorCavern_Room9_EventScript_ArchieAwakenKyogreTrigger2::
	setvar VAR_TEMP_1, 2
	goto SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre
	return


SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre::
	lock
	delay 16
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement OBJ_EVENT_ID_PLAYER
	waitse
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_0
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_1
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_2
	closemessage
	fadescreen FADE_TO_BLACK
	switch VAR_TEMP_1
	case 1, SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_3
	case 2, SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_4
SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_1:
	waitmovement OBJ_EVENT_ID_PLAYER
	delay 24
	fadescreen FADE_FROM_BLACK
	delay 16
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_3
	closemessage
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_ARCHIE
	delay 16
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_4
	closemessage
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceUp
	waitmovement LOCALID_ARCHIE
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_5
	closemessage
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_ARCHIE
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_6
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_7
	closemessage
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceUp
	waitmovement LOCALID_ARCHIE
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_8
	closemessage
	delay 24
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_9
	closemessage
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_ARCHIE
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_10
	closemessage
	delay 24
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_11
	trainerbattle_no_intro TRAINER_ARCHIE, SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_12
	delay 16
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_13
	closemessage
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceUp
	waitmovement LOCALID_ARCHIE
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_14
	closemessage
	delay 16
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_15
	delay 24
	fadenewbgm MUS_DUMMY
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_16
	closemessage
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceLeft
	waitmovement LOCALID_ARCHIE
	playse SE_PIN
	applymovement LOCALID_ARCHIE, Common_Movement_ExclamationMark
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	waitmovement OBJ_EVENT_ID_PLAYER
	addobject LOCALID_SHELLY
	applymovement LOCALID_SHELLY, SeafloorCavern_Room9_Movement_ShellyApproachArchie
	applymovement LOCALID_MAXIE, SeafloorCavern_Room9_Movement_MaxieMakeWay
	waitmovement LOCALID_SHELLY
	delay 16
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_17
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_18
	closemessage
	delay 24
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_19
	closemessage
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkUp
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceUp
	waitmovement LOCALID_ARCHIE
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_20
	closemessage
	delay 16
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceUp
	delay 8
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceUp
	waitmovement OBJ_EVENT_ID_PLAYER
	setweather WEATHER_NONE
	doweather
	special Script_FadeOutMapMusic
	waitstate
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_21
	closemessage
	delay 16
	special WaitWeather
	waitstate
	setvar VAR_RESULT, 0
	playse SE_M_DETECT
	dofieldeffectsparkle 17, 42, 0
	waitfieldeffect FLDEFF_SPARKLE
	setvar VAR_RESULT, 1
	playfanfare MUS_AWAKEN_LEGEND
	playse SE_ORB
	special DoOrbEffect
	delay 160
	removeobject LOCALID_KYOGRE_SLEEPING
	addobject LOCALID_KYOGRE
	waitstate
	delay 64
	special FadeOutOrbEffect
	waitstate
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 5
	special ShakeCamera
	waitstate
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
	waitmovement LOCALID_KYOGRE
	removeobject LOCALID_KYOGRE
	delay 4
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 2
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 5
	special ShakeCamera
	waitstate
	delay 64
	applymovement OBJ_EVENT_ID_CAMERA, Common_Movement_WalkDown
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceDown
	delay 8
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceRight
	delay 8
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceRight
	waitmovement LOCALID_MAXIE
	special RemoveCameraObject
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_22
	delay 16
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_23
	closemessage
	delay 8
	playse SE_BIKE_BELL
	waitse
	playse SE_PIN
	applymovement LOCALID_ARCHIE, Common_Movement_ExclamationMark
	waitmovement LOCALID_ARCHIE
	waitse
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceRight
	waitmovement LOCALID_ARCHIE
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_24
	closemessage
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceUp
	waitmovement LOCALID_ARCHIE
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_25
	closemessage
	playse SE_PIN
	applymovement LOCALID_ARCHIE, Common_Movement_ExclamationMark
	waitmovement LOCALID_ARCHIE
	waitse
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_26
	closemessage
	applymovement LOCALID_SHELLY, Common_Movement_WalkRight
	waitmovement LOCALID_SHELLY
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_27
	closemessage
	delay 24
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_28
	closemessage
	delay 24
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceLeft
	waitmovement LOCALID_MAXIE
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_29
	closemessage
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceLeft
	waitmovement LOCALID_ARCHIE
	playse SE_PIN
	applymovement LOCALID_ARCHIE, Common_Movement_ExclamationMark
	delay 8
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceLeft
	waitmovement LOCALID_SHELLY
	waitse
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_30
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_31
	delay 16
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_32
	closemessage
	applymovement LOCALID_SHELLY, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_SHELLY
	msgbox SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_33
	closemessage
	fadescreen FADE_TO_BLACK
	setflag FLAG_REMOVE_WARP_FADE
	setvar VAR_ROUTE128_STATE, 1
	setvar VAR_SOOTOPOLIS_CITY_STATE, 1
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
	setflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
	clearflag FLAG_HIDE_ROUTE_128_ARCHIE
	clearflag FLAG_HIDE_ROUTE_128_MAXIE
	setflag FLAG_SYS_WEATHER_CTRL
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
	setvar VAR_STEVENS_HOUSE_STATE, 2
	setvar VAR_SEAFLOOR_CAVERN_STATE, 1
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS
	setflag FLAG_HIDE_MAP_NAME_POPUP
	delay 32
	warpsilent MAP_ROUTE128, 38, 22
	release
	end

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_3:
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_Room9_Movement_PlayerGoInFront1
	goto SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_1

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_4:
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_Room9_Movement_PlayerGoInFront2
	goto SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_1


SeafloorCavern_Room9_Movement_PlayerGoInFront1:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_in_place_up
	step_end

SeafloorCavern_Room9_Movement_PlayerGoInFront2:
	walk_right
	walk_right
	walk_right
	walk_in_place_up
	step_end

SeafloorCavern_Room9_Movement_ShellyApproachArchie:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	delay_16
	walk_right
	step_end

SeafloorCavern_Room9_Movement_MaxieMakeWay:
	delay_16
	delay_16
	delay_16
	delay_16
	walk_down
	walk_in_place_up
	step_end

SeafloorCavern_Room9_Movement_KyogreExit:
	slide_up
	slide_up
	step_end

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_0:
	.string "{COLOR RED}Maxie{COLOR DARK_GRAY}: Urk…$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_1:
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: Bwahahaha!\pYou're looking pretty pathetic now,\naren't you? The great Maxie!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_2:
	.string "{COLOR RED}Maxie{COLOR DARK_GRAY}: Ugh…\pA-Archie…you…$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_3:
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: Bwahahaha!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_4:
	.string "Y-you, child…\pWell, if it isn't my little adversary!\nI can't even find the words to praise\lyou as you deserve.\pSometimes it's best to keep things\nsimple.\pAll I'll say is you met my expectations,\nscamp!\pAnd I'm not just talking about\ntoday, but everything you've done up\ltill now.\pAnd that's why you'll get the honor of\nmeeting my new partner before anyone\lelse living in this world!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_5:
	.string "The super-ancient Pokémon…{PAUSE 16}KYOGRE!!!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_6:
	.string "How 'bout that?!\pThat beautiful form so long resting at\npeace within the azure sea!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_7:
	.string "{COLOR RED}Maxie{COLOR DARK_GRAY}: …$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_8:
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: I've been waiting so long for\nthis day to come.\pWe humans have disregarded Pokémon\nand nature both in our endless\lpursuit of own desires and needs…\pAnd in the process, we've created this\nbroken and disordered world…\pBut this is the day when I finally\nobtain the power to return\leverything how it once was--to return\lto our beginnings!\pNow that I can release the ancient\npower!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_9:
	.string "The ancient power of Primal Kyogre!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_10:
	.string "And now, you are the last token\nresistance that's trying to ruin my\lday.\pI'll use everything my team and I have\nto crush you once and for all!\pOh?\nAnd…Mega Evolution?\pDid ya think that you and your Pokémon\nare the only ones who can use it?\pLet me show you now what I didn't get\nto show you all this time…\pThis is the true power of my team!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_11:
	.string "GRAAAAAAAAAHHHHHH!!!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_12:
	.string "Like I figured…$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_13:
	.string "Hah…\nHah… Ahh…\p…\nAh.\lAha…\pAhahahaha…\pBwahahahahahaha!\nBwaha! AHAHAHAHAHAHA!\pPerfect! You're just as great as any\nlittle hero trying to save the world\loughta be!\pBut it changes nothing!\pI can't give up now!\nI can't!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_14:
	.string "I WILL use the power of this Blue Orb\nto awaken Kyogre at last!\pThen I'll return everything in this\nworld to its original, pure state!!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_15:
	.string "Now!\nAWAKEN, KYOGRE!\pRETURN EVERYTHING TO THE WAY IT WAS!!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_16:
	.string "{COLOR RED}???{COLOR DARK_GRAY}: Archie!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_17:
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: Shelly?$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_18:
	.string "{COLOR RED}Shelly{COLOR DARK_GRAY}: That's enough!\pCan't you see that the world you\ndream of and the world that Kyogre\lwill create are two completely\ldifferent places?!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_19:
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: Shelly…\pI always believed that you at least\nwould understand my dreams…$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_20:
	.string "But no!\nIn the end, the only one I can depend\lon is you, Kyogre!\pAbsorb all the power resting in this\nBlue Orb, and reclaim yourself!\lRevert to your primal form!\pThis is the time to take back\nthe great Evolution you lost in the\lancient past!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_21:
	.string "{COLOR RED}Maxie{COLOR DARK_GRAY}: No… That…$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_22:
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: Bwahahahaha!\nAt last…\pAT LAST!\nI've finally done it!!!\pIt hasn't even finished reversion, and\nit still has this much power!!!\pWith this I can return everything to\nits natural beginning!\pIt's time at last!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_23:
	.string "{COLOR RED}Shelly{COLOR DARK_GRAY}: What…have you done…$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_24:
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: Is that the crew outside?$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_25:
	.string "What is it…?\pOh?\nSo the great deluge has begun…\pBwahahahaha!\nBut of course it has!\lThat is exactly what I have--$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_26:
	.string "What…?\pWhat do you mean far more than we\nthought?!\pIt can't be…\nThen if it completes its Primal\lReversion…\pN-never mind that!\nJust keep an eye on it!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_27:
	.string "{COLOR RED}Shelly{COLOR DARK_GRAY}: Archie!\pWhat's going on outside?!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_28:
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: All that matters is…\pThat I have used the Blue Orb to\nawaken Kyogre…\pAnd now…\pI will return this world to its natural\nstate…\pThe state that is best for Pokémon!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_29:
	.string "{COLOR RED}Maxie{COLOR DARK_GRAY}: Archie.\pIt appears you also made a grave error\nregarding Kyogre's powers.$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_30:
	.string "{COLOR RED}Archie{COLOR DARK_GRAY}: What…did you say?$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_31:
	.string "{COLOR RED}Maxie{COLOR DARK_GRAY}: The “beginning” that Primal\nKyogre and Groudon brings about…\lThe way that they reset the world…\pThey will start by driving every living\nthing on this planet to death first!\pThis path leads only to an inescapable\ndespair that cannot be withstood.\lThat is all we have brought us.\pThis is what comes of the madness\nof thinking we could ever control the\lsuper-ancient Pokémon's power.$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_32:
	.string "{COLOR RED}Shelly{COLOR DARK_GRAY}: I knew it.\p…\pWe just need to get out of here!\nStanding around complaining isn't\lgoing to solve anything!$"

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Text_33:
	.string "You, too!\nWell, hurry up!$"
