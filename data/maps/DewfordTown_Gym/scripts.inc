DewfordTown_Gym_MapScripts::
	.byte 0


DewfordTown_Gym_EventScript_Diamond1::
	lockall
	releaseall
	playse SE_SWITCH
	addvar VAR_TEMP_A, 1
	compare VAR_TEMP_A, 5
	goto_if_ge DewfordTown_Gym_EventScript_Diamond1_2
	switch VAR_TEMP_A
	case 1, DewfordTown_Gym_EventScript_Diamond1_6
	case 2, DewfordTown_Gym_EventScript_Diamond1_7
	case 3, DewfordTown_Gym_EventScript_Diamond1_8
	case 4, DewfordTown_Gym_EventScript_Diamond1_9
DewfordTown_Gym_EventScript_Diamond1_4:
	end

DewfordTown_Gym_EventScript_Diamond1_2:
	call DewfordTown_Gym_EventScript_ClearPuzzle1
	end

DewfordTown_Gym_EventScript_Diamond1_6:
	setmetatile 3, 20, METATILE_DewfordGym_CardSymbolDiamonds, TRUE
	setvar VAR_TEMP_4, 2
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Diamond1_4

DewfordTown_Gym_EventScript_Diamond1_7:
	setmetatile 4, 20, METATILE_DewfordGym_CardSymbolDiamonds, TRUE
	setvar VAR_TEMP_5, 2
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Diamond1_4

DewfordTown_Gym_EventScript_Diamond1_8:
	setmetatile 5, 20, METATILE_DewfordGym_CardSymbolDiamonds, TRUE
	setvar VAR_TEMP_6, 2
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Diamond1_4

DewfordTown_Gym_EventScript_Diamond1_9:
	setmetatile 6, 20, METATILE_DewfordGym_CardSymbolDiamonds, TRUE
	setvar VAR_TEMP_7, 2
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Diamond1_4


DewfordTown_Gym_EventScript_Spade1::
	lockall
	releaseall
	playse SE_SWITCH
	addvar VAR_TEMP_A, 1
	compare VAR_TEMP_A, 5
	goto_if_ge DewfordTown_Gym_EventScript_Spade1_2
	switch VAR_TEMP_A
	case 1, DewfordTown_Gym_EventScript_Spade1_6
	case 2, DewfordTown_Gym_EventScript_Spade1_7
	case 3, DewfordTown_Gym_EventScript_Spade1_8
	case 4, DewfordTown_Gym_EventScript_Spade1_9
DewfordTown_Gym_EventScript_Spade1_4:
	end

DewfordTown_Gym_EventScript_Spade1_2:
	call DewfordTown_Gym_EventScript_ClearPuzzle1
	end

DewfordTown_Gym_EventScript_Spade1_6:
	setmetatile 3, 20, METATILE_DewfordGym_CardSymbolSpades, TRUE
	setvar VAR_TEMP_4, 1
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Spade1_4

DewfordTown_Gym_EventScript_Spade1_7:
	setmetatile 4, 20, METATILE_DewfordGym_CardSymbolSpades, TRUE
	setvar VAR_TEMP_5, 1
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Spade1_4

DewfordTown_Gym_EventScript_Spade1_8:
	setmetatile 5, 20, METATILE_DewfordGym_CardSymbolSpades, TRUE
	setvar VAR_TEMP_6, 1
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Spade1_4

DewfordTown_Gym_EventScript_Spade1_9:
	setmetatile 6, 20, METATILE_DewfordGym_CardSymbolSpades, TRUE
	setvar VAR_TEMP_7, 1
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Spade1_4


DewfordTown_Gym_EventScript_Swap1::
	lockall
	releaseall
	playse SE_SWITCH
	switch VAR_TEMP_4
	case 1, DewfordTown_Gym_EventScript_Swap1_3
	case 2, DewfordTown_Gym_EventScript_Swap1_4
	case 3, DewfordTown_Gym_EventScript_Swap1_5
	case 4, DewfordTown_Gym_EventScript_Swap1_6
