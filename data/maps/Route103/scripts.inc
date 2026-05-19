Route103_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_LOAD, Route103_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route103_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call ProfBirch_EventScript_UpdateLocation
	end

Route103_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_set FLAG_SYS_GAME_CLEAR, Route103_MapScripts_MAP_SCRIPT_ON_LOAD_2
Route103_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

Route103_MapScripts_MAP_SCRIPT_ON_LOAD_2:
	setmetatile 45, 5, METATILE_General_CaveEntrance_Top, TRUE
	setmetatile 45, 6, METATILE_General_CaveEntrance_Bottom, FALSE
	goto Route103_MapScripts_MAP_SCRIPT_ON_LOAD_1


Route103_EventScript_Ralsei::
	lockall
	msgbox Route103_EventScript_Ralsei_Text_0
	closemessage
	playbgm MUS_ENCOUNTER_MAY, TRUE
	applymovement LOCALID_ROUTE103_RALSEI, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_ROUTE103_RALSEI, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_ROUTE103_RALSEI, Common_Movement_Delay48
	waitmovement 0
	msgbox Route103_EventScript_Ralsei_Text_1
	closemessage
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_EventScript_Ralsei_Text_2
	msgbox Route103_EventScript_Ralsei_Text_3
	closemessage
	switch VAR_FACING
	case DIR_SOUTH, Route103_EventScript_Ralsei_3
	case DIR_NORTH, Route103_EventScript_Ralsei_4
	case DIR_WEST, Route103_EventScript_Ralsei_5
	case DIR_EAST, Route103_EventScript_Ralsei_5
Route103_EventScript_Ralsei_1:
	end

Route103_EventScript_Ralsei_3:
	goto Route103_EventScript_RalseiExitFacingSouth
	goto Route103_EventScript_Ralsei_1

Route103_EventScript_Ralsei_4:
	goto Route103_EventScript_RalseiExitFacingNorth
	goto Route103_EventScript_Ralsei_1

Route103_EventScript_Ralsei_5:
	goto Route103_EventScript_RalseiExitFacingEastOrWest
	goto Route103_EventScript_Ralsei_1


Route103_EventScript_RalseiExitFacingNorth::
	applymovement LOCALID_PLAYER, Route103_Movement_WatchRivalExitFacingNorth
	applymovement LOCALID_ROUTE103_RALSEI, Route103_Movement_RivalExitFacingNorth1
	waitmovement 0
	playse SE_LEDGE
	applymovement LOCALID_ROUTE103_RALSEI, Route103_Movement_RivalExitFacingNorth2
	waitmovement 0
	goto Route103_EventScript_RalseiEnd
	end


Route103_EventScript_RalseiExitFacingEastOrWest::
	applymovement LOCALID_PLAYER, Route103_Movement_WatchRivalExitFacingEastOrWest
	applymovement LOCALID_ROUTE103_RALSEI, Route103_Movement_RivalExit1
	waitmovement 0
	playse SE_LEDGE
	applymovement LOCALID_ROUTE103_RALSEI, Route103_Movement_RivalExit2
	waitmovement 0
	goto Route103_EventScript_RalseiEnd
	end


Route103_EventScript_RalseiExitFacingSouth::
	applymovement LOCALID_ROUTE103_RALSEI, Route103_Movement_RivalExit1
	waitmovement 0
	playse SE_LEDGE
	applymovement LOCALID_ROUTE103_RALSEI, Route103_Movement_RivalExit2
	waitmovement 0
	goto Route103_EventScript_RalseiEnd
	end


Route103_EventScript_RalseiEnd::
	removeobject LOCALID_ROUTE103_RALSEI
	setvar VAR_BIRCH_LAB_STATE, 4
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
	setvar VAR_OLDALE_RIVAL_STATE, 1
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	end


Route103_EventScript_RouteSign::
	msgbox Route103_EventScript_RouteSign_Text_0, MSGBOX_SIGN
	end



Route103_Movement_RivalExitFacingNorth1:
	walk_left
	walk_down
	step_end

Route103_Movement_RivalExitFacingNorth2:
	jump_2_down
	delay_16
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route103_Movement_WatchRivalExitFacingNorth:
	delay_16
	delay_4
	walk_in_place_faster_left
	delay_16
	walk_in_place_faster_down
	step_end

Route103_Movement_RivalExit1:
	walk_down
	step_end

Route103_Movement_RivalExit2:
	jump_2_down
	delay_16
	walk_down
	walk_down
	walk_down
	step_end

Route103_Movement_WatchRivalExitFacingEastOrWest:
	delay_16
	walk_in_place_faster_down
	step_end

Route103_EventScript_Boy::
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
	end

Route103_EventScript_Man::
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
	end

Route103_EventScript_Daisy::
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Amy::
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_AmyRematch
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_AmyRegisterMatchCallAfterBattle::
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_AMY_AND_LIV_1
	release
	end

Route102_EventScript_AmyRematch::
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Liv::
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_LivRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_LivRematch
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_LivRegisterMatchCallAfterBattle::
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_AMY_AND_LIV_1
	release
	end

Route102_EventScript_LivRematch::
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Andrew::
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Miguel::
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route103_EventScript_MiguelRematch
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_MIGUEL_1
	release
	end

Route103_EventScript_MiguelRematch::
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Marcos::
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Rhett::
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Pete::
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Isabelle::
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
	end

Route103_Text_ShouldHaveBroughtPotion:
	.string "My Puppet is staggeringly tired…\n"
	.string "I should have brought a Potion$"

Route103_Text_ShortcutToOldale:
	.string "If you cross the sea from here,\n"
	.string "it'll be a shortcut to Oldale Town.\p"
	.string "Fufufu, that's useful, isn't it?$"

Route103_EventScript_Ralsei_Text_0:
	.string "Now, what did Shiori want me to find in\n"
	.string "here again?$"

Route103_EventScript_Ralsei_Text_1:
	.string "Oh hello there, what are you doing here?\p"
	.string "I see, so you're {PLAYER}\n"
	.string "and my partner Shiori has sent you to\l"
	.string "retrieve me back, huh?\p"
	.string "She even trusted you with your own\n"
	.string "Puppet as well, that's pretty nice.\p"
	.string "Forgive me, but may I test your skills\n"
	.string "here to see if you're worthy of holding\l"
	.string "that Puppet there?\p"
	.string "I promise not to be too hard on you with\n"
	.string "this battle here, since this must be\l"
	.string "your first trainer battle here.$"

Route103_EventScript_Ralsei_Text_2:
	.string "Good job!\nYou managed to beat me here!$"

Route103_EventScript_Ralsei_Text_3:
	.string "I see you carry great potential within,\n"
	.string "even if you are new to this whole\l"
	.string "Puppet thing.\p"
	.string "No wonder Shiori trusted you with this\n"
	.string "Puppet that you have with you.\p"
	.string "Very well, I guess I'll have to go back\n"
	.string "to the Lab to see what Shiori wants me\l"
	.string "to do.$"

Route103_EventScript_RouteSign_Text_0:
	.string "Ocean Split\n"
	.string "{DOWN_ARROW} Oldale Town$"
