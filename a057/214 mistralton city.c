#include "ScriptHeaders/ScriptCommandsBW1.h"
#include "ScriptHeaders/MovementCommands.h"

void Sequence0()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 29, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence1()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 30, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence2()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 31, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence3()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 32, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence4()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 33, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence5()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 34, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence6()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(43, 1);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence7()
{
	ActorPauseAll();
	CMD_13d();
	WorkSetConst(0x8022, 0);
	WorkSetConst(0x8023, 0);
	WorkSetConst(0x8024, 0);
	WorkSetConst(0x8025, 0);
	WorkSetConst(0x8026, 0);
	WorkSetConst(0x8027, 0);
	WorkSetConst(0x8028, 0);
	WorkSetConst(0x8029, 0);
	WorkSetConst(0x802A, 0);
	PlayerGetGPos(0x8025, 0x8026);
	WorkGet(0x8027, 0x8025);
	WorkSub(0x8027, 10);
	ActorSetGPos(7, 0x8027, 0, 298, 3);
	ActorSetGPos(6, 0x8027, 0, 297, 3);
	WordSetPlayerName(0);
	PokeDexIsRegist(0, 599, 0x8022);
	PokeDexGetCount(0, 0x8023);
	BGMPlay(1090);
	StackPush(0x8025);
	StackPushConst(100);
	StackCmp(1);
	if (255) goto label0;

	Movement m[] = { //6
		WalkRight, 13,
	};


	Movement m[] = { //7
		WalkRight, 12,
		TurnDown, 1,
	};

	goto label1;

label0: ;
	StackPush(0x8025);
	StackPushConst(101);
	StackCmp(1);
	if (255) goto label2;

	Movement m[] = { //6
		WalkRight, 12,
	};


	Movement m[] = { //7
		WalkRight, 11,
		TurnDown, 1,
	};

	goto label1;

label2: ;
	StackPush(0x8025);
	StackPushConst(102);
	StackCmp(1);
	if (255) goto label3;

	Movement m[] = { //6
		WalkRight, 11,
	};


	Movement m[] = { //7
		WalkRight, 10,
		TurnDown, 1,
	};

	goto label1;

label3: ;
	StackPush(0x8025);
	StackPushConst(103);
	StackCmp(1);
	if (255) goto label4;

	Movement m[] = { //6
		WalkRight, 10,
	};


	Movement m[] = { //7
		WalkRight, 9,
		TurnDown, 1,
	};

	goto label1;

label4: ;
	StackPush(0x8025);
	StackPushConst(104);
	StackCmp(1);
	if (255) goto label1;

	Movement m[] = { //6
		WalkRight, 9,
	};


	Movement m[] = { //7
		WalkRight, 8,
		TurnDown, 1,
	};


label1: ;
	ActorCmdWait();

	Movement m[] = { //7
		Exclaimation, 1,
	};

	VMSleep(16);

	Movement m[] = { //6
		TurnDown, 1,
	};

	ActorCmdWait();
	StackPush(0x8025);
	StackPushConst(100);
	StackCmp(1);
	if (255) goto label5;

	Movement m[] = { //7
		WalkLeft, 2,
		WalkDown, 3,
	};

	goto label6;

label5: ;
	StackPush(0x8025);
	StackPushConst(101);
	StackCmp(1);
	if (255) goto label7;

	Movement m[] = { //7
		WalkLeft, 1,
		WalkDown, 3,
	};

	goto label6;

label7: ;
	StackPush(0x8025);
	StackPushConst(102);
	StackCmp(1);
	if (255) goto label8;

	Movement m[] = { //7
		WalkDown, 3,
	};

	goto label6;

label8: ;
	StackPush(0x8025);
	StackPushConst(103);
	StackCmp(1);
	if (255) goto label9;

	Movement m[] = { //7
		WalkRight, 1,
		WalkDown, 3,
	};

	goto label6;

label9: ;
	StackPush(0x8025);
	StackPushConst(104);
	StackCmp(1);
	if (255) goto label6;

	Movement m[] = { //7
		WalkRight, 2,
		WalkDown, 3,
	};


label6: ;
	ActorCmdWait();
	MsgActorEx(1024, 0, 7, 0, 0);
	WordSetNumber(0, 0x8023, 3);
	MsgActorEx(1024, 1, 7, 0, 0);
	StackPush(0x8022);
	StackPushConst(1);
	StackCmp(1);
	if (255) goto label10;
	MsgActorEx(1024, 2, 7, 0, 0);
	goto label11;

label10: ;
	MsgActorEx(1024, 3, 7, 0, 0);

label11: ;

	Movement m[] = { //7
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 4, 7, 0, 0);
	MsgActorEx(1024, 5, 7, 0, 0);
	MsgActorClose();
	MEPlay(1303);
	WordSetPlayerName(0);
	MsgSystem(6, 0);
	MEWait();
	MsgWaitAdvance();
	MsgWinCloseAll();
	CMD_1d2(60, 1024, 7);
	DebugStack(0);
	VMNop();
	MsgActorClose();
	StackPush(0x8025);
	StackPushConst(100);
	StackCmp(1);
	if (255) goto label12;

	Movement m[] = { //6
		WalkLeft, 2,
		WalkDown, 4,
	};

	ActorCmdWait();

	Movement m[] = { //6
		TurnLeft, 1,
	};

	goto label13;

label12: ;
	StackPush(0x8025);
	StackPushConst(101);
	StackCmp(1);
	if (255) goto label14;

	Movement m[] = { //6
		WalkLeft, 1,
		WalkDown, 4,
	};

	ActorCmdWait();

	Movement m[] = { //6
		TurnLeft, 1,
	};

	goto label13;

label14: ;
	StackPush(0x8025);
	StackPushConst(102);
	StackCmp(1);
	if (255) goto label15;

	Movement m[] = { //6
		WalkDown, 4,
	};

	ActorCmdWait();

	Movement m[] = { //6
		TurnLeft, 1,
	};

	goto label13;

label15: ;
	StackPush(0x8025);
	StackPushConst(103);
	StackCmp(1);
	if (255) goto label16;

	Movement m[] = { //6
		WalkLeft, 1,
		WalkDown, 4,
	};

	ActorCmdWait();

	Movement m[] = { //6
		TurnRight, 1,
	};

	goto label13;

label16: ;
	StackPush(0x8025);
	StackPushConst(104);
	StackCmp(1);
	if (255) goto label13;

	Movement m[] = { //6
		WalkDown, 4,
	};

	ActorCmdWait();

	Movement m[] = { //6
		TurnRight, 1,
	};


label13: ;
	ActorCmdWait();
	MsgActorEx(1024, 8, 6, 0, 0);
	MsgActorClose();
	Routine0();
	WordSetPlayerName(0);
	StackPush(0x8025);
	StackPushConst(100);
	StackCmp(1);
	StackPush(0x8025);
	StackPushConst(101);
	StackCmp(1);
	StackPush(0x8025);
	StackPushConst(102);
	StackCmp(1);
	StackCmp(6);
	StackCmp(6);
	if (255) goto label17;
	MsgActorEx(1024, 9, 7, 3, 0);
	goto label18;

label17: ;
	MsgActorEx(1024, 9, 7, 5, 0);

label18: ;
	MsgActorClose();

	Movement m[] = { //6
		TurnDown, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 10, 6, 0, 0);

	Movement m[] = { //7
		TurnDown, 1,
	};

	MsgActorClose();
	ActorCmdWait();
	StackPush(0x8025);
	StackPushConst(100);
	StackCmp(1);
	StackPush(0x8025);
	StackPushConst(101);
	StackCmp(1);
	StackPush(0x8025);
	StackPushConst(102);
	StackCmp(1);
	StackCmp(6);
	StackCmp(6);
	if (255) goto label19;
	MsgActorEx(1024, 11, 7, 3, 0);
	goto label20;

label19: ;
	MsgActorEx(1024, 11, 7, 5, 0);

label20: ;
	MsgActorClose();
	Routine0();
	StackPush(0x8025);
	StackPushConst(100);
	StackCmp(1);
	StackPush(0x8025);
	StackPushConst(101);
	StackCmp(1);
	StackPush(0x8025);
	StackPushConst(102);
	StackCmp(1);
	StackCmp(6);
	StackCmp(6);
	if (255) goto label21;
	MsgActorEx(1024, 12, 7, 3, 0);
	goto label22;

label21: ;
	MsgActorEx(1024, 12, 7, 5, 0);

label22: ;
	MsgActorClose();
	Routine1();
	MsgActorEx(1024, 13, 6, 0, 0);
	MsgActorClose();
	StackPush(0x8025);
	StackPushConst(100);
	StackCmp(1);
	StackPush(0x8025);
	StackPushConst(101);
	StackCmp(1);
	StackPush(0x8025);
	StackPushConst(102);
	StackCmp(1);
	StackCmp(6);
	StackCmp(6);
	if (255) goto label23;
	MsgActorEx(1024, 14, 7, 3, 0);
	goto label24;

label23: ;
	MsgActorEx(1024, 14, 7, 5, 0);

label24: ;
	MsgActorClose();
	StackPush(0x8025);
	StackPushConst(100);
	StackCmp(1);
	if (255) goto label25;

	Movement m[] = { //6
		WalkRight, 1,
		TurnLeft, 1,
	};

	ActorCmdWait();
	ActorCmdWait();

	Movement m[] = { //7
		WalkRight, 1,
		WalkDown, 9,
	};

	goto label26;

label25: ;
	StackPush(0x8025);
	StackPushConst(101);
	StackCmp(1);
	if (255) goto label27;

	Movement m[] = { //7
		WalkLeft, 1,
		WalkDown, 9,
	};

	goto label26;

label27: ;
	StackPush(0x8025);
	StackPushConst(102);
	StackCmp(1);
	if (255) goto label28;

	Movement m[] = { //7
		WalkLeft, 1,
		WalkDown, 9,
	};

	goto label26;

label28: ;
	StackPush(0x8025);
	StackPushConst(103);
	StackCmp(1);
	if (255) goto label29;

	Movement m[] = { //7
		WalkRight, 1,
		WalkDown, 9,
	};

	goto label26;

label29: ;
	StackPush(0x8025);
	StackPushConst(104);
	StackCmp(1);
	if (255) goto label26;

	Movement m[] = { //6
		WalkLeft, 1,
		TurnRight, 1,
	};

	ActorCmdWait();
	ActorCmdWait();
	VMSleep(16);

	Movement m[] = { //7
		WalkLeft, 1,
		WalkDown, 9,
	};


label26: ;
	VMSleep(8);

	Movement m[] = { //6
		TurnDown, 1,
	};

	VMSleep(8);

	Movement m[] = { //255
		TurnDown, 1,
	};

	ActorCmdWait();
	BGMChangeMap();
	MsgActorEx(1024, 15, 6, 0, 0);
	MsgActorClose();

	Movement m[] = { //6
		WalkDown, 1,
	};

	ActorCmdWait();
	StackPush(0x8025);
	StackPushConst(100);
	StackCmp(1);
	if (255) goto label30;

	Movement m[] = { //6
		TurnLeft, 1,
	};

	VMSleep(8);

	Movement m[] = { //255
		TurnRight, 1,
	};

	goto label31;

label30: ;
	StackPush(0x8025);
	StackPushConst(101);
	StackCmp(1);
	if (255) goto label32;

	Movement m[] = { //6
		TurnLeft, 1,
	};

	VMSleep(8);

	Movement m[] = { //255
		TurnRight, 1,
	};

	goto label31;

label32: ;
	StackPush(0x8025);
	StackPushConst(102);
	StackCmp(1);
	if (255) goto label33;

	Movement m[] = { //6
		TurnLeft, 1,
	};

	VMSleep(8);

	Movement m[] = { //255
		TurnRight, 1,
	};

	goto label31;

label33: ;
	StackPush(0x8025);
	StackPushConst(103);
	StackCmp(1);
	if (255) goto label34;

	Movement m[] = { //6
		TurnRight, 1,
	};

	VMSleep(8);

	Movement m[] = { //255
		TurnLeft, 1,
	};

	goto label31;

label34: ;
	StackPush(0x8025);
	StackPushConst(104);
	StackCmp(1);
	if (255) goto label31;

	Movement m[] = { //6
		TurnRight, 1,
	};

	VMSleep(8);

	Movement m[] = { //255
		TurnLeft, 1,
	};


label31: ;
	ActorCmdWait();
	MsgActorGendered(1024, 16, 17, 6, 0, 0);
	MsgActorClose();

	Movement m[] = { //6
		TurnUp, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 18, 6, 0, 0);
	MsgActorClose();
	Routine1();
	MsgActorEx(1024, 19, 6, 0, 0);
	MsgActorClose();

	Movement m[] = { //6
		WalkUp, 5,
		WalkRight, 7,
	};

	VMSleep(16);

	Movement m[] = { //255
		TurnUp, 1,
	};

	ActorCmdWait();
	ActorDelete(6);
	ActorDelete(7);
	WorkSetConst(0x4099, 1);
	FlagSet(581);
	FlagReset(656);
	CMD_13e();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence8()
{
	ActorPauseAll();
	SEPlay(1351);
	FlagReset(668);
	ActorAdd(9);
	ActorAdd(10);
	ActorDelete(8);
	StackPush(0x8000);
	StackPush(0x8001);
	WorkSet(0x8000, 0x80);
	WorkSet(0x8001, 1);
	RTCallGlobal(2814);
	StackPop(0x8001);
	StackPop(0x8000);
	FlagSet(662);
	FlagSet(181);

	Movement m[] = { //255
		Exclaimation, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		TurnRight, 1,
	};

	ActorCmdWait();

	Movement m[] = { //10
		WalkLeft, 7,
	};


	Movement m[] = { //9
		FastWalkLeft, 7,
	};

	MsgActorEx(1024, 37, 9, 5, 0);
	MsgWinCloseAll();
	ActorCmdWait();
	MsgActorEx(1024, 38, 10, 6, 0);
	MsgWinCloseAll();
	VMSleep(32);
	MsgActorGendered(1024, 39, 40, 9, 1, 0);
	MsgWinCloseAll();
	MsgActorEx(1024, 41, 10, 6, 0);
	MsgWinCloseAll();
	VMSleep(16);
	MsgActorEx(1024, 42, 9, 5, 0);
	MsgWinCloseAll();

	Movement m[] = { //10
		WalkRight, 7,
	};


	Movement m[] = { //9
		WalkRight, 7,
	};

	ActorCmdWait();
	ActorDelete(10);
	ActorDelete(9);
	FlagSet(668);
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence9()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(44, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence10()
{
	ActorPauseAll();
	SEPlay(1351);
	MsgPlaceSign(45, 2);
	MsgPlaceSignClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence11()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActor(1024, 20, 0, 0);
	InputWaitLast();
	MsgActorClose();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence12()
{
	ActorPauseAll();
	CMD_13d();
	WorkSetConst(0x8020, 0);
	WorkSetConst(0x8021, 0);
	PokePartyGetMemberByType(0x8020, 2);
	PokePartyGetSpecies(0x8021, 0x8020);
	WordSetPokeSpecies(0, 0x8021);
	WordSetPlayerName(1);
	BGMPlay(1092);

	Movement m[] = { //255
		Exclaimation, 1,
	};

	ActorCmdWait();

	Movement m[] = { //255
		LookLeft, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 21, 13, 3, 0);
	MsgWinCloseAll();

	Movement m[] = { //13
		SlowWalkRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 22, 13, 3, 0);
	MsgWinCloseAll();
	VMSleep(32);
	MsgActorEx(1024, 23, 13, 3, 0);
	WordSetPokeSpecies(1, 0x8021);
	MsgActorEx(1024, 24, 13, 3, 0);
	MsgWinCloseAll();

	Movement m[] = { //13
		LockDirection, 1,
		SlowWalkLeft, 1,
		UnlockDirection, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 25, 13, 3, 0);
	MsgActorEx(1024, 26, 13, 3, 0);
	MsgWinCloseAll();

	Movement m[] = { //13
		TurnDown, 1,
	};

	ActorCmdWait();
	VMSleep(24);

	Movement m[] = { //13
		0xB6, 1,
	};

	VMSleep(32);
	MsgActorEx(1024, 27, 13, 3, 0);
	MsgWinCloseAll();
	ActorCmdWait();

	Movement m[] = { //13
		Wait8, 1,
		SlowTurnRight, 1,
	};

	ActorCmdWait();
	MsgActorEx(1024, 28, 13, 3, 0);
	MsgWinCloseAll();

	Movement m[] = { //13
		WalkDown, 2,
		WalkRight, 9,
	};


	Movement m[] = { //255
		Wait8, 5,
		TurnRight, 1,
	};

	ActorCmdWait();
	ActorDelete(13);
	BGMChangeMap();
	WorkSetConst(0x4099, 3);
	FlagSet(804);
	CMD_13e();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Sequence13()
{
	ActorPauseAll();
	SEPlay(1351);
	ActorSetEyeToEye();
	MsgActorVersioned(1024, 35, 36, 14, 0, 0);
	InputWaitLast();
	MsgWinCloseAll();
	RTFinishSubEvents();
	ActorUnlockAll();
	VMHalt();
}

void Routine0()
{
	StackPush(0x8025);
	StackPushConst(100);
	StackCmp(1);
	if (255) goto label35;

	Movement m[] = { //7
		TurnRight, 1,
	};

	goto label36;

label35: ;
	StackPush(0x8025);
	StackPushConst(101);
	StackCmp(1);
	if (255) goto label37;

	Movement m[] = { //7
		TurnRight, 1,
	};

	goto label36;

label37: ;
	StackPush(0x8025);
	StackPushConst(102);
	StackCmp(1);
	if (255) goto label38;

	Movement m[] = { //7
		TurnRight, 1,
	};

	goto label36;

label38: ;
	StackPush(0x8025);
	StackPushConst(103);
	StackCmp(1);
	if (255) goto label39;

	Movement m[] = { //7
		TurnLeft, 1,
	};

	goto label36;

label39: ;
	StackPush(0x8025);
	StackPushConst(104);
	StackCmp(1);
	if (255) goto label36;

	Movement m[] = { //7
		TurnLeft, 1,
	};


label36: ;
	ActorCmdWait();
	VMReturn();
}

void Routine1()
{
	StackPush(0x8025);
	StackPushConst(100);
	StackCmp(1);
	if (255) goto label40;

	Movement m[] = { //6
		TurnLeft, 1,
	};

	goto label41;

label40: ;
	StackPush(0x8025);
	StackPushConst(101);
	StackCmp(1);
	if (255) goto label42;

	Movement m[] = { //6
		TurnLeft, 1,
	};

	goto label41;

label42: ;
	StackPush(0x8025);
	StackPushConst(102);
	StackCmp(1);
	if (255) goto label43;

	Movement m[] = { //6
		TurnLeft, 1,
	};

	goto label41;

label43: ;
	StackPush(0x8025);
	StackPushConst(103);
	StackCmp(1);
	if (255) goto label44;

	Movement m[] = { //6
		TurnRight, 1,
	};

	goto label41;

label44: ;
	StackPush(0x8025);
	StackPushConst(104);
	StackCmp(1);
	if (255) goto label41;

	Movement m[] = { //6
		TurnRight, 1,
	};


label41: ;
	ActorCmdWait();
	VMReturn();
}