DewfordTown_Gym_EventScript_Swap1_1:
	switch VAR_TEMP_5
	case 1, DewfordTown_Gym_EventScript_Swap1_9
	case 2, DewfordTown_Gym_EventScript_Swap1_10
	case 3, DewfordTown_Gym_EventScript_Swap1_11
	case 4, DewfordTown_Gym_EventScript_Swap1_12
DewfordTown_Gym_EventScript_Swap1_7:
	switch VAR_TEMP_6
	case 1, DewfordTown_Gym_EventScript_Swap1_15
	case 2, DewfordTown_Gym_EventScript_Swap1_16
	case 3, DewfordTown_Gym_EventScript_Swap1_17
	case 4, DewfordTown_Gym_EventScript_Swap1_18
DewfordTown_Gym_EventScript_Swap1_13:
	switch VAR_TEMP_7
	case 1, DewfordTown_Gym_EventScript_Swap1_21
	case 2, DewfordTown_Gym_EventScript_Swap1_22
	case 3, DewfordTown_Gym_EventScript_Swap1_23
	case 4, DewfordTown_Gym_EventScript_Swap1_24
DewfordTown_Gym_EventScript_Swap1_19:
	end

DewfordTown_Gym_EventScript_Swap1_3:
	setmetatile 3, 20, METATILE_DewfordGym_CardSymbolClubs, TRUE
	setvar VAR_TEMP_4, 3
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_1

DewfordTown_Gym_EventScript_Swap1_4:
	setmetatile 3, 20, METATILE_DewfordGym_CardSymbolHearts, TRUE
	setvar VAR_TEMP_4, 4
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_1

DewfordTown_Gym_EventScript_Swap1_5:
	setmetatile 3, 20, METATILE_DewfordGym_CardSymbolSpades, TRUE
	setvar VAR_TEMP_4, 1
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_1

DewfordTown_Gym_EventScript_Swap1_6:
	setmetatile 3, 20, METATILE_DewfordGym_CardSymbolDiamonds, TRUE
	setvar VAR_TEMP_4, 2
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_1

DewfordTown_Gym_EventScript_Swap1_9:
	setmetatile 4, 20, METATILE_DewfordGym_CardSymbolClubs, TRUE
	setvar VAR_TEMP_5, 3
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_7

DewfordTown_Gym_EventScript_Swap1_10:
	setmetatile 4, 20, METATILE_DewfordGym_CardSymbolHearts, TRUE
	setvar VAR_TEMP_5, 4
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_7

DewfordTown_Gym_EventScript_Swap1_11:
	setmetatile 4, 20, METATILE_DewfordGym_CardSymbolSpades, TRUE
	setvar VAR_TEMP_5, 1
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_7

DewfordTown_Gym_EventScript_Swap1_12:
	setmetatile 4, 20, METATILE_DewfordGym_CardSymbolDiamonds, TRUE
	setvar VAR_TEMP_5, 2
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_7

DewfordTown_Gym_EventScript_Swap1_15:
	setmetatile 5, 20, METATILE_DewfordGym_CardSymbolClubs, TRUE
	setvar VAR_TEMP_6, 3
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_13

DewfordTown_Gym_EventScript_Swap1_16:
	setmetatile 5, 20, METATILE_DewfordGym_CardSymbolHearts, TRUE
	setvar VAR_TEMP_6, 4
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_13

DewfordTown_Gym_EventScript_Swap1_17:
	setmetatile 5, 20, METATILE_DewfordGym_CardSymbolSpades, TRUE
	setvar VAR_TEMP_6, 1
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_13

DewfordTown_Gym_EventScript_Swap1_18:
	setmetatile 5, 20, METATILE_DewfordGym_CardSymbolDiamonds, TRUE
	setvar VAR_TEMP_6, 2
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_13

DewfordTown_Gym_EventScript_Swap1_21:
	setmetatile 6, 20, METATILE_DewfordGym_CardSymbolClubs, TRUE
	setvar VAR_TEMP_7, 3
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_19

DewfordTown_Gym_EventScript_Swap1_22:
	setmetatile 6, 20, METATILE_DewfordGym_CardSymbolHearts, TRUE
	setvar VAR_TEMP_7, 4
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_19

