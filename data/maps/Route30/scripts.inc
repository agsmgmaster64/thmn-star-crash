Route30_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route30_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route30_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_CHERRYGROVE_CITY_STATE, 2, Route30_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

Route30_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
	lockall
	pokenavcall Route30_Text_ElmBrokenInto
	waitmessage
	clearflag FLAG_HIDE_RIVAL_CHERRYGROVE
	setvar VAR_CHERRYGROVE_CITY_STATE, 3
	releaseall
	end


Route30_EventScript_Joey::
	trainerbattle_single TRAINER_YOUNGSTER_JOEY, Route30_Text_JoeyIntro, Route30_Text_JoeyDefeat
	msgbox Route30_Text_JoeyPostBattle, MSGBOX_AUTOCLOSE
	end


Route30_EventScript_Mikey::
	trainerbattle_single TRAINER_YOUNGSTER_MIKEY, Route30_Text_MikeyIntro, Route30_Text_MikeyDefeat
	msgbox Route30_Text_MikeyPostBattle, MSGBOX_AUTOCLOSE
	end


Route30_EventScript_Don::
	trainerbattle_single TRAINER_BUG_CATCHER_DON, Route30_Text_DonIntro, Route30_Text_DonDefeat
	msgbox Route30_Text_DonPostBattle, MSGBOX_AUTOCLOSE
	end


Route30_Text_ElmBrokenInto::
	.string "Proceed to New Bark$"

Route30_Text_JoeyIntro::
	.string "Top percentage$"

Route30_Text_JoeyDefeat::
	.string "I lost$"

Route30_Text_JoeyPostBattle::
	.string "Number Later$"

Route30_Text_MikeyIntro::
	.string "The other puppet$"

Route30_Text_MikeyDefeat::
	.string "You win$"

Route30_Text_MikeyPostBattle::
	.string "You won already$"

Route30_Text_DonIntro::
	.string "Fairies$"

Route30_Text_DonDefeat::
	.string "Fairies lost$"

Route30_Text_DonPostBattle::
	.string "Medium$"
