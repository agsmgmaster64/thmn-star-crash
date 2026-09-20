NewBarkTown_ElmsLab_MapScripts::
	.byte 0


NewBarkTown_ElmsLab_EventScript_ElmIntroTrigger1::
	lockall
	applymovement LOCALID_PLAYER, NewBarkTown_ElmsLab_Movement_Approach_Elm1
	waitmovement LOCALID_PLAYER
	goto NewBarkTown_ElmsLab_EventScript_ElmIntroTriggerEnd
	return


NewBarkTown_ElmsLab_EventScript_ElmIntroTrigger2::
	lockall
	applymovement LOCALID_PLAYER, NewBarkTown_ElmsLab_Movement_Approach_Elm2
	waitmovement LOCALID_PLAYER
	goto NewBarkTown_ElmsLab_EventScript_ElmIntroTriggerEnd
	return


NewBarkTown_ElmsLab_EventScript_ElmIntroTrigger3::
	lockall
	applymovement LOCALID_PLAYER, NewBarkTown_ElmsLab_Movement_Approach_Elm3
	waitmovement LOCALID_PLAYER
	goto NewBarkTown_ElmsLab_EventScript_ElmIntroTriggerEnd
	return


NewBarkTown_ElmsLab_EventScript_ElmIntroTriggerEnd::
	msgbox NewBarkTown_ElmsLab_Text_ElmIntro
	setvar VAR_NEW_BARK_TOWN_LAB_STATE, 1
	releaseall
	end


NewBarkTown_ElmsLab_EventScript_ComeBackTrigger::
	lockall
	msgbox NewBarkTown_ElmsLab_Text_ElmGetBack
	applymovement LOCALID_PLAYER, NewBarkTown_ElmsLab_Movement_StarterNoLeave
	waitmovement LOCALID_PLAYER
	releaseall
	end


NewBarkTown_ElmsLab_EventScript_Starter1Ball::
	lock
	compare VAR_NEW_BARK_TOWN_LAB_STATE, 2
	goto_if_ge NewBarkTown_ElmsLab_EventScript_Starter1Ball_2
NewBarkTown_ElmsLab_EventScript_Starter1Ball_1:
	setvar VAR_TEMP_1, 0
	setvar VAR_TEMP_2, SPECIES_CHIBI_SANAE
	call NewBarkTown_ElmsLab_EventScript_ChooseStarterCommon
	msgbox NewBarkTown_ElmsLab_Text_Starter1Choose, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq NewBarkTown_ElmsLab_EventScript_Starter1Ball_5
NewBarkTown_ElmsLab_EventScript_Starter1Ball_4:
	call NewBarkTown_ElmsLab_EventScript_ConfirmStarter
	applymovement LOCALID_PLAYER, NewBarkTown_ElmsLab_Movement_Assist_Elm1
	waitmovement LOCALID_PLAYER
	goto NewBarkTown_ElmsLab_EventScript_ElmStarterEnd
	return

NewBarkTown_ElmsLab_EventScript_Starter1Ball_2:
	goto NewBarkTown_ElmsLab_EventScript_StarterBallChosenAlready
	goto NewBarkTown_ElmsLab_EventScript_Starter1Ball_1

NewBarkTown_ElmsLab_EventScript_Starter1Ball_5:
	goto NewBarkTown_ElmsLab_EventScript_DeclinedStarter
	goto NewBarkTown_ElmsLab_EventScript_Starter1Ball_4


NewBarkTown_ElmsLab_EventScript_Starter2Ball::
	lock
	compare VAR_NEW_BARK_TOWN_LAB_STATE, 2
	goto_if_ge NewBarkTown_ElmsLab_EventScript_Starter2Ball_2
NewBarkTown_ElmsLab_EventScript_Starter2Ball_1:
	setvar VAR_TEMP_1, 1
	setvar VAR_TEMP_2, SPECIES_CHIBI_REISEN
	call NewBarkTown_ElmsLab_EventScript_ChooseStarterCommon
	msgbox NewBarkTown_ElmsLab_Text_Starter2Choose, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq NewBarkTown_ElmsLab_EventScript_Starter2Ball_5
NewBarkTown_ElmsLab_EventScript_Starter2Ball_4:
	call NewBarkTown_ElmsLab_EventScript_ConfirmStarter
	applymovement LOCALID_PLAYER, NewBarkTown_ElmsLab_Movement_Assist_Elm2
	waitmovement LOCALID_PLAYER
	goto NewBarkTown_ElmsLab_EventScript_ElmStarterEnd
	return

