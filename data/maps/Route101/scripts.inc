Route101_MapScripts::
	.byte 0


Route101_EventScript_Youngster::
	msgbox Route101_EventScript_Youngster_Text_0, MSGBOX_NPC
	end


Route101_EventScript_Boy::
	msgbox Route101_EventScript_Boy_Text_0, MSGBOX_NPC
	end


Route101_EventScript_RouteSign::
	msgbox Route101_EventScript_RouteSign_Text_0, MSGBOX_SIGN
	end


Route101_EventScript_Youngster_Text_0:
	.string "If Puppets get tired, take them to a\n"
	.string "Puppet Center.\p"
	.string "There's a Puppet Center in Oldale Town\n"
	.string "right close by.$"

Route101_EventScript_Boy_Text_0:
	.string "Wild Puppets will jump out at you in tall\n"
	.string "grass.\p"
	.string "If you want to catch Puppets, you have\n"
	.string "to go into the tall grass and search.$"

Route101_EventScript_RouteSign_Text_0:
	.string "Route 101\n"
	.string "{UP_ARROW} Oldale Town$"
