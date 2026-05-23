CarpetTraining_MapScripts::
	.byte 0


CarpetTraining_EventScript_NoCoinCasePlay::
	msgbox CarpetTraining_Text_NoCoinCasePlay
	releaseall
	end


CarpetTraining_EventScript_CancelGame::
	hidecoinsbox 0, 5
	closemessage
	releaseall
	end


CarpetTraining_EventScript_CheckWinnings::
	compare GAME_CORNER_VAR_WINNINGS, 0
	goto_if_eq CarpetTraining_EventScript_CheckWinnings_2
	showcoinsbox 1, 1
	buffernumberstring STR_VAR_1, GAME_CORNER_VAR_WINNINGS
	msgbox CarpetTraining_Text_WinCoins
	waitmessage
	addcoins GAME_CORNER_VAR_WINNINGS
	setvar GAME_CORNER_VAR_WINNINGS, 0
	updatecoinsbox 1, 1
	playse SE_SHOP
	delay 40
	hidecoinsbox 0, 5
	closemessage
	releaseall
	end

CarpetTraining_EventScript_CheckWinnings_2:
	releaseall
	end


CarpetTraining_EventScript_Pachinko::
	lockall
	checkitem ITEM_COIN_CASE
	compare VAR_RESULT, 0
	goto_if_eq CarpetTraining_EventScript_Pachinko_2
CarpetTraining_EventScript_Pachinko_1:
	msgbox CarpetTraining_Text_Pachinko, MSGBOX_YESNO
	closemessage
	compare VAR_RESULT, NO
	goto_if_eq CarpetTraining_EventScript_Pachinko_5
CarpetTraining_EventScript_Pachinko_4:
	playbgm MUS_ZGS_DARK_BLOW_HOLE, FALSE
	callnative PlayPachinko
	waitstate
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	end

CarpetTraining_EventScript_Pachinko_2:
	goto CarpetTraining_EventScript_NoCoinCasePlay
	goto CarpetTraining_EventScript_Pachinko_1

CarpetTraining_EventScript_Pachinko_5:
	goto CarpetTraining_EventScript_CancelGame
	goto CarpetTraining_EventScript_Pachinko_4


CarpetTraining_EventScript_PinballSeel::
	lockall
	checkitem ITEM_COIN_CASE
	compare VAR_RESULT, 0
	goto_if_eq CarpetTraining_EventScript_PinballSeel_2
CarpetTraining_EventScript_PinballSeel_1:
	checkcoins VAR_TEMP_2
	compare VAR_TEMP_2, 25
	goto_if_lt CarpetTraining_EventScript_PinballSeel_5
CarpetTraining_EventScript_PinballSeel_4:
	showcoinsbox 1, 1
	msgbox CarpetTraining_Text_Pinball, MSGBOX_YESNO
	closemessage
	compare VAR_RESULT, NO
	goto_if_eq CarpetTraining_EventScript_PinballSeel_8
CarpetTraining_EventScript_PinballSeel_7:
	removecoins 25
	updatecoinsbox 1, 1
	playse SE_SHOP
	delay 40
	hidecoinsbox 0, 5
	playbgm MUS_CASINO_PLUS_9, FALSE
	callnative PlaySeelPinballGame
	waitstate
	savebgm MUS_DUMMY
	fadedefaultbgm
	goto CarpetTraining_EventScript_CheckWinnings
	return

CarpetTraining_EventScript_PinballSeel_2:
	goto CarpetTraining_EventScript_NoCoinCasePlay
	goto CarpetTraining_EventScript_PinballSeel_1

CarpetTraining_EventScript_PinballSeel_5:
	goto CarpetTraining_EventScript_PinballNotEnough
	goto CarpetTraining_EventScript_PinballSeel_4

CarpetTraining_EventScript_PinballSeel_8:
	goto CarpetTraining_EventScript_CancelGame
	goto CarpetTraining_EventScript_PinballSeel_7


CarpetTraining_EventScript_PinballNotEnough::
	msgbox CarpetTraining_Text_PinballNotEnough
	releaseall
	end


CarpetTraining_EventScript_Snake::
	lockall
	checkitem ITEM_COIN_CASE
	compare VAR_RESULT, 0
	goto_if_eq CarpetTraining_EventScript_Snake_2
