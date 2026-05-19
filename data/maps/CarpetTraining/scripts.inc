CarpetTraining_MapScripts::
	.byte 0


CarpetTraining_Script_Nature::
	lock
	applymovement LOCALID_MANSION_TEIO, CarpetTraining_Script_Nature_Movement_0
	waitmovement 0
	msgbox CarpetTraining_Script_Nature_Text_0
	closemessage
	applymovement LOCALID_MANSION_NATURE, CarpetTraining_Script_Nature_Movement_1
	waitmovement 0
	msgbox CarpetTraining_Script_Nature_Text_1
	closemessage
	applymovement LOCALID_MANSION_TEIO, CarpetTraining_Script_Nature_Movement_2
	waitmovement 0
	msgbox CarpetTraining_Script_Nature_Text_2
	closemessage
	applymovement LOCALID_MANSION_NATURE, CarpetTraining_Script_Nature_Movement_3
	waitmovement 0
	msgbox CarpetTraining_Script_Nature_Text_3
	closemessage
	applymovement LOCALID_MANSION_NATURE, CarpetTraining_Script_Nature_Movement_4
	applymovement LOCALID_MANSION_TEIO, CarpetTraining_Script_Nature_Movement_5
	waitmovement 0
	msgbox CarpetTraining_Script_Nature_Text_4
	closemessage
	applymovement LOCALID_MANSION_NATURE, CarpetTraining_Script_Nature_Movement_1
	waitmovement 0
	msgbox CarpetTraining_Script_Nature_Text_5
	closemessage
	applymovement LOCALID_MANSION_NATURE, CarpetTraining_Script_Nature_Movement_6
	waitmovement 0
	msgbox CarpetTraining_Script_Nature_Text_6, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq CarpetTraining_Script_Nature_2
	msgbox CarpetTraining_Script_Nature_Text_8
CarpetTraining_Script_Nature_1:
	closemessage
	applymovement LOCALID_MANSION_NATURE, CarpetTraining_Script_Nature_Movement_1
	waitmovement 0
	msgbox CarpetTraining_Script_Nature_Text_9
	closemessage
	applymovement LOCALID_MANSION_NATURE, CarpetTraining_Script_Nature_Movement_7
	applymovement LOCALID_MANSION_TEIO, CarpetTraining_Script_Nature_Movement_8
	waitmovement 0
	msgbox CarpetTraining_Script_Nature_Text_10
	closemessage
	applymovement LOCALID_MANSION_NATURE, CarpetTraining_Script_Nature_Movement_4
	applymovement LOCALID_MANSION_TEIO, CarpetTraining_Script_Nature_Movement_9
	waitmovement 0
	removeobject LOCALID_MANSION_TEIO
	playse SE_EXIT
	waitse
	applymovement LOCALID_MANSION_NATURE, CarpetTraining_Script_Nature_Movement_7
	waitmovement 0
	msgbox CarpetTraining_Script_Nature_Text_11
	closemessage
	applymovement LOCALID_MANSION_NATURE, CarpetTraining_Script_Nature_Movement_10
	waitmovement 0
	removeobject LOCALID_MANSION_NATURE
	playse SE_EXIT
	waitse
	release
	end

CarpetTraining_Script_Nature_2:
	msgbox CarpetTraining_Script_Nature_Text_7
	goto CarpetTraining_Script_Nature_1


CarpetTraining_Script_Nature_Movement_0:
	walk_in_place_left
	walk_in_place_left
	walk_in_place_left
	step_end

CarpetTraining_Script_Nature_Movement_1:
	walk_in_place_right
	walk_in_place_right
	step_end

CarpetTraining_Script_Nature_Movement_2:
	walk_in_place_left
	walk_in_place_left
	step_end

CarpetTraining_Script_Nature_Movement_3:
	walk_in_place_up
	walk_in_place_up
	step_end

CarpetTraining_Script_Nature_Movement_4:
	walk_in_place_fast_right
	step_end