NewBarkTown_ElmsLab_EventScript_Starter2Ball_2:
	goto NewBarkTown_ElmsLab_EventScript_StarterBallChosenAlready
	goto NewBarkTown_ElmsLab_EventScript_Starter2Ball_1

NewBarkTown_ElmsLab_EventScript_Starter2Ball_5:
	goto NewBarkTown_ElmsLab_EventScript_DeclinedStarter
	goto NewBarkTown_ElmsLab_EventScript_Starter2Ball_4


NewBarkTown_ElmsLab_EventScript_Starter3Ball::
	lock
	compare VAR_NEW_BARK_TOWN_LAB_STATE, 2
	goto_if_ge NewBarkTown_ElmsLab_EventScript_Starter3Ball_2
NewBarkTown_ElmsLab_EventScript_Starter3Ball_1:
	setvar VAR_TEMP_1, 2
	setvar VAR_TEMP_2, SPECIES_CHIBI_ALICE
	call NewBarkTown_ElmsLab_EventScript_ChooseStarterCommon
	msgbox NewBarkTown_ElmsLab_Text_Starter3Choose, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq NewBarkTown_ElmsLab_EventScript_Starter3Ball_5
NewBarkTown_ElmsLab_EventScript_Starter3Ball_4:
	call NewBarkTown_ElmsLab_EventScript_ConfirmStarter
	applymovement LOCALID_PLAYER, NewBarkTown_ElmsLab_Movement_Assist_Elm3
	waitmovement LOCALID_PLAYER
	goto NewBarkTown_ElmsLab_EventScript_ElmStarterEnd
	return

NewBarkTown_ElmsLab_EventScript_Starter3Ball_2:
	goto NewBarkTown_ElmsLab_EventScript_StarterBallChosenAlready
	goto NewBarkTown_ElmsLab_EventScript_Starter3Ball_1

NewBarkTown_ElmsLab_EventScript_Starter3Ball_5:
	goto NewBarkTown_ElmsLab_EventScript_DeclinedStarter
	goto NewBarkTown_ElmsLab_EventScript_Starter3Ball_4


NewBarkTown_ElmsLab_EventScript_DeclinedStarter::
	closemessage
	hidemonpic
	release
	end


NewBarkTown_ElmsLab_EventScript_ChooseStarterCommon::
	applymovement LOCALID_NEW_BARK_TOWN_LAB_ELM, Common_Movement_FaceRight
	waitmovement LOCALID_NEW_BARK_TOWN_LAB_ELM
	showmonpic VAR_TEMP_2, 10, 3
	playmoncry VAR_TEMP_2, CRY_MODE_NORMAL
	return


NewBarkTown_ElmsLab_EventScript_ConfirmStarter::
	hidemonpic
	removeobject VAR_LAST_TALKED
	msgbox NewBarkTown_ElmsLab_Text_ElmChooseStarter
	setflag FLAG_SYS_POKEMON_GET
	givemon VAR_TEMP_2, 5
	copyvar VAR_STARTER_MON, VAR_TEMP_1
	bufferspeciesname STR_VAR_1, VAR_TEMP_2
	message NewBarkTown_ElmsLab_Text_ReceivedMonFromElm
	waitmessage
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
	waitfanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBarkTown_ElmsLab_EventScript_ConfirmStarter_2
NewBarkTown_ElmsLab_EventScript_ConfirmStarter_1:
	closemessage
	return

NewBarkTown_ElmsLab_EventScript_ConfirmStarter_2:
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	goto NewBarkTown_ElmsLab_EventScript_ConfirmStarter_1


NewBarkTown_ElmsLab_EventScript_ElmStarterEnd::
	msgbox NewBarkTown_ElmsLab_Text_ElmFindMrMan
	closemessage
	setvar VAR_NEW_BARK_TOWN_LAB_STATE, 2
	release
	end


NewBarkTown_ElmsLab_EventScript_StarterBallChosenAlready::
	msgbox NewBarkTown_ElmsLab_Text_StarterChosenAlready
	closemessage
	release
	end


NewBarkTown_ElmsLab_EventScript_AideAssistTrigger1::
	lockall
	applymovement LOCALID_NEW_BARK_TOWN_LAB_AIDE, NewBarkTown_ElmsLab_Movement_Aide_Approach1
	waitmovement LOCALID_NEW_BARK_TOWN_LAB_AIDE
	call NewBarkTown_ElmsLab_EventScript_AideAssistCommon
	applymovement LOCALID_NEW_BARK_TOWN_LAB_AIDE, NewBarkTown_ElmsLab_Movement_Aide_GoBack1
	waitmovement LOCALID_NEW_BARK_TOWN_LAB_AIDE
	releaseall
	end


