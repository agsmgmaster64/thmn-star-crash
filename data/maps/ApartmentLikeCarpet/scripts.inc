ApartmentLikeCarpet_MapScripts::
	.byte 0


ApartmentLikeCarpet_Script_Kronii::
	goto ApartmentLikeCarpet_Script_Kronii2
	lock
	setspeakername gText_Kronii
	msgbox ApartmentLikeCarpet_Text_KroniiNice
	setspeakername gText_Gigi
	msgbox ApartmentLikeCarpet_Text_GigiYeah
	closemessage
	delay 240
	setspeakername gText_Kronii
	msgbox ApartmentLikeCarpet_Text_Kronii2
	setspeakername gText_Gigi
	msgbox ApartmentLikeCarpet_Text_Gigi2
	closemessage
	delay 240
	setspeakername gText_Kronii
	msgbox ApartmentLikeCarpet_Text_Kronii3
	setspeakername gText_Gigi
	msgbox ApartmentLikeCarpet_Text_Gigi3
	closemessage
	delay 240
	setspeakername gText_Kronii
	msgbox ApartmentLikeCarpet_Text_Kronii4
	setspeakername gText_Gigi
	msgbox ApartmentLikeCarpet_Text_Gigi4
	closemessage
	delay 240
	setspeakername gText_Kronii
	msgbox ApartmentLikeCarpet_Text_Kronii5
	release
	end


ApartmentLikeCarpet_Script_Kronii2::
	lock
	setspeakername gText_Kronii
	msgbox ApartmentLikeCarpet_Text_KroniiMiracle
	setspeakername gText_Gigi
	msgbox ApartmentLikeCarpet_Text_GigiYouNeverKnow
	setspeakername gText_Kronii
	msgbox ApartmentLikeCarpet_Text_KroniiMaybeRight
	closemessage
	delay 240
	playse SE_POKENAV_CALL
	waitse
	setspeakername gText_Kronii
	msgbox ApartmentLikeCarpet_Text_KroniiCall
	closemessage
	applymovement 1, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	setspeakername gText_Kronii
	msgbox ApartmentLikeCarpet_Text_KroniiHello
	closemessage
	setspeakername gText_Amelia
	msgbox ApartmentLikeCarpet_Text_AmeliaImBack
	closemessage
	release
	end


ApartmentLikeCarpet_Text_KroniiNice::
	.string "It's nice, isn't it, Gigi?$"

ApartmentLikeCarpet_Text_GigiYeah::
	.string "Yeah, I guess it is.$"

ApartmentLikeCarpet_Text_Kronii2::
	.string "You know, I may be a bit of a pessimist\n"
	.string "myself, but I do feel like despite\l"
	.string "what's happening, things will be all good\l"
	.string "in the end.$"

ApartmentLikeCarpet_Text_Gigi2::
	.string "You think so?$"

ApartmentLikeCarpet_Text_Kronii3::
	.string "Yeah, I mean, yeah sure, there's some\n"
	.string "people around us that aren't gonna\l"
	.string "stick with us for long, but I know I\l"
	.string "can't stop it if they'll be happier with\l"
	.string "their new paths.$"

ApartmentLikeCarpet_Text_Gigi3::
	.string "That seems fair, yeah.$"

ApartmentLikeCarpet_Text_Kronii4::
	.string "You're pretty nice, Gigi. I may not\n"
	.string "always get along with you here, but\l"
	.string "you've always seen the best out of\l"
	.string "these situations here, even if they're\l"
	.string "not quite the most optimal.$"

ApartmentLikeCarpet_Text_Gigi4::
	.string "Yeah.\p"
	.string "I mean, you are pretty cool yourself,\n"
	.string "putting aside your beauty and all.\p"
	.string "...\p"
	.string "She'll be happier, and I hope you'll be\n"
	.string "happy as well.$"

ApartmentLikeCarpet_Text_Kronii5::
	.string "Thank you, Gigi.$"

ApartmentLikeCarpet_Text_KroniiMiracle::
	.string "You know, I wish a miracle would come to\n"
	.string "help us out here, considering what's\l"
	.string "been going on.$"

ApartmentLikeCarpet_Text_GigiYouNeverKnow::
	.string "Hey, you never know, a miracle might\n"
	.string "come anytime soon, even right now!$"

ApartmentLikeCarpet_Text_KroniiMaybeRight::
	.string "Ehh, you know what, maybe you're right,\n"
	.string "maybe something will come soon.$"

ApartmentLikeCarpet_Text_KroniiCall::
	.string "Huh? I'm getting a call from someone\n"
	.string "right now.$"

ApartmentLikeCarpet_Text_KroniiHello::
	.string "Hello?$"

ApartmentLikeCarpet_Text_AmeliaImBack::
	.string "{CREATE_MUGSHOT MUGSHOT_AMELIA EMOTE_NORMAL}I'm back, bros.$"
