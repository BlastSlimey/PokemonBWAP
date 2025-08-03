#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	StackPush(0x40CD);
	StackPushConst(1);
	StackCmp(4);
	StackPushFlag(742);
	StackPushConst(0);
	StackCmp(1);
	StackCmp(7);
	if (255) goto label0;
	ActorSetGPos(1, 18, 0, 13, 1);

label0: ;
	StackPushFlag(743);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label1;
	ActorSetGPos(2, 16, 0, 12, 3);

label1: ;
	StackPushFlag(744);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label2;
	ActorSetGPos(4, 20, 0, 8, 2);

label2: ;
	StackPushFlag(745);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label3;
	ActorSetGPos(3, 16, 0, 8, 3);

label3: ;
	StackPushFlag(746);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label4;
	ActorSetGPos(5, 20, 0, 12, 2);

label4: ;
	StackPushFlag(747);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label5;
	ActorSetGPos(6, 18, 0, 7, 1);

label5: ;
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();

	Movement m[] = { //1
		WalkUp, 5,
		TurnDown, 1,
	};


	Movement m[] = { //255
		WalkUp, 5,
	};

	ActorCmdWait();
	MsgActorEx(1024, 0, 1, 0, 0);
	MsgActorClose();

	Movement m[] = { //1
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 1, 1, 0, 0);
	MsgActorClose();

	Movement m[] = { //1
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 2, 1, 0, 0);
	InputWaitLast();
	MsgActorClose();
	WorkSetConst(0x40CD, 1);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	StackPush(0x40CD);
	StackPushConst(7);
	StackCmp(1);
	if (255) goto label6;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 8, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label7;

label6: ;
	StackPushFlag(2747);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label8;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorEx(1024, 4, 1, 0, 0);
	YesNoWin(0x8010);
	StackPush(0x8010);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label9;
	MsgWinCloseAll();
	WorkSetConst(0x8020, 0);
	PlayerGetDir(0x8020);
	WorkCmpConst(0x8020, 2);
	if (1) goto label10;
	goto label11;

label10: ;

	Movement m[] = { //255
		WalkDown, 1,
		WalkLeft, 1,
		TurnUp, 1,
	};


	Movement m[] = { //1
		TurnDown, 1,
	};

	ActorCmdWait();
	goto label12;

label11: ;
	WorkCmpConst(0x8020, 3);
	if (1) goto label13;
	goto label12;

label13: ;

	Movement m[] = { //255
		WalkDown, 1,
		WalkRight, 1,
		TurnUp, 1,
	};


	Movement m[] = { //1
		TurnDown, 1,
	};

	ActorCmdWait();
	goto label12;

label12: ;
	WorkCmpConst(0x40CD, 1);
	if (1) goto label14;
	goto label15;

label14: ;
	Routine0();
	Routine1();
	WorkAdd(0x40CD, 1);
	Routine2();
	Routine3();
	goto label16;

label15: ;
	WorkCmpConst(0x40CD, 2);
	if (1) goto label17;
	goto label18;

label17: ;
	Routine0();
	Routine4();
	Routine2();
	Routine5();
	WorkAdd(0x40CD, 1);
	Routine6();
	Routine7();
	goto label16;

label18: ;
	WorkCmpConst(0x40CD, 3);
	if (1) goto label19;
	goto label20;

label19: ;
	Routine0();
	Routine4();
	Routine2();
	Routine8();
	Routine6();
	Routine9();
	WorkAdd(0x40CD, 1);
	Routine10();
	Routine11();
	goto label16;

label20: ;
	WorkCmpConst(0x40CD, 4);
	if (1) goto label21;
	goto label22;

label21: ;
	Routine0();
	Routine4();
	Routine2();
	Routine8();
	Routine6();
	Routine12();
	Routine10();
	Routine13();
	WorkAdd(0x40CD, 1);
	Routine14();
	Routine15();
	goto label16;

label22: ;
	WorkCmpConst(0x40CD, 5);
	if (1) goto label23;
	goto label24;

