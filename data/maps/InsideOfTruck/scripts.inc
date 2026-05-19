InsideOfTruck_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, InsideOfTruck_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_RESUME, InsideOfTruck_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

InsideOfTruck_MapScripts_MAP_SCRIPT_ON_LOAD:
	setmetatile 4, 1, METATILE_InsideOfTruck_ExitLight_Top, FALSE
	setmetatile 4, 2, METATILE_InsideOfTruck_ExitLight_Mid, FALSE
	setmetatile 4, 3, METATILE_InsideOfTruck_ExitLight_Bottom, FALSE
	end

InsideOfTruck_MapScripts_MAP_SCRIPT_ON_RESUME:
	setstepcallback STEP_CB_TRUCK
	end


InsideOfTruck_EventScript_SetIntroFlags::
	lockall
	setflag FLAG_HIDE_MAP_NAME_POPUP
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
	setdynamicwarp MAP_LITTLEROOT_TOWN, 5, 10
	releaseall
	end


InsideOfTruck_EventScript_MovingBox::
	msgbox InsideOfTruck_EventScript_MovingBox_Text_0, MSGBOX_SIGN
	end


InsideOfTruck_EventScript_MovingBox_Text_0:
	.string "The box is printed with a Puppet logo.\p"
	.string "It's a Puppet brand moving and delivery\n"
	.string "service.$"
