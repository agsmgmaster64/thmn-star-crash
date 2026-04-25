CarpetTraining_MapScripts::
	.byte 0


CarpetTraining_Script_Nature::
# 4 "data/maps/CarpetTraining/scripts.pory"
	lock
# 5 "data/maps/CarpetTraining/scripts.pory"
	applymovement LOCALID_MANSION_TEIO, CarpetTraining_Script_Nature_Movement_0
# 7 "data/maps/CarpetTraining/scripts.pory"
	waitmovement 0
# 8 "data/maps/CarpetTraining/scripts.pory"
	msgbox CarpetTraining_Script_Nature_Text_0
# 11 "data/maps/CarpetTraining/scripts.pory"
	closemessage
# 12 "data/maps/CarpetTraining/scripts.pory"
	applymovement LOCALID_MANSION_NATURE, CarpetTraining_Script_Nature_Movement_1
# 14 "data/maps/CarpetTraining/scripts.pory"
	waitmovement 0
# 15 "data/maps/CarpetTraining/scripts.pory"
	msgbox CarpetTraining_Script_Nature_Text_1
# 17 "data/maps/CarpetTraining/scripts.pory"
	closemessage
# 18 "data/maps/CarpetTraining/scripts.pory"
	applymovement LOCALID_MANSION_TEIO, CarpetTraining_Script_Nature_Movement_2
# 20 "data/maps/CarpetTraining/scripts.pory"
	waitmovement 0
# 21 "data/maps/CarpetTraining/scripts.pory"
	msgbox CarpetTraining_Script_Nature_Text_2
# 24 "data/maps/CarpetTraining/scripts.pory"
	closemessage
# 25 "data/maps/CarpetTraining/scripts.pory"
	applymovement LOCALID_MANSION_NATURE, CarpetTraining_Script_Nature_Movement_3
# 27 "data/maps/CarpetTraining/scripts.pory"
	waitmovement 0
# 28 "data/maps/CarpetTraining/scripts.pory"
	msgbox CarpetTraining_Script_Nature_Text_3
# 30 "data/maps/CarpetTraining/scripts.pory"
	closemessage
# 31 "data/maps/CarpetTraining/scripts.pory"
	applymovement LOCALID_MANSION_NATURE, CarpetTraining_Script_Nature_Movement_4
# 33 "data/maps/CarpetTraining/scripts.pory"
	applymovement LOCALID_MANSION_TEIO, CarpetTraining_Script_Nature_Movement_5
# 35 "data/maps/CarpetTraining/scripts.pory"
	waitmovement 0
# 36 "data/maps/CarpetTraining/scripts.pory"
	msgbox CarpetTraining_Script_Nature_Text_4
# 39 "data/maps/CarpetTraining/scripts.pory"
	closemessage
# 40 "data/maps/CarpetTraining/scripts.pory"
	applymovement LOCALID_MANSION_NATURE, CarpetTraining_Script_Nature_Movement_1
# 42 "data/maps/CarpetTraining/scripts.pory"
	waitmovement 0
# 43 "data/maps/CarpetTraining/scripts.pory"
	msgbox CarpetTraining_Script_Nature_Text_5
# 44 "data/maps/CarpetTraining/scripts.pory"
	closemessage
# 45 "data/maps/CarpetTraining/scripts.pory"
	applymovement LOCALID_MANSION_NATURE, CarpetTraining_Script_Nature_Movement_6
# 47 "data/maps/CarpetTraining/scripts.pory"
	waitmovement 0
# 48 "data/maps/CarpetTraining/scripts.pory"
	msgbox CarpetTraining_Script_Nature_Text_6, MSGBOX_YESNO
# 49 "data/maps/CarpetTraining/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CarpetTraining_Script_Nature_2
# 52 "data/maps/CarpetTraining/scripts.pory"
	msgbox CarpetTraining_Script_Nature_Text_8
