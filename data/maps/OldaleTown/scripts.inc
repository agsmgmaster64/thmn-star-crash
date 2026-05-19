OldaleTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_OLDALE_TOWN
	goto_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	goto_if_unset FLAG_RECEIVED_POTION_OLDALE, OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	end

OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setobjectxyperm LOCALID_FOOTPRINTS_MAN, 1, 11
	setobjectmovementtype LOCALID_FOOTPRINTS_MAN, MOVEMENT_TYPE_FACE_LEFT
	goto OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	setobjectxyperm LOCALID_OLDALE_MART_EMPLOYEE, 12, 14
	setobjectmovementtype LOCALID_OLDALE_MART_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
	goto OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4


OldaleTown_EventScript_TownSign::
	msgbox OldaleTown_EventScript_TownSign_Text_0, MSGBOX_SIGN
	end


OldaleTown_EventScript_Girl::
	msgbox OldaleTown_EventScript_Girl_Text_0, MSGBOX_NPC
	end


OldaleTown_EventScript_ShowRivalMessage::
	msgbox OldaleTown_EventScript_ShowRivalMessage_Text_0
	closemessage
	compare VAR_0x8009, 0
	goto_if_eq OldaleTown_EventScript_ShowRivalMessage_3
OldaleTown_EventScript_ShowRivalMessage_1:
	compare VAR_0x8009, 1
	goto_if_eq OldaleTown_EventScript_ShowRivalMessage_7
OldaleTown_EventScript_ShowRivalMessage_6:
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
	waitmovement 0
	removeobject LOCALID_OLDALE_RIVAL
	setvar VAR_OLDALE_RIVAL_STATE, 2
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
	releaseall
	end

OldaleTown_EventScript_ShowRivalMessage_2:
	applymovement LOCALID_PLAYER, OldaleTown_Movement_WatchRivalExit
	goto OldaleTown_EventScript_ShowRivalMessage_1

OldaleTown_EventScript_ShowRivalMessage_3:
	compare VAR_FACING, DIR_SOUTH
	goto_if_ne OldaleTown_EventScript_ShowRivalMessage_2
	goto OldaleTown_EventScript_ShowRivalMessage_1

OldaleTown_EventScript_ShowRivalMessage_7:
	applymovement LOCALID_PLAYER, OldaleTown_Movement_WatchRivalExit
	goto OldaleTown_EventScript_ShowRivalMessage_6


OldaleTown_EventScript_MartEmployee::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_MartEmployee_2
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_MartEmployee_2
	setflag FLAG_TEMP_1
	playbgm MUS_ZGS_FOLLOW_ME, FALSE
	msgbox OldaleTown_Text_IWorkAtPokemonMart
	closemessage
	switch VAR_FACING
	case DIR_SOUTH, OldaleTown_EventScript_MartEmployee_8
	case DIR_NORTH, OldaleTown_EventScript_MartEmployee_9
	case DIR_EAST, OldaleTown_EventScript_MartEmployee_10
OldaleTown_EventScript_MartEmployee_6:
	msgbox OldaleTown_Text_ThisIsAPokemonMart
	giveitem ITEM_POTION
	compare VAR_RESULT, 0
	goto_if_eq OldaleTown_EventScript_MartEmployee_12
	msgbox OldaleTown_Text_PotionExplanation
	setflag FLAG_RECEIVED_POTION_OLDALE
	fadedefaultbgm
	release
	end

OldaleTown_EventScript_MartEmployee_2:
	msgbox OldaleTown_Text_PotionExplanation
	release
	end

OldaleTown_EventScript_MartEmployee_8:
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeSouth
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerSouth
	waitmovement 0
	goto OldaleTown_EventScript_MartEmployee_6

OldaleTown_EventScript_MartEmployee_9:
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeNorth
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerNorth
	waitmovement 0
	goto OldaleTown_EventScript_MartEmployee_6

OldaleTown_EventScript_MartEmployee_10:
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerEast
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeEast
	waitmovement 0
	goto OldaleTown_EventScript_MartEmployee_6

OldaleTown_EventScript_MartEmployee_12:
	msgbox gText_TooBadBagIsFull
	fadedefaultbgm
	release
	end


OldaleTown_EventScript_FootprintsMan::
	lock
	faceplayer
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_FootprintsMan_2
	msgbox OldaleTown_EventScript_FootprintsMan_Text_1
	closemessage
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