NewBarkTown_ElmsLab_EventScript_AideAssistTrigger2::
	lockall
	applymovement LOCALID_NEW_BARK_TOWN_LAB_AIDE, NewBarkTown_ElmsLab_Movement_Aide_Approach2
	waitmovement LOCALID_NEW_BARK_TOWN_LAB_AIDE
	call NewBarkTown_ElmsLab_EventScript_AideAssistCommon
	applymovement LOCALID_NEW_BARK_TOWN_LAB_AIDE, NewBarkTown_ElmsLab_Movement_Aide_GoBack2
	waitmovement LOCALID_NEW_BARK_TOWN_LAB_AIDE
	releaseall
	end


NewBarkTown_ElmsLab_EventScript_AideAssistTrigger3::
	lockall
	applymovement LOCALID_NEW_BARK_TOWN_LAB_AIDE, NewBarkTown_ElmsLab_Movement_Aide_Approach3
	waitmovement LOCALID_NEW_BARK_TOWN_LAB_AIDE
	call NewBarkTown_ElmsLab_EventScript_AideAssistCommon
	applymovement LOCALID_NEW_BARK_TOWN_LAB_AIDE, NewBarkTown_ElmsLab_Movement_Aide_GoBack3
	waitmovement LOCALID_NEW_BARK_TOWN_LAB_AIDE
	releaseall
	end


NewBarkTown_ElmsLab_EventScript_AideAssistCommon::
	msgbox NewBarkTown_ElmsLab_Text_AideGivePotion
	giveitem ITEM_POTION
	setvar VAR_NEW_BARK_TOWN_LAB_STATE, 3
	setvar VAR_NEW_BARK_TOWN_STATE, 2
	closemessage
	return


NewBarkTown_ElmsLab_Movement_Approach_Elm1:
	walk_up
	walk_up
	walk_up
	walk_right
	face_up
	step_end

NewBarkTown_ElmsLab_Movement_Approach_Elm2:
	walk_up
	walk_up
	walk_up
	step_end

NewBarkTown_ElmsLab_Movement_Approach_Elm3:
	walk_up
	walk_up
	walk_up
	walk_left
	face_up
	step_end

NewBarkTown_ElmsLab_Movement_Assist_Elm1:
	walk_left
	walk_left
	walk_up
	step_end

NewBarkTown_ElmsLab_Movement_Assist_Elm2:
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

NewBarkTown_ElmsLab_Movement_Assist_Elm3:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

NewBarkTown_ElmsLab_Movement_Aide_Approach1:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

NewBarkTown_ElmsLab_Movement_Aide_Approach2:
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

NewBarkTown_ElmsLab_Movement_Aide_Approach3:
	walk_left
	walk_left
	walk_up
	step_end

NewBarkTown_ElmsLab_Movement_Aide_GoBack1:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

NewBarkTown_ElmsLab_Movement_Aide_GoBack2:
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

NewBarkTown_ElmsLab_Movement_Aide_GoBack3:
	walk_down
	walk_right
	walk_right
	step_end

NewBarkTown_ElmsLab_Movement_StarterNoLeave:
	walk_up
	step_end

NewBarkTown_ElmsLab_Text_ElmIntro::
	.string "Pick starter$"

NewBarkTown_ElmsLab_Text_ElmGetBack::
	.string "Forbidden$"

NewBarkTown_ElmsLab_Text_Starter1Choose::
	.string "Starter 1?$"

NewBarkTown_ElmsLab_Text_Starter2Choose::
	.string "Starter 2?$"

NewBarkTown_ElmsLab_Text_Starter3Choose::
	.string "Starter 3?$"

NewBarkTown_ElmsLab_Text_ElmChooseStarter::
	.string "Starter chosen$"

NewBarkTown_ElmsLab_Text_ReceivedMonFromElm::
	.string "{PLAYER} received the {STR_VAR_1}\n"
	.string "from Prof. Elm!$"

NewBarkTown_ElmsLab_Text_ElmFindMrMan::
	.string "Find her.ogg$"

NewBarkTown_ElmsLab_Text_StarterChosenAlready::
	.string "You made your choice$"

NewBarkTown_ElmsLab_Text_AideGivePotion::
	.string "A potion$"