CarpetTraining_Script_Nature_1:
# 54 "data/maps/CarpetTraining/scripts.pory"
	closemessage
# 55 "data/maps/CarpetTraining/scripts.pory"
	applymovement LOCALID_MANSION_NATURE, CarpetTraining_Script_Nature_Movement_1
# 57 "data/maps/CarpetTraining/scripts.pory"
	waitmovement 0
# 58 "data/maps/CarpetTraining/scripts.pory"
	msgbox CarpetTraining_Script_Nature_Text_9
# 59 "data/maps/CarpetTraining/scripts.pory"
	closemessage
# 60 "data/maps/CarpetTraining/scripts.pory"
	applymovement LOCALID_MANSION_NATURE, CarpetTraining_Script_Nature_Movement_7
# 62 "data/maps/CarpetTraining/scripts.pory"
	applymovement LOCALID_MANSION_TEIO, CarpetTraining_Script_Nature_Movement_8
# 64 "data/maps/CarpetTraining/scripts.pory"
	waitmovement 0
# 65 "data/maps/CarpetTraining/scripts.pory"
	msgbox CarpetTraining_Script_Nature_Text_10
# 68 "data/maps/CarpetTraining/scripts.pory"
	closemessage
# 69 "data/maps/CarpetTraining/scripts.pory"
	applymovement LOCALID_MANSION_NATURE, CarpetTraining_Script_Nature_Movement_4
# 71 "data/maps/CarpetTraining/scripts.pory"
	applymovement LOCALID_MANSION_TEIO, CarpetTraining_Script_Nature_Movement_9
# 74 "data/maps/CarpetTraining/scripts.pory"
	waitmovement 0
# 75 "data/maps/CarpetTraining/scripts.pory"
	removeobject LOCALID_MANSION_TEIO
# 76 "data/maps/CarpetTraining/scripts.pory"
	playse SE_EXIT
# 77 "data/maps/CarpetTraining/scripts.pory"
	waitse
# 78 "data/maps/CarpetTraining/scripts.pory"
	applymovement LOCALID_MANSION_NATURE, CarpetTraining_Script_Nature_Movement_7
# 80 "data/maps/CarpetTraining/scripts.pory"
	waitmovement 0
# 81 "data/maps/CarpetTraining/scripts.pory"
	msgbox CarpetTraining_Script_Nature_Text_11
# 82 "data/maps/CarpetTraining/scripts.pory"
	closemessage
# 83 "data/maps/CarpetTraining/scripts.pory"
	applymovement LOCALID_MANSION_NATURE, CarpetTraining_Script_Nature_Movement_10
# 86 "data/maps/CarpetTraining/scripts.pory"
	waitmovement 0
# 87 "data/maps/CarpetTraining/scripts.pory"
	removeobject LOCALID_MANSION_NATURE
# 88 "data/maps/CarpetTraining/scripts.pory"
	playse SE_EXIT
# 89 "data/maps/CarpetTraining/scripts.pory"
	waitse
# 90 "data/maps/CarpetTraining/scripts.pory"
	release
	end

CarpetTraining_Script_Nature_2:
# 50 "data/maps/CarpetTraining/scripts.pory"
	msgbox CarpetTraining_Script_Nature_Text_7
	goto CarpetTraining_Script_Nature_1


# 5 "data/maps/CarpetTraining/scripts.pory"
CarpetTraining_Script_Nature_Movement_0:
# 6 "data/maps/CarpetTraining/scripts.pory"
	walk_in_place_left
# 6 "data/maps/CarpetTraining/scripts.pory"
	walk_in_place_left
# 6 "data/maps/CarpetTraining/scripts.pory"
	walk_in_place_left
	step_end

# 12 "data/maps/CarpetTraining/scripts.pory"
CarpetTraining_Script_Nature_Movement_1:
# 13 "data/maps/CarpetTraining/scripts.pory"
	walk_in_place_right
# 13 "data/maps/CarpetTraining/scripts.pory"
	walk_in_place_right
	step_end