CarpetTraining_Script_Nature_Movement_5:
	walk_in_place_faster_left
	walk_in_place_faster_left
	walk_in_place_faster_left
	walk_in_place_faster_left
	walk_in_place_faster_left
	walk_in_place_faster_left
	step_end

CarpetTraining_Script_Nature_Movement_6:
	walk_in_place_down
	walk_in_place_down
	step_end

CarpetTraining_Script_Nature_Movement_7:
	walk_in_place_fast_down
	step_end

CarpetTraining_Script_Nature_Movement_8:
	walk_in_place_faster_down
	walk_in_place_faster_down
	walk_in_place_faster_down
	walk_in_place_faster_down
	walk_in_place_faster_down
	walk_in_place_faster_down
	step_end

CarpetTraining_Script_Nature_Movement_9:
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

CarpetTraining_Script_Nature_Movement_10:
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	step_end

CarpetTraining_Script_Nature_Text_0:
	.string "{SPEAKER NAME_TEIO}Hey Nature-san.\p"
	.string "We should try and find some honey\n"
	.string "together here.\p"
	.string "I heard there was a monster who\n"
	.string "happens to make the best honey out\l"
	.string "there.$"

CarpetTraining_Script_Nature_Text_1:
	.string "{SPEAKER NAME_NICE_NATURE}A monster?\p"
	.string "You sure that's safe to try and go get\n"
	.string "honey from such a thing?$"

CarpetTraining_Script_Nature_Text_2:
	.string "{SPEAKER NAME_TEIO}Relax, we're uma musume here.\p"
	.string "We have the power to try and beat up\n"
	.string "the bee monster if things go bad.\p"
	.string "Tokai Teio won't go down against a bee\n"
	.string "monster after all, if it means we get\l"
	.string "honey!$"

CarpetTraining_Script_Nature_Text_3:
	.string "{SPEAKER NAME_NICE_NATURE}You know, we could just ask McQueen to\n"
	.string "bring us honey if you really want some.\p"
	.string "I'm sure she wouldn't mind us getting\n"
	.string "some, or at the very least, she would\l"
	.string "mind more if we went to get honey from\l"
	.string "there instead.$"

CarpetTraining_Script_Nature_Text_4:
	.string "{SPEAKER NAME_TEIO}Nature-san, you don't understand.\p"
	.string "This isn't just about getting honey\n"
	.string "here, we're getting honey from the bee\l"
	.string "monster known as Beesiney!\p"
	.string "You're not just gonna turn down trying\n"
	.string "to meet the mythical Beesiney, are you?$"

CarpetTraining_Script_Nature_Text_5:
	.string "{SPEAKER NAME_NICE_NATURE}Well, uhh…$"

CarpetTraining_Script_Nature_Text_6:
	.string "{SPEAKER NAME_NICE_NATURE}Hey, you seem to be eavesdropping us\n"
	.string "here, you mind if you help us out with\l"
	.string "this?$"

CarpetTraining_Script_Nature_Text_7:
	.string "Well, too bad, you're too invested to\n"
	.string "not just help us out now!$"

CarpetTraining_Script_Nature_Text_8:
	.string "Great, we got someone else to help us\n"
	.string "out here!$"

CarpetTraining_Script_Nature_Text_9:
	.string "{SPEAKER NAME_NICE_NATURE}So I guess it's good for us to go see\n"
	.string "that monster and get its honey now,\l"
	.string "isn't it, Teio?$"

CarpetTraining_Script_Nature_Text_10:
	.string "{SPEAKER NAME_TEIO}Nice, you won't regret us trying to get\n"
	.string "the honey then!\p"
	.string "I'll let you even have a good chunk of\n"
	.string "your own as thanks for it!\p"
	.string "We'll meet you outside, I know where the\n"
	.string "monster Beesiney is at!$"

CarpetTraining_Script_Nature_Text_11:
	.string "{SPEAKER NAME_NICE_NATURE}I hope you know how to try and do\n"
	.string "something against the monster here.$"
