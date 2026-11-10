SproutTower_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SproutTower_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SproutTower_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setworldmapflag FLAG_WORLD_MAP_SPROUT_TOWER
	end


SproutTower_1F_EventScript_Chow::
	trainerbattle_single TRAINER_SAGE_CHOW, SproutTower_1F_Text_ChowIntro, SproutTower_1F_Text_ChowDefeat
	msgbox SproutTower_1F_Text_ChowPostBattle, MSGBOX_AUTOCLOSE
	end


SproutTower_1F_Text_ChowIntro::
	.string "Top percentage$"

SproutTower_1F_Text_ChowDefeat::
	.string "I lost$"

SproutTower_1F_Text_ChowPostBattle::
	.string "Number Later$"