# 18 "data/maps/CarpetTraining/scripts.pory"
CarpetTraining_Script_Nature_Movement_2:
# 19 "data/maps/CarpetTraining/scripts.pory"
	walk_in_place_left
# 19 "data/maps/CarpetTraining/scripts.pory"
	walk_in_place_left
	step_end

# 25 "data/maps/CarpetTraining/scripts.pory"
CarpetTraining_Script_Nature_Movement_3:
# 26 "data/maps/CarpetTraining/scripts.pory"
	walk_in_place_up
# 26 "data/maps/CarpetTraining/scripts.pory"
	walk_in_place_up
	step_end

# 31 "data/maps/CarpetTraining/scripts.pory"
CarpetTraining_Script_Nature_Movement_4:
# 32 "data/maps/CarpetTraining/scripts.pory"
	walk_in_place_fast_right
	step_end

# 33 "data/maps/CarpetTraining/scripts.pory"
CarpetTraining_Script_Nature_Movement_5:
# 34 "data/maps/CarpetTraining/scripts.pory"
	walk_in_place_faster_left
# 34 "data/maps/CarpetTraining/scripts.pory"
	walk_in_place_faster_left
# 34 "data/maps/CarpetTraining/scripts.pory"
	walk_in_place_faster_left
# 34 "data/maps/CarpetTraining/scripts.pory"
	walk_in_place_faster_left
# 34 "data/maps/CarpetTraining/scripts.pory"
	walk_in_place_faster_left
# 34 "data/maps/CarpetTraining/scripts.pory"
	walk_in_place_faster_left
	step_end

# 45 "data/maps/CarpetTraining/scripts.pory"
CarpetTraining_Script_Nature_Movement_6:
# 46 "data/maps/CarpetTraining/scripts.pory"
	walk_in_place_down
# 46 "data/maps/CarpetTraining/scripts.pory"
	walk_in_place_down
	step_end

# 60 "data/maps/CarpetTraining/scripts.pory"
CarpetTraining_Script_Nature_Movement_7:
# 61 "data/maps/CarpetTraining/scripts.pory"
	walk_in_place_fast_down
	step_end

# 62 "data/maps/CarpetTraining/scripts.pory"
CarpetTraining_Script_Nature_Movement_8:
# 63 "data/maps/CarpetTraining/scripts.pory"
	walk_in_place_faster_down
# 63 "data/maps/CarpetTraining/scripts.pory"
	walk_in_place_faster_down
# 63 "data/maps/CarpetTraining/scripts.pory"
	walk_in_place_faster_down
# 63 "data/maps/CarpetTraining/scripts.pory"
	walk_in_place_faster_down
# 63 "data/maps/CarpetTraining/scripts.pory"
	walk_in_place_faster_down
# 63 "data/maps/CarpetTraining/scripts.pory"
	walk_in_place_faster_down
	step_end

# 71 "data/maps/CarpetTraining/scripts.pory"
CarpetTraining_Script_Nature_Movement_9:
# 72 "data/maps/CarpetTraining/scripts.pory"
	walk_fast_right
# 73 "data/maps/CarpetTraining/scripts.pory"
	walk_fast_down
# 73 "data/maps/CarpetTraining/scripts.pory"
	walk_fast_down
# 73 "data/maps/CarpetTraining/scripts.pory"
	walk_fast_down
	step_end

# 83 "data/maps/CarpetTraining/scripts.pory"
CarpetTraining_Script_Nature_Movement_10:
# 84 "data/maps/CarpetTraining/scripts.pory"
	walk_right
# 84 "data/maps/CarpetTraining/scripts.pory"
	walk_right
# 85 "data/maps/CarpetTraining/scripts.pory"
	walk_down
# 85 "data/maps/CarpetTraining/scripts.pory"
	walk_down
# 85 "data/maps/CarpetTraining/scripts.pory"
	walk_down
	step_end