CarpetTraining_EventScript_Snake_1:
	checkcoins VAR_TEMP_2
	compare VAR_TEMP_2, 25
	goto_if_lt CarpetTraining_EventScript_Snake_5
CarpetTraining_EventScript_Snake_4:
	showcoinsbox 1, 1
	msgbox CarpetTraining_Text_Snake, MSGBOX_YESNO
	closemessage
	compare VAR_RESULT, NO
	goto_if_eq CarpetTraining_EventScript_Snake_8
CarpetTraining_EventScript_Snake_7:
	removecoins 25
	updatecoinsbox 1, 1
	playse SE_SHOP
	delay 40
	hidecoinsbox 0, 5
	playbgm MUS_NONE, FALSE
	special StartSnake
	savebgm MUS_DUMMY
	fadedefaultbgm
	goto CarpetTraining_EventScript_CheckWinnings
	return

CarpetTraining_EventScript_Snake_2:
	goto CarpetTraining_EventScript_NoCoinCasePlay
	goto CarpetTraining_EventScript_Snake_1

CarpetTraining_EventScript_Snake_5:
	goto CarpetTraining_EventScript_SnakeNotEnough
	goto CarpetTraining_EventScript_Snake_4

CarpetTraining_EventScript_Snake_8:
	goto CarpetTraining_EventScript_CancelGame
	goto CarpetTraining_EventScript_Snake_7


CarpetTraining_EventScript_SnakeNotEnough::
	msgbox CarpetTraining_Text_SnakeNotEnough
	releaseall
	end


CarpetTraining_EventScript_FlappyBird::
	lockall
	checkitem ITEM_COIN_CASE
	compare VAR_RESULT, 0
	goto_if_eq CarpetTraining_EventScript_FlappyBird_2
CarpetTraining_EventScript_FlappyBird_1:
	checkcoins VAR_TEMP_2
	compare VAR_TEMP_2, 25
	goto_if_lt CarpetTraining_EventScript_FlappyBird_5
CarpetTraining_EventScript_FlappyBird_4:
	showcoinsbox 1, 1
	msgbox CarpetTraining_Text_Bird, MSGBOX_YESNO
	closemessage
	compare VAR_RESULT, NO
	goto_if_eq CarpetTraining_EventScript_FlappyBird_8
CarpetTraining_EventScript_FlappyBird_7:
	removecoins 25
	updatecoinsbox 1, 1
	playse SE_SHOP
	delay 40
	hidecoinsbox 0, 5
	playbgm MUS_NONE, FALSE
	special StartFlappyBird
	savebgm MUS_DUMMY
	fadedefaultbgm
	goto CarpetTraining_EventScript_CheckWinnings
	return

CarpetTraining_EventScript_FlappyBird_2:
	goto CarpetTraining_EventScript_NoCoinCasePlay
	goto CarpetTraining_EventScript_FlappyBird_1

CarpetTraining_EventScript_FlappyBird_5:
	goto CarpetTraining_EventScript_FlappyBirdNotEnough
	goto CarpetTraining_EventScript_FlappyBird_4

CarpetTraining_EventScript_FlappyBird_8:
	goto CarpetTraining_EventScript_CancelGame
	goto CarpetTraining_EventScript_FlappyBird_7


CarpetTraining_EventScript_FlappyBirdNotEnough::
	msgbox CarpetTraining_Text_BirdNotEnough
	releaseall
	end


CarpetTraining_EventScript_BlockStacker::
	lockall
	checkitem ITEM_COIN_CASE
	compare VAR_RESULT, 0
	goto_if_eq CarpetTraining_EventScript_BlockStacker_2
CarpetTraining_EventScript_BlockStacker_1:
	checkcoins VAR_TEMP_2
	compare VAR_TEMP_2, 25
	goto_if_lt CarpetTraining_EventScript_BlockStacker_5
CarpetTraining_EventScript_BlockStacker_4:
	showcoinsbox 1, 1
	msgbox CarpetTraining_Text_Block, MSGBOX_YESNO
	closemessage
	compare VAR_RESULT, NO
	goto_if_eq CarpetTraining_EventScript_BlockStacker_8
