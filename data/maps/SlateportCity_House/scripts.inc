SlateportCity_House_MapScripts::
	.byte 0

SlateportCity_House_EventScript_PokefanM::
	msgbox SlateportCity_House_Text_NatureToDoWithStatGains, MSGBOX_NPC
	end

SlateportCity_House_EventScript_Girl::
	msgbox SlateportCity_House_Text_MustBeGoingToBattleTent, MSGBOX_NPC
	end

SlateportCity_House_Text_NatureToDoWithStatGains:
	.string "My Pokémon has a Hasty Nature.\nAnd it has a higher Speed stat\lthan my other Pokémon.\pMaybe nature has something to do\nwith how the stats grow?$"

SlateportCity_House_Text_MustBeGoingToBattleTent:
	.string "You'll need a Contest Pass if you\nwant to enter a contest.\pI got mine from the famous contest\nstar Lisia!$"