CarpetTraining_Script_Nature_Text_0:
# 8 "data/maps/CarpetTraining/scripts.pory"
	.string "{SPEAKER NAME_TEIO}Hey Nature-san.\p"
	.string "We should try and find some honey\n"
	.string "together here.\p"
	.string "I heard there was a monster who\n"
	.string "happens to make the best honey out\l"
	.string "there.$"

CarpetTraining_Script_Nature_Text_1:
# 15 "data/maps/CarpetTraining/scripts.pory"
	.string "{SPEAKER NAME_NICE_NATURE}A monster?\p"
	.string "You sure that's safe to try and go get\n"
	.string "honey from such a thing?$"

CarpetTraining_Script_Nature_Text_2:
# 21 "data/maps/CarpetTraining/scripts.pory"
	.string "{SPEAKER NAME_TEIO}Relax, we're uma musume here.\p"
	.string "We have the power to try and beat up\n"
	.string "the bee monster if things go bad.\p"
	.string "Tokai Teio won't go down against a bee\n"
	.string "monster after all, if it means we get\l"
	.string "honey!$"

CarpetTraining_Script_Nature_Text_3:
# 28 "data/maps/CarpetTraining/scripts.pory"
	.string "{SPEAKER NAME_NICE_NATURE}You know, we could just ask McQueen to\n"
	.string "bring us honey if you really want some.\p"
	.string "I'm sure she wouldn't mind us getting\n"
	.string "some, or at the very least, she would\l"
	.string "mind more if we went to get honey from\l"
	.string "there instead.$"

CarpetTraining_Script_Nature_Text_4:
# 36 "data/maps/CarpetTraining/scripts.pory"
	.string "{SPEAKER NAME_TEIO}Nature-san, you don't understand.\p"
	.string "This isn't just about getting honey\n"
	.string "here, we're getting honey from the bee\l"
	.string "monster known as Beesiney!\p"
	.string "You're not just gonna turn down trying\n"
	.string "to meet the mythical Beesiney, are you?$"

CarpetTraining_Script_Nature_Text_5:
# 43 "data/maps/CarpetTraining/scripts.pory"
	.string "{SPEAKER NAME_NICE_NATURE}Well, uhh…$"

CarpetTraining_Script_Nature_Text_6:
# 48 "data/maps/CarpetTraining/scripts.pory"
	.string "{SPEAKER NAME_NICE_NATURE}Hey, you seem to be eavesdropping us\n"
	.string "here, you mind if you help us out with\l"
	.string "this?$"

CarpetTraining_Script_Nature_Text_7:
# 50 "data/maps/CarpetTraining/scripts.pory"
	.string "Well, too bad, you're too invested to\n"
	.string "not just help us out now!$"

CarpetTraining_Script_Nature_Text_8:
# 52 "data/maps/CarpetTraining/scripts.pory"
	.string "Great, we got someone else to help us\n"
	.string "out here!$"

CarpetTraining_Script_Nature_Text_9:
# 58 "data/maps/CarpetTraining/scripts.pory"
	.string "{SPEAKER NAME_NICE_NATURE}So I guess it's good for us to go see\n"
	.string "that monster and get its honey now,\l"
	.string "isn't it, Teio?$"

CarpetTraining_Script_Nature_Text_10:
# 65 "data/maps/CarpetTraining/scripts.pory"
	.string "{SPEAKER NAME_TEIO}Nice, you won't regret us trying to get\n"
	.string "the honey then!\p"
	.string "I'll let you even have a good chunk of\n"
	.string "your own as thanks for it!\p"
	.string "We'll meet you outside, I know where the\n"
	.string "monster Beesiney is at!$"

CarpetTraining_Script_Nature_Text_11:
# 81 "data/maps/CarpetTraining/scripts.pory"
	.string "{SPEAKER NAME_NICE_NATURE}I hope you know how to try and do\n"
	.string "something against the monster here.$"
