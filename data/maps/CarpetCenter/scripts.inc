CarpetCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CarpetCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CarpetCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	end


CarpetCenter_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

