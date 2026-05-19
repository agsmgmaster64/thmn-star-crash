LittlerootTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_LITTLEROOT_TOWN
	call Common_EventScript_SetupRivalGfxId
	compare VAR_LITTLEROOT_TOWN_STATE, 0
	goto_if_eq LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	compare VAR_LITTLEROOT_TOWN_STATE, 3
	goto_if_eq LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	compare VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
	goto_if_eq LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	compare VAR_OLDALE_RIVAL_STATE, 1
	goto_if_eq LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1
	goto_if_eq LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
	goto_if_eq LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_17
LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
	end

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 9, 2
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_DOWN
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
	setobjectmovementtype LOCALID_LITTLEROOT_MOM, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 7, 9
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 3
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
	setvar VAR_OLDALE_RIVAL_STATE, 2
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
	setflag FLAG_HIDE_MAP_NAME_POPUP
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_16

LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
	.2byte 0

LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
	lockall
	delay 15
	playse SE_LEDGE
	applymovement LOCALID_PLAYER, LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
	waitmovement 0
	opendoor 7, 8
	waitdooranim
	addobject LOCALID_LITTLEROOT_MOM
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
	waitmovement 0
	closedoor 7, 8
	waitdooranim
	delay 10
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2
	waitmovement 0
	msgbox LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
	closemessage
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3
	applymovement LOCALID_PLAYER, LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
	waitmovement 0
	opendoor 7, 8
	waitdooranim
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5
	applymovement LOCALID_PLAYER, LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_6
	waitmovement 0
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
	hideplayer
	closedoor 7, 8
	waitdooranim
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
	waitstate
	releaseall
	end

LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
	lockall
	playse SE_PIN
	applymovement LOCALID_LITTLEROOT_BIRCH, Common_Movement_ExclamationMark
	waitmovement 0
	delay 80
	msgbox LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_0
	closemessage
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
	delay 20
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
	waitstate
	releaseall
	end

LittlerootTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

LittlerootTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
	addobject LOCALID_LITTLEROOT_BIRCH
	addobject LOCALID_LITTLEROOT_RIVAL
	setobjectxy LOCALID_LITTLEROOT_RIVAL, 8, 10
	setobjectxy LOCALID_LITTLEROOT_BIRCH, 7, 10
	end


LittlerootTown_EventScript_Twin::
	lock
	faceplayer
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_Twin_2
	compare VAR_LITTLEROOT_TOWN_STATE, 1
	goto_if_eq LittlerootTown_EventScript_Twin_5
	msgbox LittlerootTown_EventScript_Twin_Text_2
	release
	end

LittlerootTown_EventScript_Twin_2:
	msgbox LittlerootTown_EventScript_Twin_Text_0
	release
	end

LittlerootTown_EventScript_Twin_5:
	msgbox LittlerootTown_EventScript_Twin_Text_1
	release
	end


LittlerootTown_EventScript_FatMan::
	msgbox LittlerootTown_EventScript_FatMan_Text_0, MSGBOX_NPC
	end


LittlerootTown_EventScript_Boy::
	msgbox LittlerootTown_EventScript_Boy_Text_0, MSGBOX_NPC
	end


LittlerootTown_EventScript_BrendansHouseSign::
	msgbox LittlerootTown_EventScript_BrendansHouseSign_Text_0, MSGBOX_SIGN
	end


LittlerootTown_EventScript_MaysHouseSign::
	msgbox LittlerootTown_EventScript_MaysHouseSign_Text_0, MSGBOX_SIGN
	end


LittlerootTown_EventScript_BirchsLabSign::
	msgbox LittlerootTown_EventScript_BirchsLabSign_Text_0, MSGBOX_SIGN
	end


LittlerootTown_EventScript_TownSign::
	msgbox LittlerootTown_EventScript_TownSign_Text_0, MSGBOX_SIGN
	end


