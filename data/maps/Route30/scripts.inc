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


Route30_Text_ElmBrokenInto::
	.string "Proceed to New Bark$"