label23: ;
	Routine0();
	Routine4();
	Routine2();
	Routine8();
	Routine6();
	Routine12();
	Routine10();
	Routine16();
	Routine14();
	Routine17();
	WorkAdd(0x40CD, 1);
	Routine18();
	WorkAdd(0x40CD, 1);
	Routine19();
	goto label16;

label24: ;
	WorkCmpConst(0x40CD, 6);
	if (1) goto label25;
	goto label16;

label25: ;
	Routine0();
	Routine4();
	Routine2();
	Routine8();
	Routine6();
	Routine12();
	Routine10();
	Routine16();
	Routine14();
	Routine20();
	Routine18();
	Routine21();
	WorkAdd(0x40CD, 1);
	goto label16;

label16: ;
	goto label26;

label9: ;
	MsgActorEx(1024, 6, 1, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();

label26: ;
	goto label7;

label8: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 3, 0, 0);
	InputWaitLast();
	MsgActorClose();

label7: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	StackPush(0x40CD);
	StackPushConst(7);
	StackCmp(1);
	if (255) goto label27;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 16, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label28;

label27: ;
	StackPushFlag(2747);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label29;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 15, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label28;

label29: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 13, 0, 0);
	InputWaitLast();
	MsgActorClose();

label28: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	StackPush(0x40CD);
	StackPushConst(7);
	StackCmp(1);
	if (255) goto label30;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 24, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label31;

label30: ;
	StackPushFlag(2747);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label32;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 23, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label31;

label32: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 21, 0, 0);
	InputWaitLast();
	MsgActorClose();

label31: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	StackPush(0x40CD);
	StackPushConst(7);
	StackCmp(1);
	if (255) goto label33;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 32, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label34;

label33: ;
	StackPushFlag(2747);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label35;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 30, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label34;

label35: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 29, 0, 0);
	InputWaitLast();
	MsgActorClose();

label34: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();
	StackPush(0x40CD);
	StackPushConst(7);
	StackCmp(1);
	if (255) goto label36;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 40, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label37;

label36: ;
	StackPushFlag(2747);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label38;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 38, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label37;

label38: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 37, 0, 0);
	InputWaitLast();
	MsgActorClose();

label37: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	StackPush(0x40CD);
	StackPushConst(7);
	StackCmp(1);
	if (255) goto label39;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 46, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label40;

label39: ;
	StackPushFlag(2747);
	StackPushConst(0);
	StackCmp(1);
	if (255) goto label41;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 45, 0, 0);
	InputWaitLast();
	MsgActorClose();
	goto label40;

label41: ;
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 44, 0, 0);
	InputWaitLast();
	MsgActorClose();

label40: ;
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	WorkSetConst(0x8021, 0);
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8023, 0);
	Random(0x8021, 7);
	if (0x8021 < 3)
	{
		if (0x8021 == 0)
		{
			WorkSetConst(0x8021, 0x0142);
		}
		else
		{
			if (0x8021 == 1)
			{
				WorkSetConst(0x8021, 0x0143);
			}
			else
			{
				WorkSetConst(0x8021, 0x00FC);
			}
		}
	}
	else
	{
		if (0x8021 < 5)
		{
			if (0x8021 == 3)
			{
				WorkSetConst(0x8021, 0x0144);
			}
			else
			{
				WorkSetConst(0x8021, 0x0219);
			}
			
		}
		else
		{
			if (0x8021 == 5)
			{
				WorkSetConst(0x8021, 0x00E2);
			}
			else
			{
				WorkSetConst(0x8021, 0x00E3);
			}
			
		}
	}
	Random(0x8022, 49000);
	WorkSetConst(0x8023, 1000);
	WorkAdd(0x8022, 0x8023);
	WordSetItemName(0, 0x8021);
	WordSetNumber(1, 0x8022, 5);
	MoneyWinDisp(31, 1);
	MsgActor(1024, 48, 0, 0);
	YesNoWin(0x8023);
	if (0x8023 == 0) {
		MoneyCheck(0x8023, 0x8022);
		if (0x8023 == 1)
		{
			MEPlay(1621);
			MoneySub(0x8022);
			MoneyWinUpdate();
			StackPush(0x8000);
			StackPush(0x8007);
			WorkGet(0x8000, 0x8021);
			WorkSet(0x8007, 2);
			RTCallGlobal(2815);
			StackPop(0x8007);
			StackPop(0x8000);
			MsgActor(1024, 51, 0, 0);
			MEWait();
		}
		else
		{
			MsgActorGendered(1024, 50, 49, 7, 0, 0);
		}
	}
	else
	{
		MsgActor(1024, 52, 0, 0);
	}
	MoneyWinClose();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	CallTrainerBattle(520, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label42;
	FlagSet(2747);
	CallTrainerBattleEnd();
	goto label43;

label42: ;
	FlagSet(2747);
	CallTrainerLose();

label43: ;
	VMReturn();
}

