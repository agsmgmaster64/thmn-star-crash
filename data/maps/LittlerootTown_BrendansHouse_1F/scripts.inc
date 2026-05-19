LittlerootTown_BrendansHouse_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_LITTLEROOT_INTRO_STATE, 3
	goto_if_eq LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	compare VAR_LITTLEROOT_INTRO_STATE, 5
	goto_if_eq LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	compare VAR_LITTLEROOT_INTRO_STATE, 6
	goto_if_eq LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	end

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 9, 8
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
	goto LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 8, 4
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
	goto LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 4, 5
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
	goto LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
	compare VAR_LITTLEROOT_INTRO_STATE, 6
	goto_if_lt LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD_2
LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	goto_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD_5
LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD_2:
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
	goto LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD_1

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD_5:
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
	goto LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD_4

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3
	.2byte 0

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
	lockall
	setspeakername gText_Mom
	msgbox LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
	closemessage
	setvar VAR_LITTLEROOT_INTRO_STATE, 4
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_WalkUp
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	releaseall
	end

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
	lockall
	msgbox LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_0
	closemessage
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_WalkUp
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_Movement_WalkUp
	waitmovement 0
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 7, 1
	waitstate
	releaseall
	end

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2:
	lockall
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Common_Movement_Delay48
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_0
	closemessage
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Movement_0
	waitmovement 0
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
	msgbox LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_1
	closemessage
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Movement_1
	waitmovement 0
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Movement_2
	waitmovement 0
	setspeakername PlayersHouse_1F_Text_Interviewer
	msgbox LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_2
	fadedefaultbgm
	special TurnOffTVScreen
	setflag FLAG_SYS_TV_HOME
	delay 35
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_3
	closemessage
	setvar VAR_TEMP_1, 1
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Movement_3
	waitmovement 0
	setvar VAR_LITTLEROOT_INTRO_STATE, 7
	releaseall
	end

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3:
	lockall
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_0
	waitmovement 0
	applymovement LOCALID_PLAYERS_HOUSE_1F_DAD, Common_Movement_FacePlayer
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_PLAYERS_HOUSE_1F_DAD, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_PLAYERS_HOUSE_1F_DAD, Common_Movement_Delay48
	waitmovement 0
	delay 20
	applymovement LOCALID_PLAYERS_HOUSE_1F_DAD, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_1
	waitmovement 0
	msgbox PlayersHouse_1F_Text_TicketFromBrineyCameForYou
	giveitem ITEM_SS_TICKET
	msgbox PlayersHouse_1F_Text_PortsInSlateportLilycove
	closemessage
	delay 20
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_2
	waitmovement 0
	applymovement LOCALID_PLAYERS_HOUSE_1F_DAD, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_3
	waitmovement 0
	msgbox PlayersHouse_1F_Text_BetterGetBackToGym
	closemessage
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_4
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_4
	applymovement LOCALID_PLAYERS_HOUSE_1F_DAD, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_5
	waitmovement 0
	playse SE_DOOR
	removeobject LOCALID_PLAYERS_HOUSE_1F_DAD
	setflag FLAG_RECEIVED_SS_TICKET
	delay 30
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_6
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	delay 20
	msgbox PlayersHouse_1F_Text_DadShouldStayLonger
	closemessage
	setflag FLAG_SYS_TV_LATIAS_LATIOS
	special TurnOnTVScreen
	delay 60
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_7
	waitmovement 0
	msgbox PlayersHouse_1F_Text_IsThatABreakingStory
	closemessage
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_8
	waitmovement 0
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox PlayersHouse_1F_Text_LatiEmergencyNewsFlash
	closemessage
	clearflag FLAG_SYS_TV_LATIAS_LATIOS
	setflag FLAG_LATIOS_OR_LATIAS_ROAMING
	special TurnOffTVScreen
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_9
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox PlayersHouse_1F_Text_WhatColorDidTheySay
	multichoice 22, 8, MULTI_TV_LATI, TRUE
	copyvar VAR_0x8004, VAR_RESULT
	special InitRoamer
	copyvar VAR_ROAMER_POKEMON, VAR_RESULT
	msgbox PlayersHouse_1F_Text_StillUnknownPokemon
	closemessage
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
	releaseall
	end


LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
	lockall
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom_Text_0
	closemessage
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Common_Movement_WalkInPlaceFasterUp
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_WalkUp
	waitmovement 0
	releaseall
	end


LittlerootTown_BrendansHouse_1F_EventScript_Mom::
	lock
	faceplayer
	compare VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_Mom_2
	goto_if_set FLAG_HAS_MATCH_CALL, LittlerootTown_BrendansHouse_1F_EventScript_Mom_5
	compare VAR_LITTLEROOT_TOWN_STATE, 1
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_Mom_8
LittlerootTown_BrendansHouse_1F_EventScript_Mom_7:
	compare VAR_TEMP_1, 1
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_Mom_14
	compare VAR_LITTLEROOT_INTRO_STATE, 7
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_Mom_22
	msgbox LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
	release
	end

