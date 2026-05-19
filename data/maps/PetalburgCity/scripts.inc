PetalburgCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_PETALBURG_CITY
	compare VAR_PETALBURG_CITY_STATE, 0
	goto_if_eq PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	compare VAR_PETALBURG_CITY_STATE, 4
	goto_if_eq PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	compare VAR_PETALBURG_CITY_STATE, 8
	goto_if_eq PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setobjectxyperm LOCALID_GYM_BOY, 6, 11
	goto PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	setflag FLAG_HIDE_MAP_NAME_POPUP
	savebgm MUS_FOLLOW_ME
	goto PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	setvar VAR_PETALBURG_GYM_STATE, 7
	return

PetalburgCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

PetalburgCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
	lockall
	setflag FLAG_HIDE_MAP_NAME_POPUP
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
	waitmovement 0
	setvar VAR_0x8004, 7
	setvar VAR_0x8005, 5
	opendoor VAR_0x8004, VAR_0x8005
	waitdooranim
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
	waitmovement 0
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
	hideobjectat LOCALID_PLAYER, MAP_PETALBURG_CITY
	closedoor VAR_0x8004, VAR_0x8005
	waitdooranim
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	fadedefaultbgm
	clearflag FLAG_DONT_TRANSITION_MUSIC
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
	waitstate
	releaseall
	end


PetalburgCity_EventScript_ShowGymToPlayer0::
	lockall
	setvar VAR_0x8008, 0
	goto PetalburgCity_EventScript_ShowGymToPlayer
	return


PetalburgCity_EventScript_ShowGymToPlayer1::
	lockall
	setvar VAR_0x8008, 1
	goto PetalburgCity_EventScript_ShowGymToPlayer
	return


PetalburgCity_EventScript_ShowGymToPlayer2::
	lockall
	setvar VAR_0x8008, 2
	goto PetalburgCity_EventScript_ShowGymToPlayer
	return


PetalburgCity_EventScript_ShowGymToPlayer3::
	lockall
	setvar VAR_0x8008, 3
	goto PetalburgCity_EventScript_ShowGymToPlayer
	return


PetalburgCity_EventScript_ShowGymToPlayer::
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
	waitmovement 0
	playbgm MUS_FOLLOW_ME, FALSE
	playse SE_PIN
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
	waitmovement 0
	switch VAR_0x8008
	case 0, PetalburgCity_EventScript_ShowGymToPlayer_3
	case 1, PetalburgCity_EventScript_ShowGymToPlayer_4
	case 2, PetalburgCity_EventScript_ShowGymToPlayer_5
	case 3, PetalburgCity_EventScript_ShowGymToPlayer_6
PetalburgCity_EventScript_ShowGymToPlayer_1:
	msgbox PetalburgCity_Text_AreYouRookieTrainer
	closemessage
	switch VAR_0x8008
	case 0, PetalburgCity_EventScript_ShowGymToPlayer_9
	case 1, PetalburgCity_EventScript_ShowGymToPlayer_10
	case 2, PetalburgCity_EventScript_ShowGymToPlayer_11
	case 3, PetalburgCity_EventScript_ShowGymToPlayer_12
PetalburgCity_EventScript_ShowGymToPlayer_7:
	msgbox PetalburgCity_Text_ThisIsPetalburgGym
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox PetalburgCity_Text_ThisIsGymSign
	closemessage
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
	waitmovement 0
	fadedefaultbgm
	releaseall
	end

PetalburgCity_EventScript_ShowGymToPlayer_3:
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_0
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	goto PetalburgCity_EventScript_ShowGymToPlayer_1

PetalburgCity_EventScript_ShowGymToPlayer_4:
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_1
	waitmovement 0
	goto PetalburgCity_EventScript_ShowGymToPlayer_1

PetalburgCity_EventScript_ShowGymToPlayer_5:
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_2
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	goto PetalburgCity_EventScript_ShowGymToPlayer_1

PetalburgCity_EventScript_ShowGymToPlayer_6:
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_3
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	goto PetalburgCity_EventScript_ShowGymToPlayer_1