LittlerootTown_EventScript_Mom::
	lock
	faceplayer
	call LittlerootTown_EventScript_GiveRunningShoes
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	opendoor 7, 8
	waitdooranim
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
	waitmovement 0
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
	closedoor 7, 8
	waitdooranim
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
	return


LittlerootTown_EventScript_GiveRunningShoesTrigger::
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	setvar VAR_0x8009, 7
	setvar VAR_0x800A, 8
	msgbox LittlerootTown_EventScript_GiveRunningShoesTrigger_Text_0
	closemessage
	call LittlerootTown_EventScript_MomApproachPlayerMale
	call LittlerootTown_EventScript_GiveRunningShoes
	call LittlerootTown_EventScript_MomReturnHomeMale
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
	return


LittlerootTown_EventScript_GiveRunningShoes::
	msgbox LittlerootTown_EventScript_GiveRunningShoes_Text_0
	hidespeakername
	giveitem ITEM_FISHING_ROD
	giveitem ITEM_OUTFIT_BOX
	unlockoutfit OUTFIT_THE_ALTERNATE
	unlockoutfit OUTFIT_YOUNG_START
	unlockoutfit OUTFIT_ALTERED_YOUTH
	setflag FLAG_RECEIVED_RUNNING_SHOES
	msgbox LittlerootTown_EventScript_GiveRunningShoes_Text_1
	closemessage
	delay 30
	return


LittlerootTown_EventScript_SetReceivedRunningShoes::
	removeobject LOCALID_LITTLEROOT_MOM
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
	release
	end


LittlerootTown_EventScript_DangerousWithoutPokemon::
	msgbox LittlerootTown_EventScript_Twin_Text_2
	closemessage
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
	waitmovement 0
	msgbox LittlerootTown_EventScript_DangerousWithoutPokemon_Text_0
	closemessage
	return




LittlerootTown_EventScript_NeedPokemonTriggerLeft::
	lockall
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
	waitmovement 0
	call LittlerootTown_EventScript_DangerousWithoutPokemon
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnLeft
	waitmovement 0
	releaseall
	end

LittlerootTown_Movement_TwinApproachPlayerLeft:
	face_right
	delay_8
	disable_jump_landing_ground_effect
	jump_in_place_right
	delay_8
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_left
	face_down
	step_end

LittlerootTown_Movement_TwinPushPlayerFromRoute:
	walk_down
	step_end

LittlerootTown_Movement_TwinReturnLeft:
	walk_right
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_in_place_faster_down
	step_end

LittlerootTown_Movement_PushPlayerBackFromRoute:
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end

LittlerootTown_EventScript_NeedPokemonTriggerRight::
	lockall
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
	waitmovement 0
	call LittlerootTown_EventScript_DangerousWithoutPokemon
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnRight
	waitmovement 0
	releaseall
	end

LittlerootTown_Movement_TwinApproachPlayerRight:
	face_right
	delay_8
	disable_jump_landing_ground_effect
	jump_in_place_right
	delay_8
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_right
	face_down
	step_end

LittlerootTown_Movement_TwinReturnRight:
	walk_left
	walk_down
	walk_left
	walk_left
	walk_left
	walk_in_place_faster_down
	step_end

LittlerootTown_EventScript_GiveRunningShoesTrigger0::
	lockall
	setvar VAR_0x8008, 0
	setobjectxy LOCALID_LITTLEROOT_MOM, 10, 9
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end

LittlerootTown_EventScript_GiveRunningShoesTrigger1::
	lockall
	setvar VAR_0x8008, 1
	setobjectxy LOCALID_LITTLEROOT_MOM, 11, 9
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end

LittlerootTown_EventScript_GiveRunningShoesTrigger2::
	lockall
	setvar VAR_0x8008, 2
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end

LittlerootTown_EventScript_GiveRunningShoesTrigger3::
	lockall
	setvar VAR_0x8008, 3
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end

LittlerootTown_EventScript_GiveRunningShoesTrigger4::
	lockall
	setvar VAR_0x8008, 4
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end

LittlerootTown_EventScript_GiveRunningShoesTrigger5::
	lockall
	setvar VAR_0x8008, 5
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end