LittlerootTown_BrendansHouse_1F_EventScript_Mom_2:
	msgbox PlayersHouse_1F_Text_DontPushYourselfTooHard
	release
	end

LittlerootTown_BrendansHouse_1F_EventScript_Mom_5:
	goto_if_set FLAG_ENABLE_MOM_MATCH_CALL, LittlerootTown_BrendansHouse_1F_EventScript_Mom_11
LittlerootTown_BrendansHouse_1F_EventScript_Mom_10:
	msgbox PlayersHouse_1F_Text_IsThatAPokenav
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_0
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_MOM_MATCH_CALL
	release
	end

LittlerootTown_BrendansHouse_1F_EventScript_Mom_8:
	goto PlayersHouse_1F_EventScript_MomHealsParty
	goto LittlerootTown_BrendansHouse_1F_EventScript_Mom_7

LittlerootTown_BrendansHouse_1F_EventScript_Mom_11:
	goto_if_set FLAG_BADGE05_GET, LittlerootTown_BrendansHouse_1F_EventScript_Mom_18
LittlerootTown_BrendansHouse_1F_EventScript_Mom_16:
	goto PlayersHouse_1F_EventScript_MomHealsParty
	goto LittlerootTown_BrendansHouse_1F_EventScript_Mom_10

LittlerootTown_BrendansHouse_1F_EventScript_Mom_14:
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_1
	release
	end

LittlerootTown_BrendansHouse_1F_EventScript_Mom_17:
	msgbox PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom
	giveitem ITEM_DONATION_BOX
	compare VAR_RESULT, 0
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_Mom_25
LittlerootTown_BrendansHouse_1F_EventScript_Mom_24:
	setflag FLAG_RECEIVED_AMULET_COIN
	msgbox PlayersHouse_1F_Text_DontPushYourselfTooHard
	release
	end

LittlerootTown_BrendansHouse_1F_EventScript_Mom_18:
	goto_if_unset FLAG_RECEIVED_AMULET_COIN, LittlerootTown_BrendansHouse_1F_EventScript_Mom_17
	goto LittlerootTown_BrendansHouse_1F_EventScript_Mom_16

LittlerootTown_BrendansHouse_1F_EventScript_Mom_22:
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_2
	release
	end

LittlerootTown_BrendansHouse_1F_EventScript_Mom_25:
	goto Common_EventScript_ShowBagIsFull
	goto LittlerootTown_BrendansHouse_1F_EventScript_Mom_24


PlayersHouse_1F_EventScript_MomHealsParty::
	msgbox PlayersHouse_1F_EventScript_MomHealsParty_Text_0
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	incrementgamestat GAME_STAT_RESTED_AT_HOME
	msgbox PlayersHouse_1F_EventScript_MomHealsParty_Text_1
	release
	end


LittlerootTown_BrendansHouse_1F_Movement_WalkUp:
	walk_up
	step_end


PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom:
	.string "MOM: Oh? Did DAD give you that BADGE?\p"
	.string "Then here's something from your MOM!$"

PlayersHouse_1F_Text_DontPushYourselfTooHard:
	.string "Don't push yourself too hard, dear.\n"
	.string "You can always come home.\p"
	.string "Go for it, honey!$"

PlayersHouse_1F_Text_IsThatAPokenav:
	.string "MOM: What is that, honey? A POKéNAV?\n"
	.string "Someone from DEVON gave it to you?\p"
	.string "Well, honey, how about registering\n"
	.string "your mom?\p"
	.string "… … …$"

PlayersHouse_1F_Text_Vigoroth1:
	.string "Fugiiiiih!$"

PlayersHouse_1F_Text_Vigoroth2:
	.string "Huggoh, uggo uggo…$"

PlayersHouse_1F_Text_Interviewer:
	.string "Interviewer$"

PlayersHouse_1F_Text_TheresAMovieOnTV:
	.string "There is a movie on TV.\p"
	.string "Two men are dancing on a big piano\n"
	.string "keyboard.\p"
	.string "Better get going!$"

PlayersHouse_1F_Text_RunningShoesManual:
	.string "It's the instruction booklet for the\n"
	.string "RUNNING SHOES.\p"
	.string "“Press the B Button to run while\n"
	.string "wearing your RUNNING SHOES.\p"
	.string "“Lace up your RUNNING SHOES and hit\n"
	.string "the road running!”$"

PlayersHouse_1F_Text_TicketFromBrineyCameForYou:
	.string "DAD: Hm?\p"
	.string "Hey, it's {PLAYER}!\p"
	.string "It's been a while since I saw you,\n"
	.string "but you look…stronger, somehow.\p"
	.string "That's the impression I get.\n"
	.string "But your old man hasn't given up yet!\p"
	.string "Oh, yes, I have something for you.\n"
	.string "This came to you from someone named\l"
	.string "MR. BRINEY.$"

PlayersHouse_1F_Text_PortsInSlateportLilycove:
	.string "DAD: Hm, a TICKET for a ferry?\p"
	.string "If I recall, there are ferry ports in\n"
	.string "SLATEPORT and LILYCOVE.$"