CarpetTraining_EventScript_BlockStacker_7:
	removecoins 25
	updatecoinsbox 1, 1
	playse SE_SHOP
	delay 40
	hidecoinsbox 0, 5
	playbgm MUS_CASINO_PLUS_1, FALSE
	special StartBlockStacker
	savebgm MUS_DUMMY
	fadedefaultbgm
	goto CarpetTraining_EventScript_CheckWinnings
	return

CarpetTraining_EventScript_BlockStacker_2:
	goto CarpetTraining_EventScript_NoCoinCasePlay
	goto CarpetTraining_EventScript_BlockStacker_1

CarpetTraining_EventScript_BlockStacker_5:
	goto CarpetTraining_EventScript_BlockStackerNotEnough
	goto CarpetTraining_EventScript_BlockStacker_4

CarpetTraining_EventScript_BlockStacker_8:
	goto CarpetTraining_EventScript_CancelGame
	goto CarpetTraining_EventScript_BlockStacker_7


CarpetTraining_EventScript_BlockStackerNotEnough::
	msgbox CarpetTraining_Text_BlockNotEnough
	releaseall
	end


CarpetTraining_EventScript_VoltorbFlip::
	lockall
	checkitem ITEM_COIN_CASE
	compare VAR_RESULT, 0
	goto_if_eq CarpetTraining_EventScript_VoltorbFlip_2
CarpetTraining_EventScript_VoltorbFlip_1:
	checkcoins VAR_TEMP_2
	compare VAR_TEMP_2, 50
	goto_if_lt CarpetTraining_EventScript_VoltorbFlip_5
CarpetTraining_EventScript_VoltorbFlip_4:
	msgbox CarpetTraining_Text_VoltorbFlip, MSGBOX_YESNO
	closemessage
	compare VAR_RESULT, NO
	goto_if_eq CarpetTraining_EventScript_VoltorbFlip_8
CarpetTraining_EventScript_VoltorbFlip_7:
	removecoins 50
	updatecoinsbox 1, 1
	playse SE_SHOP
	delay 40
	playbgm MUS_HGSS_CASINO, FALSE
	setvar GAME_CORNER_VAR_WINNINGS, 0
	special Special_ViewVoltorbFlip
	compare VAR_RESULT, 1
	goto_if_eq CarpetTraining_EventScript_VoltorbFlip_11
CarpetTraining_EventScript_VoltorbFlip_10:
	savebgm MUS_DUMMY
	fadedefaultbgm
	msgbox VF_Come_Again_Text
	setvar GAME_CORNER_VAR_WINNINGS, 0
	releaseall
	end

CarpetTraining_EventScript_VoltorbFlip_2:
	goto CarpetTraining_EventScript_NoCoinCasePlay
	goto CarpetTraining_EventScript_VoltorbFlip_1

CarpetTraining_EventScript_VoltorbFlip_5:
	goto CarpetTraining_EventScript_VolorbFlipNotEnough
	goto CarpetTraining_EventScript_VoltorbFlip_4

CarpetTraining_EventScript_VoltorbFlip_8:
	goto CarpetTraining_EventScript_CancelGame
	goto CarpetTraining_EventScript_VoltorbFlip_7

CarpetTraining_EventScript_VoltorbFlip_11:
	goto CarpetTraining_EventScript_VoltorbFlipGoAgain
	goto CarpetTraining_EventScript_VoltorbFlip_10


CarpetTraining_EventScript_VoltorbFlipGoAgain::
	showcoinsbox 1, 1
	buffernumberstring STR_VAR_1, GAME_CORNER_VAR_WINNINGS
	msgbox CarpetTraining_Text_WinCoinsVoltorbFlip, MSGBOX_YESNO
	closemessage
	compare VAR_RESULT, NO
	goto_if_eq CarpetTraining_EventScript_VoltorbFlipGoAgain_2
CarpetTraining_EventScript_VoltorbFlipGoAgain_1:
	hidecoinsbox 0, 5
	special Special_ViewVoltorbFlip
	compare VAR_RESULT, TRUE
	goto_if_eq CarpetTraining_EventScript_VoltorbFlipGoAgain_5
CarpetTraining_EventScript_VoltorbFlipGoAgain_4:
	savebgm MUS_DUMMY
	fadedefaultbgm
	msgbox VF_Come_Again_Text
	setvar GAME_CORNER_VAR_WINNINGS, 0
	releaseall
	end

CarpetTraining_EventScript_VoltorbFlipGoAgain_2:
	goto CarpetTraining_EventScript_VoltorbFlipGetWinnings
	goto CarpetTraining_EventScript_VoltorbFlipGoAgain_1

CarpetTraining_EventScript_VoltorbFlipGoAgain_5:
	goto CarpetTraining_EventScript_VoltorbFlipGoAgain
	goto CarpetTraining_EventScript_VoltorbFlipGoAgain_4


CarpetTraining_EventScript_VoltorbFlipGetWinnings::
	addcoins GAME_CORNER_VAR_WINNINGS
	setvar GAME_CORNER_VAR_WINNINGS, 0
	setvar FLIP_VAR_LEVEL, 0
	updatecoinsbox 1, 1
	playse SE_SHOP
	savebgm MUS_DUMMY
	fadedefaultbgm
	delay 40
	hidecoinsbox 0, 5
	releaseall
	end


CarpetTraining_EventScript_VolorbFlipNotEnough::
	msgbox CarpetTraining_Text_FlipNotEnough
	releaseall
	end


CarpetTraining_EventScript_SlotMachineCommon::
	checkitem ITEM_COIN_CASE
	compare VAR_RESULT, 0
	goto_if_eq CarpetTraining_EventScript_SlotMachineCommon_2
CarpetTraining_EventScript_SlotMachineCommon_1:
	specialvar VAR_RESULT, GetRandomSlotMachineId
	playslotmachine_rg VAR_RESULT
	releaseall
	end

CarpetTraining_EventScript_SlotMachineCommon_2:
	goto CarpetTraining_EventScript_NoCoinCasePlay
	goto CarpetTraining_EventScript_SlotMachineCommon_1


CarpetTraining_EventScript_SlotMachine0::
	lockall
	setvar VAR_0x8004, 0
	goto CarpetTraining_EventScript_SlotMachineCommon
	return


CarpetTraining_EventScript_SlotMachine1::
	lockall
	setvar VAR_0x8004, 1
	goto CarpetTraining_EventScript_SlotMachineCommon
	return


CarpetTraining_EventScript_SlotMachine2::
	lockall
	setvar VAR_0x8004, 2
	goto CarpetTraining_EventScript_SlotMachineCommon
	return


CarpetTraining_EventScript_SlotMachine3::
	lockall
	setvar VAR_0x8004, 3
	goto CarpetTraining_EventScript_SlotMachineCommon
	return


CarpetTraining_EventScript_SlotMachine4::
	lockall
	setvar VAR_0x8004, 4
	goto CarpetTraining_EventScript_SlotMachineCommon
	return


CarpetTraining_EventScript_SlotMachine5::
	lockall
	setvar VAR_0x8004, 5
	goto CarpetTraining_EventScript_SlotMachineCommon
	return


CarpetTraining_EventScript_SlotMachine6::
	lockall
	setvar VAR_0x8004, 6
	goto CarpetTraining_EventScript_SlotMachineCommon
	return


CarpetTraining_EventScript_SlotMachine7::
	lockall
	setvar VAR_0x8004, 7
	goto CarpetTraining_EventScript_SlotMachineCommon
	return


CarpetTraining_EventScript_SlotMachine8::
	lockall
	setvar VAR_0x8004, 8
	goto CarpetTraining_EventScript_SlotMachineCommon
	return


CarpetTraining_EventScript_SlotMachine9::
	lockall
	setvar VAR_0x8004, 9
	goto CarpetTraining_EventScript_SlotMachineCommon
	return


CarpetTraining_EventScript_Gacha_Basic::
	lockall
	setvar VAR_0x8004, 1
	goto CarpetTraining_EventScript_GachaCommon
	return


CarpetTraining_EventScript_Gacha_Great::
	lockall
	setvar VAR_0x8004, 2
	goto CarpetTraining_EventScript_GachaCommon
	return