DewfordTown_Gym_EventScript_Swap1_23:
	setmetatile 6, 20, METATILE_DewfordGym_CardSymbolSpades, TRUE
	setvar VAR_TEMP_7, 1
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_19

DewfordTown_Gym_EventScript_Swap1_24:
	setmetatile 6, 20, METATILE_DewfordGym_CardSymbolDiamonds, TRUE
	setvar VAR_TEMP_7, 2
	special DrawWholeMapView
	goto DewfordTown_Gym_EventScript_Swap1_19


DewfordTown_Gym_EventScript_ClearPuzzle1::
	setmetatile 3, 20, METATILE_DewfordGym_CardSymbolBlank, TRUE
	setmetatile 4, 20, METATILE_DewfordGym_CardSymbolBlank, TRUE
	setmetatile 5, 20, METATILE_DewfordGym_CardSymbolBlank, TRUE
	setmetatile 6, 20, METATILE_DewfordGym_CardSymbolBlank, TRUE
	setvar VAR_TEMP_4, 0
	setvar VAR_TEMP_5, 0
	setvar VAR_TEMP_6, 0
	setvar VAR_TEMP_7, 0
	setvar VAR_TEMP_A, 0
	special DrawWholeMapView
	return


DewfordTown_Gym_EventScript_Brawly::
	trainerbattle_single TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	compare VAR_RESULT, 0
	goto_if_ne DewfordTown_Gym_EventScript_Brawly_2
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, DewfordTown_Gym_EventScript_Brawly_5
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle
	release
	end

DewfordTown_Gym_EventScript_Brawly_2:
	trainerbattle_rematch_double TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_Brawly_5:
	giveitem ITEM_TM_BULK_UP
	compare VAR_RESULT, 0
	goto_if_eq DewfordTown_Gym_EventScript_Brawly_8
DewfordTown_Gym_EventScript_Brawly_7:
	msgbox DewfordTown_Gym_Text_ExplainBulkUp
	setflag FLAG_RECEIVED_TM_BULK_UP
	release
	end

DewfordTown_Gym_EventScript_Brawly_8:
	goto Common_EventScript_ShowBagIsFull
	goto DewfordTown_Gym_EventScript_Brawly_7


DewfordTown_Gym_EventScript_BrawlyDefeated::
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis
	setflag FLAG_DEFEATED_DEWFORD_GYM
	setflag FLAG_BADGE02_GET
	addvar VAR_PETALBURG_GYM_STATE, 1
	compare VAR_PETALBURG_GYM_STATE, 6
	goto_if_eq DewfordTown_Gym_EventScript_BrawlyDefeated_2
DewfordTown_Gym_EventScript_BrawlyDefeated_1:
	setvar VAR_0x8008, 2
	call Common_EventScript_SetGymTrainers
	giveitem ITEM_TM_BULK_UP
	compare VAR_RESULT, 0
	goto_if_eq DewfordTown_Gym_EventScript_BrawlyDefeated_5
DewfordTown_Gym_EventScript_BrawlyDefeated_4:
	msgbox DewfordTown_Gym_Text_ExplainBulkUp
	setflag FLAG_RECEIVED_TM_BULK_UP
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox DewfordTown_Gym_Text_RegisteredBrawly
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 0
	setflag FLAG_ENABLE_ROXANNE_FIRST_CALL
	release
	end

DewfordTown_Gym_EventScript_BrawlyDefeated_2:
	call Common_EventScript_ReadyPetalburgGymForBattle
	goto DewfordTown_Gym_EventScript_BrawlyDefeated_1

DewfordTown_Gym_EventScript_BrawlyDefeated_5:
	goto Common_EventScript_ShowBagIsFull
	goto DewfordTown_Gym_EventScript_BrawlyDefeated_4



DewfordTown_Gym_EventScript_Takao::
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat, DewfordTown_Gym_EventScript_TakaoBrightenRoom
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_TakaoBrightenRoom::
	release
	end

DewfordTown_Gym_EventScript_Jocelyn::
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat, DewfordTown_Gym_EventScript_JocelynBrightenRoom
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_JocelynBrightenRoom::
	release
	end