PlayersHouse_1F_Text_BetterGetBackToGym:
	.string "I'd better get back to PETALBURG GYM.\p"
	.string "MOM, thanks for looking after the house\n"
	.string "while I'm away.$"

PlayersHouse_1F_Text_DadShouldStayLonger:
	.string "MOM: That DAD of yours…\p"
	.string "He comes home for the first time in a\n"
	.string "while, but all he talks about is POKéMON.\p"
	.string "He should relax and stay a little longer.$"

PlayersHouse_1F_Text_IsThatABreakingStory:
	.string "MOM: Is that a breaking news story?$"

PlayersHouse_1F_Text_LatiEmergencyNewsFlash:
	.string "We bring you this emergency\n"
	.string "news flash!\p"
	.string "In various HOENN locales, there have\n"
	.string "been reports of a BZZT…colored\l"
	.string "POKéMON in flight.\p"
	.string "The identity of this POKéMON is\n"
	.string "currently unknown.\p"
	.string "We now return you to the regular\n"
	.string "movie program.$"

PlayersHouse_1F_Text_WhatColorDidTheySay:
	.string "MOM: {PLAYER}, did you catch that?\p"
	.string "What color did the announcer say\n"
	.string "that POKéMON was?$"

PlayersHouse_1F_Text_StillUnknownPokemon:
	.string "MOM: Well, isn't that something!\n"
	.string "There are still unknown POKéMON.$"

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Movement_0:
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	step_end

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Movement_1:
	walk_left
	walk_in_place_faster_right
	step_end

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Movement_2:
	walk_left
	walk_in_place_faster_up
	step_end

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Movement_3:
	walk_left
	walk_down
	walk_in_place_faster_right
	step_end

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_0:
	delay_16
	walk_down
	walk_down
	walk_down
	walk_in_place_faster_left
	step_end

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_1:
	walk_right
	walk_right
	step_end

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_2:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_in_place_faster_right
	step_end

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_3:
	face_left
	step_end

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_4:
	delay_8
	delay_16
	delay_16
	walk_in_place_faster_down
	step_end

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_5:
	walk_down
	walk_right
	walk_down
	delay_8
	step_end

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_6:
	walk_right
	step_end

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_7:
	walk_in_place_faster_left
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_faster_right
	delay_16
	delay_16
	step_end

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_8:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_faster_up
	step_end

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_Movement_9:
	walk_up
	walk_left
	walk_left
	step_end

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
	.string "{SPEAKER NAME_MOM}See, {PLAYER}?\n"
	.string "Isn't it nice in here, too?$"

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
	.string "{SPEAKER NAME_MOM}The mover's Puppets do all the work of\n"
	.string "moving us in and cleaning up after.\l"
	.string "This is so convenient!\p"
	.string "{PLAYER}, your room is upstairs.\n"
	.string "Go check it out, dear!\p"
	.string "Dad bought you a new clock to mark our\n"
	.string "move here.\l"
	.string "Don't forget to set it!$"

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_0:
	.string "{SPEAKER NAME_MOM}{PLAYER}.\p"
	.string "Go set the clock in your room, honey.$"

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_0:
	.string "{SPEAKER NAME_MOM}Oh! {PLAYER}, {PLAYER}!\n"
	.string "Quick! Come quickly!$"

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_1:
	.string "{SPEAKER NAME_MOM}Look! It's Petalburg Gym!\n"
	.string "Maybe Dad will be on!$"

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_2:
	.string "…We brought you this report from in\n"
	.string "front of Petalburg Gym.$"

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2_Text_3:
	.string "{SPEAKER NAME_MOM}Oh… It's over.\p"
	.string "I think Dad was on, but we missed him.\n"
	.string "Too bad.\p"
	.string "Oh, yes.\n"
	.string "One of Dad's friends lives in town.\p"
	.string "PROF. BIRCH is his name.\p"
	.string "He lives right next door, so you should\n"
	.string "go over and introduce yourself.$"

LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom_Text_0:
	.string "{SPEAKER NAME_MOM}Well, {PLAYER}?\p"
	.string "Aren't you interested in seeing your\n"
	.string "very own room?$"

LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_0:
	.string "Registered Mom\n"
	.string "in the iDollNav.$"

LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_1:
	.string "{SPEAKER NAME_MOM}See you, honey!$"

LittlerootTown_BrendansHouse_1F_EventScript_Mom_Text_2:
	.string "{SPEAKER NAME_MOM}Did you introduce yourself to PROF.\n"
	.string "BIRCH?$"

PlayersHouse_1F_EventScript_MomHealsParty_Text_0:
	.format "{SPEAKER NAME_MOM}How are you doing, {PLAYER}?\N"
	.format "You look a little tired.\p"
	.format "I think you should rest a bit."

PlayersHouse_1F_EventScript_MomHealsParty_Text_1:
	.string "{SPEAKER NAME_MOM}Take care, honey!$"