void Routine1()
{
	FlagReset(743);
	ActorAdd(2);
	MsgInfo(9, 1);
	MsgWinCloseAll();

	Movement m[] = { //255
		Exclaimation, 1,
		TurnDown, 1,
	};


	Movement m[] = { //1
		Exclaimation, 1,
		TurnDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //2
		WalkUp, 5,
		WalkLeft, 1,
		WalkUp, 1,
		TurnRight, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 10, 2, 0, 0);
	MsgWinCloseAll();
	VMReturn();
}

void Routine2()
{
	CallTrainerBattle(547, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label44;
	CallTrainerBattleEnd();
	goto label45;

label44: ;
	CallTrainerLose();

label45: ;
	VMReturn();
}

void Routine3()
{
	MsgActorEx(1024, 12, 2, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //2
		WalkLeft, 1,
		WalkUp, 2,
		TurnRight, 1,
	};

	ActorCmdWait();
	VMReturn();
}

void Routine4()
{
	MsgActorEx(1024, 7, 1, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //2
		WalkDown, 2,
		WalkRight, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 11, 2, 0, 0);
	MsgWinCloseAll();
	VMReturn();
}

void Routine5()
{
	FlagReset(744);
	ActorAdd(4);
	MsgInfo(17, 1);
	MsgWinCloseAll();

	Movement m[] = { //255
		Exclaimation, 1,
		TurnDown, 1,
	};


	Movement m[] = { //2
		Exclaimation, 1,
		TurnDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //4
		WalkUp, 5,
		WalkRight, 1,
		WalkUp, 1,
		TurnLeft, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnRight, 1,
	};


	Movement m[] = { //2
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 18, 4, 0, 0);
	MsgWinCloseAll();
	VMReturn();
}

void Routine6()
{
	CallTrainerBattle(524, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label46;
	CallTrainerBattleEnd();
	goto label47;

label46: ;
	CallTrainerLose();

label47: ;
	VMReturn();
}

void Routine7()
{
	MsgActorEx(1024, 20, 4, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //2
		WalkLeft, 1,
		WalkUp, 2,
		TurnRight, 1,
	};


	Movement m[] = { //4
		WalkRight, 2,
		WalkUp, 6,
		WalkLeft, 1,
	};

	ActorCmdWait();
	VMReturn();
}

void Routine8()
{
	MsgActorEx(1024, 14, 2, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //2
		WalkLeft, 1,
		WalkUp, 2,
		TurnRight, 1,
	};


	Movement m[] = { //4
		WalkRight, 1,
		WalkDown, 6,
		WalkLeft, 2,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 19, 4, 0, 0);
	MsgWinCloseAll();
	VMReturn();
}

void Routine9()
{
	FlagReset(745);
	ActorAdd(3);
	MsgInfo(25, 1);
	MsgWinCloseAll();

	Movement m[] = { //255
		Exclaimation, 1,
		TurnDown, 1,
	};


	Movement m[] = { //4
		Exclaimation, 1,
		TurnDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //3
		WalkUp, 5,
		WalkLeft, 1,
		WalkUp, 1,
		TurnRight, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnLeft, 1,
	};


	Movement m[] = { //4
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 26, 3, 0, 0);
	MsgWinCloseAll();
	VMReturn();
}

void Routine10()
{
	CallTrainerBattle(525, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label48;
	CallTrainerBattleEnd();
	goto label49;

label48: ;
	CallTrainerLose();

label49: ;
	VMReturn();
}

void Routine11()
{
	MsgActorEx(1024, 28, 3, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //4
		WalkRight, 2,
		WalkUp, 6,
		WalkLeft, 1,
	};


	Movement m[] = { //3
		WalkLeft, 2,
		WalkUp, 6,
		WalkRight, 1,
	};

	ActorCmdWait();
	VMReturn();
}

void Routine12()
{
	MsgActorEx(1024, 22, 4, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //4
		WalkRight, 2,
		WalkUp, 6,
		WalkLeft, 1,
	};


	Movement m[] = { //3
		WalkLeft, 1,
		WalkDown, 6,
		WalkRight, 2,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 27, 3, 0, 0);
	MsgWinCloseAll();
	VMReturn();
}

void Routine13()
{
	FlagReset(746);
	ActorAdd(5);
	MsgInfo(33, 1);
	MsgWinCloseAll();

	Movement m[] = { //255
		Exclaimation, 1,
		TurnDown, 1,
	};


	Movement m[] = { //3
		Exclaimation, 1,
		TurnDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //5
		WalkUp, 5,
		WalkRight, 1,
		WalkUp, 1,
		TurnLeft, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnRight, 1,
	};


	Movement m[] = { //3
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 34, 5, 0, 0);
	MsgWinCloseAll();
	VMReturn();
}

void Routine14()
{
	CallTrainerBattle(523, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label50;
	CallTrainerBattleEnd();
	goto label51;

label50: ;
	CallTrainerLose();

label51: ;
	VMReturn();
}

void Routine15()
{
	MsgActorEx(1024, 36, 5, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //5
		WalkRight, 1,
		WalkUp, 2,
		TurnLeft, 1,
	};


	Movement m[] = { //3
		WalkLeft, 2,
		WalkUp, 6,
		WalkRight, 1,
	};

	ActorCmdWait();
	VMReturn();
}

void Routine16()
{
	MsgActorEx(1024, 31, 3, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //3
		WalkLeft, 2,
		WalkUp, 6,
		WalkRight, 1,
	};


	Movement m[] = { //5
		WalkDown, 2,
		WalkLeft, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 35, 5, 0, 0);
	MsgWinCloseAll();
	VMReturn();
}

void Routine17()
{
	FlagReset(747);
	ActorAdd(6);
	MsgInfo(41, 1);
	MsgWinCloseAll();

	Movement m[] = { //255
		Exclaimation, 1,
		TurnDown, 1,
	};


	Movement m[] = { //5
		Exclaimation, 1,
		TurnDown, 1,
	};

	ActorCmdWait();

	Movement m[] = { //6
		WalkUp, 5,
		WalkLeft, 1,
		WalkUp, 1,
		TurnRight, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnLeft, 1,
	};


	Movement m[] = { //5
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 42, 6, 0, 0);
	MsgWinCloseAll();
	VMReturn();
}

void Routine18()
{
	CallTrainerBattle(548, 0, 0);
	TrainerBattleIsVictory(0x8010);
	StackPush(0x8010);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label52;
	CallTrainerBattleEnd();
	goto label53;

label52: ;
	CallTrainerLose();

label53: ;
	VMReturn();
}

void Routine19()
{
	MsgActorEx(1024, 47, 6, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //6
		WalkLeft, 2,
		WalkUp, 7,
		WalkRight, 3,
		TurnDown, 1,
	};


	Movement m[] = { //5
		WalkRight, 1,
		WalkUp, 2,
		TurnLeft, 1,
	};

	ActorCmdWait();
	VMReturn();
}

void Routine20()
{
	MsgActorEx(1024, 39, 5, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //5
		WalkRight, 1,
		WalkUp, 2,
		TurnLeft, 1,
	};


	Movement m[] = { //6
		WalkLeft, 3,
		WalkDown, 7,
		WalkRight, 2,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 43, 6, 0, 0);
	MsgWinCloseAll();
	VMReturn();
}

void Routine21()
{
	MsgActorEx(1024, 47, 6, 0, 0);
	MsgWinCloseAll();

	Movement m[] = { //6
		WalkLeft, 2,
		WalkUp, 7,
		WalkRight, 3,
		TurnDown, 1,
	};

	ActorCmdWait();
	VMReturn();
}