CarpetTraining_EventScript_Gacha_Ultra::
	lockall
	setvar VAR_0x8004, 3
	goto CarpetTraining_EventScript_GachaCommon
	return


CarpetTraining_EventScript_Gacha_Master::
	lockall
	setvar VAR_0x8004, 4
	goto CarpetTraining_EventScript_GachaCommon
	return


CarpetTraining_EventScript_GachaCommon::
	checkitem ITEM_COIN_CASE
	compare VAR_RESULT, 0
	goto_if_eq CarpetTraining_EventScript_GachaCommon_2
CarpetTraining_EventScript_GachaCommon_1:
	special StartGacha
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq CarpetTraining_EventScript_GachaCommon_5
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq CarpetTraining_EventScript_GachaCommon_8
	releaseall
	end

CarpetTraining_EventScript_GachaCommon_2:
	goto CarpetTraining_EventScript_NoCoinCasePlay
	goto CarpetTraining_EventScript_GachaCommon_1

CarpetTraining_EventScript_GachaCommon_5:
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq CarpetTraining_EventScript_GachaCommon_11
CarpetTraining_EventScript_GachaCommon_10:
	releaseall
	end

CarpetTraining_EventScript_GachaCommon_8:
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq CarpetTraining_EventScript_GachaCommon_14
CarpetTraining_EventScript_GachaCommon_13:
	call Common_EventScript_TransferredToPC
	releaseall
	end

CarpetTraining_EventScript_GachaCommon_11:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto CarpetTraining_EventScript_GachaCommon_10

CarpetTraining_EventScript_GachaCommon_14:
	call Common_EventScript_NameReceivedBoxMon
	goto CarpetTraining_EventScript_GachaCommon_13


CarpetTraining_EventScript_ATM::
	lockall
	message CarpetTraining_Text_ATMStart
	waitmessage
CarpetTraining_EventScript_ATM_2:
	dynmultipush CarpetTraining_Text_ATMCheckSavings, 0
	checkitem ITEM_COIN_CASE
	compare VAR_RESULT, 0
	goto_if_ne CarpetTraining_EventScript_ATM_5
CarpetTraining_EventScript_ATM_4:
	dynmultipush CarpetTraining_Text_ATMCancel, 2
	dynmultistack 0, 0, FALSE, 3, FALSE, 0, NULL
	compare VAR_RESULT, 1
	goto_if_gt CarpetTraining_EventScript_ATM_8
	switch VAR_RESULT
	case 0, CarpetTraining_EventScript_ATM_12
	case 1, CarpetTraining_EventScript_ATM_13
CarpetTraining_EventScript_ATM_10:
	message CarpetTraining_Text_ATMLoop
	waitmessage
	goto CarpetTraining_EventScript_ATM_2

CarpetTraining_EventScript_ATM_1:
	closemessage
	releaseall
	end

CarpetTraining_EventScript_ATM_5:
	dynmultipush CarpetTraining_Text_ATMPurchaseCoins, 1
	goto CarpetTraining_EventScript_ATM_4

CarpetTraining_EventScript_ATM_8:
	goto CarpetTraining_EventScript_ATM_1

CarpetTraining_EventScript_ATM_12:
	call CarpetTraining_EventScript_ATMSavings
	goto CarpetTraining_EventScript_ATM_10

CarpetTraining_EventScript_ATM_13:
	call CarpetTraining_EventScript_ATMCoins
	goto CarpetTraining_EventScript_ATM_10


CarpetTraining_EventScript_ATMSavings::
	message CarpetTraining_Text_ATMSavings
	waitmessage
	showbankbalancebox 0, 0
CarpetTraining_EventScript_ATMSavings_2:
	dynmultipush CarpetTraining_Text_ATMDeposit, 0
	dynmultipush CarpetTraining_Text_ATMWithdraw, 1
	dynmultipush CarpetTraining_Text_ATMCancel, 2
	dynmultistack 20, 0, FALSE, 3, FALSE, 0, NULL
	compare VAR_RESULT, 1
	goto_if_gt CarpetTraining_EventScript_ATMSavings_5
	switch VAR_RESULT
	case 0, CarpetTraining_EventScript_ATMSavings_9
	case 1, CarpetTraining_EventScript_ATMSavings_10
