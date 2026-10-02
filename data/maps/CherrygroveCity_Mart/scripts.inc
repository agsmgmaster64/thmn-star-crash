CherrygroveCity_Mart_MapScripts::
	.byte 0


CherrygroveCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_ADVENTURE_STARTED, CherrygroveCity_Mart_EventScript_Clerk_2
CherrygroveCity_Mart_EventScript_Clerk_1:
	pokemart CherrygroveCity_Mart_Pokemart_Basic
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

CherrygroveCity_Mart_EventScript_Clerk_2:
	goto CherrygroveCity_Mart_EventScript_ExpandedItems
	goto CherrygroveCity_Mart_EventScript_Clerk_1


CherrygroveCity_Mart_EventScript_ExpandedItems::
	pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


	.align 2
CherrygroveCity_Mart_Pokemart_Basic:
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE
