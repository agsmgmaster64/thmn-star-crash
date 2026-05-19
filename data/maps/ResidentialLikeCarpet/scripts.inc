ResidentialLikeCarpet_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ResidentialLikeCarpet_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ResidentialLikeCarpet_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_HOUSE_LIKE_CARPET_STATE, 0, ResidentialLikeCarpet_Script_GigiKroniiIntro3
	.2byte 0


ResidentialLikeCarpet_Script_GigiKroniiIntro::
	lockall
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceDown
	waitmovement 0
	setspeakername gText_Kronii
	msgbox ResidentialLikeCarpet_Text_KroniiSoThisIsTrainer
	closemessage
	applymovement LOCALID_RESIDENTIAL_GIGI, Common_Movement_WalkInPlaceDown
	waitmovement 0
	setspeakername gText_Gigi
	msgbox ResidentialLikeCarpet_Text_GigiSomeRandomTrainer
	closemessage
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	setspeakername gText_Kronii
	msgbox ResidentialLikeCarpet_Text_KroniiWhatMakesYouThink
	closemessage
	applymovement LOCALID_RESIDENTIAL_GIGI, Common_Movement_WalkInPlaceRight
	waitmovement 0
	setspeakername gText_Gigi
	msgbox ResidentialLikeCarpet_Text_GigiMayHavePokedAround
	closemessage
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	setspeakername gText_Kronii
	msgbox ResidentialLikeCarpet_Text_KroniiHowDangerous
	closemessage
	applymovement LOCALID_RESIDENTIAL_GIGI, Common_Movement_WalkInPlaceRight
	waitmovement 0
	setspeakername gText_Gigi
	msgbox ResidentialLikeCarpet_Text_GigiYouGotAnyOtherIdeas
	closemessage
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	setspeakername gText_Kronii
	msgbox ResidentialLikeCarpet_Text_KroniiWellNo
	closemessage
	applymovement LOCALID_RESIDENTIAL_GIGI, Common_Movement_WalkInPlaceRight
	waitmovement 0
	setspeakername gText_Gigi
	playtrainervoice TRAINER_VOICE_GIGI, 0
	msgbox ResidentialLikeCarpet_Text_GigiBesidesGrabbedAll
	waitmoncry
	closemessage
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	setspeakername gText_Kronii
	msgbox ResidentialLikeCarpet_Text_KroniiOhMyGod
	closemessage
	applymovement LOCALID_RESIDENTIAL_GIGI, Common_Movement_WalkInPlaceDown
	waitmovement 0
	setspeakername gText_Gigi
	msgbox ResidentialLikeCarpet_Text_GigiNoWeFightThem
	closemessage
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	setspeakername gText_Kronii
	msgbox ResidentialLikeCarpet_Text_KroniiWorstIdeasEver
	closemessage
	applymovement LOCALID_RESIDENTIAL_GIGI, Common_Movement_WalkInPlaceRight
	waitmovement 0
	setspeakername gText_Gigi
	msgbox ResidentialLikeCarpet_Text_GigiRelaxHere
	closemessage
	applymovement LOCALID_RESIDENTIAL_GIGI, ResidentialLikeCarpet_Movement_GigiMoveToPlayer
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_RESIDENTIAL_GIGI
	additem ITEM_SURFBOARD
	additem ITEM_MUSIC_PLAYER
	additem ITEM_FULL_RESTORE, 8
	additem ITEM_TOHO_ORB, 20
	setflag FLAG_BADGE01_GET
	setflag FLAG_BADGE02_GET
	setflag FLAG_BADGE03_GET
	setflag FLAG_BADGE04_GET
	setflag FLAG_BADGE05_GET
	setflag FLAG_BADGE06_GET
	setflag FLAG_BADGE07_GET
	setflag FLAG_BADGE08_GET
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_SYS_POKEDEX_GET
	givemon SPECIES_NORMAL_SANAE, 50, ITEM_BENTO_BOX, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
	givemon SPECIES_NORMAL_ALICE, 50, ITEM_ROCKY_HELMET, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
	givemon SPECIES_NORMAL_REISEN, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
	givemon SPECIES_NORMAL_REIMU, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
	givemon SPECIES_NORMAL_MARISA, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
	givemon SPECIES_NORMAL_SAKUYA, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
	playfanfare MUS_OBTAIN_ITEM
	message ResidentialLikeCarpet_Text_YouGotABunchOfStuff
	waitfanfare
	closemessage
	setspeakername gText_Gigi
	msgbox ResidentialLikeCarpet_Text_GigiTimeToFight
	closemessage
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceDown
	waitmovement 0
	setspeakername gText_Kronii
	msgbox ResidentialLikeCarpet_Text_KroniiHopeThisWorks
	closemessage
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, ResidentialLikeCarpet_Text_GigiSeeYoureStrong
	setspeakername gText_Gigi
	msgbox ResidentialLikeCarpet_Text_GigiSeeNatural
	closemessage
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox ResidentialLikeCarpet_Text_KroniiHopeThisWorks
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, ResidentialLikeCarpet_Text_GigiSeeYoureStrong
	setvar VAR_HOUSE_LIKE_CARPET_STATE, 1
	releaseall
	end


ResidentialLikeCarpet_Script_GigiKroniiIntro2::
	lockall
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	setspeakername gText_Kronii
	msgbox ResidentialLikeCarpet_Text_KroniiGigiWhatThe
	closemessage
	applymovement LOCALID_RESIDENTIAL_GIGI, Common_Movement_WalkInPlaceRight
	waitmovement 0
	setspeakername gText_Gigi
	msgbox ResidentialLikeCarpet_Text_GigiTalkingAbout
	closemessage
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	setspeakername gText_Kronii
	msgbox ResidentialLikeCarpet_Text_KroniiIRemember
	closemessage
	applymovement LOCALID_RESIDENTIAL_GIGI, Common_Movement_WalkInPlaceRight
	waitmovement 0
	setspeakername gText_Gigi
	msgbox ResidentialLikeCarpet_Text_GigiMakingStuffUp
	closemessage
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	setspeakername gText_Kronii
	msgbox ResidentialLikeCarpet_Text_KroniiPowerUpPunch
	closemessage
	applymovement LOCALID_RESIDENTIAL_GIGI, Common_Movement_WalkInPlaceRight
	waitmovement 0
	setspeakername gText_Gigi
	msgbox ResidentialLikeCarpet_Text_GigiInternet
	closemessage
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	setspeakername gText_Kronii
	msgbox ResidentialLikeCarpet_Text_KroniiNotSurprised
	closemessage
	applymovement LOCALID_RESIDENTIAL_GIGI, Common_Movement_WalkInPlaceRight
	waitmovement 0
	setspeakername gText_Gigi
	msgbox ResidentialLikeCarpet_Text_GigiFineIllGive
	closemessage
	applymovement LOCALID_RESIDENTIAL_GIGI, ResidentialLikeCarpet_Movement_GigiMoveToPlayer
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_RESIDENTIAL_GIGI
	additem ITEM_SURFBOARD
	additem ITEM_MUSIC_PLAYER
	additem ITEM_FULL_RESTORE, 8
	additem ITEM_TOHO_ORB, 20
	setflag FLAG_BADGE01_GET
	setflag FLAG_BADGE02_GET
	setflag FLAG_BADGE03_GET
	setflag FLAG_BADGE04_GET
	setflag FLAG_BADGE05_GET
	setflag FLAG_BADGE06_GET
	setflag FLAG_BADGE07_GET
	setflag FLAG_BADGE08_GET
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_SYS_POKEDEX_GET
	givemon SPECIES_NORMAL_SANAE, 50, ITEM_BENTO_BOX, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
	givemon SPECIES_NORMAL_ALICE, 50, ITEM_ROCKY_HELMET, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
	givemon SPECIES_NORMAL_REISEN, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
	givemon SPECIES_NORMAL_REIMU, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
	givemon SPECIES_NORMAL_MARISA, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
	givemon SPECIES_NORMAL_SAKUYA, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
	playfanfare MUS_OBTAIN_ITEM
	message ResidentialLikeCarpet_Text_YouGotABunchOfStuff
	waitfanfare
	closemessage
	setspeakername gText_Gigi
	msgbox ResidentialLikeCarpet_Text_GigiFightMe
	closemessage
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceDown
	waitmovement 0
	setspeakername gText_Kronii
	msgbox ResidentialLikeCarpet_Text_KroniiKnowYoullWin
	closemessage
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, ResidentialLikeCarpet_Text_GigiSeeYoureStrong
	setvar VAR_HOUSE_LIKE_CARPET_STATE, 1
	releaseall
	end


ResidentialLikeCarpet_Script_GigiKroniiIntro3::
	lockall
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	setspeakername gText_Kronii
	msgbox ResidentialLikeCarpet_Text_KroniiNoGigiRemember
	closemessage
	setspeakername gText_Gigi
	msgbox ResidentialLikeCarpet_Text_GigiPlayLeague
	closemessage
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	setspeakername gText_Kronii
	msgbox ResidentialLikeCarpet_Text_KroniiNotInvitation
	closemessage
	applymovement LOCALID_RESIDENTIAL_GIGI, Common_Movement_WalkInPlaceRight
	waitmovement 0
	setspeakername gText_Gigi
	msgbox ResidentialLikeCarpet_Text_GigiOkBet
	closemessage
	applymovement LOCALID_RESIDENTIAL_GIGI, ResidentialLikeCarpet_Movement_GigiMoveToPlayer
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceDown
	waitmovement LOCALID_RESIDENTIAL_GIGI
	additem ITEM_SURFBOARD
	additem ITEM_MUSIC_PLAYER
	additem ITEM_FULL_RESTORE, 8
	additem ITEM_TOHO_ORB, 20
	setflag FLAG_BADGE01_GET
	setflag FLAG_BADGE02_GET
	setflag FLAG_BADGE03_GET
	setflag FLAG_BADGE04_GET
	setflag FLAG_BADGE05_GET
	setflag FLAG_BADGE06_GET
	setflag FLAG_BADGE07_GET
	setflag FLAG_BADGE08_GET
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_SYS_POKEDEX_GET
	givemon SPECIES_NORMAL_SANAE, 50, ITEM_BENTO_BOX, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
	givemon SPECIES_NORMAL_ALICE, 50, ITEM_ROCKY_HELMET, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
	givemon SPECIES_NORMAL_REISEN, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
	givemon SPECIES_NORMAL_REIMU, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
	givemon SPECIES_NORMAL_MARISA, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
	givemon SPECIES_NORMAL_SAKUYA, 50, ITEM_SITRUS_BERRY, 1, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31
	playfanfare MUS_OBTAIN_ITEM
	message ResidentialLikeCarpet_Text_YouGotABunchOfStuff
	waitfanfare
	closemessage
	setspeakername gText_Gigi
	msgbox ResidentialLikeCarpet_Text_GigiLosePlayLeague
	closemessage
	applymovement LOCALID_RESIDENTIAL_KRONII, Common_Movement_WalkInPlaceDown
	waitmovement 0
	setspeakername gText_Kronii
	msgbox ResidentialLikeCarpet_Text_KroniiPleaseDontFail
	closemessage
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, ResidentialLikeCarpet_Text_GigiSeeYoureStrong
	setvar VAR_HOUSE_LIKE_CARPET_STATE, 1
	releaseall
	end


ResidentialLikeCarpet_Movement_GigiMoveToPlayer:
	walk_down
	walk_in_place_down
	step_end

ResidentialLikeCarpet_Movement_KroniiMoveToPlayer:
	walk_down
	walk_down
	walk_in_place_left
	step_end

ResidentialLikeCarpet_Text_KroniiSoThisIsTrainer::
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_NORMAL}So this is the trainer we're deciding to\n"
	.string "have solve our problem, huh?$"

ResidentialLikeCarpet_Text_GigiSomeRandomTrainer::
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Oh, them? I just brought some random\n"
	.string "trainer who was destined to be champion\l"
	.string "in another region.$"

ResidentialLikeCarpet_Text_KroniiWhatMakesYouThink::
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_NORMAL}And what made you think that?$"

ResidentialLikeCarpet_Text_GigiMayHavePokedAround::
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Well, I make have poked a bit in your\n"
	.string "realm and saw some champion in the\l"
	.string "future.$"

ResidentialLikeCarpet_Text_KroniiHowDangerous::
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}Gigi, what the frick? You know how\n"
	.string "dangerous it is to see in the future\l"
	.string "like that?$"

ResidentialLikeCarpet_Text_GigiYouGotAnyOtherIdeas::
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Oh yeah? You got any brighter ideas to\n"
	.string "solve this problem in this little island\l"
	.string "here?$"

ResidentialLikeCarpet_Text_KroniiWellNo::
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}Well, no, not at the moment at least,\n"
	.string "but-$"

ResidentialLikeCarpet_Text_GigiBesidesGrabbedAll::
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Besides, we didn't just gather these\n"
	.string "spare badges and money for nothing\l"
	.string "here.$"

ResidentialLikeCarpet_Text_KroniiOhMyGod::
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}Oh my god, Gigi, you're not just gonna\n"
	.string "give it away to this trainer who doesn't\l"
	.string "even have any experience yet, are you?$"

ResidentialLikeCarpet_Text_GigiNoWeFightThem::
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Well, no, we're gonna fight them as well\n"
	.string "to show how worthy they are of carrying\l"
	.string "such a team.$"

ResidentialLikeCarpet_Text_KroniiWorstIdeasEver::
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}Gigi, this is probably one of the worst\n"
	.string "ideas you've ever come up.$"

ResidentialLikeCarpet_Text_GigiRelaxHere::
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Relax, Kronii. You know what, {PLAYER},\n"
	.string "here, have absolutely everything you\l"
	.string "would ever want here.$"

ResidentialLikeCarpet_Text_YouGotABunchOfStuff::
	.string "You were handed a bunch of items and\n"
	.string "Puppets by Gigi.$"

ResidentialLikeCarpet_Text_GigiTimeToFight::
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Now, since you got everything you need,\n"
	.string "prepare to show your potential for\l"
	.string "battling now!$"

ResidentialLikeCarpet_Text_KroniiHopeThisWorks::
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}I hope this works Gigi, because I'm not\n"
	.string "gonna let this slide otherwise.$"

ResidentialLikeCarpet_Text_GigiSeeNatural::
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}See Kronii? They're a natural at this\n"
	.string "already!\p"
	.string "They can totally help us with what's\n"
	.string "going on here!$"

ResidentialLikeCarpet_Text_KroniiFineChallenge::
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}You know, this is certainly not what I\n"
	.string "hoped for today, but you show some\l"
	.string "potential there.\p"
	.string "I hope you know what you're getting\n"
	.string "yourself into.$"

ResidentialLikeCarpet_Text_GigiSeeYoureStrong::
	.string "See, you're pretty strong after all!$"

ResidentialLikeCarpet_Text_KroniiGigiWhatThe::
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}Gigi, what the hell, I could have sworn\n"
	.string "we did this thing before with the\l"
	.string "trainer here.$"

ResidentialLikeCarpet_Text_GigiTalkingAbout::
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}What are you talking about? We just met\n"
	.string "this trainer here and we're gonna give\l"
	.string "them stuff to fight us!$"

