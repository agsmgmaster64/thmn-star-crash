SproutTower_2F_MapScripts::
	.byte 0


SproutTower_2F_EventScript_Edmond::
	trainerbattle_single TRAINER_SAGE_EDMOND, SproutTower_2F_Text_EdmondIntro, SproutTower_2F_Text_EdmondDefeat
	msgbox SproutTower_2F_Text_EdmondPostBattle, MSGBOX_AUTOCLOSE
	end


SproutTower_2F_EventScript_Jin::
	trainerbattle_single TRAINER_SAGE_JIN, SproutTower_2F_Text_JinIntro, SproutTower_2F_Text_JinDefeat
	msgbox SproutTower_2F_Text_JinPostBattle, MSGBOX_AUTOCLOSE
	end


SproutTower_2F_Text_EdmondIntro::
	.string "Top percentage$"

SproutTower_2F_Text_EdmondDefeat::
	.string "I lost$"

SproutTower_2F_Text_EdmondPostBattle::
	.string "Number Later$"

SproutTower_2F_Text_JinIntro::
	.string "Top percentage$"

SproutTower_2F_Text_JinDefeat::
	.string "I lost$"

SproutTower_2F_Text_JinPostBattle::
	.string "Number Later$"