PetalburgCity_EventScript_ShowGymToPlayer_9:
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_4
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_ShowGymToPlayer_Movement_5
	waitmovement 0
	goto PetalburgCity_EventScript_ShowGymToPlayer_7

PetalburgCity_EventScript_ShowGymToPlayer_10:
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_6
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_ShowGymToPlayer_Movement_7
	waitmovement 0
	goto PetalburgCity_EventScript_ShowGymToPlayer_7

PetalburgCity_EventScript_ShowGymToPlayer_11:
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_4
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_ShowGymToPlayer_Movement_8
	waitmovement 0
	goto PetalburgCity_EventScript_ShowGymToPlayer_7

PetalburgCity_EventScript_ShowGymToPlayer_12:
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_9
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_ShowGymToPlayer_Movement_10
	waitmovement 0
	goto PetalburgCity_EventScript_ShowGymToPlayer_7


PetalburgCity_EventScript_Scott0::
	lockall
	addobject LOCALID_PETALBURG_SCOTT
	setvar VAR_0x8008, 0
	setobjectxy LOCALID_PETALBURG_SCOTT, 14, 10
	goto PetalburgCity_EventScript_Scott
	return


PetalburgCity_EventScript_Scott1::
	lockall
	addobject LOCALID_PETALBURG_SCOTT
	setvar VAR_0x8008, 1
	setobjectxy LOCALID_PETALBURG_SCOTT, 14, 11
	goto PetalburgCity_EventScript_Scott
	return


PetalburgCity_EventScript_Scott2::
	lockall
	addobject LOCALID_PETALBURG_SCOTT
	setvar VAR_0x8008, 2
	setobjectxy LOCALID_PETALBURG_SCOTT, 14, 12
	goto PetalburgCity_EventScript_Scott
	return


PetalburgCity_EventScript_Scott::
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_0
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_0
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	setvar VAR_SCOTT_STATE, 1
	msgbox PetalburgCity_EventScript_Scott_Text_0
	closemessage
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	delay 30
	msgbox PetalburgCity_EventScript_Scott_Text_1
	closemessage
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	delay 30
	msgbox PetalburgCity_EventScript_Scott_Text_2
	closemessage
	switch VAR_0x8008
	case 0, PetalburgCity_EventScript_Scott_3
	case 1, PetalburgCity_EventScript_Scott_4
	case 2, PetalburgCity_EventScript_Scott_5
PetalburgCity_EventScript_Scott_1:
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
	removeobject LOCALID_PETALBURG_SCOTT
	releaseall
	end

PetalburgCity_EventScript_Scott_3:
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_Scott_Movement_1
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_2
	waitmovement 0
	goto PetalburgCity_EventScript_Scott_1

PetalburgCity_EventScript_Scott_4:
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_Scott_Movement_1
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_2
	waitmovement 0
	goto PetalburgCity_EventScript_Scott_1

PetalburgCity_EventScript_Scott_5:
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_Scott_Movement_3
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_4
	waitmovement 0
	goto PetalburgCity_EventScript_Scott_1



PetalburgCity_EventScript_Boy::
	lock
	faceplayer
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PETALBURG_BOY, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

PetalburgCity_EventScript_WallysMom::
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
	end

PetalburgCity_Movement_WalkToWallyHousePlayer:
	delay_8
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

PetalburgCity_Movement_WalkInsideHousePlayer:
	walk_up
	walk_up
	step_end

PetalburgCity_Movement_WalkToWallyHouseWallysDad:
	delay_8
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

PetalburgCity_Movement_WalkInsideHouseWallysDad:
	walk_up
	set_invisible
	step_end

PetalburgCity_EventScript_GymSign::
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
	end

PetalburgCity_EventScript_CitySign::
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
	end

PetalburgCity_EventScript_Gentleman::
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
	end

PetalburgCity_EventScript_WallyHouseSign::
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
	end

PetalburgCity_Movement_BoyWalkAway:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_EventScript_GymBoy::
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
	end

