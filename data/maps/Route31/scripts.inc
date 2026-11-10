Route31_MapScripts::
	.byte 0


Route31_EventScript_Wade::
	trainerbattle_single TRAINER_BUG_CATCHER_WADE, Route31_Text_WadeIntro, Route31_Text_WadeDefeat
	msgbox Route31_Text_WadePostBattle, MSGBOX_AUTOCLOSE
	end


Route31_Text_WadeIntro::
	.string "Top percentage$"

Route31_Text_WadeDefeat::
	.string "I lost$"

Route31_Text_WadePostBattle::
	.string "Number Later$"