CarpetTraining_EventScript_ATMSavings_7:
	playse SE_SHOP
	showbankbalancebox 0, 0
	waitse
	msgbox CarpetTraining_Text_ATMSavingsUpdated
	message CarpetTraining_Text_ATMSavings
	waitmessage
	goto CarpetTraining_EventScript_ATMSavings_2

CarpetTraining_EventScript_ATMSavings_1:
	hidebankbalancebox
	return

CarpetTraining_EventScript_ATMSavings_5:
	goto CarpetTraining_EventScript_ATMSavings_1

CarpetTraining_EventScript_ATMSavings_9:
	hidebankbalancebox
	message CarpetTraining_Text_ATMTryDeposit
	waitmessage
	starttransaction 0
	goto CarpetTraining_EventScript_ATMSavings_7

CarpetTraining_EventScript_ATMSavings_10:
	hidebankbalancebox
	message CarpetTraining_Text_ATMTryWithdraw
	waitmessage
	starttransaction 1
	goto CarpetTraining_EventScript_ATMSavings_7


CarpetTraining_EventScript_ATMCoins::
	message CarpetTraining_Text_ATMTryPurchaseCoins
	waitmessage
	showmoneybox 0, 0
	showcoinsbox 1, 6
CarpetTraining_EventScript_ATMCoins_2:
	multichoicedefault 15, 0, MULTI_GAME_CORNER_COINS, 0, FALSE
	compare VAR_RESULT, 1
	goto_if_gt CarpetTraining_EventScript_ATMCoins_5
	switch VAR_RESULT
	case 0, CarpetTraining_EventScript_ATMCoins_9
	case 1, CarpetTraining_EventScript_ATMCoins_10
CarpetTraining_EventScript_ATMCoins_7:
	message CarpetTraining_Text_ATMTryPurchaseCoins
	waitmessage
	goto CarpetTraining_EventScript_ATMCoins_2

CarpetTraining_EventScript_ATMCoins_1:
	closemessage
	hidemoneybox
	hidecoinsbox 0, 5
	return

CarpetTraining_EventScript_ATMCoins_5:
	goto CarpetTraining_EventScript_ATMCoins_1

CarpetTraining_EventScript_ATMCoins_9:
	checkcoins VAR_TEMP_1
	compare_var_to_value VAR_TEMP_1, 9950
	goto_if_ge CarpetTraining_EventScript_ATMCoins_12
	checkmoney 1000
	compare VAR_RESULT, 0
	goto_if_eq CarpetTraining_EventScript_ATMCoins_18
	addcoins 50
	removemoney 1000
	updatemoneybox
	updatecoinsbox 1, 6
	playse SE_SHOP
	msgbox CarpetTraining_Text_ATMGetCoins
	goto CarpetTraining_EventScript_ATMCoins_7

CarpetTraining_EventScript_ATMCoins_10:
	checkcoins VAR_TEMP_1
	compare_var_to_value VAR_TEMP_1, 9500
	goto_if_ge CarpetTraining_EventScript_ATMCoins_15
	checkmoney 10000
	compare VAR_RESULT, 0
	goto_if_eq CarpetTraining_EventScript_ATMCoins_21
	addcoins 500
	removemoney 10000
	updatemoneybox
	updatecoinsbox 1, 6
	playse SE_SHOP
	msgbox CarpetTraining_Text_ATMGetCoins
	goto CarpetTraining_EventScript_ATMCoins_7

CarpetTraining_EventScript_ATMCoins_12:
	msgbox CarpetTraining_Text_ATMTooManyCoins
	goto CarpetTraining_EventScript_ATMCoins_7

CarpetTraining_EventScript_ATMCoins_15:
	msgbox CarpetTraining_Text_ATMTooManyCoins
	goto CarpetTraining_EventScript_ATMCoins_7

CarpetTraining_EventScript_ATMCoins_18:
	msgbox CarpetTraining_Text_ATMNotEnoughMoney
	goto CarpetTraining_EventScript_ATMCoins_7

CarpetTraining_EventScript_ATMCoins_21:
	msgbox CarpetTraining_Text_ATMNotEnoughMoney
	goto CarpetTraining_EventScript_ATMCoins_7


