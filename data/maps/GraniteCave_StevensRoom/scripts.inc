GraniteCave_StevensRoom_EventScript_Baelz::
	lock
	setspeakername gText_Baelz
	call GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlace
	msgbox GraniteCave_StevensRoom_Text_BaelzIntro
	closemessage
	call GraniteCave_StevensRoom_EventScript_StevenFacePlayer
	setspeakername gText_Baelz
	playse SE_SUPER_EFFECTIVE
	msgbox GraniteCave_StevensRoom_Text_WitnessMe
	closemessage
	setvar VAR_0x8004, ITEM_LETTER
	call Common_EventScript_PlayerHandedOverTheItem
	setflag FLAG_DELIVERED_STEVEN_LETTER
	setspeakername gText_Baelz
	msgbox GraniteCave_StevensRoom_Text_ThankYouTakeThis
	closemessage
	giveitem ITEM_TM_STEEL_WING
	compare VAR_RESULT, 0
	goto_if_eq GraniteCave_StevensRoom_EventScript_Baelz_2
GraniteCave_StevensRoom_EventScript_Baelz_1:
	setspeakername gText_Baelz
	msgbox GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox GraniteCave_StevensRoom_Text_RegisteredSteven
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_REGISTERED_STEVEN_POKENAV
	setspeakername gText_Baelz
	msgbox GraniteCave_StevensRoom_Text_IveGotToHurryAlong
	closemessage
	switch VAR_FACING
	case DIR_NORTH, GraniteCave_StevensRoom_EventScript_Baelz_6
	case DIR_SOUTH, GraniteCave_StevensRoom_EventScript_Baelz_7
	case DIR_WEST, GraniteCave_StevensRoom_EventScript_Baelz_8
	case DIR_EAST, GraniteCave_StevensRoom_EventScript_Baelz_8
GraniteCave_StevensRoom_EventScript_Baelz_4:
	playse SE_EXIT
	removeobject LOCALID_GRANITE_CAVE_BAELZ
	release
	end

GraniteCave_StevensRoom_EventScript_Baelz_2:
	call GraniteCave_StevensRoom_EventScript_BagFull
	goto GraniteCave_StevensRoom_EventScript_Baelz_1

GraniteCave_StevensRoom_EventScript_Baelz_6:
	call GraniteCave_StevensRoom_EventScript_StevenExitNorth
	goto GraniteCave_StevensRoom_EventScript_Baelz_4

GraniteCave_StevensRoom_EventScript_Baelz_7:
	call GraniteCave_StevensRoom_EventScript_StevenExitSouth
	goto GraniteCave_StevensRoom_EventScript_Baelz_4

GraniteCave_StevensRoom_EventScript_Baelz_8:
	call GraniteCave_StevensRoom_EventScript_StevenExitWestEast
	goto GraniteCave_StevensRoom_EventScript_Baelz_4



GraniteCave_StevensRoom_MapScripts::
	.byte 0

GraniteCave_StevensRoom_EventScript_StevenExitNorth::
	applymovement LOCALID_GRANITE_CAVE_BAELZ, GraniteCave_StevensRoom_Movement_StevenExit
	waitmovement 0
	return

GraniteCave_StevensRoom_EventScript_StevenExitWestEast::
	applymovement LOCALID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
	applymovement LOCALID_GRANITE_CAVE_BAELZ, GraniteCave_StevensRoom_Movement_StevenExit
	waitmovement 0
	return

GraniteCave_StevensRoom_EventScript_StevenExitSouth::
	applymovement LOCALID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
	applymovement LOCALID_GRANITE_CAVE_BAELZ, GraniteCave_StevensRoom_Movement_StevenExitSouth
	waitmovement 0
	return

GraniteCave_StevensRoom_EventScript_BagFull::
	setspeakername gText_Baelz
	msgbox GraniteCave_StevensRoom_Text_OhBagIsFull, MSGBOX_DEFAULT
	return

GraniteCave_StevensRoom_Movement_StevenExit:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	delay_8
	step_end

GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit:
	delay_16
	delay_16
	delay_16
	walk_in_place_faster_up
	step_end

GraniteCave_StevensRoom_Movement_StevenExitSouth:
	walk_left
	walk_up
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	delay_8
	step_end

GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlace::
	specialvar VAR_RESULT, GetPlayerFacingDirection
	switch VAR_RESULT
	case DIR_NORTH, GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlaceNorth
	case DIR_SOUTH, GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlaceSouth
	case DIR_EAST, GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlaceEast
	case DIR_WEST, GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlaceWest
	return

GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlaceNorth::
	applymovement LOCALID_GRANITE_CAVE_BAELZ, GraniteCave_StevensRoom_Movement_WalkInPlaceUp
	return

GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlaceSouth::
	applymovement LOCALID_GRANITE_CAVE_BAELZ, Common_Movement_WalkInPlaceDown
	return

GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlaceEast::
	applymovement LOCALID_GRANITE_CAVE_BAELZ, Common_Movement_WalkInPlaceLeft
	return

GraniteCave_StevensRoom_EventScript_BaelzWalkAwayInPlaceWest::
	applymovement LOCALID_GRANITE_CAVE_BAELZ, Common_Movement_WalkInPlaceRight
	return

GraniteCave_StevensRoom_Movement_WalkInPlaceUp::
	walk_in_place_down
	step_end

GraniteCave_StevensRoom_EventScript_StevenFacePlayer::
	specialvar VAR_RESULT, GetPlayerFacingDirection
	switch VAR_RESULT
	case DIR_NORTH, GraniteCave_StevensRoom_EventScript_StevenFacePlayerNorth
	case DIR_SOUTH, GraniteCave_StevensRoom_EventScript_StevenFacePlayerSouth
	case DIR_EAST, GraniteCave_StevensRoom_EventScript_StevenFacePlayerEast
	case DIR_WEST, GraniteCave_StevensRoom_EventScript_StevenFacePlayerWest
	return

GraniteCave_StevensRoom_EventScript_StevenFacePlayerNorth::
	turnobject LOCALID_GRANITE_CAVE_BAELZ, DIR_SOUTH
	return

GraniteCave_StevensRoom_EventScript_StevenFacePlayerSouth::
	turnobject LOCALID_GRANITE_CAVE_BAELZ, DIR_NORTH
	return

GraniteCave_StevensRoom_EventScript_StevenFacePlayerEast::
	turnobject LOCALID_GRANITE_CAVE_BAELZ, DIR_WEST
	return

GraniteCave_StevensRoom_EventScript_StevenFacePlayerWest::
	turnobject LOCALID_GRANITE_CAVE_BAELZ, DIR_EAST
	return

GraniteCave_StevensRoom_Text_RegisteredSteven:
	.string "Registered Baelz\n"
	.string "in the iDollNav.$"

GraniteCave_StevensRoom_Text_BaelzIntro::
	.string "Wazzup!\p"
	.string "I am Chaos, the end of ends.\p"
	.string "A steel rose trapped in a cage of ice.\p"
	.string "Your best friend, Baelz Hakos from\n"
	.string "Hololive EN.$"

GraniteCave_StevensRoom_Text_WitnessMe::
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_HAPPY}WITNESS ME!\p"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Wazzup, you need something from me?\p"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_SERIOUS}Huh, a letter?$"

GraniteCave_StevensRoom_Text_ThankYouTakeThis::
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Oh nice, a letter for me. Who sent this\n"
	.string "one here?\p"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_SERIOUS}Huh, from Mr. Orange.\n"
	.string "I guess I should read what's in it.\p"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_HAPPY}You know what, before I read it, here's a\n"
	.string "little prize for delivering this for me.\p"
	.string "It's a TM that I have for the move Steel\n"
	.string "Wing, a pretty nice move for your\l"
	.string "Puppets.$"

GraniteCave_StevensRoom_Text_OhBagIsFull::
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Oh wow,$"

GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister::
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Alright, so let's see what Mr. Orange has\n"
	.string "to say.\p"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_SERIOUS}Hmm, Team Aqua and Magma have been\n"
	.string "causing some unwanted chaos around\l"
	.string "their parts, and he needs me to take\l"
	.string "care of them?\p"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Well, I'll see what I can do exactly with\n"
	.string "those guys there.\p"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_HAPPY}Either way, your Puppets do look like\n"
	.string "they can take care of a lot of trainers.\p"
	.string "Maybe you should try out the renewed\n"
	.string "Puppet League, with my friend Kronii as\l"
	.string "the Champion.\p"
	.string "You might even be able to beat her at\n"
	.string "her game.\p"
	.string "I should probably register you in our\n"
	.string "iDollNavs, just so you can get more info\l"
	.string "about it.\p"
	.string "… … … … … …$"

GraniteCave_StevensRoom_Text_IveGotToHurryAlong::
	.string "{CREATE_MUGSHOT MUGSHOT_BAELZ EMOTE_NORMAL}Well, I gotta figure out what to do with\n"
	.string "Team Aqua and Magma now.\p"
	.string "With that being said, see you later\n"
	.string "then, {PLAYER}!$"