DewfordTown_Gym_EventScript_Laura::
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat, DewfordTown_Gym_EventScript_LauraBrightenRoom
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_LauraBrightenRoom::
	release
	end

DewfordTown_Gym_EventScript_Brenden::
	trainerbattle_single TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenIntro, DewfordTown_Gym_Text_BrendenDefeat, DewfordTown_Gym_EventScript_BrendenBrightenRoom
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_BrendenBrightenRoom::
	release
	end

DewfordTown_Gym_EventScript_Cristian::
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat, DewfordTown_Gym_EventScript_CristianBrightenRoom
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_CristianBrightenRoom::
	release
	end

DewfordTown_Gym_EventScript_Lilith::
	trainerbattle_single TRAINER_LILITH, DewfordTown_Gym_Text_LilithIntro, DewfordTown_Gym_Text_LilithDefeat, DewfordTown_Gym_EventScript_LilithBrightenRoom
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_LilithBrightenRoom::
	release
	end

DewfordTown_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

DewfordTown_Gym_EventScript_GymGuidePostVictory::
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

DewfordTown_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
	goto DewfordTown_Gym_EventScript_GymStatue
	end

DewfordTown_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
	goto DewfordTown_Gym_EventScript_GymStatue
	end

DewfordTown_Gym_EventScript_GymStatueCertified::
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Gym_EventScript_GymStatue::
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Gym_Text_GymGuideAdvice:
	.string "Hey, how's it going, CHAMPION-\n"
	.string "bound {PLAYER}?\p"
	.string "DEWFORD's GYM LEADER BRAWLY commands\n"
	.string "FIGHTING-type POKéMON.\p"
	.string "Going against him with NORMAL-type\n"
	.string "POKéMON is asking for trouble.\p"
	.string "FIGHTING POKéMON will lay a serious\n"
	.string "smack down on NORMAL POKéMON,\l"
	.string "so be careful!\p"
	.string "What's worse, the GYM is as dark as\n"
	.string "the ocean floor.\p"
	.string "But it will get brighter after defeating\n"
	.string "the TRAINERS in your way.\p"
	.string "Hey, okay, go for it!$"

DewfordTown_Gym_Text_GymGuidePostVictory:
	.string "Whoah! It's turned too bright in here!\p"
	.string "Your future is bright, too!$"

DewfordTown_Gym_Text_TakaoIntro:
	.string "Might is right!\n"
	.string "Come on!$"

DewfordTown_Gym_Text_TakaoDefeat:
	.string "Not enough power…$"

DewfordTown_Gym_Text_TakaoPostBattle:
	.string "Your skill overcame my strength!\n"
	.string "Your technique is commendable!$"

DewfordTown_Gym_Text_JocelynIntro:
	.string "There's no need for BRAWLY to be\n"
	.string "involved!\p"
	.string "I'll crush you!$"

DewfordTown_Gym_Text_JocelynDefeat:
	.string "But… How?\n"
	.string "How could I lose so easily?$"

DewfordTown_Gym_Text_JocelynPostBattle:
	.string "I'm not going to waste this loss.\n"
	.string "I'll use it to motivate me to train!\p"
	.string "One day I'll become a GYM LEADER…\p"
	.string "No, I'll become the POKéMON LEAGUE\n"
	.string "CHAMPION!$"

DewfordTown_Gym_Text_LauraIntro:
	.string "Don't you dare brush me off!\n"
	.string "It's not my fault if you cry!$"

DewfordTown_Gym_Text_LauraDefeat:
	.string "Waaaaaaah!\n"
	.string "I lost!$"

DewfordTown_Gym_Text_LauraPostBattle:
	.string "I battle in the dark to make my heart\n"
	.string "stronger.\p"
	.string "But because it's so dark, I can never\n"
	.string "see BRAWLY's face…$"

DewfordTown_Gym_Text_LilithIntro:
	.string "Ufufu…\n"
	.string "Are you stumbling around in the dark?$"

DewfordTown_Gym_Text_LilithDefeat:
	.string "Oh, you…\n"
	.string "I don't want to know you!$"