CarpetTraining_EventScript_Clerk1::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	coinmart CarpetTraining_Coinmart_1
	msgbox gText_PleaseComeAgain
	release
	end


CarpetTraining_EventScript_Clerk2::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	coinmart CarpetTraining_Coinmart_2
	msgbox gText_PleaseComeAgain
	release
	end


	.align 2
CarpetTraining_Coinmart_1:
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_LEMONADE
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_NONE

	.align 2
CarpetTraining_Coinmart_2:
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_LEMONADE
	.2byte ITEM_BERRY_JUICE
	.2byte ITEM_NONE

CarpetTraining_Text_ATMStart::
	.string "Welcome to the ATM.\n"
	.string "What would you like to do?$"

CarpetTraining_Text_ATMLoop::
	.string "What else would you like to\n"
	.string "do?$"

CarpetTraining_Text_ATMTryDeposit::
	.string "How much will you deposit?$"

CarpetTraining_Text_ATMTryWithdraw::
	.string "How much will you withdraw?$"

CarpetTraining_Text_ATMSavingsUpdated::
	.string "Your savings have been updated\n"
	.string "now.$"

CarpetTraining_Text_ATMSavings::
	.string "Here are your savings.\n"
	.string "What would you like to do?$"

CarpetTraining_Text_ATMPurchaseCoins::
	.string "Purchase Coins$"

CarpetTraining_Text_ATMCheckSavings::
	.string "Check Savings$"

CarpetTraining_Text_ATMDeposit::
	.string "Deposit$"

CarpetTraining_Text_ATMWithdraw::
	.string "Withdraw$"

CarpetTraining_Text_ATMCancel::
	.string "Cancel$"

CarpetTraining_Text_ATMTryPurchaseCoins::
	.string "How many Coins would you like\n"
	.string "to purchase?$"

CarpetTraining_Text_ATMGetCoins::
	.string "Here are your Coins, then.$"

CarpetTraining_Text_ATMTooManyCoins::
	.string "Your Coin Case is full…$"

CarpetTraining_Text_ATMNotEnoughMoney::
	.string "You don't have enough money\n"
	.string "for the conversion…$"

CarpetTraining_Text_NoCoinCasePlay::
	.string "You can't play if you don't have\n"
	.string "a Coin Case.$"

CarpetTraining_Text_WinCoins::
	.string "You won\n"
	.string "{STR_VAR_1} Coins!$"

CarpetTraining_Text_WinCoinsVoltorbFlip::
	.string "You've made {STR_VAR_1} Coins.\n"
	.string "Keep going?$"

CarpetTraining_Text_Pachinko::
	.string "A Dropspin Machine!\n"
	.string "It's 3 Coins per Ball.$"

CarpetTraining_Text_Pinball::
	.string "It's a Pinball Machine!\n"
	.string "It costs 25 Coins to play.$"

CarpetTraining_Text_Snake::
	.string "It's Snake Game!\p"
	.string "It costs 25 Coins to play.$"

CarpetTraining_Text_Bird::
	.string "It's Fairy Flap!\p"
	.string "It costs 25 Coins to play.$"

CarpetTraining_Text_Block::
	.string "It's Block Builder!\p"
	.string "It costs 25 Coins to play.$"

CarpetTraining_Text_VoltorbFlip::
	.string "It's Voltorb Flip!\p"
	.string "It costs 50 Coins to play.$"

CarpetTraining_Text_PinballNotEnough::
	.string "It's a Pinball Machine!\p"
	.string "You don't have enough Coins…$"

CarpetTraining_Text_SnakeNotEnough::
	.string "It's Snake Game!\p"
	.string "You don't have enough Coins…$"

CarpetTraining_Text_BirdNotEnough::
	.string "It's Fairy Flap!\p"
	.string "You don't have enough Coins…$"

CarpetTraining_Text_BlockNotEnough::
	.string "It's Block Builder!\p"
	.string "You don't have enough Coins…$"

CarpetTraining_Text_FlipNotEnough::
	.string "It's Voltorb Flip!\p"
	.string "You don't have enough Coins…$"