LittlerootTown_EventScript_MomApproachPlayerMale::
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
	return

LittlerootTown_EventScript_MomApproachPlayer0::
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayer0
	waitmovement 0
	return

LittlerootTown_EventScript_MomApproachPlayer1::
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayer1
	waitmovement 0
	return

LittlerootTown_EventScript_MomApproachPlayerMale2::
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
	waitmovement 0
	return

LittlerootTown_EventScript_MomApproachPlayerMale3::
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
	waitmovement 0
	return

LittlerootTown_EventScript_MomApproachPlayerMale4::
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
	waitmovement 0
	return

LittlerootTown_EventScript_MomApproachPlayerMale5::
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
	waitmovement 0
	return

LittlerootTown_EventScript_MomReturnHomeMale::
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
	return

LittlerootTown_EventScript_MomReturnHome0::
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHome0
	waitmovement 0
	return

LittlerootTown_EventScript_MomReturnHome1::
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHome1
	waitmovement 0
	return

LittlerootTown_EventScript_MomReturnHomeMale2::
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale2
	waitmovement 0
	opendoor VAR_0x8009, VAR_0x800A
	waitdooranim
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
	waitmovement 0
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
	closedoor VAR_0x8009, VAR_0x800A
	waitdooranim
	return

LittlerootTown_EventScript_MomReturnHomeMale3::
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale3
	waitmovement 0
	opendoor VAR_0x8009, VAR_0x800A
	waitdooranim
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
	waitmovement 0
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
	closedoor VAR_0x8009, VAR_0x800A
	waitdooranim
	return

LittlerootTown_EventScript_MomReturnHomeMale4::
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale4
	waitmovement 0
	opendoor VAR_0x8009, VAR_0x800A
	waitdooranim
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
	waitmovement 0
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
	closedoor VAR_0x8009, VAR_0x800A
	waitdooranim
	return

LittlerootTown_EventScript_MomReturnHomeMale5::
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale5
	waitmovement 0
	opendoor VAR_0x8009, VAR_0x800A
	waitdooranim
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
	waitmovement 0
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
	closedoor VAR_0x8009, VAR_0x800A
	waitdooranim
	return

LittlerootTown_Movement_MomApproachPlayer0:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

LittlerootTown_Movement_MomApproachPlayer1:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

LittlerootTown_Movement_MomApproachPlayerMale2:
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

LittlerootTown_Movement_MomApproachPlayerMale3:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

LittlerootTown_Movement_MomApproachPlayerMale4:
	walk_right
	walk_right
	step_end

LittlerootTown_Movement_MomApproachPlayerMale5:
	walk_right
	walk_right
	walk_right
	step_end

LittlerootTown_Movement_MomReturnHome0:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

LittlerootTown_Movement_MomReturnHome1:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

LittlerootTown_Movement_MomReturnHomeMale2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_faster_up
	step_end

LittlerootTown_Movement_MomReturnHomeMale3:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_faster_up
	step_end

LittlerootTown_Movement_MomReturnHomeMale4:
	walk_left
	walk_left
	walk_in_place_faster_up
	step_end

LittlerootTown_Movement_MomReturnHomeMale5:
	walk_left
	walk_left
	walk_left
	walk_in_place_faster_up
	step_end

LittlerootTown_Movement_MomExitThroughDoor:
	walk_up
	step_end

LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
	jump_right
	delay_16
	delay_16
	delay_16
	step_end

LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1:
	walk_down
	step_end

LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2:
	walk_down
	walk_in_place_faster_left
	step_end

LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3:
	delay_16
	delay_8
	walk_up
	step_end

LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4:
	delay_16
	delay_8
	walk_right
	walk_in_place_faster_up
	step_end

LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5:
	walk_up
	set_invisible
	step_end

LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_6:
	walk_up
	walk_up
	step_end

LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
	.string "{SPEAKER NAME_MOM}{PLAYER}, we're here, honey!\p"
	.string "It must be tiring riding with our things\n"
	.string "in the moving truck.\p"
	.string "Well, this is Autumnleaf Town.\p"
	.string "How do you like it?\n"
	.string "This is our new home!\p"
	.string "It has a quaint feel, but it seems to be\n"
	.string "an easy place to live, don't you think?\p"
	.string "And, you get your own room, {PLAYER}!\n"
	.string "Let's go inside.$"

LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Text_0:
	.string "PROF. BIRCH: Well, well, {PLAYER}{KUN}!\n"
	.string "That was good work out there!\p"
	.string "I knew there was something special\n"
	.string "about you when I first saw you, but I\l"
	.string "never expected this.\p"
	.string "Oh, yes. Do you still have the POKéDEX I\n"
	.string "gave you?\p"
	.string "I have something to show you.\n"
	.string "Let's go to my LAB.$"

LittlerootTown_EventScript_Twin_Text_0:
	.string "Are you going to catch Puppets?\n"
	.string "Good luck!$"

LittlerootTown_EventScript_Twin_Text_1:
	.string "Twin starter message WIP$"

LittlerootTown_EventScript_Twin_Text_2:
	.string "Um, um, um!\p"
	.string "If you go outside and go in the grass,\n"
	.string "wild Puppets will jump out!$"

LittlerootTown_EventScript_FatMan_Text_0:
	.string "If you use a PC, you can store items and\n"
	.string "Puppets.\p"
	.string "The power of science is staggering!$"

LittlerootTown_EventScript_Boy_Text_0:
	.string "PROF. BIRCH spends days in his LAB\n"
	.string "studying, then he'll suddenly go out in\l"
	.string "the wild to do more research…\p"
	.string "When does PROF. BIRCH spend time at\n"
	.string "home?$"

LittlerootTown_EventScript_BrendansHouseSign_Text_0:
	.string "{PLAYER}'s House$"

LittlerootTown_EventScript_MaysHouseSign_Text_0:
	.string "PROF. BIRCH'S House$"

LittlerootTown_EventScript_BirchsLabSign_Text_0:
	.string "PROF. BIRCH'S Puppet Lab$"

LittlerootTown_EventScript_TownSign_Text_0:
	.string "Littleroot Town\n"
	.string "“A town that can't be shaded any hue.”$"

LittlerootTown_EventScript_GiveRunningShoesTrigger_Text_0:
	.string "{SPEAKER NAME_MOM}Wait, {PLAYER}!$"

LittlerootTown_EventScript_GiveRunningShoes_Text_0:
	.string "{SPEAKER NAME_MOM}{PLAYER}! {PLAYER}! Did you\n"
	.string "introduce yourself to Professor\l"
	.string "Shiori?\p"
	.string "Oh! What an adorable Puppet!\n"
	.string "You got it from Professor Shiori. How\l"
	.string "nice!\p"
	.string "You're your father's child, all right.\n"
	.string "You look good together with Puppets!\p"
	.string "Here, honey! If you're going out on an\n"
	.string "adventure, have this fishing rod.\p"
	.string "!$"

LittlerootTown_EventScript_GiveRunningShoes_Text_1:
	.string "{SPEAKER NAME_MOM}{PLAYER}, those shoes came with\n"
	.string "instructions.\p"
	.string "“Press the B Button while wearing these\n"
	.string "RUNNING SHOES to run extra-fast!\p"
	.string "“Slip on these RUNNING SHOES and race\n"
	.string "in the great outdoors!”\p"
	.string "… … … … … … … … … … … … … … … …\p"
	.string "To think that you have your very own\n"
	.string "Puppet now…\l"
	.string "Your father will be overjoyed.\p"
	.string "…But please be careful.\n"
	.string "If anything happens, you can come home.\p"
	.string "Go on, go get them, honey!$"

LittlerootTown_EventScript_DangerousWithoutPokemon_Text_0:
	.string "It's dangerous if you don't have your\n"
	.string "own Puppets.$"