OldaleTown_EventScript_FootprintsMan_2:
	msgbox OldaleTown_EventScript_FootprintsMan_Text_0
	release
	end


OldaleTown_EventScript_BlockedPath::
	lockall
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerStepBack
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_BackUp
	waitmovement 0
	msgbox OldaleTown_EventScript_BlockedPath_Text_0
	closemessage
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_ReturnToOriginalPosition
	waitmovement 0
	releaseall
	end



OldaleTown_Movement_EmployeeEast:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_down
	step_end

OldaleTown_Movement_EmployeeSouth:
	walk_left
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_down
	step_end

OldaleTown_Movement_EmployeeNorth:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_down
	step_end

OldaleTown_Movement_PlayerEast:
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OldaleTown_Movement_PlayerSouth:
	delay_16
	delay_16
	delay_16
	delay_16
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OldaleTown_Movement_PlayerNorth:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OldaleTown_EventScript_Rival::
	lockall
	applymovement LOCALID_OLDALE_RIVAL, Common_Movement_FacePlayer
	waitmovement 0
	setvar VAR_0x8009, 0
	goto OldaleTown_EventScript_ShowRivalMessage
	end

OldaleTown_EventScript_RivalTrigger1::
	lockall
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer1
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	setvar VAR_0x8009, 1
	goto OldaleTown_EventScript_ShowRivalMessage
	end

OldaleTown_EventScript_RivalTrigger2::
	lockall
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer2
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	setvar VAR_0x8009, 1
	goto OldaleTown_EventScript_ShowRivalMessage
	end

OldaleTown_EventScript_RivalTrigger3::
	lockall
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer3
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	setvar VAR_0x8009, 1
	goto OldaleTown_EventScript_ShowRivalMessage
	end

OldaleTown_Movement_RivalApproachPlayer1:
	walk_left
	walk_left
	step_end

OldaleTown_Movement_RivalApproachPlayer2:
	walk_left
	step_end

OldaleTown_Movement_RivalApproachPlayer3:
	face_left
	step_end

OldaleTown_Movement_RivalExit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

OldaleTown_Movement_WatchRivalExit:
	delay_8
	delay_4
	walk_in_place_faster_down
	step_end

OldaleTown_Movement_PlayerStepBack:
	delay_8
	walk_right
	step_end

OldaleTown_Movement_BackUp:
	walk_fast_up
	walk_in_place_faster_left
	lock_facing_direction
	walk_right
	unlock_facing_direction
	step_end

OldaleTown_Movement_ReturnToOriginalPosition:
	walk_down
	walk_left
	step_end

OldaleTown_Text_IWorkAtPokemonMart:
	.string "Hi!\n"
	.string "I work at a Puppet Mart.\p"
	.string "Can I get you to come with me?$"

OldaleTown_Text_ThisIsAPokemonMart:
	.string "This is a Puppet Mart.\n"
	.string "Just look for our blue roof.\p"
	.string "We sell a variety of goods including\n"
	.string "Toho Orbs for catching Puppets.\p"
	.string "Here, I'd like you to have this as\n"
	.string "a promotional item.$"

OldaleTown_Text_PotionExplanation:
	.string "A Potion can be used anytime, so it's\n"
	.string "even more useful than a Puppet Center\l"
	.string "in certain situations.$"

OldaleTown_EventScript_TownSign_Text_0:
	.string "Oldale Town\n"
	.string "“Where things start off scarce.”$"

OldaleTown_EventScript_Girl_Text_0:
	.string "I want to take a rest, so I'm saving my\n"
	.string "progress.$"

OldaleTown_EventScript_ShowRivalMessage_Text_0:
	.string "WIP Akyuu returns to Littleroot$"

OldaleTown_EventScript_FootprintsMan_Text_0:
	.string "I finished sketching the footprints of\n"
	.string "a rare Puppet.\p"
	.string "But it turns out they were only my own\n"
	.string "footprints…$"

OldaleTown_EventScript_FootprintsMan_Text_1:
	.string "I just discovered the footprints of a\n"
	.string "rare Puppet!\p"
	.string "Wait until I finish sketching them,\n"
	.string "okay?$"

OldaleTown_EventScript_BlockedPath_Text_0:
	.string "Aaaaah! Wait!\n"
	.string "Please don't come in here.\p"
	.string "I just discovered the footprints of a\n"
	.string "rare Puppet!\p"
	.string "Wait until I finish sketching them,\n"
	.string "okay?$"