PetalburgCity_Text_WhereIsWally:
	.string "Where has our WALLY gone?\p"
	.string "We have to leave for VERDANTURF TOWN\n"
	.string "very soon…$"

PetalburgCity_Text_AreYouRookieTrainer:
	.string "Hiya! Are you maybe…\n"
	.string "A rookie Trainer?\p"
	.string "Do you know what Puppet Trainers\n"
	.string "do when they reach a new town?\p"
	.string "They first check what kind of Gym\n"
	.string "is in the town.$"

PetalburgCity_Text_ThisIsPetalburgGym:
	.string "See? This is Treepeak City's Gym.$"

PetalburgCity_Text_ThisIsGymSign:
	.string "This is the Gym's sign. Look for it\n"
	.string "whenever you're looking for a Gym.$"

PetalburgCity_Text_WaterReflection:
	.string "My face is reflected in the water.\p"
	.string "It's a shining grin full of hope…\p"
	.string "Or it could be a look of somber silence\n"
	.string "struggling with fear…\p"
	.string "What do you see reflected in your face?$"

PetalburgCity_Text_FullPartyExplanation:
	.string "Let's say you have six POKéMON.\n"
	.string "If you catch another one…\p"
	.string "It is automatically sent to a STORAGE\n"
	.string "BOX over a PC connection.$"

PetalburgCity_Text_GymSign:
	.string "Treepeak City Puppet Gym\n"
	.string "Leader: Larry\l"
	.string "“A man in pursuit of power!”$"

PetalburgCity_Text_CitySign:
	.string "Treepeak City\n"
	.string "“Where people mingle with nature.”$"

PetalburgCity_Text_WallyHouseSign:
	.string "WALLY'S HOUSE$"

PetalburgCity_EventScript_ShowGymToPlayer_Movement_0:
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_up
	step_end

PetalburgCity_EventScript_ShowGymToPlayer_Movement_1:
	walk_right
	walk_right
	step_end

PetalburgCity_EventScript_ShowGymToPlayer_Movement_2:
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_down
	step_end

PetalburgCity_EventScript_ShowGymToPlayer_Movement_3:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_down
	step_end

PetalburgCity_EventScript_ShowGymToPlayer_Movement_4:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_in_place_faster_up
	step_end

PetalburgCity_EventScript_ShowGymToPlayer_Movement_5:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	step_end

PetalburgCity_EventScript_ShowGymToPlayer_Movement_6:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_right
	walk_in_place_faster_up
	step_end

PetalburgCity_EventScript_ShowGymToPlayer_Movement_7:
	delay_16
	delay_16
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	step_end

PetalburgCity_EventScript_ShowGymToPlayer_Movement_8:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	step_end

PetalburgCity_EventScript_ShowGymToPlayer_Movement_9:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_right
	walk_in_place_faster_up
	step_end

PetalburgCity_EventScript_ShowGymToPlayer_Movement_10:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	step_end

PetalburgCity_EventScript_Scott_Movement_0:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_EventScript_Scott_Movement_1:
	delay_16
	walk_in_place_faster_down
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

PetalburgCity_EventScript_Scott_Movement_2:
	walk_down
	walk_diag_southwest
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_EventScript_Scott_Movement_3:
	delay_16
	walk_in_place_faster_up
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

PetalburgCity_EventScript_Scott_Movement_4:
	walk_up
	walk_diag_southwest
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_EventScript_Scott_Text_0:
	.string "Excuse me!\p"
	.string "Let me guess, from the way you're\n"
	.string "dressed, are you a Puppet Trainer?$"

PetalburgCity_EventScript_Scott_Text_1:
	.string "… … … … … …\p"
	.string "Well, maybe not.\n"
	.string "Your clothes aren't all that dirty.\p"
	.string "You're either a rookie Trainer, or maybe\n"
	.string "you're just an ordinary kid.$"

PetalburgCity_EventScript_Scott_Text_2:
	.string "I'm roaming the land in search of\n"
	.string "talented Trainers.\p"
	.string "I'm sorry to have taken your time.$"