ResidentialLikeCarpet_Text_KroniiIRemember::
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}Didn't we do that already though? I\n"
	.string "remember we fought this trainer\l"
	.string "one-by-one here.$"

ResidentialLikeCarpet_Text_GigiMakingStuffUp::
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Yeah, like you remember Power-Up Punch\n"
	.string "not being a pulse move here as well!$"

ResidentialLikeCarpet_Text_KroniiPowerUpPunch::
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}Power-Up Punch isn't a pulse move\n"
	.string "though, it's a punching move, like the\l"
	.string "fists you have there.\p"
	.string "What even made you think that was the\n"
	.string "case?$"

ResidentialLikeCarpet_Text_GigiInternet::
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Something on the internet told me that\n"
	.string "the move was a pulse move.\p"
	.string "You get it by upgrading Laser Focus at\n"
	.string "Lv 7.$"

ResidentialLikeCarpet_Text_KroniiNotSurprised::
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}Why am I not surprised about what you\n"
	.string "said there?\p"
	.string "Regardless, it's not even remotely\n"
	.string "close to true at all about what you said\l"
	.string "there.$"

ResidentialLikeCarpet_Text_GigiFineIllGive::
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Fine, I'll give {PLAYER} here some\n"
	.string "stuff to challenge me with and\l"
	.string "hopefully win!\p"
	.string "I lose and you're gonna be correct here!$"

ResidentialLikeCarpet_Text_GigiFightMe::
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_HAPPY}Alright, feast your eyes on the victor\n"
	.string "here already, because I'm gonna beat\l"
	.string "you up here!$"

ResidentialLikeCarpet_Text_KroniiKnowYoullWin::
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_NORMAL}You know what? I've seen you battle\n"
	.string "before, you can certainly take care of\l"
	.string "her no problem, I believe in you.$"

ResidentialLikeCarpet_Text_KroniiNoGigiRemember::
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}No, hold on. This already happened at\n"
	.string "least once before, I'm confident on\l"
	.string "that.\p"
	.string "First time you just give {PLAYER} a\n"
	.string "bunch of stuff and we fight them\l"
	.string "one-on-one.\p"
	.string "Then the next, the same thing happened\n"
	.string "but with you saying that Power-Up\l"
	.string "Punch is a pulse move for some reason.\p"
	.string "My patience is running thin now, but at\n"
	.string "least there's no League of Legends in\l"
	.string "sight.$"

ResidentialLikeCarpet_Text_GigiPlayLeague::
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}Oh, so you do want to play League of\n"
	.string "Legends with me then, huh?\p"
	.string "Such a beautiful woman you are here to\n"
	.string "consider having time together later on\l"
	.string "with my favorite game!$"

ResidentialLikeCarpet_Text_KroniiNotInvitation::
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}That was not an invitation for me to\n"
	.string "play League.\p"
	.string "I'd rather stay far away from playing\n"
	.string "that game if I can, and I don't need you\l"
	.string "to ruin that.$"

ResidentialLikeCarpet_Text_GigiOkBet::
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_NORMAL}You know what, I bet if {PLAYER} here\n"
	.string "can beat me up here, you don't have to\l"
	.string "play League with me.\p"
	.string "I got the stuff ready for them anyways,\n"
	.string "I just gotta actually give it to them.$"

ResidentialLikeCarpet_Text_GigiLosePlayLeague::
	.string "{CREATE_MUGSHOT MUGSHOT_GIGI EMOTE_HAPPY}Let's make this clear, you lose, you\n"
	.string "have to play League with me as well.\p"
	.string "It's only fair with how much stuff I've\n"
	.string "given you so far.$"

ResidentialLikeCarpet_Text_KroniiPleaseDontFail::
	.string "{CREATE_MUGSHOT MUGSHOT_KRONII EMOTE_SERIOUS}Please don't fail me this time. We both\n"
	.string "know what our doom is if you don't at\l"
	.string "least try.$"
