CherrygroveCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CherrygroveCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CherrygroveCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_WORLD_MAP_CHERRYGROVE_CITY
	end


CherrygroveCity_EventScript_OldManGuideTrigger1::
	lockall
	call CherrygroveCity_EventScript_OldManGuideCommon1
	applymovement LOCALID_PLAYER, CherrygroveCity_Player_GuideMoveOutOfWay
	waitmovement LOCALID_PLAYER
	goto CherrygroveCity_EventScript_OldManGuideCommon2
	return


CherrygroveCity_EventScript_OldManGuideTrigger2::
	lockall
	call CherrygroveCity_EventScript_OldManGuideCommon1
	goto CherrygroveCity_EventScript_OldManGuideCommon2
	return


CherrygroveCity_EventScript_OldManGuideTrigger3::
	lockall
	call CherrygroveCity_EventScript_OldManGuideCommon1
	applymovement LOCALID_PLAYER, CherrygroveCity_Player_GuideMoveTo
	waitmovement LOCALID_PLAYER
	goto CherrygroveCity_EventScript_OldManGuideCommon2
	return


CherrygroveCity_EventScript_OldManGuideCommon1::
	msgbox CherrygroveCity_Text_GuideIntro
	closemessage
	return


CherrygroveCity_EventScript_OldManGuideCommon2::
	applymovement LOCALID_CHERRYGROVE_GUIDE, CherrygroveCity_Movement_GuideToCenter
	applymovement LOCALID_PLAYER, CherrygroveCity_Movement_PlayerToCenter
	waitmovement LOCALID_PLAYER
	msgbox CherrygroveCity_Text_GuideCenter
	closemessage
	applymovement LOCALID_CHERRYGROVE_GUIDE, CherrygroveCity_Movement_GuideToMart
	applymovement LOCALID_PLAYER, CherrygroveCity_Movement_PlayerToMart
	waitmovement LOCALID_PLAYER
	msgbox CherrygroveCity_Text_GuideMart
	closemessage
	applymovement LOCALID_CHERRYGROVE_GUIDE, CherrygroveCity_Movement_GuideToSea
	applymovement LOCALID_PLAYER, CherrygroveCity_Movement_PlayerToSea
	waitmovement LOCALID_PLAYER
	msgbox CherrygroveCity_Text_GuideSea
	closemessage
	applymovement LOCALID_CHERRYGROVE_GUIDE, CherrygroveCity_Movement_GuideToEnd
	applymovement LOCALID_PLAYER, CherrygroveCity_Movement_PlayerToEnd
	waitmovement LOCALID_PLAYER
	msgbox CherrygroveCity_Text_GuideGiveUpgrade
	msgbox CherrygroveCity_Text_GuideEnd
	closemessage
	applymovement LOCALID_CHERRYGROVE_GUIDE, Common_Movement_FaceUp
	waitmovement LOCALID_CHERRYGROVE_GUIDE
	opendoor 42, 14
	waitdooranim
	applymovement LOCALID_CHERRYGROVE_GUIDE, CherrygroveCity_Player_GuideMoveTo
	waitmovement LOCALID_CHERRYGROVE_GUIDE
	removeobject LOCALID_CHERRYGROVE_GUIDE
	closedoor 42, 14
	waitdooranim
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
	setvar VAR_CHERRYGROVE_CITY_STATE, 1
	releaseall
	end


CherrygroveCity_EventScript_RivalTrigger1::
	lockall
	applymovement LOCALID_CHERRYGROVE_RIVAL, CherrygroveCity_Movement_RivalApproachPlayer1
	waitmovement LOCALID_CHERRYGROVE_RIVAL
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
	waitmovement LOCALID_PLAYER
	call CherrygroveCity_EventScript_RivalBattleCommon
	applymovement LOCALID_CHERRYGROVE_RIVAL, CherrygroveCity_Movement_RivalTryLeave1
	waitmovement LOCALID_CHERRYGROVE_RIVAL
	msgbox CherrygroveCity_Text_RivalGiveBack
	closemessage
	goto CherrygroveCity_EventScript_RivalTriggerEnd
	return


CherrygroveCity_EventScript_RivalTrigger2::
	lockall
	applymovement LOCALID_CHERRYGROVE_RIVAL, CherrygroveCity_Movement_RivalApproachPlayer2
	waitmovement LOCALID_CHERRYGROVE_RIVAL
	call CherrygroveCity_EventScript_RivalBattleCommon
	applymovement LOCALID_PLAYER, CherrygroveCity_Player_GuideMoveOutOfWay
	applymovement LOCALID_CHERRYGROVE_RIVAL, CherrygroveCity_Movement_RivalTryLeave2
	waitmovement LOCALID_CHERRYGROVE_RIVAL
	msgbox CherrygroveCity_Text_RivalGiveBack
	closemessage
	goto CherrygroveCity_EventScript_RivalTriggerEnd
	return


