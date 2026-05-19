HouseLikeCarpet_MapScripts::
	.byte 0


HouseLikeCarpet_Event_LostGarbage::
	lock
	msgbox HouseLikeCarpet_Text_Garbage
	release
	end


HouseLikeCarpet_Event_GigiStanding::
	lock
	faceplayer
	setspeakername gText_Gigi
	msgbox HouseLikeCarpet_Text_GigiWantToFollow, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq HouseLikeCarpet_Event_GigiStanding_2
HouseLikeCarpet_Event_GigiStanding_1:
	msgbox HouseLikeCarpet_Text_GigiAwwMan
	release
	end

HouseLikeCarpet_Event_GigiStanding_2:
	goto HouseLikeCarpet_Event_GigiAcceptFollow
	goto HouseLikeCarpet_Event_GigiStanding_1


HouseLikeCarpet_Event_GigiAcceptFollow::
	msgbox HouseLikeCarpet_Text_GigiYayFollow
	setfollowernpc LOCALID_HOUSE_GIGI, FOLLOWER_NPC_FLAG_ALL_LAND, HouseLikeCarpet_Event_GigiFollower, PARTNER_GIGI
	release
	end


HouseLikeCarpet_Event_GigiFollower::
	lock
	faceplayer
	setspeakername gText_Gigi
	msgbox HouseLikeCarpet_Text_GigiFollowing, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq HouseLikeCarpet_Event_GigiFollower_2
HouseLikeCarpet_Event_GigiFollower_1:
	msgbox HouseLikeCarpet_Text_GigiForYou
	closemessage
	release
	end

HouseLikeCarpet_Event_GigiFollower_2:
	goto HouseLikeCarpet_Event_CallKronii
	goto HouseLikeCarpet_Event_GigiFollower_1


HouseLikeCarpet_Event_GigiBoatGoesBinted::
	closemessage
	setspeakername gText_Gigi
	playtrainervoice TRAINER_VOICE_GIGI, 1
	msgbox HouseLikeCarpet_Text_GigiBogosBinted
	waitmoncry
	closemessage
	release
	end


HouseLikeCarpet_Event_CallKronii::
	closemessage
	playse SE_POKENAV_CALL
	waitse
	setspeakername gText_Kronii
	msgbox HouseLikeCarpet_Text_KroniiHeyaGigi
	closemessage
	setspeakername gText_Gigi
	msgbox HouseLikeCarpet_Text_GigiMetalCapLie
	closemessage
	setspeakername gText_Kronii
	msgbox HouseLikeCarpet_Text_KroniiDang
	closemessage
	playse SE_POKENAV_HANG_UP
	waitse
	release
	end


HouseLikeCarpet_Event_KroniiDeltarune::
	lock
	faceplayer
	setspeakername gText_Kronii
	msgbox HouseLikeCarpet_Text_KroniiWhatsUpGigi
	closemessage
	setspeakername gText_Gigi
	msgbox HouseLikeCarpet_Text_GigiDeltaruneTomorrow
	closemessage
	setspeakername gText_Kronii
	msgbox HouseLikeCarpet_Text_KroniiWaitTomorrow
	closemessage
	setspeakername gText_Gigi
	msgbox HouseLikeCarpet_Text_GigiInDeltarune
	closemessage
	setspeakername gText_Kronii
	msgbox HouseLikeCarpet_Text_KroniiCanIBeInIt
	closemessage
	release
	end


HouseLikeCarpet_Event_TeiMaku::
	lock
	faceplayer
	msgbox HouseLikeCarpet_Event_TeiMaku_Text_0
	release
	end


HouseLikeCarpet_Event_TeiMaku_Text_0:
	.string "{SPEAKER NAME_MCQUEEN}Wh- what happened to us?\p"
	.string "{SPEAKER NAME_TEIO}I'm not sure, I can't even see like this.$"

HouseLikeCarpet_Text_GigiWantToFollow::
	.string "Yo, mind if I follow you here?$"

HouseLikeCarpet_Text_GigiAwwMan::
	.string "Aww, man. But it would be pretty nice.$"

HouseLikeCarpet_Text_GigiYayFollow::
	.string "Yay, I get to follow you around!$"

HouseLikeCarpet_Text_GigiFollowing::
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Hey, should I call Kronii right now?{DESTROY_MUGSHOT}$"

HouseLikeCarpet_Text_GigiForYou::
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Aww, but it's just for you, {PLAYER}.$"

HouseLikeCarpet_Text_GigiBogosBinted::
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_HAPPY}Boat goes Binted?$"

HouseLikeCarpet_Text_KroniiHeyaGigi::
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_HAPPY}Heya, what's up Gigi, you need me for\n"
	.string "something?\p"
	.string "I was just about to go skydiving with\n"
	.string "just a metal cap here.$"

HouseLikeCarpet_Text_GigiMetalCapLie::
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_ALT_9}Hey Kronii, did you know that the metal\n"
	.string "cap doesn't actually make you\l"
	.string "invincible when using it?\p"
	.string "It doesn't even protect you from fall\n"
	.string "damage at all!$"

HouseLikeCarpet_Text_KroniiDang::
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_NORMAL}…\p"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_DEADPAN}…\p"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SAD}…\p"
	.string "I've been lied to, haven't I?$"

HouseLikeCarpet_Text_KroniiWhatsUpGigi::
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_HAPPY}Heya, what's up Gigi? I'm just hanging\n"
	.string "around in this unusual place here.\p"
	.string "It's pretty calm here, I won't lie.$"

HouseLikeCarpet_Text_GigiDeltaruneTomorrow::
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_HAPPY}Deltarune tomorrow, Kronii!\p"
	.string "Toby Fox is releasing Deltarune in a few\n"
	.string "hours from now!$"

HouseLikeCarpet_Text_KroniiWaitTomorrow::
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_ALT_9}Wait, frick, I almost forgot, Deltarune\n"
	.string "is just in a couple hours from today,\l"
	.string "huh? {DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}Actually hold on, didn't Toby Fox\l"
	.string "mention your name in his latest tweets?$"

HouseLikeCarpet_Text_GigiInDeltarune::
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_HAPPY}Yep, I'm gonna be in Deltarune soon,\n"
	.string "doing a bunch of shenanigans with the\l"
	.string "Fun Gang.\p"
	.string "Bet you feel kinda jealous for me being\n"
	.string "in the game, huh Kronii?$"

HouseLikeCarpet_Text_KroniiCanIBeInIt::
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SAD}…\p"
	.string "{DESTROY_MUGSHOT}{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_DEADPAN}You think you can convince Toby Fox to\n"
	.string "add me in as well?$"

HouseLikeCarpet_Text_Garbage::
	.string "It's just garbage now.$"