DewfordTown_Gym_Text_LilithPostBattle:
	.string "You deserve to stay lost and end up\n"
	.string "back at the entrance again!$"

DewfordTown_Gym_Text_BrendenIntro:
	.string "I'll show you the gumption of\n"
	.string "a sailing man!$"

DewfordTown_Gym_Text_BrendenDefeat:
	.string "How'd this happen?\n"
	.string "It's not like me to lose this way!$"

DewfordTown_Gym_Text_BrendenPostBattle:
	.string "Oh, aye! You're worthy of seeing\n"
	.string "our GYM LEADER.$"

DewfordTown_Gym_Text_CristianIntro:
	.string "If you mean to pass, it has to be\n"
	.string "through me!$"

DewfordTown_Gym_Text_CristianDefeat:
	.string "Grrrrr!\n"
	.string "Vastly overpowered!$"

DewfordTown_Gym_Text_CristianPostBattle:
	.string "You win!\n"
	.string "Go after that BADGE!$"

DewfordTown_Gym_Text_BrawlyIntro:
	.string "I'm BRAWLY!\n"
	.string "DEWFORD's GYM LEADER!\p"
	.string "I've been churned in the rough waves\n"
	.string "of these parts, and I've grown tough\l"
	.string "in the pitch-black cave!\p"
	.string "So you wanted to challenge me?\n"
	.string "Let me see what you're made of!$"

DewfordTown_Gym_Text_BrawlyDefeat:
	.string "Whoah, wow! You made a much bigger\n"
	.string "splash than I expected!\p"
	.string "You swamped me!\p"
	.string "Okay, you've got me.\n"
	.string "Take this GYM BADGE!$"

DewfordTown_Gym_Text_ReceivedKnuckleBadge:
	.string "{PLAYER} received the KNUCKLE BADGE\n"
	.string "from BRAWLY.$"

DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis:
	.string "The KNUCKLE BADGE makes all POKéMON\n"
	.string "up to Level 30, even those you get in\l"
	.string "trades, obey without question.\p"
	.string "And, you'll be able to use the HM move\n"
	.string "FLASH outside of battle.\p"
	.string "If you'd like, use this TECHNICAL\n"
	.string "MACHINE, too.$"

DewfordTown_Gym_Text_ExplainBulkUp:
	.string "That TM08 contains BULK UP.\p"
	.string "It's a move that raises both ATTACK\n"
	.string "and DEFENSE stats.\p"
	.string "… … … … … …$"

DewfordTown_Gym_Text_RegisteredBrawly:
	.string "Registered GYM LEADER BRAWLY\n"
	.string "in the POKéNAV.$"

DewfordTown_Gym_Text_BrawlyPostBattle:
	.string "I can see your talent becoming a giant\n"
	.string "wave to cause a storm of astonishment\l"
	.string "among TRAINERS one day!$"

DewfordTown_Gym_Text_GymStatue:
	.string "DEWFORD TOWN POKéMON GYM$"

DewfordTown_Gym_Text_GymStatueCertified:
	.string "DEWFORD TOWN POKéMON GYM\p"
	.string "BRAWLY'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

DewfordTown_Gym_Text_BrawlyPreRematch:
	.string "BRAWLY: A wave may draw back, but it\n"
	.string "always returns to the shore.\p"
	.string "A giant wave of a talent like you…\n"
	.string "I knew you would return!\p"
	.string "Show me how much higher\n"
	.string "you've gone!$"

DewfordTown_Gym_Text_BrawlyRematchDefeat:
	.string "Wow!\n"
	.string "Swamped again!$"

DewfordTown_Gym_Text_BrawlyPostRematch:
	.string "BRAWLY: Battling is vast and it's deep.\n"
	.string "You can't see the bottom.\l"
	.string "It's just like the sea of HOENN!$"

DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons:
	.string "BRAWLY: A wave may draw back, but it\n"
	.string "always returns to the shore.\p"
	.string "A giant wave of a talent like you…\n"
	.string "I knew you would return!\p"
	.string "Oh? You only have one POKéMON\n"
	.string "that can battle.\p"
	.string "I'm sorry, but I'd like you to come back\n"
	.string "with at least two POKéMON.$"