CherrygroveCity_EventScript_RivalTrigger3::
	lockall
	applymovement LOCALID_CHERRYGROVE_RIVAL, CherrygroveCity_Movement_RivalApproachPlayer3
	waitmovement LOCALID_CHERRYGROVE_RIVAL
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
	waitmovement LOCALID_PLAYER
	call CherrygroveCity_EventScript_RivalBattleCommon
	applymovement LOCALID_CHERRYGROVE_RIVAL, CherrygroveCity_Movement_RivalTryLeave3
	waitmovement LOCALID_CHERRYGROVE_RIVAL
	msgbox CherrygroveCity_Text_RivalGiveBack
	closemessage
	goto CherrygroveCity_EventScript_RivalTriggerEnd
	return


CherrygroveCity_EventScript_RivalBattleCommon::
	msgbox CherrygroveCity_Text_RivalInitiateFight
	closemessage
	switch VAR_STARTER_MON
	case 0, CherrygroveCity_EventScript_RivalBattleCommon_3
	case 1, CherrygroveCity_EventScript_RivalBattleCommon_4
	case 2, CherrygroveCity_EventScript_RivalBattleCommon_5
CherrygroveCity_EventScript_RivalBattleCommon_1:
	msgbox CherrygroveCity_Text_RivalAfterBattle
	closemessage
	return

CherrygroveCity_EventScript_RivalBattleCommon_3:
	trainerbattle_no_intro TRAINER_RIVAL_CHERRYGROVE_STARTER_1, CherrygroveCity_Text_RivalLost
	setflag FLAG_HIDE_SQUIRTLE_BALL
	goto CherrygroveCity_EventScript_RivalBattleCommon_1

CherrygroveCity_EventScript_RivalBattleCommon_4:
	trainerbattle_no_intro TRAINER_RIVAL_CHERRYGROVE_STARTER_2, CherrygroveCity_Text_RivalLost
	setflag FLAG_HIDE_CHARMANDER_BALL
	goto CherrygroveCity_EventScript_RivalBattleCommon_1

CherrygroveCity_EventScript_RivalBattleCommon_5:
	trainerbattle_no_intro TRAINER_RIVAL_CHERRYGROVE_STARTER_3, CherrygroveCity_Text_RivalLost
	setflag FLAG_HIDE_BULBASAUR_BALL
	goto CherrygroveCity_EventScript_RivalBattleCommon_1


CherrygroveCity_EventScript_RivalTriggerEnd::
	applymovement LOCALID_CHERRYGROVE_RIVAL, CherrygroveCity_Movement_RivalActuallyLeave
	waitmovement LOCALID_CHERRYGROVE_RIVAL
	removeobject LOCALID_CHERRYGROVE_RIVAL
	setvar VAR_CHERRYGROVE_CITY_STATE, 4
	setvar VAR_NEW_BARK_TOWN_LAB_STATE, 4
	releaseall
	end


CherrygroveCity_Player_GuideMoveOutOfWay:
	walk_down
	face_up
	step_end

CherrygroveCity_Player_GuideMoveTo:
	walk_up
	step_end

CherrygroveCity_Movement_GuideToCenter:
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
	face_up
	step_end

CherrygroveCity_Movement_PlayerToCenter:
	delay_16
	delay_16
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	step_end

CherrygroveCity_Movement_GuideToMart:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	step_end

CherrygroveCity_Movement_PlayerToMart:
	delay_16
	delay_16
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	step_end

CherrygroveCity_Movement_GuideToSea:
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
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	face_left
	step_end

CherrygroveCity_Movement_PlayerToSea:
	delay_16
	delay_16
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
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	face_left
	step_end

CherrygroveCity_Movement_GuideToEnd:
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_left
	step_end

CherrygroveCity_Movement_PlayerToEnd:
	delay_16
	delay_16
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

CherrygroveCity_Movement_RivalApproachPlayer1:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	step_end

CherrygroveCity_Movement_RivalApproachPlayer2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

CherrygroveCity_Movement_RivalApproachPlayer3:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_down
	step_end

CherrygroveCity_Movement_RivalTryLeave1:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	delay_16
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_up
	step_end

CherrygroveCity_Movement_RivalTryLeave2:
	delay_16
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	delay_16
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_down
	step_end

CherrygroveCity_Movement_RivalTryLeave3:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	delay_16
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_down
	step_end

CherrygroveCity_Movement_RivalActuallyLeave:
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

CherrygroveCity_Text_GuideIntro::
	.string "Show Cherrygrove$"

CherrygroveCity_Text_GuideCenter::
	.string "Center$"

CherrygroveCity_Text_GuideMart::
	.string "Mart$"

CherrygroveCity_Text_GuideSea::
	.string "Other side$"

CherrygroveCity_Text_GuideGiveUpgrade::
	.string "Map upgrade$"

CherrygroveCity_Text_GuideEnd::
	.string "Goodbye$"

CherrygroveCity_Text_RivalInitiateFight::
	.string "We fight now$"

CherrygroveCity_Text_RivalLost::
	.string "Loss$"

CherrygroveCity_Text_RivalAfterBattle::
	.string "I leave$"

CherrygroveCity_Text_RivalGiveBack::
	.string "My name jeff$"
